// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OOS20190601_H_
#define ALIBABACLOUD_OOS20190601_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Oos20190601 {
class AnalyzeGitRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> orgId{};
  shared_ptr<string> owner{};
  shared_ptr<string> platform{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repoFullName{};
  shared_ptr<string> repoId{};

  AnalyzeGitRepositoryRequest() {}

  explicit AnalyzeGitRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["Branch"] = boost::any(*branch);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repoFullName) {
      res["RepoFullName"] = boost::any(*repoFullName);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Branch") != m.end() && !m["Branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["Branch"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepoFullName") != m.end() && !m["RepoFullName"].empty()) {
      repoFullName = make_shared<string>(boost::any_cast<string>(m["RepoFullName"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~AnalyzeGitRepositoryRequest() = default;
};
class AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles : public Darabonba::Model {
public:
  shared_ptr<string> fileType{};
  shared_ptr<vector<string>> paths{};

  AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles() {}

  explicit AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (paths) {
      res["Paths"] = boost::any(*paths);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Paths") != m.end() && !m["Paths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Paths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Paths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      paths = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles() = default;
};
class AnalyzeGitRepositoryResponseBodyAnalysisResults : public Darabonba::Model {
public:
  shared_ptr<vector<AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles>> buildFiles{};
  shared_ptr<string> buildType{};
  shared_ptr<string> runtimeType{};

  AnalyzeGitRepositoryResponseBodyAnalysisResults() {}

  explicit AnalyzeGitRepositoryResponseBodyAnalysisResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildFiles) {
      vector<boost::any> temp1;
      for(auto item1:*buildFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BuildFiles"] = boost::any(temp1);
    }
    if (buildType) {
      res["BuildType"] = boost::any(*buildType);
    }
    if (runtimeType) {
      res["RuntimeType"] = boost::any(*runtimeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildFiles") != m.end() && !m["BuildFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["BuildFiles"].type()) {
        vector<AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BuildFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buildFiles = make_shared<vector<AnalyzeGitRepositoryResponseBodyAnalysisResultsBuildFiles>>(expect1);
      }
    }
    if (m.find("BuildType") != m.end() && !m["BuildType"].empty()) {
      buildType = make_shared<string>(boost::any_cast<string>(m["BuildType"]));
    }
    if (m.find("RuntimeType") != m.end() && !m["RuntimeType"].empty()) {
      runtimeType = make_shared<string>(boost::any_cast<string>(m["RuntimeType"]));
    }
  }


  virtual ~AnalyzeGitRepositoryResponseBodyAnalysisResults() = default;
};
class AnalyzeGitRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AnalyzeGitRepositoryResponseBodyAnalysisResults>> analysisResults{};
  shared_ptr<long> count{};
  shared_ptr<string> requestId{};

  AnalyzeGitRepositoryResponseBody() {}

  explicit AnalyzeGitRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisResults) {
      vector<boost::any> temp1;
      for(auto item1:*analysisResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AnalysisResults"] = boost::any(temp1);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnalysisResults") != m.end() && !m["AnalysisResults"].empty()) {
      if (typeid(vector<boost::any>) == m["AnalysisResults"].type()) {
        vector<AnalyzeGitRepositoryResponseBodyAnalysisResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AnalysisResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeGitRepositoryResponseBodyAnalysisResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        analysisResults = make_shared<vector<AnalyzeGitRepositoryResponseBodyAnalysisResults>>(expect1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AnalyzeGitRepositoryResponseBody() = default;
};
class AnalyzeGitRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AnalyzeGitRepositoryResponseBody> body{};

  AnalyzeGitRepositoryResponse() {}

  explicit AnalyzeGitRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AnalyzeGitRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AnalyzeGitRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~AnalyzeGitRepositoryResponse() = default;
};
class CancelExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> executionId{};
  shared_ptr<string> regionId{};

  CancelExecutionRequest() {}

  explicit CancelExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CancelExecutionRequest() = default;
};
class CancelExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelExecutionResponseBody() {}

  explicit CancelExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelExecutionResponseBody() = default;
};
class CancelExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelExecutionResponseBody> body{};

  CancelExecutionResponse() {}

  explicit CancelExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~CancelExecutionResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangeResourceGroupResponseBody() {}

  explicit ChangeResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeResourceGroupResponseBody() = default;
};
class ChangeResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeResourceGroupResponseBody> body{};

  ChangeResourceGroupResponse() {}

  explicit ChangeResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class ContinueDeployApplicationGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> deployParameters{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  ContinueDeployApplicationGroupRequest() {}

  explicit ContinueDeployApplicationGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (deployParameters) {
      res["DeployParameters"] = boost::any(*deployParameters);
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
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("DeployParameters") != m.end() && !m["DeployParameters"].empty()) {
      deployParameters = make_shared<string>(boost::any_cast<string>(m["DeployParameters"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ContinueDeployApplicationGroupRequest() = default;
};
class ContinueDeployApplicationGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ContinueDeployApplicationGroupResponseBody() {}

  explicit ContinueDeployApplicationGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ContinueDeployApplicationGroupResponseBody() = default;
};
class ContinueDeployApplicationGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ContinueDeployApplicationGroupResponseBody> body{};

  ContinueDeployApplicationGroupResponse() {}

  explicit ContinueDeployApplicationGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContinueDeployApplicationGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContinueDeployApplicationGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ContinueDeployApplicationGroupResponse() = default;
};
class CreateApplicationRequestAlarmConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> contactGroups{};
  shared_ptr<string> healthCheckUrl{};
  shared_ptr<vector<string>> templateIds{};

  CreateApplicationRequestAlarmConfig() {}

  explicit CreateApplicationRequestAlarmConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroups) {
      res["ContactGroups"] = boost::any(*contactGroups);
    }
    if (healthCheckUrl) {
      res["HealthCheckUrl"] = boost::any(*healthCheckUrl);
    }
    if (templateIds) {
      res["TemplateIds"] = boost::any(*templateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroups") != m.end() && !m["ContactGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ContactGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ContactGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      contactGroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckUrl") != m.end() && !m["HealthCheckUrl"].empty()) {
      healthCheckUrl = make_shared<string>(boost::any_cast<string>(m["HealthCheckUrl"]));
    }
    if (m.find("TemplateIds") != m.end() && !m["TemplateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateApplicationRequestAlarmConfig() = default;
};
class CreateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<CreateApplicationRequestAlarmConfig> alarmConfig{};
  shared_ptr<string> applicationSource{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<map<string, boost::any>> tags{};

  CreateApplicationRequest() {}

  explicit CreateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmConfig) {
      res["AlarmConfig"] = alarmConfig ? boost::any(alarmConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (applicationSource) {
      res["ApplicationSource"] = boost::any(*applicationSource);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmConfig") != m.end() && !m["AlarmConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlarmConfig"].type()) {
        CreateApplicationRequestAlarmConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlarmConfig"]));
        alarmConfig = make_shared<CreateApplicationRequestAlarmConfig>(model1);
      }
    }
    if (m.find("ApplicationSource") != m.end() && !m["ApplicationSource"].empty()) {
      applicationSource = make_shared<string>(boost::any_cast<string>(m["ApplicationSource"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateApplicationRequest() = default;
};
class CreateApplicationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmConfigShrink{};
  shared_ptr<string> applicationSource{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> tagsShrink{};

  CreateApplicationShrinkRequest() {}

  explicit CreateApplicationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmConfigShrink) {
      res["AlarmConfig"] = boost::any(*alarmConfigShrink);
    }
    if (applicationSource) {
      res["ApplicationSource"] = boost::any(*applicationSource);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmConfig") != m.end() && !m["AlarmConfig"].empty()) {
      alarmConfigShrink = make_shared<string>(boost::any_cast<string>(m["AlarmConfig"]));
    }
    if (m.find("ApplicationSource") != m.end() && !m["ApplicationSource"].empty()) {
      applicationSource = make_shared<string>(boost::any_cast<string>(m["ApplicationSource"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~CreateApplicationShrinkRequest() = default;
};
class CreateApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<map<string, string>> tags{};
  shared_ptr<string> updateDate{};

  CreateApplicationResponseBodyApplication() {}

  explicit CreateApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Tags"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~CreateApplicationResponseBodyApplication() = default;
};
class CreateApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateApplicationResponseBodyApplication> application{};
  shared_ptr<string> requestId{};

  CreateApplicationResponseBody() {}

  explicit CreateApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        CreateApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<CreateApplicationResponseBodyApplication>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateApplicationResponseBody() = default;
};
class CreateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApplicationResponseBody> body{};

  CreateApplicationResponse() {}

  explicit CreateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponse() = default;
};
class CreateApplicationGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> cmsGroupId{};
  shared_ptr<string> deployRegionId{};
  shared_ptr<string> description{};
  shared_ptr<string> importTagKey{};
  shared_ptr<string> importTagValue{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  CreateApplicationGroupRequest() {}

  explicit CreateApplicationGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cmsGroupId) {
      res["CmsGroupId"] = boost::any(*cmsGroupId);
    }
    if (deployRegionId) {
      res["DeployRegionId"] = boost::any(*deployRegionId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (importTagKey) {
      res["ImportTagKey"] = boost::any(*importTagKey);
    }
    if (importTagValue) {
      res["ImportTagValue"] = boost::any(*importTagValue);
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
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CmsGroupId") != m.end() && !m["CmsGroupId"].empty()) {
      cmsGroupId = make_shared<string>(boost::any_cast<string>(m["CmsGroupId"]));
    }
    if (m.find("DeployRegionId") != m.end() && !m["DeployRegionId"].empty()) {
      deployRegionId = make_shared<string>(boost::any_cast<string>(m["DeployRegionId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImportTagKey") != m.end() && !m["ImportTagKey"].empty()) {
      importTagKey = make_shared<string>(boost::any_cast<string>(m["ImportTagKey"]));
    }
    if (m.find("ImportTagValue") != m.end() && !m["ImportTagValue"].empty()) {
      importTagValue = make_shared<string>(boost::any_cast<string>(m["ImportTagValue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateApplicationGroupRequest() = default;
};
class CreateApplicationGroupResponseBodyApplicationGroup : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> cmsGroupId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> deployRegionId{};
  shared_ptr<string> description{};
  shared_ptr<string> importTagKey{};
  shared_ptr<string> importTagValue{};
  shared_ptr<string> name{};
  shared_ptr<string> updateDate{};

  CreateApplicationGroupResponseBodyApplicationGroup() {}

  explicit CreateApplicationGroupResponseBodyApplicationGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (cmsGroupId) {
      res["CmsGroupId"] = boost::any(*cmsGroupId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (deployRegionId) {
      res["DeployRegionId"] = boost::any(*deployRegionId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (importTagKey) {
      res["ImportTagKey"] = boost::any(*importTagKey);
    }
    if (importTagValue) {
      res["ImportTagValue"] = boost::any(*importTagValue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("CmsGroupId") != m.end() && !m["CmsGroupId"].empty()) {
      cmsGroupId = make_shared<string>(boost::any_cast<string>(m["CmsGroupId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DeployRegionId") != m.end() && !m["DeployRegionId"].empty()) {
      deployRegionId = make_shared<string>(boost::any_cast<string>(m["DeployRegionId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImportTagKey") != m.end() && !m["ImportTagKey"].empty()) {
      importTagKey = make_shared<string>(boost::any_cast<string>(m["ImportTagKey"]));
    }
    if (m.find("ImportTagValue") != m.end() && !m["ImportTagValue"].empty()) {
      importTagValue = make_shared<string>(boost::any_cast<string>(m["ImportTagValue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~CreateApplicationGroupResponseBodyApplicationGroup() = default;
};
class CreateApplicationGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateApplicationGroupResponseBodyApplicationGroup> applicationGroup{};
  shared_ptr<string> requestId{};

  CreateApplicationGroupResponseBody() {}

  explicit CreateApplicationGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationGroup) {
      res["ApplicationGroup"] = applicationGroup ? boost::any(applicationGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationGroup") != m.end() && !m["ApplicationGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApplicationGroup"].type()) {
        CreateApplicationGroupResponseBodyApplicationGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApplicationGroup"]));
        applicationGroup = make_shared<CreateApplicationGroupResponseBodyApplicationGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateApplicationGroupResponseBody() = default;
};
class CreateApplicationGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApplicationGroupResponseBody> body{};

  CreateApplicationGroupResponse() {}

  explicit CreateApplicationGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateApplicationGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicationGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicationGroupResponse() = default;
};
class CreateOpsItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dedupString{};
  shared_ptr<string> description{};
  shared_ptr<long> priority{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resources{};
  shared_ptr<string> severity{};
  shared_ptr<string> solutions{};
  shared_ptr<string> source{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> title{};

  CreateOpsItemRequest() {}

  explicit CreateOpsItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dedupString) {
      res["DedupString"] = boost::any(*dedupString);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (solutions) {
      res["Solutions"] = boost::any(*solutions);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DedupString") != m.end() && !m["DedupString"].empty()) {
      dedupString = make_shared<string>(boost::any_cast<string>(m["DedupString"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Solutions") != m.end() && !m["Solutions"].empty()) {
      solutions = make_shared<string>(boost::any_cast<string>(m["Solutions"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateOpsItemRequest() = default;
};
class CreateOpsItemShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dedupString{};
  shared_ptr<string> description{};
  shared_ptr<long> priority{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resources{};
  shared_ptr<string> severity{};
  shared_ptr<string> solutions{};
  shared_ptr<string> source{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> title{};

  CreateOpsItemShrinkRequest() {}

  explicit CreateOpsItemShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dedupString) {
      res["DedupString"] = boost::any(*dedupString);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (solutions) {
      res["Solutions"] = boost::any(*solutions);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DedupString") != m.end() && !m["DedupString"].empty()) {
      dedupString = make_shared<string>(boost::any_cast<string>(m["DedupString"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Solutions") != m.end() && !m["Solutions"].empty()) {
      solutions = make_shared<string>(boost::any_cast<string>(m["Solutions"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateOpsItemShrinkRequest() = default;
};
class CreateOpsItemResponseBodyOpsItem : public Darabonba::Model {
public:
  shared_ptr<string> attributes{};
  shared_ptr<string> category{};
  shared_ptr<string> createDate{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifiedBy{};
  shared_ptr<string> opsItemId{};
  shared_ptr<long> priority{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resources{};
  shared_ptr<string> severity{};
  shared_ptr<string> solutions{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> title{};
  shared_ptr<string> updateDate{};

  CreateOpsItemResponseBodyOpsItem() {}

  explicit CreateOpsItemResponseBodyOpsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (lastModifiedBy) {
      res["LastModifiedBy"] = boost::any(*lastModifiedBy);
    }
    if (opsItemId) {
      res["OpsItemId"] = boost::any(*opsItemId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (solutions) {
      res["Solutions"] = boost::any(*solutions);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      attributes = make_shared<string>(boost::any_cast<string>(m["Attributes"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LastModifiedBy") != m.end() && !m["LastModifiedBy"].empty()) {
      lastModifiedBy = make_shared<string>(boost::any_cast<string>(m["LastModifiedBy"]));
    }
    if (m.find("OpsItemId") != m.end() && !m["OpsItemId"].empty()) {
      opsItemId = make_shared<string>(boost::any_cast<string>(m["OpsItemId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Solutions") != m.end() && !m["Solutions"].empty()) {
      solutions = make_shared<string>(boost::any_cast<string>(m["Solutions"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~CreateOpsItemResponseBodyOpsItem() = default;
};
class CreateOpsItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateOpsItemResponseBodyOpsItem> opsItem{};
  shared_ptr<string> requestId{};

  CreateOpsItemResponseBody() {}

  explicit CreateOpsItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opsItem) {
      res["OpsItem"] = opsItem ? boost::any(opsItem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpsItem") != m.end() && !m["OpsItem"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpsItem"].type()) {
        CreateOpsItemResponseBodyOpsItem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpsItem"]));
        opsItem = make_shared<CreateOpsItemResponseBodyOpsItem>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateOpsItemResponseBody() = default;
};
class CreateOpsItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateOpsItemResponseBody> body{};

  CreateOpsItemResponse() {}

  explicit CreateOpsItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOpsItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOpsItemResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOpsItemResponse() = default;
};
class CreateParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> constraints{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  CreateParameterRequest() {}

  explicit CreateParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateParameterRequest() = default;
};
class CreateParameterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> constraints{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  CreateParameterShrinkRequest() {}

  explicit CreateParameterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateParameterShrinkRequest() = default;
};
class CreateParameterResponseBodyParameter : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  CreateParameterResponseBodyParameter() {}

  explicit CreateParameterResponseBodyParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~CreateParameterResponseBodyParameter() = default;
};
class CreateParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateParameterResponseBodyParameter> parameter{};
  shared_ptr<string> requestId{};

  CreateParameterResponseBody() {}

  explicit CreateParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateParameterResponseBodyParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameter"]));
        parameter = make_shared<CreateParameterResponseBodyParameter>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateParameterResponseBody() = default;
};
class CreateParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateParameterResponseBody> body{};

  CreateParameterResponse() {}

  explicit CreateParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateParameterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateParameterResponse() = default;
};
class CreatePatchBaselineRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreatePatchBaselineRequestTags() {}

  explicit CreatePatchBaselineRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatePatchBaselineRequestTags() = default;
};
class CreatePatchBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<vector<string>> approvedPatches{};
  shared_ptr<bool> approvedPatchesEnableNonSecurity{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> rejectedPatches{};
  shared_ptr<string> rejectedPatchesAction{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> sources{};
  shared_ptr<vector<CreatePatchBaselineRequestTags>> tags{};

  CreatePatchBaselineRequest() {}

  explicit CreatePatchBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalRules) {
      res["ApprovalRules"] = boost::any(*approvalRules);
    }
    if (approvedPatches) {
      res["ApprovedPatches"] = boost::any(*approvedPatches);
    }
    if (approvedPatchesEnableNonSecurity) {
      res["ApprovedPatchesEnableNonSecurity"] = boost::any(*approvedPatchesEnableNonSecurity);
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
    if (rejectedPatches) {
      res["RejectedPatches"] = boost::any(*rejectedPatches);
    }
    if (rejectedPatchesAction) {
      res["RejectedPatchesAction"] = boost::any(*rejectedPatchesAction);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
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
    if (m.find("ApprovalRules") != m.end() && !m["ApprovalRules"].empty()) {
      approvalRules = make_shared<string>(boost::any_cast<string>(m["ApprovalRules"]));
    }
    if (m.find("ApprovedPatches") != m.end() && !m["ApprovedPatches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApprovedPatches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApprovedPatches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      approvedPatches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApprovedPatchesEnableNonSecurity") != m.end() && !m["ApprovedPatchesEnableNonSecurity"].empty()) {
      approvedPatchesEnableNonSecurity = make_shared<bool>(boost::any_cast<bool>(m["ApprovedPatchesEnableNonSecurity"]));
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
    if (m.find("RejectedPatches") != m.end() && !m["RejectedPatches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RejectedPatches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RejectedPatches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rejectedPatches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RejectedPatchesAction") != m.end() && !m["RejectedPatchesAction"].empty()) {
      rejectedPatchesAction = make_shared<string>(boost::any_cast<string>(m["RejectedPatchesAction"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Sources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Sources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreatePatchBaselineRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePatchBaselineRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreatePatchBaselineRequestTags>>(expect1);
      }
    }
  }


  virtual ~CreatePatchBaselineRequest() = default;
};
class CreatePatchBaselineShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<string> approvedPatchesShrink{};
  shared_ptr<bool> approvedPatchesEnableNonSecurity{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> regionId{};
  shared_ptr<string> rejectedPatchesShrink{};
  shared_ptr<string> rejectedPatchesAction{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourcesShrink{};
  shared_ptr<string> tagsShrink{};

  CreatePatchBaselineShrinkRequest() {}

  explicit CreatePatchBaselineShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalRules) {
      res["ApprovalRules"] = boost::any(*approvalRules);
    }
    if (approvedPatchesShrink) {
      res["ApprovedPatches"] = boost::any(*approvedPatchesShrink);
    }
    if (approvedPatchesEnableNonSecurity) {
      res["ApprovedPatchesEnableNonSecurity"] = boost::any(*approvedPatchesEnableNonSecurity);
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
    if (rejectedPatchesShrink) {
      res["RejectedPatches"] = boost::any(*rejectedPatchesShrink);
    }
    if (rejectedPatchesAction) {
      res["RejectedPatchesAction"] = boost::any(*rejectedPatchesAction);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourcesShrink) {
      res["Sources"] = boost::any(*sourcesShrink);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalRules") != m.end() && !m["ApprovalRules"].empty()) {
      approvalRules = make_shared<string>(boost::any_cast<string>(m["ApprovalRules"]));
    }
    if (m.find("ApprovedPatches") != m.end() && !m["ApprovedPatches"].empty()) {
      approvedPatchesShrink = make_shared<string>(boost::any_cast<string>(m["ApprovedPatches"]));
    }
    if (m.find("ApprovedPatchesEnableNonSecurity") != m.end() && !m["ApprovedPatchesEnableNonSecurity"].empty()) {
      approvedPatchesEnableNonSecurity = make_shared<bool>(boost::any_cast<bool>(m["ApprovedPatchesEnableNonSecurity"]));
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
    if (m.find("RejectedPatches") != m.end() && !m["RejectedPatches"].empty()) {
      rejectedPatchesShrink = make_shared<string>(boost::any_cast<string>(m["RejectedPatches"]));
    }
    if (m.find("RejectedPatchesAction") != m.end() && !m["RejectedPatchesAction"].empty()) {
      rejectedPatchesAction = make_shared<string>(boost::any_cast<string>(m["RejectedPatchesAction"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sourcesShrink = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~CreatePatchBaselineShrinkRequest() = default;
};
class CreatePatchBaselineResponseBodyPatchBaselineTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  CreatePatchBaselineResponseBodyPatchBaselineTags() {}

  explicit CreatePatchBaselineResponseBodyPatchBaselineTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~CreatePatchBaselineResponseBodyPatchBaselineTags() = default;
};
class CreatePatchBaselineResponseBodyPatchBaseline : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<vector<string>> approvedPatches{};
  shared_ptr<bool> approvedPatchesEnableNonSecurity{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<vector<string>> rejectedPatches{};
  shared_ptr<string> rejectedPatchesAction{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<vector<string>> sources{};
  shared_ptr<vector<CreatePatchBaselineResponseBodyPatchBaselineTags>> tags{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  CreatePatchBaselineResponseBodyPatchBaseline() {}

  explicit CreatePatchBaselineResponseBodyPatchBaseline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalRules) {
      res["ApprovalRules"] = boost::any(*approvalRules);
    }
    if (approvedPatches) {
      res["ApprovedPatches"] = boost::any(*approvedPatches);
    }
    if (approvedPatchesEnableNonSecurity) {
      res["ApprovedPatchesEnableNonSecurity"] = boost::any(*approvedPatchesEnableNonSecurity);
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
    if (rejectedPatches) {
      res["RejectedPatches"] = boost::any(*rejectedPatches);
    }
    if (rejectedPatchesAction) {
      res["RejectedPatchesAction"] = boost::any(*rejectedPatchesAction);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("ApprovedPatches") != m.end() && !m["ApprovedPatches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApprovedPatches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApprovedPatches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      approvedPatches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApprovedPatchesEnableNonSecurity") != m.end() && !m["ApprovedPatchesEnableNonSecurity"].empty()) {
      approvedPatchesEnableNonSecurity = make_shared<bool>(boost::any_cast<bool>(m["ApprovedPatchesEnableNonSecurity"]));
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
    if (m.find("RejectedPatches") != m.end() && !m["RejectedPatches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RejectedPatches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RejectedPatches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rejectedPatches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RejectedPatchesAction") != m.end() && !m["RejectedPatchesAction"].empty()) {
      rejectedPatchesAction = make_shared<string>(boost::any_cast<string>(m["RejectedPatchesAction"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Sources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Sources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreatePatchBaselineResponseBodyPatchBaselineTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePatchBaselineResponseBodyPatchBaselineTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreatePatchBaselineResponseBodyPatchBaselineTags>>(expect1);
      }
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~CreatePatchBaselineResponseBodyPatchBaseline() = default;
};
class CreatePatchBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePatchBaselineResponseBodyPatchBaseline> patchBaseline{};
  shared_ptr<string> requestId{};

  CreatePatchBaselineResponseBody() {}

  explicit CreatePatchBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePatchBaselineResponseBodyPatchBaseline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PatchBaseline"]));
        patchBaseline = make_shared<CreatePatchBaselineResponseBodyPatchBaseline>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePatchBaselineResponseBody() = default;
};
class CreatePatchBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePatchBaselineResponseBody> body{};

  CreatePatchBaselineResponse() {}

  explicit CreatePatchBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePatchBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePatchBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePatchBaselineResponse() = default;
};
class CreateSecretParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> constraints{};
  shared_ptr<string> DKMSInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<string> keyId{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  CreateSecretParameterRequest() {}

  explicit CreateSecretParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DKMSInstanceId) {
      res["DKMSInstanceId"] = boost::any(*DKMSInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("DKMSInstanceId") != m.end() && !m["DKMSInstanceId"].empty()) {
      DKMSInstanceId = make_shared<string>(boost::any_cast<string>(m["DKMSInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateSecretParameterRequest() = default;
};
class CreateSecretParameterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> constraints{};
  shared_ptr<string> DKMSInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<string> keyId{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  CreateSecretParameterShrinkRequest() {}

  explicit CreateSecretParameterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DKMSInstanceId) {
      res["DKMSInstanceId"] = boost::any(*DKMSInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("DKMSInstanceId") != m.end() && !m["DKMSInstanceId"].empty()) {
      DKMSInstanceId = make_shared<string>(boost::any_cast<string>(m["DKMSInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateSecretParameterShrinkRequest() = default;
};
class CreateSecretParameterResponseBodyParameter : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> DKMSInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> keyId{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  CreateSecretParameterResponseBodyParameter() {}

  explicit CreateSecretParameterResponseBodyParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DKMSInstanceId) {
      res["DKMSInstanceId"] = boost::any(*DKMSInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("DKMSInstanceId") != m.end() && !m["DKMSInstanceId"].empty()) {
      DKMSInstanceId = make_shared<string>(boost::any_cast<string>(m["DKMSInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<long>(boost::any_cast<long>(m["ParameterVersion"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~CreateSecretParameterResponseBodyParameter() = default;
};
class CreateSecretParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateSecretParameterResponseBodyParameter> parameter{};
  shared_ptr<string> requestId{};

  CreateSecretParameterResponseBody() {}

  explicit CreateSecretParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSecretParameterResponseBodyParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameter"]));
        parameter = make_shared<CreateSecretParameterResponseBodyParameter>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSecretParameterResponseBody() = default;
};
class CreateSecretParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSecretParameterResponseBody> body{};

  CreateSecretParameterResponse() {}

  explicit CreateSecretParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSecretParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSecretParameterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSecretParameterResponse() = default;
};
class CreateStateConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> configureMode{};
  shared_ptr<string> description{};
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> scheduleType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> targets{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};

  CreateStateConfigurationRequest() {}

  explicit CreateStateConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configureMode) {
      res["ConfigureMode"] = boost::any(*configureMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduleExpression) {
      res["ScheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targets) {
      res["Targets"] = boost::any(*targets);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigureMode") != m.end() && !m["ConfigureMode"].empty()) {
      configureMode = make_shared<string>(boost::any_cast<string>(m["ConfigureMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ScheduleExpression") != m.end() && !m["ScheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["ScheduleExpression"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      targets = make_shared<string>(boost::any_cast<string>(m["Targets"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~CreateStateConfigurationRequest() = default;
};
class CreateStateConfigurationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> configureMode{};
  shared_ptr<string> description{};
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> targets{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};

  CreateStateConfigurationShrinkRequest() {}

  explicit CreateStateConfigurationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configureMode) {
      res["ConfigureMode"] = boost::any(*configureMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduleExpression) {
      res["ScheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (targets) {
      res["Targets"] = boost::any(*targets);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigureMode") != m.end() && !m["ConfigureMode"].empty()) {
      configureMode = make_shared<string>(boost::any_cast<string>(m["ConfigureMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ScheduleExpression") != m.end() && !m["ScheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["ScheduleExpression"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      targets = make_shared<string>(boost::any_cast<string>(m["Targets"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~CreateStateConfigurationShrinkRequest() = default;
};
class CreateStateConfigurationResponseBodyStateConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> configureMode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> stateConfigurationId{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> targets{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};

  CreateStateConfigurationResponseBodyStateConfiguration() {}

  explicit CreateStateConfigurationResponseBodyStateConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configureMode) {
      res["ConfigureMode"] = boost::any(*configureMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduleExpression) {
      res["ScheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (stateConfigurationId) {
      res["StateConfigurationId"] = boost::any(*stateConfigurationId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targets) {
      res["Targets"] = boost::any(*targets);
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
    if (m.find("ConfigureMode") != m.end() && !m["ConfigureMode"].empty()) {
      configureMode = make_shared<string>(boost::any_cast<string>(m["ConfigureMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ScheduleExpression") != m.end() && !m["ScheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["ScheduleExpression"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("StateConfigurationId") != m.end() && !m["StateConfigurationId"].empty()) {
      stateConfigurationId = make_shared<string>(boost::any_cast<string>(m["StateConfigurationId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      targets = make_shared<string>(boost::any_cast<string>(m["Targets"]));
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


  virtual ~CreateStateConfigurationResponseBodyStateConfiguration() = default;
};
class CreateStateConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateStateConfigurationResponseBodyStateConfiguration> stateConfiguration{};

  CreateStateConfigurationResponseBody() {}

  explicit CreateStateConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stateConfiguration) {
      res["StateConfiguration"] = stateConfiguration ? boost::any(stateConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StateConfiguration") != m.end() && !m["StateConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["StateConfiguration"].type()) {
        CreateStateConfigurationResponseBodyStateConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StateConfiguration"]));
        stateConfiguration = make_shared<CreateStateConfigurationResponseBodyStateConfiguration>(model1);
      }
    }
  }


  virtual ~CreateStateConfigurationResponseBody() = default;
};
class CreateStateConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateStateConfigurationResponseBody> body{};

  CreateStateConfigurationResponse() {}

  explicit CreateStateConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateStateConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateStateConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateStateConfigurationResponse() = default;
};
class CreateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> templateName{};
  shared_ptr<string> versionName{};

  CreateTemplateRequest() {}

  explicit CreateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateTemplateRequest() = default;
};
class CreateTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> templateName{};
  shared_ptr<string> versionName{};

  CreateTemplateShrinkRequest() {}

  explicit CreateTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateTemplateShrinkRequest() = default;
};
class CreateTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<bool> hasTrigger{};
  shared_ptr<string> hash{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  CreateTemplateResponseBodyTemplate() {}

  explicit CreateTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hasTrigger) {
      res["HasTrigger"] = boost::any(*hasTrigger);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("HasTrigger") != m.end() && !m["HasTrigger"].empty()) {
      hasTrigger = make_shared<bool>(boost::any_cast<bool>(m["HasTrigger"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~CreateTemplateResponseBodyTemplate() = default;
};
class CreateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateTemplateResponseBodyTemplate> template_{};
  shared_ptr<string> templateType{};

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
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        CreateTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<CreateTemplateResponseBodyTemplate>(model1);
      }
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
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
        CreateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTemplateResponse() = default;
};
class DeleteApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<bool> force{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> retainResource{};

  DeleteApplicationRequest() {}

  explicit DeleteApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (retainResource) {
      res["RetainResource"] = boost::any(*retainResource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RetainResource") != m.end() && !m["RetainResource"].empty()) {
      retainResource = make_shared<bool>(boost::any_cast<bool>(m["RetainResource"]));
    }
  }


  virtual ~DeleteApplicationRequest() = default;
};
class DeleteApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteApplicationResponseBody() {}

  explicit DeleteApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteApplicationResponseBody() = default;
};
class DeleteApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApplicationResponseBody> body{};

  DeleteApplicationResponse() {}

  explicit DeleteApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApplicationResponse() = default;
};
class DeleteApplicationGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> retainResource{};

  DeleteApplicationGroupRequest() {}

  explicit DeleteApplicationGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (retainResource) {
      res["RetainResource"] = boost::any(*retainResource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RetainResource") != m.end() && !m["RetainResource"].empty()) {
      retainResource = make_shared<bool>(boost::any_cast<bool>(m["RetainResource"]));
    }
  }


  virtual ~DeleteApplicationGroupRequest() = default;
};
class DeleteApplicationGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteApplicationGroupResponseBody() {}

  explicit DeleteApplicationGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteApplicationGroupResponseBody() = default;
};
class DeleteApplicationGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApplicationGroupResponseBody> body{};

  DeleteApplicationGroupResponse() {}

  explicit DeleteApplicationGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteApplicationGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApplicationGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApplicationGroupResponse() = default;
};
class DeleteExecutionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> executionIds{};
  shared_ptr<bool> force{};
  shared_ptr<string> regionId{};

  DeleteExecutionsRequest() {}

  explicit DeleteExecutionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionIds) {
      res["ExecutionIds"] = boost::any(*executionIds);
    }
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionIds") != m.end() && !m["ExecutionIds"].empty()) {
      executionIds = make_shared<string>(boost::any_cast<string>(m["ExecutionIds"]));
    }
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteExecutionsRequest() = default;
};
class DeleteExecutionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteExecutionsResponseBody() {}

  explicit DeleteExecutionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteExecutionsResponseBody() = default;
};
class DeleteExecutionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExecutionsResponseBody> body{};

  DeleteExecutionsResponse() {}

  explicit DeleteExecutionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteExecutionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExecutionsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExecutionsResponse() = default;
};
class DeleteOpsItemsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> opsItemIds{};
  shared_ptr<string> regionId{};

  DeleteOpsItemsRequest() {}

  explicit DeleteOpsItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opsItemIds) {
      res["OpsItemIds"] = boost::any(*opsItemIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpsItemIds") != m.end() && !m["OpsItemIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OpsItemIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OpsItemIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      opsItemIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteOpsItemsRequest() = default;
};
class DeleteOpsItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteOpsItemsResponseBody() {}

  explicit DeleteOpsItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteOpsItemsResponseBody() = default;
};
class DeleteOpsItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteOpsItemsResponseBody> body{};

  DeleteOpsItemsResponse() {}

  explicit DeleteOpsItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteOpsItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteOpsItemsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteOpsItemsResponse() = default;
};
class DeleteParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  DeleteParameterRequest() {}

  explicit DeleteParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteParameterRequest() = default;
};
class DeleteParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteParameterResponseBody() {}

  explicit DeleteParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteParameterResponseBody() = default;
};
class DeleteParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteParameterResponseBody> body{};

  DeleteParameterResponse() {}

  explicit DeleteParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteParameterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteParameterResponse() = default;
};
class DeletePatchBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  DeletePatchBaselineRequest() {}

  explicit DeletePatchBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePatchBaselineRequest() = default;
};
class DeletePatchBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePatchBaselineResponseBody() {}

  explicit DeletePatchBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePatchBaselineResponseBody() = default;
};
class DeletePatchBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePatchBaselineResponseBody> body{};

  DeletePatchBaselineResponse() {}

  explicit DeletePatchBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePatchBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePatchBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePatchBaselineResponse() = default;
};
class DeleteSecretParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  DeleteSecretParameterRequest() {}

  explicit DeleteSecretParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSecretParameterRequest() = default;
};
class DeleteSecretParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSecretParameterResponseBody() {}

  explicit DeleteSecretParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSecretParameterResponseBody() = default;
};
class DeleteSecretParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSecretParameterResponseBody> body{};

  DeleteSecretParameterResponse() {}

  explicit DeleteSecretParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSecretParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSecretParameterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSecretParameterResponse() = default;
};
class DeleteStateConfigurationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stateConfigurationIds{};

  DeleteStateConfigurationsRequest() {}

  explicit DeleteStateConfigurationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (stateConfigurationIds) {
      res["StateConfigurationIds"] = boost::any(*stateConfigurationIds);
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
    if (m.find("StateConfigurationIds") != m.end() && !m["StateConfigurationIds"].empty()) {
      stateConfigurationIds = make_shared<string>(boost::any_cast<string>(m["StateConfigurationIds"]));
    }
  }


  virtual ~DeleteStateConfigurationsRequest() = default;
};
class DeleteStateConfigurationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteStateConfigurationsResponseBody() {}

  explicit DeleteStateConfigurationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteStateConfigurationsResponseBody() = default;
};
class DeleteStateConfigurationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteStateConfigurationsResponseBody> body{};

  DeleteStateConfigurationsResponse() {}

  explicit DeleteStateConfigurationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteStateConfigurationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteStateConfigurationsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteStateConfigurationsResponse() = default;
};
class DeleteTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoDeleteExecutions{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateName{};

  DeleteTemplateRequest() {}

  explicit DeleteTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoDeleteExecutions) {
      res["AutoDeleteExecutions"] = boost::any(*autoDeleteExecutions);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoDeleteExecutions") != m.end() && !m["AutoDeleteExecutions"].empty()) {
      autoDeleteExecutions = make_shared<bool>(boost::any_cast<bool>(m["AutoDeleteExecutions"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
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
        DeleteTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTemplateResponse() = default;
};
class DeleteTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoDeleteExecutions{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateNames{};

  DeleteTemplatesRequest() {}

  explicit DeleteTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoDeleteExecutions) {
      res["AutoDeleteExecutions"] = boost::any(*autoDeleteExecutions);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateNames) {
      res["TemplateNames"] = boost::any(*templateNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoDeleteExecutions") != m.end() && !m["AutoDeleteExecutions"].empty()) {
      autoDeleteExecutions = make_shared<bool>(boost::any_cast<bool>(m["AutoDeleteExecutions"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateNames") != m.end() && !m["TemplateNames"].empty()) {
      templateNames = make_shared<string>(boost::any_cast<string>(m["TemplateNames"]));
    }
  }


  virtual ~DeleteTemplatesRequest() = default;
};
class DeleteTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTemplatesResponseBody() {}

  explicit DeleteTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTemplatesResponseBody() = default;
};
class DeleteTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTemplatesResponseBody> body{};

  DeleteTemplatesResponse() {}

  explicit DeleteTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTemplatesResponse() = default;
};
class DeployApplicationGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> deployParameters{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  DeployApplicationGroupRequest() {}

  explicit DeployApplicationGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (deployParameters) {
      res["DeployParameters"] = boost::any(*deployParameters);
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
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("DeployParameters") != m.end() && !m["DeployParameters"].empty()) {
      deployParameters = make_shared<string>(boost::any_cast<string>(m["DeployParameters"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeployApplicationGroupRequest() = default;
};
class DeployApplicationGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeployApplicationGroupResponseBody() {}

  explicit DeployApplicationGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeployApplicationGroupResponseBody() = default;
};
class DeployApplicationGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployApplicationGroupResponseBody> body{};

  DeployApplicationGroupResponse() {}

  explicit DeployApplicationGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployApplicationGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployApplicationGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeployApplicationGroupResponse() = default;
};
class DescribeApplicationGroupBillRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> billingCycle{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};

  DescribeApplicationGroupBillRequest() {}

  explicit DescribeApplicationGroupBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<string>(boost::any_cast<string>(m["BillingCycle"]));
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DescribeApplicationGroupBillRequest() = default;
};
class DescribeApplicationGroupBillResponseBodyApplicationGroupConsume : public Darabonba::Model {
public:
  shared_ptr<double> amount{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> currency{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> optimization{};
  shared_ptr<string> peakType{};
  shared_ptr<string> performance{};
  shared_ptr<string> status{};

  DescribeApplicationGroupBillResponseBodyApplicationGroupConsume() {}

  explicit DescribeApplicationGroupBillResponseBodyApplicationGroupConsume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (optimization) {
      res["Optimization"] = boost::any(*optimization);
    }
    if (peakType) {
      res["PeakType"] = boost::any(*peakType);
    }
    if (performance) {
      res["Performance"] = boost::any(*performance);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Optimization") != m.end() && !m["Optimization"].empty()) {
      optimization = make_shared<string>(boost::any_cast<string>(m["Optimization"]));
    }
    if (m.find("PeakType") != m.end() && !m["PeakType"].empty()) {
      peakType = make_shared<string>(boost::any_cast<string>(m["PeakType"]));
    }
    if (m.find("Performance") != m.end() && !m["Performance"].empty()) {
      performance = make_shared<string>(boost::any_cast<string>(m["Performance"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeApplicationGroupBillResponseBodyApplicationGroupConsume() = default;
};
class DescribeApplicationGroupBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApplicationGroupBillResponseBodyApplicationGroupConsume>> applicationGroupConsume{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  DescribeApplicationGroupBillResponseBody() {}

  explicit DescribeApplicationGroupBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationGroupConsume) {
      vector<boost::any> temp1;
      for(auto item1:*applicationGroupConsume){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationGroupConsume"] = boost::any(temp1);
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
    if (m.find("ApplicationGroupConsume") != m.end() && !m["ApplicationGroupConsume"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationGroupConsume"].type()) {
        vector<DescribeApplicationGroupBillResponseBodyApplicationGroupConsume> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationGroupConsume"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationGroupBillResponseBodyApplicationGroupConsume model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationGroupConsume = make_shared<vector<DescribeApplicationGroupBillResponseBodyApplicationGroupConsume>>(expect1);
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


  virtual ~DescribeApplicationGroupBillResponseBody() = default;
};
class DescribeApplicationGroupBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApplicationGroupBillResponseBody> body{};

  DescribeApplicationGroupBillResponse() {}

  explicit DescribeApplicationGroupBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApplicationGroupBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApplicationGroupBillResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApplicationGroupBillResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> regionId{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class GenerateExecutionPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> ramRole{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateContent{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};

  GenerateExecutionPolicyRequest() {}

  explicit GenerateExecutionPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ramRole) {
      res["RamRole"] = boost::any(*ramRole);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
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
    if (m.find("RamRole") != m.end() && !m["RamRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["RamRole"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~GenerateExecutionPolicyRequest() = default;
};
class GenerateExecutionPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> missingPolicy{};
  shared_ptr<string> policy{};
  shared_ptr<string> requestId{};

  GenerateExecutionPolicyResponseBody() {}

  explicit GenerateExecutionPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (missingPolicy) {
      res["MissingPolicy"] = boost::any(*missingPolicy);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MissingPolicy") != m.end() && !m["MissingPolicy"].empty()) {
      missingPolicy = make_shared<string>(boost::any_cast<string>(m["MissingPolicy"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateExecutionPolicyResponseBody() = default;
};
class GenerateExecutionPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateExecutionPolicyResponseBody> body{};

  GenerateExecutionPolicyResponse() {}

  explicit GenerateExecutionPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateExecutionPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateExecutionPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateExecutionPolicyResponse() = default;
};
class GenerateOpsItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> configurationId{};
  shared_ptr<string> data{};
  shared_ptr<string> dataSource{};
  shared_ptr<string> regionId{};

  GenerateOpsItemRequest() {}

  explicit GenerateOpsItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configurationId) {
      res["ConfigurationId"] = boost::any(*configurationId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataSource) {
      res["DataSource"] = boost::any(*dataSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigurationId") != m.end() && !m["ConfigurationId"].empty()) {
      configurationId = make_shared<string>(boost::any_cast<string>(m["ConfigurationId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      dataSource = make_shared<string>(boost::any_cast<string>(m["DataSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GenerateOpsItemRequest() = default;
};
class GenerateOpsItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> opsItemIds{};
  shared_ptr<string> requestId{};

  GenerateOpsItemResponseBody() {}

  explicit GenerateOpsItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opsItemIds) {
      res["OpsItemIds"] = boost::any(*opsItemIds);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpsItemIds") != m.end() && !m["OpsItemIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OpsItemIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OpsItemIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      opsItemIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateOpsItemResponseBody() = default;
};
class GenerateOpsItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateOpsItemResponseBody> body{};

  GenerateOpsItemResponse() {}

  explicit GenerateOpsItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateOpsItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateOpsItemResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateOpsItemResponse() = default;
};
class GetApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  GetApplicationRequest() {}

  explicit GetApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetApplicationRequest() = default;
};
class GetApplicationResponseBodyApplicationAlarmConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> contactGroups{};
  shared_ptr<string> healthCheckUrl{};
  shared_ptr<vector<string>> templateIds{};

  GetApplicationResponseBodyApplicationAlarmConfig() {}

  explicit GetApplicationResponseBodyApplicationAlarmConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroups) {
      res["ContactGroups"] = boost::any(*contactGroups);
    }
    if (healthCheckUrl) {
      res["HealthCheckUrl"] = boost::any(*healthCheckUrl);
    }
    if (templateIds) {
      res["TemplateIds"] = boost::any(*templateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroups") != m.end() && !m["ContactGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ContactGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ContactGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      contactGroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckUrl") != m.end() && !m["HealthCheckUrl"].empty()) {
      healthCheckUrl = make_shared<string>(boost::any_cast<string>(m["HealthCheckUrl"]));
    }
    if (m.find("TemplateIds") != m.end() && !m["TemplateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetApplicationResponseBodyApplicationAlarmConfig() = default;
};
class GetApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<GetApplicationResponseBodyApplicationAlarmConfig> alarmConfig{};
  shared_ptr<string> applicationSource{};
  shared_ptr<string> applicationType{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> updateDate{};

  GetApplicationResponseBodyApplication() {}

  explicit GetApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmConfig) {
      res["AlarmConfig"] = alarmConfig ? boost::any(alarmConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (applicationSource) {
      res["ApplicationSource"] = boost::any(*applicationSource);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmConfig") != m.end() && !m["AlarmConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlarmConfig"].type()) {
        GetApplicationResponseBodyApplicationAlarmConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlarmConfig"]));
        alarmConfig = make_shared<GetApplicationResponseBodyApplicationAlarmConfig>(model1);
      }
    }
    if (m.find("ApplicationSource") != m.end() && !m["ApplicationSource"].empty()) {
      applicationSource = make_shared<string>(boost::any_cast<string>(m["ApplicationSource"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~GetApplicationResponseBodyApplication() = default;
};
class GetApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetApplicationResponseBodyApplication> application{};
  shared_ptr<string> requestId{};

  GetApplicationResponseBody() {}

  explicit GetApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        GetApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<GetApplicationResponseBodyApplication>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetApplicationResponseBody() = default;
};
class GetApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetApplicationResponseBody> body{};

  GetApplicationResponse() {}

  explicit GetApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~GetApplicationResponse() = default;
};
class GetApplicationGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  GetApplicationGroupRequest() {}

  explicit GetApplicationGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
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
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetApplicationGroupRequest() = default;
};
class GetApplicationGroupResponseBodyApplicationGroup : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> applicationSource{};
  shared_ptr<string> cmsGroupId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> deployOutputs{};
  shared_ptr<string> deployParameters{};
  shared_ptr<string> deployRegionId{};
  shared_ptr<string> description{};
  shared_ptr<string> errorDetail{};
  shared_ptr<string> errorType{};
  shared_ptr<string> importTagKey{};
  shared_ptr<string> importTagValue{};
  shared_ptr<string> name{};
  shared_ptr<string> operationMetadata{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> updateDate{};

  GetApplicationGroupResponseBodyApplicationGroup() {}

  explicit GetApplicationGroupResponseBodyApplicationGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (applicationSource) {
      res["ApplicationSource"] = boost::any(*applicationSource);
    }
    if (cmsGroupId) {
      res["CmsGroupId"] = boost::any(*cmsGroupId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (deployOutputs) {
      res["DeployOutputs"] = boost::any(*deployOutputs);
    }
    if (deployParameters) {
      res["DeployParameters"] = boost::any(*deployParameters);
    }
    if (deployRegionId) {
      res["DeployRegionId"] = boost::any(*deployRegionId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (errorDetail) {
      res["ErrorDetail"] = boost::any(*errorDetail);
    }
    if (errorType) {
      res["ErrorType"] = boost::any(*errorType);
    }
    if (importTagKey) {
      res["ImportTagKey"] = boost::any(*importTagKey);
    }
    if (importTagValue) {
      res["ImportTagValue"] = boost::any(*importTagValue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operationMetadata) {
      res["OperationMetadata"] = boost::any(*operationMetadata);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("ApplicationSource") != m.end() && !m["ApplicationSource"].empty()) {
      applicationSource = make_shared<string>(boost::any_cast<string>(m["ApplicationSource"]));
    }
    if (m.find("CmsGroupId") != m.end() && !m["CmsGroupId"].empty()) {
      cmsGroupId = make_shared<string>(boost::any_cast<string>(m["CmsGroupId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DeployOutputs") != m.end() && !m["DeployOutputs"].empty()) {
      deployOutputs = make_shared<string>(boost::any_cast<string>(m["DeployOutputs"]));
    }
    if (m.find("DeployParameters") != m.end() && !m["DeployParameters"].empty()) {
      deployParameters = make_shared<string>(boost::any_cast<string>(m["DeployParameters"]));
    }
    if (m.find("DeployRegionId") != m.end() && !m["DeployRegionId"].empty()) {
      deployRegionId = make_shared<string>(boost::any_cast<string>(m["DeployRegionId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErrorDetail") != m.end() && !m["ErrorDetail"].empty()) {
      errorDetail = make_shared<string>(boost::any_cast<string>(m["ErrorDetail"]));
    }
    if (m.find("ErrorType") != m.end() && !m["ErrorType"].empty()) {
      errorType = make_shared<string>(boost::any_cast<string>(m["ErrorType"]));
    }
    if (m.find("ImportTagKey") != m.end() && !m["ImportTagKey"].empty()) {
      importTagKey = make_shared<string>(boost::any_cast<string>(m["ImportTagKey"]));
    }
    if (m.find("ImportTagValue") != m.end() && !m["ImportTagValue"].empty()) {
      importTagValue = make_shared<string>(boost::any_cast<string>(m["ImportTagValue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      operationMetadata = make_shared<string>(boost::any_cast<string>(m["OperationMetadata"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~GetApplicationGroupResponseBodyApplicationGroup() = default;
};
class GetApplicationGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetApplicationGroupResponseBodyApplicationGroup> applicationGroup{};
  shared_ptr<string> requestId{};

  GetApplicationGroupResponseBody() {}

  explicit GetApplicationGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationGroup) {
      res["ApplicationGroup"] = applicationGroup ? boost::any(applicationGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationGroup") != m.end() && !m["ApplicationGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApplicationGroup"].type()) {
        GetApplicationGroupResponseBodyApplicationGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApplicationGroup"]));
        applicationGroup = make_shared<GetApplicationGroupResponseBodyApplicationGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetApplicationGroupResponseBody() = default;
};
class GetApplicationGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetApplicationGroupResponseBody> body{};

  GetApplicationGroupResponse() {}

  explicit GetApplicationGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetApplicationGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetApplicationGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetApplicationGroupResponse() = default;
};
class GetExecutionTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> executionId{};
  shared_ptr<string> regionId{};

  GetExecutionTemplateRequest() {}

  explicit GetExecutionTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetExecutionTemplateRequest() = default;
};
class GetExecutionTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> hash{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  GetExecutionTemplateResponseBodyTemplate() {}

  explicit GetExecutionTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~GetExecutionTemplateResponseBodyTemplate() = default;
};
class GetExecutionTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> requestId{};
  shared_ptr<GetExecutionTemplateResponseBodyTemplate> template_{};

  GetExecutionTemplateResponseBody() {}

  explicit GetExecutionTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetExecutionTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<GetExecutionTemplateResponseBodyTemplate>(model1);
      }
    }
  }


  virtual ~GetExecutionTemplateResponseBody() = default;
};
class GetExecutionTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExecutionTemplateResponseBody> body{};

  GetExecutionTemplateResponse() {}

  explicit GetExecutionTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetExecutionTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExecutionTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetExecutionTemplateResponse() = default;
};
class GetInventorySchemaRequest : public Darabonba::Model {
public:
  shared_ptr<bool> aggregator{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> typeName_{};

  GetInventorySchemaRequest() {}

  explicit GetInventorySchemaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregator) {
      res["Aggregator"] = boost::any(*aggregator);
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
    if (m.find("Aggregator") != m.end() && !m["Aggregator"].empty()) {
      aggregator = make_shared<bool>(boost::any_cast<bool>(m["Aggregator"]));
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


  virtual ~GetInventorySchemaRequest() = default;
};
class GetInventorySchemaResponseBodySchemasAttributes : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<string> name{};

  GetInventorySchemaResponseBodySchemasAttributes() {}

  explicit GetInventorySchemaResponseBodySchemasAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetInventorySchemaResponseBodySchemasAttributes() = default;
};
class GetInventorySchemaResponseBodySchemas : public Darabonba::Model {
public:
  shared_ptr<vector<GetInventorySchemaResponseBodySchemasAttributes>> attributes{};
  shared_ptr<string> typeName_{};
  shared_ptr<string> version{};

  GetInventorySchemaResponseBodySchemas() {}

  explicit GetInventorySchemaResponseBodySchemas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      vector<boost::any> temp1;
      for(auto item1:*attributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Attributes"] = boost::any(temp1);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<GetInventorySchemaResponseBodySchemasAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Attributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInventorySchemaResponseBodySchemasAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attributes = make_shared<vector<GetInventorySchemaResponseBodySchemasAttributes>>(expect1);
      }
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetInventorySchemaResponseBodySchemas() = default;
};
class GetInventorySchemaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetInventorySchemaResponseBodySchemas>> schemas{};

  GetInventorySchemaResponseBody() {}

  explicit GetInventorySchemaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (schemas) {
      vector<boost::any> temp1;
      for(auto item1:*schemas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schemas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Schemas") != m.end() && !m["Schemas"].empty()) {
      if (typeid(vector<boost::any>) == m["Schemas"].type()) {
        vector<GetInventorySchemaResponseBodySchemas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schemas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInventorySchemaResponseBodySchemas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schemas = make_shared<vector<GetInventorySchemaResponseBodySchemas>>(expect1);
      }
    }
  }


  virtual ~GetInventorySchemaResponseBody() = default;
};
class GetInventorySchemaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInventorySchemaResponseBody> body{};

  GetInventorySchemaResponse() {}

  explicit GetInventorySchemaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInventorySchemaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInventorySchemaResponseBody>(model1);
      }
    }
  }


  virtual ~GetInventorySchemaResponse() = default;
};
class GetOpsItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> opsItemId{};
  shared_ptr<string> regionId{};

  GetOpsItemRequest() {}

  explicit GetOpsItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opsItemId) {
      res["OpsItemId"] = boost::any(*opsItemId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpsItemId") != m.end() && !m["OpsItemId"].empty()) {
      opsItemId = make_shared<string>(boost::any_cast<string>(m["OpsItemId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetOpsItemRequest() = default;
};
class GetOpsItemResponseBodyOpsItem : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> attributes{};
  shared_ptr<string> category{};
  shared_ptr<string> createBy{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifiedBy{};
  shared_ptr<string> opsItemId{};
  shared_ptr<long> priority{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> resources{};
  shared_ptr<string> severity{};
  shared_ptr<vector<map<string, boost::any>>> solutions{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> title{};
  shared_ptr<string> updateDate{};

  GetOpsItemResponseBodyOpsItem() {}

  explicit GetOpsItemResponseBodyOpsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (createBy) {
      res["CreateBy"] = boost::any(*createBy);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (lastModifiedBy) {
      res["LastModifiedBy"] = boost::any(*lastModifiedBy);
    }
    if (opsItemId) {
      res["OpsItemId"] = boost::any(*opsItemId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (solutions) {
      res["Solutions"] = boost::any(*solutions);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
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
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreateBy") != m.end() && !m["CreateBy"].empty()) {
      createBy = make_shared<string>(boost::any_cast<string>(m["CreateBy"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LastModifiedBy") != m.end() && !m["LastModifiedBy"].empty()) {
      lastModifiedBy = make_shared<string>(boost::any_cast<string>(m["LastModifiedBy"]));
    }
    if (m.find("OpsItemId") != m.end() && !m["OpsItemId"].empty()) {
      opsItemId = make_shared<string>(boost::any_cast<string>(m["OpsItemId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Solutions") != m.end() && !m["Solutions"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Solutions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Solutions"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      solutions = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~GetOpsItemResponseBodyOpsItem() = default;
};
class GetOpsItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetOpsItemResponseBodyOpsItem> opsItem{};
  shared_ptr<string> requestId{};

  GetOpsItemResponseBody() {}

  explicit GetOpsItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opsItem) {
      res["OpsItem"] = opsItem ? boost::any(opsItem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpsItem") != m.end() && !m["OpsItem"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpsItem"].type()) {
        GetOpsItemResponseBodyOpsItem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpsItem"]));
        opsItem = make_shared<GetOpsItemResponseBodyOpsItem>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetOpsItemResponseBody() = default;
};
class GetOpsItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOpsItemResponseBody> body{};

  GetOpsItemResponse() {}

  explicit GetOpsItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOpsItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOpsItemResponseBody>(model1);
      }
    }
  }


  virtual ~GetOpsItemResponse() = default;
};
class GetParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  GetParameterRequest() {}

  explicit GetParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~GetParameterRequest() = default;
};
class GetParameterResponseBodyParameter : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};
  shared_ptr<string> value{};

  GetParameterResponseBodyParameter() {}

  explicit GetParameterResponseBodyParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~GetParameterResponseBodyParameter() = default;
};
class GetParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetParameterResponseBodyParameter> parameter{};
  shared_ptr<string> requestId{};

  GetParameterResponseBody() {}

  explicit GetParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetParameterResponseBodyParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameter"]));
        parameter = make_shared<GetParameterResponseBodyParameter>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetParameterResponseBody() = default;
};
class GetParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetParameterResponseBody> body{};

  GetParameterResponse() {}

  explicit GetParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetParameterResponseBody>(model1);
      }
    }
  }


  virtual ~GetParameterResponse() = default;
};
class GetParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> names{};
  shared_ptr<string> regionId{};

  GetParametersRequest() {}

  explicit GetParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      names = make_shared<string>(boost::any_cast<string>(m["Names"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetParametersRequest() = default;
};
class GetParametersResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};
  shared_ptr<string> value{};

  GetParametersResponseBodyParameters() {}

  explicit GetParametersResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~GetParametersResponseBodyParameters() = default;
};
class GetParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> invalidParameters{};
  shared_ptr<vector<GetParametersResponseBodyParameters>> parameters{};
  shared_ptr<string> requestId{};

  GetParametersResponseBody() {}

  explicit GetParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invalidParameters) {
      res["InvalidParameters"] = boost::any(*invalidParameters);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvalidParameters") != m.end() && !m["InvalidParameters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvalidParameters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvalidParameters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      invalidParameters = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetParametersResponseBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetParametersResponseBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetParametersResponseBodyParameters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetParametersResponseBody() = default;
};
class GetParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetParametersResponseBody> body{};

  GetParametersResponse() {}

  explicit GetParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetParametersResponseBody>(model1);
      }
    }
  }


  virtual ~GetParametersResponse() = default;
};
class GetParametersByPathRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> path{};
  shared_ptr<bool> recursive{};
  shared_ptr<string> regionId{};

  GetParametersByPathRequest() {}

  explicit GetParametersByPathRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (recursive) {
      res["Recursive"] = boost::any(*recursive);
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
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Recursive") != m.end() && !m["Recursive"].empty()) {
      recursive = make_shared<bool>(boost::any_cast<bool>(m["Recursive"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetParametersByPathRequest() = default;
};
class GetParametersByPathResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};
  shared_ptr<string> value{};

  GetParametersByPathResponseBodyParameters() {}

  explicit GetParametersByPathResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~GetParametersByPathResponseBodyParameters() = default;
};
class GetParametersByPathResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<GetParametersByPathResponseBodyParameters>> parameters{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetParametersByPathResponseBody() {}

  explicit GetParametersByPathResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<GetParametersByPathResponseBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetParametersByPathResponseBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetParametersByPathResponseBodyParameters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetParametersByPathResponseBody() = default;
};
class GetParametersByPathResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetParametersByPathResponseBody> body{};

  GetParametersByPathResponse() {}

  explicit GetParametersByPathResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetParametersByPathResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetParametersByPathResponseBody>(model1);
      }
    }
  }


  virtual ~GetParametersByPathResponse() = default;
};
class GetPatchBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  GetPatchBaselineRequest() {}

  explicit GetPatchBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetPatchBaselineRequest() = default;
};
class GetPatchBaselineResponseBodyPatchBaselineTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetPatchBaselineResponseBodyPatchBaselineTags() {}

  explicit GetPatchBaselineResponseBodyPatchBaselineTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~GetPatchBaselineResponseBodyPatchBaselineTags() = default;
};
class GetPatchBaselineResponseBodyPatchBaseline : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<vector<string>> approvedPatches{};
  shared_ptr<bool> approvedPatchesEnableNonSecurity{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<vector<string>> rejectedPatches{};
  shared_ptr<string> rejectedPatchesAction{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<vector<string>> sources{};
  shared_ptr<vector<GetPatchBaselineResponseBodyPatchBaselineTags>> tags{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  GetPatchBaselineResponseBodyPatchBaseline() {}

  explicit GetPatchBaselineResponseBodyPatchBaseline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalRules) {
      res["ApprovalRules"] = boost::any(*approvalRules);
    }
    if (approvedPatches) {
      res["ApprovedPatches"] = boost::any(*approvedPatches);
    }
    if (approvedPatchesEnableNonSecurity) {
      res["ApprovedPatchesEnableNonSecurity"] = boost::any(*approvedPatchesEnableNonSecurity);
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
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operationSystem) {
      res["OperationSystem"] = boost::any(*operationSystem);
    }
    if (rejectedPatches) {
      res["RejectedPatches"] = boost::any(*rejectedPatches);
    }
    if (rejectedPatchesAction) {
      res["RejectedPatchesAction"] = boost::any(*rejectedPatchesAction);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("ApprovedPatches") != m.end() && !m["ApprovedPatches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApprovedPatches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApprovedPatches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      approvedPatches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApprovedPatchesEnableNonSecurity") != m.end() && !m["ApprovedPatchesEnableNonSecurity"].empty()) {
      approvedPatchesEnableNonSecurity = make_shared<bool>(boost::any_cast<bool>(m["ApprovedPatchesEnableNonSecurity"]));
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
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperationSystem") != m.end() && !m["OperationSystem"].empty()) {
      operationSystem = make_shared<string>(boost::any_cast<string>(m["OperationSystem"]));
    }
    if (m.find("RejectedPatches") != m.end() && !m["RejectedPatches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RejectedPatches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RejectedPatches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rejectedPatches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RejectedPatchesAction") != m.end() && !m["RejectedPatchesAction"].empty()) {
      rejectedPatchesAction = make_shared<string>(boost::any_cast<string>(m["RejectedPatchesAction"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Sources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Sources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetPatchBaselineResponseBodyPatchBaselineTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPatchBaselineResponseBodyPatchBaselineTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetPatchBaselineResponseBodyPatchBaselineTags>>(expect1);
      }
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~GetPatchBaselineResponseBodyPatchBaseline() = default;
};
class GetPatchBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPatchBaselineResponseBodyPatchBaseline> patchBaseline{};
  shared_ptr<string> requestId{};

  GetPatchBaselineResponseBody() {}

  explicit GetPatchBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPatchBaselineResponseBodyPatchBaseline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PatchBaseline"]));
        patchBaseline = make_shared<GetPatchBaselineResponseBodyPatchBaseline>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPatchBaselineResponseBody() = default;
};
class GetPatchBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPatchBaselineResponseBody> body{};

  GetPatchBaselineResponse() {}

  explicit GetPatchBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPatchBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPatchBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~GetPatchBaselineResponse() = default;
};
class GetSecretParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> withDecryption{};

  GetSecretParameterRequest() {}

  explicit GetSecretParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (withDecryption) {
      res["WithDecryption"] = boost::any(*withDecryption);
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
    if (m.find("WithDecryption") != m.end() && !m["WithDecryption"].empty()) {
      withDecryption = make_shared<bool>(boost::any_cast<bool>(m["WithDecryption"]));
    }
  }


  virtual ~GetSecretParameterRequest() = default;
};
class GetSecretParameterResponseBodyParameter : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> DKMSInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> keyId{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};
  shared_ptr<string> value{};

  GetSecretParameterResponseBodyParameter() {}

  explicit GetSecretParameterResponseBodyParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DKMSInstanceId) {
      res["DKMSInstanceId"] = boost::any(*DKMSInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("DKMSInstanceId") != m.end() && !m["DKMSInstanceId"].empty()) {
      DKMSInstanceId = make_shared<string>(boost::any_cast<string>(m["DKMSInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<long>(boost::any_cast<long>(m["ParameterVersion"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~GetSecretParameterResponseBodyParameter() = default;
};
class GetSecretParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSecretParameterResponseBodyParameter> parameter{};
  shared_ptr<string> requestId{};

  GetSecretParameterResponseBody() {}

  explicit GetSecretParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSecretParameterResponseBodyParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameter"]));
        parameter = make_shared<GetSecretParameterResponseBodyParameter>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSecretParameterResponseBody() = default;
};
class GetSecretParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSecretParameterResponseBody> body{};

  GetSecretParameterResponse() {}

  explicit GetSecretParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSecretParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSecretParameterResponseBody>(model1);
      }
    }
  }


  virtual ~GetSecretParameterResponse() = default;
};
class GetSecretParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> names{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> withDecryption{};

  GetSecretParametersRequest() {}

  explicit GetSecretParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (withDecryption) {
      res["WithDecryption"] = boost::any(*withDecryption);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      names = make_shared<string>(boost::any_cast<string>(m["Names"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WithDecryption") != m.end() && !m["WithDecryption"].empty()) {
      withDecryption = make_shared<bool>(boost::any_cast<bool>(m["WithDecryption"]));
    }
  }


  virtual ~GetSecretParametersRequest() = default;
};
class GetSecretParametersResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> keyId{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};
  shared_ptr<string> value{};

  GetSecretParametersResponseBodyParameters() {}

  explicit GetSecretParametersResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<long>(boost::any_cast<long>(m["ParameterVersion"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~GetSecretParametersResponseBodyParameters() = default;
};
class GetSecretParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> invalidParameters{};
  shared_ptr<vector<GetSecretParametersResponseBodyParameters>> parameters{};
  shared_ptr<string> requestId{};

  GetSecretParametersResponseBody() {}

  explicit GetSecretParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invalidParameters) {
      res["InvalidParameters"] = boost::any(*invalidParameters);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvalidParameters") != m.end() && !m["InvalidParameters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvalidParameters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvalidParameters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      invalidParameters = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetSecretParametersResponseBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSecretParametersResponseBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetSecretParametersResponseBodyParameters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSecretParametersResponseBody() = default;
};
class GetSecretParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSecretParametersResponseBody> body{};

  GetSecretParametersResponse() {}

  explicit GetSecretParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSecretParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSecretParametersResponseBody>(model1);
      }
    }
  }


  virtual ~GetSecretParametersResponse() = default;
};
class GetSecretParametersByPathRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> path{};
  shared_ptr<bool> recursive{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> withDecryption{};

  GetSecretParametersByPathRequest() {}

  explicit GetSecretParametersByPathRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (recursive) {
      res["Recursive"] = boost::any(*recursive);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (withDecryption) {
      res["WithDecryption"] = boost::any(*withDecryption);
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
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Recursive") != m.end() && !m["Recursive"].empty()) {
      recursive = make_shared<bool>(boost::any_cast<bool>(m["Recursive"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WithDecryption") != m.end() && !m["WithDecryption"].empty()) {
      withDecryption = make_shared<bool>(boost::any_cast<bool>(m["WithDecryption"]));
    }
  }


  virtual ~GetSecretParametersByPathRequest() = default;
};
class GetSecretParametersByPathResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> keyId{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> shareType{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};
  shared_ptr<string> value{};

  GetSecretParametersByPathResponseBodyParameters() {}

  explicit GetSecretParametersByPathResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
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
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<long>(boost::any_cast<long>(m["ParameterVersion"]));
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


  virtual ~GetSecretParametersByPathResponseBodyParameters() = default;
};
class GetSecretParametersByPathResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<GetSecretParametersByPathResponseBodyParameters>> parameters{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetSecretParametersByPathResponseBody() {}

  explicit GetSecretParametersByPathResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<GetSecretParametersByPathResponseBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSecretParametersByPathResponseBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetSecretParametersByPathResponseBodyParameters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetSecretParametersByPathResponseBody() = default;
};
class GetSecretParametersByPathResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSecretParametersByPathResponseBody> body{};

  GetSecretParametersByPathResponse() {}

  explicit GetSecretParametersByPathResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSecretParametersByPathResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSecretParametersByPathResponseBody>(model1);
      }
    }
  }


  virtual ~GetSecretParametersByPathResponse() = default;
};
class GetServiceSettingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetServiceSettingsRequest() {}

  explicit GetServiceSettingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetServiceSettingsRequest() = default;
};
class GetServiceSettingsResponseBodyServiceSettings : public Darabonba::Model {
public:
  shared_ptr<string> deliveryOssBucketName{};
  shared_ptr<bool> deliveryOssEnabled{};
  shared_ptr<string> deliveryOssKeyPrefix{};
  shared_ptr<bool> deliverySlsEnabled{};
  shared_ptr<string> deliverySlsProjectName{};
  shared_ptr<string> rdcEnterpriseId{};

  GetServiceSettingsResponseBodyServiceSettings() {}

  explicit GetServiceSettingsResponseBodyServiceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryOssBucketName) {
      res["DeliveryOssBucketName"] = boost::any(*deliveryOssBucketName);
    }
    if (deliveryOssEnabled) {
      res["DeliveryOssEnabled"] = boost::any(*deliveryOssEnabled);
    }
    if (deliveryOssKeyPrefix) {
      res["DeliveryOssKeyPrefix"] = boost::any(*deliveryOssKeyPrefix);
    }
    if (deliverySlsEnabled) {
      res["DeliverySlsEnabled"] = boost::any(*deliverySlsEnabled);
    }
    if (deliverySlsProjectName) {
      res["DeliverySlsProjectName"] = boost::any(*deliverySlsProjectName);
    }
    if (rdcEnterpriseId) {
      res["RdcEnterpriseId"] = boost::any(*rdcEnterpriseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryOssBucketName") != m.end() && !m["DeliveryOssBucketName"].empty()) {
      deliveryOssBucketName = make_shared<string>(boost::any_cast<string>(m["DeliveryOssBucketName"]));
    }
    if (m.find("DeliveryOssEnabled") != m.end() && !m["DeliveryOssEnabled"].empty()) {
      deliveryOssEnabled = make_shared<bool>(boost::any_cast<bool>(m["DeliveryOssEnabled"]));
    }
    if (m.find("DeliveryOssKeyPrefix") != m.end() && !m["DeliveryOssKeyPrefix"].empty()) {
      deliveryOssKeyPrefix = make_shared<string>(boost::any_cast<string>(m["DeliveryOssKeyPrefix"]));
    }
    if (m.find("DeliverySlsEnabled") != m.end() && !m["DeliverySlsEnabled"].empty()) {
      deliverySlsEnabled = make_shared<bool>(boost::any_cast<bool>(m["DeliverySlsEnabled"]));
    }
    if (m.find("DeliverySlsProjectName") != m.end() && !m["DeliverySlsProjectName"].empty()) {
      deliverySlsProjectName = make_shared<string>(boost::any_cast<string>(m["DeliverySlsProjectName"]));
    }
    if (m.find("RdcEnterpriseId") != m.end() && !m["RdcEnterpriseId"].empty()) {
      rdcEnterpriseId = make_shared<string>(boost::any_cast<string>(m["RdcEnterpriseId"]));
    }
  }


  virtual ~GetServiceSettingsResponseBodyServiceSettings() = default;
};
class GetServiceSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetServiceSettingsResponseBodyServiceSettings>> serviceSettings{};

  GetServiceSettingsResponseBody() {}

  explicit GetServiceSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceSettings) {
      vector<boost::any> temp1;
      for(auto item1:*serviceSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceSettings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceSettings") != m.end() && !m["ServiceSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceSettings"].type()) {
        vector<GetServiceSettingsResponseBodyServiceSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceSettingsResponseBodyServiceSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceSettings = make_shared<vector<GetServiceSettingsResponseBodyServiceSettings>>(expect1);
      }
    }
  }


  virtual ~GetServiceSettingsResponseBody() = default;
};
class GetServiceSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceSettingsResponseBody> body{};

  GetServiceSettingsResponse() {}

  explicit GetServiceSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceSettingsResponse() = default;
};
class GetTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};

  GetTemplateRequest() {}

  explicit GetTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTemplateRequest() = default;
};
class GetTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<bool> hasTrigger{};
  shared_ptr<string> hash{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateType{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};
  shared_ptr<string> versionName{};

  GetTemplateResponseBodyTemplate() {}

  explicit GetTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hasTrigger) {
      res["HasTrigger"] = boost::any(*hasTrigger);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
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
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
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
    if (m.find("HasTrigger") != m.end() && !m["HasTrigger"].empty()) {
      hasTrigger = make_shared<bool>(boost::any_cast<bool>(m["HasTrigger"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
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
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetTemplateResponseBodyTemplate() = default;
};
class GetTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> requestId{};
  shared_ptr<GetTemplateResponseBodyTemplate> template_{};

  GetTemplateResponseBody() {}

  explicit GetTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<GetTemplateResponseBodyTemplate>(model1);
      }
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
        GetTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateResponse() = default;
};
class GetTemplateParameterConstraintsRequest : public Darabonba::Model {
public:
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateContent{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  GetTemplateParameterConstraintsRequest() {}

  explicit GetTemplateParameterConstraintsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
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
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
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
class GetTemplateParameterConstraintsResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> parameterConstraints{};
  shared_ptr<string> requestId{};

  GetTemplateParameterConstraintsResponseBody() {}

  explicit GetTemplateParameterConstraintsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterConstraints) {
      res["ParameterConstraints"] = boost::any(*parameterConstraints);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterConstraints") != m.end() && !m["ParameterConstraints"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ParameterConstraints"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameterConstraints = make_shared<map<string, boost::any>>(toMap1);
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
        GetTemplateParameterConstraintsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateParameterConstraintsResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateParameterConstraintsResponse() = default;
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
class ListApplicationGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> deployRegionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceProduct{};
  shared_ptr<string> resourceType{};

  ListApplicationGroupsRequest() {}

  explicit ListApplicationGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (deployRegionId) {
      res["DeployRegionId"] = boost::any(*deployRegionId);
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
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceProduct) {
      res["ResourceProduct"] = boost::any(*resourceProduct);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("DeployRegionId") != m.end() && !m["DeployRegionId"].empty()) {
      deployRegionId = make_shared<string>(boost::any_cast<string>(m["DeployRegionId"]));
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
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceProduct") != m.end() && !m["ResourceProduct"].empty()) {
      resourceProduct = make_shared<string>(boost::any_cast<string>(m["ResourceProduct"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListApplicationGroupsRequest() = default;
};
class ListApplicationGroupsResponseBodyApplicationGroups : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> cmsGroupId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> deployParameters{};
  shared_ptr<string> deployRegionId{};
  shared_ptr<string> description{};
  shared_ptr<string> errorDetail{};
  shared_ptr<string> errorType{};
  shared_ptr<string> importTagKey{};
  shared_ptr<string> importTagValue{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> updateDate{};

  ListApplicationGroupsResponseBodyApplicationGroups() {}

  explicit ListApplicationGroupsResponseBodyApplicationGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (cmsGroupId) {
      res["CmsGroupId"] = boost::any(*cmsGroupId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (deployParameters) {
      res["DeployParameters"] = boost::any(*deployParameters);
    }
    if (deployRegionId) {
      res["DeployRegionId"] = boost::any(*deployRegionId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (errorDetail) {
      res["ErrorDetail"] = boost::any(*errorDetail);
    }
    if (errorType) {
      res["ErrorType"] = boost::any(*errorType);
    }
    if (importTagKey) {
      res["ImportTagKey"] = boost::any(*importTagKey);
    }
    if (importTagValue) {
      res["ImportTagValue"] = boost::any(*importTagValue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("CmsGroupId") != m.end() && !m["CmsGroupId"].empty()) {
      cmsGroupId = make_shared<string>(boost::any_cast<string>(m["CmsGroupId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DeployParameters") != m.end() && !m["DeployParameters"].empty()) {
      deployParameters = make_shared<string>(boost::any_cast<string>(m["DeployParameters"]));
    }
    if (m.find("DeployRegionId") != m.end() && !m["DeployRegionId"].empty()) {
      deployRegionId = make_shared<string>(boost::any_cast<string>(m["DeployRegionId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErrorDetail") != m.end() && !m["ErrorDetail"].empty()) {
      errorDetail = make_shared<string>(boost::any_cast<string>(m["ErrorDetail"]));
    }
    if (m.find("ErrorType") != m.end() && !m["ErrorType"].empty()) {
      errorType = make_shared<string>(boost::any_cast<string>(m["ErrorType"]));
    }
    if (m.find("ImportTagKey") != m.end() && !m["ImportTagKey"].empty()) {
      importTagKey = make_shared<string>(boost::any_cast<string>(m["ImportTagKey"]));
    }
    if (m.find("ImportTagValue") != m.end() && !m["ImportTagValue"].empty()) {
      importTagValue = make_shared<string>(boost::any_cast<string>(m["ImportTagValue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListApplicationGroupsResponseBodyApplicationGroups() = default;
};
class ListApplicationGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationGroupsResponseBodyApplicationGroups>> applicationGroups{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListApplicationGroupsResponseBody() {}

  explicit ListApplicationGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationGroups) {
      vector<boost::any> temp1;
      for(auto item1:*applicationGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationGroups"] = boost::any(temp1);
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
    if (m.find("ApplicationGroups") != m.end() && !m["ApplicationGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationGroups"].type()) {
        vector<ListApplicationGroupsResponseBodyApplicationGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationGroupsResponseBodyApplicationGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationGroups = make_shared<vector<ListApplicationGroupsResponseBodyApplicationGroups>>(expect1);
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


  virtual ~ListApplicationGroupsResponseBody() = default;
};
class ListApplicationGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplicationGroupsResponseBody> body{};

  ListApplicationGroupsResponse() {}

  explicit ListApplicationGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplicationGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicationGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicationGroupsResponse() = default;
};
class ListApplicationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> names{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, boost::any>> tags{};

  ListApplicationsRequest() {}

  explicit ListApplicationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      names = make_shared<string>(boost::any_cast<string>(m["Names"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListApplicationsRequest() = default;
};
class ListApplicationsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> names{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tagsShrink{};

  ListApplicationsShrinkRequest() {}

  explicit ListApplicationsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      names = make_shared<string>(boost::any_cast<string>(m["Names"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~ListApplicationsShrinkRequest() = default;
};
class ListApplicationsResponseBodyApplications : public Darabonba::Model {
public:
  shared_ptr<string> applicationType{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> updateDate{};

  ListApplicationsResponseBodyApplications() {}

  explicit ListApplicationsResponseBodyApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListApplicationsResponseBodyApplications() = default;
};
class ListApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationsResponseBodyApplications>> applications{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListApplicationsResponseBody() {}

  explicit ListApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
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
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListApplicationsResponseBodyApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsResponseBodyApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListApplicationsResponseBodyApplications>>(expect1);
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


  virtual ~ListApplicationsResponseBody() = default;
};
class ListApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplicationsResponseBody> body{};

  ListApplicationsResponse() {}

  explicit ListApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicationsResponse() = default;
};
class ListExecutionLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> executionId{};
  shared_ptr<string> logType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> taskExecutionId{};

  ListExecutionLogsRequest() {}

  explicit ListExecutionLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~ListExecutionLogsRequest() = default;
};
class ListExecutionLogsResponseBodyExecutionLogs : public Darabonba::Model {
public:
  shared_ptr<string> logType{};
  shared_ptr<string> message{};
  shared_ptr<string> taskExecutionId{};
  shared_ptr<string> timestamp{};

  ListExecutionLogsResponseBodyExecutionLogs() {}

  explicit ListExecutionLogsResponseBodyExecutionLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListExecutionLogsResponseBodyExecutionLogs() = default;
};
class ListExecutionLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListExecutionLogsResponseBodyExecutionLogs>> executionLogs{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListExecutionLogsResponseBody() {}

  explicit ListExecutionLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
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
        vector<ListExecutionLogsResponseBodyExecutionLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExecutionLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExecutionLogsResponseBodyExecutionLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        executionLogs = make_shared<vector<ListExecutionLogsResponseBodyExecutionLogs>>(expect1);
      }
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
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


  virtual ~ListExecutionLogsResponseBody() = default;
};
class ListExecutionLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExecutionLogsResponseBody> body{};

  ListExecutionLogsResponse() {}

  explicit ListExecutionLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExecutionLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExecutionLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExecutionLogsResponse() = default;
};
class ListExecutionRiskyTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> templateName{};

  ListExecutionRiskyTasksRequest() {}

  explicit ListExecutionRiskyTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListExecutionRiskyTasksRequest() = default;
};
class ListExecutionRiskyTasksResponseBodyRiskyTasks : public Darabonba::Model {
public:
  shared_ptr<string> API{};
  shared_ptr<string> service{};
  shared_ptr<vector<string>> task{};
  shared_ptr<vector<string>> template_{};

  ListExecutionRiskyTasksResponseBodyRiskyTasks() {}

  explicit ListExecutionRiskyTasksResponseBodyRiskyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (API) {
      res["API"] = boost::any(*API);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("API") != m.end() && !m["API"].empty()) {
      API = make_shared<string>(boost::any_cast<string>(m["API"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Task"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Task"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      task = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Template"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Template"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      template_ = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListExecutionRiskyTasksResponseBodyRiskyTasks() = default;
};
class ListExecutionRiskyTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListExecutionRiskyTasksResponseBodyRiskyTasks>> riskyTasks{};

  ListExecutionRiskyTasksResponseBody() {}

  explicit ListExecutionRiskyTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (riskyTasks) {
      vector<boost::any> temp1;
      for(auto item1:*riskyTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RiskyTasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RiskyTasks") != m.end() && !m["RiskyTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["RiskyTasks"].type()) {
        vector<ListExecutionRiskyTasksResponseBodyRiskyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RiskyTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExecutionRiskyTasksResponseBodyRiskyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        riskyTasks = make_shared<vector<ListExecutionRiskyTasksResponseBodyRiskyTasks>>(expect1);
      }
    }
  }


  virtual ~ListExecutionRiskyTasksResponseBody() = default;
};
class ListExecutionRiskyTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExecutionRiskyTasksResponseBody> body{};

  ListExecutionRiskyTasksResponse() {}

  explicit ListExecutionRiskyTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExecutionRiskyTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExecutionRiskyTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListExecutionRiskyTasksResponse() = default;
};
class ListExecutionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> categories{};
  shared_ptr<string> category{};
  shared_ptr<string> depth{};
  shared_ptr<string> description{};
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
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceTemplateName{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> startDateAfter{};
  shared_ptr<string> startDateBefore{};
  shared_ptr<string> status{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> templateName{};

  ListExecutionsRequest() {}

  explicit ListExecutionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (depth) {
      res["Depth"] = boost::any(*depth);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceTemplateName) {
      res["ResourceTemplateName"] = boost::any(*resourceTemplateName);
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
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      categories = make_shared<string>(boost::any_cast<string>(m["Categories"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Depth") != m.end() && !m["Depth"].empty()) {
      depth = make_shared<string>(boost::any_cast<string>(m["Depth"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceTemplateName") != m.end() && !m["ResourceTemplateName"].empty()) {
      resourceTemplateName = make_shared<string>(boost::any_cast<string>(m["ResourceTemplateName"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ListExecutionsRequest() = default;
};
class ListExecutionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> categories{};
  shared_ptr<string> category{};
  shared_ptr<string> depth{};
  shared_ptr<string> description{};
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
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceTemplateName{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> startDateAfter{};
  shared_ptr<string> startDateBefore{};
  shared_ptr<string> status{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> templateName{};

  ListExecutionsShrinkRequest() {}

  explicit ListExecutionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (depth) {
      res["Depth"] = boost::any(*depth);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceTemplateName) {
      res["ResourceTemplateName"] = boost::any(*resourceTemplateName);
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
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      categories = make_shared<string>(boost::any_cast<string>(m["Categories"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Depth") != m.end() && !m["Depth"].empty()) {
      depth = make_shared<string>(boost::any_cast<string>(m["Depth"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceTemplateName") != m.end() && !m["ResourceTemplateName"].empty()) {
      resourceTemplateName = make_shared<string>(boost::any_cast<string>(m["ResourceTemplateName"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ListExecutionsShrinkRequest() = default;
};
class ListExecutionsResponseBodyExecutionsCurrentTasks : public Darabonba::Model {
public:
  shared_ptr<string> taskAction{};
  shared_ptr<string> taskExecutionId{};
  shared_ptr<string> taskName{};

  ListExecutionsResponseBodyExecutionsCurrentTasks() {}

  explicit ListExecutionsResponseBodyExecutionsCurrentTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListExecutionsResponseBodyExecutionsCurrentTasks() = default;
};
class ListExecutionsResponseBodyExecutions : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<map<string, boost::any>> counters{};
  shared_ptr<string> createDate{};
  shared_ptr<vector<ListExecutionsResponseBodyExecutionsCurrentTasks>> currentTasks{};
  shared_ptr<string> description{};
  shared_ptr<string> endDate{};
  shared_ptr<string> executedBy{};
  shared_ptr<string> executionId{};
  shared_ptr<bool> isParent{};
  shared_ptr<string> lastSuccessfulTriggerTime{};
  shared_ptr<string> lastTriggerOutputs{};
  shared_ptr<string> lastTriggerStatus{};
  shared_ptr<string> lastTriggerStatusMessage{};
  shared_ptr<string> lastTriggerTime{};
  shared_ptr<string> mode{};
  shared_ptr<string> nextScheduleTime{};
  shared_ptr<string> outputs{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> parentExecutionId{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceStatus{};
  shared_ptr<string> safetyCheck{};
  shared_ptr<string> startDate{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};
  shared_ptr<string> statusReason{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> targets{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> waitingStatus{};

  ListExecutionsResponseBodyExecutions() {}

  explicit ListExecutionsResponseBodyExecutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
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
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (lastSuccessfulTriggerTime) {
      res["LastSuccessfulTriggerTime"] = boost::any(*lastSuccessfulTriggerTime);
    }
    if (lastTriggerOutputs) {
      res["LastTriggerOutputs"] = boost::any(*lastTriggerOutputs);
    }
    if (lastTriggerStatus) {
      res["LastTriggerStatus"] = boost::any(*lastTriggerStatus);
    }
    if (lastTriggerStatusMessage) {
      res["LastTriggerStatusMessage"] = boost::any(*lastTriggerStatusMessage);
    }
    if (lastTriggerTime) {
      res["LastTriggerTime"] = boost::any(*lastTriggerTime);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (nextScheduleTime) {
      res["NextScheduleTime"] = boost::any(*nextScheduleTime);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
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
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targets) {
      res["Targets"] = boost::any(*targets);
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
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Counters") != m.end() && !m["Counters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Counters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      counters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("CurrentTasks") != m.end() && !m["CurrentTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["CurrentTasks"].type()) {
        vector<ListExecutionsResponseBodyExecutionsCurrentTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CurrentTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExecutionsResponseBodyExecutionsCurrentTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        currentTasks = make_shared<vector<ListExecutionsResponseBodyExecutionsCurrentTasks>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
    if (m.find("LastSuccessfulTriggerTime") != m.end() && !m["LastSuccessfulTriggerTime"].empty()) {
      lastSuccessfulTriggerTime = make_shared<string>(boost::any_cast<string>(m["LastSuccessfulTriggerTime"]));
    }
    if (m.find("LastTriggerOutputs") != m.end() && !m["LastTriggerOutputs"].empty()) {
      lastTriggerOutputs = make_shared<string>(boost::any_cast<string>(m["LastTriggerOutputs"]));
    }
    if (m.find("LastTriggerStatus") != m.end() && !m["LastTriggerStatus"].empty()) {
      lastTriggerStatus = make_shared<string>(boost::any_cast<string>(m["LastTriggerStatus"]));
    }
    if (m.find("LastTriggerStatusMessage") != m.end() && !m["LastTriggerStatusMessage"].empty()) {
      lastTriggerStatusMessage = make_shared<string>(boost::any_cast<string>(m["LastTriggerStatusMessage"]));
    }
    if (m.find("LastTriggerTime") != m.end() && !m["LastTriggerTime"].empty()) {
      lastTriggerTime = make_shared<string>(boost::any_cast<string>(m["LastTriggerTime"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("NextScheduleTime") != m.end() && !m["NextScheduleTime"].empty()) {
      nextScheduleTime = make_shared<string>(boost::any_cast<string>(m["NextScheduleTime"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ParentExecutionId") != m.end() && !m["ParentExecutionId"].empty()) {
      parentExecutionId = make_shared<string>(boost::any_cast<string>(m["ParentExecutionId"]));
    }
    if (m.find("RamRole") != m.end() && !m["RamRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["RamRole"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
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
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      targets = make_shared<string>(boost::any_cast<string>(m["Targets"]));
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


  virtual ~ListExecutionsResponseBodyExecutions() = default;
};
class ListExecutionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListExecutionsResponseBodyExecutions>> executions{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListExecutionsResponseBody() {}

  explicit ListExecutionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Executions") != m.end() && !m["Executions"].empty()) {
      if (typeid(vector<boost::any>) == m["Executions"].type()) {
        vector<ListExecutionsResponseBodyExecutions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Executions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExecutionsResponseBodyExecutions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        executions = make_shared<vector<ListExecutionsResponseBodyExecutions>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListExecutionsResponseBody() = default;
};
class ListExecutionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExecutionsResponseBody> body{};

  ListExecutionsResponse() {}

  explicit ListExecutionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExecutionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExecutionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExecutionsResponse() = default;
};
class ListInstancePackageStatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateNames{};

  ListInstancePackageStatesRequest() {}

  explicit ListInstancePackageStatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (templateNames) {
      res["TemplateNames"] = boost::any(*templateNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("TemplateNames") != m.end() && !m["TemplateNames"].empty()) {
      templateNames = make_shared<string>(boost::any_cast<string>(m["TemplateNames"]));
    }
  }


  virtual ~ListInstancePackageStatesRequest() = default;
};
class ListInstancePackageStatesResponseBodyPackageStates : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> parameters{};
  shared_ptr<string> publisher{};
  shared_ptr<string> templateCategory{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> templateVersionName{};
  shared_ptr<string> updateTime{};

  ListInstancePackageStatesResponseBodyPackageStates() {}

  explicit ListInstancePackageStatesResponseBodyPackageStates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (publisher) {
      res["Publisher"] = boost::any(*publisher);
    }
    if (templateCategory) {
      res["TemplateCategory"] = boost::any(*templateCategory);
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
    if (templateVersionName) {
      res["TemplateVersionName"] = boost::any(*templateVersionName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Publisher") != m.end() && !m["Publisher"].empty()) {
      publisher = make_shared<string>(boost::any_cast<string>(m["Publisher"]));
    }
    if (m.find("TemplateCategory") != m.end() && !m["TemplateCategory"].empty()) {
      templateCategory = make_shared<string>(boost::any_cast<string>(m["TemplateCategory"]));
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
    if (m.find("TemplateVersionName") != m.end() && !m["TemplateVersionName"].empty()) {
      templateVersionName = make_shared<string>(boost::any_cast<string>(m["TemplateVersionName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListInstancePackageStatesResponseBodyPackageStates() = default;
};
class ListInstancePackageStatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListInstancePackageStatesResponseBodyPackageStates>> packageStates{};
  shared_ptr<string> requestId{};

  ListInstancePackageStatesResponseBody() {}

  explicit ListInstancePackageStatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (packageStates) {
      vector<boost::any> temp1;
      for(auto item1:*packageStates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PackageStates"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PackageStates") != m.end() && !m["PackageStates"].empty()) {
      if (typeid(vector<boost::any>) == m["PackageStates"].type()) {
        vector<ListInstancePackageStatesResponseBodyPackageStates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PackageStates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancePackageStatesResponseBodyPackageStates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        packageStates = make_shared<vector<ListInstancePackageStatesResponseBodyPackageStates>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInstancePackageStatesResponseBody() = default;
};
class ListInstancePackageStatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancePackageStatesResponseBody> body{};

  ListInstancePackageStatesResponse() {}

  explicit ListInstancePackageStatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancePackageStatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancePackageStatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancePackageStatesResponse() = default;
};
class ListInstancePatchStatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListInstancePatchStatesRequest() {}

  explicit ListInstancePatchStatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~ListInstancePatchStatesRequest() = default;
};
class ListInstancePatchStatesResponseBodyInstancePatchStates : public Darabonba::Model {
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

  ListInstancePatchStatesResponseBodyInstancePatchStates() {}

  explicit ListInstancePatchStatesResponseBodyInstancePatchStates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstancePatchStatesResponseBodyInstancePatchStates() = default;
};
class ListInstancePatchStatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancePatchStatesResponseBodyInstancePatchStates>> instancePatchStates{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListInstancePatchStatesResponseBody() {}

  explicit ListInstancePatchStatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListInstancePatchStatesResponseBodyInstancePatchStates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstancePatchStates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancePatchStatesResponseBodyInstancePatchStates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instancePatchStates = make_shared<vector<ListInstancePatchStatesResponseBodyInstancePatchStates>>(expect1);
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


  virtual ~ListInstancePatchStatesResponseBody() = default;
};
class ListInstancePatchStatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancePatchStatesResponseBody> body{};

  ListInstancePatchStatesResponse() {}

  explicit ListInstancePatchStatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancePatchStatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancePatchStatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancePatchStatesResponse() = default;
};
class ListInstancePatchesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> patchStatuses{};
  shared_ptr<string> regionId{};

  ListInstancePatchesRequest() {}

  explicit ListInstancePatchesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (patchStatuses) {
      res["PatchStatuses"] = boost::any(*patchStatuses);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PatchStatuses") != m.end() && !m["PatchStatuses"].empty()) {
      patchStatuses = make_shared<string>(boost::any_cast<string>(m["PatchStatuses"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListInstancePatchesRequest() = default;
};
class ListInstancePatchesResponseBodyPatches : public Darabonba::Model {
public:
  shared_ptr<string> classification{};
  shared_ptr<string> installedTime{};
  shared_ptr<string> KBId{};
  shared_ptr<string> severity{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};

  ListInstancePatchesResponseBodyPatches() {}

  explicit ListInstancePatchesResponseBodyPatches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstancePatchesResponseBodyPatches() = default;
};
class ListInstancePatchesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListInstancePatchesResponseBodyPatches>> patches{};
  shared_ptr<string> requestId{};

  ListInstancePatchesResponseBody() {}

  explicit ListInstancePatchesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListInstancePatchesResponseBodyPatches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Patches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancePatchesResponseBodyPatches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        patches = make_shared<vector<ListInstancePatchesResponseBodyPatches>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInstancePatchesResponseBody() = default;
};
class ListInstancePatchesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancePatchesResponseBody> body{};

  ListInstancePatchesResponse() {}

  explicit ListInstancePatchesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancePatchesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancePatchesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancePatchesResponse() = default;
};
class ListInventoryEntriesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> value{};

  ListInventoryEntriesRequestFilter() {}

  explicit ListInventoryEntriesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInventoryEntriesRequestFilter() = default;
};
class ListInventoryEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListInventoryEntriesRequestFilter>> filter{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> typeName_{};

  ListInventoryEntriesRequest() {}

  explicit ListInventoryEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListInventoryEntriesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInventoryEntriesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListInventoryEntriesRequestFilter>>(expect1);
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


  virtual ~ListInventoryEntriesRequest() = default;
};
class ListInventoryEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> captureTime{};
  shared_ptr<vector<map<string, boost::any>>> entries{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> typeName_{};

  ListInventoryEntriesResponseBody() {}

  explicit ListInventoryEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInventoryEntriesResponseBody() = default;
};
class ListInventoryEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInventoryEntriesResponseBody> body{};

  ListInventoryEntriesResponse() {}

  explicit ListInventoryEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInventoryEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInventoryEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInventoryEntriesResponse() = default;
};
class ListOpsItemsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> value{};

  ListOpsItemsRequestFilter() {}

  explicit ListOpsItemsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListOpsItemsRequestFilter() = default;
};
class ListOpsItemsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListOpsItemsRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, boost::any>> resourceTags{};
  shared_ptr<map<string, boost::any>> tags{};

  ListOpsItemsRequest() {}

  explicit ListOpsItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
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
    if (resourceTags) {
      res["ResourceTags"] = boost::any(*resourceTags);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListOpsItemsRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOpsItemsRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListOpsItemsRequestFilter>>(expect1);
      }
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
    if (m.find("ResourceTags") != m.end() && !m["ResourceTags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceTags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceTags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListOpsItemsRequest() = default;
};
class ListOpsItemsShrinkRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> value{};

  ListOpsItemsShrinkRequestFilter() {}

  explicit ListOpsItemsShrinkRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListOpsItemsShrinkRequestFilter() = default;
};
class ListOpsItemsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListOpsItemsShrinkRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceTagsShrink{};
  shared_ptr<string> tagsShrink{};

  ListOpsItemsShrinkRequest() {}

  explicit ListOpsItemsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
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
    if (resourceTagsShrink) {
      res["ResourceTags"] = boost::any(*resourceTagsShrink);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListOpsItemsShrinkRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOpsItemsShrinkRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListOpsItemsShrinkRequestFilter>>(expect1);
      }
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
    if (m.find("ResourceTags") != m.end() && !m["ResourceTags"].empty()) {
      resourceTagsShrink = make_shared<string>(boost::any_cast<string>(m["ResourceTags"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~ListOpsItemsShrinkRequest() = default;
};
class ListOpsItemsResponseBodyOpsItems : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> createDate{};
  shared_ptr<string> opsItemId{};
  shared_ptr<long> priority{};
  shared_ptr<vector<string>> resources{};
  shared_ptr<string> severity{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> title{};
  shared_ptr<string> updateDate{};

  ListOpsItemsResponseBodyOpsItems() {}

  explicit ListOpsItemsResponseBodyOpsItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (opsItemId) {
      res["OpsItemId"] = boost::any(*opsItemId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("OpsItemId") != m.end() && !m["OpsItemId"].empty()) {
      opsItemId = make_shared<string>(boost::any_cast<string>(m["OpsItemId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
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
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListOpsItemsResponseBodyOpsItems() = default;
};
class ListOpsItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListOpsItemsResponseBodyOpsItems>> opsItems{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListOpsItemsResponseBody() {}

  explicit ListOpsItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (opsItems) {
      vector<boost::any> temp1;
      for(auto item1:*opsItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OpsItems"] = boost::any(temp1);
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
    if (m.find("OpsItems") != m.end() && !m["OpsItems"].empty()) {
      if (typeid(vector<boost::any>) == m["OpsItems"].type()) {
        vector<ListOpsItemsResponseBodyOpsItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OpsItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOpsItemsResponseBodyOpsItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        opsItems = make_shared<vector<ListOpsItemsResponseBodyOpsItems>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListOpsItemsResponseBody() = default;
};
class ListOpsItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOpsItemsResponseBody> body{};

  ListOpsItemsResponse() {}

  explicit ListOpsItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOpsItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOpsItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOpsItemsResponse() = default;
};
class ListParameterVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> shareType{};

  ListParameterVersionsRequest() {}

  explicit ListParameterVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
  }


  virtual ~ListParameterVersionsRequest() = default;
};
class ListParameterVersionsResponseBodyParameterVersions : public Darabonba::Model {
public:
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};
  shared_ptr<string> value{};

  ListParameterVersionsResponseBodyParameterVersions() {}

  explicit ListParameterVersionsResponseBodyParameterVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
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
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<long>(boost::any_cast<long>(m["ParameterVersion"]));
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


  virtual ~ListParameterVersionsResponseBodyParameterVersions() = default;
};
class ListParameterVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListParameterVersionsResponseBodyParameterVersions>> parameterVersions{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> type{};

  ListParameterVersionsResponseBody() {}

  explicit ListParameterVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (parameterVersions) {
      vector<boost::any> temp1;
      for(auto item1:*parameterVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterVersions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ParameterVersions") != m.end() && !m["ParameterVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterVersions"].type()) {
        vector<ListParameterVersionsResponseBodyParameterVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListParameterVersionsResponseBodyParameterVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterVersions = make_shared<vector<ListParameterVersionsResponseBodyParameterVersions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListParameterVersionsResponseBody() = default;
};
class ListParameterVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListParameterVersionsResponseBody> body{};

  ListParameterVersionsResponse() {}

  explicit ListParameterVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListParameterVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListParameterVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListParameterVersionsResponse() = default;
};
class ListParametersRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> path{};
  shared_ptr<bool> recursive{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> type{};

  ListParametersRequest() {}

  explicit ListParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (recursive) {
      res["Recursive"] = boost::any(*recursive);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Recursive") != m.end() && !m["Recursive"].empty()) {
      recursive = make_shared<bool>(boost::any_cast<bool>(m["Recursive"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListParametersRequest() = default;
};
class ListParametersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> path{};
  shared_ptr<bool> recursive{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> type{};

  ListParametersShrinkRequest() {}

  explicit ListParametersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (recursive) {
      res["Recursive"] = boost::any(*recursive);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Recursive") != m.end() && !m["Recursive"].empty()) {
      recursive = make_shared<bool>(boost::any_cast<bool>(m["Recursive"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListParametersShrinkRequest() = default;
};
class ListParametersResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> parameterVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  ListParametersResponseBodyParameters() {}

  explicit ListParametersResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~ListParametersResponseBodyParameters() = default;
};
class ListParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListParametersResponseBodyParameters>> parameters{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListParametersResponseBody() {}

  explicit ListParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListParametersResponseBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListParametersResponseBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<ListParametersResponseBodyParameters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListParametersResponseBody() = default;
};
class ListParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListParametersResponseBody> body{};

  ListParametersResponse() {}

  explicit ListParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListParametersResponseBody>(model1);
      }
    }
  }


  virtual ~ListParametersResponse() = default;
};
class ListPatchBaselinesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListPatchBaselinesRequestTags() {}

  explicit ListPatchBaselinesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListPatchBaselinesRequestTags() = default;
};
class ListPatchBaselinesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> approvedPatches{};
  shared_ptr<bool> approvedPatchesEnableNonSecurity{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<vector<string>> sources{};
  shared_ptr<vector<ListPatchBaselinesRequestTags>> tags{};

  ListPatchBaselinesRequest() {}

  explicit ListPatchBaselinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvedPatches) {
      res["ApprovedPatches"] = boost::any(*approvedPatches);
    }
    if (approvedPatchesEnableNonSecurity) {
      res["ApprovedPatchesEnableNonSecurity"] = boost::any(*approvedPatchesEnableNonSecurity);
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
    if (operationSystem) {
      res["OperationSystem"] = boost::any(*operationSystem);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
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
    if (m.find("ApprovedPatches") != m.end() && !m["ApprovedPatches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApprovedPatches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApprovedPatches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      approvedPatches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApprovedPatchesEnableNonSecurity") != m.end() && !m["ApprovedPatchesEnableNonSecurity"].empty()) {
      approvedPatchesEnableNonSecurity = make_shared<bool>(boost::any_cast<bool>(m["ApprovedPatchesEnableNonSecurity"]));
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
    if (m.find("OperationSystem") != m.end() && !m["OperationSystem"].empty()) {
      operationSystem = make_shared<string>(boost::any_cast<string>(m["OperationSystem"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Sources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Sources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListPatchBaselinesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPatchBaselinesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListPatchBaselinesRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListPatchBaselinesRequest() = default;
};
class ListPatchBaselinesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvedPatchesShrink{};
  shared_ptr<bool> approvedPatchesEnableNonSecurity{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> sourcesShrink{};
  shared_ptr<string> tagsShrink{};

  ListPatchBaselinesShrinkRequest() {}

  explicit ListPatchBaselinesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvedPatchesShrink) {
      res["ApprovedPatches"] = boost::any(*approvedPatchesShrink);
    }
    if (approvedPatchesEnableNonSecurity) {
      res["ApprovedPatchesEnableNonSecurity"] = boost::any(*approvedPatchesEnableNonSecurity);
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
    if (operationSystem) {
      res["OperationSystem"] = boost::any(*operationSystem);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (sourcesShrink) {
      res["Sources"] = boost::any(*sourcesShrink);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovedPatches") != m.end() && !m["ApprovedPatches"].empty()) {
      approvedPatchesShrink = make_shared<string>(boost::any_cast<string>(m["ApprovedPatches"]));
    }
    if (m.find("ApprovedPatchesEnableNonSecurity") != m.end() && !m["ApprovedPatchesEnableNonSecurity"].empty()) {
      approvedPatchesEnableNonSecurity = make_shared<bool>(boost::any_cast<bool>(m["ApprovedPatchesEnableNonSecurity"]));
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
    if (m.find("OperationSystem") != m.end() && !m["OperationSystem"].empty()) {
      operationSystem = make_shared<string>(boost::any_cast<string>(m["OperationSystem"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sourcesShrink = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~ListPatchBaselinesShrinkRequest() = default;
};
class ListPatchBaselinesResponseBodyPatchBaselinesTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListPatchBaselinesResponseBodyPatchBaselinesTags() {}

  explicit ListPatchBaselinesResponseBodyPatchBaselinesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListPatchBaselinesResponseBodyPatchBaselinesTags() = default;
};
class ListPatchBaselinesResponseBodyPatchBaselines : public Darabonba::Model {
public:
  shared_ptr<vector<string>> approvedPatches{};
  shared_ptr<bool> approvedPatchesEnableNonSecurity{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<vector<string>> sources{};
  shared_ptr<vector<ListPatchBaselinesResponseBodyPatchBaselinesTags>> tags{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  ListPatchBaselinesResponseBodyPatchBaselines() {}

  explicit ListPatchBaselinesResponseBodyPatchBaselines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvedPatches) {
      res["ApprovedPatches"] = boost::any(*approvedPatches);
    }
    if (approvedPatchesEnableNonSecurity) {
      res["ApprovedPatchesEnableNonSecurity"] = boost::any(*approvedPatchesEnableNonSecurity);
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
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operationSystem) {
      res["OperationSystem"] = boost::any(*operationSystem);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("ApprovedPatches") != m.end() && !m["ApprovedPatches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApprovedPatches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApprovedPatches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      approvedPatches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApprovedPatchesEnableNonSecurity") != m.end() && !m["ApprovedPatchesEnableNonSecurity"].empty()) {
      approvedPatchesEnableNonSecurity = make_shared<bool>(boost::any_cast<bool>(m["ApprovedPatchesEnableNonSecurity"]));
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
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperationSystem") != m.end() && !m["OperationSystem"].empty()) {
      operationSystem = make_shared<string>(boost::any_cast<string>(m["OperationSystem"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Sources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Sources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListPatchBaselinesResponseBodyPatchBaselinesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPatchBaselinesResponseBodyPatchBaselinesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListPatchBaselinesResponseBodyPatchBaselinesTags>>(expect1);
      }
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~ListPatchBaselinesResponseBodyPatchBaselines() = default;
};
class ListPatchBaselinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPatchBaselinesResponseBodyPatchBaselines>> patchBaselines{};
  shared_ptr<string> requestId{};

  ListPatchBaselinesResponseBody() {}

  explicit ListPatchBaselinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListPatchBaselinesResponseBodyPatchBaselines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PatchBaselines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPatchBaselinesResponseBodyPatchBaselines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        patchBaselines = make_shared<vector<ListPatchBaselinesResponseBodyPatchBaselines>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPatchBaselinesResponseBody() = default;
};
class ListPatchBaselinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPatchBaselinesResponseBody> body{};

  ListPatchBaselinesResponse() {}

  explicit ListPatchBaselinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPatchBaselinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPatchBaselinesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPatchBaselinesResponse() = default;
};
class ListResourceExecutionStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> executionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListResourceExecutionStatusRequest() {}

  explicit ListResourceExecutionStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  }


  virtual ~ListResourceExecutionStatusRequest() = default;
};
class ListResourceExecutionStatusResponseBodyResourceExecutionStatus : public Darabonba::Model {
public:
  shared_ptr<string> executionId{};
  shared_ptr<string> executionTime{};
  shared_ptr<string> outputs{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> status{};

  ListResourceExecutionStatusResponseBodyResourceExecutionStatus() {}

  explicit ListResourceExecutionStatusResponseBodyResourceExecutionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (executionTime) {
      res["ExecutionTime"] = boost::any(*executionTime);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("ExecutionTime") != m.end() && !m["ExecutionTime"].empty()) {
      executionTime = make_shared<string>(boost::any_cast<string>(m["ExecutionTime"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListResourceExecutionStatusResponseBodyResourceExecutionStatus() = default;
};
class ListResourceExecutionStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourceExecutionStatusResponseBodyResourceExecutionStatus>> resourceExecutionStatus{};

  ListResourceExecutionStatusResponseBody() {}

  explicit ListResourceExecutionStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceExecutionStatus) {
      vector<boost::any> temp1;
      for(auto item1:*resourceExecutionStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceExecutionStatus"] = boost::any(temp1);
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
    if (m.find("ResourceExecutionStatus") != m.end() && !m["ResourceExecutionStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceExecutionStatus"].type()) {
        vector<ListResourceExecutionStatusResponseBodyResourceExecutionStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceExecutionStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceExecutionStatusResponseBodyResourceExecutionStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceExecutionStatus = make_shared<vector<ListResourceExecutionStatusResponseBodyResourceExecutionStatus>>(expect1);
      }
    }
  }


  virtual ~ListResourceExecutionStatusResponseBody() = default;
};
class ListResourceExecutionStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceExecutionStatusResponseBody> body{};

  ListResourceExecutionStatusResponse() {}

  explicit ListResourceExecutionStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceExecutionStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceExecutionStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceExecutionStatusResponse() = default;
};
class ListSecretParameterVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> shareType{};
  shared_ptr<bool> withDecryption{};

  ListSecretParameterVersionsRequest() {}

  explicit ListSecretParameterVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (withDecryption) {
      res["WithDecryption"] = boost::any(*withDecryption);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("WithDecryption") != m.end() && !m["WithDecryption"].empty()) {
      withDecryption = make_shared<bool>(boost::any_cast<bool>(m["WithDecryption"]));
    }
  }


  virtual ~ListSecretParameterVersionsRequest() = default;
};
class ListSecretParameterVersionsResponseBodyParameterVersions : public Darabonba::Model {
public:
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};
  shared_ptr<string> value{};

  ListSecretParameterVersionsResponseBodyParameterVersions() {}

  explicit ListSecretParameterVersionsResponseBodyParameterVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
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
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<long>(boost::any_cast<long>(m["ParameterVersion"]));
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


  virtual ~ListSecretParameterVersionsResponseBodyParameterVersions() = default;
};
class ListSecretParameterVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListSecretParameterVersionsResponseBodyParameterVersions>> parameterVersions{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> type{};

  ListSecretParameterVersionsResponseBody() {}

  explicit ListSecretParameterVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (parameterVersions) {
      vector<boost::any> temp1;
      for(auto item1:*parameterVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterVersions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ParameterVersions") != m.end() && !m["ParameterVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterVersions"].type()) {
        vector<ListSecretParameterVersionsResponseBodyParameterVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecretParameterVersionsResponseBodyParameterVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterVersions = make_shared<vector<ListSecretParameterVersionsResponseBodyParameterVersions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListSecretParameterVersionsResponseBody() = default;
};
class ListSecretParameterVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSecretParameterVersionsResponseBody> body{};

  ListSecretParameterVersionsResponse() {}

  explicit ListSecretParameterVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSecretParameterVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSecretParameterVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSecretParameterVersionsResponse() = default;
};
class ListSecretParametersRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> path{};
  shared_ptr<bool> recursive{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};
  shared_ptr<map<string, boost::any>> tags{};

  ListSecretParametersRequest() {}

  explicit ListSecretParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (recursive) {
      res["Recursive"] = boost::any(*recursive);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sortField) {
      res["SortField"] = boost::any(*sortField);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Recursive") != m.end() && !m["Recursive"].empty()) {
      recursive = make_shared<bool>(boost::any_cast<bool>(m["Recursive"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SortField") != m.end() && !m["SortField"].empty()) {
      sortField = make_shared<string>(boost::any_cast<string>(m["SortField"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListSecretParametersRequest() = default;
};
class ListSecretParametersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> path{};
  shared_ptr<bool> recursive{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> tagsShrink{};

  ListSecretParametersShrinkRequest() {}

  explicit ListSecretParametersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (recursive) {
      res["Recursive"] = boost::any(*recursive);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sortField) {
      res["SortField"] = boost::any(*sortField);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
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
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Recursive") != m.end() && !m["Recursive"].empty()) {
      recursive = make_shared<bool>(boost::any_cast<bool>(m["Recursive"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SortField") != m.end() && !m["SortField"].empty()) {
      sortField = make_shared<string>(boost::any_cast<string>(m["SortField"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~ListSecretParametersShrinkRequest() = default;
};
class ListSecretParametersResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> keyId{};
  shared_ptr<string> name{};
  shared_ptr<string> parameterVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  ListSecretParametersResponseBodyParameters() {}

  explicit ListSecretParametersResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<string>(boost::any_cast<string>(m["ParameterVersion"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~ListSecretParametersResponseBodyParameters() = default;
};
class ListSecretParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListSecretParametersResponseBodyParameters>> parameters{};
  shared_ptr<string> requestId{};

  ListSecretParametersResponseBody() {}

  explicit ListSecretParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListSecretParametersResponseBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecretParametersResponseBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<ListSecretParametersResponseBodyParameters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSecretParametersResponseBody() = default;
};
class ListSecretParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSecretParametersResponseBody> body{};

  ListSecretParametersResponse() {}

  explicit ListSecretParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSecretParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSecretParametersResponseBody>(model1);
      }
    }
  }


  virtual ~ListSecretParametersResponse() = default;
};
class ListStateConfigurationsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> stateConfigurationIds{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};

  ListStateConfigurationsRequest() {}

  explicit ListStateConfigurationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (stateConfigurationIds) {
      res["StateConfigurationIds"] = boost::any(*stateConfigurationIds);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StateConfigurationIds") != m.end() && !m["StateConfigurationIds"].empty()) {
      stateConfigurationIds = make_shared<string>(boost::any_cast<string>(m["StateConfigurationIds"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~ListStateConfigurationsRequest() = default;
};
class ListStateConfigurationsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> stateConfigurationIds{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};

  ListStateConfigurationsShrinkRequest() {}

  explicit ListStateConfigurationsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (stateConfigurationIds) {
      res["StateConfigurationIds"] = boost::any(*stateConfigurationIds);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StateConfigurationIds") != m.end() && !m["StateConfigurationIds"].empty()) {
      stateConfigurationIds = make_shared<string>(boost::any_cast<string>(m["StateConfigurationIds"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~ListStateConfigurationsShrinkRequest() = default;
};
class ListStateConfigurationsResponseBodyStateConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> configureMode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> parameters{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> stateConfigurationId{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> targets{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updateTime{};

  ListStateConfigurationsResponseBodyStateConfigurations() {}

  explicit ListStateConfigurationsResponseBodyStateConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configureMode) {
      res["ConfigureMode"] = boost::any(*configureMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduleExpression) {
      res["ScheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (stateConfigurationId) {
      res["StateConfigurationId"] = boost::any(*stateConfigurationId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targets) {
      res["Targets"] = boost::any(*targets);
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
    if (m.find("ConfigureMode") != m.end() && !m["ConfigureMode"].empty()) {
      configureMode = make_shared<string>(boost::any_cast<string>(m["ConfigureMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ScheduleExpression") != m.end() && !m["ScheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["ScheduleExpression"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("StateConfigurationId") != m.end() && !m["StateConfigurationId"].empty()) {
      stateConfigurationId = make_shared<string>(boost::any_cast<string>(m["StateConfigurationId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      targets = make_shared<string>(boost::any_cast<string>(m["Targets"]));
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


  virtual ~ListStateConfigurationsResponseBodyStateConfigurations() = default;
};
class ListStateConfigurationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListStateConfigurationsResponseBodyStateConfigurations>> stateConfigurations{};

  ListStateConfigurationsResponseBody() {}

  explicit ListStateConfigurationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (stateConfigurations) {
      vector<boost::any> temp1;
      for(auto item1:*stateConfigurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StateConfigurations"] = boost::any(temp1);
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
    if (m.find("StateConfigurations") != m.end() && !m["StateConfigurations"].empty()) {
      if (typeid(vector<boost::any>) == m["StateConfigurations"].type()) {
        vector<ListStateConfigurationsResponseBodyStateConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StateConfigurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListStateConfigurationsResponseBodyStateConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stateConfigurations = make_shared<vector<ListStateConfigurationsResponseBodyStateConfigurations>>(expect1);
      }
    }
  }


  virtual ~ListStateConfigurationsResponseBody() = default;
};
class ListStateConfigurationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStateConfigurationsResponseBody> body{};

  ListStateConfigurationsResponse() {}

  explicit ListStateConfigurationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListStateConfigurationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStateConfigurationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListStateConfigurationsResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
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


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keys{};
  shared_ptr<long> maxResults{};
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
        ListTagKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagKeysResponse() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, boost::any>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<map<string, boost::any>> tags{};

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
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceIdsShrink{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagsShrink{};

  ListTagResourcesShrinkRequest() {}

  explicit ListTagResourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceIdsShrink) {
      res["ResourceIds"] = boost::any(*resourceIdsShrink);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
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
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIdsShrink = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~ListTagResourcesShrinkRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

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
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
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
  shared_ptr<long> maxResults{};
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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
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
  shared_ptr<long> maxResults{};
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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
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
        ListTagValuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagValuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagValuesResponse() = default;
};
class ListTaskExecutionsRequest : public Darabonba::Model {
public:
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

  ListTaskExecutionsRequest() {}

  explicit ListTaskExecutionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~ListTaskExecutionsRequest() = default;
};
class ListTaskExecutionsResponseBodyTaskExecutions : public Darabonba::Model {
public:
  shared_ptr<string> childExecutionId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> executionId{};
  shared_ptr<map<string, boost::any>> extraData{};
  shared_ptr<map<string, boost::any>> loop{};
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

  ListTaskExecutionsResponseBodyTaskExecutions() {}

  explicit ListTaskExecutionsResponseBodyTaskExecutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Loop") != m.end() && !m["Loop"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Loop"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      loop = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~ListTaskExecutionsResponseBodyTaskExecutions() = default;
};
class ListTaskExecutionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTaskExecutionsResponseBodyTaskExecutions>> taskExecutions{};

  ListTaskExecutionsResponseBody() {}

  explicit ListTaskExecutionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListTaskExecutionsResponseBodyTaskExecutions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskExecutions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTaskExecutionsResponseBodyTaskExecutions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskExecutions = make_shared<vector<ListTaskExecutionsResponseBodyTaskExecutions>>(expect1);
      }
    }
  }


  virtual ~ListTaskExecutionsResponseBody() = default;
};
class ListTaskExecutionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTaskExecutionsResponseBody> body{};

  ListTaskExecutionsResponse() {}

  explicit ListTaskExecutionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTaskExecutionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTaskExecutionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTaskExecutionsResponse() = default;
};
class ListTemplateVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> templateName{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
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
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ListTemplateVersionsRequest() = default;
};
class ListTemplateVersionsResponseBodyTemplateVersions : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};
  shared_ptr<string> versionName{};

  ListTemplateVersionsResponseBodyTemplateVersions() {}

  explicit ListTemplateVersionsResponseBodyTemplateVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (templateFormat) {
      res["TemplateFormat"] = boost::any(*templateFormat);
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
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TemplateFormat") != m.end() && !m["TemplateFormat"].empty()) {
      templateFormat = make_shared<string>(boost::any_cast<string>(m["TemplateFormat"]));
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
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ListTemplateVersionsResponseBodyTemplateVersions() = default;
};
class ListTemplateVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTemplateVersionsResponseBodyTemplateVersions>> templateVersions{};

  ListTemplateVersionsResponseBody() {}

  explicit ListTemplateVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateVersions) {
      vector<boost::any> temp1;
      for(auto item1:*templateVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplateVersions"] = boost::any(temp1);
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
    if (m.find("TemplateVersions") != m.end() && !m["TemplateVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplateVersions"].type()) {
        vector<ListTemplateVersionsResponseBodyTemplateVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplateVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplateVersionsResponseBodyTemplateVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templateVersions = make_shared<vector<ListTemplateVersionsResponseBodyTemplateVersions>>(expect1);
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
        ListTemplateVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTemplateVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTemplateVersionsResponse() = default;
};
class ListTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDateAfter{};
  shared_ptr<string> createdDateBefore{};
  shared_ptr<bool> hasTrigger{};
  shared_ptr<bool> isExample{};
  shared_ptr<bool> isFavorite{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateType{};

  ListTemplatesRequest() {}

  explicit ListTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (createdDateAfter) {
      res["CreatedDateAfter"] = boost::any(*createdDateAfter);
    }
    if (createdDateBefore) {
      res["CreatedDateBefore"] = boost::any(*createdDateBefore);
    }
    if (hasTrigger) {
      res["HasTrigger"] = boost::any(*hasTrigger);
    }
    if (isExample) {
      res["IsExample"] = boost::any(*isExample);
    }
    if (isFavorite) {
      res["IsFavorite"] = boost::any(*isFavorite);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("HasTrigger") != m.end() && !m["HasTrigger"].empty()) {
      hasTrigger = make_shared<bool>(boost::any_cast<bool>(m["HasTrigger"]));
    }
    if (m.find("IsExample") != m.end() && !m["IsExample"].empty()) {
      isExample = make_shared<bool>(boost::any_cast<bool>(m["IsExample"]));
    }
    if (m.find("IsFavorite") != m.end() && !m["IsFavorite"].empty()) {
      isFavorite = make_shared<bool>(boost::any_cast<bool>(m["IsFavorite"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~ListTemplatesRequest() = default;
};
class ListTemplatesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDateAfter{};
  shared_ptr<string> createdDateBefore{};
  shared_ptr<bool> hasTrigger{};
  shared_ptr<bool> isExample{};
  shared_ptr<bool> isFavorite{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateType{};

  ListTemplatesShrinkRequest() {}

  explicit ListTemplatesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (createdDateAfter) {
      res["CreatedDateAfter"] = boost::any(*createdDateAfter);
    }
    if (createdDateBefore) {
      res["CreatedDateBefore"] = boost::any(*createdDateBefore);
    }
    if (hasTrigger) {
      res["HasTrigger"] = boost::any(*hasTrigger);
    }
    if (isExample) {
      res["IsExample"] = boost::any(*isExample);
    }
    if (isFavorite) {
      res["IsFavorite"] = boost::any(*isFavorite);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
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
    if (m.find("HasTrigger") != m.end() && !m["HasTrigger"].empty()) {
      hasTrigger = make_shared<bool>(boost::any_cast<bool>(m["HasTrigger"]));
    }
    if (m.find("IsExample") != m.end() && !m["IsExample"].empty()) {
      isExample = make_shared<bool>(boost::any_cast<bool>(m["IsExample"]));
    }
    if (m.find("IsFavorite") != m.end() && !m["IsFavorite"].empty()) {
      isFavorite = make_shared<bool>(boost::any_cast<bool>(m["IsFavorite"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
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


  virtual ~ListTemplatesShrinkRequest() = default;
};
class ListTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<bool> hasTrigger{};
  shared_ptr<string> hash{};
  shared_ptr<bool> isFavorite{};
  shared_ptr<long> popularity{};
  shared_ptr<string> publisher{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateType{};
  shared_ptr<string> templateVersion{};
  shared_ptr<long> totalExecutionCount{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};
  shared_ptr<string> versionName{};

  ListTemplatesResponseBodyTemplates() {}

  explicit ListTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
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
    if (hasTrigger) {
      res["HasTrigger"] = boost::any(*hasTrigger);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (isFavorite) {
      res["IsFavorite"] = boost::any(*isFavorite);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (publisher) {
      res["Publisher"] = boost::any(*publisher);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
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
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
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
    if (m.find("HasTrigger") != m.end() && !m["HasTrigger"].empty()) {
      hasTrigger = make_shared<bool>(boost::any_cast<bool>(m["HasTrigger"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("IsFavorite") != m.end() && !m["IsFavorite"].empty()) {
      isFavorite = make_shared<bool>(boost::any_cast<bool>(m["IsFavorite"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("Publisher") != m.end() && !m["Publisher"].empty()) {
      publisher = make_shared<string>(boost::any_cast<string>(m["Publisher"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
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
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ListTemplatesResponseBodyTemplates() = default;
};
class ListTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTemplatesResponseBodyTemplates>> templates{};

  ListTemplatesResponseBody() {}

  explicit ListTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListTemplatesResponseBody> body{};

  ListTemplatesResponse() {}

  explicit ListTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTemplatesResponse() = default;
};
class NotifyExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> executionId{};
  shared_ptr<string> executionStatus{};
  shared_ptr<string> loopItem{};
  shared_ptr<string> notifyNote{};
  shared_ptr<string> notifyType{};
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> taskExecutionId{};
  shared_ptr<string> taskExecutionIds{};
  shared_ptr<string> taskName{};

  NotifyExecutionRequest() {}

  explicit NotifyExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (executionStatus) {
      res["ExecutionStatus"] = boost::any(*executionStatus);
    }
    if (loopItem) {
      res["LoopItem"] = boost::any(*loopItem);
    }
    if (notifyNote) {
      res["NotifyNote"] = boost::any(*notifyNote);
    }
    if (notifyType) {
      res["NotifyType"] = boost::any(*notifyType);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (taskExecutionId) {
      res["TaskExecutionId"] = boost::any(*taskExecutionId);
    }
    if (taskExecutionIds) {
      res["TaskExecutionIds"] = boost::any(*taskExecutionIds);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("ExecutionStatus") != m.end() && !m["ExecutionStatus"].empty()) {
      executionStatus = make_shared<string>(boost::any_cast<string>(m["ExecutionStatus"]));
    }
    if (m.find("LoopItem") != m.end() && !m["LoopItem"].empty()) {
      loopItem = make_shared<string>(boost::any_cast<string>(m["LoopItem"]));
    }
    if (m.find("NotifyNote") != m.end() && !m["NotifyNote"].empty()) {
      notifyNote = make_shared<string>(boost::any_cast<string>(m["NotifyNote"]));
    }
    if (m.find("NotifyType") != m.end() && !m["NotifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["NotifyType"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TaskExecutionId") != m.end() && !m["TaskExecutionId"].empty()) {
      taskExecutionId = make_shared<string>(boost::any_cast<string>(m["TaskExecutionId"]));
    }
    if (m.find("TaskExecutionIds") != m.end() && !m["TaskExecutionIds"].empty()) {
      taskExecutionIds = make_shared<string>(boost::any_cast<string>(m["TaskExecutionIds"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~NotifyExecutionRequest() = default;
};
class NotifyExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  NotifyExecutionResponseBody() {}

  explicit NotifyExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~NotifyExecutionResponseBody() = default;
};
class NotifyExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<NotifyExecutionResponseBody> body{};

  NotifyExecutionResponse() {}

  explicit NotifyExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        NotifyExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<NotifyExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~NotifyExecutionResponse() = default;
};
class RegisterDefaultPatchBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  RegisterDefaultPatchBaselineRequest() {}

  explicit RegisterDefaultPatchBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RegisterDefaultPatchBaselineRequest() = default;
};
class RegisterDefaultPatchBaselineResponseBodyPatchBaseline : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  RegisterDefaultPatchBaselineResponseBodyPatchBaseline() {}

  explicit RegisterDefaultPatchBaselineResponseBodyPatchBaseline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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


  virtual ~RegisterDefaultPatchBaselineResponseBodyPatchBaseline() = default;
};
class RegisterDefaultPatchBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<RegisterDefaultPatchBaselineResponseBodyPatchBaseline> patchBaseline{};
  shared_ptr<string> requestId{};

  RegisterDefaultPatchBaselineResponseBody() {}

  explicit RegisterDefaultPatchBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterDefaultPatchBaselineResponseBodyPatchBaseline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PatchBaseline"]));
        patchBaseline = make_shared<RegisterDefaultPatchBaselineResponseBodyPatchBaseline>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RegisterDefaultPatchBaselineResponseBody() = default;
};
class RegisterDefaultPatchBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterDefaultPatchBaselineResponseBody> body{};

  RegisterDefaultPatchBaselineResponse() {}

  explicit RegisterDefaultPatchBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterDefaultPatchBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterDefaultPatchBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterDefaultPatchBaselineResponse() = default;
};
class SearchInventoryRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> value{};

  SearchInventoryRequestFilter() {}

  explicit SearchInventoryRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SearchInventoryRequestFilter() = default;
};
class SearchInventoryRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aggregator{};
  shared_ptr<vector<SearchInventoryRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  SearchInventoryRequest() {}

  explicit SearchInventoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregator) {
      res["Aggregator"] = boost::any(*aggregator);
    }
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
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
    if (m.find("Aggregator") != m.end() && !m["Aggregator"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Aggregator"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Aggregator"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aggregator = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<SearchInventoryRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchInventoryRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<SearchInventoryRequestFilter>>(expect1);
      }
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


  virtual ~SearchInventoryRequest() = default;
};
class SearchInventoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> entities{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  SearchInventoryResponseBody() {}

  explicit SearchInventoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entities) {
      res["Entities"] = boost::any(*entities);
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
    if (m.find("Entities") != m.end() && !m["Entities"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Entities"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Entities"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      entities = make_shared<vector<map<string, boost::any>>>(toVec1);
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


  virtual ~SearchInventoryResponseBody() = default;
};
class SearchInventoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchInventoryResponseBody> body{};

  SearchInventoryResponse() {}

  explicit SearchInventoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchInventoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchInventoryResponseBody>(model1);
      }
    }
  }


  virtual ~SearchInventoryResponse() = default;
};
class SetServiceSettingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> deliveryOssBucketName{};
  shared_ptr<bool> deliveryOssEnabled{};
  shared_ptr<string> deliveryOssKeyPrefix{};
  shared_ptr<bool> deliverySlsEnabled{};
  shared_ptr<string> deliverySlsProjectName{};
  shared_ptr<string> rdcEnterpriseId{};
  shared_ptr<string> regionId{};

  SetServiceSettingsRequest() {}

  explicit SetServiceSettingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryOssBucketName) {
      res["DeliveryOssBucketName"] = boost::any(*deliveryOssBucketName);
    }
    if (deliveryOssEnabled) {
      res["DeliveryOssEnabled"] = boost::any(*deliveryOssEnabled);
    }
    if (deliveryOssKeyPrefix) {
      res["DeliveryOssKeyPrefix"] = boost::any(*deliveryOssKeyPrefix);
    }
    if (deliverySlsEnabled) {
      res["DeliverySlsEnabled"] = boost::any(*deliverySlsEnabled);
    }
    if (deliverySlsProjectName) {
      res["DeliverySlsProjectName"] = boost::any(*deliverySlsProjectName);
    }
    if (rdcEnterpriseId) {
      res["RdcEnterpriseId"] = boost::any(*rdcEnterpriseId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryOssBucketName") != m.end() && !m["DeliveryOssBucketName"].empty()) {
      deliveryOssBucketName = make_shared<string>(boost::any_cast<string>(m["DeliveryOssBucketName"]));
    }
    if (m.find("DeliveryOssEnabled") != m.end() && !m["DeliveryOssEnabled"].empty()) {
      deliveryOssEnabled = make_shared<bool>(boost::any_cast<bool>(m["DeliveryOssEnabled"]));
    }
    if (m.find("DeliveryOssKeyPrefix") != m.end() && !m["DeliveryOssKeyPrefix"].empty()) {
      deliveryOssKeyPrefix = make_shared<string>(boost::any_cast<string>(m["DeliveryOssKeyPrefix"]));
    }
    if (m.find("DeliverySlsEnabled") != m.end() && !m["DeliverySlsEnabled"].empty()) {
      deliverySlsEnabled = make_shared<bool>(boost::any_cast<bool>(m["DeliverySlsEnabled"]));
    }
    if (m.find("DeliverySlsProjectName") != m.end() && !m["DeliverySlsProjectName"].empty()) {
      deliverySlsProjectName = make_shared<string>(boost::any_cast<string>(m["DeliverySlsProjectName"]));
    }
    if (m.find("RdcEnterpriseId") != m.end() && !m["RdcEnterpriseId"].empty()) {
      rdcEnterpriseId = make_shared<string>(boost::any_cast<string>(m["RdcEnterpriseId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SetServiceSettingsRequest() = default;
};
class SetServiceSettingsResponseBodyServiceSettings : public Darabonba::Model {
public:
  shared_ptr<string> deliveryOssBucketName{};
  shared_ptr<bool> deliveryOssEnabled{};
  shared_ptr<string> deliveryOssKeyPrefix{};
  shared_ptr<bool> deliverySlsEnabled{};
  shared_ptr<string> deliverySlsProjectName{};
  shared_ptr<string> rdcEnterpriseId{};

  SetServiceSettingsResponseBodyServiceSettings() {}

  explicit SetServiceSettingsResponseBodyServiceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryOssBucketName) {
      res["DeliveryOssBucketName"] = boost::any(*deliveryOssBucketName);
    }
    if (deliveryOssEnabled) {
      res["DeliveryOssEnabled"] = boost::any(*deliveryOssEnabled);
    }
    if (deliveryOssKeyPrefix) {
      res["DeliveryOssKeyPrefix"] = boost::any(*deliveryOssKeyPrefix);
    }
    if (deliverySlsEnabled) {
      res["DeliverySlsEnabled"] = boost::any(*deliverySlsEnabled);
    }
    if (deliverySlsProjectName) {
      res["DeliverySlsProjectName"] = boost::any(*deliverySlsProjectName);
    }
    if (rdcEnterpriseId) {
      res["RdcEnterpriseId"] = boost::any(*rdcEnterpriseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryOssBucketName") != m.end() && !m["DeliveryOssBucketName"].empty()) {
      deliveryOssBucketName = make_shared<string>(boost::any_cast<string>(m["DeliveryOssBucketName"]));
    }
    if (m.find("DeliveryOssEnabled") != m.end() && !m["DeliveryOssEnabled"].empty()) {
      deliveryOssEnabled = make_shared<bool>(boost::any_cast<bool>(m["DeliveryOssEnabled"]));
    }
    if (m.find("DeliveryOssKeyPrefix") != m.end() && !m["DeliveryOssKeyPrefix"].empty()) {
      deliveryOssKeyPrefix = make_shared<string>(boost::any_cast<string>(m["DeliveryOssKeyPrefix"]));
    }
    if (m.find("DeliverySlsEnabled") != m.end() && !m["DeliverySlsEnabled"].empty()) {
      deliverySlsEnabled = make_shared<bool>(boost::any_cast<bool>(m["DeliverySlsEnabled"]));
    }
    if (m.find("DeliverySlsProjectName") != m.end() && !m["DeliverySlsProjectName"].empty()) {
      deliverySlsProjectName = make_shared<string>(boost::any_cast<string>(m["DeliverySlsProjectName"]));
    }
    if (m.find("RdcEnterpriseId") != m.end() && !m["RdcEnterpriseId"].empty()) {
      rdcEnterpriseId = make_shared<string>(boost::any_cast<string>(m["RdcEnterpriseId"]));
    }
  }


  virtual ~SetServiceSettingsResponseBodyServiceSettings() = default;
};
class SetServiceSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<SetServiceSettingsResponseBodyServiceSettings>> serviceSettings{};

  SetServiceSettingsResponseBody() {}

  explicit SetServiceSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceSettings) {
      vector<boost::any> temp1;
      for(auto item1:*serviceSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceSettings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceSettings") != m.end() && !m["ServiceSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceSettings"].type()) {
        vector<SetServiceSettingsResponseBodyServiceSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetServiceSettingsResponseBodyServiceSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceSettings = make_shared<vector<SetServiceSettingsResponseBodyServiceSettings>>(expect1);
      }
    }
  }


  virtual ~SetServiceSettingsResponseBody() = default;
};
class SetServiceSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetServiceSettingsResponseBody> body{};

  SetServiceSettingsResponse() {}

  explicit SetServiceSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetServiceSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetServiceSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~SetServiceSettingsResponse() = default;
};
class StartExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> loopMode{};
  shared_ptr<string> mode{};
  shared_ptr<string> parameters{};
  shared_ptr<string> parentExecutionId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> safetyCheck{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> templateContent{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  StartExecutionRequest() {}

  explicit StartExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (loopMode) {
      res["LoopMode"] = boost::any(*loopMode);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (parentExecutionId) {
      res["ParentExecutionId"] = boost::any(*parentExecutionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (safetyCheck) {
      res["SafetyCheck"] = boost::any(*safetyCheck);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LoopMode") != m.end() && !m["LoopMode"].empty()) {
      loopMode = make_shared<string>(boost::any_cast<string>(m["LoopMode"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("ParentExecutionId") != m.end() && !m["ParentExecutionId"].empty()) {
      parentExecutionId = make_shared<string>(boost::any_cast<string>(m["ParentExecutionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SafetyCheck") != m.end() && !m["SafetyCheck"].empty()) {
      safetyCheck = make_shared<string>(boost::any_cast<string>(m["SafetyCheck"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~StartExecutionRequest() = default;
};
class StartExecutionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> loopMode{};
  shared_ptr<string> mode{};
  shared_ptr<string> parameters{};
  shared_ptr<string> parentExecutionId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> safetyCheck{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> templateContent{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateURL{};
  shared_ptr<string> templateVersion{};

  StartExecutionShrinkRequest() {}

  explicit StartExecutionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (loopMode) {
      res["LoopMode"] = boost::any(*loopMode);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (parentExecutionId) {
      res["ParentExecutionId"] = boost::any(*parentExecutionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (safetyCheck) {
      res["SafetyCheck"] = boost::any(*safetyCheck);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LoopMode") != m.end() && !m["LoopMode"].empty()) {
      loopMode = make_shared<string>(boost::any_cast<string>(m["LoopMode"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("ParentExecutionId") != m.end() && !m["ParentExecutionId"].empty()) {
      parentExecutionId = make_shared<string>(boost::any_cast<string>(m["ParentExecutionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SafetyCheck") != m.end() && !m["SafetyCheck"].empty()) {
      safetyCheck = make_shared<string>(boost::any_cast<string>(m["SafetyCheck"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~StartExecutionShrinkRequest() = default;
};
class StartExecutionResponseBodyExecutionCurrentTasks : public Darabonba::Model {
public:
  shared_ptr<string> taskAction{};
  shared_ptr<string> taskExecutionId{};
  shared_ptr<string> taskName{};

  StartExecutionResponseBodyExecutionCurrentTasks() {}

  explicit StartExecutionResponseBodyExecutionCurrentTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartExecutionResponseBodyExecutionCurrentTasks() = default;
};
class StartExecutionResponseBodyExecution : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> counters{};
  shared_ptr<string> createDate{};
  shared_ptr<vector<StartExecutionResponseBodyExecutionCurrentTasks>> currentTasks{};
  shared_ptr<string> description{};
  shared_ptr<string> endDate{};
  shared_ptr<string> executedBy{};
  shared_ptr<string> executionId{};
  shared_ptr<bool> isParent{};
  shared_ptr<string> loopMode{};
  shared_ptr<string> mode{};
  shared_ptr<string> outputs{};
  shared_ptr<string> parameters{};
  shared_ptr<string> parentExecutionId{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> safetyCheck{};
  shared_ptr<string> startDate{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updateDate{};

  StartExecutionResponseBodyExecution() {}

  explicit StartExecutionResponseBodyExecution(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (loopMode) {
      res["LoopMode"] = boost::any(*loopMode);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Counters") != m.end() && !m["Counters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Counters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      counters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("CurrentTasks") != m.end() && !m["CurrentTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["CurrentTasks"].type()) {
        vector<StartExecutionResponseBodyExecutionCurrentTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CurrentTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartExecutionResponseBodyExecutionCurrentTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        currentTasks = make_shared<vector<StartExecutionResponseBodyExecutionCurrentTasks>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
    if (m.find("LoopMode") != m.end() && !m["LoopMode"].empty()) {
      loopMode = make_shared<string>(boost::any_cast<string>(m["LoopMode"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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
  }


  virtual ~StartExecutionResponseBodyExecution() = default;
};
class StartExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<StartExecutionResponseBodyExecution> execution{};
  shared_ptr<string> requestId{};

  StartExecutionResponseBody() {}

  explicit StartExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (execution) {
      res["Execution"] = execution ? boost::any(execution->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Execution") != m.end() && !m["Execution"].empty()) {
      if (typeid(map<string, boost::any>) == m["Execution"].type()) {
        StartExecutionResponseBodyExecution model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Execution"]));
        execution = make_shared<StartExecutionResponseBodyExecution>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartExecutionResponseBody() = default;
};
class StartExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartExecutionResponseBody> body{};

  StartExecutionResponse() {}

  explicit StartExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~StartExecutionResponse() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<map<string, boost::any>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<map<string, boost::any>> tags{};

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
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceIdsShrink{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagsShrink{};

  TagResourcesShrinkRequest() {}

  explicit TagResourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceIdsShrink) {
      res["ResourceIds"] = boost::any(*resourceIdsShrink);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIdsShrink = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~TagResourcesShrinkRequest() = default;
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class TriggerExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> content{};
  shared_ptr<string> executionId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};

  TriggerExecutionRequest() {}

  explicit TriggerExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~TriggerExecutionRequest() = default;
};
class TriggerExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TriggerExecutionResponseBody() {}

  explicit TriggerExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TriggerExecutionResponseBody() = default;
};
class TriggerExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TriggerExecutionResponseBody> body{};

  TriggerExecutionResponse() {}

  explicit TriggerExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TriggerExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TriggerExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~TriggerExecutionResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, boost::any>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<map<string, boost::any>> tagKeys{};

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
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
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
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TagKeys"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tagKeys = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceIdsShrink{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKeysShrink{};

  UntagResourcesShrinkRequest() {}

  explicit UntagResourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceIdsShrink) {
      res["ResourceIds"] = boost::any(*resourceIdsShrink);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKeysShrink) {
      res["TagKeys"] = boost::any(*tagKeysShrink);
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
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIdsShrink = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      tagKeysShrink = make_shared<string>(boost::any_cast<string>(m["TagKeys"]));
    }
  }


  virtual ~UntagResourcesShrinkRequest() = default;
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateApplicationRequestAlarmConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> contactGroups{};
  shared_ptr<string> healthCheckUrl{};
  shared_ptr<vector<string>> templateIds{};

  UpdateApplicationRequestAlarmConfig() {}

  explicit UpdateApplicationRequestAlarmConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroups) {
      res["ContactGroups"] = boost::any(*contactGroups);
    }
    if (healthCheckUrl) {
      res["HealthCheckUrl"] = boost::any(*healthCheckUrl);
    }
    if (templateIds) {
      res["TemplateIds"] = boost::any(*templateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroups") != m.end() && !m["ContactGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ContactGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ContactGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      contactGroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckUrl") != m.end() && !m["HealthCheckUrl"].empty()) {
      healthCheckUrl = make_shared<string>(boost::any_cast<string>(m["HealthCheckUrl"]));
    }
    if (m.find("TemplateIds") != m.end() && !m["TemplateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateApplicationRequestAlarmConfig() = default;
};
class UpdateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateApplicationRequestAlarmConfig> alarmConfig{};
  shared_ptr<bool> deleteAlarmRulesBeforeUpdate{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<map<string, boost::any>> tags{};

  UpdateApplicationRequest() {}

  explicit UpdateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmConfig) {
      res["AlarmConfig"] = alarmConfig ? boost::any(alarmConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleteAlarmRulesBeforeUpdate) {
      res["DeleteAlarmRulesBeforeUpdate"] = boost::any(*deleteAlarmRulesBeforeUpdate);
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
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmConfig") != m.end() && !m["AlarmConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlarmConfig"].type()) {
        UpdateApplicationRequestAlarmConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlarmConfig"]));
        alarmConfig = make_shared<UpdateApplicationRequestAlarmConfig>(model1);
      }
    }
    if (m.find("DeleteAlarmRulesBeforeUpdate") != m.end() && !m["DeleteAlarmRulesBeforeUpdate"].empty()) {
      deleteAlarmRulesBeforeUpdate = make_shared<bool>(boost::any_cast<bool>(m["DeleteAlarmRulesBeforeUpdate"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UpdateApplicationRequest() = default;
};
class UpdateApplicationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmConfigShrink{};
  shared_ptr<bool> deleteAlarmRulesBeforeUpdate{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tagsShrink{};

  UpdateApplicationShrinkRequest() {}

  explicit UpdateApplicationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmConfigShrink) {
      res["AlarmConfig"] = boost::any(*alarmConfigShrink);
    }
    if (deleteAlarmRulesBeforeUpdate) {
      res["DeleteAlarmRulesBeforeUpdate"] = boost::any(*deleteAlarmRulesBeforeUpdate);
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
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmConfig") != m.end() && !m["AlarmConfig"].empty()) {
      alarmConfigShrink = make_shared<string>(boost::any_cast<string>(m["AlarmConfig"]));
    }
    if (m.find("DeleteAlarmRulesBeforeUpdate") != m.end() && !m["DeleteAlarmRulesBeforeUpdate"].empty()) {
      deleteAlarmRulesBeforeUpdate = make_shared<bool>(boost::any_cast<bool>(m["DeleteAlarmRulesBeforeUpdate"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~UpdateApplicationShrinkRequest() = default;
};
class UpdateApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> updatedDate{};

  UpdateApplicationResponseBodyApplication() {}

  explicit UpdateApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~UpdateApplicationResponseBodyApplication() = default;
};
class UpdateApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateApplicationResponseBodyApplication> application{};
  shared_ptr<string> requestId{};

  UpdateApplicationResponseBody() {}

  explicit UpdateApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        UpdateApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<UpdateApplicationResponseBodyApplication>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateApplicationResponseBody() = default;
};
class UpdateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateApplicationResponseBody> body{};

  UpdateApplicationResponse() {}

  explicit UpdateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApplicationResponse() = default;
};
class UpdateApplicationGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> name{};
  shared_ptr<string> newName{};
  shared_ptr<string> operationName{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> regionId{};

  UpdateApplicationGroupRequest() {}

  explicit UpdateApplicationGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (newName) {
      res["NewName"] = boost::any(*newName);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NewName") != m.end() && !m["NewName"].empty()) {
      newName = make_shared<string>(boost::any_cast<string>(m["NewName"]));
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateApplicationGroupRequest() = default;
};
class UpdateApplicationGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> name{};
  shared_ptr<string> newName{};
  shared_ptr<string> operationName{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> regionId{};

  UpdateApplicationGroupShrinkRequest() {}

  explicit UpdateApplicationGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (newName) {
      res["NewName"] = boost::any(*newName);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NewName") != m.end() && !m["NewName"].empty()) {
      newName = make_shared<string>(boost::any_cast<string>(m["NewName"]));
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateApplicationGroupShrinkRequest() = default;
};
class UpdateApplicationGroupResponseBodyApplicationGroup : public Darabonba::Model {
public:
  shared_ptr<string> applicationName{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> deployRegionId{};
  shared_ptr<string> description{};
  shared_ptr<string> importTagKey{};
  shared_ptr<string> importTagValue{};
  shared_ptr<string> name{};
  shared_ptr<string> updatedDate{};

  UpdateApplicationGroupResponseBodyApplicationGroup() {}

  explicit UpdateApplicationGroupResponseBodyApplicationGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (deployRegionId) {
      res["DeployRegionId"] = boost::any(*deployRegionId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (importTagKey) {
      res["ImportTagKey"] = boost::any(*importTagKey);
    }
    if (importTagValue) {
      res["ImportTagValue"] = boost::any(*importTagValue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("DeployRegionId") != m.end() && !m["DeployRegionId"].empty()) {
      deployRegionId = make_shared<string>(boost::any_cast<string>(m["DeployRegionId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImportTagKey") != m.end() && !m["ImportTagKey"].empty()) {
      importTagKey = make_shared<string>(boost::any_cast<string>(m["ImportTagKey"]));
    }
    if (m.find("ImportTagValue") != m.end() && !m["ImportTagValue"].empty()) {
      importTagValue = make_shared<string>(boost::any_cast<string>(m["ImportTagValue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~UpdateApplicationGroupResponseBodyApplicationGroup() = default;
};
class UpdateApplicationGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateApplicationGroupResponseBodyApplicationGroup> applicationGroup{};
  shared_ptr<string> requestId{};

  UpdateApplicationGroupResponseBody() {}

  explicit UpdateApplicationGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationGroup) {
      res["ApplicationGroup"] = applicationGroup ? boost::any(applicationGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationGroup") != m.end() && !m["ApplicationGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApplicationGroup"].type()) {
        UpdateApplicationGroupResponseBodyApplicationGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApplicationGroup"]));
        applicationGroup = make_shared<UpdateApplicationGroupResponseBodyApplicationGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateApplicationGroupResponseBody() = default;
};
class UpdateApplicationGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateApplicationGroupResponseBody> body{};

  UpdateApplicationGroupResponse() {}

  explicit UpdateApplicationGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateApplicationGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApplicationGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApplicationGroupResponse() = default;
};
class UpdateExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> executionId{};
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tags{};

  UpdateExecutionRequest() {}

  explicit UpdateExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~UpdateExecutionRequest() = default;
};
class UpdateExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateExecutionResponseBody() {}

  explicit UpdateExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateExecutionResponseBody() = default;
};
class UpdateExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExecutionResponseBody> body{};

  UpdateExecutionResponse() {}

  explicit UpdateExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExecutionResponse() = default;
};
class UpdateInstancePackageStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> configureAction{};
  shared_ptr<string> instanceId{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};

  UpdateInstancePackageStateRequest() {}

  explicit UpdateInstancePackageStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configureAction) {
      res["ConfigureAction"] = boost::any(*configureAction);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
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
    if (m.find("ConfigureAction") != m.end() && !m["ConfigureAction"].empty()) {
      configureAction = make_shared<string>(boost::any_cast<string>(m["ConfigureAction"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~UpdateInstancePackageStateRequest() = default;
};
class UpdateInstancePackageStateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> configureAction{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};

  UpdateInstancePackageStateShrinkRequest() {}

  explicit UpdateInstancePackageStateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configureAction) {
      res["ConfigureAction"] = boost::any(*configureAction);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
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
    if (m.find("ConfigureAction") != m.end() && !m["ConfigureAction"].empty()) {
      configureAction = make_shared<string>(boost::any_cast<string>(m["ConfigureAction"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
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


  virtual ~UpdateInstancePackageStateShrinkRequest() = default;
};
class UpdateInstancePackageStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateInstancePackageStateResponseBody() {}

  explicit UpdateInstancePackageStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateInstancePackageStateResponseBody() = default;
};
class UpdateInstancePackageStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstancePackageStateResponseBody> body{};

  UpdateInstancePackageStateResponse() {}

  explicit UpdateInstancePackageStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstancePackageStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstancePackageStateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstancePackageStateResponse() = default;
};
class UpdateOpsItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dedupString{};
  shared_ptr<string> description{};
  shared_ptr<string> opsItemId{};
  shared_ptr<long> priority{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resources{};
  shared_ptr<string> severity{};
  shared_ptr<string> solutions{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> title{};

  UpdateOpsItemRequest() {}

  explicit UpdateOpsItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dedupString) {
      res["DedupString"] = boost::any(*dedupString);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (opsItemId) {
      res["OpsItemId"] = boost::any(*opsItemId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (solutions) {
      res["Solutions"] = boost::any(*solutions);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DedupString") != m.end() && !m["DedupString"].empty()) {
      dedupString = make_shared<string>(boost::any_cast<string>(m["DedupString"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OpsItemId") != m.end() && !m["OpsItemId"].empty()) {
      opsItemId = make_shared<string>(boost::any_cast<string>(m["OpsItemId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Solutions") != m.end() && !m["Solutions"].empty()) {
      solutions = make_shared<string>(boost::any_cast<string>(m["Solutions"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateOpsItemRequest() = default;
};
class UpdateOpsItemShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dedupString{};
  shared_ptr<string> description{};
  shared_ptr<string> opsItemId{};
  shared_ptr<long> priority{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resources{};
  shared_ptr<string> severity{};
  shared_ptr<string> solutions{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> title{};

  UpdateOpsItemShrinkRequest() {}

  explicit UpdateOpsItemShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dedupString) {
      res["DedupString"] = boost::any(*dedupString);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (opsItemId) {
      res["OpsItemId"] = boost::any(*opsItemId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (solutions) {
      res["Solutions"] = boost::any(*solutions);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DedupString") != m.end() && !m["DedupString"].empty()) {
      dedupString = make_shared<string>(boost::any_cast<string>(m["DedupString"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OpsItemId") != m.end() && !m["OpsItemId"].empty()) {
      opsItemId = make_shared<string>(boost::any_cast<string>(m["OpsItemId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Solutions") != m.end() && !m["Solutions"].empty()) {
      solutions = make_shared<string>(boost::any_cast<string>(m["Solutions"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateOpsItemShrinkRequest() = default;
};
class UpdateOpsItemResponseBodyOpsItem : public Darabonba::Model {
public:
  shared_ptr<string> attributes{};
  shared_ptr<string> category{};
  shared_ptr<string> createDate{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifiedBy{};
  shared_ptr<string> opsItemId{};
  shared_ptr<long> priority{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> resources{};
  shared_ptr<string> severity{};
  shared_ptr<vector<string>> solutions{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> title{};
  shared_ptr<string> updateDate{};

  UpdateOpsItemResponseBodyOpsItem() {}

  explicit UpdateOpsItemResponseBodyOpsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (lastModifiedBy) {
      res["LastModifiedBy"] = boost::any(*lastModifiedBy);
    }
    if (opsItemId) {
      res["OpsItemId"] = boost::any(*opsItemId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (solutions) {
      res["Solutions"] = boost::any(*solutions);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      attributes = make_shared<string>(boost::any_cast<string>(m["Attributes"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LastModifiedBy") != m.end() && !m["LastModifiedBy"].empty()) {
      lastModifiedBy = make_shared<string>(boost::any_cast<string>(m["LastModifiedBy"]));
    }
    if (m.find("OpsItemId") != m.end() && !m["OpsItemId"].empty()) {
      opsItemId = make_shared<string>(boost::any_cast<string>(m["OpsItemId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Solutions") != m.end() && !m["Solutions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Solutions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Solutions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      solutions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~UpdateOpsItemResponseBodyOpsItem() = default;
};
class UpdateOpsItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateOpsItemResponseBodyOpsItem> opsItem{};
  shared_ptr<string> requestId{};

  UpdateOpsItemResponseBody() {}

  explicit UpdateOpsItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opsItem) {
      res["OpsItem"] = opsItem ? boost::any(opsItem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpsItem") != m.end() && !m["OpsItem"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpsItem"].type()) {
        UpdateOpsItemResponseBodyOpsItem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpsItem"]));
        opsItem = make_shared<UpdateOpsItemResponseBodyOpsItem>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateOpsItemResponseBody() = default;
};
class UpdateOpsItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateOpsItemResponseBody> body{};

  UpdateOpsItemResponse() {}

  explicit UpdateOpsItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateOpsItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateOpsItemResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateOpsItemResponse() = default;
};
class UpdateParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tags{};
  shared_ptr<string> value{};

  UpdateParameterRequest() {}

  explicit UpdateParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateParameterRequest() = default;
};
class UpdateParameterResponseBodyParameter : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  UpdateParameterResponseBodyParameter() {}

  explicit UpdateParameterResponseBodyParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
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


  virtual ~UpdateParameterResponseBodyParameter() = default;
};
class UpdateParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateParameterResponseBodyParameter> parameter{};
  shared_ptr<string> requestId{};

  UpdateParameterResponseBody() {}

  explicit UpdateParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateParameterResponseBodyParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameter"]));
        parameter = make_shared<UpdateParameterResponseBodyParameter>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateParameterResponseBody() = default;
};
class UpdateParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateParameterResponseBody> body{};

  UpdateParameterResponse() {}

  explicit UpdateParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateParameterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateParameterResponse() = default;
};
class UpdatePatchBaselineRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdatePatchBaselineRequestTags() {}

  explicit UpdatePatchBaselineRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdatePatchBaselineRequestTags() = default;
};
class UpdatePatchBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<vector<string>> approvedPatches{};
  shared_ptr<bool> approvedPatchesEnableNonSecurity{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> rejectedPatches{};
  shared_ptr<string> rejectedPatchesAction{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> sources{};
  shared_ptr<vector<UpdatePatchBaselineRequestTags>> tags{};

  UpdatePatchBaselineRequest() {}

  explicit UpdatePatchBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalRules) {
      res["ApprovalRules"] = boost::any(*approvalRules);
    }
    if (approvedPatches) {
      res["ApprovedPatches"] = boost::any(*approvedPatches);
    }
    if (approvedPatchesEnableNonSecurity) {
      res["ApprovedPatchesEnableNonSecurity"] = boost::any(*approvedPatchesEnableNonSecurity);
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
    if (rejectedPatches) {
      res["RejectedPatches"] = boost::any(*rejectedPatches);
    }
    if (rejectedPatchesAction) {
      res["RejectedPatchesAction"] = boost::any(*rejectedPatchesAction);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
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
    if (m.find("ApprovalRules") != m.end() && !m["ApprovalRules"].empty()) {
      approvalRules = make_shared<string>(boost::any_cast<string>(m["ApprovalRules"]));
    }
    if (m.find("ApprovedPatches") != m.end() && !m["ApprovedPatches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApprovedPatches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApprovedPatches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      approvedPatches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApprovedPatchesEnableNonSecurity") != m.end() && !m["ApprovedPatchesEnableNonSecurity"].empty()) {
      approvedPatchesEnableNonSecurity = make_shared<bool>(boost::any_cast<bool>(m["ApprovedPatchesEnableNonSecurity"]));
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
    if (m.find("RejectedPatches") != m.end() && !m["RejectedPatches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RejectedPatches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RejectedPatches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rejectedPatches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RejectedPatchesAction") != m.end() && !m["RejectedPatchesAction"].empty()) {
      rejectedPatchesAction = make_shared<string>(boost::any_cast<string>(m["RejectedPatchesAction"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Sources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Sources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<UpdatePatchBaselineRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePatchBaselineRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<UpdatePatchBaselineRequestTags>>(expect1);
      }
    }
  }


  virtual ~UpdatePatchBaselineRequest() = default;
};
class UpdatePatchBaselineShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<string> approvedPatchesShrink{};
  shared_ptr<bool> approvedPatchesEnableNonSecurity{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> rejectedPatchesShrink{};
  shared_ptr<string> rejectedPatchesAction{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourcesShrink{};
  shared_ptr<string> tagsShrink{};

  UpdatePatchBaselineShrinkRequest() {}

  explicit UpdatePatchBaselineShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalRules) {
      res["ApprovalRules"] = boost::any(*approvalRules);
    }
    if (approvedPatchesShrink) {
      res["ApprovedPatches"] = boost::any(*approvedPatchesShrink);
    }
    if (approvedPatchesEnableNonSecurity) {
      res["ApprovedPatchesEnableNonSecurity"] = boost::any(*approvedPatchesEnableNonSecurity);
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
    if (rejectedPatchesShrink) {
      res["RejectedPatches"] = boost::any(*rejectedPatchesShrink);
    }
    if (rejectedPatchesAction) {
      res["RejectedPatchesAction"] = boost::any(*rejectedPatchesAction);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourcesShrink) {
      res["Sources"] = boost::any(*sourcesShrink);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalRules") != m.end() && !m["ApprovalRules"].empty()) {
      approvalRules = make_shared<string>(boost::any_cast<string>(m["ApprovalRules"]));
    }
    if (m.find("ApprovedPatches") != m.end() && !m["ApprovedPatches"].empty()) {
      approvedPatchesShrink = make_shared<string>(boost::any_cast<string>(m["ApprovedPatches"]));
    }
    if (m.find("ApprovedPatchesEnableNonSecurity") != m.end() && !m["ApprovedPatchesEnableNonSecurity"].empty()) {
      approvedPatchesEnableNonSecurity = make_shared<bool>(boost::any_cast<bool>(m["ApprovedPatchesEnableNonSecurity"]));
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
    if (m.find("RejectedPatches") != m.end() && !m["RejectedPatches"].empty()) {
      rejectedPatchesShrink = make_shared<string>(boost::any_cast<string>(m["RejectedPatches"]));
    }
    if (m.find("RejectedPatchesAction") != m.end() && !m["RejectedPatchesAction"].empty()) {
      rejectedPatchesAction = make_shared<string>(boost::any_cast<string>(m["RejectedPatchesAction"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sourcesShrink = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~UpdatePatchBaselineShrinkRequest() = default;
};
class UpdatePatchBaselineResponseBodyPatchBaselineTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  UpdatePatchBaselineResponseBodyPatchBaselineTags() {}

  explicit UpdatePatchBaselineResponseBodyPatchBaselineTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~UpdatePatchBaselineResponseBodyPatchBaselineTags() = default;
};
class UpdatePatchBaselineResponseBodyPatchBaseline : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<vector<string>> approvedPatches{};
  shared_ptr<bool> approvedPatchesEnableNonSecurity{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<vector<string>> rejectedPatches{};
  shared_ptr<string> rejectedPatchesAction{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<vector<string>> sources{};
  shared_ptr<vector<UpdatePatchBaselineResponseBodyPatchBaselineTags>> tags{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  UpdatePatchBaselineResponseBodyPatchBaseline() {}

  explicit UpdatePatchBaselineResponseBodyPatchBaseline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalRules) {
      res["ApprovalRules"] = boost::any(*approvalRules);
    }
    if (approvedPatches) {
      res["ApprovedPatches"] = boost::any(*approvedPatches);
    }
    if (approvedPatchesEnableNonSecurity) {
      res["ApprovedPatchesEnableNonSecurity"] = boost::any(*approvedPatchesEnableNonSecurity);
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
    if (rejectedPatches) {
      res["RejectedPatches"] = boost::any(*rejectedPatches);
    }
    if (rejectedPatchesAction) {
      res["RejectedPatchesAction"] = boost::any(*rejectedPatchesAction);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (sources) {
      res["Sources"] = boost::any(*sources);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("ApprovedPatches") != m.end() && !m["ApprovedPatches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApprovedPatches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApprovedPatches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      approvedPatches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApprovedPatchesEnableNonSecurity") != m.end() && !m["ApprovedPatchesEnableNonSecurity"].empty()) {
      approvedPatchesEnableNonSecurity = make_shared<bool>(boost::any_cast<bool>(m["ApprovedPatchesEnableNonSecurity"]));
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
    if (m.find("RejectedPatches") != m.end() && !m["RejectedPatches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RejectedPatches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RejectedPatches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rejectedPatches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RejectedPatchesAction") != m.end() && !m["RejectedPatchesAction"].empty()) {
      rejectedPatchesAction = make_shared<string>(boost::any_cast<string>(m["RejectedPatchesAction"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Sources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Sources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<UpdatePatchBaselineResponseBodyPatchBaselineTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePatchBaselineResponseBodyPatchBaselineTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<UpdatePatchBaselineResponseBodyPatchBaselineTags>>(expect1);
      }
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~UpdatePatchBaselineResponseBodyPatchBaseline() = default;
};
class UpdatePatchBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdatePatchBaselineResponseBodyPatchBaseline> patchBaseline{};
  shared_ptr<string> requestId{};

  UpdatePatchBaselineResponseBody() {}

  explicit UpdatePatchBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePatchBaselineResponseBodyPatchBaseline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PatchBaseline"]));
        patchBaseline = make_shared<UpdatePatchBaselineResponseBodyPatchBaseline>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdatePatchBaselineResponseBody() = default;
};
class UpdatePatchBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePatchBaselineResponseBody> body{};

  UpdatePatchBaselineResponse() {}

  explicit UpdatePatchBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePatchBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePatchBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePatchBaselineResponse() = default;
};
class UpdateSecretParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> value{};

  UpdateSecretParameterRequest() {}

  explicit UpdateSecretParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateSecretParameterRequest() = default;
};
class UpdateSecretParameterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> value{};

  UpdateSecretParameterShrinkRequest() {}

  explicit UpdateSecretParameterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateSecretParameterShrinkRequest() = default;
};
class UpdateSecretParameterResponseBodyParameter : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> keyId{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  UpdateSecretParameterResponseBodyParameter() {}

  explicit UpdateSecretParameterResponseBodyParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<long>(boost::any_cast<long>(m["ParameterVersion"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
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


  virtual ~UpdateSecretParameterResponseBodyParameter() = default;
};
class UpdateSecretParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateSecretParameterResponseBodyParameter> parameter{};
  shared_ptr<string> requestId{};

  UpdateSecretParameterResponseBody() {}

  explicit UpdateSecretParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSecretParameterResponseBodyParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameter"]));
        parameter = make_shared<UpdateSecretParameterResponseBodyParameter>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateSecretParameterResponseBody() = default;
};
class UpdateSecretParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSecretParameterResponseBody> body{};

  UpdateSecretParameterResponse() {}

  explicit UpdateSecretParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSecretParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSecretParameterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSecretParameterResponse() = default;
};
class UpdateStateConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> configureMode{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> stateConfigurationId{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> targets{};

  UpdateStateConfigurationRequest() {}

  explicit UpdateStateConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configureMode) {
      res["ConfigureMode"] = boost::any(*configureMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduleExpression) {
      res["ScheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (stateConfigurationId) {
      res["StateConfigurationId"] = boost::any(*stateConfigurationId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targets) {
      res["Targets"] = boost::any(*targets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigureMode") != m.end() && !m["ConfigureMode"].empty()) {
      configureMode = make_shared<string>(boost::any_cast<string>(m["ConfigureMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ScheduleExpression") != m.end() && !m["ScheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["ScheduleExpression"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("StateConfigurationId") != m.end() && !m["StateConfigurationId"].empty()) {
      stateConfigurationId = make_shared<string>(boost::any_cast<string>(m["StateConfigurationId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      targets = make_shared<string>(boost::any_cast<string>(m["Targets"]));
    }
  }


  virtual ~UpdateStateConfigurationRequest() = default;
};
class UpdateStateConfigurationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> configureMode{};
  shared_ptr<string> description{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> stateConfigurationId{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> targets{};

  UpdateStateConfigurationShrinkRequest() {}

  explicit UpdateStateConfigurationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configureMode) {
      res["ConfigureMode"] = boost::any(*configureMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduleExpression) {
      res["ScheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (stateConfigurationId) {
      res["StateConfigurationId"] = boost::any(*stateConfigurationId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (targets) {
      res["Targets"] = boost::any(*targets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigureMode") != m.end() && !m["ConfigureMode"].empty()) {
      configureMode = make_shared<string>(boost::any_cast<string>(m["ConfigureMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ScheduleExpression") != m.end() && !m["ScheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["ScheduleExpression"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("StateConfigurationId") != m.end() && !m["StateConfigurationId"].empty()) {
      stateConfigurationId = make_shared<string>(boost::any_cast<string>(m["StateConfigurationId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      targets = make_shared<string>(boost::any_cast<string>(m["Targets"]));
    }
  }


  virtual ~UpdateStateConfigurationShrinkRequest() = default;
};
class UpdateStateConfigurationResponseBodyStateConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> configureMode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> parameters{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduleExpression{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> stateConfigurationId{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> targets{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updateTime{};

  UpdateStateConfigurationResponseBodyStateConfiguration() {}

  explicit UpdateStateConfigurationResponseBodyStateConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configureMode) {
      res["ConfigureMode"] = boost::any(*configureMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduleExpression) {
      res["ScheduleExpression"] = boost::any(*scheduleExpression);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (stateConfigurationId) {
      res["StateConfigurationId"] = boost::any(*stateConfigurationId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targets) {
      res["Targets"] = boost::any(*targets);
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
    if (m.find("ConfigureMode") != m.end() && !m["ConfigureMode"].empty()) {
      configureMode = make_shared<string>(boost::any_cast<string>(m["ConfigureMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ScheduleExpression") != m.end() && !m["ScheduleExpression"].empty()) {
      scheduleExpression = make_shared<string>(boost::any_cast<string>(m["ScheduleExpression"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("StateConfigurationId") != m.end() && !m["StateConfigurationId"].empty()) {
      stateConfigurationId = make_shared<string>(boost::any_cast<string>(m["StateConfigurationId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      targets = make_shared<string>(boost::any_cast<string>(m["Targets"]));
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


  virtual ~UpdateStateConfigurationResponseBodyStateConfiguration() = default;
};
class UpdateStateConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<UpdateStateConfigurationResponseBodyStateConfiguration>> stateConfiguration{};

  UpdateStateConfigurationResponseBody() {}

  explicit UpdateStateConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stateConfiguration) {
      vector<boost::any> temp1;
      for(auto item1:*stateConfiguration){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StateConfiguration"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StateConfiguration") != m.end() && !m["StateConfiguration"].empty()) {
      if (typeid(vector<boost::any>) == m["StateConfiguration"].type()) {
        vector<UpdateStateConfigurationResponseBodyStateConfiguration> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StateConfiguration"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStateConfigurationResponseBodyStateConfiguration model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stateConfiguration = make_shared<vector<UpdateStateConfigurationResponseBodyStateConfiguration>>(expect1);
      }
    }
  }


  virtual ~UpdateStateConfigurationResponseBody() = default;
};
class UpdateStateConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateStateConfigurationResponseBody> body{};

  UpdateStateConfigurationResponse() {}

  explicit UpdateStateConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateStateConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateStateConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateStateConfigurationResponse() = default;
};
class UpdateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> templateName{};
  shared_ptr<string> versionName{};

  UpdateTemplateRequest() {}

  explicit UpdateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UpdateTemplateRequest() = default;
};
class UpdateTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> templateName{};
  shared_ptr<string> versionName{};

  UpdateTemplateShrinkRequest() {}

  explicit UpdateTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UpdateTemplateShrinkRequest() = default;
};
class UpdateTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<bool> hasTrigger{};
  shared_ptr<string> hash{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> shareType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  UpdateTemplateResponseBodyTemplate() {}

  explicit UpdateTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (hasTrigger) {
      res["HasTrigger"] = boost::any(*hasTrigger);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("HasTrigger") != m.end() && !m["HasTrigger"].empty()) {
      hasTrigger = make_shared<bool>(boost::any_cast<bool>(m["HasTrigger"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~UpdateTemplateResponseBodyTemplate() = default;
};
class UpdateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateTemplateResponseBodyTemplate> template_{};

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
        UpdateTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<UpdateTemplateResponseBodyTemplate>(model1);
      }
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
        UpdateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTemplateResponse() = default;
};
class ValidateTemplateContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateURL{};

  ValidateTemplateContentRequest() {}

  explicit ValidateTemplateContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
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
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
  }


  virtual ~ValidateTemplateContentRequest() = default;
};
class ValidateTemplateContentResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> outputs{};
  shared_ptr<string> properties{};
  shared_ptr<string> type{};

  ValidateTemplateContentResponseBodyTasks() {}

  explicit ValidateTemplateContentResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ValidateTemplateContentResponseBodyTasks() = default;
};
class ValidateTemplateContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> outputs{};
  shared_ptr<string> parameters{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ValidateTemplateContentResponseBodyTasks>> tasks{};

  ValidateTemplateContentResponseBody() {}

  explicit ValidateTemplateContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
        vector<ValidateTemplateContentResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ValidateTemplateContentResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ValidateTemplateContentResponseBodyTasks>>(expect1);
      }
    }
  }


  virtual ~ValidateTemplateContentResponseBody() = default;
};
class ValidateTemplateContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ValidateTemplateContentResponseBody> body{};

  ValidateTemplateContentResponse() {}

  explicit ValidateTemplateContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ValidateTemplateContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateTemplateContentResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateTemplateContentResponse() = default;
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
  AnalyzeGitRepositoryResponse analyzeGitRepositoryWithOptions(shared_ptr<AnalyzeGitRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AnalyzeGitRepositoryResponse analyzeGitRepository(shared_ptr<AnalyzeGitRepositoryRequest> request);
  CancelExecutionResponse cancelExecutionWithOptions(shared_ptr<CancelExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelExecutionResponse cancelExecution(shared_ptr<CancelExecutionRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  ContinueDeployApplicationGroupResponse continueDeployApplicationGroupWithOptions(shared_ptr<ContinueDeployApplicationGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContinueDeployApplicationGroupResponse continueDeployApplicationGroup(shared_ptr<ContinueDeployApplicationGroupRequest> request);
  CreateApplicationResponse createApplicationWithOptions(shared_ptr<CreateApplicationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicationResponse createApplication(shared_ptr<CreateApplicationRequest> request);
  CreateApplicationGroupResponse createApplicationGroupWithOptions(shared_ptr<CreateApplicationGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicationGroupResponse createApplicationGroup(shared_ptr<CreateApplicationGroupRequest> request);
  CreateOpsItemResponse createOpsItemWithOptions(shared_ptr<CreateOpsItemRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOpsItemResponse createOpsItem(shared_ptr<CreateOpsItemRequest> request);
  CreateParameterResponse createParameterWithOptions(shared_ptr<CreateParameterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateParameterResponse createParameter(shared_ptr<CreateParameterRequest> request);
  CreatePatchBaselineResponse createPatchBaselineWithOptions(shared_ptr<CreatePatchBaselineRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePatchBaselineResponse createPatchBaseline(shared_ptr<CreatePatchBaselineRequest> request);
  CreateSecretParameterResponse createSecretParameterWithOptions(shared_ptr<CreateSecretParameterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSecretParameterResponse createSecretParameter(shared_ptr<CreateSecretParameterRequest> request);
  CreateStateConfigurationResponse createStateConfigurationWithOptions(shared_ptr<CreateStateConfigurationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStateConfigurationResponse createStateConfiguration(shared_ptr<CreateStateConfigurationRequest> request);
  CreateTemplateResponse createTemplateWithOptions(shared_ptr<CreateTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTemplateResponse createTemplate(shared_ptr<CreateTemplateRequest> request);
  DeleteApplicationResponse deleteApplicationWithOptions(shared_ptr<DeleteApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApplicationResponse deleteApplication(shared_ptr<DeleteApplicationRequest> request);
  DeleteApplicationGroupResponse deleteApplicationGroupWithOptions(shared_ptr<DeleteApplicationGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApplicationGroupResponse deleteApplicationGroup(shared_ptr<DeleteApplicationGroupRequest> request);
  DeleteExecutionsResponse deleteExecutionsWithOptions(shared_ptr<DeleteExecutionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExecutionsResponse deleteExecutions(shared_ptr<DeleteExecutionsRequest> request);
  DeleteOpsItemsResponse deleteOpsItemsWithOptions(shared_ptr<DeleteOpsItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteOpsItemsResponse deleteOpsItems(shared_ptr<DeleteOpsItemsRequest> request);
  DeleteParameterResponse deleteParameterWithOptions(shared_ptr<DeleteParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteParameterResponse deleteParameter(shared_ptr<DeleteParameterRequest> request);
  DeletePatchBaselineResponse deletePatchBaselineWithOptions(shared_ptr<DeletePatchBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePatchBaselineResponse deletePatchBaseline(shared_ptr<DeletePatchBaselineRequest> request);
  DeleteSecretParameterResponse deleteSecretParameterWithOptions(shared_ptr<DeleteSecretParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSecretParameterResponse deleteSecretParameter(shared_ptr<DeleteSecretParameterRequest> request);
  DeleteStateConfigurationsResponse deleteStateConfigurationsWithOptions(shared_ptr<DeleteStateConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteStateConfigurationsResponse deleteStateConfigurations(shared_ptr<DeleteStateConfigurationsRequest> request);
  DeleteTemplateResponse deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateResponse deleteTemplate(shared_ptr<DeleteTemplateRequest> request);
  DeleteTemplatesResponse deleteTemplatesWithOptions(shared_ptr<DeleteTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplatesResponse deleteTemplates(shared_ptr<DeleteTemplatesRequest> request);
  DeployApplicationGroupResponse deployApplicationGroupWithOptions(shared_ptr<DeployApplicationGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployApplicationGroupResponse deployApplicationGroup(shared_ptr<DeployApplicationGroupRequest> request);
  DescribeApplicationGroupBillResponse describeApplicationGroupBillWithOptions(shared_ptr<DescribeApplicationGroupBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApplicationGroupBillResponse describeApplicationGroupBill(shared_ptr<DescribeApplicationGroupBillRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  GenerateExecutionPolicyResponse generateExecutionPolicyWithOptions(shared_ptr<GenerateExecutionPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateExecutionPolicyResponse generateExecutionPolicy(shared_ptr<GenerateExecutionPolicyRequest> request);
  GenerateOpsItemResponse generateOpsItemWithOptions(shared_ptr<GenerateOpsItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateOpsItemResponse generateOpsItem(shared_ptr<GenerateOpsItemRequest> request);
  GetApplicationResponse getApplicationWithOptions(shared_ptr<GetApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApplicationResponse getApplication(shared_ptr<GetApplicationRequest> request);
  GetApplicationGroupResponse getApplicationGroupWithOptions(shared_ptr<GetApplicationGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApplicationGroupResponse getApplicationGroup(shared_ptr<GetApplicationGroupRequest> request);
  GetExecutionTemplateResponse getExecutionTemplateWithOptions(shared_ptr<GetExecutionTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExecutionTemplateResponse getExecutionTemplate(shared_ptr<GetExecutionTemplateRequest> request);
  GetInventorySchemaResponse getInventorySchemaWithOptions(shared_ptr<GetInventorySchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInventorySchemaResponse getInventorySchema(shared_ptr<GetInventorySchemaRequest> request);
  GetOpsItemResponse getOpsItemWithOptions(shared_ptr<GetOpsItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOpsItemResponse getOpsItem(shared_ptr<GetOpsItemRequest> request);
  GetParameterResponse getParameterWithOptions(shared_ptr<GetParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetParameterResponse getParameter(shared_ptr<GetParameterRequest> request);
  GetParametersResponse getParametersWithOptions(shared_ptr<GetParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetParametersResponse getParameters(shared_ptr<GetParametersRequest> request);
  GetParametersByPathResponse getParametersByPathWithOptions(shared_ptr<GetParametersByPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetParametersByPathResponse getParametersByPath(shared_ptr<GetParametersByPathRequest> request);
  GetPatchBaselineResponse getPatchBaselineWithOptions(shared_ptr<GetPatchBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPatchBaselineResponse getPatchBaseline(shared_ptr<GetPatchBaselineRequest> request);
  GetSecretParameterResponse getSecretParameterWithOptions(shared_ptr<GetSecretParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSecretParameterResponse getSecretParameter(shared_ptr<GetSecretParameterRequest> request);
  GetSecretParametersResponse getSecretParametersWithOptions(shared_ptr<GetSecretParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSecretParametersResponse getSecretParameters(shared_ptr<GetSecretParametersRequest> request);
  GetSecretParametersByPathResponse getSecretParametersByPathWithOptions(shared_ptr<GetSecretParametersByPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSecretParametersByPathResponse getSecretParametersByPath(shared_ptr<GetSecretParametersByPathRequest> request);
  GetServiceSettingsResponse getServiceSettingsWithOptions(shared_ptr<GetServiceSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceSettingsResponse getServiceSettings(shared_ptr<GetServiceSettingsRequest> request);
  GetTemplateResponse getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateResponse getTemplate(shared_ptr<GetTemplateRequest> request);
  GetTemplateParameterConstraintsResponse getTemplateParameterConstraintsWithOptions(shared_ptr<GetTemplateParameterConstraintsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateParameterConstraintsResponse getTemplateParameterConstraints(shared_ptr<GetTemplateParameterConstraintsRequest> request);
  ListActionsResponse listActionsWithOptions(shared_ptr<ListActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListActionsResponse listActions(shared_ptr<ListActionsRequest> request);
  ListApplicationGroupsResponse listApplicationGroupsWithOptions(shared_ptr<ListApplicationGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationGroupsResponse listApplicationGroups(shared_ptr<ListApplicationGroupsRequest> request);
  ListApplicationsResponse listApplicationsWithOptions(shared_ptr<ListApplicationsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationsResponse listApplications(shared_ptr<ListApplicationsRequest> request);
  ListExecutionLogsResponse listExecutionLogsWithOptions(shared_ptr<ListExecutionLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExecutionLogsResponse listExecutionLogs(shared_ptr<ListExecutionLogsRequest> request);
  ListExecutionRiskyTasksResponse listExecutionRiskyTasksWithOptions(shared_ptr<ListExecutionRiskyTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExecutionRiskyTasksResponse listExecutionRiskyTasks(shared_ptr<ListExecutionRiskyTasksRequest> request);
  ListExecutionsResponse listExecutionsWithOptions(shared_ptr<ListExecutionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExecutionsResponse listExecutions(shared_ptr<ListExecutionsRequest> request);
  ListInstancePackageStatesResponse listInstancePackageStatesWithOptions(shared_ptr<ListInstancePackageStatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancePackageStatesResponse listInstancePackageStates(shared_ptr<ListInstancePackageStatesRequest> request);
  ListInstancePatchStatesResponse listInstancePatchStatesWithOptions(shared_ptr<ListInstancePatchStatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancePatchStatesResponse listInstancePatchStates(shared_ptr<ListInstancePatchStatesRequest> request);
  ListInstancePatchesResponse listInstancePatchesWithOptions(shared_ptr<ListInstancePatchesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancePatchesResponse listInstancePatches(shared_ptr<ListInstancePatchesRequest> request);
  ListInventoryEntriesResponse listInventoryEntriesWithOptions(shared_ptr<ListInventoryEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInventoryEntriesResponse listInventoryEntries(shared_ptr<ListInventoryEntriesRequest> request);
  ListOpsItemsResponse listOpsItemsWithOptions(shared_ptr<ListOpsItemsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOpsItemsResponse listOpsItems(shared_ptr<ListOpsItemsRequest> request);
  ListParameterVersionsResponse listParameterVersionsWithOptions(shared_ptr<ListParameterVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListParameterVersionsResponse listParameterVersions(shared_ptr<ListParameterVersionsRequest> request);
  ListParametersResponse listParametersWithOptions(shared_ptr<ListParametersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListParametersResponse listParameters(shared_ptr<ListParametersRequest> request);
  ListPatchBaselinesResponse listPatchBaselinesWithOptions(shared_ptr<ListPatchBaselinesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPatchBaselinesResponse listPatchBaselines(shared_ptr<ListPatchBaselinesRequest> request);
  ListResourceExecutionStatusResponse listResourceExecutionStatusWithOptions(shared_ptr<ListResourceExecutionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceExecutionStatusResponse listResourceExecutionStatus(shared_ptr<ListResourceExecutionStatusRequest> request);
  ListSecretParameterVersionsResponse listSecretParameterVersionsWithOptions(shared_ptr<ListSecretParameterVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSecretParameterVersionsResponse listSecretParameterVersions(shared_ptr<ListSecretParameterVersionsRequest> request);
  ListSecretParametersResponse listSecretParametersWithOptions(shared_ptr<ListSecretParametersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSecretParametersResponse listSecretParameters(shared_ptr<ListSecretParametersRequest> request);
  ListStateConfigurationsResponse listStateConfigurationsWithOptions(shared_ptr<ListStateConfigurationsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStateConfigurationsResponse listStateConfigurations(shared_ptr<ListStateConfigurationsRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTagValuesResponse listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagValuesResponse listTagValues(shared_ptr<ListTagValuesRequest> request);
  ListTaskExecutionsResponse listTaskExecutionsWithOptions(shared_ptr<ListTaskExecutionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTaskExecutionsResponse listTaskExecutions(shared_ptr<ListTaskExecutionsRequest> request);
  ListTemplateVersionsResponse listTemplateVersionsWithOptions(shared_ptr<ListTemplateVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplateVersionsResponse listTemplateVersions(shared_ptr<ListTemplateVersionsRequest> request);
  ListTemplatesResponse listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplatesResponse listTemplates(shared_ptr<ListTemplatesRequest> request);
  NotifyExecutionResponse notifyExecutionWithOptions(shared_ptr<NotifyExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  NotifyExecutionResponse notifyExecution(shared_ptr<NotifyExecutionRequest> request);
  RegisterDefaultPatchBaselineResponse registerDefaultPatchBaselineWithOptions(shared_ptr<RegisterDefaultPatchBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterDefaultPatchBaselineResponse registerDefaultPatchBaseline(shared_ptr<RegisterDefaultPatchBaselineRequest> request);
  SearchInventoryResponse searchInventoryWithOptions(shared_ptr<SearchInventoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchInventoryResponse searchInventory(shared_ptr<SearchInventoryRequest> request);
  SetServiceSettingsResponse setServiceSettingsWithOptions(shared_ptr<SetServiceSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetServiceSettingsResponse setServiceSettings(shared_ptr<SetServiceSettingsRequest> request);
  StartExecutionResponse startExecutionWithOptions(shared_ptr<StartExecutionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartExecutionResponse startExecution(shared_ptr<StartExecutionRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  TriggerExecutionResponse triggerExecutionWithOptions(shared_ptr<TriggerExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TriggerExecutionResponse triggerExecution(shared_ptr<TriggerExecutionRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateApplicationResponse updateApplicationWithOptions(shared_ptr<UpdateApplicationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicationResponse updateApplication(shared_ptr<UpdateApplicationRequest> request);
  UpdateApplicationGroupResponse updateApplicationGroupWithOptions(shared_ptr<UpdateApplicationGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicationGroupResponse updateApplicationGroup(shared_ptr<UpdateApplicationGroupRequest> request);
  UpdateExecutionResponse updateExecutionWithOptions(shared_ptr<UpdateExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExecutionResponse updateExecution(shared_ptr<UpdateExecutionRequest> request);
  UpdateInstancePackageStateResponse updateInstancePackageStateWithOptions(shared_ptr<UpdateInstancePackageStateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstancePackageStateResponse updateInstancePackageState(shared_ptr<UpdateInstancePackageStateRequest> request);
  UpdateOpsItemResponse updateOpsItemWithOptions(shared_ptr<UpdateOpsItemRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOpsItemResponse updateOpsItem(shared_ptr<UpdateOpsItemRequest> request);
  UpdateParameterResponse updateParameterWithOptions(shared_ptr<UpdateParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateParameterResponse updateParameter(shared_ptr<UpdateParameterRequest> request);
  UpdatePatchBaselineResponse updatePatchBaselineWithOptions(shared_ptr<UpdatePatchBaselineRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePatchBaselineResponse updatePatchBaseline(shared_ptr<UpdatePatchBaselineRequest> request);
  UpdateSecretParameterResponse updateSecretParameterWithOptions(shared_ptr<UpdateSecretParameterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSecretParameterResponse updateSecretParameter(shared_ptr<UpdateSecretParameterRequest> request);
  UpdateStateConfigurationResponse updateStateConfigurationWithOptions(shared_ptr<UpdateStateConfigurationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateStateConfigurationResponse updateStateConfiguration(shared_ptr<UpdateStateConfigurationRequest> request);
  UpdateTemplateResponse updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTemplateResponse updateTemplate(shared_ptr<UpdateTemplateRequest> request);
  ValidateTemplateContentResponse validateTemplateContentWithOptions(shared_ptr<ValidateTemplateContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateTemplateContentResponse validateTemplateContent(shared_ptr<ValidateTemplateContentRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Oos20190601

#endif
