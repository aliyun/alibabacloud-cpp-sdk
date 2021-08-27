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
  shared_ptr<string> stackId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> cancelType{};

  CancelUpdateStackRequest() {}

  explicit CancelUpdateStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (cancelType) {
      res["CancelType"] = boost::any(*cancelType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("CancelType") != m.end() && !m["CancelType"].empty()) {
      cancelType = make_shared<string>(boost::any_cast<string>(m["CancelType"]));
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
  shared_ptr<CancelUpdateStackResponseBody> body{};

  CancelUpdateStackResponse() {}

  explicit CancelUpdateStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> mode{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateURL{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<vector<string>> recreatingResources{};
  shared_ptr<vector<ContinueCreateStackRequestParameters>> parameters{};

  ContinueCreateStackRequest() {}

  explicit ContinueCreateStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (recreatingResources) {
      res["RecreatingResources"] = boost::any(*recreatingResources);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
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
  }


  virtual ~ContinueCreateStackRequest() = default;
};
class ContinueCreateStackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> stackId{};
  shared_ptr<string> requestId{};

  ContinueCreateStackResponseBody() {}

  explicit ContinueCreateStackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ContinueCreateStackResponseBody() = default;
};
class ContinueCreateStackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ContinueCreateStackResponseBody> body{};

  ContinueCreateStackResponse() {}

  explicit ContinueCreateStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> stackPolicyURL{};
  shared_ptr<string> stackPolicyBody{};
  shared_ptr<string> stackName{};
  shared_ptr<bool> usePreviousParameters{};
  shared_ptr<string> changeSetType{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> stackPolicyDuringUpdateURL{};
  shared_ptr<string> templateBody{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<string> changeSetName{};
  shared_ptr<string> stackPolicyDuringUpdateBody{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> replacementOption{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<vector<CreateChangeSetRequestParameters>> parameters{};
  shared_ptr<vector<string>> notificationURLs{};
  shared_ptr<vector<CreateChangeSetRequestResourcesToImport>> resourcesToImport{};

  CreateChangeSetRequest() {}

  explicit CreateChangeSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackPolicyURL) {
      res["StackPolicyURL"] = boost::any(*stackPolicyURL);
    }
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (usePreviousParameters) {
      res["UsePreviousParameters"] = boost::any(*usePreviousParameters);
    }
    if (changeSetType) {
      res["ChangeSetType"] = boost::any(*changeSetType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (stackPolicyDuringUpdateURL) {
      res["StackPolicyDuringUpdateURL"] = boost::any(*stackPolicyDuringUpdateURL);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (changeSetName) {
      res["ChangeSetName"] = boost::any(*changeSetName);
    }
    if (stackPolicyDuringUpdateBody) {
      res["StackPolicyDuringUpdateBody"] = boost::any(*stackPolicyDuringUpdateBody);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (replacementOption) {
      res["ReplacementOption"] = boost::any(*replacementOption);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (notificationURLs) {
      res["NotificationURLs"] = boost::any(*notificationURLs);
    }
    if (resourcesToImport) {
      vector<boost::any> temp1;
      for(auto item1:*resourcesToImport){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcesToImport"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackPolicyURL") != m.end() && !m["StackPolicyURL"].empty()) {
      stackPolicyURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyURL"]));
    }
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      stackPolicyBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyBody"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("UsePreviousParameters") != m.end() && !m["UsePreviousParameters"].empty()) {
      usePreviousParameters = make_shared<bool>(boost::any_cast<bool>(m["UsePreviousParameters"]));
    }
    if (m.find("ChangeSetType") != m.end() && !m["ChangeSetType"].empty()) {
      changeSetType = make_shared<string>(boost::any_cast<string>(m["ChangeSetType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("StackPolicyDuringUpdateURL") != m.end() && !m["StackPolicyDuringUpdateURL"].empty()) {
      stackPolicyDuringUpdateURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyDuringUpdateURL"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("ChangeSetName") != m.end() && !m["ChangeSetName"].empty()) {
      changeSetName = make_shared<string>(boost::any_cast<string>(m["ChangeSetName"]));
    }
    if (m.find("StackPolicyDuringUpdateBody") != m.end() && !m["StackPolicyDuringUpdateBody"].empty()) {
      stackPolicyDuringUpdateBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyDuringUpdateBody"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("ReplacementOption") != m.end() && !m["ReplacementOption"].empty()) {
      replacementOption = make_shared<string>(boost::any_cast<string>(m["ReplacementOption"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
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
  }


  virtual ~CreateChangeSetRequest() = default;
};
class CreateChangeSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> stackId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> changeSetId{};

  CreateChangeSetResponseBody() {}

  explicit CreateChangeSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
  }


  virtual ~CreateChangeSetResponseBody() = default;
};
class CreateChangeSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateChangeSetResponseBody> body{};

  CreateChangeSetResponse() {}

  explicit CreateChangeSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<bool> disableRollback{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> stackPolicyURL{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<string> stackPolicyBody{};
  shared_ptr<string> stackName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> deletionProtection{};
  shared_ptr<string> createOption{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<vector<CreateStackRequestParameters>> parameters{};
  shared_ptr<vector<string>> notificationURLs{};
  shared_ptr<vector<CreateStackRequestTags>> tags{};
  shared_ptr<string> resourceGroupId{};

  CreateStackRequest() {}

  explicit CreateStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (stackPolicyURL) {
      res["StackPolicyURL"] = boost::any(*stackPolicyURL);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (createOption) {
      res["CreateOption"] = boost::any(*createOption);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (notificationURLs) {
      res["NotificationURLs"] = boost::any(*notificationURLs);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("StackPolicyURL") != m.end() && !m["StackPolicyURL"].empty()) {
      stackPolicyURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyURL"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      stackPolicyBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyBody"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<string>(boost::any_cast<string>(m["DeletionProtection"]));
    }
    if (m.find("CreateOption") != m.end() && !m["CreateOption"].empty()) {
      createOption = make_shared<string>(boost::any_cast<string>(m["CreateOption"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
  shared_ptr<CreateStackResponseBody> body{};

  CreateStackResponse() {}

  explicit CreateStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class CreateStackGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> description{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> administrationRoleName{};
  shared_ptr<string> executionRoleName{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<vector<CreateStackGroupRequestParameters>> parameters{};
  shared_ptr<string> resourceGroupId{};

  CreateStackGroupRequest() {}

  explicit CreateStackGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (administrationRoleName) {
      res["AdministrationRoleName"] = boost::any(*administrationRoleName);
    }
    if (executionRoleName) {
      res["ExecutionRoleName"] = boost::any(*executionRoleName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("AdministrationRoleName") != m.end() && !m["AdministrationRoleName"].empty()) {
      administrationRoleName = make_shared<string>(boost::any_cast<string>(m["AdministrationRoleName"]));
    }
    if (m.find("ExecutionRoleName") != m.end() && !m["ExecutionRoleName"].empty()) {
      executionRoleName = make_shared<string>(boost::any_cast<string>(m["ExecutionRoleName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CreateStackGroupRequest() = default;
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
  shared_ptr<CreateStackGroupResponseBody> body{};

  CreateStackGroupResponse() {}

  explicit CreateStackGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<map<string, boost::any>> accountIds{};
  shared_ptr<map<string, boost::any>> regionIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> operationDescription{};
  shared_ptr<map<string, boost::any>> operationPreferences{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<vector<CreateStackInstancesRequestParameterOverrides>> parameterOverrides{};

  CreateStackInstancesRequest() {}

  explicit CreateStackInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferences) {
      res["OperationPreferences"] = boost::any(*operationPreferences);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (parameterOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*parameterOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterOverrides"] = boost::any(temp1);
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
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AccountIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      accountIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["RegionIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      regionIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> accountIdsShrink{};
  shared_ptr<string> regionIdsShrink{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationPreferencesShrink{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<vector<CreateStackInstancesShrinkRequestParameterOverrides>> parameterOverrides{};

  CreateStackInstancesShrinkRequest() {}

  explicit CreateStackInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountIdsShrink) {
      res["AccountIds"] = boost::any(*accountIdsShrink);
    }
    if (regionIdsShrink) {
      res["RegionIds"] = boost::any(*regionIdsShrink);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferencesShrink) {
      res["OperationPreferences"] = boost::any(*operationPreferencesShrink);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (parameterOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*parameterOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterOverrides"] = boost::any(temp1);
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
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      accountIdsShrink = make_shared<string>(boost::any_cast<string>(m["AccountIds"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      regionIdsShrink = make_shared<string>(boost::any_cast<string>(m["RegionIds"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      operationPreferencesShrink = make_shared<string>(boost::any_cast<string>(m["OperationPreferences"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
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
  shared_ptr<CreateStackInstancesResponseBody> body{};

  CreateStackInstancesResponse() {}

  explicit CreateStackInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class CreateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateURL{};
  shared_ptr<string> description{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateName{};
  shared_ptr<string> resourceGroupId{};

  CreateTemplateRequest() {}

  explicit CreateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
  shared_ptr<CreateTemplateResponseBody> body{};

  CreateTemplateResponse() {}

  explicit CreateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class DeleteChangeSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> changeSetId{};

  DeleteChangeSetRequest() {}

  explicit DeleteChangeSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
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
  shared_ptr<DeleteChangeSetResponseBody> body{};

  DeleteChangeSetResponse() {}

  explicit DeleteChangeSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<bool> retainAllResources{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<vector<string>> retainResources{};

  DeleteStackRequest() {}

  explicit DeleteStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (retainAllResources) {
      res["RetainAllResources"] = boost::any(*retainAllResources);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (retainResources) {
      res["RetainResources"] = boost::any(*retainResources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RetainAllResources") != m.end() && !m["RetainAllResources"].empty()) {
      retainAllResources = make_shared<bool>(boost::any_cast<bool>(m["RetainAllResources"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
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
  shared_ptr<DeleteStackResponseBody> body{};

  DeleteStackResponse() {}

  explicit DeleteStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<DeleteStackGroupResponseBody> body{};

  DeleteStackGroupResponse() {}

  explicit DeleteStackGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class DeleteStackInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<map<string, boost::any>> accountIds{};
  shared_ptr<map<string, boost::any>> regionIds{};
  shared_ptr<bool> retainStacks{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> operationDescription{};
  shared_ptr<map<string, boost::any>> operationPreferences{};

  DeleteStackInstancesRequest() {}

  explicit DeleteStackInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (retainStacks) {
      res["RetainStacks"] = boost::any(*retainStacks);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferences) {
      res["OperationPreferences"] = boost::any(*operationPreferences);
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
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AccountIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      accountIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["RegionIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      regionIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RetainStacks") != m.end() && !m["RetainStacks"].empty()) {
      retainStacks = make_shared<bool>(boost::any_cast<bool>(m["RetainStacks"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
  }


  virtual ~DeleteStackInstancesRequest() = default;
};
class DeleteStackInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> accountIdsShrink{};
  shared_ptr<string> regionIdsShrink{};
  shared_ptr<bool> retainStacks{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationPreferencesShrink{};

  DeleteStackInstancesShrinkRequest() {}

  explicit DeleteStackInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountIdsShrink) {
      res["AccountIds"] = boost::any(*accountIdsShrink);
    }
    if (regionIdsShrink) {
      res["RegionIds"] = boost::any(*regionIdsShrink);
    }
    if (retainStacks) {
      res["RetainStacks"] = boost::any(*retainStacks);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferencesShrink) {
      res["OperationPreferences"] = boost::any(*operationPreferencesShrink);
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
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      accountIdsShrink = make_shared<string>(boost::any_cast<string>(m["AccountIds"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      regionIdsShrink = make_shared<string>(boost::any_cast<string>(m["RegionIds"]));
    }
    if (m.find("RetainStacks") != m.end() && !m["RetainStacks"].empty()) {
      retainStacks = make_shared<bool>(boost::any_cast<bool>(m["RetainStacks"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      operationPreferencesShrink = make_shared<string>(boost::any_cast<string>(m["OperationPreferences"]));
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
  shared_ptr<DeleteStackInstancesResponseBody> body{};

  DeleteStackInstancesResponse() {}

  explicit DeleteStackInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<DeleteTemplateResponseBody> body{};

  DeleteTemplateResponse() {}

  explicit DeleteTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
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
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> logicalResourceId{};

  DetectStackDriftRequest() {}

  explicit DetectStackDriftRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
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
  shared_ptr<DetectStackDriftResponseBody> body{};

  DetectStackDriftResponse() {}

  explicit DetectStackDriftResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<map<string, boost::any>> operationPreferences{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (operationPreferences) {
      res["OperationPreferences"] = boost::any(*operationPreferences);
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
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OperationPreferences"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      operationPreferences = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DetectStackGroupDriftRequest() = default;
};
class DetectStackGroupDriftShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> operationPreferencesShrink{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (operationPreferencesShrink) {
      res["OperationPreferences"] = boost::any(*operationPreferencesShrink);
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
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      operationPreferencesShrink = make_shared<string>(boost::any_cast<string>(m["OperationPreferences"]));
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
  shared_ptr<DetectStackGroupDriftResponseBody> body{};

  DetectStackGroupDriftResponse() {}

  explicit DetectStackGroupDriftResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> logicalResourceId{};

  DetectStackResourceDriftRequest() {}

  explicit DetectStackResourceDriftRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
  }


  virtual ~DetectStackResourceDriftRequest() = default;
};
class DetectStackResourceDriftResponseBodyPropertyDifferences : public Darabonba::Model {
public:
  shared_ptr<string> actualValue{};
  shared_ptr<string> differenceType{};
  shared_ptr<string> propertyPath{};
  shared_ptr<string> expectedValue{};

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
    if (propertyPath) {
      res["PropertyPath"] = boost::any(*propertyPath);
    }
    if (expectedValue) {
      res["ExpectedValue"] = boost::any(*expectedValue);
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
    if (m.find("PropertyPath") != m.end() && !m["PropertyPath"].empty()) {
      propertyPath = make_shared<string>(boost::any_cast<string>(m["PropertyPath"]));
    }
    if (m.find("ExpectedValue") != m.end() && !m["ExpectedValue"].empty()) {
      expectedValue = make_shared<string>(boost::any_cast<string>(m["ExpectedValue"]));
    }
  }


  virtual ~DetectStackResourceDriftResponseBodyPropertyDifferences() = default;
};
class DetectStackResourceDriftResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> expectedProperties{};
  shared_ptr<string> resourceDriftStatus{};
  shared_ptr<string> actualProperties{};
  shared_ptr<vector<DetectStackResourceDriftResponseBodyPropertyDifferences>> propertyDifferences{};

  DetectStackResourceDriftResponseBody() {}

  explicit DetectStackResourceDriftResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (expectedProperties) {
      res["ExpectedProperties"] = boost::any(*expectedProperties);
    }
    if (resourceDriftStatus) {
      res["ResourceDriftStatus"] = boost::any(*resourceDriftStatus);
    }
    if (actualProperties) {
      res["ActualProperties"] = boost::any(*actualProperties);
    }
    if (propertyDifferences) {
      vector<boost::any> temp1;
      for(auto item1:*propertyDifferences){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyDifferences"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ExpectedProperties") != m.end() && !m["ExpectedProperties"].empty()) {
      expectedProperties = make_shared<string>(boost::any_cast<string>(m["ExpectedProperties"]));
    }
    if (m.find("ResourceDriftStatus") != m.end() && !m["ResourceDriftStatus"].empty()) {
      resourceDriftStatus = make_shared<string>(boost::any_cast<string>(m["ResourceDriftStatus"]));
    }
    if (m.find("ActualProperties") != m.end() && !m["ActualProperties"].empty()) {
      actualProperties = make_shared<string>(boost::any_cast<string>(m["ActualProperties"]));
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
  }


  virtual ~DetectStackResourceDriftResponseBody() = default;
};
class DetectStackResourceDriftResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectStackResourceDriftResponseBody> body{};

  DetectStackResourceDriftResponse() {}

  explicit DetectStackResourceDriftResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> changeSetId{};
  shared_ptr<string> clientToken{};

  ExecuteChangeSetRequest() {}

  explicit ExecuteChangeSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
  shared_ptr<ExecuteChangeSetResponseBody> body{};

  ExecuteChangeSetResponse() {}

  explicit ExecuteChangeSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class GenerateTemplatePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};

  GenerateTemplatePolicyRequest() {}

  explicit GenerateTemplatePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~GenerateTemplatePolicyRequest() = default;
};
class GenerateTemplatePolicyResponseBodyPolicyStatement : public Darabonba::Model {
public:
  shared_ptr<string> effect{};
  shared_ptr<string> resource{};
  shared_ptr<vector<string>> action{};

  GenerateTemplatePolicyResponseBodyPolicyStatement() {}

  explicit GenerateTemplatePolicyResponseBodyPolicyStatement(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effect) {
      res["Effect"] = boost::any(*effect);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (action) {
      res["Action"] = boost::any(*action);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Effect") != m.end() && !m["Effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["Effect"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
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
  }


  virtual ~GenerateTemplatePolicyResponseBodyPolicyStatement() = default;
};
class GenerateTemplatePolicyResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<string> version{};
  shared_ptr<vector<GenerateTemplatePolicyResponseBodyPolicyStatement>> statement{};

  GenerateTemplatePolicyResponseBodyPolicy() {}

  explicit GenerateTemplatePolicyResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (statement) {
      vector<boost::any> temp1;
      for(auto item1:*statement){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Statement"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
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
  }


  virtual ~GenerateTemplatePolicyResponseBodyPolicy() = default;
};
class GenerateTemplatePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GenerateTemplatePolicyResponseBodyPolicy> policy{};

  GenerateTemplatePolicyResponseBody() {}

  explicit GenerateTemplatePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        GenerateTemplatePolicyResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<GenerateTemplatePolicyResponseBodyPolicy>(model1);
      }
    }
  }


  virtual ~GenerateTemplatePolicyResponseBody() = default;
};
class GenerateTemplatePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateTemplatePolicyResponseBody> body{};

  GenerateTemplatePolicyResponse() {}

  explicit GenerateTemplatePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<bool> showTemplate{};
  shared_ptr<string> regionId{};
  shared_ptr<string> changeSetId{};

  GetChangeSetRequest() {}

  explicit GetChangeSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (showTemplate) {
      res["ShowTemplate"] = boost::any(*showTemplate);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShowTemplate") != m.end() && !m["ShowTemplate"].empty()) {
      showTemplate = make_shared<bool>(boost::any_cast<bool>(m["ShowTemplate"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
  }


  virtual ~GetChangeSetRequest() = default;
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
  shared_ptr<string> status{};
  shared_ptr<string> changeSetName{};
  shared_ptr<string> changeSetType{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<string> executionStatus{};
  shared_ptr<string> stackName{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> description{};
  shared_ptr<string> changeSetId{};
  shared_ptr<string> templateBody{};
  shared_ptr<vector<map<string, boost::any>>> changes{};
  shared_ptr<vector<GetChangeSetResponseBodyParameters>> parameters{};

  GetChangeSetResponseBody() {}

  explicit GetChangeSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (changeSetName) {
      res["ChangeSetName"] = boost::any(*changeSetName);
    }
    if (changeSetType) {
      res["ChangeSetType"] = boost::any(*changeSetType);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (executionStatus) {
      res["ExecutionStatus"] = boost::any(*executionStatus);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (changes) {
      res["Changes"] = boost::any(*changes);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ChangeSetName") != m.end() && !m["ChangeSetName"].empty()) {
      changeSetName = make_shared<string>(boost::any_cast<string>(m["ChangeSetName"]));
    }
    if (m.find("ChangeSetType") != m.end() && !m["ChangeSetType"].empty()) {
      changeSetType = make_shared<string>(boost::any_cast<string>(m["ChangeSetType"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("ExecutionStatus") != m.end() && !m["ExecutionStatus"].empty()) {
      executionStatus = make_shared<string>(boost::any_cast<string>(m["ExecutionStatus"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
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
  }


  virtual ~GetChangeSetResponseBody() = default;
};
class GetChangeSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetChangeSetResponseBody> body{};

  GetChangeSetResponse() {}

  explicit GetChangeSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<bool> supportDriftDetection{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<map<string, boost::any>> attributes{};

  GetResourceTypeResponseBody() {}

  explicit GetResourceTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportDriftDetection) {
      res["SupportDriftDetection"] = boost::any(*supportDriftDetection);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportDriftDetection") != m.end() && !m["SupportDriftDetection"].empty()) {
      supportDriftDetection = make_shared<bool>(boost::any_cast<bool>(m["SupportDriftDetection"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Attributes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attributes = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetResourceTypeResponseBody() = default;
};
class GetResourceTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResourceTypeResponseBody> body{};

  GetResourceTypeResponse() {}

  explicit GetResourceTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<map<string, boost::any>> templateBody{};
  shared_ptr<string> requestId{};

  GetResourceTypeTemplateResponseBody() {}

  explicit GetResourceTypeTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TemplateBody"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateBody = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetResourceTypeTemplateResponseBody() = default;
};
class GetResourceTypeTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetResourceTypeTemplateResponseBody> body{};

  GetResourceTypeTemplateResponse() {}

  explicit GetResourceTypeTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class GetStackRequest : public Darabonba::Model {
public:
  shared_ptr<string> stackId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> outputOption{};
  shared_ptr<string> showResourceProgress{};

  GetStackRequest() {}

  explicit GetStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (outputOption) {
      res["OutputOption"] = boost::any(*outputOption);
    }
    if (showResourceProgress) {
      res["ShowResourceProgress"] = boost::any(*showResourceProgress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OutputOption") != m.end() && !m["OutputOption"].empty()) {
      outputOption = make_shared<string>(boost::any_cast<string>(m["OutputOption"]));
    }
    if (m.find("ShowResourceProgress") != m.end() && !m["ShowResourceProgress"].empty()) {
      showResourceProgress = make_shared<string>(boost::any_cast<string>(m["ShowResourceProgress"]));
    }
  }


  virtual ~GetStackRequest() = default;
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
class GetStackResponseBodyResourceProgressInProgressResourceDetails : public Darabonba::Model {
public:
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<double> progressValue{};
  shared_ptr<double> progressTargetValue{};

  GetStackResponseBodyResourceProgressInProgressResourceDetails() {}

  explicit GetStackResponseBodyResourceProgressInProgressResourceDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (progressValue) {
      res["ProgressValue"] = boost::any(*progressValue);
    }
    if (progressTargetValue) {
      res["ProgressTargetValue"] = boost::any(*progressTargetValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ProgressValue") != m.end() && !m["ProgressValue"].empty()) {
      progressValue = make_shared<double>(boost::any_cast<double>(m["ProgressValue"]));
    }
    if (m.find("ProgressTargetValue") != m.end() && !m["ProgressTargetValue"].empty()) {
      progressTargetValue = make_shared<double>(boost::any_cast<double>(m["ProgressTargetValue"]));
    }
  }


  virtual ~GetStackResponseBodyResourceProgressInProgressResourceDetails() = default;
};
class GetStackResponseBodyResourceProgress : public Darabonba::Model {
public:
  shared_ptr<long> totalResourceCount{};
  shared_ptr<long> successResourceCount{};
  shared_ptr<long> failedResourceCount{};
  shared_ptr<long> inProgressResourceCount{};
  shared_ptr<long> pendingResourceCount{};
  shared_ptr<vector<GetStackResponseBodyResourceProgressInProgressResourceDetails>> inProgressResourceDetails{};

  GetStackResponseBodyResourceProgress() {}

  explicit GetStackResponseBodyResourceProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalResourceCount) {
      res["TotalResourceCount"] = boost::any(*totalResourceCount);
    }
    if (successResourceCount) {
      res["SuccessResourceCount"] = boost::any(*successResourceCount);
    }
    if (failedResourceCount) {
      res["FailedResourceCount"] = boost::any(*failedResourceCount);
    }
    if (inProgressResourceCount) {
      res["InProgressResourceCount"] = boost::any(*inProgressResourceCount);
    }
    if (pendingResourceCount) {
      res["PendingResourceCount"] = boost::any(*pendingResourceCount);
    }
    if (inProgressResourceDetails) {
      vector<boost::any> temp1;
      for(auto item1:*inProgressResourceDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InProgressResourceDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalResourceCount") != m.end() && !m["TotalResourceCount"].empty()) {
      totalResourceCount = make_shared<long>(boost::any_cast<long>(m["TotalResourceCount"]));
    }
    if (m.find("SuccessResourceCount") != m.end() && !m["SuccessResourceCount"].empty()) {
      successResourceCount = make_shared<long>(boost::any_cast<long>(m["SuccessResourceCount"]));
    }
    if (m.find("FailedResourceCount") != m.end() && !m["FailedResourceCount"].empty()) {
      failedResourceCount = make_shared<long>(boost::any_cast<long>(m["FailedResourceCount"]));
    }
    if (m.find("InProgressResourceCount") != m.end() && !m["InProgressResourceCount"].empty()) {
      inProgressResourceCount = make_shared<long>(boost::any_cast<long>(m["InProgressResourceCount"]));
    }
    if (m.find("PendingResourceCount") != m.end() && !m["PendingResourceCount"].empty()) {
      pendingResourceCount = make_shared<long>(boost::any_cast<long>(m["PendingResourceCount"]));
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
  }


  virtual ~GetStackResponseBodyResourceProgress() = default;
};
class GetStackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> description{};
  shared_ptr<vector<GetStackResponseBodyParameters>> parameters{};
  shared_ptr<string> requestId{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> parentStackId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deletionProtection{};
  shared_ptr<string> rootStackId{};
  shared_ptr<string> templateDescription{};
  shared_ptr<string> stackType{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> updateTime{};
  shared_ptr<vector<map<string, boost::any>>> outputs{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackDriftStatus{};
  shared_ptr<vector<string>> notificationURLs{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<string> stackName{};
  shared_ptr<vector<GetStackResponseBodyTags>> tags{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<string> stackId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<GetStackResponseBodyResourceProgress> resourceProgress{};

  GetStackResponseBody() {}

  explicit GetStackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (parentStackId) {
      res["ParentStackId"] = boost::any(*parentStackId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (rootStackId) {
      res["RootStackId"] = boost::any(*rootStackId);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (stackType) {
      res["StackType"] = boost::any(*stackType);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackDriftStatus) {
      res["StackDriftStatus"] = boost::any(*stackDriftStatus);
    }
    if (notificationURLs) {
      res["NotificationURLs"] = boost::any(*notificationURLs);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
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
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceProgress) {
      res["ResourceProgress"] = resourceProgress ? boost::any(resourceProgress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("ParentStackId") != m.end() && !m["ParentStackId"].empty()) {
      parentStackId = make_shared<string>(boost::any_cast<string>(m["ParentStackId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<string>(boost::any_cast<string>(m["DeletionProtection"]));
    }
    if (m.find("RootStackId") != m.end() && !m["RootStackId"].empty()) {
      rootStackId = make_shared<string>(boost::any_cast<string>(m["RootStackId"]));
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("StackType") != m.end() && !m["StackType"].empty()) {
      stackType = make_shared<string>(boost::any_cast<string>(m["StackType"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackDriftStatus") != m.end() && !m["StackDriftStatus"].empty()) {
      stackDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackDriftStatus"]));
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
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
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
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
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
  }


  virtual ~GetStackResponseBody() = default;
};
class GetStackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStackResponseBody> body{};

  GetStackResponse() {}

  explicit GetStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> driftDetectionId{};

  GetStackDriftDetectionStatusRequest() {}

  explicit GetStackDriftDetectionStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (driftDetectionId) {
      res["DriftDetectionId"] = boost::any(*driftDetectionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DriftDetectionId") != m.end() && !m["DriftDetectionId"].empty()) {
      driftDetectionId = make_shared<string>(boost::any_cast<string>(m["DriftDetectionId"]));
    }
  }


  virtual ~GetStackDriftDetectionStatusRequest() = default;
};
class GetStackDriftDetectionStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> stackId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> stackDriftStatus{};
  shared_ptr<string> driftDetectionId{};
  shared_ptr<string> driftDetectionStatus{};
  shared_ptr<long> driftedStackResourceCount{};
  shared_ptr<string> driftDetectionStatusReason{};

  GetStackDriftDetectionStatusResponseBody() {}

  explicit GetStackDriftDetectionStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (stackDriftStatus) {
      res["StackDriftStatus"] = boost::any(*stackDriftStatus);
    }
    if (driftDetectionId) {
      res["DriftDetectionId"] = boost::any(*driftDetectionId);
    }
    if (driftDetectionStatus) {
      res["DriftDetectionStatus"] = boost::any(*driftDetectionStatus);
    }
    if (driftedStackResourceCount) {
      res["DriftedStackResourceCount"] = boost::any(*driftedStackResourceCount);
    }
    if (driftDetectionStatusReason) {
      res["DriftDetectionStatusReason"] = boost::any(*driftDetectionStatusReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("StackDriftStatus") != m.end() && !m["StackDriftStatus"].empty()) {
      stackDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackDriftStatus"]));
    }
    if (m.find("DriftDetectionId") != m.end() && !m["DriftDetectionId"].empty()) {
      driftDetectionId = make_shared<string>(boost::any_cast<string>(m["DriftDetectionId"]));
    }
    if (m.find("DriftDetectionStatus") != m.end() && !m["DriftDetectionStatus"].empty()) {
      driftDetectionStatus = make_shared<string>(boost::any_cast<string>(m["DriftDetectionStatus"]));
    }
    if (m.find("DriftedStackResourceCount") != m.end() && !m["DriftedStackResourceCount"].empty()) {
      driftedStackResourceCount = make_shared<long>(boost::any_cast<long>(m["DriftedStackResourceCount"]));
    }
    if (m.find("DriftDetectionStatusReason") != m.end() && !m["DriftDetectionStatusReason"].empty()) {
      driftDetectionStatusReason = make_shared<string>(boost::any_cast<string>(m["DriftDetectionStatusReason"]));
    }
  }


  virtual ~GetStackDriftDetectionStatusResponseBody() = default;
};
class GetStackDriftDetectionStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStackDriftDetectionStatusResponseBody> body{};

  GetStackDriftDetectionStatusResponse() {}

  explicit GetStackDriftDetectionStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> stackGroupId{};

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
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
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
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
  }


  virtual ~GetStackGroupRequest() = default;
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
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<long> totalStackInstancesCount{};
  shared_ptr<long> failedStackInstancesCount{};
  shared_ptr<string> driftDetectionStatus{};
  shared_ptr<string> stackGroupDriftStatus{};
  shared_ptr<long> inProgressStackInstancesCount{};
  shared_ptr<long> inSyncStackInstancesCount{};
  shared_ptr<long> cancelledStackInstancesCount{};
  shared_ptr<long> driftedStackInstancesCount{};

  GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail() {}

  explicit GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (totalStackInstancesCount) {
      res["TotalStackInstancesCount"] = boost::any(*totalStackInstancesCount);
    }
    if (failedStackInstancesCount) {
      res["FailedStackInstancesCount"] = boost::any(*failedStackInstancesCount);
    }
    if (driftDetectionStatus) {
      res["DriftDetectionStatus"] = boost::any(*driftDetectionStatus);
    }
    if (stackGroupDriftStatus) {
      res["StackGroupDriftStatus"] = boost::any(*stackGroupDriftStatus);
    }
    if (inProgressStackInstancesCount) {
      res["InProgressStackInstancesCount"] = boost::any(*inProgressStackInstancesCount);
    }
    if (inSyncStackInstancesCount) {
      res["InSyncStackInstancesCount"] = boost::any(*inSyncStackInstancesCount);
    }
    if (cancelledStackInstancesCount) {
      res["CancelledStackInstancesCount"] = boost::any(*cancelledStackInstancesCount);
    }
    if (driftedStackInstancesCount) {
      res["DriftedStackInstancesCount"] = boost::any(*driftedStackInstancesCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("TotalStackInstancesCount") != m.end() && !m["TotalStackInstancesCount"].empty()) {
      totalStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["TotalStackInstancesCount"]));
    }
    if (m.find("FailedStackInstancesCount") != m.end() && !m["FailedStackInstancesCount"].empty()) {
      failedStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["FailedStackInstancesCount"]));
    }
    if (m.find("DriftDetectionStatus") != m.end() && !m["DriftDetectionStatus"].empty()) {
      driftDetectionStatus = make_shared<string>(boost::any_cast<string>(m["DriftDetectionStatus"]));
    }
    if (m.find("StackGroupDriftStatus") != m.end() && !m["StackGroupDriftStatus"].empty()) {
      stackGroupDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackGroupDriftStatus"]));
    }
    if (m.find("InProgressStackInstancesCount") != m.end() && !m["InProgressStackInstancesCount"].empty()) {
      inProgressStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["InProgressStackInstancesCount"]));
    }
    if (m.find("InSyncStackInstancesCount") != m.end() && !m["InSyncStackInstancesCount"].empty()) {
      inSyncStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["InSyncStackInstancesCount"]));
    }
    if (m.find("CancelledStackInstancesCount") != m.end() && !m["CancelledStackInstancesCount"].empty()) {
      cancelledStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["CancelledStackInstancesCount"]));
    }
    if (m.find("DriftedStackInstancesCount") != m.end() && !m["DriftedStackInstancesCount"].empty()) {
      driftedStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["DriftedStackInstancesCount"]));
    }
  }


  virtual ~GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail() = default;
};
class GetStackGroupResponseBodyStackGroup : public Darabonba::Model {
public:
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> administrationRoleName{};
  shared_ptr<vector<GetStackGroupResponseBodyStackGroupParameters>> parameters{};
  shared_ptr<string> description{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> executionRoleName{};
  shared_ptr<string> templateBody{};
  shared_ptr<GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail> stackGroupDriftDetectionDetail{};
  shared_ptr<string> resourceGroupId{};

  GetStackGroupResponseBodyStackGroup() {}

  explicit GetStackGroupResponseBodyStackGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (administrationRoleName) {
      res["AdministrationRoleName"] = boost::any(*administrationRoleName);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (executionRoleName) {
      res["ExecutionRoleName"] = boost::any(*executionRoleName);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (stackGroupDriftDetectionDetail) {
      res["StackGroupDriftDetectionDetail"] = stackGroupDriftDetectionDetail ? boost::any(stackGroupDriftDetectionDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("AdministrationRoleName") != m.end() && !m["AdministrationRoleName"].empty()) {
      administrationRoleName = make_shared<string>(boost::any_cast<string>(m["AdministrationRoleName"]));
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("ExecutionRoleName") != m.end() && !m["ExecutionRoleName"].empty()) {
      executionRoleName = make_shared<string>(boost::any_cast<string>(m["ExecutionRoleName"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("StackGroupDriftDetectionDetail") != m.end() && !m["StackGroupDriftDetectionDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["StackGroupDriftDetectionDetail"].type()) {
        GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StackGroupDriftDetectionDetail"]));
        stackGroupDriftDetectionDetail = make_shared<GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail>(model1);
      }
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
  shared_ptr<GetStackGroupResponseBody> body{};

  GetStackGroupResponse() {}

  explicit GetStackGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> operationId{};

  GetStackGroupOperationRequest() {}

  explicit GetStackGroupOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
  }


  virtual ~GetStackGroupOperationRequest() = default;
};
class GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences : public Darabonba::Model {
public:
  shared_ptr<long> failureToleranceCount{};
  shared_ptr<long> maxConcurrentCount{};
  shared_ptr<long> maxConcurrentPercentage{};
  shared_ptr<long> failureTolerancePercentage{};
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
    if (maxConcurrentCount) {
      res["MaxConcurrentCount"] = boost::any(*maxConcurrentCount);
    }
    if (maxConcurrentPercentage) {
      res["MaxConcurrentPercentage"] = boost::any(*maxConcurrentPercentage);
    }
    if (failureTolerancePercentage) {
      res["FailureTolerancePercentage"] = boost::any(*failureTolerancePercentage);
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
    if (m.find("MaxConcurrentCount") != m.end() && !m["MaxConcurrentCount"].empty()) {
      maxConcurrentCount = make_shared<long>(boost::any_cast<long>(m["MaxConcurrentCount"]));
    }
    if (m.find("MaxConcurrentPercentage") != m.end() && !m["MaxConcurrentPercentage"].empty()) {
      maxConcurrentPercentage = make_shared<long>(boost::any_cast<long>(m["MaxConcurrentPercentage"]));
    }
    if (m.find("FailureTolerancePercentage") != m.end() && !m["FailureTolerancePercentage"].empty()) {
      failureTolerancePercentage = make_shared<long>(boost::any_cast<long>(m["FailureTolerancePercentage"]));
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
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<long> totalStackInstancesCount{};
  shared_ptr<long> failedStackInstancesCount{};
  shared_ptr<string> driftDetectionStatus{};
  shared_ptr<string> stackGroupDriftStatus{};
  shared_ptr<long> inProgressStackInstancesCount{};
  shared_ptr<long> inSyncStackInstancesCount{};
  shared_ptr<long> cancelledStackInstancesCount{};
  shared_ptr<long> driftedStackInstancesCount{};

  GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail() {}

  explicit GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (totalStackInstancesCount) {
      res["TotalStackInstancesCount"] = boost::any(*totalStackInstancesCount);
    }
    if (failedStackInstancesCount) {
      res["FailedStackInstancesCount"] = boost::any(*failedStackInstancesCount);
    }
    if (driftDetectionStatus) {
      res["DriftDetectionStatus"] = boost::any(*driftDetectionStatus);
    }
    if (stackGroupDriftStatus) {
      res["StackGroupDriftStatus"] = boost::any(*stackGroupDriftStatus);
    }
    if (inProgressStackInstancesCount) {
      res["InProgressStackInstancesCount"] = boost::any(*inProgressStackInstancesCount);
    }
    if (inSyncStackInstancesCount) {
      res["InSyncStackInstancesCount"] = boost::any(*inSyncStackInstancesCount);
    }
    if (cancelledStackInstancesCount) {
      res["CancelledStackInstancesCount"] = boost::any(*cancelledStackInstancesCount);
    }
    if (driftedStackInstancesCount) {
      res["DriftedStackInstancesCount"] = boost::any(*driftedStackInstancesCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("TotalStackInstancesCount") != m.end() && !m["TotalStackInstancesCount"].empty()) {
      totalStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["TotalStackInstancesCount"]));
    }
    if (m.find("FailedStackInstancesCount") != m.end() && !m["FailedStackInstancesCount"].empty()) {
      failedStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["FailedStackInstancesCount"]));
    }
    if (m.find("DriftDetectionStatus") != m.end() && !m["DriftDetectionStatus"].empty()) {
      driftDetectionStatus = make_shared<string>(boost::any_cast<string>(m["DriftDetectionStatus"]));
    }
    if (m.find("StackGroupDriftStatus") != m.end() && !m["StackGroupDriftStatus"].empty()) {
      stackGroupDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackGroupDriftStatus"]));
    }
    if (m.find("InProgressStackInstancesCount") != m.end() && !m["InProgressStackInstancesCount"].empty()) {
      inProgressStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["InProgressStackInstancesCount"]));
    }
    if (m.find("InSyncStackInstancesCount") != m.end() && !m["InSyncStackInstancesCount"].empty()) {
      inSyncStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["InSyncStackInstancesCount"]));
    }
    if (m.find("CancelledStackInstancesCount") != m.end() && !m["CancelledStackInstancesCount"].empty()) {
      cancelledStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["CancelledStackInstancesCount"]));
    }
    if (m.find("DriftedStackInstancesCount") != m.end() && !m["DriftedStackInstancesCount"].empty()) {
      driftedStackInstancesCount = make_shared<long>(boost::any_cast<long>(m["DriftedStackInstancesCount"]));
    }
  }


  virtual ~GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail() = default;
};
class GetStackGroupOperationResponseBodyStackGroupOperation : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> endTime{};
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> action{};
  shared_ptr<string> createTime{};
  shared_ptr<string> executionRoleName{};
  shared_ptr<bool> retainStacks{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> operationId{};
  shared_ptr<string> operationDescription{};
  shared_ptr<string> administratorRoleName{};
  shared_ptr<GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences> operationPreferences{};
  shared_ptr<GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail> stackGroupDriftDetectionDetail{};

  GetStackGroupOperationResponseBodyStackGroupOperation() {}

  explicit GetStackGroupOperationResponseBodyStackGroupOperation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (executionRoleName) {
      res["ExecutionRoleName"] = boost::any(*executionRoleName);
    }
    if (retainStacks) {
      res["RetainStacks"] = boost::any(*retainStacks);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (administratorRoleName) {
      res["AdministratorRoleName"] = boost::any(*administratorRoleName);
    }
    if (operationPreferences) {
      res["OperationPreferences"] = operationPreferences ? boost::any(operationPreferences->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stackGroupDriftDetectionDetail) {
      res["StackGroupDriftDetectionDetail"] = stackGroupDriftDetectionDetail ? boost::any(stackGroupDriftDetectionDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExecutionRoleName") != m.end() && !m["ExecutionRoleName"].empty()) {
      executionRoleName = make_shared<string>(boost::any_cast<string>(m["ExecutionRoleName"]));
    }
    if (m.find("RetainStacks") != m.end() && !m["RetainStacks"].empty()) {
      retainStacks = make_shared<bool>(boost::any_cast<bool>(m["RetainStacks"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("AdministratorRoleName") != m.end() && !m["AdministratorRoleName"].empty()) {
      administratorRoleName = make_shared<string>(boost::any_cast<string>(m["AdministratorRoleName"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperationPreferences"].type()) {
        GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperationPreferences"]));
        operationPreferences = make_shared<GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences>(model1);
      }
    }
    if (m.find("StackGroupDriftDetectionDetail") != m.end() && !m["StackGroupDriftDetectionDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["StackGroupDriftDetectionDetail"].type()) {
        GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StackGroupDriftDetectionDetail"]));
        stackGroupDriftDetectionDetail = make_shared<GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail>(model1);
      }
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
  shared_ptr<GetStackGroupOperationResponseBody> body{};

  GetStackGroupOperationResponse() {}

  explicit GetStackGroupOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> status{};
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> stackDriftStatus{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> accountId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<GetStackInstanceResponseBodyStackInstanceParameterOverrides>> parameterOverrides{};

  GetStackInstanceResponseBodyStackInstance() {}

  explicit GetStackInstanceResponseBodyStackInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (stackDriftStatus) {
      res["StackDriftStatus"] = boost::any(*stackDriftStatus);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (parameterOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*parameterOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterOverrides"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("StackDriftStatus") != m.end() && !m["StackDriftStatus"].empty()) {
      stackDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackDriftStatus"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<GetStackInstanceResponseBody> body{};

  GetStackInstanceResponse() {}

  explicit GetStackInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> regionId{};

  GetStackPolicyRequest() {}

  explicit GetStackPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetStackPolicyRequest() = default;
};
class GetStackPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> stackPolicyBody{};
  shared_ptr<string> requestId{};

  GetStackPolicyResponseBody() {}

  explicit GetStackPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["StackPolicyBody"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      stackPolicyBody = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetStackPolicyResponseBody() = default;
};
class GetStackPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStackPolicyResponseBody> body{};

  GetStackPolicyResponse() {}

  explicit GetStackPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> showResourceAttributes{};
  shared_ptr<string> logicalResourceId{};

  GetStackResourceRequest() {}

  explicit GetStackResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (showResourceAttributes) {
      res["ShowResourceAttributes"] = boost::any(*showResourceAttributes);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShowResourceAttributes") != m.end() && !m["ShowResourceAttributes"].empty()) {
      showResourceAttributes = make_shared<bool>(boost::any_cast<bool>(m["ShowResourceAttributes"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
  }


  virtual ~GetStackResourceRequest() = default;
};
class GetStackResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> stackName{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceDriftStatus{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<vector<map<string, boost::any>>> resourceAttributes{};

  GetStackResourceResponseBody() {}

  explicit GetStackResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceDriftStatus) {
      res["ResourceDriftStatus"] = boost::any(*resourceDriftStatus);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (resourceAttributes) {
      res["ResourceAttributes"] = boost::any(*resourceAttributes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceDriftStatus") != m.end() && !m["ResourceDriftStatus"].empty()) {
      resourceDriftStatus = make_shared<string>(boost::any_cast<string>(m["ResourceDriftStatus"]));
    }
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
  }


  virtual ~GetStackResourceResponseBody() = default;
};
class GetStackResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStackResourceResponseBody> body{};

  GetStackResourceResponse() {}

  explicit GetStackResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> changeSetId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> templateStage{};
  shared_ptr<string> includePermission{};
  shared_ptr<string> stackGroupName{};

  GetTemplateRequest() {}

  explicit GetTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (templateStage) {
      res["TemplateStage"] = boost::any(*templateStage);
    }
    if (includePermission) {
      res["IncludePermission"] = boost::any(*includePermission);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TemplateStage") != m.end() && !m["TemplateStage"].empty()) {
      templateStage = make_shared<string>(boost::any_cast<string>(m["TemplateStage"]));
    }
    if (m.find("IncludePermission") != m.end() && !m["IncludePermission"].empty()) {
      includePermission = make_shared<string>(boost::any_cast<string>(m["IncludePermission"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
  }


  virtual ~GetTemplateRequest() = default;
};
class GetTemplateResponseBodyPermissions : public Darabonba::Model {
public:
  shared_ptr<string> versionOption{};
  shared_ptr<string> accountId{};
  shared_ptr<string> shareOption{};
  shared_ptr<string> templateVersion{};

  GetTemplateResponseBodyPermissions() {}

  explicit GetTemplateResponseBodyPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionOption) {
      res["VersionOption"] = boost::any(*versionOption);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (shareOption) {
      res["ShareOption"] = boost::any(*shareOption);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionOption") != m.end() && !m["VersionOption"].empty()) {
      versionOption = make_shared<string>(boost::any_cast<string>(m["VersionOption"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("ShareOption") != m.end() && !m["ShareOption"].empty()) {
      shareOption = make_shared<string>(boost::any_cast<string>(m["ShareOption"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~GetTemplateResponseBodyPermissions() = default;
};
class GetTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> templateARN{};
  shared_ptr<string> description{};
  shared_ptr<string> requestId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> changeSetId{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> updateTime{};
  shared_ptr<vector<GetTemplateResponseBodyPermissions>> permissions{};
  shared_ptr<string> templateName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> resourceGroupId{};

  GetTemplateResponseBody() {}

  explicit GetTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateARN) {
      res["TemplateARN"] = boost::any(*templateARN);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (permissions) {
      vector<boost::any> temp1;
      for(auto item1:*permissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Permissions"] = boost::any(temp1);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateARN") != m.end() && !m["TemplateARN"].empty()) {
      templateARN = make_shared<string>(boost::any_cast<string>(m["TemplateARN"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~GetTemplateResponseBody() = default;
};
class GetTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTemplateResponseBody> body{};

  GetTemplateResponse() {}

  explicit GetTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> templateURL{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<vector<GetTemplateEstimateCostRequestParameters>> parameters{};

  GetTemplateEstimateCostRequest() {}

  explicit GetTemplateEstimateCostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
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
  }


  virtual ~GetTemplateEstimateCostRequest() = default;
};
class GetTemplateEstimateCostResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> resources{};
  shared_ptr<string> requestId{};

  GetTemplateEstimateCostResponseBody() {}

  explicit GetTemplateEstimateCostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Resources"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resources = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTemplateEstimateCostResponseBody() = default;
};
class GetTemplateEstimateCostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTemplateEstimateCostResponseBody> body{};

  GetTemplateEstimateCostResponse() {}

  explicit GetTemplateEstimateCostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class GetTemplateSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> stackId{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> changeSetId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> stackGroupName{};

  GetTemplateSummaryRequest() {}

  explicit GetTemplateSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
  }


  virtual ~GetTemplateSummaryRequest() = default;
};
class GetTemplateSummaryResponseBodyResourceIdentifierSummaries : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceIdentifiers{};
  shared_ptr<vector<string>> logicalResourceIds{};

  GetTemplateSummaryResponseBodyResourceIdentifierSummaries() {}

  explicit GetTemplateSummaryResponseBodyResourceIdentifierSummaries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceIdentifiers) {
      res["ResourceIdentifiers"] = boost::any(*resourceIdentifiers);
    }
    if (logicalResourceIds) {
      res["LogicalResourceIds"] = boost::any(*logicalResourceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  }


  virtual ~GetTemplateSummaryResponseBodyResourceIdentifierSummaries() = default;
};
class GetTemplateSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> description{};
  shared_ptr<string> version{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<vector<string>> resourceTypes{};
  shared_ptr<vector<map<string, boost::any>>> parameters{};
  shared_ptr<vector<GetTemplateSummaryResponseBodyResourceIdentifierSummaries>> resourceIdentifierSummaries{};

  GetTemplateSummaryResponseBody() {}

  explicit GetTemplateSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (resourceIdentifierSummaries) {
      vector<boost::any> temp1;
      for(auto item1:*resourceIdentifierSummaries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceIdentifierSummaries"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
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
  }


  virtual ~GetTemplateSummaryResponseBody() = default;
};
class GetTemplateSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTemplateSummaryResponseBody> body{};

  GetTemplateSummaryResponse() {}

  explicit GetTemplateSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> changeSetId{};
  shared_ptr<vector<string>> status{};
  shared_ptr<vector<string>> changeSetName{};
  shared_ptr<vector<string>> executionStatus{};

  ListChangeSetsRequest() {}

  explicit ListChangeSetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (changeSetName) {
      res["ChangeSetName"] = boost::any(*changeSetName);
    }
    if (executionStatus) {
      res["ExecutionStatus"] = boost::any(*executionStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
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
  }


  virtual ~ListChangeSetsRequest() = default;
};
class ListChangeSetsResponseBodyChangeSets : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> stackId{};
  shared_ptr<string> changeSetName{};
  shared_ptr<string> description{};
  shared_ptr<string> changeSetType{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> createTime{};
  shared_ptr<string> changeSetId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> executionStatus{};
  shared_ptr<string> regionId{};

  ListChangeSetsResponseBodyChangeSets() {}

  explicit ListChangeSetsResponseBodyChangeSets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (changeSetName) {
      res["ChangeSetName"] = boost::any(*changeSetName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (changeSetType) {
      res["ChangeSetType"] = boost::any(*changeSetType);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (changeSetId) {
      res["ChangeSetId"] = boost::any(*changeSetId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (executionStatus) {
      res["ExecutionStatus"] = boost::any(*executionStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("ChangeSetName") != m.end() && !m["ChangeSetName"].empty()) {
      changeSetName = make_shared<string>(boost::any_cast<string>(m["ChangeSetName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ChangeSetType") != m.end() && !m["ChangeSetType"].empty()) {
      changeSetType = make_shared<string>(boost::any_cast<string>(m["ChangeSetType"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ChangeSetId") != m.end() && !m["ChangeSetId"].empty()) {
      changeSetId = make_shared<string>(boost::any_cast<string>(m["ChangeSetId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("ExecutionStatus") != m.end() && !m["ExecutionStatus"].empty()) {
      executionStatus = make_shared<string>(boost::any_cast<string>(m["ExecutionStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListChangeSetsResponseBodyChangeSets() = default;
};
class ListChangeSetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListChangeSetsResponseBodyChangeSets>> changeSets{};

  ListChangeSetsResponseBody() {}

  explicit ListChangeSetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (changeSets) {
      vector<boost::any> temp1;
      for(auto item1:*changeSets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChangeSets"] = boost::any(temp1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
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
  }


  virtual ~ListChangeSetsResponseBody() = default;
};
class ListChangeSetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListChangeSetsResponseBody> body{};

  ListChangeSetsResponse() {}

  explicit ListChangeSetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<ListResourceTypesResponseBody> body{};

  ListResourceTypesResponse() {}

  explicit ListResourceTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<string>> status{};
  shared_ptr<vector<string>> resourceType{};
  shared_ptr<vector<string>> logicalResourceId{};

  ListStackEventsRequest() {}

  explicit ListStackEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~ListStackEventsRequest() = default;
};
class ListStackEventsResponseBodyEvents : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> eventId{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> createTime{};
  shared_ptr<string> stackName{};

  ListStackEventsResponseBodyEvents() {}

  explicit ListStackEventsResponseBodyEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
  }


  virtual ~ListStackEventsResponseBodyEvents() = default;
};
class ListStackEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListStackEventsResponseBodyEvents>> events{};

  ListStackEventsResponseBody() {}

  explicit ListStackEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
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
  }


  virtual ~ListStackEventsResponseBody() = default;
};
class ListStackEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListStackEventsResponseBody> body{};

  ListStackEventsResponse() {}

  explicit ListStackEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> operationId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  ListStackGroupOperationResultsRequest() {}

  explicit ListStackGroupOperationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListStackGroupOperationResultsRequest() = default;
};
class ListStackGroupOperationResultsResponseBodyStackGroupOperationResults : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> accountId{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> regionId{};

  ListStackGroupOperationResultsResponseBodyStackGroupOperationResults() {}

  explicit ListStackGroupOperationResultsResponseBodyStackGroupOperationResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListStackGroupOperationResultsResponseBodyStackGroupOperationResults() = default;
};
class ListStackGroupOperationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListStackGroupOperationResultsResponseBodyStackGroupOperationResults>> stackGroupOperationResults{};

  ListStackGroupOperationResultsResponseBody() {}

  explicit ListStackGroupOperationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (stackGroupOperationResults) {
      vector<boost::any> temp1;
      for(auto item1:*stackGroupOperationResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StackGroupOperationResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
  }


  virtual ~ListStackGroupOperationResultsResponseBody() = default;
};
class ListStackGroupOperationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListStackGroupOperationResultsResponseBody> body{};

  ListStackGroupOperationResultsResponse() {}

  explicit ListStackGroupOperationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  ListStackGroupOperationsRequest() {}

  explicit ListStackGroupOperationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListStackGroupOperationsRequest() = default;
};
class ListStackGroupOperationsResponseBodyStackGroupOperations : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> action{};
  shared_ptr<string> createTime{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> operationId{};
  shared_ptr<string> operationDescription{};

  ListStackGroupOperationsResponseBodyStackGroupOperations() {}

  explicit ListStackGroupOperationsResponseBodyStackGroupOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
  }


  virtual ~ListStackGroupOperationsResponseBodyStackGroupOperations() = default;
};
class ListStackGroupOperationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListStackGroupOperationsResponseBodyStackGroupOperations>> stackGroupOperations{};

  ListStackGroupOperationsResponseBody() {}

  explicit ListStackGroupOperationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (stackGroupOperations) {
      vector<boost::any> temp1;
      for(auto item1:*stackGroupOperations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StackGroupOperations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
  }


  virtual ~ListStackGroupOperationsResponseBody() = default;
};
class ListStackGroupOperationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListStackGroupOperationsResponseBody> body{};

  ListStackGroupOperationsResponse() {}

  explicit ListStackGroupOperationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class ListStackGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> resourceGroupId{};

  ListStackGroupsRequest() {}

  explicit ListStackGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListStackGroupsRequest() = default;
};
class ListStackGroupsResponseBodyStackGroups : public Darabonba::Model {
public:
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> description{};
  shared_ptr<string> stackGroupDriftStatus{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> resourceGroupId{};

  ListStackGroupsResponseBodyStackGroups() {}

  explicit ListStackGroupsResponseBodyStackGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (stackGroupDriftStatus) {
      res["StackGroupDriftStatus"] = boost::any(*stackGroupDriftStatus);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("StackGroupDriftStatus") != m.end() && !m["StackGroupDriftStatus"].empty()) {
      stackGroupDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackGroupDriftStatus"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListStackGroupsResponseBodyStackGroups() = default;
};
class ListStackGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListStackGroupsResponseBodyStackGroups>> stackGroups{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  ListStackGroupsResponseBody() {}

  explicit ListStackGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListStackGroupsResponseBody() = default;
};
class ListStackGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListStackGroupsResponseBody> body{};

  ListStackGroupsResponse() {}

  explicit ListStackGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> stackInstanceAccountId{};
  shared_ptr<string> stackInstanceRegionId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  ListStackInstancesRequest() {}

  explicit ListStackInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListStackInstancesRequest() = default;
};
class ListStackInstancesResponseBodyStackInstances : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> stackGroupId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> stackDriftStatus{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> accountId{};
  shared_ptr<string> regionId{};

  ListStackInstancesResponseBodyStackInstances() {}

  explicit ListStackInstancesResponseBodyStackInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stackGroupId) {
      res["StackGroupId"] = boost::any(*stackGroupId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (stackDriftStatus) {
      res["StackDriftStatus"] = boost::any(*stackDriftStatus);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (stackGroupName) {
      res["StackGroupName"] = boost::any(*stackGroupName);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StackGroupId") != m.end() && !m["StackGroupId"].empty()) {
      stackGroupId = make_shared<string>(boost::any_cast<string>(m["StackGroupId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("StackDriftStatus") != m.end() && !m["StackDriftStatus"].empty()) {
      stackDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackDriftStatus"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("StackGroupName") != m.end() && !m["StackGroupName"].empty()) {
      stackGroupName = make_shared<string>(boost::any_cast<string>(m["StackGroupName"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListStackInstancesResponseBodyStackInstances() = default;
};
class ListStackInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListStackInstancesResponseBodyStackInstances>> stackInstances{};

  ListStackInstancesResponseBody() {}

  explicit ListStackInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (stackInstances) {
      vector<boost::any> temp1;
      for(auto item1:*stackInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StackInstances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
  }


  virtual ~ListStackInstancesResponseBody() = default;
};
class ListStackInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListStackInstancesResponseBody> body{};

  ListStackInstancesResponse() {}

  explicit ListStackInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> operationType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<bool> retainAllResources{};
  shared_ptr<vector<string>> retainResources{};

  ListStackOperationRisksRequest() {}

  explicit ListStackOperationRisksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (retainAllResources) {
      res["RetainAllResources"] = boost::any(*retainAllResources);
    }
    if (retainResources) {
      res["RetainResources"] = boost::any(*retainResources);
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
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
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
  }


  virtual ~ListStackOperationRisksRequest() = default;
};
class ListStackOperationRisksResponseBodyRiskResources : public Darabonba::Model {
public:
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> riskType{};
  shared_ptr<string> reason{};

  ListStackOperationRisksResponseBodyRiskResources() {}

  explicit ListStackOperationRisksResponseBodyRiskResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (riskType) {
      res["RiskType"] = boost::any(*riskType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RiskType") != m.end() && !m["RiskType"].empty()) {
      riskType = make_shared<string>(boost::any_cast<string>(m["RiskType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~ListStackOperationRisksResponseBodyRiskResources() = default;
};
class ListStackOperationRisksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListStackOperationRisksResponseBodyRiskResources>> riskResources{};

  ListStackOperationRisksResponseBody() {}

  explicit ListStackOperationRisksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
  shared_ptr<ListStackOperationRisksResponseBody> body{};

  ListStackOperationRisksResponse() {}

  explicit ListStackOperationRisksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceDriftStatus{};

  ListStackResourceDriftsRequest() {}

  explicit ListStackResourceDriftsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceDriftStatus) {
      res["ResourceDriftStatus"] = boost::any(*resourceDriftStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
  }


  virtual ~ListStackResourceDriftsRequest() = default;
};
class ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences : public Darabonba::Model {
public:
  shared_ptr<string> actualValue{};
  shared_ptr<string> differenceType{};
  shared_ptr<string> propertyPath{};
  shared_ptr<string> expectedValue{};

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
    if (propertyPath) {
      res["PropertyPath"] = boost::any(*propertyPath);
    }
    if (expectedValue) {
      res["ExpectedValue"] = boost::any(*expectedValue);
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
    if (m.find("PropertyPath") != m.end() && !m["PropertyPath"].empty()) {
      propertyPath = make_shared<string>(boost::any_cast<string>(m["PropertyPath"]));
    }
    if (m.find("ExpectedValue") != m.end() && !m["ExpectedValue"].empty()) {
      expectedValue = make_shared<string>(boost::any_cast<string>(m["ExpectedValue"]));
    }
  }


  virtual ~ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences() = default;
};
class ListStackResourceDriftsResponseBodyResourceDrifts : public Darabonba::Model {
public:
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> expectedProperties{};
  shared_ptr<string> resourceDriftStatus{};
  shared_ptr<string> actualProperties{};
  shared_ptr<vector<ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences>> propertyDifferences{};

  ListStackResourceDriftsResponseBodyResourceDrifts() {}

  explicit ListStackResourceDriftsResponseBodyResourceDrifts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (expectedProperties) {
      res["ExpectedProperties"] = boost::any(*expectedProperties);
    }
    if (resourceDriftStatus) {
      res["ResourceDriftStatus"] = boost::any(*resourceDriftStatus);
    }
    if (actualProperties) {
      res["ActualProperties"] = boost::any(*actualProperties);
    }
    if (propertyDifferences) {
      vector<boost::any> temp1;
      for(auto item1:*propertyDifferences){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PropertyDifferences"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ExpectedProperties") != m.end() && !m["ExpectedProperties"].empty()) {
      expectedProperties = make_shared<string>(boost::any_cast<string>(m["ExpectedProperties"]));
    }
    if (m.find("ResourceDriftStatus") != m.end() && !m["ResourceDriftStatus"].empty()) {
      resourceDriftStatus = make_shared<string>(boost::any_cast<string>(m["ResourceDriftStatus"]));
    }
    if (m.find("ActualProperties") != m.end() && !m["ActualProperties"].empty()) {
      actualProperties = make_shared<string>(boost::any_cast<string>(m["ActualProperties"]));
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
  shared_ptr<ListStackResourceDriftsResponseBody> body{};

  ListStackResourceDriftsResponse() {}

  explicit ListStackResourceDriftsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> regionId{};

  ListStackResourcesRequest() {}

  explicit ListStackResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListStackResourcesRequest() = default;
};
class ListStackResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> stackId{};
  shared_ptr<string> physicalResourceId{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceDriftStatus{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> createTime{};
  shared_ptr<string> stackName{};

  ListStackResourcesResponseBodyResources() {}

  explicit ListStackResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (physicalResourceId) {
      res["PhysicalResourceId"] = boost::any(*physicalResourceId);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceDriftStatus) {
      res["ResourceDriftStatus"] = boost::any(*resourceDriftStatus);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("PhysicalResourceId") != m.end() && !m["PhysicalResourceId"].empty()) {
      physicalResourceId = make_shared<string>(boost::any_cast<string>(m["PhysicalResourceId"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceDriftStatus") != m.end() && !m["ResourceDriftStatus"].empty()) {
      resourceDriftStatus = make_shared<string>(boost::any_cast<string>(m["ResourceDriftStatus"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
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
  shared_ptr<ListStackResourcesResponseBody> body{};

  ListStackResourcesResponse() {}

  explicit ListStackResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentStackId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<bool> showNestedStack{};
  shared_ptr<string> stackId{};
  shared_ptr<vector<string>> status{};
  shared_ptr<vector<string>> stackName{};
  shared_ptr<vector<ListStacksRequestTag>> tag{};
  shared_ptr<string> resourceGroupId{};

  ListStacksRequest() {}

  explicit ListStacksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parentStackId) {
      res["ParentStackId"] = boost::any(*parentStackId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (showNestedStack) {
      res["ShowNestedStack"] = boost::any(*showNestedStack);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParentStackId") != m.end() && !m["ParentStackId"].empty()) {
      parentStackId = make_shared<string>(boost::any_cast<string>(m["ParentStackId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ShowNestedStack") != m.end() && !m["ShowNestedStack"].empty()) {
      showNestedStack = make_shared<bool>(boost::any_cast<bool>(m["ShowNestedStack"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListStacksRequest() = default;
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
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> driftDetectionTime{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<vector<ListStacksResponseBodyStacksTags>> tags{};
  shared_ptr<string> stackName{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<string> regionId{};
  shared_ptr<string> parentStackId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> stackDriftStatus{};
  shared_ptr<string> stackType{};
  shared_ptr<string> resourceGroupId{};

  ListStacksResponseBodyStacks() {}

  explicit ListStacksResponseBodyStacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (driftDetectionTime) {
      res["DriftDetectionTime"] = boost::any(*driftDetectionTime);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (parentStackId) {
      res["ParentStackId"] = boost::any(*parentStackId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (stackDriftStatus) {
      res["StackDriftStatus"] = boost::any(*stackDriftStatus);
    }
    if (stackType) {
      res["StackType"] = boost::any(*stackType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("DriftDetectionTime") != m.end() && !m["DriftDetectionTime"].empty()) {
      driftDetectionTime = make_shared<string>(boost::any_cast<string>(m["DriftDetectionTime"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
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
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ParentStackId") != m.end() && !m["ParentStackId"].empty()) {
      parentStackId = make_shared<string>(boost::any_cast<string>(m["ParentStackId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("StackDriftStatus") != m.end() && !m["StackDriftStatus"].empty()) {
      stackDriftStatus = make_shared<string>(boost::any_cast<string>(m["StackDriftStatus"]));
    }
    if (m.find("StackType") != m.end() && !m["StackType"].empty()) {
      stackType = make_shared<string>(boost::any_cast<string>(m["StackType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListStacksResponseBodyStacks() = default;
};
class ListStacksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListStacksResponseBodyStacks>> stacks{};

  ListStacksResponseBody() {}

  explicit ListStacksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (stacks) {
      vector<boost::any> temp1;
      for(auto item1:*stacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stacks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~ListStacksResponseBody() = default;
};
class ListStacksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListStacksResponseBody> body{};

  ListStacksResponse() {}

  explicit ListStacksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> nextToken{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> keys{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (keys) {
      res["Keys"] = boost::any(*keys);
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


  virtual ~ListTagKeysResponseBody() = default;
};
class ListTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagKeysResponseBody> body{};

  ListTagKeysResponse() {}

  explicit ListTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
  shared_ptr<string> tagValue{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tagKey{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
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
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> key{};

  ListTagValuesRequest() {}

  explicit ListTagValuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
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
  shared_ptr<ListTagValuesResponseBody> body{};

  ListTagValuesResponse() {}

  explicit ListTagValuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> templateName{};
  shared_ptr<string> shareType{};
  shared_ptr<vector<ListTemplatesRequestTag>> tag{};
  shared_ptr<string> resourceGroupId{};

  ListTemplatesRequest() {}

  explicit ListTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListTemplatesRequest() = default;
};
class ListTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> templateARN{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> description{};
  shared_ptr<string> createTime{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> templateId{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> resourceGroupId{};

  ListTemplatesResponseBodyTemplates() {}

  explicit ListTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateARN) {
      res["TemplateARN"] = boost::any(*templateARN);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateARN") != m.end() && !m["TemplateARN"].empty()) {
      templateARN = make_shared<string>(boost::any_cast<string>(m["TemplateARN"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListTemplatesResponseBodyTemplates() = default;
};
class ListTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListTemplatesResponseBodyTemplates>> templates{};

  ListTemplatesResponseBody() {}

  explicit ListTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~ListTemplatesResponseBody() = default;
};
class ListTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTemplatesResponseBody> body{};

  ListTemplatesResponse() {}

  explicit ListTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class ListTemplateVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> templateId{};

  ListTemplateVersionsRequest() {}

  explicit ListTemplateVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~ListTemplateVersionsRequest() = default;
};
class ListTemplateVersionsResponseBodyVersions : public Darabonba::Model {
public:
  shared_ptr<string> updateTime{};
  shared_ptr<string> description{};
  shared_ptr<string> createTime{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};

  ListTemplateVersionsResponseBodyVersions() {}

  explicit ListTemplateVersionsResponseBodyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
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
  shared_ptr<ListTemplateVersionsResponseBody> body{};

  ListTemplateVersionsResponse() {}

  explicit ListTemplateVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> regionId{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<MoveResourceGroupResponseBody> body{};

  MoveResourceGroupResponse() {}

  explicit MoveResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<bool> disableRollback{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> stackPolicyURL{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackPolicyBody{};
  shared_ptr<string> stackName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<vector<PreviewStackRequestParameters>> parameters{};

  PreviewStackRequest() {}

  explicit PreviewStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (stackPolicyURL) {
      res["StackPolicyURL"] = boost::any(*stackPolicyURL);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("StackPolicyURL") != m.end() && !m["StackPolicyURL"].empty()) {
      stackPolicyURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyURL"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      stackPolicyBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyBody"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
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
  }


  virtual ~PreviewStackRequest() = default;
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
  shared_ptr<string> logicalResourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> stack{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<vector<string>> requiredBy{};

  PreviewStackResponseBodyStackResources() {}

  explicit PreviewStackResponseBodyStackResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (stack) {
      res["Stack"] = boost::any(*stack);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (requiredBy) {
      res["RequiredBy"] = boost::any(*requiredBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Stack") != m.end() && !m["Stack"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Stack"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      stack = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
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
  }


  virtual ~PreviewStackResponseBodyStackResources() = default;
};
class PreviewStackResponseBodyStack : public Darabonba::Model {
public:
  shared_ptr<string> templateDescription{};
  shared_ptr<string> description{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<string> stackName{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<map<string, boost::any>> stackPolicyBody{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<PreviewStackResponseBodyStackParameters>> parameters{};
  shared_ptr<vector<PreviewStackResponseBodyStackResources>> resources{};

  PreviewStackResponseBodyStack() {}

  explicit PreviewStackResponseBodyStack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
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
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["StackPolicyBody"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      stackPolicyBody = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<PreviewStackResponseBody> body{};

  PreviewStackResponse() {}

  explicit PreviewStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> deletionProtection{};
  shared_ptr<string> regionId{};

  SetDeletionProtectionRequest() {}

  explicit SetDeletionProtectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<string>(boost::any_cast<string>(m["DeletionProtection"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<SetDeletionProtectionResponseBody> body{};

  SetDeletionProtectionResponse() {}

  explicit SetDeletionProtectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stackPolicyBody{};
  shared_ptr<string> stackPolicyURL{};

  SetStackPolicyRequest() {}

  explicit SetStackPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<SetStackPolicyResponseBody> body{};

  SetStackPolicyResponse() {}

  explicit SetStackPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> shareOption{};
  shared_ptr<string> versionOption{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<string>> accountIds{};

  SetTemplatePermissionRequest() {}

  explicit SetTemplatePermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shareOption) {
      res["ShareOption"] = boost::any(*shareOption);
    }
    if (versionOption) {
      res["VersionOption"] = boost::any(*versionOption);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShareOption") != m.end() && !m["ShareOption"].empty()) {
      shareOption = make_shared<string>(boost::any_cast<string>(m["ShareOption"]));
    }
    if (m.find("VersionOption") != m.end() && !m["VersionOption"].empty()) {
      versionOption = make_shared<string>(boost::any_cast<string>(m["VersionOption"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
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
  shared_ptr<SetTemplatePermissionResponseBody> body{};

  SetTemplatePermissionResponse() {}

  explicit SetTemplatePermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> status{};
  shared_ptr<string> regionId{};
  shared_ptr<string> uniqueId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> logicalResourceId{};

  SignalResourceRequest() {}

  explicit SignalResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<string>(boost::any_cast<string>(m["UniqueId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("LogicalResourceId") != m.end() && !m["LogicalResourceId"].empty()) {
      logicalResourceId = make_shared<string>(boost::any_cast<string>(m["LogicalResourceId"]));
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
  shared_ptr<SignalResourceResponseBody> body{};

  SignalResourceResponse() {}

  explicit SignalResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> operationId{};

  StopStackGroupOperationRequest() {}

  explicit StopStackGroupOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (operationId) {
      res["OperationId"] = boost::any(*operationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OperationId") != m.end() && !m["OperationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["OperationId"]));
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
  shared_ptr<StopStackGroupOperationResponseBody> body{};

  StopStackGroupOperationResponse() {}

  explicit StopStackGroupOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceId{};
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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
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
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> stackPolicyDuringUpdateBody{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> stackPolicyURL{};
  shared_ptr<string> stackPolicyDuringUpdateURL{};
  shared_ptr<string> stackPolicyBody{};
  shared_ptr<bool> usePreviousParameters{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> replacementOption{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<vector<UpdateStackRequestParameters>> parameters{};
  shared_ptr<vector<UpdateStackRequestTags>> tags{};

  UpdateStackRequest() {}

  explicit UpdateStackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (stackPolicyDuringUpdateBody) {
      res["StackPolicyDuringUpdateBody"] = boost::any(*stackPolicyDuringUpdateBody);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (stackPolicyURL) {
      res["StackPolicyURL"] = boost::any(*stackPolicyURL);
    }
    if (stackPolicyDuringUpdateURL) {
      res["StackPolicyDuringUpdateURL"] = boost::any(*stackPolicyDuringUpdateURL);
    }
    if (stackPolicyBody) {
      res["StackPolicyBody"] = boost::any(*stackPolicyBody);
    }
    if (usePreviousParameters) {
      res["UsePreviousParameters"] = boost::any(*usePreviousParameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (disableRollback) {
      res["DisableRollback"] = boost::any(*disableRollback);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (replacementOption) {
      res["ReplacementOption"] = boost::any(*replacementOption);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
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
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("StackPolicyDuringUpdateBody") != m.end() && !m["StackPolicyDuringUpdateBody"].empty()) {
      stackPolicyDuringUpdateBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyDuringUpdateBody"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("StackPolicyURL") != m.end() && !m["StackPolicyURL"].empty()) {
      stackPolicyURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyURL"]));
    }
    if (m.find("StackPolicyDuringUpdateURL") != m.end() && !m["StackPolicyDuringUpdateURL"].empty()) {
      stackPolicyDuringUpdateURL = make_shared<string>(boost::any_cast<string>(m["StackPolicyDuringUpdateURL"]));
    }
    if (m.find("StackPolicyBody") != m.end() && !m["StackPolicyBody"].empty()) {
      stackPolicyBody = make_shared<string>(boost::any_cast<string>(m["StackPolicyBody"]));
    }
    if (m.find("UsePreviousParameters") != m.end() && !m["UsePreviousParameters"].empty()) {
      usePreviousParameters = make_shared<bool>(boost::any_cast<bool>(m["UsePreviousParameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DisableRollback") != m.end() && !m["DisableRollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["DisableRollback"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("ReplacementOption") != m.end() && !m["ReplacementOption"].empty()) {
      replacementOption = make_shared<string>(boost::any_cast<string>(m["ReplacementOption"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
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
  }


  virtual ~UpdateStackRequest() = default;
};
class UpdateStackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> stackId{};
  shared_ptr<string> requestId{};

  UpdateStackResponseBody() {}

  explicit UpdateStackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateStackResponseBody() = default;
};
class UpdateStackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateStackResponseBody> body{};

  UpdateStackResponse() {}

  explicit UpdateStackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> accountIds{};
  shared_ptr<map<string, boost::any>> regionIds{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> operationDescription{};
  shared_ptr<map<string, boost::any>> operationPreferences{};
  shared_ptr<string> administrationRoleName{};
  shared_ptr<string> executionRoleName{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<vector<UpdateStackGroupRequestParameters>> parameters{};

  UpdateStackGroupRequest() {}

  explicit UpdateStackGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferences) {
      res["OperationPreferences"] = boost::any(*operationPreferences);
    }
    if (administrationRoleName) {
      res["AdministrationRoleName"] = boost::any(*administrationRoleName);
    }
    if (executionRoleName) {
      res["ExecutionRoleName"] = boost::any(*executionRoleName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AccountIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      accountIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["RegionIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      regionIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
    if (m.find("AdministrationRoleName") != m.end() && !m["AdministrationRoleName"].empty()) {
      administrationRoleName = make_shared<string>(boost::any_cast<string>(m["AdministrationRoleName"]));
    }
    if (m.find("ExecutionRoleName") != m.end() && !m["ExecutionRoleName"].empty()) {
      executionRoleName = make_shared<string>(boost::any_cast<string>(m["ExecutionRoleName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> description{};
  shared_ptr<string> accountIdsShrink{};
  shared_ptr<string> regionIdsShrink{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationPreferencesShrink{};
  shared_ptr<string> administrationRoleName{};
  shared_ptr<string> executionRoleName{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<vector<UpdateStackGroupShrinkRequestParameters>> parameters{};

  UpdateStackGroupShrinkRequest() {}

  explicit UpdateStackGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (accountIdsShrink) {
      res["AccountIds"] = boost::any(*accountIdsShrink);
    }
    if (regionIdsShrink) {
      res["RegionIds"] = boost::any(*regionIdsShrink);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferencesShrink) {
      res["OperationPreferences"] = boost::any(*operationPreferencesShrink);
    }
    if (administrationRoleName) {
      res["AdministrationRoleName"] = boost::any(*administrationRoleName);
    }
    if (executionRoleName) {
      res["ExecutionRoleName"] = boost::any(*executionRoleName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      accountIdsShrink = make_shared<string>(boost::any_cast<string>(m["AccountIds"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      regionIdsShrink = make_shared<string>(boost::any_cast<string>(m["RegionIds"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      operationPreferencesShrink = make_shared<string>(boost::any_cast<string>(m["OperationPreferences"]));
    }
    if (m.find("AdministrationRoleName") != m.end() && !m["AdministrationRoleName"].empty()) {
      administrationRoleName = make_shared<string>(boost::any_cast<string>(m["AdministrationRoleName"]));
    }
    if (m.find("ExecutionRoleName") != m.end() && !m["ExecutionRoleName"].empty()) {
      executionRoleName = make_shared<string>(boost::any_cast<string>(m["ExecutionRoleName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
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
  shared_ptr<UpdateStackGroupResponseBody> body{};

  UpdateStackGroupResponse() {}

  explicit UpdateStackGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<map<string, boost::any>> accountIds{};
  shared_ptr<map<string, boost::any>> regionIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> operationDescription{};
  shared_ptr<map<string, boost::any>> operationPreferences{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<vector<UpdateStackInstancesRequestParameterOverrides>> parameterOverrides{};

  UpdateStackInstancesRequest() {}

  explicit UpdateStackInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferences) {
      res["OperationPreferences"] = boost::any(*operationPreferences);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (parameterOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*parameterOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterOverrides"] = boost::any(temp1);
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
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AccountIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      accountIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["RegionIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      regionIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
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
  shared_ptr<string> regionId{};
  shared_ptr<string> stackGroupName{};
  shared_ptr<string> accountIdsShrink{};
  shared_ptr<string> regionIdsShrink{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationPreferencesShrink{};
  shared_ptr<long> timeoutInMinutes{};
  shared_ptr<vector<UpdateStackInstancesShrinkRequestParameterOverrides>> parameterOverrides{};

  UpdateStackInstancesShrinkRequest() {}

  explicit UpdateStackInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountIdsShrink) {
      res["AccountIds"] = boost::any(*accountIdsShrink);
    }
    if (regionIdsShrink) {
      res["RegionIds"] = boost::any(*regionIdsShrink);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationPreferencesShrink) {
      res["OperationPreferences"] = boost::any(*operationPreferencesShrink);
    }
    if (timeoutInMinutes) {
      res["TimeoutInMinutes"] = boost::any(*timeoutInMinutes);
    }
    if (parameterOverrides) {
      vector<boost::any> temp1;
      for(auto item1:*parameterOverrides){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterOverrides"] = boost::any(temp1);
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
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      accountIdsShrink = make_shared<string>(boost::any_cast<string>(m["AccountIds"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      regionIdsShrink = make_shared<string>(boost::any_cast<string>(m["RegionIds"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationPreferences") != m.end() && !m["OperationPreferences"].empty()) {
      operationPreferencesShrink = make_shared<string>(boost::any_cast<string>(m["OperationPreferences"]));
    }
    if (m.find("TimeoutInMinutes") != m.end() && !m["TimeoutInMinutes"].empty()) {
      timeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["TimeoutInMinutes"]));
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
  shared_ptr<UpdateStackInstancesResponseBody> body{};

  UpdateStackInstancesResponse() {}

  explicit UpdateStackInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> stackId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> templateFormat{};
  shared_ptr<vector<string>> logicalResourceId{};

  UpdateStackTemplateByResourcesRequest() {}

  explicit UpdateStackTemplateByResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (templateFormat) {
      res["TemplateFormat"] = boost::any(*templateFormat);
    }
    if (logicalResourceId) {
      res["LogicalResourceId"] = boost::any(*logicalResourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("TemplateFormat") != m.end() && !m["TemplateFormat"].empty()) {
      templateFormat = make_shared<string>(boost::any_cast<string>(m["TemplateFormat"]));
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
  }


  virtual ~UpdateStackTemplateByResourcesRequest() = default;
};
class UpdateStackTemplateByResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> newTemplateBody{};
  shared_ptr<string> requestId{};
  shared_ptr<string> oldTemplateBody{};

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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (oldTemplateBody) {
      res["OldTemplateBody"] = boost::any(*oldTemplateBody);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewTemplateBody") != m.end() && !m["NewTemplateBody"].empty()) {
      newTemplateBody = make_shared<string>(boost::any_cast<string>(m["NewTemplateBody"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OldTemplateBody") != m.end() && !m["OldTemplateBody"].empty()) {
      oldTemplateBody = make_shared<string>(boost::any_cast<string>(m["OldTemplateBody"]));
    }
  }


  virtual ~UpdateStackTemplateByResourcesResponseBody() = default;
};
class UpdateStackTemplateByResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateStackTemplateByResourcesResponseBody> body{};

  UpdateStackTemplateByResourcesResponse() {}

  explicit UpdateStackTemplateByResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateName{};
  shared_ptr<string> description{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> templateId{};

  UpdateTemplateRequest() {}

  explicit UpdateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~UpdateTemplateRequest() = default;
};
class UpdateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};
  shared_ptr<string> requestId{};

  UpdateTemplateResponseBody() {}

  explicit UpdateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateTemplateResponseBody() = default;
};
class UpdateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateTemplateResponseBody> body{};

  UpdateTemplateResponse() {}

  explicit UpdateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class ValidateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateURL{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateBody{};
  shared_ptr<string> clientToken{};

  ValidateTemplateRequest() {}

  explicit ValidateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateBody) {
      res["TemplateBody"] = boost::any(*templateBody);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateBody") != m.end() && !m["TemplateBody"].empty()) {
      templateBody = make_shared<string>(boost::any_cast<string>(m["TemplateBody"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~ValidateTemplateRequest() = default;
};
class ValidateTemplateResponseBodyOutputs : public Darabonba::Model {
public:
  shared_ptr<string> outputKey{};
  shared_ptr<string> description{};

  ValidateTemplateResponseBodyOutputs() {}

  explicit ValidateTemplateResponseBodyOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outputKey) {
      res["OutputKey"] = boost::any(*outputKey);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutputKey") != m.end() && !m["OutputKey"].empty()) {
      outputKey = make_shared<string>(boost::any_cast<string>(m["OutputKey"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~ValidateTemplateResponseBodyOutputs() = default;
};
class ValidateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<map<string, boost::any>>> parameters{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ValidateTemplateResponseBodyOutputs>> outputs{};

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
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (outputs) {
      vector<boost::any> temp1;
      for(auto item1:*outputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Outputs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
  }


  virtual ~ValidateTemplateResponseBody() = default;
};
class ValidateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ValidateTemplateResponseBody> body{};

  ValidateTemplateResponse() {}

  explicit ValidateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
  CreateStackGroupResponse createStackGroupWithOptions(shared_ptr<CreateStackGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStackGroupResponse createStackGroup(shared_ptr<CreateStackGroupRequest> request);
  CreateStackInstancesResponse createStackInstancesWithOptions(shared_ptr<CreateStackInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStackInstancesResponse createStackInstances(shared_ptr<CreateStackInstancesRequest> request);
  CreateTemplateResponse createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTemplateResponse createTemplate(shared_ptr<CreateTemplateRequest> request);
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
  GenerateTemplatePolicyResponse generateTemplatePolicyWithOptions(shared_ptr<GenerateTemplatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateTemplatePolicyResponse generateTemplatePolicy(shared_ptr<GenerateTemplatePolicyRequest> request);
  GetChangeSetResponse getChangeSetWithOptions(shared_ptr<GetChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChangeSetResponse getChangeSet(shared_ptr<GetChangeSetRequest> request);
  GetResourceTypeResponse getResourceTypeWithOptions(shared_ptr<GetResourceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceTypeResponse getResourceType(shared_ptr<GetResourceTypeRequest> request);
  GetResourceTypeTemplateResponse getResourceTypeTemplateWithOptions(shared_ptr<GetResourceTypeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceTypeTemplateResponse getResourceTypeTemplate(shared_ptr<GetResourceTypeTemplateRequest> request);
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
  GetTemplateSummaryResponse getTemplateSummaryWithOptions(shared_ptr<GetTemplateSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateSummaryResponse getTemplateSummary(shared_ptr<GetTemplateSummaryRequest> request);
  ListChangeSetsResponse listChangeSetsWithOptions(shared_ptr<ListChangeSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChangeSetsResponse listChangeSets(shared_ptr<ListChangeSetsRequest> request);
  ListResourceTypesResponse listResourceTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceTypesResponse listResourceTypes();
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
  ListTemplatesResponse listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplatesResponse listTemplates(shared_ptr<ListTemplatesRequest> request);
  ListTemplateVersionsResponse listTemplateVersionsWithOptions(shared_ptr<ListTemplateVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplateVersionsResponse listTemplateVersions(shared_ptr<ListTemplateVersionsRequest> request);
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
  ValidateTemplateResponse validateTemplateWithOptions(shared_ptr<ValidateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateTemplateResponse validateTemplate(shared_ptr<ValidateTemplateRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ROS20190910

#endif
