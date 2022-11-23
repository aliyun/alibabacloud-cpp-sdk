// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ROS20190910_H_
#define ALIBABACLOUD_ROS20190910_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ROS20190910 {
class CancelUpdateStackRequest : public Darabonba::Model {
public:
  shared_ptr<string> cancelType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};

  CancelUpdateStackRequest() {}

  explicit CancelUpdateStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cancelType) {
      res["CancelType"] = boost::any(*cancelType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CancelType") != m.end() && !m["CancelType"].empty()) {
      cancelType = make_shared<string>(boost::any_cast<string>(m["CancelType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~CancelUpdateStackRequest() = default;
};
class CancelUpdateStackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelUpdateStackResponseBody() {}

  explicit CancelUpdateStackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelUpdateStackResponseBody() = default;
};
class CancelUpdateStackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelUpdateStackResponseBody> body{};

  CancelUpdateStackResponse() {}

  explicit CancelUpdateStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelUpdateStackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelUpdateStackResponseBody>(model1);
      }
    }
  }


  virtual ~CancelUpdateStackResponse() = default;
};
class ContinueCreateStackRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  ContinueCreateStackRequestParameters() {}

  explicit ContinueCreateStackRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~ContinueCreateStackRequestParameters() = default;
};
class ContinueCreateStackRequest : public Darabonba::Model {
public:
  shared_ptr<bool> dryRun{};
  shared_ptr<string> mode{};
  shared_ptr<long> parallelism{};
  shared_ptr<vector<ContinueCreateStackRequestParameters>> parameters{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<vector<string>> recreatingOptions{};
  shared_ptr<vector<string>> recreatingResources{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  ContinueCreateStackRequest() {}

  explicit ContinueCreateStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (parallelism) {
      res["Parallelism"] = boost::any(*parallelism);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (recreatingOptions) {
      res["RecreatingOptions"] = boost::any(*recreatingOptions);
    }
    if (recreatingResources) {
      res["RecreatingResources"] = boost::any(*recreatingResources);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Parallelism") != m.end() && !m["Parallelism"].empty()) {
      parallelism = make_shared<long>(boost::any_cast<long>(m["Parallelism"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<ContinueCreateStackRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContinueCreateStackRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<ContinueCreateStackRequestParameters>>(expect1);
      }
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("RecreatingOptions") != m.end() && !m["RecreatingOptions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RecreatingOptions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecreatingOptions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      recreatingOptions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RecreatingResources") != m.end() && !m["RecreatingResources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RecreatingResources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecreatingResources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      recreatingResources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~ContinueCreateStackRequest() = default;
};
class ContinueCreateStackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> stackId{};

  ContinueCreateStackResponseBody() {}

  explicit ContinueCreateStackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~ContinueCreateStackResponseBody() = default;
};
class ContinueCreateStackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ContinueCreateStackResponseBody> body{};

  ContinueCreateStackResponse() {}

  explicit ContinueCreateStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContinueCreateStackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContinueCreateStackResponseBody>(model1);
      }
    }
  }


  virtual ~ContinueCreateStackResponse() = default;
};
class CreateChangeSetRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  CreateChangeSetRequestParameters() {}

  explicit CreateChangeSetRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~CreateChangeSetRequestParameters() = default;
};
class CreateChangeSetRequestResourcesToImport : public Darabonba::Model {
public:
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> resourceIdentifier{};
  shared_ptr<string> resourceType{};

  CreateChangeSetRequestResourcesToImport() {}

  explicit CreateChangeSetRequestResourcesToImport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (resourceIdentifier) {
      res["ResourceIdentifier"] = boost::any(*resourceIdentifier);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("ResourceIdentifier") != m.end() && !m["ResourceIdentifier"].empty()) {
      resourceIdentifier = make_shared<string>(boost::any_cast<string>(m["ResourceIdentifier"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~CreateChangeSetRequestResourcesToImport() = default;
};
class CreateChangeSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeSetName{};
  shared_ptr<string> changeSetType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<vector<string>> notificationURLs{};
  shared_ptr<long> parallelism{};
  shared_ptr<vector<CreateChangeSetRequestParameters>> parameters{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replacementOption{};
  shared_ptr<vector<CreateChangeSetRequestResourcesToImport>> resourcesToImport{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> stackPolicyBody{};
  shared_ptr<string> stackPolicyDuringUpdateBody{};
  shared_ptr<string> stackPolicyDuringUpdateURL{};
  shared_ptr<string> stackPolicyURL{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateScratchId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<bool> usePreviousParameters{};

  CreateChangeSetRequest() {}

  explicit CreateChangeSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeSetName) {
      res["ChangeSetName"] = boost::any(*changeSetName);
    }
    if (changeSetType) {
      res["ChangeSetType"] = boost::any(*changeSetType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (notificationURLs) {
      res["NotificationURLs"] = boost::any(*notificationURLs);
    }
    if (parallelism) {
      res["Parallelism"] = boost::any(*parallelism);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replacementOption) {
      res["ReplacementOption"] = boost::any(*replacementOption);
    }
    if (resourcesToImport) {
      vector<boost::any> temp1;
      for(auto item1:*resourcesToImport){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcesToImport"] = boost::any(temp1);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    if (stackPolicyDuringUpdateBody) {
      res["StackPolicyDuringUpdateBody"] = boost::any(*stackPolicyDuringUpdateBody);
    }
    if (stackPolicyDuringUpdateURL) {
      res["StackPolicyDuringUpdateURL"] = boost::any(*stackPolicyDuringUpdateURL);
    }
    if (stackPolicyURL) {
      res["StackPolicyURL"] = boost::any(*stackPolicyURL);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (usePreviousParameters) {
      res["UsePreviousParameters"] = boost::any(*usePreviousParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeSetName") != m.end() && !m["ChangeSetName"].empty()) {
      changeSetName = make_shared<string>(boost::any_cast<string>(m["ChangeSetName"]));
    }
    if (m.find("ChangeSetType") != m.end() && !m["ChangeSetType"].empty()) {
      changeSetType = make_shared<string>(boost::any_cast<string>(m["ChangeSetType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("NotificationURLs") != m.end() && !m["NotificationURLs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NotificationURLs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NotificationURLs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notificationURLs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Parallelism") != m.end() && !m["Parallelism"].empty()) {
      parallelism = make_shared<long>(boost::any_cast<long>(m["Parallelism"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<CreateChangeSetRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateChangeSetRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<CreateChangeSetRequestParameters>>(expect1);
      }
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplacementOption") != m.end() && !m["ReplacementOption"].empty()) {
      replacementOption = make_shared<string>(boost::any_cast<string>(m["ReplacementOption"]));
    }
    if (m.find("ResourcesToImport") != m.end() && !m["ResourcesToImport"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcesToImport"].type()) {
        vector<CreateChangeSetRequestResourcesToImport> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcesToImport"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateChangeSetRequestResourcesToImport model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcesToImport = make_shared<vector<CreateChangeSetRequestResourcesToImport>>(expect1);
      }
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      stackPolicyBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyBody"]));
    }
    if (m.find("StackPolicyDuringUpdateBody") != m.end() && !m["StackPolicyDuringUpdateBody"].empty()) {
      stackPolicyDuringUpdateBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyDuringUpdateBody"]));
    }
    if (m.find("StackPolicyDuringUpdateURL") != m.end() && !m["StackPolicyDuringUpdateURL"].empty()) {
      stackPolicyDuringUpdateURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyDuringUpdateURL"]));
    }
    if (m.find("StackPolicyURL") != m.end() && !m["StackPolicyURL"].empty()) {
      stackPolicyURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyURL"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("UsePreviousParameters") != m.end() && !m["UsePreviousParameters"].empty()) {
      usePreviousParameters = make_shared<bool>(boost::any_cast<bool>(m["UsePreviousParameters"]));
    }
  }


  virtual ~CreateChangeSetRequest() = default;
};
class CreateChangeSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> changeSetId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> stackId{};

  CreateChangeSetResponseBody() {}

  explicit CreateChangeSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~CreateChangeSetResponseBody() = default;
};
class CreateChangeSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChangeSetResponseBody> body{};

  CreateChangeSetResponse() {}

  explicit CreateChangeSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateChangeSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChangeSetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChangeSetResponse() = default;
};
class CreateStackRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  CreateStackRequestParameters() {}

  explicit CreateStackRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~CreateStackRequestParameters() = default;
};
class CreateStackRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateStackRequestTags() {}

  explicit CreateStackRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateStackRequestTags() = default;
};
class CreateStackRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> createOption{};
  shared_ptr<string> deletionProtection{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<vector<string>> notificationURLs{};
  shared_ptr<long> parallelism{};
  shared_ptr<vector<CreateStackRequestParameters>> parameters{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> stackPolicyBody{};
  shared_ptr<string> stackPolicyURL{};
  shared_ptr<vector<CreateStackRequestTags>> tags{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateScratchId{};
  shared_ptr<string> templateScratchRegionId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};
  shared_ptr<long> timeoutInMinutes{};

  CreateStackRequest() {}

  explicit CreateStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (createOption) {
      res["CreateOption"] = boost::any(*createOption);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (notificationURLs) {
      res["NotificationURLs"] = boost::any(*notificationURLs);
    }
    if (parallelism) {
      res["Parallelism"] = boost::any(*parallelism);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    if (stackPolicyURL) {
      res["StackPolicyURL"] = boost::any(*stackPolicyURL);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    if (templateScratchRegionId) {
      res["TemplateScratchRegionId"] = boost::any(*templateScratchRegionId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CreateOption") != m.end() && !m["CreateOption"].empty()) {
      createOption = make_shared<string>(boost::any_cast<string>(m["CreateOption"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<string>(boost::any_cast<string>(m["DeletionProtection"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("NotificationURLs") != m.end() && !m["NotificationURLs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NotificationURLs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NotificationURLs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notificationURLs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Parallelism") != m.end() && !m["Parallelism"].empty()) {
      parallelism = make_shared<long>(boost::any_cast<long>(m["Parallelism"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<CreateStackRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateStackRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<CreateStackRequestParameters>>(expect1);
      }
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      stackPolicyBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyBody"]));
    }
    if (m.find("StackPolicyURL") != m.end() && !m["StackPolicyURL"].empty()) {
      stackPolicyURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyURL"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateStackRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateStackRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateStackRequestTags>>(expect1);
      }
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
    if (m.find("TemplateScratchRegionId") != m.end() && !m["TemplateScratchRegionId"].empty()) {
      templateScratchRegionId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchRegionId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
  }


  virtual ~CreateStackRequest() = default;
};
class CreateStackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> stackId{};

  CreateStackResponseBody() {}

  explicit CreateStackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~CreateStackResponseBody() = default;
};
class CreateStackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateStackResponseBody> body{};

  CreateStackResponse() {}

  explicit CreateStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateStackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateStackResponseBody>(model1);
      }
    }
  }


  virtual ~CreateStackResponse() = default;
};
class CreateStackGroupRequestAutoDeployment : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<bool> retainStacksOnAccountRemoval{};

  CreateStackGroupRequestAutoDeployment() {}

  explicit CreateStackGroupRequestAutoDeployment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (retainStacksOnAccountRemoval) {
      res["RetainStacksOnAccountRemoval"] = boost::any(*retainStacksOnAccountRemoval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("RetainStacksOnAccountRemoval") != m.end() && !m["RetainStacksOnAccountRemoval"].empty()) {
      retainStacksOnAccountRemoval = make_shared<bool>(boost::any_cast<bool>(m["RetainStacksOnAccountRemoval"]));
    }
  }


  virtual ~CreateStackGroupRequestAutoDeployment() = default;
};
class CreateStackGroupRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  CreateStackGroupRequestParameters() {}

  explicit CreateStackGroupRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~CreateStackGroupRequestParameters() = default;
};
class CreateStackGroupRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateStackGroupRequestTags() {}

  explicit CreateStackGroupRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateStackGroupRequestTags() = default;
};
class CreateStackGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> administrationRoleName{};
  shared_ptr<CreateStackGroupRequestAutoDeployment> autoDeployment{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> executionRoleName{};
  shared_ptr<vector<CreateStackGroupRequestParameters>> parameters{};
  shared_ptr<string> permissionModel{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<vector<CreateStackGroupRequestTags>> tags{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  CreateStackGroupRequest() {}

  explicit CreateStackGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (administrationRoleName) {
      res["AdministrationRoleName"] = boost::any(*administrationRoleName);
    }
    if (autoDeployment) {
      res["AutoDeployment"] = autoDeployment ? boost::any(autoDeployment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionRoleName) {
      res["ExecutionRoleName"] = boost::any(*executionRoleName);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (permissionModel) {
      res["PermissionModel"] = boost::any(*permissionModel);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdministrationRoleName") != m.end() && !m["AdministrationRoleName"].empty()) {
      administrationRoleName = make_shared<string>(boost::any_cast<string>(m["AdministrationRoleName"]));
    }
    if (m.find("AutoDeployment") != m.end() && !m["AutoDeployment"].empty()) {
      if (typeid(map<string, boost::any>) == m["AutoDeployment"].type()) {
        CreateStackGroupRequestAutoDeployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AutoDeployment"]));
        autoDeployment = make_shared<CreateStackGroupRequestAutoDeployment>(model1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionRoleName") != m.end() && !m["ExecutionRoleName"].empty()) {
      executionRoleName = make_shared<string>(boost::any_cast<string>(m["ExecutionRoleName"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<CreateStackGroupRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateStackGroupRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<CreateStackGroupRequestParameters>>(expect1);
      }
    }
    if (m.find("PermissionModel") != m.end() && !m["PermissionModel"].empty()) {
      permissionModel = make_shared<string>(boost::any_cast<string>(m["PermissionModel"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateStackGroupRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateStackGroupRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateStackGroupRequestTags>>(expect1);
      }
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~CreateStackGroupRequest() = default;
};
class CreateStackGroupShrinkRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  CreateStackGroupShrinkRequestParameters() {}

  explicit CreateStackGroupShrinkRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~CreateStackGroupShrinkRequestParameters() = default;
};
class CreateStackGroupShrinkRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateStackGroupShrinkRequestTags() {}

  explicit CreateStackGroupShrinkRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateStackGroupShrinkRequestTags() = default;
};
class CreateStackGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> administrationRoleName{};
  shared_ptr<string> autoDeploymentShrink{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> executionRoleName{};
  shared_ptr<vector<CreateStackGroupShrinkRequestParameters>> parameters{};
  shared_ptr<string> permissionModel{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<vector<CreateStackGroupShrinkRequestTags>> tags{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  CreateStackGroupShrinkRequest() {}

  explicit CreateStackGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (administrationRoleName) {
      res["AdministrationRoleName"] = boost::any(*administrationRoleName);
    }
    if (autoDeploymentShrink) {
      res["AutoDeployment"] = boost::any(*autoDeploymentShrink);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionRoleName) {
      res["ExecutionRoleName"] = boost::any(*executionRoleName);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (permissionModel) {
      res["PermissionModel"] = boost::any(*permissionModel);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdministrationRoleName") != m.end() && !m["AdministrationRoleName"].empty()) {
      administrationRoleName = make_shared<string>(boost::any_cast<string>(m["AdministrationRoleName"]));
    }
    if (m.find("AutoDeployment") != m.end() && !m["AutoDeployment"].empty()) {
      autoDeploymentShrink = make_shared<string>(boost::any_cast<string>(m["AutoDeployment"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionRoleName") != m.end() && !m["ExecutionRoleName"].empty()) {
      executionRoleName = make_shared<string>(boost::any_cast<string>(m["ExecutionRoleName"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<CreateStackGroupShrinkRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateStackGroupShrinkRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<CreateStackGroupShrinkRequestParameters>>(expect1);
      }
    }
    if (m.find("PermissionModel") != m.end() && !m["PermissionModel"].empty()) {
      permissionModel = make_shared<string>(boost::any_cast<string>(m["PermissionModel"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateStackGroupShrinkRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateStackGroupShrinkRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateStackGroupShrinkRequestTags>>(expect1);
      }
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~CreateStackGroupShrinkRequest() = default;
};
class CreateStackGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> stackGroupId{};

  CreateStackGroupResponseBody() {}

  explicit CreateStackGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
  }


  virtual ~CreateStackGroupResponseBody() = default;
};
class CreateStackGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateStackGroupResponseBody> body{};

  CreateStackGroupResponse() {}

  explicit CreateStackGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateStackGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateStackGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateStackGroupResponse() = default;
};
class CreateStackInstancesRequestDeploymentTargets : public Darabonba::Model {
public:
  shared_ptr<vector<string>> rdFolderIds{};

  CreateStackInstancesRequestDeploymentTargets() {}

  explicit CreateStackInstancesRequestDeploymentTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rdFolderIds) {
      res["RdFolderIds"] = boost::any(*rdFolderIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RdFolderIds") != m.end() && !m["RdFolderIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RdFolderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RdFolderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdFolderIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateStackInstancesRequestDeploymentTargets() = default;
};
class CreateStackInstancesRequestParameterOverrides : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  CreateStackInstancesRequestParameterOverrides() {}

  explicit CreateStackInstancesRequestParameterOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~CreateStackInstancesRequestParameterOverrides() = default;
};
class CreateStackInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<CreateStackInstancesRequestDeploymentTargets> deploymentTargets{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<string> operationDescription{};
  shared_ptr<map<string, boost::any>> operationPreferences{};
  shared_ptr<vector<CreateStackInstancesRequestParameterOverrides>> parameterOverrides{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> regionIds{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<long> timeoutInMinutes{};

  CreateStackInstancesRequest() {}

  explicit CreateStackInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deploymentTargets) {
      res["DeploymentTargets"] = deploymentTargets ? boost::any(deploymentTargets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferences) {
      res["OperationPreferences"] = boost::any(*operationPreferences);
    }
    if (parameterOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*parameterOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterOverrides"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeploymentTargets") != m.end() && !m["DeploymentTargets"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeploymentTargets"].type()) {
        CreateStackInstancesRequestDeploymentTargets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeploymentTargets"]));
        deploymentTargets = make_shared<CreateStackInstancesRequestDeploymentTargets>(model1);
      }
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OperationPreferences"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      operationPreferences = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ParameterOverrides") != m.end() && !m["ParameterOverrides"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterOverrides"].type()) {
        vector<CreateStackInstancesRequestParameterOverrides> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterOverrides"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateStackInstancesRequestParameterOverrides model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterOverrides = make_shared<vector<CreateStackInstancesRequestParameterOverrides>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
  }


  virtual ~CreateStackInstancesRequest() = default;
};
class CreateStackInstancesShrinkRequestParameterOverrides : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  CreateStackInstancesShrinkRequestParameterOverrides() {}

  explicit CreateStackInstancesShrinkRequestParameterOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~CreateStackInstancesShrinkRequestParameterOverrides() = default;
};
class CreateStackInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountIdsShrink{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> deploymentTargetsShrink{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationPreferencesShrink{};
  shared_ptr<vector<CreateStackInstancesShrinkRequestParameterOverrides>> parameterOverrides{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionIdsShrink{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<long> timeoutInMinutes{};

  CreateStackInstancesShrinkRequest() {}

  explicit CreateStackInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIdsShrink) {
      res["AccountIds"] = boost::any(*accountIdsShrink);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deploymentTargetsShrink) {
      res["DeploymentTargets"] = boost::any(*deploymentTargetsShrink);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferencesShrink) {
      res["OperationPreferences"] = boost::any(*operationPreferencesShrink);
    }
    if (parameterOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*parameterOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterOverrides"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionIdsShrink) {
      res["RegionIds"] = boost::any(*regionIdsShrink);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      accountIdsShrink = make_shared<string>(boost::any_cast<string>(m["AccountIds"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeploymentTargets") != m.end() && !m["DeploymentTargets"].empty()) {
      deploymentTargetsShrink = make_shared<string>(boost::any_cast<string>(m["DeploymentTargets"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      operationPreferencesShrink = make_shared<string>(boost::any_cast<string>(m["OperationPreferences"]));
    }
    if (m.find("ParameterOverrides") != m.end() && !m["ParameterOverrides"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterOverrides"].type()) {
        vector<CreateStackInstancesShrinkRequestParameterOverrides> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterOverrides"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateStackInstancesShrinkRequestParameterOverrides model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterOverrides = make_shared<vector<CreateStackInstancesShrinkRequestParameterOverrides>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      regionIdsShrink = make_shared<string>(boost::any_cast<string>(m["RegionIds"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
  }


  virtual ~CreateStackInstancesShrinkRequest() = default;
};
class CreateStackInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};
  shared_ptr<string> requestId{};

  CreateStackInstancesResponseBody() {}

  explicit CreateStackInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateStackInstancesResponseBody() = default;
};
class CreateStackInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateStackInstancesResponseBody> body{};

  CreateStackInstancesResponse() {}

  explicit CreateStackInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateStackInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateStackInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~CreateStackInstancesResponse() = default;
};
class CreateTemplateRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateTemplateRequestTags() {}

  explicit CreateTemplateRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateTemplateRequestTags() = default;
};
class CreateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<CreateTemplateRequestTags>> tags{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateURL{};

  CreateTemplateRequest() {}

  explicit CreateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateTemplateRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTemplateRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateTemplateRequestTags>>(expect1);
      }
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
  }


  virtual ~CreateTemplateRequest() = default;
};
class CreateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  CreateTemplateResponseBody() {}

  explicit CreateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateTemplateResponseBody() = default;
};
class CreateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTemplateResponseBody> body{};

  CreateTemplateResponse() {}

  explicit CreateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTemplateResponse() = default;
};
class CreateTemplateScratchRequestPreferenceParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  CreateTemplateScratchRequestPreferenceParameters() {}

  explicit CreateTemplateScratchRequestPreferenceParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~CreateTemplateScratchRequestPreferenceParameters() = default;
};
class CreateTemplateScratchRequestSourceResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> resourceTypeFilter{};

  CreateTemplateScratchRequestSourceResourceGroup() {}

  explicit CreateTemplateScratchRequestSourceResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTypeFilter) {
      res["ResourceTypeFilter"] = boost::any(*resourceTypeFilter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTypeFilter") != m.end() && !m["ResourceTypeFilter"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypeFilter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypeFilter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypeFilter = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateTemplateScratchRequestSourceResourceGroup() = default;
};
class CreateTemplateScratchRequestSourceResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  CreateTemplateScratchRequestSourceResources() {}

  explicit CreateTemplateScratchRequestSourceResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~CreateTemplateScratchRequestSourceResources() = default;
};
class CreateTemplateScratchRequestSourceTag : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> resourceTags{};
  shared_ptr<vector<string>> resourceTypeFilter{};

  CreateTemplateScratchRequestSourceTag() {}

  explicit CreateTemplateScratchRequestSourceTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceTags) {
      res["ResourceTags"] = boost::any(*resourceTags);
    }
    if (resourceTypeFilter) {
      res["ResourceTypeFilter"] = boost::any(*resourceTypeFilter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceTags") != m.end() && !m["ResourceTags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceTags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceTags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceTypeFilter") != m.end() && !m["ResourceTypeFilter"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypeFilter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypeFilter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypeFilter = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateTemplateScratchRequestSourceTag() = default;
};
class CreateTemplateScratchRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateTemplateScratchRequestTags() {}

  explicit CreateTemplateScratchRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateTemplateScratchRequestTags() = default;
};
class CreateTemplateScratchRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> executionMode{};
  shared_ptr<string> logicalIdStrategy{};
  shared_ptr<vector<CreateTemplateScratchRequestPreferenceParameters>> preferenceParameters{};
  shared_ptr<string> regionId{};
  shared_ptr<CreateTemplateScratchRequestSourceResourceGroup> sourceResourceGroup{};
  shared_ptr<vector<CreateTemplateScratchRequestSourceResources>> sourceResources{};
  shared_ptr<CreateTemplateScratchRequestSourceTag> sourceTag{};
  shared_ptr<vector<CreateTemplateScratchRequestTags>> tags{};
  shared_ptr<string> templateScratchType{};

  CreateTemplateScratchRequest() {}

  explicit CreateTemplateScratchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionMode) {
      res["ExecutionMode"] = boost::any(*executionMode);
    }
    if (logicalIdStrategy) {
      res["LogicalIdStrategy"] = boost::any(*logicalIdStrategy);
    }
    if (preferenceParameters) {
      vector<boost::any> temp1;
      for(auto item1:*preferenceParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PreferenceParameters"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceResourceGroup) {
      res["SourceResourceGroup"] = sourceResourceGroup ? boost::any(sourceResourceGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceResources) {
      vector<boost::any> temp1;
      for(auto item1:*sourceResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceResources"] = boost::any(temp1);
    }
    if (sourceTag) {
      res["SourceTag"] = sourceTag ? boost::any(sourceTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateScratchType) {
      res["TemplateScratchType"] = boost::any(*templateScratchType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionMode") != m.end() && !m["ExecutionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["ExecutionMode"]));
    }
    if (m.find("LogicalIdStrategy") != m.end() && !m["LogicalIdStrategy"].empty()) {
      logicalIdStrategy = make_shared<string>(boost::any_cast<string>(m["LogicalIdStrategy"]));
    }
    if (m.find("PreferenceParameters") != m.end() && !m["PreferenceParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["PreferenceParameters"].type()) {
        vector<CreateTemplateScratchRequestPreferenceParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PreferenceParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTemplateScratchRequestPreferenceParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        preferenceParameters = make_shared<vector<CreateTemplateScratchRequestPreferenceParameters>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceResourceGroup") != m.end() && !m["SourceResourceGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceResourceGroup"].type()) {
        CreateTemplateScratchRequestSourceResourceGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceResourceGroup"]));
        sourceResourceGroup = make_shared<CreateTemplateScratchRequestSourceResourceGroup>(model1);
      }
    }
    if (m.find("SourceResources") != m.end() && !m["SourceResources"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceResources"].type()) {
        vector<CreateTemplateScratchRequestSourceResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTemplateScratchRequestSourceResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceResources = make_shared<vector<CreateTemplateScratchRequestSourceResources>>(expect1);
      }
    }
    if (m.find("SourceTag") != m.end() && !m["SourceTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceTag"].type()) {
        CreateTemplateScratchRequestSourceTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceTag"]));
        sourceTag = make_shared<CreateTemplateScratchRequestSourceTag>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateTemplateScratchRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTemplateScratchRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateTemplateScratchRequestTags>>(expect1);
      }
    }
    if (m.find("TemplateScratchType") != m.end() && !m["TemplateScratchType"].empty()) {
      templateScratchType = make_shared<string>(boost::any_cast<string>(m["TemplateScratchType"]));
    }
  }


  virtual ~CreateTemplateScratchRequest() = default;
};
class CreateTemplateScratchShrinkRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateTemplateScratchShrinkRequestTags() {}

  explicit CreateTemplateScratchShrinkRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateTemplateScratchShrinkRequestTags() = default;
};
class CreateTemplateScratchShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> executionMode{};
  shared_ptr<string> logicalIdStrategy{};
  shared_ptr<string> preferenceParametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sourceResourceGroupShrink{};
  shared_ptr<string> sourceResourcesShrink{};
  shared_ptr<string> sourceTagShrink{};
  shared_ptr<vector<CreateTemplateScratchShrinkRequestTags>> tags{};
  shared_ptr<string> templateScratchType{};

  CreateTemplateScratchShrinkRequest() {}

  explicit CreateTemplateScratchShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionMode) {
      res["ExecutionMode"] = boost::any(*executionMode);
    }
    if (logicalIdStrategy) {
      res["LogicalIdStrategy"] = boost::any(*logicalIdStrategy);
    }
    if (preferenceParametersShrink) {
      res["PreferenceParameters"] = boost::any(*preferenceParametersShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceResourceGroupShrink) {
      res["SourceResourceGroup"] = boost::any(*sourceResourceGroupShrink);
    }
    if (sourceResourcesShrink) {
      res["SourceResources"] = boost::any(*sourceResourcesShrink);
    }
    if (sourceTagShrink) {
      res["SourceTag"] = boost::any(*sourceTagShrink);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateScratchType) {
      res["TemplateScratchType"] = boost::any(*templateScratchType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionMode") != m.end() && !m["ExecutionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["ExecutionMode"]));
    }
    if (m.find("LogicalIdStrategy") != m.end() && !m["LogicalIdStrategy"].empty()) {
      logicalIdStrategy = make_shared<string>(boost::any_cast<string>(m["LogicalIdStrategy"]));
    }
    if (m.find("PreferenceParameters") != m.end() && !m["PreferenceParameters"].empty()) {
      preferenceParametersShrink = make_shared<string>(boost::any_cast<string>(m["PreferenceParameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceResourceGroup") != m.end() && !m["SourceResourceGroup"].empty()) {
      sourceResourceGroupShrink = make_shared<string>(boost::any_cast<string>(m["SourceResourceGroup"]));
    }
    if (m.find("SourceResources") != m.end() && !m["SourceResources"].empty()) {
      sourceResourcesShrink = make_shared<string>(boost::any_cast<string>(m["SourceResources"]));
    }
    if (m.find("SourceTag") != m.end() && !m["SourceTag"].empty()) {
      sourceTagShrink = make_shared<string>(boost::any_cast<string>(m["SourceTag"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateTemplateScratchShrinkRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTemplateScratchShrinkRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateTemplateScratchShrinkRequestTags>>(expect1);
      }
    }
    if (m.find("TemplateScratchType") != m.end() && !m["TemplateScratchType"].empty()) {
      templateScratchType = make_shared<string>(boost::any_cast<string>(m["TemplateScratchType"]));
    }
  }


  virtual ~CreateTemplateScratchShrinkRequest() = default;
};
class CreateTemplateScratchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateScratchId{};

  CreateTemplateScratchResponseBody() {}

  explicit CreateTemplateScratchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
  }


  virtual ~CreateTemplateScratchResponseBody() = default;
};
class CreateTemplateScratchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTemplateScratchResponseBody> body{};

  CreateTemplateScratchResponse() {}

  explicit CreateTemplateScratchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTemplateScratchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTemplateScratchResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTemplateScratchResponse() = default;
};
class DeleteChangeSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeSetId{};
  shared_ptr<string> regionId{};

  DeleteChangeSetRequest() {}

  explicit DeleteChangeSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteChangeSetRequest() = default;
};
class DeleteChangeSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteChangeSetResponseBody() {}

  explicit DeleteChangeSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteChangeSetResponseBody() = default;
};
class DeleteChangeSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChangeSetResponseBody> body{};

  DeleteChangeSetResponse() {}

  explicit DeleteChangeSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteChangeSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChangeSetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChangeSetResponse() = default;
};
class DeleteStackRequest : public Darabonba::Model {
public:
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> retainAllResources{};
  shared_ptr<vector<string>> retainResources{};
  shared_ptr<string> stackId{};

  DeleteStackRequest() {}

  explicit DeleteStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (retainAllResources) {
      res["RetainAllResources"] = boost::any(*retainAllResources);
    }
    if (retainResources) {
      res["RetainResources"] = boost::any(*retainResources);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RetainAllResources") != m.end() && !m["RetainAllResources"].empty()) {
      retainAllResources = make_shared<bool>(boost::any_cast<bool>(m["RetainAllResources"]));
    }
    if (m.find("RetainResources") != m.end() && !m["RetainResources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RetainResources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RetainResources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      retainResources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~DeleteStackRequest() = default;
};
class DeleteStackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteStackResponseBody() {}

  explicit DeleteStackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteStackResponseBody() = default;
};
class DeleteStackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteStackResponseBody> body{};

  DeleteStackResponse() {}

  explicit DeleteStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteStackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteStackResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteStackResponse() = default;
};
class DeleteStackGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};

  DeleteStackGroupRequest() {}

  explicit DeleteStackGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
  }


  virtual ~DeleteStackGroupRequest() = default;
};
class DeleteStackGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteStackGroupResponseBody() {}

  explicit DeleteStackGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteStackGroupResponseBody() = default;
};
class DeleteStackGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteStackGroupResponseBody> body{};

  DeleteStackGroupResponse() {}

  explicit DeleteStackGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteStackGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteStackGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteStackGroupResponse() = default;
};
class DeleteStackInstancesRequestDeploymentTargets : public Darabonba::Model {
public:
  shared_ptr<vector<string>> rdFolderIds{};

  DeleteStackInstancesRequestDeploymentTargets() {}

  explicit DeleteStackInstancesRequestDeploymentTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rdFolderIds) {
      res["RdFolderIds"] = boost::any(*rdFolderIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RdFolderIds") != m.end() && !m["RdFolderIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RdFolderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RdFolderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdFolderIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteStackInstancesRequestDeploymentTargets() = default;
};
class DeleteStackInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<DeleteStackInstancesRequestDeploymentTargets> deploymentTargets{};
  shared_ptr<string> operationDescription{};
  shared_ptr<map<string, boost::any>> operationPreferences{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> regionIds{};
  shared_ptr<bool> retainStacks{};
  shared_ptr<string> stackGroupName{};

  DeleteStackInstancesRequest() {}

  explicit DeleteStackInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deploymentTargets) {
      res["DeploymentTargets"] = deploymentTargets ? boost::any(deploymentTargets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferences) {
      res["OperationPreferences"] = boost::any(*operationPreferences);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (retainStacks) {
      res["RetainStacks"] = boost::any(*retainStacks);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeploymentTargets") != m.end() && !m["DeploymentTargets"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeploymentTargets"].type()) {
        DeleteStackInstancesRequestDeploymentTargets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeploymentTargets"]));
        deploymentTargets = make_shared<DeleteStackInstancesRequestDeploymentTargets>(model1);
      }
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OperationPreferences"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      operationPreferences = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RetainStacks") != m.end() && !m["RetainStacks"].empty()) {
      retainStacks = make_shared<bool>(boost::any_cast<bool>(m["RetainStacks"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
  }


  virtual ~DeleteStackInstancesRequest() = default;
};
class DeleteStackInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountIdsShrink{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> deploymentTargetsShrink{};
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationPreferencesShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionIdsShrink{};
  shared_ptr<bool> retainStacks{};
  shared_ptr<string> stackGroupName{};

  DeleteStackInstancesShrinkRequest() {}

  explicit DeleteStackInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIdsShrink) {
      res["AccountIds"] = boost::any(*accountIdsShrink);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deploymentTargetsShrink) {
      res["DeploymentTargets"] = boost::any(*deploymentTargetsShrink);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferencesShrink) {
      res["OperationPreferences"] = boost::any(*operationPreferencesShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionIdsShrink) {
      res["RegionIds"] = boost::any(*regionIdsShrink);
    }
    if (retainStacks) {
      res["RetainStacks"] = boost::any(*retainStacks);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      accountIdsShrink = make_shared<string>(boost::any_cast<string>(m["AccountIds"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeploymentTargets") != m.end() && !m["DeploymentTargets"].empty()) {
      deploymentTargetsShrink = make_shared<string>(boost::any_cast<string>(m["DeploymentTargets"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      operationPreferencesShrink = make_shared<string>(boost::any_cast<string>(m["OperationPreferences"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      regionIdsShrink = make_shared<string>(boost::any_cast<string>(m["RegionIds"]));
    }
    if (m.find("RetainStacks") != m.end() && !m["RetainStacks"].empty()) {
      retainStacks = make_shared<bool>(boost::any_cast<bool>(m["RetainStacks"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
  }


  virtual ~DeleteStackInstancesShrinkRequest() = default;
};
class DeleteStackInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};
  shared_ptr<string> requestId{};

  DeleteStackInstancesResponseBody() {}

  explicit DeleteStackInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteStackInstancesResponseBody() = default;
};
class DeleteStackInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteStackInstancesResponseBody> body{};

  DeleteStackInstancesResponse() {}

  explicit DeleteStackInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteStackInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteStackInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteStackInstancesResponse() = default;
};
class DeleteTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};

  DeleteTemplateRequest() {}

  explicit DeleteTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteTemplateRequest() = default;
};
class DeleteTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTemplateResponseBody() {}

  explicit DeleteTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTemplateResponseBody() = default;
};
class DeleteTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTemplateResponseBody> body{};

  DeleteTemplateResponse() {}

  explicit DeleteTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTemplateResponse() = default;
};
class DeleteTemplateScratchRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> templateScratchId{};

  DeleteTemplateScratchRequest() {}

  explicit DeleteTemplateScratchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
  }


  virtual ~DeleteTemplateScratchRequest() = default;
};
class DeleteTemplateScratchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTemplateScratchResponseBody() {}

  explicit DeleteTemplateScratchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTemplateScratchResponseBody() = default;
};
class DeleteTemplateScratchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTemplateScratchResponseBody> body{};

  DeleteTemplateScratchResponse() {}

  explicit DeleteTemplateScratchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTemplateScratchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTemplateScratchResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTemplateScratchResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<DescribeRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<DescribeRegionsResponseBodyRegions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DetectStackDriftRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> logicalResourceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};

  DetectStackDriftRequest() {}

  explicit DetectStackDriftRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LogicalResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LogicalResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logicalResourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~DetectStackDriftRequest() = default;
};
class DetectStackDriftResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> driftDetectionId{};
  shared_ptr<string> requestId{};

  DetectStackDriftResponseBody() {}

  explicit DetectStackDriftResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (driftDetectionId) {
      res["DriftDetectionId"] = boost::any(*driftDetectionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DriftDetectionId") != m.end() && !m["DriftDetectionId"].empty()) {
      driftDetectionId = make_shared<string>(boost::any_cast<string>(m["DriftDetectionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectStackDriftResponseBody() = default;
};
class DetectStackDriftResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectStackDriftResponseBody> body{};

  DetectStackDriftResponse() {}

  explicit DetectStackDriftResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectStackDriftResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectStackDriftResponseBody>(model1);
      }
    }
  }


  virtual ~DetectStackDriftResponse() = default;
};
class DetectStackGroupDriftRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<map<string, boost::any>> operationPreferences{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};

  DetectStackGroupDriftRequest() {}

  explicit DetectStackGroupDriftRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (operationPreferences) {
      res["OperationPreferences"] = boost::any(*operationPreferences);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OperationPreferences"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      operationPreferences = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
  }


  virtual ~DetectStackGroupDriftRequest() = default;
};
class DetectStackGroupDriftShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> operationPreferencesShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};

  DetectStackGroupDriftShrinkRequest() {}

  explicit DetectStackGroupDriftShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (operationPreferencesShrink) {
      res["OperationPreferences"] = boost::any(*operationPreferencesShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      operationPreferencesShrink = make_shared<string>(boost::any_cast<string>(m["OperationPreferences"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
  }


  virtual ~DetectStackGroupDriftShrinkRequest() = default;
};
class DetectStackGroupDriftResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};
  shared_ptr<string> requestId{};

  DetectStackGroupDriftResponseBody() {}

  explicit DetectStackGroupDriftResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectStackGroupDriftResponseBody() = default;
};
class DetectStackGroupDriftResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectStackGroupDriftResponseBody> body{};

  DetectStackGroupDriftResponse() {}

  explicit DetectStackGroupDriftResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectStackGroupDriftResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectStackGroupDriftResponseBody>(model1);
      }
    }
  }


  virtual ~DetectStackGroupDriftResponse() = default;
};
class DetectStackResourceDriftRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};

  DetectStackResourceDriftRequest() {}

  explicit DetectStackResourceDriftRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~DetectStackResourceDriftRequest() = default;
};
class DetectStackResourceDriftResponseBodyPropertyDifferences : public Darabonba::Model {
public:
  shared_ptr<string> actualValue{};
  shared_ptr<string> differenceType{};
  shared_ptr<string> expectedValue{};
  shared_ptr<string> propertyPath{};

  DetectStackResourceDriftResponseBodyPropertyDifferences() {}

  explicit DetectStackResourceDriftResponseBodyPropertyDifferences(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualValue) {
      res["ActualValue"] = boost::any(*actualValue);
    }
    if (differenceType) {
      res["DifferenceType"] = boost::any(*differenceType);
    }
    if (expectedValue) {
      res["ExpectedValue"] = boost::any(*expectedValue);
    }
    if (propertyPath) {
      res["PropertyPath"] = boost::any(*propertyPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualValue") != m.end() && !m["ActualValue"].empty()) {
      actualValue = make_shared<string>(boost::any_cast<string>(m["ActualValue"]));
    }
    if (m.find("DifferenceType") != m.end() && !m["DifferenceType"].empty()) {
      differenceType = make_shared<string>(boost::any_cast<string>(m["DifferenceType"]));
    }
    if (m.find("ExpectedValue") != m.end() && !m["ExpectedValue"].empty()) {
      expectedValue = make_shared<string>(boost::any_cast<string>(m["ExpectedValue"]));
    }
    if (m.find("PropertyPath") != m.end() && !m["PropertyPath"].empty()) {
      propertyPath = make_shared<string>(boost::any_cast<string>(m["PropertyPath"]));
    }
  }


  virtual ~DetectStackResourceDriftResponseBodyPropertyDifferences() = default;
};
class DetectStackResourceDriftResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> actualProperties{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> expectedProperties{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<vector<DetectStackResourceDriftResponseBodyPropertyDifferences>> propertyDifferences{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceDriftStatus{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> stackId{};

  DetectStackResourceDriftResponseBody() {}

  explicit DetectStackResourceDriftResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualProperties) {
      res["ActualProperties"] = boost::any(*actualProperties);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (expectedProperties) {
      res["ExpectedProperties"] = boost::any(*expectedProperties);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (propertyDifferences) {
      vector<boost::any> temp1;
      for(auto item1:*propertyDifferences){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyDifferences"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceDriftStatus) {
      res["ResourceDriftStatus"] = boost::any(*resourceDriftStatus);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualProperties") != m.end() && !m["ActualProperties"].empty()) {
      actualProperties = make_shared<string>(boost::any_cast<string>(m["ActualProperties"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("ExpectedProperties") != m.end() && !m["ExpectedProperties"].empty()) {
      expectedProperties = make_shared<string>(boost::any_cast<string>(m["ExpectedProperties"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("PropertyDifferences") != m.end() && !m["PropertyDifferences"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyDifferences"].type()) {
        vector<DetectStackResourceDriftResponseBodyPropertyDifferences> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyDifferences"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectStackResourceDriftResponseBodyPropertyDifferences model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyDifferences = make_shared<vector<DetectStackResourceDriftResponseBodyPropertyDifferences>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceDriftStatus") != m.end() && !m["ResourceDriftStatus"].empty()) {
      resourceDriftStatus = make_shared<string>(boost::any_cast<string>(m["ResourceDriftStatus"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~DetectStackResourceDriftResponseBody() = default;
};
class DetectStackResourceDriftResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectStackResourceDriftResponseBody> body{};

  DetectStackResourceDriftResponse() {}

  explicit DetectStackResourceDriftResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectStackResourceDriftResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectStackResourceDriftResponseBody>(model1);
      }
    }
  }


  virtual ~DetectStackResourceDriftResponse() = default;
};
class ExecuteChangeSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeSetId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};

  ExecuteChangeSetRequest() {}

  explicit ExecuteChangeSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ExecuteChangeSetRequest() = default;
};
class ExecuteChangeSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ExecuteChangeSetResponseBody() {}

  explicit ExecuteChangeSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExecuteChangeSetResponseBody() = default;
};
class ExecuteChangeSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteChangeSetResponseBody> body{};

  ExecuteChangeSetResponse() {}

  explicit ExecuteChangeSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteChangeSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteChangeSetResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteChangeSetResponse() = default;
};
class GenerateTemplateByScratchRequest : public Darabonba::Model {
public:
  shared_ptr<string> provisionRegionId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateScratchId{};

  GenerateTemplateByScratchRequest() {}

  explicit GenerateTemplateByScratchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (provisionRegionId) {
      res["ProvisionRegionId"] = boost::any(*provisionRegionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProvisionRegionId") != m.end() && !m["ProvisionRegionId"].empty()) {
      provisionRegionId = make_shared<string>(boost::any_cast<string>(m["ProvisionRegionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
  }


  virtual ~GenerateTemplateByScratchRequest() = default;
};
class GenerateTemplateByScratchResponseBodyResourcesToImport : public Darabonba::Model {
public:
  shared_ptr<string> logicalResourceId{};
  shared_ptr<map<string, boost::any>> resourceIdentifier{};
  shared_ptr<string> resourceType{};

  GenerateTemplateByScratchResponseBodyResourcesToImport() {}

  explicit GenerateTemplateByScratchResponseBodyResourcesToImport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (resourceIdentifier) {
      res["ResourceIdentifier"] = boost::any(*resourceIdentifier);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("ResourceIdentifier") != m.end() && !m["ResourceIdentifier"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceIdentifier"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceIdentifier = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GenerateTemplateByScratchResponseBodyResourcesToImport() = default;
};
class GenerateTemplateByScratchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GenerateTemplateByScratchResponseBodyResourcesToImport>> resourcesToImport{};
  shared_ptr<string> templateBody{};

  GenerateTemplateByScratchResponseBody() {}

  explicit GenerateTemplateByScratchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourcesToImport) {
      vector<boost::any> temp1;
      for(auto item1:*resourcesToImport){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcesToImport"] = boost::any(temp1);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourcesToImport") != m.end() && !m["ResourcesToImport"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcesToImport"].type()) {
        vector<GenerateTemplateByScratchResponseBodyResourcesToImport> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcesToImport"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateTemplateByScratchResponseBodyResourcesToImport model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcesToImport = make_shared<vector<GenerateTemplateByScratchResponseBodyResourcesToImport>>(expect1);
      }
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
  }


  virtual ~GenerateTemplateByScratchResponseBody() = default;
};
class GenerateTemplateByScratchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateTemplateByScratchResponseBody> body{};

  GenerateTemplateByScratchResponse() {}

  explicit GenerateTemplateByScratchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateTemplateByScratchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateTemplateByScratchResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateTemplateByScratchResponse() = default;
};
class GenerateTemplatePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  GenerateTemplatePolicyRequest() {}

  explicit GenerateTemplatePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~GenerateTemplatePolicyRequest() = default;
};
class GenerateTemplatePolicyResponseBodyPolicyStatement : public Darabonba::Model {
public:
  shared_ptr<vector<string>> action{};
  shared_ptr<string> effect{};
  shared_ptr<string> resource{};

  GenerateTemplatePolicyResponseBodyPolicyStatement() {}

  explicit GenerateTemplatePolicyResponseBodyPolicyStatement(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (effect) {
      res["Effect"] = boost::any(*effect);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Action"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Action"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      action = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Effect") != m.end() && !m["Effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["Effect"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
  }


  virtual ~GenerateTemplatePolicyResponseBodyPolicyStatement() = default;
};
class GenerateTemplatePolicyResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<vector<GenerateTemplatePolicyResponseBodyPolicyStatement>> statement{};
  shared_ptr<string> version{};

  GenerateTemplatePolicyResponseBodyPolicy() {}

  explicit GenerateTemplatePolicyResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (statement) {
      vector<boost::any> temp1;
      for(auto item1:*statement){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Statement"] = boost::any(temp1);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Statement") != m.end() && !m["Statement"].empty()) {
      if (typeid(vector<boost::any>) == m["Statement"].type()) {
        vector<GenerateTemplatePolicyResponseBodyPolicyStatement> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Statement"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateTemplatePolicyResponseBodyPolicyStatement model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statement = make_shared<vector<GenerateTemplatePolicyResponseBodyPolicyStatement>>(expect1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GenerateTemplatePolicyResponseBodyPolicy() = default;
};
class GenerateTemplatePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<GenerateTemplatePolicyResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  GenerateTemplatePolicyResponseBody() {}

  explicit GenerateTemplatePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        GenerateTemplatePolicyResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<GenerateTemplatePolicyResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateTemplatePolicyResponseBody() = default;
};
class GenerateTemplatePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateTemplatePolicyResponseBody> body{};

  GenerateTemplatePolicyResponse() {}

  explicit GenerateTemplatePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateTemplatePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateTemplatePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateTemplatePolicyResponse() = default;
};
class GetChangeSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeSetId{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> showTemplate{};

  GetChangeSetRequest() {}

  explicit GetChangeSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (showTemplate) {
      res["ShowTemplate"] = boost::any(*showTemplate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShowTemplate") != m.end() && !m["ShowTemplate"].empty()) {
      showTemplate = make_shared<bool>(boost::any_cast<bool>(m["ShowTemplate"]));
    }
  }


  virtual ~GetChangeSetRequest() = default;
};
class GetChangeSetResponseBodyLogTerraformLogs : public Darabonba::Model {
public:
  shared_ptr<string> command{};
  shared_ptr<string> content{};
  shared_ptr<string> stream{};

  GetChangeSetResponseBodyLogTerraformLogs() {}

  explicit GetChangeSetResponseBodyLogTerraformLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (stream) {
      res["Stream"] = boost::any(*stream);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Stream") != m.end() && !m["Stream"].empty()) {
      stream = make_shared<string>(boost::any_cast<string>(m["Stream"]));
    }
  }


  virtual ~GetChangeSetResponseBodyLogTerraformLogs() = default;
};
class GetChangeSetResponseBodyLog : public Darabonba::Model {
public:
  shared_ptr<vector<GetChangeSetResponseBodyLogTerraformLogs>> terraformLogs{};

  GetChangeSetResponseBodyLog() {}

  explicit GetChangeSetResponseBodyLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (terraformLogs) {
      vector<boost::any> temp1;
      for(auto item1:*terraformLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TerraformLogs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TerraformLogs") != m.end() && !m["TerraformLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["TerraformLogs"].type()) {
        vector<GetChangeSetResponseBodyLogTerraformLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TerraformLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChangeSetResponseBodyLogTerraformLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        terraformLogs = make_shared<vector<GetChangeSetResponseBodyLogTerraformLogs>>(expect1);
      }
    }
  }


  virtual ~GetChangeSetResponseBodyLog() = default;
};
class GetChangeSetResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetChangeSetResponseBodyParameters() {}

  explicit GetChangeSetResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetChangeSetResponseBodyParameters() = default;
};
class GetChangeSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> changeSetId{};
  shared_ptr<string> changeSetName{};
  shared_ptr<string> changeSetType{};
  shared_ptr<vector<map<string, boost::any>>> changes{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<string> executionStatus{};
  shared_ptr<GetChangeSetResponseBodyLog> log{};
  shared_ptr<vector<GetChangeSetResponseBodyParameters>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> templateBody{};
  shared_ptr<long> timeoutInMinutes{};

  GetChangeSetResponseBody() {}

  explicit GetChangeSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (changeSetName) {
      res["ChangeSetName"] = boost::any(*changeSetName);
    }
    if (changeSetType) {
      res["ChangeSetType"] = boost::any(*changeSetType);
    }
    if (changes) {
      res["Changes"] = boost::any(*changes);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (executionStatus) {
      res["ExecutionStatus"] = boost::any(*executionStatus);
    }
    if (log) {
      res["Log"] = log ? boost::any(log->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("ChangeSetName") != m.end() && !m["ChangeSetName"].empty()) {
      changeSetName = make_shared<string>(boost::any_cast<string>(m["ChangeSetName"]));
    }
    if (m.find("ChangeSetType") != m.end() && !m["ChangeSetType"].empty()) {
      changeSetType = make_shared<string>(boost::any_cast<string>(m["ChangeSetType"]));
    }
    if (m.find("Changes") != m.end() && !m["Changes"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Changes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Changes"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      changes = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("ExecutionStatus") != m.end() && !m["ExecutionStatus"].empty()) {
      executionStatus = make_shared<string>(boost::any_cast<string>(m["ExecutionStatus"]));
    }
    if (m.find("Log") != m.end() && !m["Log"].empty()) {
      if (typeid(map<string, boost::any>) == m["Log"].type()) {
        GetChangeSetResponseBodyLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Log"]));
        log = make_shared<GetChangeSetResponseBodyLog>(model1);
      }
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetChangeSetResponseBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChangeSetResponseBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetChangeSetResponseBodyParameters>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
  }


  virtual ~GetChangeSetResponseBody() = default;
};
class GetChangeSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChangeSetResponseBody> body{};

  GetChangeSetResponse() {}

  explicit GetChangeSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChangeSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChangeSetResponseBody>(model1);
      }
    }
  }


  virtual ~GetChangeSetResponse() = default;
};
class GetFeatureDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> feature{};
  shared_ptr<string> regionId{};

  GetFeatureDetailsRequest() {}

  explicit GetFeatureDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feature) {
      res["Feature"] = boost::any(*feature);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      feature = make_shared<string>(boost::any_cast<string>(m["Feature"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetFeatureDetailsRequest() = default;
};
class GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> sideEffects{};
  shared_ptr<vector<string>> supportedFilters{};

  GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes() {}

  explicit GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sideEffects) {
      res["SideEffects"] = boost::any(*sideEffects);
    }
    if (supportedFilters) {
      res["SupportedFilters"] = boost::any(*supportedFilters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SideEffects") != m.end() && !m["SideEffects"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SideEffects"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SideEffects"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sideEffects = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SupportedFilters") != m.end() && !m["SupportedFilters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedFilters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedFilters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedFilters = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes() = default;
};
class GetFeatureDetailsResponseBodyResourceCleaner : public Darabonba::Model {
public:
  shared_ptr<vector<GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes>> supportedResourceTypes{};

  GetFeatureDetailsResponseBodyResourceCleaner() {}

  explicit GetFeatureDetailsResponseBodyResourceCleaner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedResourceTypes) {
      vector<boost::any> temp1;
      for(auto item1:*supportedResourceTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedResourceTypes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedResourceTypes") != m.end() && !m["SupportedResourceTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedResourceTypes"].type()) {
        vector<GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedResourceTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedResourceTypes = make_shared<vector<GetFeatureDetailsResponseBodyResourceCleanerSupportedResourceTypes>>(expect1);
      }
    }
  }


  virtual ~GetFeatureDetailsResponseBodyResourceCleaner() = default;
};
class GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<bool> sourceResourceGroupSupported{};
  shared_ptr<bool> sourceResourcesSupported{};
  shared_ptr<bool> sourceSupported{};
  shared_ptr<bool> sourceTagSupported{};

  GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes() {}

  explicit GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sourceResourceGroupSupported) {
      res["SourceResourceGroupSupported"] = boost::any(*sourceResourceGroupSupported);
    }
    if (sourceResourcesSupported) {
      res["SourceResourcesSupported"] = boost::any(*sourceResourcesSupported);
    }
    if (sourceSupported) {
      res["SourceSupported"] = boost::any(*sourceSupported);
    }
    if (sourceTagSupported) {
      res["SourceTagSupported"] = boost::any(*sourceTagSupported);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SourceResourceGroupSupported") != m.end() && !m["SourceResourceGroupSupported"].empty()) {
      sourceResourceGroupSupported = make_shared<bool>(boost::any_cast<bool>(m["SourceResourceGroupSupported"]));
    }
    if (m.find("SourceResourcesSupported") != m.end() && !m["SourceResourcesSupported"].empty()) {
      sourceResourcesSupported = make_shared<bool>(boost::any_cast<bool>(m["SourceResourcesSupported"]));
    }
    if (m.find("SourceSupported") != m.end() && !m["SourceSupported"].empty()) {
      sourceSupported = make_shared<bool>(boost::any_cast<bool>(m["SourceSupported"]));
    }
    if (m.find("SourceTagSupported") != m.end() && !m["SourceTagSupported"].empty()) {
      sourceTagSupported = make_shared<bool>(boost::any_cast<bool>(m["SourceTagSupported"]));
    }
  }


  virtual ~GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes() = default;
};
class GetFeatureDetailsResponseBodyTemplateScratch : public Darabonba::Model {
public:
  shared_ptr<vector<GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes>> supportedResourceTypes{};

  GetFeatureDetailsResponseBodyTemplateScratch() {}

  explicit GetFeatureDetailsResponseBodyTemplateScratch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedResourceTypes) {
      vector<boost::any> temp1;
      for(auto item1:*supportedResourceTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedResourceTypes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedResourceTypes") != m.end() && !m["SupportedResourceTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedResourceTypes"].type()) {
        vector<GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedResourceTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedResourceTypes = make_shared<vector<GetFeatureDetailsResponseBodyTemplateScratchSupportedResourceTypes>>(expect1);
      }
    }
  }


  virtual ~GetFeatureDetailsResponseBodyTemplateScratch() = default;
};
class GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk : public Darabonba::Model {
public:
  shared_ptr<vector<string>> deleteStack{};

  GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk() {}

  explicit GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteStack) {
      res["DeleteStack"] = boost::any(*deleteStack);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteStack") != m.end() && !m["DeleteStack"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeleteStack"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeleteStack"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deleteStack = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk() = default;
};
class GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> customTag{};
  shared_ptr<vector<string>> estimateCost{};
  shared_ptr<vector<string>> resourceGroup{};
  shared_ptr<GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk> stackOperationRisk{};
  shared_ptr<vector<string>> systemTag{};

  GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes() {}

  explicit GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customTag) {
      res["CustomTag"] = boost::any(*customTag);
    }
    if (estimateCost) {
      res["EstimateCost"] = boost::any(*estimateCost);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (stackOperationRisk) {
      res["StackOperationRisk"] = stackOperationRisk ? boost::any(stackOperationRisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (systemTag) {
      res["SystemTag"] = boost::any(*systemTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomTag") != m.end() && !m["CustomTag"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CustomTag"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CustomTag"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customTag = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EstimateCost") != m.end() && !m["EstimateCost"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EstimateCost"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EstimateCost"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      estimateCost = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceGroup"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceGroup"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceGroup = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StackOperationRisk") != m.end() && !m["StackOperationRisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["StackOperationRisk"].type()) {
        GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StackOperationRisk"]));
        stackOperationRisk = make_shared<GetFeatureDetailsResponseBodyTerraformSupportedResourceTypesStackOperationRisk>(model1);
      }
    }
    if (m.find("SystemTag") != m.end() && !m["SystemTag"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SystemTag"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SystemTag"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      systemTag = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes() = default;
};
class GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions : public Darabonba::Model {
public:
  shared_ptr<string> providerName{};
  shared_ptr<vector<string>> supportedVersions{};

  GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions() {}

  explicit GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (providerName) {
      res["ProviderName"] = boost::any(*providerName);
    }
    if (supportedVersions) {
      res["SupportedVersions"] = boost::any(*supportedVersions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProviderName") != m.end() && !m["ProviderName"].empty()) {
      providerName = make_shared<string>(boost::any_cast<string>(m["ProviderName"]));
    }
    if (m.find("SupportedVersions") != m.end() && !m["SupportedVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedVersions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions() = default;
};
class GetFeatureDetailsResponseBodyTerraformSupportedVersions : public Darabonba::Model {
public:
  shared_ptr<vector<GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions>> providerVersions{};
  shared_ptr<string> terraformVersion{};
  shared_ptr<string> transform{};
  shared_ptr<vector<string>> updateAllowedTransforms{};

  GetFeatureDetailsResponseBodyTerraformSupportedVersions() {}

  explicit GetFeatureDetailsResponseBodyTerraformSupportedVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (providerVersions) {
      vector<boost::any> temp1;
      for(auto item1:*providerVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProviderVersions"] = boost::any(temp1);
    }
    if (terraformVersion) {
      res["TerraformVersion"] = boost::any(*terraformVersion);
    }
    if (transform) {
      res["Transform"] = boost::any(*transform);
    }
    if (updateAllowedTransforms) {
      res["UpdateAllowedTransforms"] = boost::any(*updateAllowedTransforms);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProviderVersions") != m.end() && !m["ProviderVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["ProviderVersions"].type()) {
        vector<GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProviderVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        providerVersions = make_shared<vector<GetFeatureDetailsResponseBodyTerraformSupportedVersionsProviderVersions>>(expect1);
      }
    }
    if (m.find("TerraformVersion") != m.end() && !m["TerraformVersion"].empty()) {
      terraformVersion = make_shared<string>(boost::any_cast<string>(m["TerraformVersion"]));
    }
    if (m.find("Transform") != m.end() && !m["Transform"].empty()) {
      transform = make_shared<string>(boost::any_cast<string>(m["Transform"]));
    }
    if (m.find("UpdateAllowedTransforms") != m.end() && !m["UpdateAllowedTransforms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UpdateAllowedTransforms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UpdateAllowedTransforms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      updateAllowedTransforms = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetFeatureDetailsResponseBodyTerraformSupportedVersions() = default;
};
class GetFeatureDetailsResponseBodyTerraform : public Darabonba::Model {
public:
  shared_ptr<GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes> supportedResourceTypes{};
  shared_ptr<vector<GetFeatureDetailsResponseBodyTerraformSupportedVersions>> supportedVersions{};

  GetFeatureDetailsResponseBodyTerraform() {}

  explicit GetFeatureDetailsResponseBodyTerraform(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedResourceTypes) {
      res["SupportedResourceTypes"] = supportedResourceTypes ? boost::any(supportedResourceTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (supportedVersions) {
      vector<boost::any> temp1;
      for(auto item1:*supportedVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedVersions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedResourceTypes") != m.end() && !m["SupportedResourceTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedResourceTypes"].type()) {
        GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedResourceTypes"]));
        supportedResourceTypes = make_shared<GetFeatureDetailsResponseBodyTerraformSupportedResourceTypes>(model1);
      }
    }
    if (m.find("SupportedVersions") != m.end() && !m["SupportedVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedVersions"].type()) {
        vector<GetFeatureDetailsResponseBodyTerraformSupportedVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFeatureDetailsResponseBodyTerraformSupportedVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedVersions = make_shared<vector<GetFeatureDetailsResponseBodyTerraformSupportedVersions>>(expect1);
      }
    }
  }


  virtual ~GetFeatureDetailsResponseBodyTerraform() = default;
};
class GetFeatureDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetFeatureDetailsResponseBodyResourceCleaner> resourceCleaner{};
  shared_ptr<GetFeatureDetailsResponseBodyTemplateScratch> templateScratch{};
  shared_ptr<GetFeatureDetailsResponseBodyTerraform> terraform{};

  GetFeatureDetailsResponseBody() {}

  explicit GetFeatureDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceCleaner) {
      res["ResourceCleaner"] = resourceCleaner ? boost::any(resourceCleaner->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateScratch) {
      res["TemplateScratch"] = templateScratch ? boost::any(templateScratch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (terraform) {
      res["Terraform"] = terraform ? boost::any(terraform->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceCleaner") != m.end() && !m["ResourceCleaner"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceCleaner"].type()) {
        GetFeatureDetailsResponseBodyResourceCleaner model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceCleaner"]));
        resourceCleaner = make_shared<GetFeatureDetailsResponseBodyResourceCleaner>(model1);
      }
    }
    if (m.find("TemplateScratch") != m.end() && !m["TemplateScratch"].empty()) {
      if (typeid(map<string, boost::any>) == m["TemplateScratch"].type()) {
        GetFeatureDetailsResponseBodyTemplateScratch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TemplateScratch"]));
        templateScratch = make_shared<GetFeatureDetailsResponseBodyTemplateScratch>(model1);
      }
    }
    if (m.find("Terraform") != m.end() && !m["Terraform"].empty()) {
      if (typeid(map<string, boost::any>) == m["Terraform"].type()) {
        GetFeatureDetailsResponseBodyTerraform model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Terraform"]));
        terraform = make_shared<GetFeatureDetailsResponseBodyTerraform>(model1);
      }
    }
  }


  virtual ~GetFeatureDetailsResponseBody() = default;
};
class GetFeatureDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFeatureDetailsResponseBody> body{};

  GetFeatureDetailsResponse() {}

  explicit GetFeatureDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFeatureDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFeatureDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~GetFeatureDetailsResponse() = default;
};
class GetResourceTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};

  GetResourceTypeRequest() {}

  explicit GetResourceTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetResourceTypeRequest() = default;
};
class GetResourceTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> attributes{};
  shared_ptr<string> entityType{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceType{};
  shared_ptr<bool> supportDriftDetection{};
  shared_ptr<bool> supportScratchDetection{};

  GetResourceTypeResponseBody() {}

  explicit GetResourceTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (supportDriftDetection) {
      res["SupportDriftDetection"] = boost::any(*supportDriftDetection);
    }
    if (supportScratchDetection) {
      res["SupportScratchDetection"] = boost::any(*supportScratchDetection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Attributes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attributes = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SupportDriftDetection") != m.end() && !m["SupportDriftDetection"].empty()) {
      supportDriftDetection = make_shared<bool>(boost::any_cast<bool>(m["SupportDriftDetection"]));
    }
    if (m.find("SupportScratchDetection") != m.end() && !m["SupportScratchDetection"].empty()) {
      supportScratchDetection = make_shared<bool>(boost::any_cast<bool>(m["SupportScratchDetection"]));
    }
  }


  virtual ~GetResourceTypeResponseBody() = default;
};
class GetResourceTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceTypeResponseBody> body{};

  GetResourceTypeResponse() {}

  explicit GetResourceTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceTypeResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceTypeResponse() = default;
};
class GetResourceTypeTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};

  GetResourceTypeTemplateRequest() {}

  explicit GetResourceTypeTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetResourceTypeTemplateRequest() = default;
};
class GetResourceTypeTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> templateBody{};

  GetResourceTypeTemplateResponseBody() {}

  explicit GetResourceTypeTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TemplateBody"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateBody = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetResourceTypeTemplateResponseBody() = default;
};
class GetResourceTypeTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceTypeTemplateResponseBody> body{};

  GetResourceTypeTemplateResponse() {}

  explicit GetResourceTypeTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceTypeTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceTypeTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceTypeTemplateResponse() = default;
};
class GetServiceProvisionsRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetServiceProvisionsRequestParameters() {}

  explicit GetServiceProvisionsRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetServiceProvisionsRequestParameters() = default;
};
class GetServiceProvisionsRequestServices : public Darabonba::Model {
public:
  shared_ptr<string> serviceName{};

  GetServiceProvisionsRequestServices() {}

  explicit GetServiceProvisionsRequestServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~GetServiceProvisionsRequestServices() = default;
};
class GetServiceProvisionsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceProvisionsRequestParameters>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<GetServiceProvisionsRequestServices>> services{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  GetServiceProvisionsRequest() {}

  explicit GetServiceProvisionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Services"] = boost::any(temp1);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetServiceProvisionsRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceProvisionsRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetServiceProvisionsRequestParameters>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<GetServiceProvisionsRequestServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceProvisionsRequestServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<GetServiceProvisionsRequestServices>>(expect1);
      }
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~GetServiceProvisionsRequest() = default;
};
class GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> apiProductId{};
  shared_ptr<string> apiType{};
  shared_ptr<map<string, boost::any>> parameters{};

  GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation() {}

  explicit GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (apiProductId) {
      res["ApiProductId"] = boost::any(*apiProductId);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("ApiProductId") != m.end() && !m["ApiProductId"].empty()) {
      apiProductId = make_shared<string>(boost::any_cast<string>(m["ApiProductId"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation() = default;
};
class GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles : public Darabonba::Model {
public:
  shared_ptr<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation> apiForCreation{};
  shared_ptr<bool> created{};
  shared_ptr<string> function{};
  shared_ptr<string> roleName{};

  GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles() {}

  explicit GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiForCreation) {
      res["ApiForCreation"] = apiForCreation ? boost::any(apiForCreation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (function) {
      res["Function"] = boost::any(*function);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiForCreation") != m.end() && !m["ApiForCreation"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiForCreation"].type()) {
        GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiForCreation"]));
        apiForCreation = make_shared<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRolesApiForCreation>(model1);
      }
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<bool>(boost::any_cast<bool>(m["Created"]));
    }
    if (m.find("Function") != m.end() && !m["Function"].empty()) {
      function = make_shared<string>(boost::any_cast<string>(m["Function"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles() = default;
};
class GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision : public Darabonba::Model {
public:
  shared_ptr<string> authorizationURL{};
  shared_ptr<vector<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles>> roles{};

  GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision() {}

  explicit GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationURL) {
      res["AuthorizationURL"] = boost::any(*authorizationURL);
    }
    if (roles) {
      vector<boost::any> temp1;
      for(auto item1:*roles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Roles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationURL") != m.end() && !m["AuthorizationURL"].empty()) {
      authorizationURL = make_shared<string>(boost::any_cast<string>(m["AuthorizationURL"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Roles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roles = make_shared<vector<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvisionRoles>>(expect1);
      }
    }
  }


  virtual ~GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision() = default;
};
class GetServiceProvisionsResponseBodyServiceProvisions : public Darabonba::Model {
public:
  shared_ptr<bool> autoEnableService{};
  shared_ptr<vector<string>> dependentServiceNames{};
  shared_ptr<string> enableURL{};
  shared_ptr<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision> roleProvision{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};

  GetServiceProvisionsResponseBodyServiceProvisions() {}

  explicit GetServiceProvisionsResponseBodyServiceProvisions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoEnableService) {
      res["AutoEnableService"] = boost::any(*autoEnableService);
    }
    if (dependentServiceNames) {
      res["DependentServiceNames"] = boost::any(*dependentServiceNames);
    }
    if (enableURL) {
      res["EnableURL"] = boost::any(*enableURL);
    }
    if (roleProvision) {
      res["RoleProvision"] = roleProvision ? boost::any(roleProvision->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoEnableService") != m.end() && !m["AutoEnableService"].empty()) {
      autoEnableService = make_shared<bool>(boost::any_cast<bool>(m["AutoEnableService"]));
    }
    if (m.find("DependentServiceNames") != m.end() && !m["DependentServiceNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DependentServiceNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DependentServiceNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dependentServiceNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EnableURL") != m.end() && !m["EnableURL"].empty()) {
      enableURL = make_shared<string>(boost::any_cast<string>(m["EnableURL"]));
    }
    if (m.find("RoleProvision") != m.end() && !m["RoleProvision"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleProvision"].type()) {
        GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleProvision"]));
        roleProvision = make_shared<GetServiceProvisionsResponseBodyServiceProvisionsRoleProvision>(model1);
      }
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
  }


  virtual ~GetServiceProvisionsResponseBodyServiceProvisions() = default;
};
class GetServiceProvisionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetServiceProvisionsResponseBodyServiceProvisions>> serviceProvisions{};

  GetServiceProvisionsResponseBody() {}

  explicit GetServiceProvisionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceProvisions) {
      vector<boost::any> temp1;
      for(auto item1:*serviceProvisions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceProvisions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceProvisions") != m.end() && !m["ServiceProvisions"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceProvisions"].type()) {
        vector<GetServiceProvisionsResponseBodyServiceProvisions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceProvisions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceProvisionsResponseBodyServiceProvisions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceProvisions = make_shared<vector<GetServiceProvisionsResponseBodyServiceProvisions>>(expect1);
      }
    }
  }


  virtual ~GetServiceProvisionsResponseBody() = default;
};
class GetServiceProvisionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceProvisionsResponseBody> body{};

  GetServiceProvisionsResponse() {}

  explicit GetServiceProvisionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceProvisionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceProvisionsResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceProvisionsResponse() = default;
};
class GetStackRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> logOption{};
  shared_ptr<string> outputOption{};
  shared_ptr<string> regionId{};
  shared_ptr<string> showResourceProgress{};
  shared_ptr<string> stackId{};

  GetStackRequest() {}

  explicit GetStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (logOption) {
      res["LogOption"] = boost::any(*logOption);
    }
    if (outputOption) {
      res["OutputOption"] = boost::any(*outputOption);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (showResourceProgress) {
      res["ShowResourceProgress"] = boost::any(*showResourceProgress);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("LogOption") != m.end() && !m["LogOption"].empty()) {
      logOption = make_shared<string>(boost::any_cast<string>(m["LogOption"]));
    }
    if (m.find("OutputOption") != m.end() && !m["OutputOption"].empty()) {
      outputOption = make_shared<string>(boost::any_cast<string>(m["OutputOption"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShowResourceProgress") != m.end() && !m["ShowResourceProgress"].empty()) {
      showResourceProgress = make_shared<string>(boost::any_cast<string>(m["ShowResourceProgress"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~GetStackRequest() = default;
};
class GetStackResponseBodyLogResourceLogsLogs : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<vector<string>> keys{};

  GetStackResponseBodyLogResourceLogsLogs() {}

  explicit GetStackResponseBodyLogResourceLogsLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetStackResponseBodyLogResourceLogsLogs() = default;
};
class GetStackResponseBodyLogResourceLogs : public Darabonba::Model {
public:
  shared_ptr<vector<GetStackResponseBodyLogResourceLogsLogs>> logs{};
  shared_ptr<string> resourceName{};

  GetStackResponseBodyLogResourceLogs() {}

  explicit GetStackResponseBodyLogResourceLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logs) {
      vector<boost::any> temp1;
      for(auto item1:*logs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Logs"] = boost::any(temp1);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<GetStackResponseBodyLogResourceLogsLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Logs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStackResponseBodyLogResourceLogsLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logs = make_shared<vector<GetStackResponseBodyLogResourceLogsLogs>>(expect1);
      }
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
  }


  virtual ~GetStackResponseBodyLogResourceLogs() = default;
};
class GetStackResponseBodyLogTerraformLogs : public Darabonba::Model {
public:
  shared_ptr<string> command{};
  shared_ptr<string> content{};
  shared_ptr<string> stream{};

  GetStackResponseBodyLogTerraformLogs() {}

  explicit GetStackResponseBodyLogTerraformLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (stream) {
      res["Stream"] = boost::any(*stream);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Stream") != m.end() && !m["Stream"].empty()) {
      stream = make_shared<string>(boost::any_cast<string>(m["Stream"]));
    }
  }


  virtual ~GetStackResponseBodyLogTerraformLogs() = default;
};
class GetStackResponseBodyLog : public Darabonba::Model {
public:
  shared_ptr<vector<GetStackResponseBodyLogResourceLogs>> resourceLogs{};
  shared_ptr<vector<GetStackResponseBodyLogTerraformLogs>> terraformLogs{};

  GetStackResponseBodyLog() {}

  explicit GetStackResponseBodyLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceLogs) {
      vector<boost::any> temp1;
      for(auto item1:*resourceLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceLogs"] = boost::any(temp1);
    }
    if (terraformLogs) {
      vector<boost::any> temp1;
      for(auto item1:*terraformLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TerraformLogs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceLogs") != m.end() && !m["ResourceLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceLogs"].type()) {
        vector<GetStackResponseBodyLogResourceLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStackResponseBodyLogResourceLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceLogs = make_shared<vector<GetStackResponseBodyLogResourceLogs>>(expect1);
      }
    }
    if (m.find("TerraformLogs") != m.end() && !m["TerraformLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["TerraformLogs"].type()) {
        vector<GetStackResponseBodyLogTerraformLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TerraformLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStackResponseBodyLogTerraformLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        terraformLogs = make_shared<vector<GetStackResponseBodyLogTerraformLogs>>(expect1);
      }
    }
  }


  virtual ~GetStackResponseBodyLog() = default;
};
class GetStackResponseBodyOperationInfo : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> code{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceType{};

  GetStackResponseBodyOperationInfo() {}

  explicit GetStackResponseBodyOperationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetStackResponseBodyOperationInfo() = default;
};
class GetStackResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetStackResponseBodyParameters() {}

  explicit GetStackResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetStackResponseBodyParameters() = default;
};
class GetStackResponseBodyResourceProgressInProgressResourceDetails : public Darabonba::Model {
public:
  shared_ptr<double> progressTargetValue{};
  shared_ptr<double> progressValue{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  GetStackResponseBodyResourceProgressInProgressResourceDetails() {}

  explicit GetStackResponseBodyResourceProgressInProgressResourceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (progressTargetValue) {
      res["ProgressTargetValue"] = boost::any(*progressTargetValue);
    }
    if (progressValue) {
      res["ProgressValue"] = boost::any(*progressValue);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProgressTargetValue") != m.end() && !m["ProgressTargetValue"].empty()) {
      progressTargetValue = make_shared<double>(boost::any_cast<double>(m["ProgressTargetValue"]));
    }
    if (m.find("ProgressValue") != m.end() && !m["ProgressValue"].empty()) {
      progressValue = make_shared<double>(boost::any_cast<double>(m["ProgressValue"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetStackResponseBodyResourceProgressInProgressResourceDetails() = default;
};
class GetStackResponseBodyResourceProgress : public Darabonba::Model {
public:
  shared_ptr<long> failedResourceCount{};
  shared_ptr<long> inProgressResourceCount{};
  shared_ptr<vector<GetStackResponseBodyResourceProgressInProgressResourceDetails>> inProgressResourceDetails{};
  shared_ptr<long> pendingResourceCount{};
  shared_ptr<long> successResourceCount{};
  shared_ptr<long> totalResourceCount{};

  GetStackResponseBodyResourceProgress() {}

  explicit GetStackResponseBodyResourceProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedResourceCount) {
      res["FailedResourceCount"] = boost::any(*failedResourceCount);
    }
    if (inProgressResourceCount) {
      res["InProgressResourceCount"] = boost::any(*inProgressResourceCount);
    }
    if (inProgressResourceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*inProgressResourceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InProgressResourceDetails"] = boost::any(temp1);
    }
    if (pendingResourceCount) {
      res["PendingResourceCount"] = boost::any(*pendingResourceCount);
    }
    if (successResourceCount) {
      res["SuccessResourceCount"] = boost::any(*successResourceCount);
    }
    if (totalResourceCount) {
      res["TotalResourceCount"] = boost::any(*totalResourceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedResourceCount") != m.end() && !m["FailedResourceCount"].empty()) {
      failedResourceCount = make_shared<long>(boost::any_cast<long>(m["FailedResourceCount"]));
    }
    if (m.find("InProgressResourceCount") != m.end() && !m["InProgressResourceCount"].empty()) {
      inProgressResourceCount = make_shared<long>(boost::any_cast<long>(m["InProgressResourceCount"]));
    }
    if (m.find("InProgressResourceDetails") != m.end() && !m["InProgressResourceDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["InProgressResourceDetails"].type()) {
        vector<GetStackResponseBodyResourceProgressInProgressResourceDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InProgressResourceDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStackResponseBodyResourceProgressInProgressResourceDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inProgressResourceDetails = make_shared<vector<GetStackResponseBodyResourceProgressInProgressResourceDetails>>(expect1);
      }
    }
    if (m.find("PendingResourceCount") != m.end() && !m["PendingResourceCount"].empty()) {
      pendingResourceCount = make_shared<long>(boost::any_cast<long>(m["PendingResourceCount"]));
    }
    if (m.find("SuccessResourceCount") != m.end() && !m["SuccessResourceCount"].empty()) {
      successResourceCount = make_shared<long>(boost::any_cast<long>(m["SuccessResourceCount"]));
    }
    if (m.find("TotalResourceCount") != m.end() && !m["TotalResourceCount"].empty()) {
      totalResourceCount = make_shared<long>(boost::any_cast<long>(m["TotalResourceCount"]));
    }
  }


  virtual ~GetStackResponseBodyResourceProgress() = default;
};
class GetStackResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetStackResponseBodyTags() {}

  explicit GetStackResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetStackResponseBodyTags() = default;
};
class GetStackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> deletionProtection{};
  shared_ptr<string> description{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> interface{};
  shared_ptr<GetStackResponseBodyLog> log{};
  shared_ptr<vector<string>> notificationURLs{};
  shared_ptr<GetStackResponseBodyOperationInfo> operationInfo{};
  shared_ptr<vector<map<string, boost::any>>> outputs{};
  shared_ptr<vector<GetStackResponseBodyParameters>> parameters{};
  shared_ptr<string> parentStackId{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<GetStackResponseBodyResourceProgress> resourceProgress{};
  shared_ptr<string> rootStackId{};
  shared_ptr<bool> serviceManaged{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> stackDriftStatus{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> stackType{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};
  shared_ptr<vector<GetStackResponseBodyTags>> tags{};
  shared_ptr<string> templateDescription{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateScratchId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<string> updateTime{};

  GetStackResponseBody() {}

  explicit GetStackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (interface) {
      res["Interface"] = boost::any(*interface);
    }
    if (log) {
      res["Log"] = log ? boost::any(log->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (notificationURLs) {
      res["NotificationURLs"] = boost::any(*notificationURLs);
    }
    if (operationInfo) {
      res["OperationInfo"] = operationInfo ? boost::any(operationInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (parentStackId) {
      res["ParentStackId"] = boost::any(*parentStackId);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceProgress) {
      res["ResourceProgress"] = resourceProgress ? boost::any(resourceProgress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rootStackId) {
      res["RootStackId"] = boost::any(*rootStackId);
    }
    if (serviceManaged) {
      res["ServiceManaged"] = boost::any(*serviceManaged);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (stackDriftStatus) {
      res["StackDriftStatus"] = boost::any(*stackDriftStatus);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (stackType) {
      res["StackType"] = boost::any(*stackType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<string>(boost::any_cast<string>(m["DeletionProtection"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("Interface") != m.end() && !m["Interface"].empty()) {
      interface = make_shared<string>(boost::any_cast<string>(m["Interface"]));
    }
    if (m.find("Log") != m.end() && !m["Log"].empty()) {
      if (typeid(map<string, boost::any>) == m["Log"].type()) {
        GetStackResponseBodyLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Log"]));
        log = make_shared<GetStackResponseBodyLog>(model1);
      }
    }
    if (m.find("NotificationURLs") != m.end() && !m["NotificationURLs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NotificationURLs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NotificationURLs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notificationURLs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OperationInfo") != m.end() && !m["OperationInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperationInfo"].type()) {
        GetStackResponseBodyOperationInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperationInfo"]));
        operationInfo = make_shared<GetStackResponseBodyOperationInfo>(model1);
      }
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Outputs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Outputs"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      outputs = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetStackResponseBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStackResponseBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetStackResponseBodyParameters>>(expect1);
      }
    }
    if (m.find("ParentStackId") != m.end() && !m["ParentStackId"].empty()) {
      parentStackId = make_shared<string>(boost::any_cast<string>(m["ParentStackId"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceProgress") != m.end() && !m["ResourceProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceProgress"].type()) {
        GetStackResponseBodyResourceProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceProgress"]));
        resourceProgress = make_shared<GetStackResponseBodyResourceProgress>(model1);
      }
    }
    if (m.find("RootStackId") != m.end() && !m["RootStackId"].empty()) {
      rootStackId = make_shared<string>(boost::any_cast<string>(m["RootStackId"]));
    }
    if (m.find("ServiceManaged") != m.end() && !m["ServiceManaged"].empty()) {
      serviceManaged = make_shared<bool>(boost::any_cast<bool>(m["ServiceManaged"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StackDriftStatus") != m.end() && !m["StackDriftStatus"].empty()) {
      stackDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackDriftStatus"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("StackType") != m.end() && !m["StackType"].empty()) {
      stackType = make_shared<string>(boost::any_cast<string>(m["StackType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetStackResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStackResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetStackResponseBodyTags>>(expect1);
      }
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetStackResponseBody() = default;
};
class GetStackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStackResponseBody> body{};

  GetStackResponse() {}

  explicit GetStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStackResponseBody>(model1);
      }
    }
  }


  virtual ~GetStackResponse() = default;
};
class GetStackDriftDetectionStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> driftDetectionId{};
  shared_ptr<string> regionId{};

  GetStackDriftDetectionStatusRequest() {}

  explicit GetStackDriftDetectionStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (driftDetectionId) {
      res["DriftDetectionId"] = boost::any(*driftDetectionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DriftDetectionId") != m.end() && !m["DriftDetectionId"].empty()) {
      driftDetectionId = make_shared<string>(boost::any_cast<string>(m["DriftDetectionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetStackDriftDetectionStatusRequest() = default;
};
class GetStackDriftDetectionStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> driftDetectionId{};
  shared_ptr<string> driftDetectionStatus{};
  shared_ptr<string> driftDetectionStatusReason{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<long> driftedStackResourceCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> stackDriftStatus{};
  shared_ptr<string> stackId{};

  GetStackDriftDetectionStatusResponseBody() {}

  explicit GetStackDriftDetectionStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (driftDetectionId) {
      res["DriftDetectionId"] = boost::any(*driftDetectionId);
    }
    if (driftDetectionStatus) {
      res["DriftDetectionStatus"] = boost::any(*driftDetectionStatus);
    }
    if (driftDetectionStatusReason) {
      res["DriftDetectionStatusReason"] = boost::any(*driftDetectionStatusReason);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (driftedStackResourceCount) {
      res["DriftedStackResourceCount"] = boost::any(*driftedStackResourceCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackDriftStatus) {
      res["StackDriftStatus"] = boost::any(*stackDriftStatus);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DriftDetectionId") != m.end() && !m["DriftDetectionId"].empty()) {
      driftDetectionId = make_shared<string>(boost::any_cast<string>(m["DriftDetectionId"]));
    }
    if (m.find("DriftDetectionStatus") != m.end() && !m["DriftDetectionStatus"].empty()) {
      driftDetectionStatus = make_shared<string>(boost::any_cast<string>(m["DriftDetectionStatus"]));
    }
    if (m.find("DriftDetectionStatusReason") != m.end() && !m["DriftDetectionStatusReason"].empty()) {
      driftDetectionStatusReason = make_shared<string>(boost::any_cast<string>(m["DriftDetectionStatusReason"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("DriftedStackResourceCount") != m.end() && !m["DriftedStackResourceCount"].empty()) {
      driftedStackResourceCount = make_shared<long>(boost::any_cast<long>(m["DriftedStackResourceCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackDriftStatus") != m.end() && !m["StackDriftStatus"].empty()) {
      stackDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackDriftStatus"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~GetStackDriftDetectionStatusResponseBody() = default;
};
class GetStackDriftDetectionStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStackDriftDetectionStatusResponseBody> body{};

  GetStackDriftDetectionStatusResponse() {}

  explicit GetStackDriftDetectionStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStackDriftDetectionStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStackDriftDetectionStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetStackDriftDetectionStatusResponse() = default;
};
class GetStackGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> stackGroupName{};

  GetStackGroupRequest() {}

  explicit GetStackGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
  }


  virtual ~GetStackGroupRequest() = default;
};
class GetStackGroupResponseBodyStackGroupAutoDeployment : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<bool> retainStacksOnAccountRemoval{};

  GetStackGroupResponseBodyStackGroupAutoDeployment() {}

  explicit GetStackGroupResponseBodyStackGroupAutoDeployment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (retainStacksOnAccountRemoval) {
      res["RetainStacksOnAccountRemoval"] = boost::any(*retainStacksOnAccountRemoval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("RetainStacksOnAccountRemoval") != m.end() && !m["RetainStacksOnAccountRemoval"].empty()) {
      retainStacksOnAccountRemoval = make_shared<bool>(boost::any_cast<bool>(m["RetainStacksOnAccountRemoval"]));
    }
  }


  virtual ~GetStackGroupResponseBodyStackGroupAutoDeployment() = default;
};
class GetStackGroupResponseBodyStackGroupParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetStackGroupResponseBodyStackGroupParameters() {}

  explicit GetStackGroupResponseBodyStackGroupParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetStackGroupResponseBodyStackGroupParameters() = default;
};
class GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail : public Darabonba::Model {
public:
  shared_ptr<long> cancelledStackInstancesCount{};
  shared_ptr<string> driftDetectionStatus{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<long> driftedStackInstancesCount{};
  shared_ptr<long> failedStackInstancesCount{};
  shared_ptr<long> inProgressStackInstancesCount{};
  shared_ptr<long> inSyncStackInstancesCount{};
  shared_ptr<string> stackGroupDriftStatus{};
  shared_ptr<long> totalStackInstancesCount{};

  GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail() {}

  explicit GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cancelledStackInstancesCount) {
      res["CancelledStackInstancesCount"] = boost::any(*cancelledStackInstancesCount);
    }
    if (driftDetectionStatus) {
      res["DriftDetectionStatus"] = boost::any(*driftDetectionStatus);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (driftedStackInstancesCount) {
      res["DriftedStackInstancesCount"] = boost::any(*driftedStackInstancesCount);
    }
    if (failedStackInstancesCount) {
      res["FailedStackInstancesCount"] = boost::any(*failedStackInstancesCount);
    }
    if (inProgressStackInstancesCount) {
      res["InProgressStackInstancesCount"] = boost::any(*inProgressStackInstancesCount);
    }
    if (inSyncStackInstancesCount) {
      res["InSyncStackInstancesCount"] = boost::any(*inSyncStackInstancesCount);
    }
    if (stackGroupDriftStatus) {
      res["StackGroupDriftStatus"] = boost::any(*stackGroupDriftStatus);
    }
    if (totalStackInstancesCount) {
      res["TotalStackInstancesCount"] = boost::any(*totalStackInstancesCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CancelledStackInstancesCount") != m.end() && !m["CancelledStackInstancesCount"].empty()) {
      cancelledStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["CancelledStackInstancesCount"]));
    }
    if (m.find("DriftDetectionStatus") != m.end() && !m["DriftDetectionStatus"].empty()) {
      driftDetectionStatus = make_shared<string>(boost::any_cast<string>(m["DriftDetectionStatus"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("DriftedStackInstancesCount") != m.end() && !m["DriftedStackInstancesCount"].empty()) {
      driftedStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["DriftedStackInstancesCount"]));
    }
    if (m.find("FailedStackInstancesCount") != m.end() && !m["FailedStackInstancesCount"].empty()) {
      failedStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["FailedStackInstancesCount"]));
    }
    if (m.find("InProgressStackInstancesCount") != m.end() && !m["InProgressStackInstancesCount"].empty()) {
      inProgressStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["InProgressStackInstancesCount"]));
    }
    if (m.find("InSyncStackInstancesCount") != m.end() && !m["InSyncStackInstancesCount"].empty()) {
      inSyncStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["InSyncStackInstancesCount"]));
    }
    if (m.find("StackGroupDriftStatus") != m.end() && !m["StackGroupDriftStatus"].empty()) {
      stackGroupDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackGroupDriftStatus"]));
    }
    if (m.find("TotalStackInstancesCount") != m.end() && !m["TotalStackInstancesCount"].empty()) {
      totalStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["TotalStackInstancesCount"]));
    }
  }


  virtual ~GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail() = default;
};
class GetStackGroupResponseBodyStackGroup : public Darabonba::Model {
public:
  shared_ptr<string> administrationRoleName{};
  shared_ptr<GetStackGroupResponseBodyStackGroupAutoDeployment> autoDeployment{};
  shared_ptr<string> description{};
  shared_ptr<string> executionRoleName{};
  shared_ptr<vector<GetStackGroupResponseBodyStackGroupParameters>> parameters{};
  shared_ptr<string> permissionModel{};
  shared_ptr<vector<string>> rdFolderIds{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail> stackGroupDriftDetectionDetail{};
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> status{};
  shared_ptr<string> templateBody{};

  GetStackGroupResponseBodyStackGroup() {}

  explicit GetStackGroupResponseBodyStackGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (administrationRoleName) {
      res["AdministrationRoleName"] = boost::any(*administrationRoleName);
    }
    if (autoDeployment) {
      res["AutoDeployment"] = autoDeployment ? boost::any(autoDeployment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionRoleName) {
      res["ExecutionRoleName"] = boost::any(*executionRoleName);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (permissionModel) {
      res["PermissionModel"] = boost::any(*permissionModel);
    }
    if (rdFolderIds) {
      res["RdFolderIds"] = boost::any(*rdFolderIds);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (stackGroupDriftDetectionDetail) {
      res["StackGroupDriftDetectionDetail"] = stackGroupDriftDetectionDetail ? boost::any(stackGroupDriftDetectionDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdministrationRoleName") != m.end() && !m["AdministrationRoleName"].empty()) {
      administrationRoleName = make_shared<string>(boost::any_cast<string>(m["AdministrationRoleName"]));
    }
    if (m.find("AutoDeployment") != m.end() && !m["AutoDeployment"].empty()) {
      if (typeid(map<string, boost::any>) == m["AutoDeployment"].type()) {
        GetStackGroupResponseBodyStackGroupAutoDeployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AutoDeployment"]));
        autoDeployment = make_shared<GetStackGroupResponseBodyStackGroupAutoDeployment>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionRoleName") != m.end() && !m["ExecutionRoleName"].empty()) {
      executionRoleName = make_shared<string>(boost::any_cast<string>(m["ExecutionRoleName"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetStackGroupResponseBodyStackGroupParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStackGroupResponseBodyStackGroupParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetStackGroupResponseBodyStackGroupParameters>>(expect1);
      }
    }
    if (m.find("PermissionModel") != m.end() && !m["PermissionModel"].empty()) {
      permissionModel = make_shared<string>(boost::any_cast<string>(m["PermissionModel"]));
    }
    if (m.find("RdFolderIds") != m.end() && !m["RdFolderIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RdFolderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RdFolderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdFolderIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StackGroupDriftDetectionDetail") != m.end() && !m["StackGroupDriftDetectionDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["StackGroupDriftDetectionDetail"].type()) {
        GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StackGroupDriftDetectionDetail"]));
        stackGroupDriftDetectionDetail = make_shared<GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail>(model1);
      }
    }
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
  }


  virtual ~GetStackGroupResponseBodyStackGroup() = default;
};
class GetStackGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetStackGroupResponseBodyStackGroup> stackGroup{};

  GetStackGroupResponseBody() {}

  explicit GetStackGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackGroup) {
      res["StackGroup"] = stackGroup ? boost::any(stackGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackGroup") != m.end() && !m["StackGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["StackGroup"].type()) {
        GetStackGroupResponseBodyStackGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StackGroup"]));
        stackGroup = make_shared<GetStackGroupResponseBodyStackGroup>(model1);
      }
    }
  }


  virtual ~GetStackGroupResponseBody() = default;
};
class GetStackGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStackGroupResponseBody> body{};

  GetStackGroupResponse() {}

  explicit GetStackGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStackGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStackGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetStackGroupResponse() = default;
};
class GetStackGroupOperationRequest : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};
  shared_ptr<string> regionId{};

  GetStackGroupOperationRequest() {}

  explicit GetStackGroupOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetStackGroupOperationRequest() = default;
};
class GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountIds{};
  shared_ptr<vector<string>> rdFolderIds{};

  GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets() {}

  explicit GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (rdFolderIds) {
      res["RdFolderIds"] = boost::any(*rdFolderIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RdFolderIds") != m.end() && !m["RdFolderIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RdFolderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RdFolderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdFolderIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets() = default;
};
class GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences : public Darabonba::Model {
public:
  shared_ptr<long> failureToleranceCount{};
  shared_ptr<long> failureTolerancePercentage{};
  shared_ptr<long> maxConcurrentCount{};
  shared_ptr<long> maxConcurrentPercentage{};
  shared_ptr<vector<string>> regionIdsOrder{};

  GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences() {}

  explicit GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failureToleranceCount) {
      res["FailureToleranceCount"] = boost::any(*failureToleranceCount);
    }
    if (failureTolerancePercentage) {
      res["FailureTolerancePercentage"] = boost::any(*failureTolerancePercentage);
    }
    if (maxConcurrentCount) {
      res["MaxConcurrentCount"] = boost::any(*maxConcurrentCount);
    }
    if (maxConcurrentPercentage) {
      res["MaxConcurrentPercentage"] = boost::any(*maxConcurrentPercentage);
    }
    if (regionIdsOrder) {
      res["RegionIdsOrder"] = boost::any(*regionIdsOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailureToleranceCount") != m.end() && !m["FailureToleranceCount"].empty()) {
      failureToleranceCount = make_shared<long>(boost::any_cast<long>(m["FailureToleranceCount"]));
    }
    if (m.find("FailureTolerancePercentage") != m.end() && !m["FailureTolerancePercentage"].empty()) {
      failureTolerancePercentage = make_shared<long>(boost::any_cast<long>(m["FailureTolerancePercentage"]));
    }
    if (m.find("MaxConcurrentCount") != m.end() && !m["MaxConcurrentCount"].empty()) {
      maxConcurrentCount = make_shared<long>(boost::any_cast<long>(m["MaxConcurrentCount"]));
    }
    if (m.find("MaxConcurrentPercentage") != m.end() && !m["MaxConcurrentPercentage"].empty()) {
      maxConcurrentPercentage = make_shared<long>(boost::any_cast<long>(m["MaxConcurrentPercentage"]));
    }
    if (m.find("RegionIdsOrder") != m.end() && !m["RegionIdsOrder"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIdsOrder"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIdsOrder"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIdsOrder = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences() = default;
};
class GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail : public Darabonba::Model {
public:
  shared_ptr<long> cancelledStackInstancesCount{};
  shared_ptr<string> driftDetectionStatus{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<long> driftedStackInstancesCount{};
  shared_ptr<long> failedStackInstancesCount{};
  shared_ptr<long> inProgressStackInstancesCount{};
  shared_ptr<long> inSyncStackInstancesCount{};
  shared_ptr<string> stackGroupDriftStatus{};
  shared_ptr<long> totalStackInstancesCount{};

  GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail() {}

  explicit GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cancelledStackInstancesCount) {
      res["CancelledStackInstancesCount"] = boost::any(*cancelledStackInstancesCount);
    }
    if (driftDetectionStatus) {
      res["DriftDetectionStatus"] = boost::any(*driftDetectionStatus);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (driftedStackInstancesCount) {
      res["DriftedStackInstancesCount"] = boost::any(*driftedStackInstancesCount);
    }
    if (failedStackInstancesCount) {
      res["FailedStackInstancesCount"] = boost::any(*failedStackInstancesCount);
    }
    if (inProgressStackInstancesCount) {
      res["InProgressStackInstancesCount"] = boost::any(*inProgressStackInstancesCount);
    }
    if (inSyncStackInstancesCount) {
      res["InSyncStackInstancesCount"] = boost::any(*inSyncStackInstancesCount);
    }
    if (stackGroupDriftStatus) {
      res["StackGroupDriftStatus"] = boost::any(*stackGroupDriftStatus);
    }
    if (totalStackInstancesCount) {
      res["TotalStackInstancesCount"] = boost::any(*totalStackInstancesCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CancelledStackInstancesCount") != m.end() && !m["CancelledStackInstancesCount"].empty()) {
      cancelledStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["CancelledStackInstancesCount"]));
    }
    if (m.find("DriftDetectionStatus") != m.end() && !m["DriftDetectionStatus"].empty()) {
      driftDetectionStatus = make_shared<string>(boost::any_cast<string>(m["DriftDetectionStatus"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("DriftedStackInstancesCount") != m.end() && !m["DriftedStackInstancesCount"].empty()) {
      driftedStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["DriftedStackInstancesCount"]));
    }
    if (m.find("FailedStackInstancesCount") != m.end() && !m["FailedStackInstancesCount"].empty()) {
      failedStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["FailedStackInstancesCount"]));
    }
    if (m.find("InProgressStackInstancesCount") != m.end() && !m["InProgressStackInstancesCount"].empty()) {
      inProgressStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["InProgressStackInstancesCount"]));
    }
    if (m.find("InSyncStackInstancesCount") != m.end() && !m["InSyncStackInstancesCount"].empty()) {
      inSyncStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["InSyncStackInstancesCount"]));
    }
    if (m.find("StackGroupDriftStatus") != m.end() && !m["StackGroupDriftStatus"].empty()) {
      stackGroupDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackGroupDriftStatus"]));
    }
    if (m.find("TotalStackInstancesCount") != m.end() && !m["TotalStackInstancesCount"].empty()) {
      totalStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["TotalStackInstancesCount"]));
    }
  }


  virtual ~GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail() = default;
};
class GetStackGroupOperationResponseBodyStackGroupOperation : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> administrationRoleName{};
  shared_ptr<string> createTime{};
  shared_ptr<GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets> deploymentTargets{};
  shared_ptr<string> endTime{};
  shared_ptr<string> executionRoleName{};
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationId{};
  shared_ptr<GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences> operationPreferences{};
  shared_ptr<bool> retainStacks{};
  shared_ptr<GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail> stackGroupDriftDetectionDetail{};
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> status{};

  GetStackGroupOperationResponseBodyStackGroupOperation() {}

  explicit GetStackGroupOperationResponseBodyStackGroupOperation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (administrationRoleName) {
      res["AdministrationRoleName"] = boost::any(*administrationRoleName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deploymentTargets) {
      res["DeploymentTargets"] = deploymentTargets ? boost::any(deploymentTargets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executionRoleName) {
      res["ExecutionRoleName"] = boost::any(*executionRoleName);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (operationPreferences) {
      res["OperationPreferences"] = operationPreferences ? boost::any(operationPreferences->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (retainStacks) {
      res["RetainStacks"] = boost::any(*retainStacks);
    }
    if (stackGroupDriftDetectionDetail) {
      res["StackGroupDriftDetectionDetail"] = stackGroupDriftDetectionDetail ? boost::any(stackGroupDriftDetectionDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("AdministrationRoleName") != m.end() && !m["AdministrationRoleName"].empty()) {
      administrationRoleName = make_shared<string>(boost::any_cast<string>(m["AdministrationRoleName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeploymentTargets") != m.end() && !m["DeploymentTargets"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeploymentTargets"].type()) {
        GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeploymentTargets"]));
        deploymentTargets = make_shared<GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets>(model1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecutionRoleName") != m.end() && !m["ExecutionRoleName"].empty()) {
      executionRoleName = make_shared<string>(boost::any_cast<string>(m["ExecutionRoleName"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperationPreferences"].type()) {
        GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperationPreferences"]));
        operationPreferences = make_shared<GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences>(model1);
      }
    }
    if (m.find("RetainStacks") != m.end() && !m["RetainStacks"].empty()) {
      retainStacks = make_shared<bool>(boost::any_cast<bool>(m["RetainStacks"]));
    }
    if (m.find("StackGroupDriftDetectionDetail") != m.end() && !m["StackGroupDriftDetectionDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["StackGroupDriftDetectionDetail"].type()) {
        GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StackGroupDriftDetectionDetail"]));
        stackGroupDriftDetectionDetail = make_shared<GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail>(model1);
      }
    }
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetStackGroupOperationResponseBodyStackGroupOperation() = default;
};
class GetStackGroupOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetStackGroupOperationResponseBodyStackGroupOperation> stackGroupOperation{};

  GetStackGroupOperationResponseBody() {}

  explicit GetStackGroupOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackGroupOperation) {
      res["StackGroupOperation"] = stackGroupOperation ? boost::any(stackGroupOperation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackGroupOperation") != m.end() && !m["StackGroupOperation"].empty()) {
      if (typeid(map<string, boost::any>) == m["StackGroupOperation"].type()) {
        GetStackGroupOperationResponseBodyStackGroupOperation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StackGroupOperation"]));
        stackGroupOperation = make_shared<GetStackGroupOperationResponseBodyStackGroupOperation>(model1);
      }
    }
  }


  virtual ~GetStackGroupOperationResponseBody() = default;
};
class GetStackGroupOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStackGroupOperationResponseBody> body{};

  GetStackGroupOperationResponse() {}

  explicit GetStackGroupOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStackGroupOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStackGroupOperationResponseBody>(model1);
      }
    }
  }


  virtual ~GetStackGroupOperationResponse() = default;
};
class GetStackInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> stackInstanceAccountId{};
  shared_ptr<string> stackInstanceRegionId{};

  GetStackInstanceRequest() {}

  explicit GetStackInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (stackInstanceAccountId) {
      res["StackInstanceAccountId"] = boost::any(*stackInstanceAccountId);
    }
    if (stackInstanceRegionId) {
      res["StackInstanceRegionId"] = boost::any(*stackInstanceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("StackInstanceAccountId") != m.end() && !m["StackInstanceAccountId"].empty()) {
      stackInstanceAccountId = make_shared<string>(boost::any_cast<string>(m["StackInstanceAccountId"]));
    }
    if (m.find("StackInstanceRegionId") != m.end() && !m["StackInstanceRegionId"].empty()) {
      stackInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["StackInstanceRegionId"]));
    }
  }


  virtual ~GetStackInstanceRequest() = default;
};
class GetStackInstanceResponseBodyStackInstanceParameterOverrides : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetStackInstanceResponseBodyStackInstanceParameterOverrides() {}

  explicit GetStackInstanceResponseBodyStackInstanceParameterOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetStackInstanceResponseBodyStackInstanceParameterOverrides() = default;
};
class GetStackInstanceResponseBodyStackInstance : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<vector<GetStackInstanceResponseBodyStackInstanceParameterOverrides>> parameterOverrides{};
  shared_ptr<string> rdFolderId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackDriftStatus{};
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> stackId{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};

  GetStackInstanceResponseBodyStackInstance() {}

  explicit GetStackInstanceResponseBodyStackInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (parameterOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*parameterOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterOverrides"] = boost::any(temp1);
    }
    if (rdFolderId) {
      res["RdFolderId"] = boost::any(*rdFolderId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackDriftStatus) {
      res["StackDriftStatus"] = boost::any(*stackDriftStatus);
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("ParameterOverrides") != m.end() && !m["ParameterOverrides"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterOverrides"].type()) {
        vector<GetStackInstanceResponseBodyStackInstanceParameterOverrides> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterOverrides"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStackInstanceResponseBodyStackInstanceParameterOverrides model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterOverrides = make_shared<vector<GetStackInstanceResponseBodyStackInstanceParameterOverrides>>(expect1);
      }
    }
    if (m.find("RdFolderId") != m.end() && !m["RdFolderId"].empty()) {
      rdFolderId = make_shared<string>(boost::any_cast<string>(m["RdFolderId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackDriftStatus") != m.end() && !m["StackDriftStatus"].empty()) {
      stackDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackDriftStatus"]));
    }
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
  }


  virtual ~GetStackInstanceResponseBodyStackInstance() = default;
};
class GetStackInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetStackInstanceResponseBodyStackInstance> stackInstance{};

  GetStackInstanceResponseBody() {}

  explicit GetStackInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackInstance) {
      res["StackInstance"] = stackInstance ? boost::any(stackInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackInstance") != m.end() && !m["StackInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["StackInstance"].type()) {
        GetStackInstanceResponseBodyStackInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StackInstance"]));
        stackInstance = make_shared<GetStackInstanceResponseBodyStackInstance>(model1);
      }
    }
  }


  virtual ~GetStackInstanceResponseBody() = default;
};
class GetStackInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStackInstanceResponseBody> body{};

  GetStackInstanceResponse() {}

  explicit GetStackInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStackInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStackInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetStackInstanceResponse() = default;
};
class GetStackPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};

  GetStackPolicyRequest() {}

  explicit GetStackPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~GetStackPolicyRequest() = default;
};
class GetStackPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> stackPolicyBody{};

  GetStackPolicyResponseBody() {}

  explicit GetStackPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["StackPolicyBody"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      stackPolicyBody = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetStackPolicyResponseBody() = default;
};
class GetStackPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStackPolicyResponseBody> body{};

  GetStackPolicyResponse() {}

  explicit GetStackPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStackPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStackPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetStackPolicyResponse() = default;
};
class GetStackResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceAttributes{};
  shared_ptr<bool> showResourceAttributes{};
  shared_ptr<string> stackId{};

  GetStackResourceRequest() {}

  explicit GetStackResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceAttributes) {
      res["ResourceAttributes"] = boost::any(*resourceAttributes);
    }
    if (showResourceAttributes) {
      res["ShowResourceAttributes"] = boost::any(*showResourceAttributes);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceAttributes") != m.end() && !m["ResourceAttributes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceAttributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceAttributes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceAttributes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ShowResourceAttributes") != m.end() && !m["ShowResourceAttributes"].empty()) {
      showResourceAttributes = make_shared<bool>(boost::any_cast<bool>(m["ShowResourceAttributes"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~GetStackResourceRequest() = default;
};
class GetStackResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> resourceAttributes{};
  shared_ptr<string> resourceDriftStatus{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> updateTime{};

  GetStackResourceResponseBody() {}

  explicit GetStackResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceAttributes) {
      res["ResourceAttributes"] = boost::any(*resourceAttributes);
    }
    if (resourceDriftStatus) {
      res["ResourceDriftStatus"] = boost::any(*resourceDriftStatus);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceAttributes") != m.end() && !m["ResourceAttributes"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceAttributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceAttributes"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      resourceAttributes = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("ResourceDriftStatus") != m.end() && !m["ResourceDriftStatus"].empty()) {
      resourceDriftStatus = make_shared<string>(boost::any_cast<string>(m["ResourceDriftStatus"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetStackResourceResponseBody() = default;
};
class GetStackResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStackResourceResponseBody> body{};

  GetStackResourceResponse() {}

  explicit GetStackResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStackResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStackResourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetStackResourceResponse() = default;
};
class GetTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeSetId{};
  shared_ptr<string> includePermission{};
  shared_ptr<string> includeTags{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> stackId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateStage{};
  shared_ptr<string> templateVersion{};

  GetTemplateRequest() {}

  explicit GetTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (includePermission) {
      res["IncludePermission"] = boost::any(*includePermission);
    }
    if (includeTags) {
      res["IncludeTags"] = boost::any(*includeTags);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateStage) {
      res["TemplateStage"] = boost::any(*templateStage);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("IncludePermission") != m.end() && !m["IncludePermission"].empty()) {
      includePermission = make_shared<string>(boost::any_cast<string>(m["IncludePermission"]));
    }
    if (m.find("IncludeTags") != m.end() && !m["IncludeTags"].empty()) {
      includeTags = make_shared<string>(boost::any_cast<string>(m["IncludeTags"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateStage") != m.end() && !m["TemplateStage"].empty()) {
      templateStage = make_shared<string>(boost::any_cast<string>(m["TemplateStage"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~GetTemplateRequest() = default;
};
class GetTemplateResponseBodyPermissions : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> shareOption{};
  shared_ptr<string> shareSource{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> versionOption{};

  GetTemplateResponseBodyPermissions() {}

  explicit GetTemplateResponseBodyPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (shareOption) {
      res["ShareOption"] = boost::any(*shareOption);
    }
    if (shareSource) {
      res["ShareSource"] = boost::any(*shareSource);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (versionOption) {
      res["VersionOption"] = boost::any(*versionOption);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("ShareOption") != m.end() && !m["ShareOption"].empty()) {
      shareOption = make_shared<string>(boost::any_cast<string>(m["ShareOption"]));
    }
    if (m.find("ShareSource") != m.end() && !m["ShareSource"].empty()) {
      shareSource = make_shared<string>(boost::any_cast<string>(m["ShareSource"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("VersionOption") != m.end() && !m["VersionOption"].empty()) {
      versionOption = make_shared<string>(boost::any_cast<string>(m["VersionOption"]));
    }
  }


  virtual ~GetTemplateResponseBodyPermissions() = default;
};
class GetTemplateResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetTemplateResponseBodyTags() {}

  explicit GetTemplateResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetTemplateResponseBodyTags() = default;
};
class GetTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> changeSetId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> interface{};
  shared_ptr<string> ownerId{};
  shared_ptr<vector<GetTemplateResponseBodyPermissions>> permissions{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> stackId{};
  shared_ptr<vector<GetTemplateResponseBodyTags>> tags{};
  shared_ptr<string> templateARN{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updateTime{};

  GetTemplateResponseBody() {}

  explicit GetTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (interface) {
      res["Interface"] = boost::any(*interface);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (permissions) {
      vector<boost::any> temp1;
      for(auto item1:*permissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Permissions"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateARN) {
      res["TemplateARN"] = boost::any(*templateARN);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
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
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Interface") != m.end() && !m["Interface"].empty()) {
      interface = make_shared<string>(boost::any_cast<string>(m["Interface"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      if (typeid(vector<boost::any>) == m["Permissions"].type()) {
        vector<GetTemplateResponseBodyPermissions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Permissions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateResponseBodyPermissions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissions = make_shared<vector<GetTemplateResponseBodyPermissions>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetTemplateResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetTemplateResponseBodyTags>>(expect1);
      }
    }
    if (m.find("TemplateARN") != m.end() && !m["TemplateARN"].empty()) {
      templateARN = make_shared<string>(boost::any_cast<string>(m["TemplateARN"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
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
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetTemplateResponseBody() = default;
};
class GetTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTemplateResponseBody> body{};

  GetTemplateResponse() {}

  explicit GetTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateResponse() = default;
};
class GetTemplateEstimateCostRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetTemplateEstimateCostRequestParameters() {}

  explicit GetTemplateEstimateCostRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetTemplateEstimateCostRequestParameters() = default;
};
class GetTemplateEstimateCostRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<GetTemplateEstimateCostRequestParameters>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateScratchId{};
  shared_ptr<string> templateScratchRegionId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  GetTemplateEstimateCostRequest() {}

  explicit GetTemplateEstimateCostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    if (templateScratchRegionId) {
      res["TemplateScratchRegionId"] = boost::any(*templateScratchRegionId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetTemplateEstimateCostRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateEstimateCostRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetTemplateEstimateCostRequestParameters>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
    if (m.find("TemplateScratchRegionId") != m.end() && !m["TemplateScratchRegionId"].empty()) {
      templateScratchRegionId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchRegionId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~GetTemplateEstimateCostRequest() = default;
};
class GetTemplateEstimateCostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> resources{};

  GetTemplateEstimateCostResponseBody() {}

  explicit GetTemplateEstimateCostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Resources"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resources = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetTemplateEstimateCostResponseBody() = default;
};
class GetTemplateEstimateCostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTemplateEstimateCostResponseBody> body{};

  GetTemplateEstimateCostResponse() {}

  explicit GetTemplateEstimateCostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateEstimateCostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateEstimateCostResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateEstimateCostResponse() = default;
};
class GetTemplateParameterConstraintsRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetTemplateParameterConstraintsRequestParameters() {}

  explicit GetTemplateParameterConstraintsRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetTemplateParameterConstraintsRequestParameters() = default;
};
class GetTemplateParameterConstraintsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<GetTemplateParameterConstraintsRequestParameters>> parameters{};
  shared_ptr<vector<string>> parametersKeyFilter{};
  shared_ptr<vector<string>> parametersOrder{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  GetTemplateParameterConstraintsRequest() {}

  explicit GetTemplateParameterConstraintsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (parametersKeyFilter) {
      res["ParametersKeyFilter"] = boost::any(*parametersKeyFilter);
    }
    if (parametersOrder) {
      res["ParametersOrder"] = boost::any(*parametersOrder);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetTemplateParameterConstraintsRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateParameterConstraintsRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetTemplateParameterConstraintsRequestParameters>>(expect1);
      }
    }
    if (m.find("ParametersKeyFilter") != m.end() && !m["ParametersKeyFilter"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParametersKeyFilter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParametersKeyFilter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parametersKeyFilter = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ParametersOrder") != m.end() && !m["ParametersOrder"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParametersOrder"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParametersOrder"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parametersOrder = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~GetTemplateParameterConstraintsRequest() = default;
};
class GetTemplateParameterConstraintsShrinkRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetTemplateParameterConstraintsShrinkRequestParameters() {}

  explicit GetTemplateParameterConstraintsShrinkRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetTemplateParameterConstraintsShrinkRequestParameters() = default;
};
class GetTemplateParameterConstraintsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<GetTemplateParameterConstraintsShrinkRequestParameters>> parameters{};
  shared_ptr<string> parametersKeyFilterShrink{};
  shared_ptr<string> parametersOrderShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  GetTemplateParameterConstraintsShrinkRequest() {}

  explicit GetTemplateParameterConstraintsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (parametersKeyFilterShrink) {
      res["ParametersKeyFilter"] = boost::any(*parametersKeyFilterShrink);
    }
    if (parametersOrderShrink) {
      res["ParametersOrder"] = boost::any(*parametersOrderShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetTemplateParameterConstraintsShrinkRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateParameterConstraintsShrinkRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetTemplateParameterConstraintsShrinkRequestParameters>>(expect1);
      }
    }
    if (m.find("ParametersKeyFilter") != m.end() && !m["ParametersKeyFilter"].empty()) {
      parametersKeyFilterShrink = make_shared<string>(boost::any_cast<string>(m["ParametersKeyFilter"]));
    }
    if (m.find("ParametersOrder") != m.end() && !m["ParametersOrder"].empty()) {
      parametersOrderShrink = make_shared<string>(boost::any_cast<string>(m["ParametersOrder"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~GetTemplateParameterConstraintsShrinkRequest() = default;
};
class GetTemplateParameterConstraintsResponseBodyParameterConstraints : public Darabonba::Model {
public:
  shared_ptr<vector<string>> allowedValues{};
  shared_ptr<vector<string>> associationParameterNames{};
  shared_ptr<string> behavior{};
  shared_ptr<string> behaviorReason{};
  shared_ptr<vector<boost::any>> illegalValueByParameterConstraints{};
  shared_ptr<vector<boost::any>> illegalValueByRules{};
  shared_ptr<string> parameterKey{};
  shared_ptr<string> type{};

  GetTemplateParameterConstraintsResponseBodyParameterConstraints() {}

  explicit GetTemplateParameterConstraintsResponseBodyParameterConstraints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedValues) {
      res["AllowedValues"] = boost::any(*allowedValues);
    }
    if (associationParameterNames) {
      res["AssociationParameterNames"] = boost::any(*associationParameterNames);
    }
    if (behavior) {
      res["Behavior"] = boost::any(*behavior);
    }
    if (behaviorReason) {
      res["BehaviorReason"] = boost::any(*behaviorReason);
    }
    if (illegalValueByParameterConstraints) {
      res["IllegalValueByParameterConstraints"] = boost::any(*illegalValueByParameterConstraints);
    }
    if (illegalValueByRules) {
      res["IllegalValueByRules"] = boost::any(*illegalValueByRules);
    }
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedValues") != m.end() && !m["AllowedValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AllowedValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowedValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      allowedValues = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AssociationParameterNames") != m.end() && !m["AssociationParameterNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AssociationParameterNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AssociationParameterNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      associationParameterNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Behavior") != m.end() && !m["Behavior"].empty()) {
      behavior = make_shared<string>(boost::any_cast<string>(m["Behavior"]));
    }
    if (m.find("BehaviorReason") != m.end() && !m["BehaviorReason"].empty()) {
      behaviorReason = make_shared<string>(boost::any_cast<string>(m["BehaviorReason"]));
    }
    if (m.find("IllegalValueByParameterConstraints") != m.end() && !m["IllegalValueByParameterConstraints"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["IllegalValueByParameterConstraints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IllegalValueByParameterConstraints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      illegalValueByParameterConstraints = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("IllegalValueByRules") != m.end() && !m["IllegalValueByRules"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["IllegalValueByRules"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IllegalValueByRules"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      illegalValueByRules = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetTemplateParameterConstraintsResponseBodyParameterConstraints() = default;
};
class GetTemplateParameterConstraintsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetTemplateParameterConstraintsResponseBodyParameterConstraints>> parameterConstraints{};
  shared_ptr<string> requestId{};

  GetTemplateParameterConstraintsResponseBody() {}

  explicit GetTemplateParameterConstraintsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterConstraints) {
      vector<boost::any> temp1;
      for(auto item1:*parameterConstraints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterConstraints"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterConstraints") != m.end() && !m["ParameterConstraints"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterConstraints"].type()) {
        vector<GetTemplateParameterConstraintsResponseBodyParameterConstraints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterConstraints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateParameterConstraintsResponseBodyParameterConstraints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterConstraints = make_shared<vector<GetTemplateParameterConstraintsResponseBodyParameterConstraints>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTemplateParameterConstraintsResponseBody() = default;
};
class GetTemplateParameterConstraintsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTemplateParameterConstraintsResponseBody> body{};

  GetTemplateParameterConstraintsResponse() {}

  explicit GetTemplateParameterConstraintsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateParameterConstraintsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateParameterConstraintsResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateParameterConstraintsResponse() = default;
};
class GetTemplateScratchRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> showDataOption{};
  shared_ptr<string> templateScratchId{};

  GetTemplateScratchRequest() {}

  explicit GetTemplateScratchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (showDataOption) {
      res["ShowDataOption"] = boost::any(*showDataOption);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShowDataOption") != m.end() && !m["ShowDataOption"].empty()) {
      showDataOption = make_shared<string>(boost::any_cast<string>(m["ShowDataOption"]));
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
  }


  virtual ~GetTemplateScratchRequest() = default;
};
class GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters() {}

  explicit GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters() = default;
};
class GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> resourceTypeFilter{};

  GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup() {}

  explicit GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTypeFilter) {
      res["ResourceTypeFilter"] = boost::any(*resourceTypeFilter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTypeFilter") != m.end() && !m["ResourceTypeFilter"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypeFilter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypeFilter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypeFilter = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup() = default;
};
class GetTemplateScratchResponseBodyTemplateScratchSourceResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  GetTemplateScratchResponseBodyTemplateScratchSourceResources() {}

  explicit GetTemplateScratchResponseBodyTemplateScratchSourceResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetTemplateScratchResponseBodyTemplateScratchSourceResources() = default;
};
class GetTemplateScratchResponseBodyTemplateScratchSourceTag : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> resourceTags{};
  shared_ptr<vector<string>> resourceTypeFilter{};

  GetTemplateScratchResponseBodyTemplateScratchSourceTag() {}

  explicit GetTemplateScratchResponseBodyTemplateScratchSourceTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceTags) {
      res["ResourceTags"] = boost::any(*resourceTags);
    }
    if (resourceTypeFilter) {
      res["ResourceTypeFilter"] = boost::any(*resourceTypeFilter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceTags") != m.end() && !m["ResourceTags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceTags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceTags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceTypeFilter") != m.end() && !m["ResourceTypeFilter"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypeFilter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypeFilter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypeFilter = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetTemplateScratchResponseBodyTemplateScratchSourceTag() = default;
};
class GetTemplateScratchResponseBodyTemplateScratchStackProvision : public Darabonba::Model {
public:
  shared_ptr<bool> creatable{};
  shared_ptr<bool> importable{};

  GetTemplateScratchResponseBodyTemplateScratchStackProvision() {}

  explicit GetTemplateScratchResponseBodyTemplateScratchStackProvision(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatable) {
      res["Creatable"] = boost::any(*creatable);
    }
    if (importable) {
      res["Importable"] = boost::any(*importable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Creatable") != m.end() && !m["Creatable"].empty()) {
      creatable = make_shared<bool>(boost::any_cast<bool>(m["Creatable"]));
    }
    if (m.find("Importable") != m.end() && !m["Importable"].empty()) {
      importable = make_shared<bool>(boost::any_cast<bool>(m["Importable"]));
    }
  }


  virtual ~GetTemplateScratchResponseBodyTemplateScratchStackProvision() = default;
};
class GetTemplateScratchResponseBodyTemplateScratchStacks : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> usageType{};

  GetTemplateScratchResponseBodyTemplateScratchStacks() {}

  explicit GetTemplateScratchResponseBodyTemplateScratchStacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (usageType) {
      res["UsageType"] = boost::any(*usageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("UsageType") != m.end() && !m["UsageType"].empty()) {
      usageType = make_shared<string>(boost::any_cast<string>(m["UsageType"]));
    }
  }


  virtual ~GetTemplateScratchResponseBodyTemplateScratchStacks() = default;
};
class GetTemplateScratchResponseBodyTemplateScratch : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> failedCode{};
  shared_ptr<string> logicalIdStrategy{};
  shared_ptr<vector<GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters>> preferenceParameters{};
  shared_ptr<GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup> sourceResourceGroup{};
  shared_ptr<vector<GetTemplateScratchResponseBodyTemplateScratchSourceResources>> sourceResources{};
  shared_ptr<GetTemplateScratchResponseBodyTemplateScratchSourceTag> sourceTag{};
  shared_ptr<GetTemplateScratchResponseBodyTemplateScratchStackProvision> stackProvision{};
  shared_ptr<vector<GetTemplateScratchResponseBodyTemplateScratchStacks>> stacks{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};
  shared_ptr<map<string, boost::any>> templateScratchData{};
  shared_ptr<string> templateScratchId{};
  shared_ptr<string> templateScratchType{};
  shared_ptr<string> updateTime{};

  GetTemplateScratchResponseBodyTemplateScratch() {}

  explicit GetTemplateScratchResponseBodyTemplateScratch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (failedCode) {
      res["FailedCode"] = boost::any(*failedCode);
    }
    if (logicalIdStrategy) {
      res["LogicalIdStrategy"] = boost::any(*logicalIdStrategy);
    }
    if (preferenceParameters) {
      vector<boost::any> temp1;
      for(auto item1:*preferenceParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PreferenceParameters"] = boost::any(temp1);
    }
    if (sourceResourceGroup) {
      res["SourceResourceGroup"] = sourceResourceGroup ? boost::any(sourceResourceGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceResources) {
      vector<boost::any> temp1;
      for(auto item1:*sourceResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceResources"] = boost::any(temp1);
    }
    if (sourceTag) {
      res["SourceTag"] = sourceTag ? boost::any(sourceTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stackProvision) {
      res["StackProvision"] = stackProvision ? boost::any(stackProvision->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stacks) {
      vector<boost::any> temp1;
      for(auto item1:*stacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stacks"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (templateScratchData) {
      res["TemplateScratchData"] = boost::any(*templateScratchData);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    if (templateScratchType) {
      res["TemplateScratchType"] = boost::any(*templateScratchType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FailedCode") != m.end() && !m["FailedCode"].empty()) {
      failedCode = make_shared<string>(boost::any_cast<string>(m["FailedCode"]));
    }
    if (m.find("LogicalIdStrategy") != m.end() && !m["LogicalIdStrategy"].empty()) {
      logicalIdStrategy = make_shared<string>(boost::any_cast<string>(m["LogicalIdStrategy"]));
    }
    if (m.find("PreferenceParameters") != m.end() && !m["PreferenceParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["PreferenceParameters"].type()) {
        vector<GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PreferenceParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        preferenceParameters = make_shared<vector<GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters>>(expect1);
      }
    }
    if (m.find("SourceResourceGroup") != m.end() && !m["SourceResourceGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceResourceGroup"].type()) {
        GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceResourceGroup"]));
        sourceResourceGroup = make_shared<GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup>(model1);
      }
    }
    if (m.find("SourceResources") != m.end() && !m["SourceResources"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceResources"].type()) {
        vector<GetTemplateScratchResponseBodyTemplateScratchSourceResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateScratchResponseBodyTemplateScratchSourceResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceResources = make_shared<vector<GetTemplateScratchResponseBodyTemplateScratchSourceResources>>(expect1);
      }
    }
    if (m.find("SourceTag") != m.end() && !m["SourceTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceTag"].type()) {
        GetTemplateScratchResponseBodyTemplateScratchSourceTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceTag"]));
        sourceTag = make_shared<GetTemplateScratchResponseBodyTemplateScratchSourceTag>(model1);
      }
    }
    if (m.find("StackProvision") != m.end() && !m["StackProvision"].empty()) {
      if (typeid(map<string, boost::any>) == m["StackProvision"].type()) {
        GetTemplateScratchResponseBodyTemplateScratchStackProvision model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StackProvision"]));
        stackProvision = make_shared<GetTemplateScratchResponseBodyTemplateScratchStackProvision>(model1);
      }
    }
    if (m.find("Stacks") != m.end() && !m["Stacks"].empty()) {
      if (typeid(vector<boost::any>) == m["Stacks"].type()) {
        vector<GetTemplateScratchResponseBodyTemplateScratchStacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateScratchResponseBodyTemplateScratchStacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stacks = make_shared<vector<GetTemplateScratchResponseBodyTemplateScratchStacks>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("TemplateScratchData") != m.end() && !m["TemplateScratchData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TemplateScratchData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateScratchData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
    if (m.find("TemplateScratchType") != m.end() && !m["TemplateScratchType"].empty()) {
      templateScratchType = make_shared<string>(boost::any_cast<string>(m["TemplateScratchType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetTemplateScratchResponseBodyTemplateScratch() = default;
};
class GetTemplateScratchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTemplateScratchResponseBodyTemplateScratch> templateScratch{};

  GetTemplateScratchResponseBody() {}

  explicit GetTemplateScratchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateScratch) {
      res["TemplateScratch"] = templateScratch ? boost::any(templateScratch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateScratch") != m.end() && !m["TemplateScratch"].empty()) {
      if (typeid(map<string, boost::any>) == m["TemplateScratch"].type()) {
        GetTemplateScratchResponseBodyTemplateScratch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TemplateScratch"]));
        templateScratch = make_shared<GetTemplateScratchResponseBodyTemplateScratch>(model1);
      }
    }
  }


  virtual ~GetTemplateScratchResponseBody() = default;
};
class GetTemplateScratchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTemplateScratchResponseBody> body{};

  GetTemplateScratchResponse() {}

  explicit GetTemplateScratchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateScratchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateScratchResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateScratchResponse() = default;
};
class GetTemplateSummaryRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetTemplateSummaryRequestParameters() {}

  explicit GetTemplateSummaryRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetTemplateSummaryRequestParameters() = default;
};
class GetTemplateSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeSetId{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<GetTemplateSummaryRequestParameters>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> stackId{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  GetTemplateSummaryRequest() {}

  explicit GetTemplateSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetTemplateSummaryRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateSummaryRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetTemplateSummaryRequestParameters>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~GetTemplateSummaryRequest() = default;
};
class GetTemplateSummaryResponseBodyResourceIdentifierSummaries : public Darabonba::Model {
public:
  shared_ptr<vector<string>> logicalResourceIds{};
  shared_ptr<vector<string>> resourceIdentifiers{};
  shared_ptr<string> resourceType{};

  GetTemplateSummaryResponseBodyResourceIdentifierSummaries() {}

  explicit GetTemplateSummaryResponseBodyResourceIdentifierSummaries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicalResourceIds) {
      res["LogicalResourceIds"] = boost::any(*logicalResourceIds);
    }
    if (resourceIdentifiers) {
      res["ResourceIdentifiers"] = boost::any(*resourceIdentifiers);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicalResourceIds") != m.end() && !m["LogicalResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LogicalResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LogicalResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logicalResourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceIdentifiers") != m.end() && !m["ResourceIdentifiers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIdentifiers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIdentifiers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIdentifiers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetTemplateSummaryResponseBodyResourceIdentifierSummaries() = default;
};
class GetTemplateSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<vector<map<string, boost::any>>> parameters{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetTemplateSummaryResponseBodyResourceIdentifierSummaries>> resourceIdentifierSummaries{};
  shared_ptr<vector<string>> resourceTypes{};
  shared_ptr<string> version{};

  GetTemplateSummaryResponseBody() {}

  explicit GetTemplateSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceIdentifierSummaries) {
      vector<boost::any> temp1;
      for(auto item1:*resourceIdentifierSummaries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceIdentifierSummaries"] = boost::any(temp1);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Parameters"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      parameters = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceIdentifierSummaries") != m.end() && !m["ResourceIdentifierSummaries"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceIdentifierSummaries"].type()) {
        vector<GetTemplateSummaryResponseBodyResourceIdentifierSummaries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceIdentifierSummaries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTemplateSummaryResponseBodyResourceIdentifierSummaries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceIdentifierSummaries = make_shared<vector<GetTemplateSummaryResponseBodyResourceIdentifierSummaries>>(expect1);
      }
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetTemplateSummaryResponseBody() = default;
};
class GetTemplateSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTemplateSummaryResponseBody> body{};

  GetTemplateSummaryResponse() {}

  explicit GetTemplateSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateSummaryResponse() = default;
};
class ListChangeSetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeSetId{};
  shared_ptr<vector<string>> changeSetName{};
  shared_ptr<vector<string>> executionStatus{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};
  shared_ptr<vector<string>> status{};

  ListChangeSetsRequest() {}

  explicit ListChangeSetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (changeSetName) {
      res["ChangeSetName"] = boost::any(*changeSetName);
    }
    if (executionStatus) {
      res["ExecutionStatus"] = boost::any(*executionStatus);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("ChangeSetName") != m.end() && !m["ChangeSetName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChangeSetName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChangeSetName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      changeSetName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ExecutionStatus") != m.end() && !m["ExecutionStatus"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExecutionStatus"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExecutionStatus"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      executionStatus = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListChangeSetsRequest() = default;
};
class ListChangeSetsResponseBodyChangeSets : public Darabonba::Model {
public:
  shared_ptr<string> changeSetId{};
  shared_ptr<string> changeSetName{};
  shared_ptr<string> changeSetType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> executionStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};

  ListChangeSetsResponseBodyChangeSets() {}

  explicit ListChangeSetsResponseBodyChangeSets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (changeSetName) {
      res["ChangeSetName"] = boost::any(*changeSetName);
    }
    if (changeSetType) {
      res["ChangeSetType"] = boost::any(*changeSetType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionStatus) {
      res["ExecutionStatus"] = boost::any(*executionStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("ChangeSetName") != m.end() && !m["ChangeSetName"].empty()) {
      changeSetName = make_shared<string>(boost::any_cast<string>(m["ChangeSetName"]));
    }
    if (m.find("ChangeSetType") != m.end() && !m["ChangeSetType"].empty()) {
      changeSetType = make_shared<string>(boost::any_cast<string>(m["ChangeSetType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionStatus") != m.end() && !m["ExecutionStatus"].empty()) {
      executionStatus = make_shared<string>(boost::any_cast<string>(m["ExecutionStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
  }


  virtual ~ListChangeSetsResponseBodyChangeSets() = default;
};
class ListChangeSetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListChangeSetsResponseBodyChangeSets>> changeSets{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListChangeSetsResponseBody() {}

  explicit ListChangeSetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeSets) {
      vector<boost::any> temp1;
      for(auto item1:*changeSets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChangeSets"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("ChangeSets") != m.end() && !m["ChangeSets"].empty()) {
      if (typeid(vector<boost::any>) == m["ChangeSets"].type()) {
        vector<ListChangeSetsResponseBodyChangeSets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChangeSets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChangeSetsResponseBodyChangeSets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeSets = make_shared<vector<ListChangeSetsResponseBodyChangeSets>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListChangeSetsResponseBody() = default;
};
class ListChangeSetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChangeSetsResponseBody> body{};

  ListChangeSetsResponse() {}

  explicit ListChangeSetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChangeSetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChangeSetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListChangeSetsResponse() = default;
};
class ListResourceTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityType{};

  ListResourceTypesRequest() {}

  explicit ListResourceTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
  }


  virtual ~ListResourceTypesRequest() = default;
};
class ListResourceTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resourceTypes{};

  ListResourceTypesResponseBody() {}

  explicit ListResourceTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListResourceTypesResponseBody() = default;
};
class ListResourceTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceTypesResponseBody> body{};

  ListResourceTypesResponse() {}

  explicit ListResourceTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceTypesResponse() = default;
};
class ListStackEventsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> logicalResourceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceType{};
  shared_ptr<string> stackId{};
  shared_ptr<vector<string>> status{};

  ListStackEventsRequest() {}

  explicit ListStackEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LogicalResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LogicalResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logicalResourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceType = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListStackEventsRequest() = default;
};
class ListStackEventsResponseBodyEvents : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> eventId{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};

  ListStackEventsResponseBodyEvents() {}

  explicit ListStackEventsResponseBodyEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
  }


  virtual ~ListStackEventsResponseBodyEvents() = default;
};
class ListStackEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListStackEventsResponseBodyEvents>> events{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListStackEventsResponseBody() {}

  explicit ListStackEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<ListStackEventsResponseBodyEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStackEventsResponseBodyEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<ListStackEventsResponseBodyEvents>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListStackEventsResponseBody() = default;
};
class ListStackEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStackEventsResponseBody> body{};

  ListStackEventsResponse() {}

  explicit ListStackEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListStackEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStackEventsResponseBody>(model1);
      }
    }
  }


  virtual ~ListStackEventsResponse() = default;
};
class ListStackGroupOperationResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  ListStackGroupOperationResultsRequest() {}

  explicit ListStackGroupOperationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
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
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
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


  virtual ~ListStackGroupOperationResultsRequest() = default;
};
class ListStackGroupOperationResultsResponseBodyStackGroupOperationResults : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> rdFolderId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};

  ListStackGroupOperationResultsResponseBodyStackGroupOperationResults() {}

  explicit ListStackGroupOperationResultsResponseBodyStackGroupOperationResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (rdFolderId) {
      res["RdFolderId"] = boost::any(*rdFolderId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("RdFolderId") != m.end() && !m["RdFolderId"].empty()) {
      rdFolderId = make_shared<string>(boost::any_cast<string>(m["RdFolderId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
  }


  virtual ~ListStackGroupOperationResultsResponseBodyStackGroupOperationResults() = default;
};
class ListStackGroupOperationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListStackGroupOperationResultsResponseBodyStackGroupOperationResults>> stackGroupOperationResults{};
  shared_ptr<long> totalCount{};

  ListStackGroupOperationResultsResponseBody() {}

  explicit ListStackGroupOperationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackGroupOperationResults) {
      vector<boost::any> temp1;
      for(auto item1:*stackGroupOperationResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StackGroupOperationResults"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackGroupOperationResults") != m.end() && !m["StackGroupOperationResults"].empty()) {
      if (typeid(vector<boost::any>) == m["StackGroupOperationResults"].type()) {
        vector<ListStackGroupOperationResultsResponseBodyStackGroupOperationResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StackGroupOperationResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStackGroupOperationResultsResponseBodyStackGroupOperationResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stackGroupOperationResults = make_shared<vector<ListStackGroupOperationResultsResponseBodyStackGroupOperationResults>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListStackGroupOperationResultsResponseBody() = default;
};
class ListStackGroupOperationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStackGroupOperationResultsResponseBody> body{};

  ListStackGroupOperationResultsResponse() {}

  explicit ListStackGroupOperationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListStackGroupOperationResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStackGroupOperationResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListStackGroupOperationResultsResponse() = default;
};
class ListStackGroupOperationsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};

  ListStackGroupOperationsRequest() {}

  explicit ListStackGroupOperationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
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
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
  }


  virtual ~ListStackGroupOperationsRequest() = default;
};
class ListStackGroupOperationsResponseBodyStackGroupOperations : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationId{};
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> status{};

  ListStackGroupOperationsResponseBodyStackGroupOperations() {}

  explicit ListStackGroupOperationsResponseBodyStackGroupOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListStackGroupOperationsResponseBodyStackGroupOperations() = default;
};
class ListStackGroupOperationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListStackGroupOperationsResponseBodyStackGroupOperations>> stackGroupOperations{};
  shared_ptr<long> totalCount{};

  ListStackGroupOperationsResponseBody() {}

  explicit ListStackGroupOperationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackGroupOperations) {
      vector<boost::any> temp1;
      for(auto item1:*stackGroupOperations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StackGroupOperations"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackGroupOperations") != m.end() && !m["StackGroupOperations"].empty()) {
      if (typeid(vector<boost::any>) == m["StackGroupOperations"].type()) {
        vector<ListStackGroupOperationsResponseBodyStackGroupOperations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StackGroupOperations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStackGroupOperationsResponseBodyStackGroupOperations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stackGroupOperations = make_shared<vector<ListStackGroupOperationsResponseBodyStackGroupOperations>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListStackGroupOperationsResponseBody() = default;
};
class ListStackGroupOperationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStackGroupOperationsResponseBody> body{};

  ListStackGroupOperationsResponse() {}

  explicit ListStackGroupOperationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListStackGroupOperationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStackGroupOperationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListStackGroupOperationsResponse() = default;
};
class ListStackGroupsRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListStackGroupsRequestTags() {}

  explicit ListStackGroupsRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListStackGroupsRequestTags() = default;
};
class ListStackGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListStackGroupsRequestTags>> tags{};

  ListStackGroupsRequest() {}

  explicit ListStackGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListStackGroupsRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStackGroupsRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListStackGroupsRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListStackGroupsRequest() = default;
};
class ListStackGroupsResponseBodyStackGroupsAutoDeployment : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<bool> retainStacksOnAccountRemoval{};

  ListStackGroupsResponseBodyStackGroupsAutoDeployment() {}

  explicit ListStackGroupsResponseBodyStackGroupsAutoDeployment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (retainStacksOnAccountRemoval) {
      res["RetainStacksOnAccountRemoval"] = boost::any(*retainStacksOnAccountRemoval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("RetainStacksOnAccountRemoval") != m.end() && !m["RetainStacksOnAccountRemoval"].empty()) {
      retainStacksOnAccountRemoval = make_shared<bool>(boost::any_cast<bool>(m["RetainStacksOnAccountRemoval"]));
    }
  }


  virtual ~ListStackGroupsResponseBodyStackGroupsAutoDeployment() = default;
};
class ListStackGroupsResponseBodyStackGroupsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListStackGroupsResponseBodyStackGroupsTags() {}

  explicit ListStackGroupsResponseBodyStackGroupsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListStackGroupsResponseBodyStackGroupsTags() = default;
};
class ListStackGroupsResponseBodyStackGroups : public Darabonba::Model {
public:
  shared_ptr<ListStackGroupsResponseBodyStackGroupsAutoDeployment> autoDeployment{};
  shared_ptr<string> description{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> permissionModel{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> stackGroupDriftStatus{};
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListStackGroupsResponseBodyStackGroupsTags>> tags{};

  ListStackGroupsResponseBodyStackGroups() {}

  explicit ListStackGroupsResponseBodyStackGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoDeployment) {
      res["AutoDeployment"] = autoDeployment ? boost::any(autoDeployment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (permissionModel) {
      res["PermissionModel"] = boost::any(*permissionModel);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (stackGroupDriftStatus) {
      res["StackGroupDriftStatus"] = boost::any(*stackGroupDriftStatus);
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoDeployment") != m.end() && !m["AutoDeployment"].empty()) {
      if (typeid(map<string, boost::any>) == m["AutoDeployment"].type()) {
        ListStackGroupsResponseBodyStackGroupsAutoDeployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AutoDeployment"]));
        autoDeployment = make_shared<ListStackGroupsResponseBodyStackGroupsAutoDeployment>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("PermissionModel") != m.end() && !m["PermissionModel"].empty()) {
      permissionModel = make_shared<string>(boost::any_cast<string>(m["PermissionModel"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StackGroupDriftStatus") != m.end() && !m["StackGroupDriftStatus"].empty()) {
      stackGroupDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackGroupDriftStatus"]));
    }
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListStackGroupsResponseBodyStackGroupsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStackGroupsResponseBodyStackGroupsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListStackGroupsResponseBodyStackGroupsTags>>(expect1);
      }
    }
  }


  virtual ~ListStackGroupsResponseBodyStackGroups() = default;
};
class ListStackGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListStackGroupsResponseBodyStackGroups>> stackGroups{};
  shared_ptr<long> totalCount{};

  ListStackGroupsResponseBody() {}

  explicit ListStackGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackGroups) {
      vector<boost::any> temp1;
      for(auto item1:*stackGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StackGroups"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackGroups") != m.end() && !m["StackGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["StackGroups"].type()) {
        vector<ListStackGroupsResponseBodyStackGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StackGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStackGroupsResponseBodyStackGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stackGroups = make_shared<vector<ListStackGroupsResponseBodyStackGroups>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListStackGroupsResponseBody() = default;
};
class ListStackGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStackGroupsResponseBody> body{};

  ListStackGroupsResponse() {}

  explicit ListStackGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListStackGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStackGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListStackGroupsResponse() = default;
};
class ListStackInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> stackInstanceAccountId{};
  shared_ptr<string> stackInstanceRegionId{};

  ListStackInstancesRequest() {}

  explicit ListStackInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (stackInstanceAccountId) {
      res["StackInstanceAccountId"] = boost::any(*stackInstanceAccountId);
    }
    if (stackInstanceRegionId) {
      res["StackInstanceRegionId"] = boost::any(*stackInstanceRegionId);
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
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("StackInstanceAccountId") != m.end() && !m["StackInstanceAccountId"].empty()) {
      stackInstanceAccountId = make_shared<string>(boost::any_cast<string>(m["StackInstanceAccountId"]));
    }
    if (m.find("StackInstanceRegionId") != m.end() && !m["StackInstanceRegionId"].empty()) {
      stackInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["StackInstanceRegionId"]));
    }
  }


  virtual ~ListStackInstancesRequest() = default;
};
class ListStackInstancesResponseBodyStackInstances : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> rdFolderId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackDriftStatus{};
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> stackId{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};

  ListStackInstancesResponseBodyStackInstances() {}

  explicit ListStackInstancesResponseBodyStackInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (rdFolderId) {
      res["RdFolderId"] = boost::any(*rdFolderId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackDriftStatus) {
      res["StackDriftStatus"] = boost::any(*stackDriftStatus);
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("RdFolderId") != m.end() && !m["RdFolderId"].empty()) {
      rdFolderId = make_shared<string>(boost::any_cast<string>(m["RdFolderId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackDriftStatus") != m.end() && !m["StackDriftStatus"].empty()) {
      stackDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackDriftStatus"]));
    }
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
  }


  virtual ~ListStackInstancesResponseBodyStackInstances() = default;
};
class ListStackInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListStackInstancesResponseBodyStackInstances>> stackInstances{};
  shared_ptr<long> totalCount{};

  ListStackInstancesResponseBody() {}

  explicit ListStackInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackInstances) {
      vector<boost::any> temp1;
      for(auto item1:*stackInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StackInstances"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackInstances") != m.end() && !m["StackInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["StackInstances"].type()) {
        vector<ListStackInstancesResponseBodyStackInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StackInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStackInstancesResponseBodyStackInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stackInstances = make_shared<vector<ListStackInstancesResponseBodyStackInstances>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListStackInstancesResponseBody() = default;
};
class ListStackInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStackInstancesResponseBody> body{};

  ListStackInstancesResponse() {}

  explicit ListStackInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListStackInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStackInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListStackInstancesResponse() = default;
};
class ListStackOperationRisksRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> operationType{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> retainAllResources{};
  shared_ptr<vector<string>> retainResources{};
  shared_ptr<string> stackId{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  ListStackOperationRisksRequest() {}

  explicit ListStackOperationRisksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (retainAllResources) {
      res["RetainAllResources"] = boost::any(*retainAllResources);
    }
    if (retainResources) {
      res["RetainResources"] = boost::any(*retainResources);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RetainAllResources") != m.end() && !m["RetainAllResources"].empty()) {
      retainAllResources = make_shared<bool>(boost::any_cast<bool>(m["RetainAllResources"]));
    }
    if (m.find("RetainResources") != m.end() && !m["RetainResources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RetainResources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RetainResources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      retainResources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~ListStackOperationRisksRequest() = default;
};
class ListStackOperationRisksResponseBodyRiskResources : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> message{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<string> reason{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> riskType{};

  ListStackOperationRisksResponseBodyRiskResources() {}

  explicit ListStackOperationRisksResponseBodyRiskResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (riskType) {
      res["RiskType"] = boost::any(*riskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RiskType") != m.end() && !m["RiskType"].empty()) {
      riskType = make_shared<string>(boost::any_cast<string>(m["RiskType"]));
    }
  }


  virtual ~ListStackOperationRisksResponseBodyRiskResources() = default;
};
class ListStackOperationRisksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> missingPolicyActions{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListStackOperationRisksResponseBodyRiskResources>> riskResources{};

  ListStackOperationRisksResponseBody() {}

  explicit ListStackOperationRisksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (missingPolicyActions) {
      res["MissingPolicyActions"] = boost::any(*missingPolicyActions);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (riskResources) {
      vector<boost::any> temp1;
      for(auto item1:*riskResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RiskResources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MissingPolicyActions") != m.end() && !m["MissingPolicyActions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MissingPolicyActions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MissingPolicyActions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      missingPolicyActions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RiskResources") != m.end() && !m["RiskResources"].empty()) {
      if (typeid(vector<boost::any>) == m["RiskResources"].type()) {
        vector<ListStackOperationRisksResponseBodyRiskResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RiskResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStackOperationRisksResponseBodyRiskResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        riskResources = make_shared<vector<ListStackOperationRisksResponseBodyRiskResources>>(expect1);
      }
    }
  }


  virtual ~ListStackOperationRisksResponseBody() = default;
};
class ListStackOperationRisksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStackOperationRisksResponseBody> body{};

  ListStackOperationRisksResponse() {}

  explicit ListStackOperationRisksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListStackOperationRisksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStackOperationRisksResponseBody>(model1);
      }
    }
  }


  virtual ~ListStackOperationRisksResponse() = default;
};
class ListStackResourceDriftsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceDriftStatus{};
  shared_ptr<string> stackId{};

  ListStackResourceDriftsRequest() {}

  explicit ListStackResourceDriftsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceDriftStatus) {
      res["ResourceDriftStatus"] = boost::any(*resourceDriftStatus);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
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
    if (m.find("ResourceDriftStatus") != m.end() && !m["ResourceDriftStatus"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceDriftStatus"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceDriftStatus"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceDriftStatus = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~ListStackResourceDriftsRequest() = default;
};
class ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences : public Darabonba::Model {
public:
  shared_ptr<string> actualValue{};
  shared_ptr<string> differenceType{};
  shared_ptr<string> expectedValue{};
  shared_ptr<string> propertyPath{};

  ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences() {}

  explicit ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualValue) {
      res["ActualValue"] = boost::any(*actualValue);
    }
    if (differenceType) {
      res["DifferenceType"] = boost::any(*differenceType);
    }
    if (expectedValue) {
      res["ExpectedValue"] = boost::any(*expectedValue);
    }
    if (propertyPath) {
      res["PropertyPath"] = boost::any(*propertyPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualValue") != m.end() && !m["ActualValue"].empty()) {
      actualValue = make_shared<string>(boost::any_cast<string>(m["ActualValue"]));
    }
    if (m.find("DifferenceType") != m.end() && !m["DifferenceType"].empty()) {
      differenceType = make_shared<string>(boost::any_cast<string>(m["DifferenceType"]));
    }
    if (m.find("ExpectedValue") != m.end() && !m["ExpectedValue"].empty()) {
      expectedValue = make_shared<string>(boost::any_cast<string>(m["ExpectedValue"]));
    }
    if (m.find("PropertyPath") != m.end() && !m["PropertyPath"].empty()) {
      propertyPath = make_shared<string>(boost::any_cast<string>(m["PropertyPath"]));
    }
  }


  virtual ~ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences() = default;
};
class ListStackResourceDriftsResponseBodyResourceDrifts : public Darabonba::Model {
public:
  shared_ptr<string> actualProperties{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> expectedProperties{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<vector<ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences>> propertyDifferences{};
  shared_ptr<string> resourceDriftStatus{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> stackId{};

  ListStackResourceDriftsResponseBodyResourceDrifts() {}

  explicit ListStackResourceDriftsResponseBodyResourceDrifts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualProperties) {
      res["ActualProperties"] = boost::any(*actualProperties);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (expectedProperties) {
      res["ExpectedProperties"] = boost::any(*expectedProperties);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (propertyDifferences) {
      vector<boost::any> temp1;
      for(auto item1:*propertyDifferences){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyDifferences"] = boost::any(temp1);
    }
    if (resourceDriftStatus) {
      res["ResourceDriftStatus"] = boost::any(*resourceDriftStatus);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualProperties") != m.end() && !m["ActualProperties"].empty()) {
      actualProperties = make_shared<string>(boost::any_cast<string>(m["ActualProperties"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("ExpectedProperties") != m.end() && !m["ExpectedProperties"].empty()) {
      expectedProperties = make_shared<string>(boost::any_cast<string>(m["ExpectedProperties"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("PropertyDifferences") != m.end() && !m["PropertyDifferences"].empty()) {
      if (typeid(vector<boost::any>) == m["PropertyDifferences"].type()) {
        vector<ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PropertyDifferences"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        propertyDifferences = make_shared<vector<ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences>>(expect1);
      }
    }
    if (m.find("ResourceDriftStatus") != m.end() && !m["ResourceDriftStatus"].empty()) {
      resourceDriftStatus = make_shared<string>(boost::any_cast<string>(m["ResourceDriftStatus"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~ListStackResourceDriftsResponseBodyResourceDrifts() = default;
};
class ListStackResourceDriftsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListStackResourceDriftsResponseBodyResourceDrifts>> resourceDrifts{};

  ListStackResourceDriftsResponseBody() {}

  explicit ListStackResourceDriftsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceDrifts) {
      vector<boost::any> temp1;
      for(auto item1:*resourceDrifts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceDrifts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceDrifts") != m.end() && !m["ResourceDrifts"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceDrifts"].type()) {
        vector<ListStackResourceDriftsResponseBodyResourceDrifts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceDrifts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStackResourceDriftsResponseBodyResourceDrifts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceDrifts = make_shared<vector<ListStackResourceDriftsResponseBodyResourceDrifts>>(expect1);
      }
    }
  }


  virtual ~ListStackResourceDriftsResponseBody() = default;
};
class ListStackResourceDriftsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStackResourceDriftsResponseBody> body{};

  ListStackResourceDriftsResponse() {}

  explicit ListStackResourceDriftsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListStackResourceDriftsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStackResourceDriftsResponseBody>(model1);
      }
    }
  }


  virtual ~ListStackResourceDriftsResponse() = default;
};
class ListStackResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};

  ListStackResourcesRequest() {}

  explicit ListStackResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~ListStackResourcesRequest() = default;
};
class ListStackResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<string> resourceDriftStatus{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> updateTime{};

  ListStackResourcesResponseBodyResources() {}

  explicit ListStackResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (resourceDriftStatus) {
      res["ResourceDriftStatus"] = boost::any(*resourceDriftStatus);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("ResourceDriftStatus") != m.end() && !m["ResourceDriftStatus"].empty()) {
      resourceDriftStatus = make_shared<string>(boost::any_cast<string>(m["ResourceDriftStatus"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListStackResourcesResponseBodyResources() = default;
};
class ListStackResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListStackResourcesResponseBodyResources>> resources{};

  ListStackResourcesResponseBody() {}

  explicit ListStackResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<ListStackResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStackResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListStackResourcesResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~ListStackResourcesResponseBody() = default;
};
class ListStackResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStackResourcesResponseBody> body{};

  ListStackResourcesResponse() {}

  explicit ListStackResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListStackResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStackResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListStackResourcesResponse() = default;
};
class ListStacksRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListStacksRequestTag() {}

  explicit ListStacksRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListStacksRequestTag() = default;
};
class ListStacksRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentStackId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> showNestedStack{};
  shared_ptr<string> stackId{};
  shared_ptr<vector<string>> stackIds{};
  shared_ptr<vector<string>> stackName{};
  shared_ptr<vector<string>> status{};
  shared_ptr<vector<ListStacksRequestTag>> tag{};

  ListStacksRequest() {}

  explicit ListStacksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (parentStackId) {
      res["ParentStackId"] = boost::any(*parentStackId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (showNestedStack) {
      res["ShowNestedStack"] = boost::any(*showNestedStack);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackIds) {
      res["StackIds"] = boost::any(*stackIds);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
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
    if (m.find("ParentStackId") != m.end() && !m["ParentStackId"].empty()) {
      parentStackId = make_shared<string>(boost::any_cast<string>(m["ParentStackId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShowNestedStack") != m.end() && !m["ShowNestedStack"].empty()) {
      showNestedStack = make_shared<bool>(boost::any_cast<bool>(m["ShowNestedStack"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackIds") != m.end() && !m["StackIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StackIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StackIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      stackIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StackName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StackName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      stackName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListStacksRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStacksRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListStacksRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListStacksRequest() = default;
};
class ListStacksResponseBodyStacksOperationInfo : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> code{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceType{};

  ListStacksResponseBodyStacksOperationInfo() {}

  explicit ListStacksResponseBodyStacksOperationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListStacksResponseBodyStacksOperationInfo() = default;
};
class ListStacksResponseBodyStacksTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListStacksResponseBodyStacksTags() {}

  explicit ListStacksResponseBodyStacksTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListStacksResponseBodyStacksTags() = default;
};
class ListStacksResponseBodyStacks : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<ListStacksResponseBodyStacksOperationInfo> operationInfo{};
  shared_ptr<string> parentStackId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> serviceManaged{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> stackDriftStatus{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> stackType{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};
  shared_ptr<vector<ListStacksResponseBodyStacksTags>> tags{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<string> updateTime{};

  ListStacksResponseBodyStacks() {}

  explicit ListStacksResponseBodyStacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (operationInfo) {
      res["OperationInfo"] = operationInfo ? boost::any(operationInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parentStackId) {
      res["ParentStackId"] = boost::any(*parentStackId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceManaged) {
      res["ServiceManaged"] = boost::any(*serviceManaged);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (stackDriftStatus) {
      res["StackDriftStatus"] = boost::any(*stackDriftStatus);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (stackType) {
      res["StackType"] = boost::any(*stackType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("OperationInfo") != m.end() && !m["OperationInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperationInfo"].type()) {
        ListStacksResponseBodyStacksOperationInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperationInfo"]));
        operationInfo = make_shared<ListStacksResponseBodyStacksOperationInfo>(model1);
      }
    }
    if (m.find("ParentStackId") != m.end() && !m["ParentStackId"].empty()) {
      parentStackId = make_shared<string>(boost::any_cast<string>(m["ParentStackId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceManaged") != m.end() && !m["ServiceManaged"].empty()) {
      serviceManaged = make_shared<bool>(boost::any_cast<bool>(m["ServiceManaged"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StackDriftStatus") != m.end() && !m["StackDriftStatus"].empty()) {
      stackDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackDriftStatus"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("StackType") != m.end() && !m["StackType"].empty()) {
      stackType = make_shared<string>(boost::any_cast<string>(m["StackType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListStacksResponseBodyStacksTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStacksResponseBodyStacksTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListStacksResponseBodyStacksTags>>(expect1);
      }
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListStacksResponseBodyStacks() = default;
};
class ListStacksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListStacksResponseBodyStacks>> stacks{};
  shared_ptr<long> totalCount{};

  ListStacksResponseBody() {}

  explicit ListStacksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stacks) {
      vector<boost::any> temp1;
      for(auto item1:*stacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stacks"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Stacks") != m.end() && !m["Stacks"].empty()) {
      if (typeid(vector<boost::any>) == m["Stacks"].type()) {
        vector<ListStacksResponseBodyStacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStacksResponseBodyStacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stacks = make_shared<vector<ListStacksResponseBodyStacks>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListStacksResponseBody() = default;
};
class ListStacksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStacksResponseBody> body{};

  ListStacksResponse() {}

  explicit ListStacksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListStacksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStacksResponseBody>(model1);
      }
    }
  }


  virtual ~ListStacksResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keys{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      res["Keys"] = boost::any(*keys);
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
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListTagKeysResponseBody() = default;
};
class ListTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagKeysResponseBody> body{};

  ListTagKeysResponse() {}

  explicit ListTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagKeysResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResources"].type()) {
        vector<ListTagResourcesResponseBodyTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyTagResources>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ListTagValuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};

  ListTagValuesRequest() {}

  explicit ListTagValuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListTagValuesRequest() = default;
};
class ListTagValuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> values{};

  ListTagValuesResponseBody() {}

  explicit ListTagValuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTagValuesResponseBody() = default;
};
class ListTagValuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagValuesResponseBody> body{};

  ListTagValuesResponse() {}

  explicit ListTagValuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagValuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagValuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagValuesResponse() = default;
};
class ListTemplateScratchesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTemplateScratchesRequestTags() {}

  explicit ListTemplateScratchesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTemplateScratchesRequestTags() = default;
};
class ListTemplateScratchesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListTemplateScratchesRequestTags>> tags{};
  shared_ptr<string> templateScratchId{};
  shared_ptr<string> templateScratchType{};

  ListTemplateScratchesRequest() {}

  explicit ListTemplateScratchesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    if (templateScratchType) {
      res["TemplateScratchType"] = boost::any(*templateScratchType);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListTemplateScratchesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplateScratchesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTemplateScratchesRequestTags>>(expect1);
      }
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
    if (m.find("TemplateScratchType") != m.end() && !m["TemplateScratchType"].empty()) {
      templateScratchType = make_shared<string>(boost::any_cast<string>(m["TemplateScratchType"]));
    }
  }


  virtual ~ListTemplateScratchesRequest() = default;
};
class ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters() {}

  explicit ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters() = default;
};
class ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> resourceTypeFilter{};

  ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup() {}

  explicit ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTypeFilter) {
      res["ResourceTypeFilter"] = boost::any(*resourceTypeFilter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTypeFilter") != m.end() && !m["ResourceTypeFilter"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypeFilter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypeFilter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypeFilter = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup() = default;
};
class ListTemplateScratchesResponseBodyTemplateScratchesSourceResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ListTemplateScratchesResponseBodyTemplateScratchesSourceResources() {}

  explicit ListTemplateScratchesResponseBodyTemplateScratchesSourceResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListTemplateScratchesResponseBodyTemplateScratchesSourceResources() = default;
};
class ListTemplateScratchesResponseBodyTemplateScratchesSourceTag : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> resourceTags{};
  shared_ptr<vector<string>> resourceTypeFilter{};

  ListTemplateScratchesResponseBodyTemplateScratchesSourceTag() {}

  explicit ListTemplateScratchesResponseBodyTemplateScratchesSourceTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceTags) {
      res["ResourceTags"] = boost::any(*resourceTags);
    }
    if (resourceTypeFilter) {
      res["ResourceTypeFilter"] = boost::any(*resourceTypeFilter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceTags") != m.end() && !m["ResourceTags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceTags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceTags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceTypeFilter") != m.end() && !m["ResourceTypeFilter"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypeFilter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypeFilter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypeFilter = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTemplateScratchesResponseBodyTemplateScratchesSourceTag() = default;
};
class ListTemplateScratchesResponseBodyTemplateScratchesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTemplateScratchesResponseBodyTemplateScratchesTags() {}

  explicit ListTemplateScratchesResponseBodyTemplateScratchesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTemplateScratchesResponseBodyTemplateScratchesTags() = default;
};
class ListTemplateScratchesResponseBodyTemplateScratches : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> failedCode{};
  shared_ptr<string> logicalIdStrategy{};
  shared_ptr<vector<ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters>> preferenceParameters{};
  shared_ptr<ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup> sourceResourceGroup{};
  shared_ptr<vector<ListTemplateScratchesResponseBodyTemplateScratchesSourceResources>> sourceResources{};
  shared_ptr<ListTemplateScratchesResponseBodyTemplateScratchesSourceTag> sourceTag{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};
  shared_ptr<vector<ListTemplateScratchesResponseBodyTemplateScratchesTags>> tags{};
  shared_ptr<string> templateScratchId{};
  shared_ptr<string> templateScratchType{};
  shared_ptr<string> updateTime{};

  ListTemplateScratchesResponseBodyTemplateScratches() {}

  explicit ListTemplateScratchesResponseBodyTemplateScratches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (failedCode) {
      res["FailedCode"] = boost::any(*failedCode);
    }
    if (logicalIdStrategy) {
      res["LogicalIdStrategy"] = boost::any(*logicalIdStrategy);
    }
    if (preferenceParameters) {
      vector<boost::any> temp1;
      for(auto item1:*preferenceParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PreferenceParameters"] = boost::any(temp1);
    }
    if (sourceResourceGroup) {
      res["SourceResourceGroup"] = sourceResourceGroup ? boost::any(sourceResourceGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceResources) {
      vector<boost::any> temp1;
      for(auto item1:*sourceResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceResources"] = boost::any(temp1);
    }
    if (sourceTag) {
      res["SourceTag"] = sourceTag ? boost::any(sourceTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    if (templateScratchType) {
      res["TemplateScratchType"] = boost::any(*templateScratchType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FailedCode") != m.end() && !m["FailedCode"].empty()) {
      failedCode = make_shared<string>(boost::any_cast<string>(m["FailedCode"]));
    }
    if (m.find("LogicalIdStrategy") != m.end() && !m["LogicalIdStrategy"].empty()) {
      logicalIdStrategy = make_shared<string>(boost::any_cast<string>(m["LogicalIdStrategy"]));
    }
    if (m.find("PreferenceParameters") != m.end() && !m["PreferenceParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["PreferenceParameters"].type()) {
        vector<ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PreferenceParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        preferenceParameters = make_shared<vector<ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters>>(expect1);
      }
    }
    if (m.find("SourceResourceGroup") != m.end() && !m["SourceResourceGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceResourceGroup"].type()) {
        ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceResourceGroup"]));
        sourceResourceGroup = make_shared<ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup>(model1);
      }
    }
    if (m.find("SourceResources") != m.end() && !m["SourceResources"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceResources"].type()) {
        vector<ListTemplateScratchesResponseBodyTemplateScratchesSourceResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplateScratchesResponseBodyTemplateScratchesSourceResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceResources = make_shared<vector<ListTemplateScratchesResponseBodyTemplateScratchesSourceResources>>(expect1);
      }
    }
    if (m.find("SourceTag") != m.end() && !m["SourceTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceTag"].type()) {
        ListTemplateScratchesResponseBodyTemplateScratchesSourceTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceTag"]));
        sourceTag = make_shared<ListTemplateScratchesResponseBodyTemplateScratchesSourceTag>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListTemplateScratchesResponseBodyTemplateScratchesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplateScratchesResponseBodyTemplateScratchesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTemplateScratchesResponseBodyTemplateScratchesTags>>(expect1);
      }
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
    if (m.find("TemplateScratchType") != m.end() && !m["TemplateScratchType"].empty()) {
      templateScratchType = make_shared<string>(boost::any_cast<string>(m["TemplateScratchType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListTemplateScratchesResponseBodyTemplateScratches() = default;
};
class ListTemplateScratchesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTemplateScratchesResponseBodyTemplateScratches>> templateScratches{};
  shared_ptr<long> totalCount{};

  ListTemplateScratchesResponseBody() {}

  explicit ListTemplateScratchesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateScratches) {
      vector<boost::any> temp1;
      for(auto item1:*templateScratches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplateScratches"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateScratches") != m.end() && !m["TemplateScratches"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplateScratches"].type()) {
        vector<ListTemplateScratchesResponseBodyTemplateScratches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplateScratches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplateScratchesResponseBodyTemplateScratches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templateScratches = make_shared<vector<ListTemplateScratchesResponseBodyTemplateScratches>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTemplateScratchesResponseBody() = default;
};
class ListTemplateScratchesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTemplateScratchesResponseBody> body{};

  ListTemplateScratchesResponse() {}

  explicit ListTemplateScratchesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTemplateScratchesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTemplateScratchesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTemplateScratchesResponse() = default;
};
class ListTemplateVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> templateId{};

  ListTemplateVersionsRequest() {}

  explicit ListTemplateVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
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
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~ListTemplateVersionsRequest() = default;
};
class ListTemplateVersionsResponseBodyVersions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updateTime{};

  ListTemplateVersionsResponseBodyVersions() {}

  explicit ListTemplateVersionsResponseBodyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListTemplateVersionsResponseBodyVersions() = default;
};
class ListTemplateVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTemplateVersionsResponseBodyVersions>> versions{};

  ListTemplateVersionsResponseBody() {}

  explicit ListTemplateVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Versions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      if (typeid(vector<boost::any>) == m["Versions"].type()) {
        vector<ListTemplateVersionsResponseBodyVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplateVersionsResponseBodyVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<ListTemplateVersionsResponseBodyVersions>>(expect1);
      }
    }
  }


  virtual ~ListTemplateVersionsResponseBody() = default;
};
class ListTemplateVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTemplateVersionsResponseBody> body{};

  ListTemplateVersionsResponse() {}

  explicit ListTemplateVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTemplateVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTemplateVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTemplateVersionsResponse() = default;
};
class ListTemplatesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTemplatesRequestTag() {}

  explicit ListTemplatesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTemplatesRequestTag() = default;
};
class ListTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> includeTags{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<vector<ListTemplatesRequestTag>> tag{};
  shared_ptr<string> templateName{};

  ListTemplatesRequest() {}

  explicit ListTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (includeTags) {
      res["IncludeTags"] = boost::any(*includeTags);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IncludeTags") != m.end() && !m["IncludeTags"].empty()) {
      includeTags = make_shared<string>(boost::any_cast<string>(m["IncludeTags"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTemplatesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplatesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTemplatesRequestTag>>(expect1);
      }
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ListTemplatesRequest() = default;
};
class ListTemplatesResponseBodyTemplatesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTemplatesResponseBodyTemplatesTags() {}

  explicit ListTemplatesResponseBodyTemplatesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTemplatesResponseBodyTemplatesTags() = default;
};
class ListTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<vector<ListTemplatesResponseBodyTemplatesTags>> tags{};
  shared_ptr<string> templateARN{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updateTime{};

  ListTemplatesResponseBodyTemplates() {}

  explicit ListTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateARN) {
      res["TemplateARN"] = boost::any(*templateARN);
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
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListTemplatesResponseBodyTemplatesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplatesResponseBodyTemplatesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTemplatesResponseBodyTemplatesTags>>(expect1);
      }
    }
    if (m.find("TemplateARN") != m.end() && !m["TemplateARN"].empty()) {
      templateARN = make_shared<string>(boost::any_cast<string>(m["TemplateARN"]));
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
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListTemplatesResponseBodyTemplates() = default;
};
class ListTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTemplatesResponseBodyTemplates>> templates{};
  shared_ptr<long> totalCount{};

  ListTemplatesResponseBody() {}

  explicit ListTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<ListTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<ListTemplatesResponseBodyTemplates>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTemplatesResponseBody() = default;
};
class ListTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTemplatesResponseBody> body{};

  ListTemplatesResponse() {}

  explicit ListTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTemplatesResponse() = default;
};
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~MoveResourceGroupRequest() = default;
};
class MoveResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveResourceGroupResponseBody() {}

  explicit MoveResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MoveResourceGroupResponseBody() = default;
};
class MoveResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveResourceGroupResponseBody> body{};

  MoveResourceGroupResponse() {}

  explicit MoveResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourceGroupResponse() = default;
};
class PreviewStackRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  PreviewStackRequestParameters() {}

  explicit PreviewStackRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~PreviewStackRequestParameters() = default;
};
class PreviewStackRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<bool> enablePreConfig{};
  shared_ptr<long> parallelism{};
  shared_ptr<vector<PreviewStackRequestParameters>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> stackPolicyBody{};
  shared_ptr<string> stackPolicyURL{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateScratchId{};
  shared_ptr<string> templateScratchRegionId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};
  shared_ptr<long> timeoutInMinutes{};

  PreviewStackRequest() {}

  explicit PreviewStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (enablePreConfig) {
      res["EnablePreConfig"] = boost::any(*enablePreConfig);
    }
    if (parallelism) {
      res["Parallelism"] = boost::any(*parallelism);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    if (stackPolicyURL) {
      res["StackPolicyURL"] = boost::any(*stackPolicyURL);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    if (templateScratchRegionId) {
      res["TemplateScratchRegionId"] = boost::any(*templateScratchRegionId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("EnablePreConfig") != m.end() && !m["EnablePreConfig"].empty()) {
      enablePreConfig = make_shared<bool>(boost::any_cast<bool>(m["EnablePreConfig"]));
    }
    if (m.find("Parallelism") != m.end() && !m["Parallelism"].empty()) {
      parallelism = make_shared<long>(boost::any_cast<long>(m["Parallelism"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<PreviewStackRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PreviewStackRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<PreviewStackRequestParameters>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      stackPolicyBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyBody"]));
    }
    if (m.find("StackPolicyURL") != m.end() && !m["StackPolicyURL"].empty()) {
      stackPolicyURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyURL"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
    if (m.find("TemplateScratchRegionId") != m.end() && !m["TemplateScratchRegionId"].empty()) {
      templateScratchRegionId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchRegionId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
  }


  virtual ~PreviewStackRequest() = default;
};
class PreviewStackResponseBodyStackLogTerraformLogs : public Darabonba::Model {
public:
  shared_ptr<string> command{};
  shared_ptr<string> content{};
  shared_ptr<string> stream{};

  PreviewStackResponseBodyStackLogTerraformLogs() {}

  explicit PreviewStackResponseBodyStackLogTerraformLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (stream) {
      res["Stream"] = boost::any(*stream);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Stream") != m.end() && !m["Stream"].empty()) {
      stream = make_shared<string>(boost::any_cast<string>(m["Stream"]));
    }
  }


  virtual ~PreviewStackResponseBodyStackLogTerraformLogs() = default;
};
class PreviewStackResponseBodyStackLog : public Darabonba::Model {
public:
  shared_ptr<vector<PreviewStackResponseBodyStackLogTerraformLogs>> terraformLogs{};

  PreviewStackResponseBodyStackLog() {}

  explicit PreviewStackResponseBodyStackLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (terraformLogs) {
      vector<boost::any> temp1;
      for(auto item1:*terraformLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TerraformLogs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TerraformLogs") != m.end() && !m["TerraformLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["TerraformLogs"].type()) {
        vector<PreviewStackResponseBodyStackLogTerraformLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TerraformLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PreviewStackResponseBodyStackLogTerraformLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        terraformLogs = make_shared<vector<PreviewStackResponseBodyStackLogTerraformLogs>>(expect1);
      }
    }
  }


  virtual ~PreviewStackResponseBodyStackLog() = default;
};
class PreviewStackResponseBodyStackParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  PreviewStackResponseBodyStackParameters() {}

  explicit PreviewStackResponseBodyStackParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~PreviewStackResponseBodyStackParameters() = default;
};
class PreviewStackResponseBodyStackResources : public Darabonba::Model {
public:
  shared_ptr<string> acsResourceType{};
  shared_ptr<string> action{};
  shared_ptr<string> description{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<string> replacement{};
  shared_ptr<vector<string>> requiredBy{};
  shared_ptr<string> resourceType{};
  shared_ptr<map<string, boost::any>> stack{};

  PreviewStackResponseBodyStackResources() {}

  explicit PreviewStackResponseBodyStackResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acsResourceType) {
      res["AcsResourceType"] = boost::any(*acsResourceType);
    }
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (replacement) {
      res["Replacement"] = boost::any(*replacement);
    }
    if (requiredBy) {
      res["RequiredBy"] = boost::any(*requiredBy);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (stack) {
      res["Stack"] = boost::any(*stack);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcsResourceType") != m.end() && !m["AcsResourceType"].empty()) {
      acsResourceType = make_shared<string>(boost::any_cast<string>(m["AcsResourceType"]));
    }
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Replacement") != m.end() && !m["Replacement"].empty()) {
      replacement = make_shared<string>(boost::any_cast<string>(m["Replacement"]));
    }
    if (m.find("RequiredBy") != m.end() && !m["RequiredBy"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RequiredBy"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RequiredBy"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      requiredBy = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Stack") != m.end() && !m["Stack"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Stack"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      stack = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~PreviewStackResponseBodyStackResources() = default;
};
class PreviewStackResponseBodyStack : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<PreviewStackResponseBodyStackLog> log{};
  shared_ptr<vector<PreviewStackResponseBodyStackParameters>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<PreviewStackResponseBodyStackResources>> resources{};
  shared_ptr<string> stackName{};
  shared_ptr<map<string, boost::any>> stackPolicyBody{};
  shared_ptr<string> templateDescription{};
  shared_ptr<long> timeoutInMinutes{};

  PreviewStackResponseBodyStack() {}

  explicit PreviewStackResponseBodyStack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (log) {
      res["Log"] = log ? boost::any(log->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("Log") != m.end() && !m["Log"].empty()) {
      if (typeid(map<string, boost::any>) == m["Log"].type()) {
        PreviewStackResponseBodyStackLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Log"]));
        log = make_shared<PreviewStackResponseBodyStackLog>(model1);
      }
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<PreviewStackResponseBodyStackParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PreviewStackResponseBodyStackParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<PreviewStackResponseBodyStackParameters>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<PreviewStackResponseBodyStackResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PreviewStackResponseBodyStackResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<PreviewStackResponseBodyStackResources>>(expect1);
      }
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["StackPolicyBody"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      stackPolicyBody = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
  }


  virtual ~PreviewStackResponseBodyStack() = default;
};
class PreviewStackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<PreviewStackResponseBodyStack> stack{};

  PreviewStackResponseBody() {}

  explicit PreviewStackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stack) {
      res["Stack"] = stack ? boost::any(stack->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Stack") != m.end() && !m["Stack"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stack"].type()) {
        PreviewStackResponseBodyStack model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stack"]));
        stack = make_shared<PreviewStackResponseBodyStack>(model1);
      }
    }
  }


  virtual ~PreviewStackResponseBody() = default;
};
class PreviewStackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PreviewStackResponseBody> body{};

  PreviewStackResponse() {}

  explicit PreviewStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PreviewStackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PreviewStackResponseBody>(model1);
      }
    }
  }


  virtual ~PreviewStackResponse() = default;
};
class SetDeletionProtectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> deletionProtection{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};

  SetDeletionProtectionRequest() {}

  explicit SetDeletionProtectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<string>(boost::any_cast<string>(m["DeletionProtection"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~SetDeletionProtectionRequest() = default;
};
class SetDeletionProtectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDeletionProtectionResponseBody() {}

  explicit SetDeletionProtectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetDeletionProtectionResponseBody() = default;
};
class SetDeletionProtectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDeletionProtectionResponseBody> body{};

  SetDeletionProtectionResponse() {}

  explicit SetDeletionProtectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDeletionProtectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDeletionProtectionResponseBody>(model1);
      }
    }
  }


  virtual ~SetDeletionProtectionResponse() = default;
};
class SetStackPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackPolicyBody{};
  shared_ptr<string> stackPolicyURL{};

  SetStackPolicyRequest() {}

  explicit SetStackPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    if (stackPolicyURL) {
      res["StackPolicyURL"] = boost::any(*stackPolicyURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      stackPolicyBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyBody"]));
    }
    if (m.find("StackPolicyURL") != m.end() && !m["StackPolicyURL"].empty()) {
      stackPolicyURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyURL"]));
    }
  }


  virtual ~SetStackPolicyRequest() = default;
};
class SetStackPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetStackPolicyResponseBody() {}

  explicit SetStackPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetStackPolicyResponseBody() = default;
};
class SetStackPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetStackPolicyResponseBody> body{};

  SetStackPolicyResponse() {}

  explicit SetStackPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetStackPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetStackPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~SetStackPolicyResponse() = default;
};
class SetTemplatePermissionRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountIds{};
  shared_ptr<string> shareOption{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> versionOption{};

  SetTemplatePermissionRequest() {}

  explicit SetTemplatePermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (shareOption) {
      res["ShareOption"] = boost::any(*shareOption);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (versionOption) {
      res["VersionOption"] = boost::any(*versionOption);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ShareOption") != m.end() && !m["ShareOption"].empty()) {
      shareOption = make_shared<string>(boost::any_cast<string>(m["ShareOption"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("VersionOption") != m.end() && !m["VersionOption"].empty()) {
      versionOption = make_shared<string>(boost::any_cast<string>(m["VersionOption"]));
    }
  }


  virtual ~SetTemplatePermissionRequest() = default;
};
class SetTemplatePermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetTemplatePermissionResponseBody() {}

  explicit SetTemplatePermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetTemplatePermissionResponseBody() = default;
};
class SetTemplatePermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetTemplatePermissionResponseBody> body{};

  SetTemplatePermissionResponse() {}

  explicit SetTemplatePermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetTemplatePermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetTemplatePermissionResponseBody>(model1);
      }
    }
  }


  virtual ~SetTemplatePermissionResponse() = default;
};
class SignalResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> status{};
  shared_ptr<string> uniqueId{};

  SignalResourceRequest() {}

  explicit SignalResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<string>(boost::any_cast<string>(m["UniqueId"]));
    }
  }


  virtual ~SignalResourceRequest() = default;
};
class SignalResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SignalResourceResponseBody() {}

  explicit SignalResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SignalResourceResponseBody() = default;
};
class SignalResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SignalResourceResponseBody> body{};

  SignalResourceResponse() {}

  explicit SignalResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SignalResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SignalResourceResponseBody>(model1);
      }
    }
  }


  virtual ~SignalResourceResponse() = default;
};
class StopStackGroupOperationRequest : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};
  shared_ptr<string> regionId{};

  StopStackGroupOperationRequest() {}

  explicit StopStackGroupOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StopStackGroupOperationRequest() = default;
};
class StopStackGroupOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopStackGroupOperationResponseBody() {}

  explicit StopStackGroupOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopStackGroupOperationResponseBody() = default;
};
class StopStackGroupOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopStackGroupOperationResponseBody> body{};

  StopStackGroupOperationResponse() {}

  explicit StopStackGroupOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopStackGroupOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopStackGroupOperationResponseBody>(model1);
      }
    }
  }


  virtual ~StopStackGroupOperationResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateStackRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  UpdateStackRequestParameters() {}

  explicit UpdateStackRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~UpdateStackRequestParameters() = default;
};
class UpdateStackRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateStackRequestTags() {}

  explicit UpdateStackRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateStackRequestTags() = default;
};
class UpdateStackRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<long> parallelism{};
  shared_ptr<vector<UpdateStackRequestParameters>> parameters{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replacementOption{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackPolicyBody{};
  shared_ptr<string> stackPolicyDuringUpdateBody{};
  shared_ptr<string> stackPolicyDuringUpdateURL{};
  shared_ptr<string> stackPolicyURL{};
  shared_ptr<vector<UpdateStackRequestTags>> tags{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<bool> usePreviousParameters{};

  UpdateStackRequest() {}

  explicit UpdateStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (parallelism) {
      res["Parallelism"] = boost::any(*parallelism);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replacementOption) {
      res["ReplacementOption"] = boost::any(*replacementOption);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    if (stackPolicyDuringUpdateBody) {
      res["StackPolicyDuringUpdateBody"] = boost::any(*stackPolicyDuringUpdateBody);
    }
    if (stackPolicyDuringUpdateURL) {
      res["StackPolicyDuringUpdateURL"] = boost::any(*stackPolicyDuringUpdateURL);
    }
    if (stackPolicyURL) {
      res["StackPolicyURL"] = boost::any(*stackPolicyURL);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (usePreviousParameters) {
      res["UsePreviousParameters"] = boost::any(*usePreviousParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("Parallelism") != m.end() && !m["Parallelism"].empty()) {
      parallelism = make_shared<long>(boost::any_cast<long>(m["Parallelism"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<UpdateStackRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStackRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<UpdateStackRequestParameters>>(expect1);
      }
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplacementOption") != m.end() && !m["ReplacementOption"].empty()) {
      replacementOption = make_shared<string>(boost::any_cast<string>(m["ReplacementOption"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      stackPolicyBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyBody"]));
    }
    if (m.find("StackPolicyDuringUpdateBody") != m.end() && !m["StackPolicyDuringUpdateBody"].empty()) {
      stackPolicyDuringUpdateBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyDuringUpdateBody"]));
    }
    if (m.find("StackPolicyDuringUpdateURL") != m.end() && !m["StackPolicyDuringUpdateURL"].empty()) {
      stackPolicyDuringUpdateURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyDuringUpdateURL"]));
    }
    if (m.find("StackPolicyURL") != m.end() && !m["StackPolicyURL"].empty()) {
      stackPolicyURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyURL"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<UpdateStackRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStackRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<UpdateStackRequestTags>>(expect1);
      }
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("UsePreviousParameters") != m.end() && !m["UsePreviousParameters"].empty()) {
      usePreviousParameters = make_shared<bool>(boost::any_cast<bool>(m["UsePreviousParameters"]));
    }
  }


  virtual ~UpdateStackRequest() = default;
};
class UpdateStackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> stackId{};

  UpdateStackResponseBody() {}

  explicit UpdateStackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~UpdateStackResponseBody() = default;
};
class UpdateStackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateStackResponseBody> body{};

  UpdateStackResponse() {}

  explicit UpdateStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateStackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateStackResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateStackResponse() = default;
};
class UpdateStackGroupRequestAutoDeployment : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<bool> retainStacksOnAccountRemoval{};

  UpdateStackGroupRequestAutoDeployment() {}

  explicit UpdateStackGroupRequestAutoDeployment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (retainStacksOnAccountRemoval) {
      res["RetainStacksOnAccountRemoval"] = boost::any(*retainStacksOnAccountRemoval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("RetainStacksOnAccountRemoval") != m.end() && !m["RetainStacksOnAccountRemoval"].empty()) {
      retainStacksOnAccountRemoval = make_shared<bool>(boost::any_cast<bool>(m["RetainStacksOnAccountRemoval"]));
    }
  }


  virtual ~UpdateStackGroupRequestAutoDeployment() = default;
};
class UpdateStackGroupRequestDeploymentTargets : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountIds{};
  shared_ptr<vector<string>> rdFolderIds{};

  UpdateStackGroupRequestDeploymentTargets() {}

  explicit UpdateStackGroupRequestDeploymentTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (rdFolderIds) {
      res["RdFolderIds"] = boost::any(*rdFolderIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RdFolderIds") != m.end() && !m["RdFolderIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RdFolderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RdFolderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdFolderIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateStackGroupRequestDeploymentTargets() = default;
};
class UpdateStackGroupRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  UpdateStackGroupRequestParameters() {}

  explicit UpdateStackGroupRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~UpdateStackGroupRequestParameters() = default;
};
class UpdateStackGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountIds{};
  shared_ptr<string> administrationRoleName{};
  shared_ptr<UpdateStackGroupRequestAutoDeployment> autoDeployment{};
  shared_ptr<string> clientToken{};
  shared_ptr<UpdateStackGroupRequestDeploymentTargets> deploymentTargets{};
  shared_ptr<string> description{};
  shared_ptr<string> executionRoleName{};
  shared_ptr<string> operationDescription{};
  shared_ptr<map<string, boost::any>> operationPreferences{};
  shared_ptr<vector<UpdateStackGroupRequestParameters>> parameters{};
  shared_ptr<string> permissionModel{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> regionIds{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  UpdateStackGroupRequest() {}

  explicit UpdateStackGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (administrationRoleName) {
      res["AdministrationRoleName"] = boost::any(*administrationRoleName);
    }
    if (autoDeployment) {
      res["AutoDeployment"] = autoDeployment ? boost::any(autoDeployment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deploymentTargets) {
      res["DeploymentTargets"] = deploymentTargets ? boost::any(deploymentTargets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionRoleName) {
      res["ExecutionRoleName"] = boost::any(*executionRoleName);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferences) {
      res["OperationPreferences"] = boost::any(*operationPreferences);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (permissionModel) {
      res["PermissionModel"] = boost::any(*permissionModel);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AdministrationRoleName") != m.end() && !m["AdministrationRoleName"].empty()) {
      administrationRoleName = make_shared<string>(boost::any_cast<string>(m["AdministrationRoleName"]));
    }
    if (m.find("AutoDeployment") != m.end() && !m["AutoDeployment"].empty()) {
      if (typeid(map<string, boost::any>) == m["AutoDeployment"].type()) {
        UpdateStackGroupRequestAutoDeployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AutoDeployment"]));
        autoDeployment = make_shared<UpdateStackGroupRequestAutoDeployment>(model1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeploymentTargets") != m.end() && !m["DeploymentTargets"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeploymentTargets"].type()) {
        UpdateStackGroupRequestDeploymentTargets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeploymentTargets"]));
        deploymentTargets = make_shared<UpdateStackGroupRequestDeploymentTargets>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionRoleName") != m.end() && !m["ExecutionRoleName"].empty()) {
      executionRoleName = make_shared<string>(boost::any_cast<string>(m["ExecutionRoleName"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OperationPreferences"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      operationPreferences = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<UpdateStackGroupRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStackGroupRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<UpdateStackGroupRequestParameters>>(expect1);
      }
    }
    if (m.find("PermissionModel") != m.end() && !m["PermissionModel"].empty()) {
      permissionModel = make_shared<string>(boost::any_cast<string>(m["PermissionModel"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~UpdateStackGroupRequest() = default;
};
class UpdateStackGroupShrinkRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  UpdateStackGroupShrinkRequestParameters() {}

  explicit UpdateStackGroupShrinkRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~UpdateStackGroupShrinkRequestParameters() = default;
};
class UpdateStackGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountIdsShrink{};
  shared_ptr<string> administrationRoleName{};
  shared_ptr<string> autoDeploymentShrink{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> deploymentTargetsShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> executionRoleName{};
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationPreferencesShrink{};
  shared_ptr<vector<UpdateStackGroupShrinkRequestParameters>> parameters{};
  shared_ptr<string> permissionModel{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionIdsShrink{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  UpdateStackGroupShrinkRequest() {}

  explicit UpdateStackGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIdsShrink) {
      res["AccountIds"] = boost::any(*accountIdsShrink);
    }
    if (administrationRoleName) {
      res["AdministrationRoleName"] = boost::any(*administrationRoleName);
    }
    if (autoDeploymentShrink) {
      res["AutoDeployment"] = boost::any(*autoDeploymentShrink);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deploymentTargetsShrink) {
      res["DeploymentTargets"] = boost::any(*deploymentTargetsShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionRoleName) {
      res["ExecutionRoleName"] = boost::any(*executionRoleName);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferencesShrink) {
      res["OperationPreferences"] = boost::any(*operationPreferencesShrink);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (permissionModel) {
      res["PermissionModel"] = boost::any(*permissionModel);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionIdsShrink) {
      res["RegionIds"] = boost::any(*regionIdsShrink);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      accountIdsShrink = make_shared<string>(boost::any_cast<string>(m["AccountIds"]));
    }
    if (m.find("AdministrationRoleName") != m.end() && !m["AdministrationRoleName"].empty()) {
      administrationRoleName = make_shared<string>(boost::any_cast<string>(m["AdministrationRoleName"]));
    }
    if (m.find("AutoDeployment") != m.end() && !m["AutoDeployment"].empty()) {
      autoDeploymentShrink = make_shared<string>(boost::any_cast<string>(m["AutoDeployment"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeploymentTargets") != m.end() && !m["DeploymentTargets"].empty()) {
      deploymentTargetsShrink = make_shared<string>(boost::any_cast<string>(m["DeploymentTargets"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionRoleName") != m.end() && !m["ExecutionRoleName"].empty()) {
      executionRoleName = make_shared<string>(boost::any_cast<string>(m["ExecutionRoleName"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      operationPreferencesShrink = make_shared<string>(boost::any_cast<string>(m["OperationPreferences"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<UpdateStackGroupShrinkRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStackGroupShrinkRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<UpdateStackGroupShrinkRequestParameters>>(expect1);
      }
    }
    if (m.find("PermissionModel") != m.end() && !m["PermissionModel"].empty()) {
      permissionModel = make_shared<string>(boost::any_cast<string>(m["PermissionModel"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      regionIdsShrink = make_shared<string>(boost::any_cast<string>(m["RegionIds"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~UpdateStackGroupShrinkRequest() = default;
};
class UpdateStackGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};
  shared_ptr<string> requestId{};

  UpdateStackGroupResponseBody() {}

  explicit UpdateStackGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateStackGroupResponseBody() = default;
};
class UpdateStackGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateStackGroupResponseBody> body{};

  UpdateStackGroupResponse() {}

  explicit UpdateStackGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateStackGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateStackGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateStackGroupResponse() = default;
};
class UpdateStackInstancesRequestDeploymentTargets : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountIds{};
  shared_ptr<vector<string>> rdFolderIds{};

  UpdateStackInstancesRequestDeploymentTargets() {}

  explicit UpdateStackInstancesRequestDeploymentTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (rdFolderIds) {
      res["RdFolderIds"] = boost::any(*rdFolderIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RdFolderIds") != m.end() && !m["RdFolderIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RdFolderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RdFolderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdFolderIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateStackInstancesRequestDeploymentTargets() = default;
};
class UpdateStackInstancesRequestParameterOverrides : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  UpdateStackInstancesRequestParameterOverrides() {}

  explicit UpdateStackInstancesRequestParameterOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~UpdateStackInstancesRequestParameterOverrides() = default;
};
class UpdateStackInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<UpdateStackInstancesRequestDeploymentTargets> deploymentTargets{};
  shared_ptr<string> operationDescription{};
  shared_ptr<map<string, boost::any>> operationPreferences{};
  shared_ptr<vector<UpdateStackInstancesRequestParameterOverrides>> parameterOverrides{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> regionIds{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<long> timeoutInMinutes{};

  UpdateStackInstancesRequest() {}

  explicit UpdateStackInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deploymentTargets) {
      res["DeploymentTargets"] = deploymentTargets ? boost::any(deploymentTargets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferences) {
      res["OperationPreferences"] = boost::any(*operationPreferences);
    }
    if (parameterOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*parameterOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterOverrides"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeploymentTargets") != m.end() && !m["DeploymentTargets"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeploymentTargets"].type()) {
        UpdateStackInstancesRequestDeploymentTargets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeploymentTargets"]));
        deploymentTargets = make_shared<UpdateStackInstancesRequestDeploymentTargets>(model1);
      }
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OperationPreferences"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      operationPreferences = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ParameterOverrides") != m.end() && !m["ParameterOverrides"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterOverrides"].type()) {
        vector<UpdateStackInstancesRequestParameterOverrides> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterOverrides"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStackInstancesRequestParameterOverrides model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterOverrides = make_shared<vector<UpdateStackInstancesRequestParameterOverrides>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
  }


  virtual ~UpdateStackInstancesRequest() = default;
};
class UpdateStackInstancesShrinkRequestParameterOverrides : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  UpdateStackInstancesShrinkRequestParameterOverrides() {}

  explicit UpdateStackInstancesShrinkRequestParameterOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~UpdateStackInstancesShrinkRequestParameterOverrides() = default;
};
class UpdateStackInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountIdsShrink{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> deploymentTargetsShrink{};
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationPreferencesShrink{};
  shared_ptr<vector<UpdateStackInstancesShrinkRequestParameterOverrides>> parameterOverrides{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionIdsShrink{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<long> timeoutInMinutes{};

  UpdateStackInstancesShrinkRequest() {}

  explicit UpdateStackInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIdsShrink) {
      res["AccountIds"] = boost::any(*accountIdsShrink);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deploymentTargetsShrink) {
      res["DeploymentTargets"] = boost::any(*deploymentTargetsShrink);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferencesShrink) {
      res["OperationPreferences"] = boost::any(*operationPreferencesShrink);
    }
    if (parameterOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*parameterOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterOverrides"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionIdsShrink) {
      res["RegionIds"] = boost::any(*regionIdsShrink);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      accountIdsShrink = make_shared<string>(boost::any_cast<string>(m["AccountIds"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeploymentTargets") != m.end() && !m["DeploymentTargets"].empty()) {
      deploymentTargetsShrink = make_shared<string>(boost::any_cast<string>(m["DeploymentTargets"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      operationPreferencesShrink = make_shared<string>(boost::any_cast<string>(m["OperationPreferences"]));
    }
    if (m.find("ParameterOverrides") != m.end() && !m["ParameterOverrides"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterOverrides"].type()) {
        vector<UpdateStackInstancesShrinkRequestParameterOverrides> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterOverrides"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStackInstancesShrinkRequestParameterOverrides model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterOverrides = make_shared<vector<UpdateStackInstancesShrinkRequestParameterOverrides>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      regionIdsShrink = make_shared<string>(boost::any_cast<string>(m["RegionIds"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
  }


  virtual ~UpdateStackInstancesShrinkRequest() = default;
};
class UpdateStackInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};
  shared_ptr<string> requestId{};

  UpdateStackInstancesResponseBody() {}

  explicit UpdateStackInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateStackInstancesResponseBody() = default;
};
class UpdateStackInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateStackInstancesResponseBody> body{};

  UpdateStackInstancesResponse() {}

  explicit UpdateStackInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateStackInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateStackInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateStackInstancesResponse() = default;
};
class UpdateStackTemplateByResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<string>> logicalResourceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> templateFormat{};

  UpdateStackTemplateByResourcesRequest() {}

  explicit UpdateStackTemplateByResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (templateFormat) {
      res["TemplateFormat"] = boost::any(*templateFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LogicalResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LogicalResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logicalResourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("TemplateFormat") != m.end() && !m["TemplateFormat"].empty()) {
      templateFormat = make_shared<string>(boost::any_cast<string>(m["TemplateFormat"]));
    }
  }


  virtual ~UpdateStackTemplateByResourcesRequest() = default;
};
class UpdateStackTemplateByResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> newTemplateBody{};
  shared_ptr<string> oldTemplateBody{};
  shared_ptr<string> requestId{};

  UpdateStackTemplateByResourcesResponseBody() {}

  explicit UpdateStackTemplateByResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newTemplateBody) {
      res["NewTemplateBody"] = boost::any(*newTemplateBody);
    }
    if (oldTemplateBody) {
      res["OldTemplateBody"] = boost::any(*oldTemplateBody);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewTemplateBody") != m.end() && !m["NewTemplateBody"].empty()) {
      newTemplateBody = make_shared<string>(boost::any_cast<string>(m["NewTemplateBody"]));
    }
    if (m.find("OldTemplateBody") != m.end() && !m["OldTemplateBody"].empty()) {
      oldTemplateBody = make_shared<string>(boost::any_cast<string>(m["OldTemplateBody"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateStackTemplateByResourcesResponseBody() = default;
};
class UpdateStackTemplateByResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateStackTemplateByResourcesResponseBody> body{};

  UpdateStackTemplateByResourcesResponse() {}

  explicit UpdateStackTemplateByResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateStackTemplateByResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateStackTemplateByResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateStackTemplateByResourcesResponse() = default;
};
class UpdateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateURL{};

  UpdateTemplateRequest() {}

  explicit UpdateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
  }


  virtual ~UpdateTemplateRequest() = default;
};
class UpdateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  UpdateTemplateResponseBody() {}

  explicit UpdateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~UpdateTemplateResponseBody() = default;
};
class UpdateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTemplateResponseBody> body{};

  UpdateTemplateResponse() {}

  explicit UpdateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTemplateResponse() = default;
};
class UpdateTemplateScratchRequestPreferenceParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  UpdateTemplateScratchRequestPreferenceParameters() {}

  explicit UpdateTemplateScratchRequestPreferenceParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~UpdateTemplateScratchRequestPreferenceParameters() = default;
};
class UpdateTemplateScratchRequestSourceResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> resourceTypeFilter{};

  UpdateTemplateScratchRequestSourceResourceGroup() {}

  explicit UpdateTemplateScratchRequestSourceResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTypeFilter) {
      res["ResourceTypeFilter"] = boost::any(*resourceTypeFilter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTypeFilter") != m.end() && !m["ResourceTypeFilter"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypeFilter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypeFilter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypeFilter = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateTemplateScratchRequestSourceResourceGroup() = default;
};
class UpdateTemplateScratchRequestSourceResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  UpdateTemplateScratchRequestSourceResources() {}

  explicit UpdateTemplateScratchRequestSourceResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~UpdateTemplateScratchRequestSourceResources() = default;
};
class UpdateTemplateScratchRequestSourceTag : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> resourceTags{};
  shared_ptr<vector<string>> resourceTypeFilter{};

  UpdateTemplateScratchRequestSourceTag() {}

  explicit UpdateTemplateScratchRequestSourceTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceTags) {
      res["ResourceTags"] = boost::any(*resourceTags);
    }
    if (resourceTypeFilter) {
      res["ResourceTypeFilter"] = boost::any(*resourceTypeFilter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceTags") != m.end() && !m["ResourceTags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceTags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceTags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceTypeFilter") != m.end() && !m["ResourceTypeFilter"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceTypeFilter"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceTypeFilter"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceTypeFilter = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateTemplateScratchRequestSourceTag() = default;
};
class UpdateTemplateScratchRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> executionMode{};
  shared_ptr<string> logicalIdStrategy{};
  shared_ptr<vector<UpdateTemplateScratchRequestPreferenceParameters>> preferenceParameters{};
  shared_ptr<string> regionId{};
  shared_ptr<UpdateTemplateScratchRequestSourceResourceGroup> sourceResourceGroup{};
  shared_ptr<vector<UpdateTemplateScratchRequestSourceResources>> sourceResources{};
  shared_ptr<UpdateTemplateScratchRequestSourceTag> sourceTag{};
  shared_ptr<string> templateScratchId{};

  UpdateTemplateScratchRequest() {}

  explicit UpdateTemplateScratchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionMode) {
      res["ExecutionMode"] = boost::any(*executionMode);
    }
    if (logicalIdStrategy) {
      res["LogicalIdStrategy"] = boost::any(*logicalIdStrategy);
    }
    if (preferenceParameters) {
      vector<boost::any> temp1;
      for(auto item1:*preferenceParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PreferenceParameters"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceResourceGroup) {
      res["SourceResourceGroup"] = sourceResourceGroup ? boost::any(sourceResourceGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceResources) {
      vector<boost::any> temp1;
      for(auto item1:*sourceResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceResources"] = boost::any(temp1);
    }
    if (sourceTag) {
      res["SourceTag"] = sourceTag ? boost::any(sourceTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionMode") != m.end() && !m["ExecutionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["ExecutionMode"]));
    }
    if (m.find("LogicalIdStrategy") != m.end() && !m["LogicalIdStrategy"].empty()) {
      logicalIdStrategy = make_shared<string>(boost::any_cast<string>(m["LogicalIdStrategy"]));
    }
    if (m.find("PreferenceParameters") != m.end() && !m["PreferenceParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["PreferenceParameters"].type()) {
        vector<UpdateTemplateScratchRequestPreferenceParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PreferenceParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateTemplateScratchRequestPreferenceParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        preferenceParameters = make_shared<vector<UpdateTemplateScratchRequestPreferenceParameters>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceResourceGroup") != m.end() && !m["SourceResourceGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceResourceGroup"].type()) {
        UpdateTemplateScratchRequestSourceResourceGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceResourceGroup"]));
        sourceResourceGroup = make_shared<UpdateTemplateScratchRequestSourceResourceGroup>(model1);
      }
    }
    if (m.find("SourceResources") != m.end() && !m["SourceResources"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceResources"].type()) {
        vector<UpdateTemplateScratchRequestSourceResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateTemplateScratchRequestSourceResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceResources = make_shared<vector<UpdateTemplateScratchRequestSourceResources>>(expect1);
      }
    }
    if (m.find("SourceTag") != m.end() && !m["SourceTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceTag"].type()) {
        UpdateTemplateScratchRequestSourceTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceTag"]));
        sourceTag = make_shared<UpdateTemplateScratchRequestSourceTag>(model1);
      }
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
  }


  virtual ~UpdateTemplateScratchRequest() = default;
};
class UpdateTemplateScratchShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> executionMode{};
  shared_ptr<string> logicalIdStrategy{};
  shared_ptr<string> preferenceParametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sourceResourceGroupShrink{};
  shared_ptr<string> sourceResourcesShrink{};
  shared_ptr<string> sourceTagShrink{};
  shared_ptr<string> templateScratchId{};

  UpdateTemplateScratchShrinkRequest() {}

  explicit UpdateTemplateScratchShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (executionMode) {
      res["ExecutionMode"] = boost::any(*executionMode);
    }
    if (logicalIdStrategy) {
      res["LogicalIdStrategy"] = boost::any(*logicalIdStrategy);
    }
    if (preferenceParametersShrink) {
      res["PreferenceParameters"] = boost::any(*preferenceParametersShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceResourceGroupShrink) {
      res["SourceResourceGroup"] = boost::any(*sourceResourceGroupShrink);
    }
    if (sourceResourcesShrink) {
      res["SourceResources"] = boost::any(*sourceResourcesShrink);
    }
    if (sourceTagShrink) {
      res["SourceTag"] = boost::any(*sourceTagShrink);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExecutionMode") != m.end() && !m["ExecutionMode"].empty()) {
      executionMode = make_shared<string>(boost::any_cast<string>(m["ExecutionMode"]));
    }
    if (m.find("LogicalIdStrategy") != m.end() && !m["LogicalIdStrategy"].empty()) {
      logicalIdStrategy = make_shared<string>(boost::any_cast<string>(m["LogicalIdStrategy"]));
    }
    if (m.find("PreferenceParameters") != m.end() && !m["PreferenceParameters"].empty()) {
      preferenceParametersShrink = make_shared<string>(boost::any_cast<string>(m["PreferenceParameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceResourceGroup") != m.end() && !m["SourceResourceGroup"].empty()) {
      sourceResourceGroupShrink = make_shared<string>(boost::any_cast<string>(m["SourceResourceGroup"]));
    }
    if (m.find("SourceResources") != m.end() && !m["SourceResources"].empty()) {
      sourceResourcesShrink = make_shared<string>(boost::any_cast<string>(m["SourceResources"]));
    }
    if (m.find("SourceTag") != m.end() && !m["SourceTag"].empty()) {
      sourceTagShrink = make_shared<string>(boost::any_cast<string>(m["SourceTag"]));
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
  }


  virtual ~UpdateTemplateScratchShrinkRequest() = default;
};
class UpdateTemplateScratchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateScratchId{};

  UpdateTemplateScratchResponseBody() {}

  explicit UpdateTemplateScratchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateScratchId) {
      res["TemplateScratchId"] = boost::any(*templateScratchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateScratchId") != m.end() && !m["TemplateScratchId"].empty()) {
      templateScratchId = make_shared<string>(boost::any_cast<string>(m["TemplateScratchId"]));
    }
  }


  virtual ~UpdateTemplateScratchResponseBody() = default;
};
class UpdateTemplateScratchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTemplateScratchResponseBody> body{};

  UpdateTemplateScratchResponse() {}

  explicit UpdateTemplateScratchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTemplateScratchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTemplateScratchResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTemplateScratchResponse() = default;
};
class ValidateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> validationOption{};

  ValidateTemplateRequest() {}

  explicit ValidateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (validationOption) {
      res["ValidationOption"] = boost::any(*validationOption);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("ValidationOption") != m.end() && !m["ValidationOption"].empty()) {
      validationOption = make_shared<string>(boost::any_cast<string>(m["ValidationOption"]));
    }
  }


  virtual ~ValidateTemplateRequest() = default;
};
class ValidateTemplateResponseBodyOutputs : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> label{};
  shared_ptr<string> outputKey{};

  ValidateTemplateResponseBodyOutputs() {}

  explicit ValidateTemplateResponseBodyOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (outputKey) {
      res["OutputKey"] = boost::any(*outputKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("OutputKey") != m.end() && !m["OutputKey"].empty()) {
      outputKey = make_shared<string>(boost::any_cast<string>(m["OutputKey"]));
    }
  }


  virtual ~ValidateTemplateResponseBodyOutputs() = default;
};
class ValidateTemplateResponseBodyResourceTypes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dataSources{};
  shared_ptr<vector<string>> resources{};

  ValidateTemplateResponseBodyResourceTypes() {}

  explicit ValidateTemplateResponseBodyResourceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSources) {
      res["DataSources"] = boost::any(*dataSources);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSources") != m.end() && !m["DataSources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DataSources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataSources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataSources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Resources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resources = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ValidateTemplateResponseBodyResourceTypes() = default;
};
class ValidateTemplateResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> logicalResourceIdPattern{};
  shared_ptr<string> resourcePath{};
  shared_ptr<string> resourceType{};

  ValidateTemplateResponseBodyResources() {}

  explicit ValidateTemplateResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicalResourceIdPattern) {
      res["LogicalResourceIdPattern"] = boost::any(*logicalResourceIdPattern);
    }
    if (resourcePath) {
      res["ResourcePath"] = boost::any(*resourcePath);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicalResourceIdPattern") != m.end() && !m["LogicalResourceIdPattern"].empty()) {
      logicalResourceIdPattern = make_shared<string>(boost::any_cast<string>(m["LogicalResourceIdPattern"]));
    }
    if (m.find("ResourcePath") != m.end() && !m["ResourcePath"].empty()) {
      resourcePath = make_shared<string>(boost::any_cast<string>(m["ResourcePath"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ValidateTemplateResponseBodyResources() = default;
};
class ValidateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<ValidateTemplateResponseBodyOutputs>> outputs{};
  shared_ptr<vector<map<string, boost::any>>> parameters{};
  shared_ptr<string> requestId{};
  shared_ptr<ValidateTemplateResponseBodyResourceTypes> resourceTypes{};
  shared_ptr<vector<ValidateTemplateResponseBodyResources>> resources{};

  ValidateTemplateResponseBody() {}

  explicit ValidateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (outputs) {
      vector<boost::any> temp1;
      for(auto item1:*outputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Outputs"] = boost::any(temp1);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = resourceTypes ? boost::any(resourceTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      if (typeid(vector<boost::any>) == m["Outputs"].type()) {
        vector<ValidateTemplateResponseBodyOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Outputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ValidateTemplateResponseBodyOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputs = make_shared<vector<ValidateTemplateResponseBodyOutputs>>(expect1);
      }
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Parameters"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      parameters = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceTypes"].type()) {
        ValidateTemplateResponseBodyResourceTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceTypes"]));
        resourceTypes = make_shared<ValidateTemplateResponseBodyResourceTypes>(model1);
      }
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<ValidateTemplateResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ValidateTemplateResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ValidateTemplateResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~ValidateTemplateResponseBody() = default;
};
class ValidateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ValidateTemplateResponseBody> body{};

  ValidateTemplateResponse() {}

  explicit ValidateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ValidateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateTemplateResponse() = default;
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
  CancelUpdateStackResponse cancelUpdateStackWithOptions(shared_ptr<CancelUpdateStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelUpdateStackResponse cancelUpdateStack(shared_ptr<CancelUpdateStackRequest> request);
  ContinueCreateStackResponse continueCreateStackWithOptions(shared_ptr<ContinueCreateStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContinueCreateStackResponse continueCreateStack(shared_ptr<ContinueCreateStackRequest> request);
  CreateChangeSetResponse createChangeSetWithOptions(shared_ptr<CreateChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChangeSetResponse createChangeSet(shared_ptr<CreateChangeSetRequest> request);
  CreateStackResponse createStackWithOptions(shared_ptr<CreateStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStackResponse createStack(shared_ptr<CreateStackRequest> request);
  CreateStackGroupResponse createStackGroupWithOptions(shared_ptr<CreateStackGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStackGroupResponse createStackGroup(shared_ptr<CreateStackGroupRequest> request);
  CreateStackInstancesResponse createStackInstancesWithOptions(shared_ptr<CreateStackInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStackInstancesResponse createStackInstances(shared_ptr<CreateStackInstancesRequest> request);
  CreateTemplateResponse createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTemplateResponse createTemplate(shared_ptr<CreateTemplateRequest> request);
  CreateTemplateScratchResponse createTemplateScratchWithOptions(shared_ptr<CreateTemplateScratchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTemplateScratchResponse createTemplateScratch(shared_ptr<CreateTemplateScratchRequest> request);
  DeleteChangeSetResponse deleteChangeSetWithOptions(shared_ptr<DeleteChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChangeSetResponse deleteChangeSet(shared_ptr<DeleteChangeSetRequest> request);
  DeleteStackResponse deleteStackWithOptions(shared_ptr<DeleteStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteStackResponse deleteStack(shared_ptr<DeleteStackRequest> request);
  DeleteStackGroupResponse deleteStackGroupWithOptions(shared_ptr<DeleteStackGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteStackGroupResponse deleteStackGroup(shared_ptr<DeleteStackGroupRequest> request);
  DeleteStackInstancesResponse deleteStackInstancesWithOptions(shared_ptr<DeleteStackInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteStackInstancesResponse deleteStackInstances(shared_ptr<DeleteStackInstancesRequest> request);
  DeleteTemplateResponse deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateResponse deleteTemplate(shared_ptr<DeleteTemplateRequest> request);
  DeleteTemplateScratchResponse deleteTemplateScratchWithOptions(shared_ptr<DeleteTemplateScratchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateScratchResponse deleteTemplateScratch(shared_ptr<DeleteTemplateScratchRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DetectStackDriftResponse detectStackDriftWithOptions(shared_ptr<DetectStackDriftRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectStackDriftResponse detectStackDrift(shared_ptr<DetectStackDriftRequest> request);
  DetectStackGroupDriftResponse detectStackGroupDriftWithOptions(shared_ptr<DetectStackGroupDriftRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectStackGroupDriftResponse detectStackGroupDrift(shared_ptr<DetectStackGroupDriftRequest> request);
  DetectStackResourceDriftResponse detectStackResourceDriftWithOptions(shared_ptr<DetectStackResourceDriftRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectStackResourceDriftResponse detectStackResourceDrift(shared_ptr<DetectStackResourceDriftRequest> request);
  ExecuteChangeSetResponse executeChangeSetWithOptions(shared_ptr<ExecuteChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteChangeSetResponse executeChangeSet(shared_ptr<ExecuteChangeSetRequest> request);
  GenerateTemplateByScratchResponse generateTemplateByScratchWithOptions(shared_ptr<GenerateTemplateByScratchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateTemplateByScratchResponse generateTemplateByScratch(shared_ptr<GenerateTemplateByScratchRequest> request);
  GenerateTemplatePolicyResponse generateTemplatePolicyWithOptions(shared_ptr<GenerateTemplatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateTemplatePolicyResponse generateTemplatePolicy(shared_ptr<GenerateTemplatePolicyRequest> request);
  GetChangeSetResponse getChangeSetWithOptions(shared_ptr<GetChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChangeSetResponse getChangeSet(shared_ptr<GetChangeSetRequest> request);
  GetFeatureDetailsResponse getFeatureDetailsWithOptions(shared_ptr<GetFeatureDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFeatureDetailsResponse getFeatureDetails(shared_ptr<GetFeatureDetailsRequest> request);
  GetResourceTypeResponse getResourceTypeWithOptions(shared_ptr<GetResourceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceTypeResponse getResourceType(shared_ptr<GetResourceTypeRequest> request);
  GetResourceTypeTemplateResponse getResourceTypeTemplateWithOptions(shared_ptr<GetResourceTypeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceTypeTemplateResponse getResourceTypeTemplate(shared_ptr<GetResourceTypeTemplateRequest> request);
  GetServiceProvisionsResponse getServiceProvisionsWithOptions(shared_ptr<GetServiceProvisionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceProvisionsResponse getServiceProvisions(shared_ptr<GetServiceProvisionsRequest> request);
  GetStackResponse getStackWithOptions(shared_ptr<GetStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStackResponse getStack(shared_ptr<GetStackRequest> request);
  GetStackDriftDetectionStatusResponse getStackDriftDetectionStatusWithOptions(shared_ptr<GetStackDriftDetectionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStackDriftDetectionStatusResponse getStackDriftDetectionStatus(shared_ptr<GetStackDriftDetectionStatusRequest> request);
  GetStackGroupResponse getStackGroupWithOptions(shared_ptr<GetStackGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStackGroupResponse getStackGroup(shared_ptr<GetStackGroupRequest> request);
  GetStackGroupOperationResponse getStackGroupOperationWithOptions(shared_ptr<GetStackGroupOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStackGroupOperationResponse getStackGroupOperation(shared_ptr<GetStackGroupOperationRequest> request);
  GetStackInstanceResponse getStackInstanceWithOptions(shared_ptr<GetStackInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStackInstanceResponse getStackInstance(shared_ptr<GetStackInstanceRequest> request);
  GetStackPolicyResponse getStackPolicyWithOptions(shared_ptr<GetStackPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStackPolicyResponse getStackPolicy(shared_ptr<GetStackPolicyRequest> request);
  GetStackResourceResponse getStackResourceWithOptions(shared_ptr<GetStackResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStackResourceResponse getStackResource(shared_ptr<GetStackResourceRequest> request);
  GetTemplateResponse getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateResponse getTemplate(shared_ptr<GetTemplateRequest> request);
  GetTemplateEstimateCostResponse getTemplateEstimateCostWithOptions(shared_ptr<GetTemplateEstimateCostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateEstimateCostResponse getTemplateEstimateCost(shared_ptr<GetTemplateEstimateCostRequest> request);
  GetTemplateParameterConstraintsResponse getTemplateParameterConstraintsWithOptions(shared_ptr<GetTemplateParameterConstraintsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateParameterConstraintsResponse getTemplateParameterConstraints(shared_ptr<GetTemplateParameterConstraintsRequest> request);
  GetTemplateScratchResponse getTemplateScratchWithOptions(shared_ptr<GetTemplateScratchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateScratchResponse getTemplateScratch(shared_ptr<GetTemplateScratchRequest> request);
  GetTemplateSummaryResponse getTemplateSummaryWithOptions(shared_ptr<GetTemplateSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateSummaryResponse getTemplateSummary(shared_ptr<GetTemplateSummaryRequest> request);
  ListChangeSetsResponse listChangeSetsWithOptions(shared_ptr<ListChangeSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChangeSetsResponse listChangeSets(shared_ptr<ListChangeSetsRequest> request);
  ListResourceTypesResponse listResourceTypesWithOptions(shared_ptr<ListResourceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceTypesResponse listResourceTypes(shared_ptr<ListResourceTypesRequest> request);
  ListStackEventsResponse listStackEventsWithOptions(shared_ptr<ListStackEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStackEventsResponse listStackEvents(shared_ptr<ListStackEventsRequest> request);
  ListStackGroupOperationResultsResponse listStackGroupOperationResultsWithOptions(shared_ptr<ListStackGroupOperationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStackGroupOperationResultsResponse listStackGroupOperationResults(shared_ptr<ListStackGroupOperationResultsRequest> request);
  ListStackGroupOperationsResponse listStackGroupOperationsWithOptions(shared_ptr<ListStackGroupOperationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStackGroupOperationsResponse listStackGroupOperations(shared_ptr<ListStackGroupOperationsRequest> request);
  ListStackGroupsResponse listStackGroupsWithOptions(shared_ptr<ListStackGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStackGroupsResponse listStackGroups(shared_ptr<ListStackGroupsRequest> request);
  ListStackInstancesResponse listStackInstancesWithOptions(shared_ptr<ListStackInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStackInstancesResponse listStackInstances(shared_ptr<ListStackInstancesRequest> request);
  ListStackOperationRisksResponse listStackOperationRisksWithOptions(shared_ptr<ListStackOperationRisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStackOperationRisksResponse listStackOperationRisks(shared_ptr<ListStackOperationRisksRequest> request);
  ListStackResourceDriftsResponse listStackResourceDriftsWithOptions(shared_ptr<ListStackResourceDriftsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStackResourceDriftsResponse listStackResourceDrifts(shared_ptr<ListStackResourceDriftsRequest> request);
  ListStackResourcesResponse listStackResourcesWithOptions(shared_ptr<ListStackResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStackResourcesResponse listStackResources(shared_ptr<ListStackResourcesRequest> request);
  ListStacksResponse listStacksWithOptions(shared_ptr<ListStacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStacksResponse listStacks(shared_ptr<ListStacksRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTagValuesResponse listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagValuesResponse listTagValues(shared_ptr<ListTagValuesRequest> request);
  ListTemplateScratchesResponse listTemplateScratchesWithOptions(shared_ptr<ListTemplateScratchesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplateScratchesResponse listTemplateScratches(shared_ptr<ListTemplateScratchesRequest> request);
  ListTemplateVersionsResponse listTemplateVersionsWithOptions(shared_ptr<ListTemplateVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplateVersionsResponse listTemplateVersions(shared_ptr<ListTemplateVersionsRequest> request);
  ListTemplatesResponse listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplatesResponse listTemplates(shared_ptr<ListTemplatesRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  PreviewStackResponse previewStackWithOptions(shared_ptr<PreviewStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PreviewStackResponse previewStack(shared_ptr<PreviewStackRequest> request);
  SetDeletionProtectionResponse setDeletionProtectionWithOptions(shared_ptr<SetDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDeletionProtectionResponse setDeletionProtection(shared_ptr<SetDeletionProtectionRequest> request);
  SetStackPolicyResponse setStackPolicyWithOptions(shared_ptr<SetStackPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetStackPolicyResponse setStackPolicy(shared_ptr<SetStackPolicyRequest> request);
  SetTemplatePermissionResponse setTemplatePermissionWithOptions(shared_ptr<SetTemplatePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetTemplatePermissionResponse setTemplatePermission(shared_ptr<SetTemplatePermissionRequest> request);
  SignalResourceResponse signalResourceWithOptions(shared_ptr<SignalResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SignalResourceResponse signalResource(shared_ptr<SignalResourceRequest> request);
  StopStackGroupOperationResponse stopStackGroupOperationWithOptions(shared_ptr<StopStackGroupOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopStackGroupOperationResponse stopStackGroupOperation(shared_ptr<StopStackGroupOperationRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateStackResponse updateStackWithOptions(shared_ptr<UpdateStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateStackResponse updateStack(shared_ptr<UpdateStackRequest> request);
  UpdateStackGroupResponse updateStackGroupWithOptions(shared_ptr<UpdateStackGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateStackGroupResponse updateStackGroup(shared_ptr<UpdateStackGroupRequest> request);
  UpdateStackInstancesResponse updateStackInstancesWithOptions(shared_ptr<UpdateStackInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateStackInstancesResponse updateStackInstances(shared_ptr<UpdateStackInstancesRequest> request);
  UpdateStackTemplateByResourcesResponse updateStackTemplateByResourcesWithOptions(shared_ptr<UpdateStackTemplateByResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateStackTemplateByResourcesResponse updateStackTemplateByResources(shared_ptr<UpdateStackTemplateByResourcesRequest> request);
  UpdateTemplateResponse updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTemplateResponse updateTemplate(shared_ptr<UpdateTemplateRequest> request);
  UpdateTemplateScratchResponse updateTemplateScratchWithOptions(shared_ptr<UpdateTemplateScratchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTemplateScratchResponse updateTemplateScratch(shared_ptr<UpdateTemplateScratchRequest> request);
  ValidateTemplateResponse validateTemplateWithOptions(shared_ptr<ValidateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateTemplateResponse validateTemplate(shared_ptr<ValidateTemplateRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ROS20190910

#endif
