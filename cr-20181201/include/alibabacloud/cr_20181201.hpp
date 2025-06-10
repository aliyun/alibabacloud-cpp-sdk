// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CR20181201_H_
#define ALIBABACLOUD_CR20181201_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cr20181201 {
class RepoConfigurationArtifactBuildRuleParameters : public Darabonba::Model {
public:
  shared_ptr<bool> imageIndexOnly{};
  shared_ptr<string> priorityFile{};

  RepoConfigurationArtifactBuildRuleParameters() {}

  explicit RepoConfigurationArtifactBuildRuleParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageIndexOnly) {
      res["ImageIndexOnly"] = boost::any(*imageIndexOnly);
    }
    if (priorityFile) {
      res["PriorityFile"] = boost::any(*priorityFile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageIndexOnly") != m.end() && !m["ImageIndexOnly"].empty()) {
      imageIndexOnly = make_shared<bool>(boost::any_cast<bool>(m["ImageIndexOnly"]));
    }
    if (m.find("PriorityFile") != m.end() && !m["PriorityFile"].empty()) {
      priorityFile = make_shared<string>(boost::any_cast<string>(m["PriorityFile"]));
    }
  }


  virtual ~RepoConfigurationArtifactBuildRuleParameters() = default;
};
class RepoConfiguration : public Darabonba::Model {
public:
  shared_ptr<RepoConfigurationArtifactBuildRuleParameters> artifactBuildRuleParameters{};
  shared_ptr<string> repoType{};
  shared_ptr<bool> tagImmutability{};

  RepoConfiguration() {}

  explicit RepoConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactBuildRuleParameters) {
      res["ArtifactBuildRuleParameters"] = artifactBuildRuleParameters ? boost::any(artifactBuildRuleParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    if (tagImmutability) {
      res["TagImmutability"] = boost::any(*tagImmutability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactBuildRuleParameters") != m.end() && !m["ArtifactBuildRuleParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtifactBuildRuleParameters"].type()) {
        RepoConfigurationArtifactBuildRuleParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtifactBuildRuleParameters"]));
        artifactBuildRuleParameters = make_shared<RepoConfigurationArtifactBuildRuleParameters>(model1);
      }
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
    if (m.find("TagImmutability") != m.end() && !m["TagImmutability"].empty()) {
      tagImmutability = make_shared<bool>(boost::any_cast<bool>(m["TagImmutability"]));
    }
  }


  virtual ~RepoConfiguration() = default;
};
class CancelArtifactBuildTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildTaskId{};
  shared_ptr<string> instanceId{};

  CancelArtifactBuildTaskRequest() {}

  explicit CancelArtifactBuildTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildTaskId) {
      res["BuildTaskId"] = boost::any(*buildTaskId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildTaskId") != m.end() && !m["BuildTaskId"].empty()) {
      buildTaskId = make_shared<string>(boost::any_cast<string>(m["BuildTaskId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CancelArtifactBuildTaskRequest() = default;
};
class CancelArtifactBuildTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CancelArtifactBuildTaskResponseBody() {}

  explicit CancelArtifactBuildTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelArtifactBuildTaskResponseBody() = default;
};
class CancelArtifactBuildTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelArtifactBuildTaskResponseBody> body{};

  CancelArtifactBuildTaskResponse() {}

  explicit CancelArtifactBuildTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelArtifactBuildTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelArtifactBuildTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelArtifactBuildTaskResponse() = default;
};
class CancelRepoBuildRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildRecordId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};

  CancelRepoBuildRecordRequest() {}

  explicit CancelRepoBuildRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRecordId) {
      res["BuildRecordId"] = boost::any(*buildRecordId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRecordId") != m.end() && !m["BuildRecordId"].empty()) {
      buildRecordId = make_shared<string>(boost::any_cast<string>(m["BuildRecordId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~CancelRepoBuildRecordRequest() = default;
};
class CancelRepoBuildRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CancelRepoBuildRecordResponseBody() {}

  explicit CancelRepoBuildRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelRepoBuildRecordResponseBody() = default;
};
class CancelRepoBuildRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelRepoBuildRecordResponseBody> body{};

  CancelRepoBuildRecordResponse() {}

  explicit CancelRepoBuildRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelRepoBuildRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelRepoBuildRecordResponseBody>(model1);
      }
    }
  }


  virtual ~CancelRepoBuildRecordResponse() = default;
};
class CancelRepoSyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> syncTaskId{};

  CancelRepoSyncTaskRequest() {}

  explicit CancelRepoSyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (syncTaskId) {
      res["SyncTaskId"] = boost::any(*syncTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SyncTaskId") != m.end() && !m["SyncTaskId"].empty()) {
      syncTaskId = make_shared<string>(boost::any_cast<string>(m["SyncTaskId"]));
    }
  }


  virtual ~CancelRepoSyncTaskRequest() = default;
};
class CancelRepoSyncTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CancelRepoSyncTaskResponseBody() {}

  explicit CancelRepoSyncTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelRepoSyncTaskResponseBody() = default;
};
class CancelRepoSyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelRepoSyncTaskResponseBody> body{};

  CancelRepoSyncTaskResponse() {}

  explicit CancelRepoSyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelRepoSyncTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelRepoSyncTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelRepoSyncTaskResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceRegionId{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
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
class CreateArtifactBuildRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> instanceId{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> scopeId{};
  shared_ptr<string> scopeType{};

  CreateArtifactBuildRuleRequest() {}

  explicit CreateArtifactBuildRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (scopeId) {
      res["ScopeId"] = boost::any(*scopeId);
    }
    if (scopeType) {
      res["ScopeType"] = boost::any(*scopeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
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
    if (m.find("ScopeId") != m.end() && !m["ScopeId"].empty()) {
      scopeId = make_shared<string>(boost::any_cast<string>(m["ScopeId"]));
    }
    if (m.find("ScopeType") != m.end() && !m["ScopeType"].empty()) {
      scopeType = make_shared<string>(boost::any_cast<string>(m["ScopeType"]));
    }
  }


  virtual ~CreateArtifactBuildRuleRequest() = default;
};
class CreateArtifactBuildRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> scopeId{};
  shared_ptr<string> scopeType{};

  CreateArtifactBuildRuleShrinkRequest() {}

  explicit CreateArtifactBuildRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (scopeId) {
      res["ScopeId"] = boost::any(*scopeId);
    }
    if (scopeType) {
      res["ScopeType"] = boost::any(*scopeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("ScopeId") != m.end() && !m["ScopeId"].empty()) {
      scopeId = make_shared<string>(boost::any_cast<string>(m["ScopeId"]));
    }
    if (m.find("ScopeType") != m.end() && !m["ScopeType"].empty()) {
      scopeType = make_shared<string>(boost::any_cast<string>(m["ScopeType"]));
    }
  }


  virtual ~CreateArtifactBuildRuleShrinkRequest() = default;
};
class CreateArtifactBuildRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buildRuleId{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CreateArtifactBuildRuleResponseBody() {}

  explicit CreateArtifactBuildRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRuleId) {
      res["BuildRuleId"] = boost::any(*buildRuleId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRuleId") != m.end() && !m["BuildRuleId"].empty()) {
      buildRuleId = make_shared<string>(boost::any_cast<string>(m["BuildRuleId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateArtifactBuildRuleResponseBody() = default;
};
class CreateArtifactBuildRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateArtifactBuildRuleResponseBody> body{};

  CreateArtifactBuildRuleResponse() {}

  explicit CreateArtifactBuildRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateArtifactBuildRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateArtifactBuildRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateArtifactBuildRuleResponse() = default;
};
class CreateArtifactLifecycleRuleRequest : public Darabonba::Model {
public:
  shared_ptr<bool> auto_{};
  shared_ptr<bool> enableDeleteTag{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> repoName{};
  shared_ptr<long> retentionTagCount{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<string> scope{};
  shared_ptr<string> tagRegexp{};

  CreateArtifactLifecycleRuleRequest() {}

  explicit CreateArtifactLifecycleRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auto_) {
      res["Auto"] = boost::any(*auto_);
    }
    if (enableDeleteTag) {
      res["EnableDeleteTag"] = boost::any(*enableDeleteTag);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (retentionTagCount) {
      res["RetentionTagCount"] = boost::any(*retentionTagCount);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (tagRegexp) {
      res["TagRegexp"] = boost::any(*tagRegexp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Auto") != m.end() && !m["Auto"].empty()) {
      auto_ = make_shared<bool>(boost::any_cast<bool>(m["Auto"]));
    }
    if (m.find("EnableDeleteTag") != m.end() && !m["EnableDeleteTag"].empty()) {
      enableDeleteTag = make_shared<bool>(boost::any_cast<bool>(m["EnableDeleteTag"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RetentionTagCount") != m.end() && !m["RetentionTagCount"].empty()) {
      retentionTagCount = make_shared<long>(boost::any_cast<long>(m["RetentionTagCount"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("TagRegexp") != m.end() && !m["TagRegexp"].empty()) {
      tagRegexp = make_shared<string>(boost::any_cast<string>(m["TagRegexp"]));
    }
  }


  virtual ~CreateArtifactLifecycleRuleRequest() = default;
};
class CreateArtifactLifecycleRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<string> ruleId{};

  CreateArtifactLifecycleRuleResponseBody() {}

  explicit CreateArtifactLifecycleRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~CreateArtifactLifecycleRuleResponseBody() = default;
};
class CreateArtifactLifecycleRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateArtifactLifecycleRuleResponseBody> body{};

  CreateArtifactLifecycleRuleResponse() {}

  explicit CreateArtifactLifecycleRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateArtifactLifecycleRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateArtifactLifecycleRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateArtifactLifecycleRuleResponse() = default;
};
class CreateArtifactSubscriptionRuleRequest : public Darabonba::Model {
public:
  shared_ptr<bool> accelerate{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<bool> override{};
  shared_ptr<vector<string>> platform{};
  shared_ptr<string> repoName{};
  shared_ptr<string> sourceNamespaceName{};
  shared_ptr<string> sourceProvider{};
  shared_ptr<string> sourceRepoName{};
  shared_ptr<long> tagCount{};
  shared_ptr<string> tagRegexp{};

  CreateArtifactSubscriptionRuleRequest() {}

  explicit CreateArtifactSubscriptionRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accelerate) {
      res["Accelerate"] = boost::any(*accelerate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (override) {
      res["Override"] = boost::any(*override);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (sourceNamespaceName) {
      res["SourceNamespaceName"] = boost::any(*sourceNamespaceName);
    }
    if (sourceProvider) {
      res["SourceProvider"] = boost::any(*sourceProvider);
    }
    if (sourceRepoName) {
      res["SourceRepoName"] = boost::any(*sourceRepoName);
    }
    if (tagCount) {
      res["TagCount"] = boost::any(*tagCount);
    }
    if (tagRegexp) {
      res["TagRegexp"] = boost::any(*tagRegexp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accelerate") != m.end() && !m["Accelerate"].empty()) {
      accelerate = make_shared<bool>(boost::any_cast<bool>(m["Accelerate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("Override") != m.end() && !m["Override"].empty()) {
      override = make_shared<bool>(boost::any_cast<bool>(m["Override"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Platform"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Platform"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      platform = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("SourceNamespaceName") != m.end() && !m["SourceNamespaceName"].empty()) {
      sourceNamespaceName = make_shared<string>(boost::any_cast<string>(m["SourceNamespaceName"]));
    }
    if (m.find("SourceProvider") != m.end() && !m["SourceProvider"].empty()) {
      sourceProvider = make_shared<string>(boost::any_cast<string>(m["SourceProvider"]));
    }
    if (m.find("SourceRepoName") != m.end() && !m["SourceRepoName"].empty()) {
      sourceRepoName = make_shared<string>(boost::any_cast<string>(m["SourceRepoName"]));
    }
    if (m.find("TagCount") != m.end() && !m["TagCount"].empty()) {
      tagCount = make_shared<long>(boost::any_cast<long>(m["TagCount"]));
    }
    if (m.find("TagRegexp") != m.end() && !m["TagRegexp"].empty()) {
      tagRegexp = make_shared<string>(boost::any_cast<string>(m["TagRegexp"]));
    }
  }


  virtual ~CreateArtifactSubscriptionRuleRequest() = default;
};
class CreateArtifactSubscriptionRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<string> ruleId{};

  CreateArtifactSubscriptionRuleResponseBody() {}

  explicit CreateArtifactSubscriptionRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~CreateArtifactSubscriptionRuleResponseBody() = default;
};
class CreateArtifactSubscriptionRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateArtifactSubscriptionRuleResponseBody> body{};

  CreateArtifactSubscriptionRuleResponse() {}

  explicit CreateArtifactSubscriptionRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateArtifactSubscriptionRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateArtifactSubscriptionRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateArtifactSubscriptionRuleResponse() = default;
};
class CreateArtifactSubscriptionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleId{};

  CreateArtifactSubscriptionTaskRequest() {}

  explicit CreateArtifactSubscriptionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~CreateArtifactSubscriptionTaskRequest() = default;
};
class CreateArtifactSubscriptionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateArtifactSubscriptionTaskResponseBody() {}

  explicit CreateArtifactSubscriptionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateArtifactSubscriptionTaskResponseBody() = default;
};
class CreateArtifactSubscriptionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateArtifactSubscriptionTaskResponseBody> body{};

  CreateArtifactSubscriptionTaskResponse() {}

  explicit CreateArtifactSubscriptionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateArtifactSubscriptionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateArtifactSubscriptionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateArtifactSubscriptionTaskResponse() = default;
};
class CreateBuildRecordByRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildRecordId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};

  CreateBuildRecordByRecordRequest() {}

  explicit CreateBuildRecordByRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRecordId) {
      res["BuildRecordId"] = boost::any(*buildRecordId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRecordId") != m.end() && !m["BuildRecordId"].empty()) {
      buildRecordId = make_shared<string>(boost::any_cast<string>(m["BuildRecordId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~CreateBuildRecordByRecordRequest() = default;
};
class CreateBuildRecordByRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buildRecordId{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CreateBuildRecordByRecordResponseBody() {}

  explicit CreateBuildRecordByRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRecordId) {
      res["BuildRecordId"] = boost::any(*buildRecordId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRecordId") != m.end() && !m["BuildRecordId"].empty()) {
      buildRecordId = make_shared<string>(boost::any_cast<string>(m["BuildRecordId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateBuildRecordByRecordResponseBody() = default;
};
class CreateBuildRecordByRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBuildRecordByRecordResponseBody> body{};

  CreateBuildRecordByRecordResponse() {}

  explicit CreateBuildRecordByRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBuildRecordByRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBuildRecordByRecordResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBuildRecordByRecordResponse() = default;
};
class CreateBuildRecordByRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildRuleId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};

  CreateBuildRecordByRuleRequest() {}

  explicit CreateBuildRecordByRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRuleId) {
      res["BuildRuleId"] = boost::any(*buildRuleId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRuleId") != m.end() && !m["BuildRuleId"].empty()) {
      buildRuleId = make_shared<string>(boost::any_cast<string>(m["BuildRuleId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~CreateBuildRecordByRuleRequest() = default;
};
class CreateBuildRecordByRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buildRecordId{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CreateBuildRecordByRuleResponseBody() {}

  explicit CreateBuildRecordByRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRecordId) {
      res["BuildRecordId"] = boost::any(*buildRecordId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRecordId") != m.end() && !m["BuildRecordId"].empty()) {
      buildRecordId = make_shared<string>(boost::any_cast<string>(m["BuildRecordId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateBuildRecordByRuleResponseBody() = default;
};
class CreateBuildRecordByRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBuildRecordByRuleResponseBody> body{};

  CreateBuildRecordByRuleResponse() {}

  explicit CreateBuildRecordByRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBuildRecordByRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBuildRecordByRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBuildRecordByRuleResponse() = default;
};
class CreateChainRequest : public Darabonba::Model {
public:
  shared_ptr<string> chainConfig{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<vector<string>> scopeExclude{};

  CreateChainRequest() {}

  explicit CreateChainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chainConfig) {
      res["ChainConfig"] = boost::any(*chainConfig);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (scopeExclude) {
      res["ScopeExclude"] = boost::any(*scopeExclude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChainConfig") != m.end() && !m["ChainConfig"].empty()) {
      chainConfig = make_shared<string>(boost::any_cast<string>(m["ChainConfig"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("ScopeExclude") != m.end() && !m["ScopeExclude"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScopeExclude"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScopeExclude"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scopeExclude = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateChainRequest() = default;
};
class CreateChainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> chainId{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CreateChainResponseBody() {}

  explicit CreateChainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chainId) {
      res["ChainId"] = boost::any(*chainId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChainId") != m.end() && !m["ChainId"].empty()) {
      chainId = make_shared<string>(boost::any_cast<string>(m["ChainId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateChainResponseBody() = default;
};
class CreateChainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChainResponseBody> body{};

  CreateChainResponse() {}

  explicit CreateChainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateChainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChainResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChainResponse() = default;
};
class CreateChartNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateRepo{};
  shared_ptr<string> defaultRepoType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};

  CreateChartNamespaceRequest() {}

  explicit CreateChartNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateRepo) {
      res["AutoCreateRepo"] = boost::any(*autoCreateRepo);
    }
    if (defaultRepoType) {
      res["DefaultRepoType"] = boost::any(*defaultRepoType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreateRepo") != m.end() && !m["AutoCreateRepo"].empty()) {
      autoCreateRepo = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateRepo"]));
    }
    if (m.find("DefaultRepoType") != m.end() && !m["DefaultRepoType"].empty()) {
      defaultRepoType = make_shared<string>(boost::any_cast<string>(m["DefaultRepoType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~CreateChartNamespaceRequest() = default;
};
class CreateChartNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CreateChartNamespaceResponseBody() {}

  explicit CreateChartNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateChartNamespaceResponseBody() = default;
};
class CreateChartNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChartNamespaceResponseBody> body{};

  CreateChartNamespaceResponse() {}

  explicit CreateChartNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateChartNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChartNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChartNamespaceResponse() = default;
};
class CreateChartRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> repoType{};
  shared_ptr<string> summary{};

  CreateChartRepositoryRequest() {}

  explicit CreateChartRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
  }


  virtual ~CreateChartRepositoryRequest() = default;
};
class CreateChartRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> repoId{};
  shared_ptr<string> requestId{};

  CreateChartRepositoryResponseBody() {}

  explicit CreateChartRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateChartRepositoryResponseBody() = default;
};
class CreateChartRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChartRepositoryResponseBody> body{};

  CreateChartRepositoryResponse() {}

  explicit CreateChartRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateChartRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChartRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChartRepositoryResponse() = default;
};
class CreateInstanceEndpointAclPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> endpointType{};
  shared_ptr<string> entry{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> moduleName{};

  CreateInstanceEndpointAclPolicyRequest() {}

  explicit CreateInstanceEndpointAclPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~CreateInstanceEndpointAclPolicyRequest() = default;
};
class CreateInstanceEndpointAclPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CreateInstanceEndpointAclPolicyResponseBody() {}

  explicit CreateInstanceEndpointAclPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInstanceEndpointAclPolicyResponseBody() = default;
};
class CreateInstanceEndpointAclPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceEndpointAclPolicyResponseBody> body{};

  CreateInstanceEndpointAclPolicyResponse() {}

  explicit CreateInstanceEndpointAclPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceEndpointAclPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceEndpointAclPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceEndpointAclPolicyResponse() = default;
};
class CreateInstanceVpcEndpointLinkedVpcRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableCreateDNSRecordInPvzt{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};

  CreateInstanceVpcEndpointLinkedVpcRequest() {}

  explicit CreateInstanceVpcEndpointLinkedVpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableCreateDNSRecordInPvzt) {
      res["EnableCreateDNSRecordInPvzt"] = boost::any(*enableCreateDNSRecordInPvzt);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableCreateDNSRecordInPvzt") != m.end() && !m["EnableCreateDNSRecordInPvzt"].empty()) {
      enableCreateDNSRecordInPvzt = make_shared<bool>(boost::any_cast<bool>(m["EnableCreateDNSRecordInPvzt"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~CreateInstanceVpcEndpointLinkedVpcRequest() = default;
};
class CreateInstanceVpcEndpointLinkedVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CreateInstanceVpcEndpointLinkedVpcResponseBody() {}

  explicit CreateInstanceVpcEndpointLinkedVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInstanceVpcEndpointLinkedVpcResponseBody() = default;
};
class CreateInstanceVpcEndpointLinkedVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceVpcEndpointLinkedVpcResponseBody> body{};

  CreateInstanceVpcEndpointLinkedVpcResponse() {}

  explicit CreateInstanceVpcEndpointLinkedVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceVpcEndpointLinkedVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceVpcEndpointLinkedVpcResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceVpcEndpointLinkedVpcResponse() = default;
};
class CreateNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateRepo{};
  shared_ptr<RepoConfiguration> defaultRepoConfiguration{};
  shared_ptr<string> defaultRepoType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};

  CreateNamespaceRequest() {}

  explicit CreateNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateRepo) {
      res["AutoCreateRepo"] = boost::any(*autoCreateRepo);
    }
    if (defaultRepoConfiguration) {
      res["DefaultRepoConfiguration"] = defaultRepoConfiguration ? boost::any(defaultRepoConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultRepoType) {
      res["DefaultRepoType"] = boost::any(*defaultRepoType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreateRepo") != m.end() && !m["AutoCreateRepo"].empty()) {
      autoCreateRepo = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateRepo"]));
    }
    if (m.find("DefaultRepoConfiguration") != m.end() && !m["DefaultRepoConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["DefaultRepoConfiguration"].type()) {
        RepoConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DefaultRepoConfiguration"]));
        defaultRepoConfiguration = make_shared<RepoConfiguration>(model1);
      }
    }
    if (m.find("DefaultRepoType") != m.end() && !m["DefaultRepoType"].empty()) {
      defaultRepoType = make_shared<string>(boost::any_cast<string>(m["DefaultRepoType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~CreateNamespaceRequest() = default;
};
class CreateNamespaceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateRepo{};
  shared_ptr<string> defaultRepoConfigurationShrink{};
  shared_ptr<string> defaultRepoType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};

  CreateNamespaceShrinkRequest() {}

  explicit CreateNamespaceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateRepo) {
      res["AutoCreateRepo"] = boost::any(*autoCreateRepo);
    }
    if (defaultRepoConfigurationShrink) {
      res["DefaultRepoConfiguration"] = boost::any(*defaultRepoConfigurationShrink);
    }
    if (defaultRepoType) {
      res["DefaultRepoType"] = boost::any(*defaultRepoType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreateRepo") != m.end() && !m["AutoCreateRepo"].empty()) {
      autoCreateRepo = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateRepo"]));
    }
    if (m.find("DefaultRepoConfiguration") != m.end() && !m["DefaultRepoConfiguration"].empty()) {
      defaultRepoConfigurationShrink = make_shared<string>(boost::any_cast<string>(m["DefaultRepoConfiguration"]));
    }
    if (m.find("DefaultRepoType") != m.end() && !m["DefaultRepoType"].empty()) {
      defaultRepoType = make_shared<string>(boost::any_cast<string>(m["DefaultRepoType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~CreateNamespaceShrinkRequest() = default;
};
class CreateNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CreateNamespaceResponseBody() {}

  explicit CreateNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateNamespaceResponseBody() = default;
};
class CreateNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNamespaceResponseBody> body{};

  CreateNamespaceResponse() {}

  explicit CreateNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNamespaceResponse() = default;
};
class CreateRepoBuildRuleRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> buildArgs{};
  shared_ptr<string> dockerfileLocation{};
  shared_ptr<string> dockerfileName{};
  shared_ptr<string> imageTag{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> platforms{};
  shared_ptr<string> pushName{};
  shared_ptr<string> pushType{};
  shared_ptr<string> repoId{};

  CreateRepoBuildRuleRequest() {}

  explicit CreateRepoBuildRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildArgs) {
      res["BuildArgs"] = boost::any(*buildArgs);
    }
    if (dockerfileLocation) {
      res["DockerfileLocation"] = boost::any(*dockerfileLocation);
    }
    if (dockerfileName) {
      res["DockerfileName"] = boost::any(*dockerfileName);
    }
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (platforms) {
      res["Platforms"] = boost::any(*platforms);
    }
    if (pushName) {
      res["PushName"] = boost::any(*pushName);
    }
    if (pushType) {
      res["PushType"] = boost::any(*pushType);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildArgs") != m.end() && !m["BuildArgs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BuildArgs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BuildArgs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      buildArgs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DockerfileLocation") != m.end() && !m["DockerfileLocation"].empty()) {
      dockerfileLocation = make_shared<string>(boost::any_cast<string>(m["DockerfileLocation"]));
    }
    if (m.find("DockerfileName") != m.end() && !m["DockerfileName"].empty()) {
      dockerfileName = make_shared<string>(boost::any_cast<string>(m["DockerfileName"]));
    }
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Platforms") != m.end() && !m["Platforms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Platforms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Platforms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      platforms = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PushName") != m.end() && !m["PushName"].empty()) {
      pushName = make_shared<string>(boost::any_cast<string>(m["PushName"]));
    }
    if (m.find("PushType") != m.end() && !m["PushType"].empty()) {
      pushType = make_shared<string>(boost::any_cast<string>(m["PushType"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~CreateRepoBuildRuleRequest() = default;
};
class CreateRepoBuildRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buildRuleId{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CreateRepoBuildRuleResponseBody() {}

  explicit CreateRepoBuildRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRuleId) {
      res["BuildRuleId"] = boost::any(*buildRuleId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRuleId") != m.end() && !m["BuildRuleId"].empty()) {
      buildRuleId = make_shared<string>(boost::any_cast<string>(m["BuildRuleId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRepoBuildRuleResponseBody() = default;
};
class CreateRepoBuildRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRepoBuildRuleResponseBody> body{};

  CreateRepoBuildRuleResponse() {}

  explicit CreateRepoBuildRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepoBuildRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepoBuildRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepoBuildRuleResponse() = default;
};
class CreateRepoSourceCodeRepoRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> codeRepoName{};
  shared_ptr<string> codeRepoNamespaceName{};
  shared_ptr<string> codeRepoType{};
  shared_ptr<bool> disableCacheBuild{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> overseaBuild{};
  shared_ptr<string> repoId{};

  CreateRepoSourceCodeRepoRequest() {}

  explicit CreateRepoSourceCodeRepoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (codeRepoName) {
      res["CodeRepoName"] = boost::any(*codeRepoName);
    }
    if (codeRepoNamespaceName) {
      res["CodeRepoNamespaceName"] = boost::any(*codeRepoNamespaceName);
    }
    if (codeRepoType) {
      res["CodeRepoType"] = boost::any(*codeRepoType);
    }
    if (disableCacheBuild) {
      res["DisableCacheBuild"] = boost::any(*disableCacheBuild);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (overseaBuild) {
      res["OverseaBuild"] = boost::any(*overseaBuild);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("CodeRepoName") != m.end() && !m["CodeRepoName"].empty()) {
      codeRepoName = make_shared<string>(boost::any_cast<string>(m["CodeRepoName"]));
    }
    if (m.find("CodeRepoNamespaceName") != m.end() && !m["CodeRepoNamespaceName"].empty()) {
      codeRepoNamespaceName = make_shared<string>(boost::any_cast<string>(m["CodeRepoNamespaceName"]));
    }
    if (m.find("CodeRepoType") != m.end() && !m["CodeRepoType"].empty()) {
      codeRepoType = make_shared<string>(boost::any_cast<string>(m["CodeRepoType"]));
    }
    if (m.find("DisableCacheBuild") != m.end() && !m["DisableCacheBuild"].empty()) {
      disableCacheBuild = make_shared<bool>(boost::any_cast<bool>(m["DisableCacheBuild"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OverseaBuild") != m.end() && !m["OverseaBuild"].empty()) {
      overseaBuild = make_shared<bool>(boost::any_cast<bool>(m["OverseaBuild"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~CreateRepoSourceCodeRepoRequest() = default;
};
class CreateRepoSourceCodeRepoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CreateRepoSourceCodeRepoResponseBody() {}

  explicit CreateRepoSourceCodeRepoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRepoSourceCodeRepoResponseBody() = default;
};
class CreateRepoSourceCodeRepoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRepoSourceCodeRepoResponseBody> body{};

  CreateRepoSourceCodeRepoResponse() {}

  explicit CreateRepoSourceCodeRepoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepoSourceCodeRepoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepoSourceCodeRepoResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepoSourceCodeRepoResponse() = default;
};
class CreateRepoSyncRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNameFilter{};
  shared_ptr<string> syncRuleName{};
  shared_ptr<string> syncScope{};
  shared_ptr<string> syncTrigger{};
  shared_ptr<string> tagFilter{};
  shared_ptr<string> targetInstanceId{};
  shared_ptr<string> targetNamespaceName{};
  shared_ptr<string> targetRegionId{};
  shared_ptr<string> targetRepoName{};
  shared_ptr<string> targetUserId{};

  CreateRepoSyncRuleRequest() {}

  explicit CreateRepoSyncRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNameFilter) {
      res["RepoNameFilter"] = boost::any(*repoNameFilter);
    }
    if (syncRuleName) {
      res["SyncRuleName"] = boost::any(*syncRuleName);
    }
    if (syncScope) {
      res["SyncScope"] = boost::any(*syncScope);
    }
    if (syncTrigger) {
      res["SyncTrigger"] = boost::any(*syncTrigger);
    }
    if (tagFilter) {
      res["TagFilter"] = boost::any(*tagFilter);
    }
    if (targetInstanceId) {
      res["TargetInstanceId"] = boost::any(*targetInstanceId);
    }
    if (targetNamespaceName) {
      res["TargetNamespaceName"] = boost::any(*targetNamespaceName);
    }
    if (targetRegionId) {
      res["TargetRegionId"] = boost::any(*targetRegionId);
    }
    if (targetRepoName) {
      res["TargetRepoName"] = boost::any(*targetRepoName);
    }
    if (targetUserId) {
      res["TargetUserId"] = boost::any(*targetUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNameFilter") != m.end() && !m["RepoNameFilter"].empty()) {
      repoNameFilter = make_shared<string>(boost::any_cast<string>(m["RepoNameFilter"]));
    }
    if (m.find("SyncRuleName") != m.end() && !m["SyncRuleName"].empty()) {
      syncRuleName = make_shared<string>(boost::any_cast<string>(m["SyncRuleName"]));
    }
    if (m.find("SyncScope") != m.end() && !m["SyncScope"].empty()) {
      syncScope = make_shared<string>(boost::any_cast<string>(m["SyncScope"]));
    }
    if (m.find("SyncTrigger") != m.end() && !m["SyncTrigger"].empty()) {
      syncTrigger = make_shared<string>(boost::any_cast<string>(m["SyncTrigger"]));
    }
    if (m.find("TagFilter") != m.end() && !m["TagFilter"].empty()) {
      tagFilter = make_shared<string>(boost::any_cast<string>(m["TagFilter"]));
    }
    if (m.find("TargetInstanceId") != m.end() && !m["TargetInstanceId"].empty()) {
      targetInstanceId = make_shared<string>(boost::any_cast<string>(m["TargetInstanceId"]));
    }
    if (m.find("TargetNamespaceName") != m.end() && !m["TargetNamespaceName"].empty()) {
      targetNamespaceName = make_shared<string>(boost::any_cast<string>(m["TargetNamespaceName"]));
    }
    if (m.find("TargetRegionId") != m.end() && !m["TargetRegionId"].empty()) {
      targetRegionId = make_shared<string>(boost::any_cast<string>(m["TargetRegionId"]));
    }
    if (m.find("TargetRepoName") != m.end() && !m["TargetRepoName"].empty()) {
      targetRepoName = make_shared<string>(boost::any_cast<string>(m["TargetRepoName"]));
    }
    if (m.find("TargetUserId") != m.end() && !m["TargetUserId"].empty()) {
      targetUserId = make_shared<string>(boost::any_cast<string>(m["TargetUserId"]));
    }
  }


  virtual ~CreateRepoSyncRuleRequest() = default;
};
class CreateRepoSyncRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<string> syncRuleId{};

  CreateRepoSyncRuleResponseBody() {}

  explicit CreateRepoSyncRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (syncRuleId) {
      res["SyncRuleId"] = boost::any(*syncRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SyncRuleId") != m.end() && !m["SyncRuleId"].empty()) {
      syncRuleId = make_shared<string>(boost::any_cast<string>(m["SyncRuleId"]));
    }
  }


  virtual ~CreateRepoSyncRuleResponseBody() = default;
};
class CreateRepoSyncRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRepoSyncRuleResponseBody> body{};

  CreateRepoSyncRuleResponse() {}

  explicit CreateRepoSyncRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepoSyncRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepoSyncRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepoSyncRuleResponse() = default;
};
class CreateRepoSyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<bool> override{};
  shared_ptr<string> repoId{};
  shared_ptr<string> tag{};
  shared_ptr<string> targetInstanceId{};
  shared_ptr<string> targetNamespace{};
  shared_ptr<string> targetRegionId{};
  shared_ptr<string> targetRepoName{};
  shared_ptr<string> targetTag{};
  shared_ptr<string> targetUserId{};

  CreateRepoSyncTaskRequest() {}

  explicit CreateRepoSyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (override) {
      res["Override"] = boost::any(*override);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (targetInstanceId) {
      res["TargetInstanceId"] = boost::any(*targetInstanceId);
    }
    if (targetNamespace) {
      res["TargetNamespace"] = boost::any(*targetNamespace);
    }
    if (targetRegionId) {
      res["TargetRegionId"] = boost::any(*targetRegionId);
    }
    if (targetRepoName) {
      res["TargetRepoName"] = boost::any(*targetRepoName);
    }
    if (targetTag) {
      res["TargetTag"] = boost::any(*targetTag);
    }
    if (targetUserId) {
      res["TargetUserId"] = boost::any(*targetUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Override") != m.end() && !m["Override"].empty()) {
      override = make_shared<bool>(boost::any_cast<bool>(m["Override"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TargetInstanceId") != m.end() && !m["TargetInstanceId"].empty()) {
      targetInstanceId = make_shared<string>(boost::any_cast<string>(m["TargetInstanceId"]));
    }
    if (m.find("TargetNamespace") != m.end() && !m["TargetNamespace"].empty()) {
      targetNamespace = make_shared<string>(boost::any_cast<string>(m["TargetNamespace"]));
    }
    if (m.find("TargetRegionId") != m.end() && !m["TargetRegionId"].empty()) {
      targetRegionId = make_shared<string>(boost::any_cast<string>(m["TargetRegionId"]));
    }
    if (m.find("TargetRepoName") != m.end() && !m["TargetRepoName"].empty()) {
      targetRepoName = make_shared<string>(boost::any_cast<string>(m["TargetRepoName"]));
    }
    if (m.find("TargetTag") != m.end() && !m["TargetTag"].empty()) {
      targetTag = make_shared<string>(boost::any_cast<string>(m["TargetTag"]));
    }
    if (m.find("TargetUserId") != m.end() && !m["TargetUserId"].empty()) {
      targetUserId = make_shared<string>(boost::any_cast<string>(m["TargetUserId"]));
    }
  }


  virtual ~CreateRepoSyncTaskRequest() = default;
};
class CreateRepoSyncTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<string> syncTaskId{};

  CreateRepoSyncTaskResponseBody() {}

  explicit CreateRepoSyncTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (syncTaskId) {
      res["SyncTaskId"] = boost::any(*syncTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SyncTaskId") != m.end() && !m["SyncTaskId"].empty()) {
      syncTaskId = make_shared<string>(boost::any_cast<string>(m["SyncTaskId"]));
    }
  }


  virtual ~CreateRepoSyncTaskResponseBody() = default;
};
class CreateRepoSyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRepoSyncTaskResponseBody> body{};

  CreateRepoSyncTaskResponse() {}

  explicit CreateRepoSyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepoSyncTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepoSyncTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepoSyncTaskResponse() = default;
};
class CreateRepoSyncTaskByRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> syncRuleId{};
  shared_ptr<string> tag{};

  CreateRepoSyncTaskByRuleRequest() {}

  explicit CreateRepoSyncTaskByRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (syncRuleId) {
      res["SyncRuleId"] = boost::any(*syncRuleId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("SyncRuleId") != m.end() && !m["SyncRuleId"].empty()) {
      syncRuleId = make_shared<string>(boost::any_cast<string>(m["SyncRuleId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~CreateRepoSyncTaskByRuleRequest() = default;
};
class CreateRepoSyncTaskByRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<string> syncTaskId{};

  CreateRepoSyncTaskByRuleResponseBody() {}

  explicit CreateRepoSyncTaskByRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (syncTaskId) {
      res["SyncTaskId"] = boost::any(*syncTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SyncTaskId") != m.end() && !m["SyncTaskId"].empty()) {
      syncTaskId = make_shared<string>(boost::any_cast<string>(m["SyncTaskId"]));
    }
  }


  virtual ~CreateRepoSyncTaskByRuleResponseBody() = default;
};
class CreateRepoSyncTaskByRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRepoSyncTaskByRuleResponseBody> body{};

  CreateRepoSyncTaskByRuleResponse() {}

  explicit CreateRepoSyncTaskByRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepoSyncTaskByRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepoSyncTaskByRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepoSyncTaskByRuleResponse() = default;
};
class CreateRepoTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> fromTag{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> repoName{};
  shared_ptr<string> toTag{};

  CreateRepoTagRequest() {}

  explicit CreateRepoTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromTag) {
      res["FromTag"] = boost::any(*fromTag);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (toTag) {
      res["ToTag"] = boost::any(*toTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromTag") != m.end() && !m["FromTag"].empty()) {
      fromTag = make_shared<string>(boost::any_cast<string>(m["FromTag"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("ToTag") != m.end() && !m["ToTag"].empty()) {
      toTag = make_shared<string>(boost::any_cast<string>(m["ToTag"]));
    }
  }


  virtual ~CreateRepoTagRequest() = default;
};
class CreateRepoTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CreateRepoTagResponseBody() {}

  explicit CreateRepoTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRepoTagResponseBody() = default;
};
class CreateRepoTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRepoTagResponseBody> body{};

  CreateRepoTagResponse() {}

  explicit CreateRepoTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepoTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepoTagResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepoTagResponse() = default;
};
class CreateRepoTagScanTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> digest{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> scanService{};
  shared_ptr<string> scanType{};
  shared_ptr<string> tag{};

  CreateRepoTagScanTaskRequest() {}

  explicit CreateRepoTagScanTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (scanService) {
      res["ScanService"] = boost::any(*scanService);
    }
    if (scanType) {
      res["ScanType"] = boost::any(*scanType);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("ScanService") != m.end() && !m["ScanService"].empty()) {
      scanService = make_shared<string>(boost::any_cast<string>(m["ScanService"]));
    }
    if (m.find("ScanType") != m.end() && !m["ScanType"].empty()) {
      scanType = make_shared<string>(boost::any_cast<string>(m["ScanType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~CreateRepoTagScanTaskRequest() = default;
};
class CreateRepoTagScanTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  CreateRepoTagScanTaskResponseBody() {}

  explicit CreateRepoTagScanTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRepoTagScanTaskResponseBody() = default;
};
class CreateRepoTagScanTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRepoTagScanTaskResponseBody> body{};

  CreateRepoTagScanTaskResponse() {}

  explicit CreateRepoTagScanTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepoTagScanTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepoTagScanTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepoTagScanTaskResponse() = default;
};
class CreateRepoTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> triggerName{};
  shared_ptr<string> triggerTag{};
  shared_ptr<string> triggerType{};
  shared_ptr<string> triggerUrl{};

  CreateRepoTriggerRequest() {}

  explicit CreateRepoTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (triggerName) {
      res["TriggerName"] = boost::any(*triggerName);
    }
    if (triggerTag) {
      res["TriggerTag"] = boost::any(*triggerTag);
    }
    if (triggerType) {
      res["TriggerType"] = boost::any(*triggerType);
    }
    if (triggerUrl) {
      res["TriggerUrl"] = boost::any(*triggerUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("TriggerName") != m.end() && !m["TriggerName"].empty()) {
      triggerName = make_shared<string>(boost::any_cast<string>(m["TriggerName"]));
    }
    if (m.find("TriggerTag") != m.end() && !m["TriggerTag"].empty()) {
      triggerTag = make_shared<string>(boost::any_cast<string>(m["TriggerTag"]));
    }
    if (m.find("TriggerType") != m.end() && !m["TriggerType"].empty()) {
      triggerType = make_shared<string>(boost::any_cast<string>(m["TriggerType"]));
    }
    if (m.find("TriggerUrl") != m.end() && !m["TriggerUrl"].empty()) {
      triggerUrl = make_shared<string>(boost::any_cast<string>(m["TriggerUrl"]));
    }
  }


  virtual ~CreateRepoTriggerRequest() = default;
};
class CreateRepoTriggerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<string> triggerId{};

  CreateRepoTriggerResponseBody() {}

  explicit CreateRepoTriggerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (triggerId) {
      res["TriggerId"] = boost::any(*triggerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TriggerId") != m.end() && !m["TriggerId"].empty()) {
      triggerId = make_shared<string>(boost::any_cast<string>(m["TriggerId"]));
    }
  }


  virtual ~CreateRepoTriggerResponseBody() = default;
};
class CreateRepoTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRepoTriggerResponseBody> body{};

  CreateRepoTriggerResponse() {}

  explicit CreateRepoTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepoTriggerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepoTriggerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepoTriggerResponse() = default;
};
class CreateRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> repoType{};
  shared_ptr<string> summary{};
  shared_ptr<bool> tagImmutability{};

  CreateRepositoryRequest() {}

  explicit CreateRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (tagImmutability) {
      res["TagImmutability"] = boost::any(*tagImmutability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("TagImmutability") != m.end() && !m["TagImmutability"].empty()) {
      tagImmutability = make_shared<bool>(boost::any_cast<bool>(m["TagImmutability"]));
    }
  }


  virtual ~CreateRepositoryRequest() = default;
};
class CreateRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> repoId{};
  shared_ptr<string> requestId{};

  CreateRepositoryResponseBody() {}

  explicit CreateRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRepositoryResponseBody() = default;
};
class CreateRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRepositoryResponseBody> body{};

  CreateRepositoryResponse() {}

  explicit CreateRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRepositoryResponse() = default;
};
class DeleteArtifactLifecycleRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleId{};

  DeleteArtifactLifecycleRuleRequest() {}

  explicit DeleteArtifactLifecycleRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DeleteArtifactLifecycleRuleRequest() = default;
};
class DeleteArtifactLifecycleRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteArtifactLifecycleRuleResponseBody() {}

  explicit DeleteArtifactLifecycleRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteArtifactLifecycleRuleResponseBody() = default;
};
class DeleteArtifactLifecycleRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteArtifactLifecycleRuleResponseBody> body{};

  DeleteArtifactLifecycleRuleResponse() {}

  explicit DeleteArtifactLifecycleRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteArtifactLifecycleRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteArtifactLifecycleRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteArtifactLifecycleRuleResponse() = default;
};
class DeleteArtifactSubscriptionRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleId{};

  DeleteArtifactSubscriptionRuleRequest() {}

  explicit DeleteArtifactSubscriptionRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DeleteArtifactSubscriptionRuleRequest() = default;
};
class DeleteArtifactSubscriptionRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteArtifactSubscriptionRuleResponseBody() {}

  explicit DeleteArtifactSubscriptionRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteArtifactSubscriptionRuleResponseBody() = default;
};
class DeleteArtifactSubscriptionRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteArtifactSubscriptionRuleResponseBody> body{};

  DeleteArtifactSubscriptionRuleResponse() {}

  explicit DeleteArtifactSubscriptionRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteArtifactSubscriptionRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteArtifactSubscriptionRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteArtifactSubscriptionRuleResponse() = default;
};
class DeleteChainRequest : public Darabonba::Model {
public:
  shared_ptr<string> chainId{};
  shared_ptr<string> instanceId{};

  DeleteChainRequest() {}

  explicit DeleteChainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chainId) {
      res["ChainId"] = boost::any(*chainId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChainId") != m.end() && !m["ChainId"].empty()) {
      chainId = make_shared<string>(boost::any_cast<string>(m["ChainId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteChainRequest() = default;
};
class DeleteChainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteChainResponseBody() {}

  explicit DeleteChainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteChainResponseBody() = default;
};
class DeleteChainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChainResponseBody> body{};

  DeleteChainResponse() {}

  explicit DeleteChainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteChainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChainResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChainResponse() = default;
};
class DeleteChartNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};

  DeleteChartNamespaceRequest() {}

  explicit DeleteChartNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~DeleteChartNamespaceRequest() = default;
};
class DeleteChartNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteChartNamespaceResponseBody() {}

  explicit DeleteChartNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteChartNamespaceResponseBody() = default;
};
class DeleteChartNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChartNamespaceResponseBody> body{};

  DeleteChartNamespaceResponse() {}

  explicit DeleteChartNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteChartNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChartNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChartNamespaceResponse() = default;
};
class DeleteChartReleaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> chart{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> release{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  DeleteChartReleaseRequest() {}

  explicit DeleteChartReleaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chart) {
      res["Chart"] = boost::any(*chart);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Chart") != m.end() && !m["Chart"].empty()) {
      chart = make_shared<string>(boost::any_cast<string>(m["Chart"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~DeleteChartReleaseRequest() = default;
};
class DeleteChartReleaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteChartReleaseResponseBody() {}

  explicit DeleteChartReleaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteChartReleaseResponseBody() = default;
};
class DeleteChartReleaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChartReleaseResponseBody> body{};

  DeleteChartReleaseResponse() {}

  explicit DeleteChartReleaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteChartReleaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChartReleaseResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChartReleaseResponse() = default;
};
class DeleteChartRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  DeleteChartRepositoryRequest() {}

  explicit DeleteChartRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~DeleteChartRepositoryRequest() = default;
};
class DeleteChartRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteChartRepositoryResponseBody() {}

  explicit DeleteChartRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteChartRepositoryResponseBody() = default;
};
class DeleteChartRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChartRepositoryResponseBody> body{};

  DeleteChartRepositoryResponse() {}

  explicit DeleteChartRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteChartRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChartRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChartRepositoryResponse() = default;
};
class DeleteEventCenterRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleId{};

  DeleteEventCenterRuleRequest() {}

  explicit DeleteEventCenterRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DeleteEventCenterRuleRequest() = default;
};
class DeleteEventCenterRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};

  DeleteEventCenterRuleResponseBody() {}

  explicit DeleteEventCenterRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteEventCenterRuleResponseBody() = default;
};
class DeleteEventCenterRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEventCenterRuleResponseBody> body{};

  DeleteEventCenterRuleResponse() {}

  explicit DeleteEventCenterRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEventCenterRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEventCenterRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEventCenterRuleResponse() = default;
};
class DeleteInstanceEndpointAclPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointType{};
  shared_ptr<string> entry{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> moduleName{};

  DeleteInstanceEndpointAclPolicyRequest() {}

  explicit DeleteInstanceEndpointAclPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~DeleteInstanceEndpointAclPolicyRequest() = default;
};
class DeleteInstanceEndpointAclPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteInstanceEndpointAclPolicyResponseBody() {}

  explicit DeleteInstanceEndpointAclPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteInstanceEndpointAclPolicyResponseBody() = default;
};
class DeleteInstanceEndpointAclPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceEndpointAclPolicyResponseBody> body{};

  DeleteInstanceEndpointAclPolicyResponse() {}

  explicit DeleteInstanceEndpointAclPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceEndpointAclPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceEndpointAclPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceEndpointAclPolicyResponse() = default;
};
class DeleteInstanceVpcEndpointLinkedVpcRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};

  DeleteInstanceVpcEndpointLinkedVpcRequest() {}

  explicit DeleteInstanceVpcEndpointLinkedVpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~DeleteInstanceVpcEndpointLinkedVpcRequest() = default;
};
class DeleteInstanceVpcEndpointLinkedVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteInstanceVpcEndpointLinkedVpcResponseBody() {}

  explicit DeleteInstanceVpcEndpointLinkedVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteInstanceVpcEndpointLinkedVpcResponseBody() = default;
};
class DeleteInstanceVpcEndpointLinkedVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceVpcEndpointLinkedVpcResponseBody> body{};

  DeleteInstanceVpcEndpointLinkedVpcResponse() {}

  explicit DeleteInstanceVpcEndpointLinkedVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceVpcEndpointLinkedVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceVpcEndpointLinkedVpcResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceVpcEndpointLinkedVpcResponse() = default;
};
class DeleteNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};

  DeleteNamespaceRequest() {}

  explicit DeleteNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~DeleteNamespaceRequest() = default;
};
class DeleteNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteNamespaceResponseBody() {}

  explicit DeleteNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteNamespaceResponseBody() = default;
};
class DeleteNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNamespaceResponseBody> body{};

  DeleteNamespaceResponse() {}

  explicit DeleteNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNamespaceResponse() = default;
};
class DeleteRepoBuildRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildRuleId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};

  DeleteRepoBuildRuleRequest() {}

  explicit DeleteRepoBuildRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRuleId) {
      res["BuildRuleId"] = boost::any(*buildRuleId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRuleId") != m.end() && !m["BuildRuleId"].empty()) {
      buildRuleId = make_shared<string>(boost::any_cast<string>(m["BuildRuleId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~DeleteRepoBuildRuleRequest() = default;
};
class DeleteRepoBuildRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteRepoBuildRuleResponseBody() {}

  explicit DeleteRepoBuildRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRepoBuildRuleResponseBody() = default;
};
class DeleteRepoBuildRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRepoBuildRuleResponseBody> body{};

  DeleteRepoBuildRuleResponse() {}

  explicit DeleteRepoBuildRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepoBuildRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepoBuildRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepoBuildRuleResponse() = default;
};
class DeleteRepoSyncRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> syncRuleId{};

  DeleteRepoSyncRuleRequest() {}

  explicit DeleteRepoSyncRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (syncRuleId) {
      res["SyncRuleId"] = boost::any(*syncRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SyncRuleId") != m.end() && !m["SyncRuleId"].empty()) {
      syncRuleId = make_shared<string>(boost::any_cast<string>(m["SyncRuleId"]));
    }
  }


  virtual ~DeleteRepoSyncRuleRequest() = default;
};
class DeleteRepoSyncRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteRepoSyncRuleResponseBody() {}

  explicit DeleteRepoSyncRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRepoSyncRuleResponseBody() = default;
};
class DeleteRepoSyncRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRepoSyncRuleResponseBody> body{};

  DeleteRepoSyncRuleResponse() {}

  explicit DeleteRepoSyncRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepoSyncRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepoSyncRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepoSyncRuleResponse() = default;
};
class DeleteRepoTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> tag{};

  DeleteRepoTagRequest() {}

  explicit DeleteRepoTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~DeleteRepoTagRequest() = default;
};
class DeleteRepoTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteRepoTagResponseBody() {}

  explicit DeleteRepoTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRepoTagResponseBody() = default;
};
class DeleteRepoTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRepoTagResponseBody> body{};

  DeleteRepoTagResponse() {}

  explicit DeleteRepoTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepoTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepoTagResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepoTagResponse() = default;
};
class DeleteRepoTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> triggerId{};

  DeleteRepoTriggerRequest() {}

  explicit DeleteRepoTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (triggerId) {
      res["TriggerId"] = boost::any(*triggerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("TriggerId") != m.end() && !m["TriggerId"].empty()) {
      triggerId = make_shared<string>(boost::any_cast<string>(m["TriggerId"]));
    }
  }


  virtual ~DeleteRepoTriggerRequest() = default;
};
class DeleteRepoTriggerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteRepoTriggerResponseBody() {}

  explicit DeleteRepoTriggerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRepoTriggerResponseBody() = default;
};
class DeleteRepoTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRepoTriggerResponseBody> body{};

  DeleteRepoTriggerResponse() {}

  explicit DeleteRepoTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepoTriggerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepoTriggerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepoTriggerResponse() = default;
};
class DeleteRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  DeleteRepositoryRequest() {}

  explicit DeleteRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~DeleteRepositoryRequest() = default;
};
class DeleteRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  DeleteRepositoryResponseBody() {}

  explicit DeleteRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRepositoryResponseBody() = default;
};
class DeleteRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRepositoryResponseBody> body{};

  DeleteRepositoryResponse() {}

  explicit DeleteRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRepositoryResponse() = default;
};
class GetArtifactBuildRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> buildRuleId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> scopeId{};
  shared_ptr<string> scopeType{};

  GetArtifactBuildRuleRequest() {}

  explicit GetArtifactBuildRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (buildRuleId) {
      res["BuildRuleId"] = boost::any(*buildRuleId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (scopeId) {
      res["ScopeId"] = boost::any(*scopeId);
    }
    if (scopeType) {
      res["ScopeType"] = boost::any(*scopeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("BuildRuleId") != m.end() && !m["BuildRuleId"].empty()) {
      buildRuleId = make_shared<string>(boost::any_cast<string>(m["BuildRuleId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ScopeId") != m.end() && !m["ScopeId"].empty()) {
      scopeId = make_shared<string>(boost::any_cast<string>(m["ScopeId"]));
    }
    if (m.find("ScopeType") != m.end() && !m["ScopeType"].empty()) {
      scopeType = make_shared<string>(boost::any_cast<string>(m["ScopeType"]));
    }
  }


  virtual ~GetArtifactBuildRuleRequest() = default;
};
class GetArtifactBuildRuleResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<bool> imageIndexOnly{};
  shared_ptr<string> priorityFile{};

  GetArtifactBuildRuleResponseBodyParameters() {}

  explicit GetArtifactBuildRuleResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageIndexOnly) {
      res["ImageIndexOnly"] = boost::any(*imageIndexOnly);
    }
    if (priorityFile) {
      res["PriorityFile"] = boost::any(*priorityFile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageIndexOnly") != m.end() && !m["ImageIndexOnly"].empty()) {
      imageIndexOnly = make_shared<bool>(boost::any_cast<bool>(m["ImageIndexOnly"]));
    }
    if (m.find("PriorityFile") != m.end() && !m["PriorityFile"].empty()) {
      priorityFile = make_shared<string>(boost::any_cast<string>(m["PriorityFile"]));
    }
  }


  virtual ~GetArtifactBuildRuleResponseBodyParameters() = default;
};
class GetArtifactBuildRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> buildRuleId{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<GetArtifactBuildRuleResponseBodyParameters> parameters{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scopeId{};
  shared_ptr<string> scopeType{};

  GetArtifactBuildRuleResponseBody() {}

  explicit GetArtifactBuildRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (buildRuleId) {
      res["BuildRuleId"] = boost::any(*buildRuleId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (parameters) {
      res["Parameters"] = parameters ? boost::any(parameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scopeId) {
      res["ScopeId"] = boost::any(*scopeId);
    }
    if (scopeType) {
      res["ScopeType"] = boost::any(*scopeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("BuildRuleId") != m.end() && !m["BuildRuleId"].empty()) {
      buildRuleId = make_shared<string>(boost::any_cast<string>(m["BuildRuleId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["Parameters"].type()) {
        GetArtifactBuildRuleResponseBodyParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameters"]));
        parameters = make_shared<GetArtifactBuildRuleResponseBodyParameters>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScopeId") != m.end() && !m["ScopeId"].empty()) {
      scopeId = make_shared<string>(boost::any_cast<string>(m["ScopeId"]));
    }
    if (m.find("ScopeType") != m.end() && !m["ScopeType"].empty()) {
      scopeType = make_shared<string>(boost::any_cast<string>(m["ScopeType"]));
    }
  }


  virtual ~GetArtifactBuildRuleResponseBody() = default;
};
class GetArtifactBuildRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetArtifactBuildRuleResponseBody> body{};

  GetArtifactBuildRuleResponse() {}

  explicit GetArtifactBuildRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetArtifactBuildRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetArtifactBuildRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetArtifactBuildRuleResponse() = default;
};
class GetArtifactBuildTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildTaskId{};
  shared_ptr<string> instanceId{};

  GetArtifactBuildTaskRequest() {}

  explicit GetArtifactBuildTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildTaskId) {
      res["BuildTaskId"] = boost::any(*buildTaskId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildTaskId") != m.end() && !m["BuildTaskId"].empty()) {
      buildTaskId = make_shared<string>(boost::any_cast<string>(m["BuildTaskId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetArtifactBuildTaskRequest() = default;
};
class GetArtifactBuildTaskResponseBodySourceArtifact : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> repoId{};
  shared_ptr<string> version{};

  GetArtifactBuildTaskResponseBodySourceArtifact() {}

  explicit GetArtifactBuildTaskResponseBodySourceArtifact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetArtifactBuildTaskResponseBodySourceArtifact() = default;
};
class GetArtifactBuildTaskResponseBodyTargetArtifact : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> repoId{};
  shared_ptr<string> version{};

  GetArtifactBuildTaskResponseBodyTargetArtifact() {}

  explicit GetArtifactBuildTaskResponseBodyTargetArtifact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetArtifactBuildTaskResponseBodyTargetArtifact() = default;
};
class GetArtifactBuildTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> artifactBuildType{};
  shared_ptr<string> buildTaskId{};
  shared_ptr<string> code{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<string>> instructions{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<GetArtifactBuildTaskResponseBodySourceArtifact> sourceArtifact{};
  shared_ptr<long> startTime{};
  shared_ptr<GetArtifactBuildTaskResponseBodyTargetArtifact> targetArtifact{};
  shared_ptr<string> taskStatus{};

  GetArtifactBuildTaskResponseBody() {}

  explicit GetArtifactBuildTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactBuildType) {
      res["ArtifactBuildType"] = boost::any(*artifactBuildType);
    }
    if (buildTaskId) {
      res["BuildTaskId"] = boost::any(*buildTaskId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instructions) {
      res["Instructions"] = boost::any(*instructions);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceArtifact) {
      res["SourceArtifact"] = sourceArtifact ? boost::any(sourceArtifact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (targetArtifact) {
      res["TargetArtifact"] = targetArtifact ? boost::any(targetArtifact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactBuildType") != m.end() && !m["ArtifactBuildType"].empty()) {
      artifactBuildType = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildType"]));
    }
    if (m.find("BuildTaskId") != m.end() && !m["BuildTaskId"].empty()) {
      buildTaskId = make_shared<string>(boost::any_cast<string>(m["BuildTaskId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Instructions") != m.end() && !m["Instructions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Instructions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Instructions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instructions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceArtifact") != m.end() && !m["SourceArtifact"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceArtifact"].type()) {
        GetArtifactBuildTaskResponseBodySourceArtifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceArtifact"]));
        sourceArtifact = make_shared<GetArtifactBuildTaskResponseBodySourceArtifact>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TargetArtifact") != m.end() && !m["TargetArtifact"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetArtifact"].type()) {
        GetArtifactBuildTaskResponseBodyTargetArtifact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetArtifact"]));
        targetArtifact = make_shared<GetArtifactBuildTaskResponseBodyTargetArtifact>(model1);
      }
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~GetArtifactBuildTaskResponseBody() = default;
};
class GetArtifactBuildTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetArtifactBuildTaskResponseBody> body{};

  GetArtifactBuildTaskResponse() {}

  explicit GetArtifactBuildTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetArtifactBuildTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetArtifactBuildTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetArtifactBuildTaskResponse() = default;
};
class GetArtifactLifecycleRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleId{};

  GetArtifactLifecycleRuleRequest() {}

  explicit GetArtifactLifecycleRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~GetArtifactLifecycleRuleRequest() = default;
};
class GetArtifactLifecycleRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> auto_{};
  shared_ptr<string> code{};
  shared_ptr<long> createTime{};
  shared_ptr<bool> enableDeleteTag{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> namespaceName{};
  shared_ptr<long> nextTime{};
  shared_ptr<string> repoName{};
  shared_ptr<string> requestId{};
  shared_ptr<long> retentionTagCount{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<string> scope{};
  shared_ptr<string> tagRegexp{};

  GetArtifactLifecycleRuleResponseBody() {}

  explicit GetArtifactLifecycleRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auto_) {
      res["Auto"] = boost::any(*auto_);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (enableDeleteTag) {
      res["EnableDeleteTag"] = boost::any(*enableDeleteTag);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (nextTime) {
      res["NextTime"] = boost::any(*nextTime);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (retentionTagCount) {
      res["RetentionTagCount"] = boost::any(*retentionTagCount);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (tagRegexp) {
      res["TagRegexp"] = boost::any(*tagRegexp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Auto") != m.end() && !m["Auto"].empty()) {
      auto_ = make_shared<bool>(boost::any_cast<bool>(m["Auto"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EnableDeleteTag") != m.end() && !m["EnableDeleteTag"].empty()) {
      enableDeleteTag = make_shared<bool>(boost::any_cast<bool>(m["EnableDeleteTag"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("NextTime") != m.end() && !m["NextTime"].empty()) {
      nextTime = make_shared<long>(boost::any_cast<long>(m["NextTime"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RetentionTagCount") != m.end() && !m["RetentionTagCount"].empty()) {
      retentionTagCount = make_shared<long>(boost::any_cast<long>(m["RetentionTagCount"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("TagRegexp") != m.end() && !m["TagRegexp"].empty()) {
      tagRegexp = make_shared<string>(boost::any_cast<string>(m["TagRegexp"]));
    }
  }


  virtual ~GetArtifactLifecycleRuleResponseBody() = default;
};
class GetArtifactLifecycleRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetArtifactLifecycleRuleResponseBody> body{};

  GetArtifactLifecycleRuleResponse() {}

  explicit GetArtifactLifecycleRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetArtifactLifecycleRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetArtifactLifecycleRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetArtifactLifecycleRuleResponse() = default;
};
class GetArtifactSubscriptionRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleId{};

  GetArtifactSubscriptionRuleRequest() {}

  explicit GetArtifactSubscriptionRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~GetArtifactSubscriptionRuleRequest() = default;
};
class GetArtifactSubscriptionRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> accelerate{};
  shared_ptr<string> code{};
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> namespaceName{};
  shared_ptr<bool> override{};
  shared_ptr<vector<string>> platform{};
  shared_ptr<string> repoName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> sourceNamespaceName{};
  shared_ptr<string> sourceProvider{};
  shared_ptr<string> sourceRepoName{};
  shared_ptr<long> tagCount{};
  shared_ptr<string> tagRegexp{};

  GetArtifactSubscriptionRuleResponseBody() {}

  explicit GetArtifactSubscriptionRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accelerate) {
      res["Accelerate"] = boost::any(*accelerate);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (override) {
      res["Override"] = boost::any(*override);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (sourceNamespaceName) {
      res["SourceNamespaceName"] = boost::any(*sourceNamespaceName);
    }
    if (sourceProvider) {
      res["SourceProvider"] = boost::any(*sourceProvider);
    }
    if (sourceRepoName) {
      res["SourceRepoName"] = boost::any(*sourceRepoName);
    }
    if (tagCount) {
      res["TagCount"] = boost::any(*tagCount);
    }
    if (tagRegexp) {
      res["TagRegexp"] = boost::any(*tagRegexp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accelerate") != m.end() && !m["Accelerate"].empty()) {
      accelerate = make_shared<bool>(boost::any_cast<bool>(m["Accelerate"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("Override") != m.end() && !m["Override"].empty()) {
      override = make_shared<bool>(boost::any_cast<bool>(m["Override"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Platform"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Platform"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      platform = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("SourceNamespaceName") != m.end() && !m["SourceNamespaceName"].empty()) {
      sourceNamespaceName = make_shared<string>(boost::any_cast<string>(m["SourceNamespaceName"]));
    }
    if (m.find("SourceProvider") != m.end() && !m["SourceProvider"].empty()) {
      sourceProvider = make_shared<string>(boost::any_cast<string>(m["SourceProvider"]));
    }
    if (m.find("SourceRepoName") != m.end() && !m["SourceRepoName"].empty()) {
      sourceRepoName = make_shared<string>(boost::any_cast<string>(m["SourceRepoName"]));
    }
    if (m.find("TagCount") != m.end() && !m["TagCount"].empty()) {
      tagCount = make_shared<long>(boost::any_cast<long>(m["TagCount"]));
    }
    if (m.find("TagRegexp") != m.end() && !m["TagRegexp"].empty()) {
      tagRegexp = make_shared<string>(boost::any_cast<string>(m["TagRegexp"]));
    }
  }


  virtual ~GetArtifactSubscriptionRuleResponseBody() = default;
};
class GetArtifactSubscriptionRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetArtifactSubscriptionRuleResponseBody> body{};

  GetArtifactSubscriptionRuleResponse() {}

  explicit GetArtifactSubscriptionRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetArtifactSubscriptionRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetArtifactSubscriptionRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetArtifactSubscriptionRuleResponse() = default;
};
class GetArtifactSubscriptionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskId{};

  GetArtifactSubscriptionTaskRequest() {}

  explicit GetArtifactSubscriptionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetArtifactSubscriptionTaskRequest() = default;
};
class GetArtifactSubscriptionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> code{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> message{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> repoName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceNamespaceName{};
  shared_ptr<string> sourceProvider{};
  shared_ptr<string> sourceRepoName{};
  shared_ptr<string> sourceRepoType{};
  shared_ptr<long> startTime{};
  shared_ptr<long> tagSubscriptionCount{};
  shared_ptr<long> tagTotalCount{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskResult{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> taskType{};

  GetArtifactSubscriptionTaskResponseBody() {}

  explicit GetArtifactSubscriptionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceNamespaceName) {
      res["SourceNamespaceName"] = boost::any(*sourceNamespaceName);
    }
    if (sourceProvider) {
      res["SourceProvider"] = boost::any(*sourceProvider);
    }
    if (sourceRepoName) {
      res["SourceRepoName"] = boost::any(*sourceRepoName);
    }
    if (sourceRepoType) {
      res["SourceRepoType"] = boost::any(*sourceRepoType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tagSubscriptionCount) {
      res["TagSubscriptionCount"] = boost::any(*tagSubscriptionCount);
    }
    if (tagTotalCount) {
      res["TagTotalCount"] = boost::any(*tagTotalCount);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskResult) {
      res["TaskResult"] = boost::any(*taskResult);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceNamespaceName") != m.end() && !m["SourceNamespaceName"].empty()) {
      sourceNamespaceName = make_shared<string>(boost::any_cast<string>(m["SourceNamespaceName"]));
    }
    if (m.find("SourceProvider") != m.end() && !m["SourceProvider"].empty()) {
      sourceProvider = make_shared<string>(boost::any_cast<string>(m["SourceProvider"]));
    }
    if (m.find("SourceRepoName") != m.end() && !m["SourceRepoName"].empty()) {
      sourceRepoName = make_shared<string>(boost::any_cast<string>(m["SourceRepoName"]));
    }
    if (m.find("SourceRepoType") != m.end() && !m["SourceRepoType"].empty()) {
      sourceRepoType = make_shared<string>(boost::any_cast<string>(m["SourceRepoType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TagSubscriptionCount") != m.end() && !m["TagSubscriptionCount"].empty()) {
      tagSubscriptionCount = make_shared<long>(boost::any_cast<long>(m["TagSubscriptionCount"]));
    }
    if (m.find("TagTotalCount") != m.end() && !m["TagTotalCount"].empty()) {
      tagTotalCount = make_shared<long>(boost::any_cast<long>(m["TagTotalCount"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskResult") != m.end() && !m["TaskResult"].empty()) {
      taskResult = make_shared<string>(boost::any_cast<string>(m["TaskResult"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~GetArtifactSubscriptionTaskResponseBody() = default;
};
class GetArtifactSubscriptionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetArtifactSubscriptionTaskResponseBody> body{};

  GetArtifactSubscriptionTaskResponse() {}

  explicit GetArtifactSubscriptionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetArtifactSubscriptionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetArtifactSubscriptionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetArtifactSubscriptionTaskResponse() = default;
};
class GetArtifactSubscriptionTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> taskId{};

  GetArtifactSubscriptionTaskResultRequest() {}

  explicit GetArtifactSubscriptionTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetArtifactSubscriptionTaskResultRequest() = default;
};
class GetArtifactSubscriptionTaskResultResponseBodyTaskResults : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> repoName{};
  shared_ptr<string> result{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};
  shared_ptr<string> taskId{};

  GetArtifactSubscriptionTaskResultResponseBodyTaskResults() {}

  explicit GetArtifactSubscriptionTaskResultResponseBodyTaskResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetArtifactSubscriptionTaskResultResponseBodyTaskResults() = default;
};
class GetArtifactSubscriptionTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetArtifactSubscriptionTaskResultResponseBodyTaskResults>> taskResults{};
  shared_ptr<long> totalCount{};

  GetArtifactSubscriptionTaskResultResponseBody() {}

  explicit GetArtifactSubscriptionTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskResults) {
      vector<boost::any> temp1;
      for(auto item1:*taskResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskResults"] = boost::any(temp1);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskResults") != m.end() && !m["TaskResults"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskResults"].type()) {
        vector<GetArtifactSubscriptionTaskResultResponseBodyTaskResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetArtifactSubscriptionTaskResultResponseBodyTaskResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskResults = make_shared<vector<GetArtifactSubscriptionTaskResultResponseBodyTaskResults>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetArtifactSubscriptionTaskResultResponseBody() = default;
};
class GetArtifactSubscriptionTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetArtifactSubscriptionTaskResultResponseBody> body{};

  GetArtifactSubscriptionTaskResultResponse() {}

  explicit GetArtifactSubscriptionTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetArtifactSubscriptionTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetArtifactSubscriptionTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetArtifactSubscriptionTaskResultResponse() = default;
};
class GetAuthorizationTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetAuthorizationTokenRequest() {}

  explicit GetAuthorizationTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetAuthorizationTokenRequest() = default;
};
class GetAuthorizationTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> authorizationToken{};
  shared_ptr<string> code{};
  shared_ptr<long> expireTime{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tempUsername{};

  GetAuthorizationTokenResponseBody() {}

  explicit GetAuthorizationTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationToken) {
      res["AuthorizationToken"] = boost::any(*authorizationToken);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tempUsername) {
      res["TempUsername"] = boost::any(*tempUsername);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationToken") != m.end() && !m["AuthorizationToken"].empty()) {
      authorizationToken = make_shared<string>(boost::any_cast<string>(m["AuthorizationToken"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TempUsername") != m.end() && !m["TempUsername"].empty()) {
      tempUsername = make_shared<string>(boost::any_cast<string>(m["TempUsername"]));
    }
  }


  virtual ~GetAuthorizationTokenResponseBody() = default;
};
class GetAuthorizationTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAuthorizationTokenResponseBody> body{};

  GetAuthorizationTokenResponse() {}

  explicit GetAuthorizationTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuthorizationTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuthorizationTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuthorizationTokenResponse() = default;
};
class GetChainRequest : public Darabonba::Model {
public:
  shared_ptr<string> chainId{};
  shared_ptr<string> instanceId{};

  GetChainRequest() {}

  explicit GetChainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chainId) {
      res["ChainId"] = boost::any(*chainId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChainId") != m.end() && !m["ChainId"].empty()) {
      chainId = make_shared<string>(boost::any_cast<string>(m["ChainId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetChainRequest() = default;
};
class GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> baselineList{};
  shared_ptr<string> issueCount{};
  shared_ptr<string> issueLevel{};
  shared_ptr<string> issueList{};
  shared_ptr<string> logic{};
  shared_ptr<string> maliciousList{};

  GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy() {}

  explicit GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (baselineList) {
      res["BaselineList"] = boost::any(*baselineList);
    }
    if (issueCount) {
      res["IssueCount"] = boost::any(*issueCount);
    }
    if (issueLevel) {
      res["IssueLevel"] = boost::any(*issueLevel);
    }
    if (issueList) {
      res["IssueList"] = boost::any(*issueList);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (maliciousList) {
      res["MaliciousList"] = boost::any(*maliciousList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("BaselineList") != m.end() && !m["BaselineList"].empty()) {
      baselineList = make_shared<string>(boost::any_cast<string>(m["BaselineList"]));
    }
    if (m.find("IssueCount") != m.end() && !m["IssueCount"].empty()) {
      issueCount = make_shared<string>(boost::any_cast<string>(m["IssueCount"]));
    }
    if (m.find("IssueLevel") != m.end() && !m["IssueLevel"].empty()) {
      issueLevel = make_shared<string>(boost::any_cast<string>(m["IssueLevel"]));
    }
    if (m.find("IssueList") != m.end() && !m["IssueList"].empty()) {
      issueList = make_shared<string>(boost::any_cast<string>(m["IssueList"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<string>(boost::any_cast<string>(m["Logic"]));
    }
    if (m.find("MaliciousList") != m.end() && !m["MaliciousList"].empty()) {
      maliciousList = make_shared<string>(boost::any_cast<string>(m["MaliciousList"]));
    }
  }


  virtual ~GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy() = default;
};
class GetChainResponseBodyChainConfigNodesNodeConfig : public Darabonba::Model {
public:
  shared_ptr<GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy> denyPolicy{};
  shared_ptr<long> retry{};
  shared_ptr<string> scanEngine{};
  shared_ptr<long> timeout{};

  GetChainResponseBodyChainConfigNodesNodeConfig() {}

  explicit GetChainResponseBodyChainConfigNodesNodeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (denyPolicy) {
      res["DenyPolicy"] = denyPolicy ? boost::any(denyPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (retry) {
      res["Retry"] = boost::any(*retry);
    }
    if (scanEngine) {
      res["ScanEngine"] = boost::any(*scanEngine);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DenyPolicy") != m.end() && !m["DenyPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["DenyPolicy"].type()) {
        GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DenyPolicy"]));
        denyPolicy = make_shared<GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy>(model1);
      }
    }
    if (m.find("Retry") != m.end() && !m["Retry"].empty()) {
      retry = make_shared<long>(boost::any_cast<long>(m["Retry"]));
    }
    if (m.find("ScanEngine") != m.end() && !m["ScanEngine"].empty()) {
      scanEngine = make_shared<string>(boost::any_cast<string>(m["ScanEngine"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~GetChainResponseBodyChainConfigNodesNodeConfig() = default;
};
class GetChainResponseBodyChainConfigNodes : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<GetChainResponseBodyChainConfigNodesNodeConfig> nodeConfig{};
  shared_ptr<string> nodeName{};

  GetChainResponseBodyChainConfigNodes() {}

  explicit GetChainResponseBodyChainConfigNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (nodeConfig) {
      res["NodeConfig"] = nodeConfig ? boost::any(nodeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("NodeConfig") != m.end() && !m["NodeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeConfig"].type()) {
        GetChainResponseBodyChainConfigNodesNodeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeConfig"]));
        nodeConfig = make_shared<GetChainResponseBodyChainConfigNodesNodeConfig>(model1);
      }
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
  }


  virtual ~GetChainResponseBodyChainConfigNodes() = default;
};
class GetChainResponseBodyChainConfigRoutersFrom : public Darabonba::Model {
public:
  shared_ptr<string> nodeName{};

  GetChainResponseBodyChainConfigRoutersFrom() {}

  explicit GetChainResponseBodyChainConfigRoutersFrom(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
  }


  virtual ~GetChainResponseBodyChainConfigRoutersFrom() = default;
};
class GetChainResponseBodyChainConfigRoutersTo : public Darabonba::Model {
public:
  shared_ptr<string> nodeName{};

  GetChainResponseBodyChainConfigRoutersTo() {}

  explicit GetChainResponseBodyChainConfigRoutersTo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
  }


  virtual ~GetChainResponseBodyChainConfigRoutersTo() = default;
};
class GetChainResponseBodyChainConfigRouters : public Darabonba::Model {
public:
  shared_ptr<GetChainResponseBodyChainConfigRoutersFrom> from{};
  shared_ptr<GetChainResponseBodyChainConfigRoutersTo> to{};

  GetChainResponseBodyChainConfigRouters() {}

  explicit GetChainResponseBodyChainConfigRouters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = from ? boost::any(from->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (to) {
      res["To"] = to ? boost::any(to->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      if (typeid(map<string, boost::any>) == m["From"].type()) {
        GetChainResponseBodyChainConfigRoutersFrom model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["From"]));
        from = make_shared<GetChainResponseBodyChainConfigRoutersFrom>(model1);
      }
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      if (typeid(map<string, boost::any>) == m["To"].type()) {
        GetChainResponseBodyChainConfigRoutersTo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["To"]));
        to = make_shared<GetChainResponseBodyChainConfigRoutersTo>(model1);
      }
    }
  }


  virtual ~GetChainResponseBodyChainConfigRouters() = default;
};
class GetChainResponseBodyChainConfig : public Darabonba::Model {
public:
  shared_ptr<string> chainConfigId{};
  shared_ptr<bool> isActive{};
  shared_ptr<vector<GetChainResponseBodyChainConfigNodes>> nodes{};
  shared_ptr<vector<GetChainResponseBodyChainConfigRouters>> routers{};
  shared_ptr<string> version{};

  GetChainResponseBodyChainConfig() {}

  explicit GetChainResponseBodyChainConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chainConfigId) {
      res["ChainConfigId"] = boost::any(*chainConfigId);
    }
    if (isActive) {
      res["IsActive"] = boost::any(*isActive);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (routers) {
      vector<boost::any> temp1;
      for(auto item1:*routers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Routers"] = boost::any(temp1);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChainConfigId") != m.end() && !m["ChainConfigId"].empty()) {
      chainConfigId = make_shared<string>(boost::any_cast<string>(m["ChainConfigId"]));
    }
    if (m.find("IsActive") != m.end() && !m["IsActive"].empty()) {
      isActive = make_shared<bool>(boost::any_cast<bool>(m["IsActive"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<GetChainResponseBodyChainConfigNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChainResponseBodyChainConfigNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<GetChainResponseBodyChainConfigNodes>>(expect1);
      }
    }
    if (m.find("Routers") != m.end() && !m["Routers"].empty()) {
      if (typeid(vector<boost::any>) == m["Routers"].type()) {
        vector<GetChainResponseBodyChainConfigRouters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Routers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChainResponseBodyChainConfigRouters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routers = make_shared<vector<GetChainResponseBodyChainConfigRouters>>(expect1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetChainResponseBodyChainConfig() = default;
};
class GetChainResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetChainResponseBodyChainConfig> chainConfig{};
  shared_ptr<string> chainId{};
  shared_ptr<string> code{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> scopeExclude{};
  shared_ptr<string> scopeId{};
  shared_ptr<string> scopeType{};

  GetChainResponseBody() {}

  explicit GetChainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chainConfig) {
      res["ChainConfig"] = chainConfig ? boost::any(chainConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (chainId) {
      res["ChainId"] = boost::any(*chainId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scopeExclude) {
      res["ScopeExclude"] = boost::any(*scopeExclude);
    }
    if (scopeId) {
      res["ScopeId"] = boost::any(*scopeId);
    }
    if (scopeType) {
      res["ScopeType"] = boost::any(*scopeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChainConfig") != m.end() && !m["ChainConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChainConfig"].type()) {
        GetChainResponseBodyChainConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChainConfig"]));
        chainConfig = make_shared<GetChainResponseBodyChainConfig>(model1);
      }
    }
    if (m.find("ChainId") != m.end() && !m["ChainId"].empty()) {
      chainId = make_shared<string>(boost::any_cast<string>(m["ChainId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScopeExclude") != m.end() && !m["ScopeExclude"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScopeExclude"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScopeExclude"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scopeExclude = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScopeId") != m.end() && !m["ScopeId"].empty()) {
      scopeId = make_shared<string>(boost::any_cast<string>(m["ScopeId"]));
    }
    if (m.find("ScopeType") != m.end() && !m["ScopeType"].empty()) {
      scopeType = make_shared<string>(boost::any_cast<string>(m["ScopeType"]));
    }
  }


  virtual ~GetChainResponseBody() = default;
};
class GetChainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChainResponseBody> body{};

  GetChainResponse() {}

  explicit GetChainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChainResponseBody>(model1);
      }
    }
  }


  virtual ~GetChainResponse() = default;
};
class GetChartNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};

  GetChartNamespaceRequest() {}

  explicit GetChartNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~GetChartNamespaceRequest() = default;
};
class GetChartNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateRepo{};
  shared_ptr<string> code{};
  shared_ptr<string> defaultRepoType{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> namespaceStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};

  GetChartNamespaceResponseBody() {}

  explicit GetChartNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateRepo) {
      res["AutoCreateRepo"] = boost::any(*autoCreateRepo);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (defaultRepoType) {
      res["DefaultRepoType"] = boost::any(*defaultRepoType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (namespaceStatus) {
      res["NamespaceStatus"] = boost::any(*namespaceStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreateRepo") != m.end() && !m["AutoCreateRepo"].empty()) {
      autoCreateRepo = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateRepo"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DefaultRepoType") != m.end() && !m["DefaultRepoType"].empty()) {
      defaultRepoType = make_shared<string>(boost::any_cast<string>(m["DefaultRepoType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("NamespaceStatus") != m.end() && !m["NamespaceStatus"].empty()) {
      namespaceStatus = make_shared<string>(boost::any_cast<string>(m["NamespaceStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~GetChartNamespaceResponseBody() = default;
};
class GetChartNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChartNamespaceResponseBody> body{};

  GetChartNamespaceResponse() {}

  explicit GetChartNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChartNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChartNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetChartNamespaceResponse() = default;
};
class GetChartRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  GetChartRepositoryRequest() {}

  explicit GetChartRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~GetChartRepositoryRequest() = default;
};
class GetChartRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> repoId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> repoStatus{};
  shared_ptr<string> repoType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> summary{};

  GetChartRepositoryResponseBody() {}

  explicit GetChartRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (repoStatus) {
      res["RepoStatus"] = boost::any(*repoStatus);
    }
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("RepoStatus") != m.end() && !m["RepoStatus"].empty()) {
      repoStatus = make_shared<string>(boost::any_cast<string>(m["RepoStatus"]));
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
  }


  virtual ~GetChartRepositoryResponseBody() = default;
};
class GetChartRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChartRepositoryResponseBody> body{};

  GetChartRepositoryResponse() {}

  explicit GetChartRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChartRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChartRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetChartRepositoryResponse() = default;
};
class GetInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetInstanceRequest() {}

  explicit GetInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetInstanceRequest() = default;
};
class GetInstanceResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetInstanceResponseBodyTags() {}

  explicit GetInstanceResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstanceResponseBodyTags() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceIssue{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceSpecification{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<GetInstanceResponseBodyTags>> tags{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceIssue) {
      res["InstanceIssue"] = boost::any(*instanceIssue);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceSpecification) {
      res["InstanceSpecification"] = boost::any(*instanceSpecification);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceIssue") != m.end() && !m["InstanceIssue"].empty()) {
      instanceIssue = make_shared<string>(boost::any_cast<string>(m["InstanceIssue"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceSpecification") != m.end() && !m["InstanceSpecification"].empty()) {
      instanceSpecification = make_shared<string>(boost::any_cast<string>(m["InstanceSpecification"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetInstanceResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetInstanceResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~GetInstanceResponseBody() = default;
};
class GetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceResponseBody> body{};

  GetInstanceResponse() {}

  explicit GetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class GetInstanceCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  GetInstanceCountResponseBody() {}

  explicit GetInstanceCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetInstanceCountResponseBody() = default;
};
class GetInstanceCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceCountResponseBody> body{};

  GetInstanceCountResponse() {}

  explicit GetInstanceCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceCountResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceCountResponse() = default;
};
class GetInstanceEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> moduleName{};

  GetInstanceEndpointRequest() {}

  explicit GetInstanceEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~GetInstanceEndpointRequest() = default;
};
class GetInstanceEndpointResponseBodyAclEntries : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> entry{};

  GetInstanceEndpointResponseBodyAclEntries() {}

  explicit GetInstanceEndpointResponseBodyAclEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
  }


  virtual ~GetInstanceEndpointResponseBodyAclEntries() = default;
};
class GetInstanceEndpointResponseBodyDomains : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> type{};

  GetInstanceEndpointResponseBodyDomains() {}

  explicit GetInstanceEndpointResponseBodyDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetInstanceEndpointResponseBodyDomains() = default;
};
class GetInstanceEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> aclEnable{};
  shared_ptr<vector<GetInstanceEndpointResponseBodyAclEntries>> aclEntries{};
  shared_ptr<string> code{};
  shared_ptr<vector<GetInstanceEndpointResponseBodyDomains>> domains{};
  shared_ptr<bool> enable{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetInstanceEndpointResponseBody() {}

  explicit GetInstanceEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclEnable) {
      res["AclEnable"] = boost::any(*aclEnable);
    }
    if (aclEntries) {
      vector<boost::any> temp1;
      for(auto item1:*aclEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclEntries"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (domains) {
      vector<boost::any> temp1;
      for(auto item1:*domains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Domains"] = boost::any(temp1);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("AclEnable") != m.end() && !m["AclEnable"].empty()) {
      aclEnable = make_shared<bool>(boost::any_cast<bool>(m["AclEnable"]));
    }
    if (m.find("AclEntries") != m.end() && !m["AclEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["AclEntries"].type()) {
        vector<GetInstanceEndpointResponseBodyAclEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceEndpointResponseBodyAclEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclEntries = make_shared<vector<GetInstanceEndpointResponseBodyAclEntries>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<GetInstanceEndpointResponseBodyDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceEndpointResponseBodyDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domains = make_shared<vector<GetInstanceEndpointResponseBodyDomains>>(expect1);
      }
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetInstanceEndpointResponseBody() = default;
};
class GetInstanceEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceEndpointResponseBody> body{};

  GetInstanceEndpointResponse() {}

  explicit GetInstanceEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceEndpointResponse() = default;
};
class GetInstanceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetInstanceUsageRequest() {}

  explicit GetInstanceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetInstanceUsageRequest() = default;
};
class GetInstanceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> chartNamespaceQuota{};
  shared_ptr<string> chartNamespaceUsage{};
  shared_ptr<string> chartRepoQuota{};
  shared_ptr<string> chartRepoUsage{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> namespaceQuota{};
  shared_ptr<string> namespaceUsage{};
  shared_ptr<string> repoQuota{};
  shared_ptr<string> repoUsage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> vpcQuota{};
  shared_ptr<string> vpcUsage{};

  GetInstanceUsageResponseBody() {}

  explicit GetInstanceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chartNamespaceQuota) {
      res["ChartNamespaceQuota"] = boost::any(*chartNamespaceQuota);
    }
    if (chartNamespaceUsage) {
      res["ChartNamespaceUsage"] = boost::any(*chartNamespaceUsage);
    }
    if (chartRepoQuota) {
      res["ChartRepoQuota"] = boost::any(*chartRepoQuota);
    }
    if (chartRepoUsage) {
      res["ChartRepoUsage"] = boost::any(*chartRepoUsage);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (namespaceQuota) {
      res["NamespaceQuota"] = boost::any(*namespaceQuota);
    }
    if (namespaceUsage) {
      res["NamespaceUsage"] = boost::any(*namespaceUsage);
    }
    if (repoQuota) {
      res["RepoQuota"] = boost::any(*repoQuota);
    }
    if (repoUsage) {
      res["RepoUsage"] = boost::any(*repoUsage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vpcQuota) {
      res["VpcQuota"] = boost::any(*vpcQuota);
    }
    if (vpcUsage) {
      res["VpcUsage"] = boost::any(*vpcUsage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChartNamespaceQuota") != m.end() && !m["ChartNamespaceQuota"].empty()) {
      chartNamespaceQuota = make_shared<string>(boost::any_cast<string>(m["ChartNamespaceQuota"]));
    }
    if (m.find("ChartNamespaceUsage") != m.end() && !m["ChartNamespaceUsage"].empty()) {
      chartNamespaceUsage = make_shared<string>(boost::any_cast<string>(m["ChartNamespaceUsage"]));
    }
    if (m.find("ChartRepoQuota") != m.end() && !m["ChartRepoQuota"].empty()) {
      chartRepoQuota = make_shared<string>(boost::any_cast<string>(m["ChartRepoQuota"]));
    }
    if (m.find("ChartRepoUsage") != m.end() && !m["ChartRepoUsage"].empty()) {
      chartRepoUsage = make_shared<string>(boost::any_cast<string>(m["ChartRepoUsage"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("NamespaceQuota") != m.end() && !m["NamespaceQuota"].empty()) {
      namespaceQuota = make_shared<string>(boost::any_cast<string>(m["NamespaceQuota"]));
    }
    if (m.find("NamespaceUsage") != m.end() && !m["NamespaceUsage"].empty()) {
      namespaceUsage = make_shared<string>(boost::any_cast<string>(m["NamespaceUsage"]));
    }
    if (m.find("RepoQuota") != m.end() && !m["RepoQuota"].empty()) {
      repoQuota = make_shared<string>(boost::any_cast<string>(m["RepoQuota"]));
    }
    if (m.find("RepoUsage") != m.end() && !m["RepoUsage"].empty()) {
      repoUsage = make_shared<string>(boost::any_cast<string>(m["RepoUsage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VpcQuota") != m.end() && !m["VpcQuota"].empty()) {
      vpcQuota = make_shared<string>(boost::any_cast<string>(m["VpcQuota"]));
    }
    if (m.find("VpcUsage") != m.end() && !m["VpcUsage"].empty()) {
      vpcUsage = make_shared<string>(boost::any_cast<string>(m["VpcUsage"]));
    }
  }


  virtual ~GetInstanceUsageResponseBody() = default;
};
class GetInstanceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceUsageResponseBody> body{};

  GetInstanceUsageResponse() {}

  explicit GetInstanceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceUsageResponse() = default;
};
class GetInstanceVpcEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> moduleName{};

  GetInstanceVpcEndpointRequest() {}

  explicit GetInstanceVpcEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~GetInstanceVpcEndpointRequest() = default;
};
class GetInstanceVpcEndpointResponseBodyLinkedVpcs : public Darabonba::Model {
public:
  shared_ptr<bool> defaultAccess{};
  shared_ptr<string> ip{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};

  GetInstanceVpcEndpointResponseBodyLinkedVpcs() {}

  explicit GetInstanceVpcEndpointResponseBodyLinkedVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultAccess) {
      res["DefaultAccess"] = boost::any(*defaultAccess);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultAccess") != m.end() && !m["DefaultAccess"].empty()) {
      defaultAccess = make_shared<bool>(boost::any_cast<bool>(m["DefaultAccess"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~GetInstanceVpcEndpointResponseBodyLinkedVpcs() = default;
};
class GetInstanceVpcEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<string>> domains{};
  shared_ptr<bool> enable{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<vector<GetInstanceVpcEndpointResponseBodyLinkedVpcs>> linkedVpcs{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> requestId{};

  GetInstanceVpcEndpointResponseBody() {}

  explicit GetInstanceVpcEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (domains) {
      res["Domains"] = boost::any(*domains);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (linkedVpcs) {
      vector<boost::any> temp1;
      for(auto item1:*linkedVpcs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LinkedVpcs"] = boost::any(temp1);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
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
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Domains"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domains = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("LinkedVpcs") != m.end() && !m["LinkedVpcs"].empty()) {
      if (typeid(vector<boost::any>) == m["LinkedVpcs"].type()) {
        vector<GetInstanceVpcEndpointResponseBodyLinkedVpcs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LinkedVpcs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceVpcEndpointResponseBodyLinkedVpcs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        linkedVpcs = make_shared<vector<GetInstanceVpcEndpointResponseBodyLinkedVpcs>>(expect1);
      }
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetInstanceVpcEndpointResponseBody() = default;
};
class GetInstanceVpcEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceVpcEndpointResponseBody> body{};

  GetInstanceVpcEndpointResponse() {}

  explicit GetInstanceVpcEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceVpcEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceVpcEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceVpcEndpointResponse() = default;
};
class GetNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};

  GetNamespaceRequest() {}

  explicit GetNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~GetNamespaceRequest() = default;
};
class GetNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateRepo{};
  shared_ptr<string> code{};
  shared_ptr<RepoConfiguration> defaultRepoConfiguration{};
  shared_ptr<string> defaultRepoType{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> namespaceStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};

  GetNamespaceResponseBody() {}

  explicit GetNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateRepo) {
      res["AutoCreateRepo"] = boost::any(*autoCreateRepo);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (defaultRepoConfiguration) {
      res["DefaultRepoConfiguration"] = defaultRepoConfiguration ? boost::any(defaultRepoConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultRepoType) {
      res["DefaultRepoType"] = boost::any(*defaultRepoType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (namespaceStatus) {
      res["NamespaceStatus"] = boost::any(*namespaceStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreateRepo") != m.end() && !m["AutoCreateRepo"].empty()) {
      autoCreateRepo = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateRepo"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DefaultRepoConfiguration") != m.end() && !m["DefaultRepoConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["DefaultRepoConfiguration"].type()) {
        RepoConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DefaultRepoConfiguration"]));
        defaultRepoConfiguration = make_shared<RepoConfiguration>(model1);
      }
    }
    if (m.find("DefaultRepoType") != m.end() && !m["DefaultRepoType"].empty()) {
      defaultRepoType = make_shared<string>(boost::any_cast<string>(m["DefaultRepoType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("NamespaceStatus") != m.end() && !m["NamespaceStatus"].empty()) {
      namespaceStatus = make_shared<string>(boost::any_cast<string>(m["NamespaceStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~GetNamespaceResponseBody() = default;
};
class GetNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNamespaceResponseBody> body{};

  GetNamespaceResponse() {}

  explicit GetNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetNamespaceResponse() = default;
};
class GetRepoBuildRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildRecordId{};
  shared_ptr<string> instanceId{};

  GetRepoBuildRecordRequest() {}

  explicit GetRepoBuildRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRecordId) {
      res["BuildRecordId"] = boost::any(*buildRecordId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRecordId") != m.end() && !m["BuildRecordId"].empty()) {
      buildRecordId = make_shared<string>(boost::any_cast<string>(m["BuildRecordId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetRepoBuildRecordRequest() = default;
};
class GetRepoBuildRecordResponseBodyImage : public Darabonba::Model {
public:
  shared_ptr<string> imageTag{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  GetRepoBuildRecordResponseBodyImage() {}

  explicit GetRepoBuildRecordResponseBodyImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~GetRepoBuildRecordResponseBodyImage() = default;
};
class GetRepoBuildRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buildRecordId{};
  shared_ptr<string> code{};
  shared_ptr<long> endTime{};
  shared_ptr<GetRepoBuildRecordResponseBodyImage> image{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  GetRepoBuildRecordResponseBody() {}

  explicit GetRepoBuildRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRecordId) {
      res["BuildRecordId"] = boost::any(*buildRecordId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (image) {
      res["Image"] = image ? boost::any(image->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRecordId") != m.end() && !m["BuildRecordId"].empty()) {
      buildRecordId = make_shared<string>(boost::any_cast<string>(m["BuildRecordId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      if (typeid(map<string, boost::any>) == m["Image"].type()) {
        GetRepoBuildRecordResponseBodyImage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Image"]));
        image = make_shared<GetRepoBuildRecordResponseBodyImage>(model1);
      }
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetRepoBuildRecordResponseBody() = default;
};
class GetRepoBuildRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRepoBuildRecordResponseBody> body{};

  GetRepoBuildRecordResponse() {}

  explicit GetRepoBuildRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepoBuildRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepoBuildRecordResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepoBuildRecordResponse() = default;
};
class GetRepoBuildRecordStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildRecordId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};

  GetRepoBuildRecordStatusRequest() {}

  explicit GetRepoBuildRecordStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRecordId) {
      res["BuildRecordId"] = boost::any(*buildRecordId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRecordId") != m.end() && !m["BuildRecordId"].empty()) {
      buildRecordId = make_shared<string>(boost::any_cast<string>(m["BuildRecordId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~GetRepoBuildRecordStatusRequest() = default;
};
class GetRepoBuildRecordStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buildStatus{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  GetRepoBuildRecordStatusResponseBody() {}

  explicit GetRepoBuildRecordStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildStatus) {
      res["BuildStatus"] = boost::any(*buildStatus);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildStatus") != m.end() && !m["BuildStatus"].empty()) {
      buildStatus = make_shared<string>(boost::any_cast<string>(m["BuildStatus"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRepoBuildRecordStatusResponseBody() = default;
};
class GetRepoBuildRecordStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRepoBuildRecordStatusResponseBody> body{};

  GetRepoBuildRecordStatusResponse() {}

  explicit GetRepoBuildRecordStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepoBuildRecordStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepoBuildRecordStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepoBuildRecordStatusResponse() = default;
};
class GetRepoSourceCodeRepoRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};

  GetRepoSourceCodeRepoRequest() {}

  explicit GetRepoSourceCodeRepoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~GetRepoSourceCodeRepoRequest() = default;
};
class GetRepoSourceCodeRepoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> autoBuild{};
  shared_ptr<string> code{};
  shared_ptr<string> codeRepoDomain{};
  shared_ptr<string> codeRepoName{};
  shared_ptr<string> codeRepoNamespaceName{};
  shared_ptr<string> codeRepoType{};
  shared_ptr<string> disableCacheBuild{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> overseaBuild{};
  shared_ptr<string> repoId{};
  shared_ptr<string> requestId{};

  GetRepoSourceCodeRepoResponseBody() {}

  explicit GetRepoSourceCodeRepoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (codeRepoDomain) {
      res["CodeRepoDomain"] = boost::any(*codeRepoDomain);
    }
    if (codeRepoName) {
      res["CodeRepoName"] = boost::any(*codeRepoName);
    }
    if (codeRepoNamespaceName) {
      res["CodeRepoNamespaceName"] = boost::any(*codeRepoNamespaceName);
    }
    if (codeRepoType) {
      res["CodeRepoType"] = boost::any(*codeRepoType);
    }
    if (disableCacheBuild) {
      res["DisableCacheBuild"] = boost::any(*disableCacheBuild);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (overseaBuild) {
      res["OverseaBuild"] = boost::any(*overseaBuild);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<string>(boost::any_cast<string>(m["AutoBuild"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CodeRepoDomain") != m.end() && !m["CodeRepoDomain"].empty()) {
      codeRepoDomain = make_shared<string>(boost::any_cast<string>(m["CodeRepoDomain"]));
    }
    if (m.find("CodeRepoName") != m.end() && !m["CodeRepoName"].empty()) {
      codeRepoName = make_shared<string>(boost::any_cast<string>(m["CodeRepoName"]));
    }
    if (m.find("CodeRepoNamespaceName") != m.end() && !m["CodeRepoNamespaceName"].empty()) {
      codeRepoNamespaceName = make_shared<string>(boost::any_cast<string>(m["CodeRepoNamespaceName"]));
    }
    if (m.find("CodeRepoType") != m.end() && !m["CodeRepoType"].empty()) {
      codeRepoType = make_shared<string>(boost::any_cast<string>(m["CodeRepoType"]));
    }
    if (m.find("DisableCacheBuild") != m.end() && !m["DisableCacheBuild"].empty()) {
      disableCacheBuild = make_shared<string>(boost::any_cast<string>(m["DisableCacheBuild"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("OverseaBuild") != m.end() && !m["OverseaBuild"].empty()) {
      overseaBuild = make_shared<string>(boost::any_cast<string>(m["OverseaBuild"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRepoSourceCodeRepoResponseBody() = default;
};
class GetRepoSourceCodeRepoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRepoSourceCodeRepoResponseBody> body{};

  GetRepoSourceCodeRepoResponse() {}

  explicit GetRepoSourceCodeRepoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepoSourceCodeRepoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepoSourceCodeRepoResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepoSourceCodeRepoResponse() = default;
};
class GetRepoSyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> syncTaskId{};

  GetRepoSyncTaskRequest() {}

  explicit GetRepoSyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (syncTaskId) {
      res["SyncTaskId"] = boost::any(*syncTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SyncTaskId") != m.end() && !m["SyncTaskId"].empty()) {
      syncTaskId = make_shared<string>(boost::any_cast<string>(m["SyncTaskId"]));
    }
  }


  virtual ~GetRepoSyncTaskRequest() = default;
};
class GetRepoSyncTaskResponseBodyImageFrom : public Darabonba::Model {
public:
  shared_ptr<string> imageTag{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  GetRepoSyncTaskResponseBodyImageFrom() {}

  explicit GetRepoSyncTaskResponseBodyImageFrom(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~GetRepoSyncTaskResponseBodyImageFrom() = default;
};
class GetRepoSyncTaskResponseBodyImageTo : public Darabonba::Model {
public:
  shared_ptr<string> imageTag{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  GetRepoSyncTaskResponseBodyImageTo() {}

  explicit GetRepoSyncTaskResponseBodyImageTo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~GetRepoSyncTaskResponseBodyImageTo() = default;
};
class GetRepoSyncTaskResponseBodyLayerTasks : public Darabonba::Model {
public:
  shared_ptr<string> artifactDigest{};
  shared_ptr<string> digest{};
  shared_ptr<long> size{};
  shared_ptr<string> syncLayerTaskId{};
  shared_ptr<long> syncedSize{};
  shared_ptr<string> taskStatus{};

  GetRepoSyncTaskResponseBodyLayerTasks() {}

  explicit GetRepoSyncTaskResponseBodyLayerTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactDigest) {
      res["ArtifactDigest"] = boost::any(*artifactDigest);
    }
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (syncLayerTaskId) {
      res["SyncLayerTaskId"] = boost::any(*syncLayerTaskId);
    }
    if (syncedSize) {
      res["SyncedSize"] = boost::any(*syncedSize);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactDigest") != m.end() && !m["ArtifactDigest"].empty()) {
      artifactDigest = make_shared<string>(boost::any_cast<string>(m["ArtifactDigest"]));
    }
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SyncLayerTaskId") != m.end() && !m["SyncLayerTaskId"].empty()) {
      syncLayerTaskId = make_shared<string>(boost::any_cast<string>(m["SyncLayerTaskId"]));
    }
    if (m.find("SyncedSize") != m.end() && !m["SyncedSize"].empty()) {
      syncedSize = make_shared<long>(boost::any_cast<long>(m["SyncedSize"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~GetRepoSyncTaskResponseBodyLayerTasks() = default;
};
class GetRepoSyncTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> crossUser{};
  shared_ptr<GetRepoSyncTaskResponseBodyImageFrom> imageFrom{};
  shared_ptr<GetRepoSyncTaskResponseBodyImageTo> imageTo{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<vector<GetRepoSyncTaskResponseBodyLayerTasks>> layerTasks{};
  shared_ptr<long> progress{};
  shared_ptr<string> requestId{};
  shared_ptr<string> syncBatchTaskId{};
  shared_ptr<string> syncRuleId{};
  shared_ptr<string> syncTaskId{};
  shared_ptr<bool> syncTransAccelerate{};
  shared_ptr<long> syncedSize{};
  shared_ptr<string> taskIssue{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> taskTrigger{};

  GetRepoSyncTaskResponseBody() {}

  explicit GetRepoSyncTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (crossUser) {
      res["CrossUser"] = boost::any(*crossUser);
    }
    if (imageFrom) {
      res["ImageFrom"] = imageFrom ? boost::any(imageFrom->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageTo) {
      res["ImageTo"] = imageTo ? boost::any(imageTo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (layerTasks) {
      vector<boost::any> temp1;
      for(auto item1:*layerTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LayerTasks"] = boost::any(temp1);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (syncBatchTaskId) {
      res["SyncBatchTaskId"] = boost::any(*syncBatchTaskId);
    }
    if (syncRuleId) {
      res["SyncRuleId"] = boost::any(*syncRuleId);
    }
    if (syncTaskId) {
      res["SyncTaskId"] = boost::any(*syncTaskId);
    }
    if (syncTransAccelerate) {
      res["SyncTransAccelerate"] = boost::any(*syncTransAccelerate);
    }
    if (syncedSize) {
      res["SyncedSize"] = boost::any(*syncedSize);
    }
    if (taskIssue) {
      res["TaskIssue"] = boost::any(*taskIssue);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskTrigger) {
      res["TaskTrigger"] = boost::any(*taskTrigger);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CrossUser") != m.end() && !m["CrossUser"].empty()) {
      crossUser = make_shared<bool>(boost::any_cast<bool>(m["CrossUser"]));
    }
    if (m.find("ImageFrom") != m.end() && !m["ImageFrom"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageFrom"].type()) {
        GetRepoSyncTaskResponseBodyImageFrom model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageFrom"]));
        imageFrom = make_shared<GetRepoSyncTaskResponseBodyImageFrom>(model1);
      }
    }
    if (m.find("ImageTo") != m.end() && !m["ImageTo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageTo"].type()) {
        GetRepoSyncTaskResponseBodyImageTo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageTo"]));
        imageTo = make_shared<GetRepoSyncTaskResponseBodyImageTo>(model1);
      }
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("LayerTasks") != m.end() && !m["LayerTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["LayerTasks"].type()) {
        vector<GetRepoSyncTaskResponseBodyLayerTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LayerTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRepoSyncTaskResponseBodyLayerTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layerTasks = make_shared<vector<GetRepoSyncTaskResponseBodyLayerTasks>>(expect1);
      }
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SyncBatchTaskId") != m.end() && !m["SyncBatchTaskId"].empty()) {
      syncBatchTaskId = make_shared<string>(boost::any_cast<string>(m["SyncBatchTaskId"]));
    }
    if (m.find("SyncRuleId") != m.end() && !m["SyncRuleId"].empty()) {
      syncRuleId = make_shared<string>(boost::any_cast<string>(m["SyncRuleId"]));
    }
    if (m.find("SyncTaskId") != m.end() && !m["SyncTaskId"].empty()) {
      syncTaskId = make_shared<string>(boost::any_cast<string>(m["SyncTaskId"]));
    }
    if (m.find("SyncTransAccelerate") != m.end() && !m["SyncTransAccelerate"].empty()) {
      syncTransAccelerate = make_shared<bool>(boost::any_cast<bool>(m["SyncTransAccelerate"]));
    }
    if (m.find("SyncedSize") != m.end() && !m["SyncedSize"].empty()) {
      syncedSize = make_shared<long>(boost::any_cast<long>(m["SyncedSize"]));
    }
    if (m.find("TaskIssue") != m.end() && !m["TaskIssue"].empty()) {
      taskIssue = make_shared<string>(boost::any_cast<string>(m["TaskIssue"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskTrigger") != m.end() && !m["TaskTrigger"].empty()) {
      taskTrigger = make_shared<string>(boost::any_cast<string>(m["TaskTrigger"]));
    }
  }


  virtual ~GetRepoSyncTaskResponseBody() = default;
};
class GetRepoSyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRepoSyncTaskResponseBody> body{};

  GetRepoSyncTaskResponse() {}

  explicit GetRepoSyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepoSyncTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepoSyncTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepoSyncTaskResponse() = default;
};
class GetRepoTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> tag{};

  GetRepoTagRequest() {}

  explicit GetRepoTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~GetRepoTagRequest() = default;
};
class GetRepoTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> digest{};
  shared_ptr<long> imageCreate{};
  shared_ptr<string> imageId{};
  shared_ptr<long> imageSize{};
  shared_ptr<long> imageUpdate{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};

  GetRepoTagResponseBody() {}

  explicit GetRepoTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (imageCreate) {
      res["ImageCreate"] = boost::any(*imageCreate);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageSize) {
      res["ImageSize"] = boost::any(*imageSize);
    }
    if (imageUpdate) {
      res["ImageUpdate"] = boost::any(*imageUpdate);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("ImageCreate") != m.end() && !m["ImageCreate"].empty()) {
      imageCreate = make_shared<long>(boost::any_cast<long>(m["ImageCreate"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageSize") != m.end() && !m["ImageSize"].empty()) {
      imageSize = make_shared<long>(boost::any_cast<long>(m["ImageSize"]));
    }
    if (m.find("ImageUpdate") != m.end() && !m["ImageUpdate"].empty()) {
      imageUpdate = make_shared<long>(boost::any_cast<long>(m["ImageUpdate"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~GetRepoTagResponseBody() = default;
};
class GetRepoTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRepoTagResponseBody> body{};

  GetRepoTagResponse() {}

  explicit GetRepoTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepoTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepoTagResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepoTagResponse() = default;
};
class GetRepoTagScanStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> digest{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> scanTaskId{};
  shared_ptr<string> scanType{};
  shared_ptr<string> tag{};

  GetRepoTagScanStatusRequest() {}

  explicit GetRepoTagScanStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (scanTaskId) {
      res["ScanTaskId"] = boost::any(*scanTaskId);
    }
    if (scanType) {
      res["ScanType"] = boost::any(*scanType);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("ScanTaskId") != m.end() && !m["ScanTaskId"].empty()) {
      scanTaskId = make_shared<string>(boost::any_cast<string>(m["ScanTaskId"]));
    }
    if (m.find("ScanType") != m.end() && !m["ScanType"].empty()) {
      scanType = make_shared<string>(boost::any_cast<string>(m["ScanType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~GetRepoTagScanStatusRequest() = default;
};
class GetRepoTagScanStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scanService{};
  shared_ptr<string> status{};

  GetRepoTagScanStatusResponseBody() {}

  explicit GetRepoTagScanStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scanService) {
      res["ScanService"] = boost::any(*scanService);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScanService") != m.end() && !m["ScanService"].empty()) {
      scanService = make_shared<string>(boost::any_cast<string>(m["ScanService"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetRepoTagScanStatusResponseBody() = default;
};
class GetRepoTagScanStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRepoTagScanStatusResponseBody> body{};

  GetRepoTagScanStatusResponse() {}

  explicit GetRepoTagScanStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepoTagScanStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepoTagScanStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepoTagScanStatusResponse() = default;
};
class GetRepoTagScanSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> digest{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> scanTaskId{};
  shared_ptr<string> tag{};

  GetRepoTagScanSummaryRequest() {}

  explicit GetRepoTagScanSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (scanTaskId) {
      res["ScanTaskId"] = boost::any(*scanTaskId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("ScanTaskId") != m.end() && !m["ScanTaskId"].empty()) {
      scanTaskId = make_shared<string>(boost::any_cast<string>(m["ScanTaskId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~GetRepoTagScanSummaryRequest() = default;
};
class GetRepoTagScanSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> highSeverity{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> lowSeverity{};
  shared_ptr<long> mediumSeverity{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalSeverity{};
  shared_ptr<long> unknownSeverity{};

  GetRepoTagScanSummaryResponseBody() {}

  explicit GetRepoTagScanSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (highSeverity) {
      res["HighSeverity"] = boost::any(*highSeverity);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (lowSeverity) {
      res["LowSeverity"] = boost::any(*lowSeverity);
    }
    if (mediumSeverity) {
      res["MediumSeverity"] = boost::any(*mediumSeverity);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalSeverity) {
      res["TotalSeverity"] = boost::any(*totalSeverity);
    }
    if (unknownSeverity) {
      res["UnknownSeverity"] = boost::any(*unknownSeverity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HighSeverity") != m.end() && !m["HighSeverity"].empty()) {
      highSeverity = make_shared<long>(boost::any_cast<long>(m["HighSeverity"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("LowSeverity") != m.end() && !m["LowSeverity"].empty()) {
      lowSeverity = make_shared<long>(boost::any_cast<long>(m["LowSeverity"]));
    }
    if (m.find("MediumSeverity") != m.end() && !m["MediumSeverity"].empty()) {
      mediumSeverity = make_shared<long>(boost::any_cast<long>(m["MediumSeverity"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalSeverity") != m.end() && !m["TotalSeverity"].empty()) {
      totalSeverity = make_shared<long>(boost::any_cast<long>(m["TotalSeverity"]));
    }
    if (m.find("UnknownSeverity") != m.end() && !m["UnknownSeverity"].empty()) {
      unknownSeverity = make_shared<long>(boost::any_cast<long>(m["UnknownSeverity"]));
    }
  }


  virtual ~GetRepoTagScanSummaryResponseBody() = default;
};
class GetRepoTagScanSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRepoTagScanSummaryResponseBody> body{};

  GetRepoTagScanSummaryResponse() {}

  explicit GetRepoTagScanSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepoTagScanSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepoTagScanSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepoTagScanSummaryResponse() = default;
};
class GetRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  GetRepositoryRequest() {}

  explicit GetRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~GetRepositoryRequest() = default;
};
class GetRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> createTime{};
  shared_ptr<string> detail{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> repoBuildType{};
  shared_ptr<string> repoId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> repoStatus{};
  shared_ptr<string> repoType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> summary{};
  shared_ptr<bool> tagImmutability{};

  GetRepositoryResponseBody() {}

  explicit GetRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (repoBuildType) {
      res["RepoBuildType"] = boost::any(*repoBuildType);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (repoStatus) {
      res["RepoStatus"] = boost::any(*repoStatus);
    }
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (tagImmutability) {
      res["TagImmutability"] = boost::any(*tagImmutability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("RepoBuildType") != m.end() && !m["RepoBuildType"].empty()) {
      repoBuildType = make_shared<string>(boost::any_cast<string>(m["RepoBuildType"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("RepoStatus") != m.end() && !m["RepoStatus"].empty()) {
      repoStatus = make_shared<string>(boost::any_cast<string>(m["RepoStatus"]));
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("TagImmutability") != m.end() && !m["TagImmutability"].empty()) {
      tagImmutability = make_shared<bool>(boost::any_cast<bool>(m["TagImmutability"]));
    }
  }


  virtual ~GetRepositoryResponseBody() = default;
};
class GetRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRepositoryResponseBody> body{};

  GetRepositoryResponse() {}

  explicit GetRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetRepositoryResponse() = default;
};
class ListArtifactBuildTaskLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildTaskId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};

  ListArtifactBuildTaskLogRequest() {}

  explicit ListArtifactBuildTaskLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildTaskId) {
      res["BuildTaskId"] = boost::any(*buildTaskId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildTaskId") != m.end() && !m["BuildTaskId"].empty()) {
      buildTaskId = make_shared<string>(boost::any_cast<string>(m["BuildTaskId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListArtifactBuildTaskLogRequest() = default;
};
class ListArtifactBuildTaskLogResponseBodyBuildTaskLogs : public Darabonba::Model {
public:
  shared_ptr<long> lineNumber{};
  shared_ptr<string> message{};

  ListArtifactBuildTaskLogResponseBodyBuildTaskLogs() {}

  explicit ListArtifactBuildTaskLogResponseBodyBuildTaskLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lineNumber) {
      res["LineNumber"] = boost::any(*lineNumber);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LineNumber") != m.end() && !m["LineNumber"].empty()) {
      lineNumber = make_shared<long>(boost::any_cast<long>(m["LineNumber"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~ListArtifactBuildTaskLogResponseBodyBuildTaskLogs() = default;
};
class ListArtifactBuildTaskLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListArtifactBuildTaskLogResponseBodyBuildTaskLogs>> buildTaskLogs{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListArtifactBuildTaskLogResponseBody() {}

  explicit ListArtifactBuildTaskLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildTaskLogs) {
      vector<boost::any> temp1;
      for(auto item1:*buildTaskLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BuildTaskLogs"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("BuildTaskLogs") != m.end() && !m["BuildTaskLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["BuildTaskLogs"].type()) {
        vector<ListArtifactBuildTaskLogResponseBodyBuildTaskLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BuildTaskLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactBuildTaskLogResponseBodyBuildTaskLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buildTaskLogs = make_shared<vector<ListArtifactBuildTaskLogResponseBodyBuildTaskLogs>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListArtifactBuildTaskLogResponseBody() = default;
};
class ListArtifactBuildTaskLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListArtifactBuildTaskLogResponseBody> body{};

  ListArtifactBuildTaskLogResponse() {}

  explicit ListArtifactBuildTaskLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListArtifactBuildTaskLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListArtifactBuildTaskLogResponseBody>(model1);
      }
    }
  }


  virtual ~ListArtifactBuildTaskLogResponse() = default;
};
class ListArtifactLifecycleRuleRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableDeleteTag{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  ListArtifactLifecycleRuleRequest() {}

  explicit ListArtifactLifecycleRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableDeleteTag) {
      res["EnableDeleteTag"] = boost::any(*enableDeleteTag);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableDeleteTag") != m.end() && !m["EnableDeleteTag"].empty()) {
      enableDeleteTag = make_shared<bool>(boost::any_cast<bool>(m["EnableDeleteTag"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListArtifactLifecycleRuleRequest() = default;
};
class ListArtifactLifecycleRuleResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<bool> auto_{};
  shared_ptr<long> createTime{};
  shared_ptr<bool> enableDeleteTag{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> namespaceName{};
  shared_ptr<long> nextTime{};
  shared_ptr<string> repoName{};
  shared_ptr<long> retentionTagCount{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<string> scope{};
  shared_ptr<string> tagRegexp{};

  ListArtifactLifecycleRuleResponseBodyRules() {}

  explicit ListArtifactLifecycleRuleResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auto_) {
      res["Auto"] = boost::any(*auto_);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (enableDeleteTag) {
      res["EnableDeleteTag"] = boost::any(*enableDeleteTag);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (nextTime) {
      res["NextTime"] = boost::any(*nextTime);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (retentionTagCount) {
      res["RetentionTagCount"] = boost::any(*retentionTagCount);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (tagRegexp) {
      res["TagRegexp"] = boost::any(*tagRegexp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Auto") != m.end() && !m["Auto"].empty()) {
      auto_ = make_shared<bool>(boost::any_cast<bool>(m["Auto"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EnableDeleteTag") != m.end() && !m["EnableDeleteTag"].empty()) {
      enableDeleteTag = make_shared<bool>(boost::any_cast<bool>(m["EnableDeleteTag"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("NextTime") != m.end() && !m["NextTime"].empty()) {
      nextTime = make_shared<long>(boost::any_cast<long>(m["NextTime"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RetentionTagCount") != m.end() && !m["RetentionTagCount"].empty()) {
      retentionTagCount = make_shared<long>(boost::any_cast<long>(m["RetentionTagCount"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("TagRegexp") != m.end() && !m["TagRegexp"].empty()) {
      tagRegexp = make_shared<string>(boost::any_cast<string>(m["TagRegexp"]));
    }
  }


  virtual ~ListArtifactLifecycleRuleResponseBodyRules() = default;
};
class ListArtifactLifecycleRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListArtifactLifecycleRuleResponseBodyRules>> rules{};
  shared_ptr<long> totalCount{};

  ListArtifactLifecycleRuleResponseBody() {}

  explicit ListArtifactLifecycleRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<ListArtifactLifecycleRuleResponseBodyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactLifecycleRuleResponseBodyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<ListArtifactLifecycleRuleResponseBodyRules>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListArtifactLifecycleRuleResponseBody() = default;
};
class ListArtifactLifecycleRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListArtifactLifecycleRuleResponseBody> body{};

  ListArtifactLifecycleRuleResponse() {}

  explicit ListArtifactLifecycleRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListArtifactLifecycleRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListArtifactLifecycleRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ListArtifactLifecycleRuleResponse() = default;
};
class ListArtifactSubscriptionRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  ListArtifactSubscriptionRuleRequest() {}

  explicit ListArtifactSubscriptionRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListArtifactSubscriptionRuleRequest() = default;
};
class ListArtifactSubscriptionRuleResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<bool> accelerate{};
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> namespaceName{};
  shared_ptr<bool> override{};
  shared_ptr<vector<string>> platform{};
  shared_ptr<string> repoName{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> sourceNamespaceName{};
  shared_ptr<string> sourceProvider{};
  shared_ptr<string> sourceRepoName{};
  shared_ptr<long> tagCount{};
  shared_ptr<string> tagRegexp{};

  ListArtifactSubscriptionRuleResponseBodyRules() {}

  explicit ListArtifactSubscriptionRuleResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accelerate) {
      res["Accelerate"] = boost::any(*accelerate);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (override) {
      res["Override"] = boost::any(*override);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (sourceNamespaceName) {
      res["SourceNamespaceName"] = boost::any(*sourceNamespaceName);
    }
    if (sourceProvider) {
      res["SourceProvider"] = boost::any(*sourceProvider);
    }
    if (sourceRepoName) {
      res["SourceRepoName"] = boost::any(*sourceRepoName);
    }
    if (tagCount) {
      res["TagCount"] = boost::any(*tagCount);
    }
    if (tagRegexp) {
      res["TagRegexp"] = boost::any(*tagRegexp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accelerate") != m.end() && !m["Accelerate"].empty()) {
      accelerate = make_shared<bool>(boost::any_cast<bool>(m["Accelerate"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("Override") != m.end() && !m["Override"].empty()) {
      override = make_shared<bool>(boost::any_cast<bool>(m["Override"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Platform"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Platform"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      platform = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("SourceNamespaceName") != m.end() && !m["SourceNamespaceName"].empty()) {
      sourceNamespaceName = make_shared<string>(boost::any_cast<string>(m["SourceNamespaceName"]));
    }
    if (m.find("SourceProvider") != m.end() && !m["SourceProvider"].empty()) {
      sourceProvider = make_shared<string>(boost::any_cast<string>(m["SourceProvider"]));
    }
    if (m.find("SourceRepoName") != m.end() && !m["SourceRepoName"].empty()) {
      sourceRepoName = make_shared<string>(boost::any_cast<string>(m["SourceRepoName"]));
    }
    if (m.find("TagCount") != m.end() && !m["TagCount"].empty()) {
      tagCount = make_shared<long>(boost::any_cast<long>(m["TagCount"]));
    }
    if (m.find("TagRegexp") != m.end() && !m["TagRegexp"].empty()) {
      tagRegexp = make_shared<string>(boost::any_cast<string>(m["TagRegexp"]));
    }
  }


  virtual ~ListArtifactSubscriptionRuleResponseBodyRules() = default;
};
class ListArtifactSubscriptionRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListArtifactSubscriptionRuleResponseBodyRules>> rules{};
  shared_ptr<long> totalCount{};

  ListArtifactSubscriptionRuleResponseBody() {}

  explicit ListArtifactSubscriptionRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<ListArtifactSubscriptionRuleResponseBodyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactSubscriptionRuleResponseBodyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<ListArtifactSubscriptionRuleResponseBodyRules>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListArtifactSubscriptionRuleResponseBody() = default;
};
class ListArtifactSubscriptionRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListArtifactSubscriptionRuleResponseBody> body{};

  ListArtifactSubscriptionRuleResponse() {}

  explicit ListArtifactSubscriptionRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListArtifactSubscriptionRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListArtifactSubscriptionRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ListArtifactSubscriptionRuleResponse() = default;
};
class ListArtifactSubscriptionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  ListArtifactSubscriptionTaskRequest() {}

  explicit ListArtifactSubscriptionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListArtifactSubscriptionTaskRequest() = default;
};
class ListArtifactSubscriptionTaskResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> repoName{};
  shared_ptr<string> sourceNamespaceName{};
  shared_ptr<string> sourceProvider{};
  shared_ptr<string> sourceRepoName{};
  shared_ptr<string> sourceRepoType{};
  shared_ptr<string> startTime{};
  shared_ptr<long> tagSubscriptionCount{};
  shared_ptr<long> tagTotalCount{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskResult{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> taskType{};

  ListArtifactSubscriptionTaskResponseBodyTasks() {}

  explicit ListArtifactSubscriptionTaskResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (sourceNamespaceName) {
      res["SourceNamespaceName"] = boost::any(*sourceNamespaceName);
    }
    if (sourceProvider) {
      res["SourceProvider"] = boost::any(*sourceProvider);
    }
    if (sourceRepoName) {
      res["SourceRepoName"] = boost::any(*sourceRepoName);
    }
    if (sourceRepoType) {
      res["SourceRepoType"] = boost::any(*sourceRepoType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tagSubscriptionCount) {
      res["TagSubscriptionCount"] = boost::any(*tagSubscriptionCount);
    }
    if (tagTotalCount) {
      res["TagTotalCount"] = boost::any(*tagTotalCount);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskResult) {
      res["TaskResult"] = boost::any(*taskResult);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("SourceNamespaceName") != m.end() && !m["SourceNamespaceName"].empty()) {
      sourceNamespaceName = make_shared<string>(boost::any_cast<string>(m["SourceNamespaceName"]));
    }
    if (m.find("SourceProvider") != m.end() && !m["SourceProvider"].empty()) {
      sourceProvider = make_shared<string>(boost::any_cast<string>(m["SourceProvider"]));
    }
    if (m.find("SourceRepoName") != m.end() && !m["SourceRepoName"].empty()) {
      sourceRepoName = make_shared<string>(boost::any_cast<string>(m["SourceRepoName"]));
    }
    if (m.find("SourceRepoType") != m.end() && !m["SourceRepoType"].empty()) {
      sourceRepoType = make_shared<string>(boost::any_cast<string>(m["SourceRepoType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TagSubscriptionCount") != m.end() && !m["TagSubscriptionCount"].empty()) {
      tagSubscriptionCount = make_shared<long>(boost::any_cast<long>(m["TagSubscriptionCount"]));
    }
    if (m.find("TagTotalCount") != m.end() && !m["TagTotalCount"].empty()) {
      tagTotalCount = make_shared<long>(boost::any_cast<long>(m["TagTotalCount"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskResult") != m.end() && !m["TaskResult"].empty()) {
      taskResult = make_shared<string>(boost::any_cast<string>(m["TaskResult"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~ListArtifactSubscriptionTaskResponseBodyTasks() = default;
};
class ListArtifactSubscriptionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListArtifactSubscriptionTaskResponseBodyTasks>> tasks{};
  shared_ptr<long> totalCount{};

  ListArtifactSubscriptionTaskResponseBody() {}

  explicit ListArtifactSubscriptionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<ListArtifactSubscriptionTaskResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactSubscriptionTaskResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListArtifactSubscriptionTaskResponseBodyTasks>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListArtifactSubscriptionTaskResponseBody() = default;
};
class ListArtifactSubscriptionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListArtifactSubscriptionTaskResponseBody> body{};

  ListArtifactSubscriptionTaskResponse() {}

  explicit ListArtifactSubscriptionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListArtifactSubscriptionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListArtifactSubscriptionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListArtifactSubscriptionTaskResponse() = default;
};
class ListChainRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  ListChainRequest() {}

  explicit ListChainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~ListChainRequest() = default;
};
class ListChainResponseBodyChains : public Darabonba::Model {
public:
  shared_ptr<string> chainId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> scopeExclude{};
  shared_ptr<string> scopeId{};
  shared_ptr<string> scopeType{};

  ListChainResponseBodyChains() {}

  explicit ListChainResponseBodyChains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chainId) {
      res["ChainId"] = boost::any(*chainId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (scopeExclude) {
      res["ScopeExclude"] = boost::any(*scopeExclude);
    }
    if (scopeId) {
      res["ScopeId"] = boost::any(*scopeId);
    }
    if (scopeType) {
      res["ScopeType"] = boost::any(*scopeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChainId") != m.end() && !m["ChainId"].empty()) {
      chainId = make_shared<string>(boost::any_cast<string>(m["ChainId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ScopeExclude") != m.end() && !m["ScopeExclude"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScopeExclude"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScopeExclude"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scopeExclude = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScopeId") != m.end() && !m["ScopeId"].empty()) {
      scopeId = make_shared<string>(boost::any_cast<string>(m["ScopeId"]));
    }
    if (m.find("ScopeType") != m.end() && !m["ScopeType"].empty()) {
      scopeType = make_shared<string>(boost::any_cast<string>(m["ScopeType"]));
    }
  }


  virtual ~ListChainResponseBodyChains() = default;
};
class ListChainResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListChainResponseBodyChains>> chains{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListChainResponseBody() {}

  explicit ListChainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chains) {
      vector<boost::any> temp1;
      for(auto item1:*chains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Chains"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("Chains") != m.end() && !m["Chains"].empty()) {
      if (typeid(vector<boost::any>) == m["Chains"].type()) {
        vector<ListChainResponseBodyChains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Chains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChainResponseBodyChains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        chains = make_shared<vector<ListChainResponseBodyChains>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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


  virtual ~ListChainResponseBody() = default;
};
class ListChainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChainResponseBody> body{};

  ListChainResponse() {}

  explicit ListChainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChainResponseBody>(model1);
      }
    }
  }


  virtual ~ListChainResponse() = default;
};
class ListChainInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  ListChainInstanceRequest() {}

  explicit ListChainInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~ListChainInstanceRequest() = default;
};
class ListChainInstanceResponseBodyChainInstancesChain : public Darabonba::Model {
public:
  shared_ptr<string> chainId{};
  shared_ptr<string> chainName{};
  shared_ptr<long> version{};

  ListChainInstanceResponseBodyChainInstancesChain() {}

  explicit ListChainInstanceResponseBodyChainInstancesChain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chainId) {
      res["ChainId"] = boost::any(*chainId);
    }
    if (chainName) {
      res["ChainName"] = boost::any(*chainName);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChainId") != m.end() && !m["ChainId"].empty()) {
      chainId = make_shared<string>(boost::any_cast<string>(m["ChainId"]));
    }
    if (m.find("ChainName") != m.end() && !m["ChainName"].empty()) {
      chainName = make_shared<string>(boost::any_cast<string>(m["ChainName"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
  }


  virtual ~ListChainInstanceResponseBodyChainInstancesChain() = default;
};
class ListChainInstanceResponseBodyChainInstances : public Darabonba::Model {
public:
  shared_ptr<ListChainInstanceResponseBodyChainInstancesChain> chain{};
  shared_ptr<string> chainInstanceId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> result{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  ListChainInstanceResponseBodyChainInstances() {}

  explicit ListChainInstanceResponseBodyChainInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chain) {
      res["Chain"] = chain ? boost::any(chain->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (chainInstanceId) {
      res["ChainInstanceId"] = boost::any(*chainInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Chain") != m.end() && !m["Chain"].empty()) {
      if (typeid(map<string, boost::any>) == m["Chain"].type()) {
        ListChainInstanceResponseBodyChainInstancesChain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Chain"]));
        chain = make_shared<ListChainInstanceResponseBodyChainInstancesChain>(model1);
      }
    }
    if (m.find("ChainInstanceId") != m.end() && !m["ChainInstanceId"].empty()) {
      chainInstanceId = make_shared<string>(boost::any_cast<string>(m["ChainInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListChainInstanceResponseBodyChainInstances() = default;
};
class ListChainInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListChainInstanceResponseBodyChainInstances>> chainInstances{};
  shared_ptr<string> code{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListChainInstanceResponseBody() {}

  explicit ListChainInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chainInstances) {
      vector<boost::any> temp1;
      for(auto item1:*chainInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChainInstances"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("ChainInstances") != m.end() && !m["ChainInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["ChainInstances"].type()) {
        vector<ListChainInstanceResponseBodyChainInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChainInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChainInstanceResponseBodyChainInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        chainInstances = make_shared<vector<ListChainInstanceResponseBodyChainInstances>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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


  virtual ~ListChainInstanceResponseBody() = default;
};
class ListChainInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChainInstanceResponseBody> body{};

  ListChainInstanceResponse() {}

  explicit ListChainInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChainInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChainInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ListChainInstanceResponse() = default;
};
class ListChartNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> namespaceStatus{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  ListChartNamespaceRequest() {}

  explicit ListChartNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (namespaceStatus) {
      res["NamespaceStatus"] = boost::any(*namespaceStatus);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("NamespaceStatus") != m.end() && !m["NamespaceStatus"].empty()) {
      namespaceStatus = make_shared<string>(boost::any_cast<string>(m["NamespaceStatus"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListChartNamespaceRequest() = default;
};
class ListChartNamespaceResponseBodyNamespaces : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateRepo{};
  shared_ptr<string> defaultRepoType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> namespaceStatus{};
  shared_ptr<string> resourceGroupId{};

  ListChartNamespaceResponseBodyNamespaces() {}

  explicit ListChartNamespaceResponseBodyNamespaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateRepo) {
      res["AutoCreateRepo"] = boost::any(*autoCreateRepo);
    }
    if (defaultRepoType) {
      res["DefaultRepoType"] = boost::any(*defaultRepoType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (namespaceStatus) {
      res["NamespaceStatus"] = boost::any(*namespaceStatus);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreateRepo") != m.end() && !m["AutoCreateRepo"].empty()) {
      autoCreateRepo = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateRepo"]));
    }
    if (m.find("DefaultRepoType") != m.end() && !m["DefaultRepoType"].empty()) {
      defaultRepoType = make_shared<string>(boost::any_cast<string>(m["DefaultRepoType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("NamespaceStatus") != m.end() && !m["NamespaceStatus"].empty()) {
      namespaceStatus = make_shared<string>(boost::any_cast<string>(m["NamespaceStatus"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListChartNamespaceResponseBodyNamespaces() = default;
};
class ListChartNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<vector<ListChartNamespaceResponseBodyNamespaces>> namespaces{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListChartNamespaceResponseBody() {}

  explicit ListChartNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (namespaces) {
      vector<boost::any> temp1;
      for(auto item1:*namespaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Namespaces"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Namespaces"].type()) {
        vector<ListChartNamespaceResponseBodyNamespaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Namespaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChartNamespaceResponseBodyNamespaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        namespaces = make_shared<vector<ListChartNamespaceResponseBodyNamespaces>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListChartNamespaceResponseBody() = default;
};
class ListChartNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChartNamespaceResponseBody> body{};

  ListChartNamespaceResponse() {}

  explicit ListChartNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChartNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChartNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~ListChartNamespaceResponse() = default;
};
class ListChartReleaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> chart{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  ListChartReleaseRequest() {}

  explicit ListChartReleaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chart) {
      res["Chart"] = boost::any(*chart);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Chart") != m.end() && !m["Chart"].empty()) {
      chart = make_shared<string>(boost::any_cast<string>(m["Chart"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~ListChartReleaseRequest() = default;
};
class ListChartReleaseResponseBodyChartReleases : public Darabonba::Model {
public:
  shared_ptr<string> chart{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> release{};
  shared_ptr<string> repoId{};
  shared_ptr<string> size{};
  shared_ptr<string> status{};

  ListChartReleaseResponseBodyChartReleases() {}

  explicit ListChartReleaseResponseBodyChartReleases(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chart) {
      res["Chart"] = boost::any(*chart);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (release) {
      res["Release"] = boost::any(*release);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Chart") != m.end() && !m["Chart"].empty()) {
      chart = make_shared<string>(boost::any_cast<string>(m["Chart"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("Release") != m.end() && !m["Release"].empty()) {
      release = make_shared<string>(boost::any_cast<string>(m["Release"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListChartReleaseResponseBodyChartReleases() = default;
};
class ListChartReleaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListChartReleaseResponseBodyChartReleases>> chartReleases{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListChartReleaseResponseBody() {}

  explicit ListChartReleaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chartReleases) {
      vector<boost::any> temp1;
      for(auto item1:*chartReleases){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChartReleases"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("ChartReleases") != m.end() && !m["ChartReleases"].empty()) {
      if (typeid(vector<boost::any>) == m["ChartReleases"].type()) {
        vector<ListChartReleaseResponseBodyChartReleases> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChartReleases"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChartReleaseResponseBodyChartReleases model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        chartReleases = make_shared<vector<ListChartReleaseResponseBodyChartReleases>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListChartReleaseResponseBody() = default;
};
class ListChartReleaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChartReleaseResponseBody> body{};

  ListChartReleaseResponse() {}

  explicit ListChartReleaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChartReleaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChartReleaseResponseBody>(model1);
      }
    }
  }


  virtual ~ListChartReleaseResponse() = default;
};
class ListChartRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> repoStatus{};

  ListChartRepositoryRequest() {}

  explicit ListChartRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (repoStatus) {
      res["RepoStatus"] = boost::any(*repoStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("RepoStatus") != m.end() && !m["RepoStatus"].empty()) {
      repoStatus = make_shared<string>(boost::any_cast<string>(m["RepoStatus"]));
    }
  }


  virtual ~ListChartRepositoryRequest() = default;
};
class ListChartRepositoryResponseBodyRepositories : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> repoId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> repoStatus{};
  shared_ptr<string> repoType{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> summary{};

  ListChartRepositoryResponseBodyRepositories() {}

  explicit ListChartRepositoryResponseBodyRepositories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (repoStatus) {
      res["RepoStatus"] = boost::any(*repoStatus);
    }
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("RepoStatus") != m.end() && !m["RepoStatus"].empty()) {
      repoStatus = make_shared<string>(boost::any_cast<string>(m["RepoStatus"]));
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
  }


  virtual ~ListChartRepositoryResponseBodyRepositories() = default;
};
class ListChartRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListChartRepositoryResponseBodyRepositories>> repositories{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListChartRepositoryResponseBody() {}

  explicit ListChartRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repositories) {
      vector<boost::any> temp1;
      for(auto item1:*repositories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Repositories"] = boost::any(temp1);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Repositories") != m.end() && !m["Repositories"].empty()) {
      if (typeid(vector<boost::any>) == m["Repositories"].type()) {
        vector<ListChartRepositoryResponseBodyRepositories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Repositories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChartRepositoryResponseBodyRepositories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        repositories = make_shared<vector<ListChartRepositoryResponseBodyRepositories>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListChartRepositoryResponseBody() = default;
};
class ListChartRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChartRepositoryResponseBody> body{};

  ListChartRepositoryResponse() {}

  explicit ListChartRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChartRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChartRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListChartRepositoryResponse() = default;
};
class ListEventCenterRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventType{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> ruleId{};

  ListEventCenterRecordRequest() {}

  explicit ListEventCenterRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~ListEventCenterRecordRequest() = default;
};
class ListEventCenterRecordResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> eventChannel{};
  shared_ptr<string> eventNotifyId{};
  shared_ptr<string> eventNotifyMethod{};
  shared_ptr<string> eventType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> recordId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> tag{};
  shared_ptr<long> updateTime{};

  ListEventCenterRecordResponseBodyRecords() {}

  explicit ListEventCenterRecordResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (eventChannel) {
      res["EventChannel"] = boost::any(*eventChannel);
    }
    if (eventNotifyId) {
      res["EventNotifyId"] = boost::any(*eventNotifyId);
    }
    if (eventNotifyMethod) {
      res["EventNotifyMethod"] = boost::any(*eventNotifyMethod);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EventChannel") != m.end() && !m["EventChannel"].empty()) {
      eventChannel = make_shared<string>(boost::any_cast<string>(m["EventChannel"]));
    }
    if (m.find("EventNotifyId") != m.end() && !m["EventNotifyId"].empty()) {
      eventNotifyId = make_shared<string>(boost::any_cast<string>(m["EventNotifyId"]));
    }
    if (m.find("EventNotifyMethod") != m.end() && !m["EventNotifyMethod"].empty()) {
      eventNotifyMethod = make_shared<string>(boost::any_cast<string>(m["EventNotifyMethod"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListEventCenterRecordResponseBodyRecords() = default;
};
class ListEventCenterRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListEventCenterRecordResponseBodyRecords>> records{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListEventCenterRecordResponseBody() {}

  explicit ListEventCenterRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<ListEventCenterRecordResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEventCenterRecordResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ListEventCenterRecordResponseBodyRecords>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListEventCenterRecordResponseBody() = default;
};
class ListEventCenterRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEventCenterRecordResponseBody> body{};

  ListEventCenterRecordResponse() {}

  explicit ListEventCenterRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEventCenterRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEventCenterRecordResponseBody>(model1);
      }
    }
  }


  virtual ~ListEventCenterRecordResponse() = default;
};
class ListEventCenterRuleNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ListEventCenterRuleNameRequest() {}

  explicit ListEventCenterRuleNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListEventCenterRuleNameRequest() = default;
};
class ListEventCenterRuleNameResponseBodyRuleNames : public Darabonba::Model {
public:
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};

  ListEventCenterRuleNameResponseBodyRuleNames() {}

  explicit ListEventCenterRuleNameResponseBodyRuleNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~ListEventCenterRuleNameResponseBodyRuleNames() = default;
};
class ListEventCenterRuleNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListEventCenterRuleNameResponseBodyRuleNames>> ruleNames{};

  ListEventCenterRuleNameResponseBody() {}

  explicit ListEventCenterRuleNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleNames) {
      vector<boost::any> temp1;
      for(auto item1:*ruleNames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleNames"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleNames") != m.end() && !m["RuleNames"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleNames"].type()) {
        vector<ListEventCenterRuleNameResponseBodyRuleNames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleNames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEventCenterRuleNameResponseBodyRuleNames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleNames = make_shared<vector<ListEventCenterRuleNameResponseBodyRuleNames>>(expect1);
      }
    }
  }


  virtual ~ListEventCenterRuleNameResponseBody() = default;
};
class ListEventCenterRuleNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEventCenterRuleNameResponseBody> body{};

  ListEventCenterRuleNameResponse() {}

  explicit ListEventCenterRuleNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEventCenterRuleNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEventCenterRuleNameResponseBody>(model1);
      }
    }
  }


  virtual ~ListEventCenterRuleNameResponse() = default;
};
class ListInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};

  ListInstanceRequest() {}

  explicit ListInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListInstanceRequest() = default;
};
class ListInstanceResponseBodyInstancesTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListInstanceResponseBodyInstancesTags() {}

  explicit ListInstanceResponseBodyInstancesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstanceResponseBodyInstancesTags() = default;
};
class ListInstanceResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceIssue{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceSpecification{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListInstanceResponseBodyInstancesTags>> tags{};

  ListInstanceResponseBodyInstances() {}

  explicit ListInstanceResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceIssue) {
      res["InstanceIssue"] = boost::any(*instanceIssue);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceSpecification) {
      res["InstanceSpecification"] = boost::any(*instanceSpecification);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceIssue") != m.end() && !m["InstanceIssue"].empty()) {
      instanceIssue = make_shared<string>(boost::any_cast<string>(m["InstanceIssue"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceSpecification") != m.end() && !m["InstanceSpecification"].empty()) {
      instanceSpecification = make_shared<string>(boost::any_cast<string>(m["InstanceSpecification"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListInstanceResponseBodyInstancesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceResponseBodyInstancesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListInstanceResponseBodyInstancesTags>>(expect1);
      }
    }
  }


  virtual ~ListInstanceResponseBodyInstances() = default;
};
class ListInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListInstanceResponseBodyInstances>> instances{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListInstanceResponseBody() {}

  explicit ListInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ListInstanceResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstanceResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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


  virtual ~ListInstanceResponseBody() = default;
};
class ListInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceResponseBody> body{};

  ListInstanceResponse() {}

  explicit ListInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceResponse() = default;
};
class ListInstanceEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> moduleName{};
  shared_ptr<bool> summary{};

  ListInstanceEndpointRequest() {}

  explicit ListInstanceEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<bool>(boost::any_cast<bool>(m["Summary"]));
    }
  }


  virtual ~ListInstanceEndpointRequest() = default;
};
class ListInstanceEndpointResponseBodyEndpointsAclEntries : public Darabonba::Model {
public:
  shared_ptr<string> entry{};

  ListInstanceEndpointResponseBodyEndpointsAclEntries() {}

  explicit ListInstanceEndpointResponseBodyEndpointsAclEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
  }


  virtual ~ListInstanceEndpointResponseBodyEndpointsAclEntries() = default;
};
class ListInstanceEndpointResponseBodyEndpointsDomains : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> type{};

  ListInstanceEndpointResponseBodyEndpointsDomains() {}

  explicit ListInstanceEndpointResponseBodyEndpointsDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListInstanceEndpointResponseBodyEndpointsDomains() = default;
};
class ListInstanceEndpointResponseBodyEndpointsLinkedVpcs : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};

  ListInstanceEndpointResponseBodyEndpointsLinkedVpcs() {}

  explicit ListInstanceEndpointResponseBodyEndpointsLinkedVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListInstanceEndpointResponseBodyEndpointsLinkedVpcs() = default;
};
class ListInstanceEndpointResponseBodyEndpoints : public Darabonba::Model {
public:
  shared_ptr<bool> aclEnable{};
  shared_ptr<vector<ListInstanceEndpointResponseBodyEndpointsAclEntries>> aclEntries{};
  shared_ptr<vector<ListInstanceEndpointResponseBodyEndpointsDomains>> domains{};
  shared_ptr<bool> enable{};
  shared_ptr<string> endpointType{};
  shared_ptr<vector<ListInstanceEndpointResponseBodyEndpointsLinkedVpcs>> linkedVpcs{};
  shared_ptr<string> status{};

  ListInstanceEndpointResponseBodyEndpoints() {}

  explicit ListInstanceEndpointResponseBodyEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclEnable) {
      res["AclEnable"] = boost::any(*aclEnable);
    }
    if (aclEntries) {
      vector<boost::any> temp1;
      for(auto item1:*aclEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclEntries"] = boost::any(temp1);
    }
    if (domains) {
      vector<boost::any> temp1;
      for(auto item1:*domains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Domains"] = boost::any(temp1);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (linkedVpcs) {
      vector<boost::any> temp1;
      for(auto item1:*linkedVpcs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LinkedVpcs"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclEnable") != m.end() && !m["AclEnable"].empty()) {
      aclEnable = make_shared<bool>(boost::any_cast<bool>(m["AclEnable"]));
    }
    if (m.find("AclEntries") != m.end() && !m["AclEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["AclEntries"].type()) {
        vector<ListInstanceEndpointResponseBodyEndpointsAclEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceEndpointResponseBodyEndpointsAclEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclEntries = make_shared<vector<ListInstanceEndpointResponseBodyEndpointsAclEntries>>(expect1);
      }
    }
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<ListInstanceEndpointResponseBodyEndpointsDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceEndpointResponseBodyEndpointsDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domains = make_shared<vector<ListInstanceEndpointResponseBodyEndpointsDomains>>(expect1);
      }
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("LinkedVpcs") != m.end() && !m["LinkedVpcs"].empty()) {
      if (typeid(vector<boost::any>) == m["LinkedVpcs"].type()) {
        vector<ListInstanceEndpointResponseBodyEndpointsLinkedVpcs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LinkedVpcs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceEndpointResponseBodyEndpointsLinkedVpcs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        linkedVpcs = make_shared<vector<ListInstanceEndpointResponseBodyEndpointsLinkedVpcs>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListInstanceEndpointResponseBodyEndpoints() = default;
};
class ListInstanceEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListInstanceEndpointResponseBodyEndpoints>> endpoints{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  ListInstanceEndpointResponseBody() {}

  explicit ListInstanceEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (endpoints) {
      vector<boost::any> temp1;
      for(auto item1:*endpoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Endpoints"] = boost::any(temp1);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(vector<boost::any>) == m["Endpoints"].type()) {
        vector<ListInstanceEndpointResponseBodyEndpoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Endpoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceEndpointResponseBodyEndpoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpoints = make_shared<vector<ListInstanceEndpointResponseBodyEndpoints>>(expect1);
      }
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInstanceEndpointResponseBody() = default;
};
class ListInstanceEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceEndpointResponseBody> body{};

  ListInstanceEndpointResponse() {}

  explicit ListInstanceEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceEndpointResponse() = default;
};
class ListInstanceRegionRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};

  ListInstanceRegionRequest() {}

  explicit ListInstanceRegionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~ListInstanceRegionRequest() = default;
};
class ListInstanceRegionResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  ListInstanceRegionResponseBodyRegions() {}

  explicit ListInstanceRegionResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListInstanceRegionResponseBodyRegions() = default;
};
class ListInstanceRegionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<vector<ListInstanceRegionResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  ListInstanceRegionResponseBody() {}

  explicit ListInstanceRegionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<ListInstanceRegionResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceRegionResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<ListInstanceRegionResponseBodyRegions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInstanceRegionResponseBody() = default;
};
class ListInstanceRegionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceRegionResponseBody> body{};

  ListInstanceRegionResponse() {}

  explicit ListInstanceRegionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceRegionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceRegionResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceRegionResponse() = default;
};
class ListNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> namespaceStatus{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  ListNamespaceRequest() {}

  explicit ListNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (namespaceStatus) {
      res["NamespaceStatus"] = boost::any(*namespaceStatus);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("NamespaceStatus") != m.end() && !m["NamespaceStatus"].empty()) {
      namespaceStatus = make_shared<string>(boost::any_cast<string>(m["NamespaceStatus"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListNamespaceRequest() = default;
};
class ListNamespaceResponseBodyNamespaces : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateRepo{};
  shared_ptr<RepoConfiguration> defaultRepoConfiguration{};
  shared_ptr<string> defaultRepoType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> namespaceStatus{};
  shared_ptr<string> resourceGroupId{};

  ListNamespaceResponseBodyNamespaces() {}

  explicit ListNamespaceResponseBodyNamespaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateRepo) {
      res["AutoCreateRepo"] = boost::any(*autoCreateRepo);
    }
    if (defaultRepoConfiguration) {
      res["DefaultRepoConfiguration"] = defaultRepoConfiguration ? boost::any(defaultRepoConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultRepoType) {
      res["DefaultRepoType"] = boost::any(*defaultRepoType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (namespaceStatus) {
      res["NamespaceStatus"] = boost::any(*namespaceStatus);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreateRepo") != m.end() && !m["AutoCreateRepo"].empty()) {
      autoCreateRepo = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateRepo"]));
    }
    if (m.find("DefaultRepoConfiguration") != m.end() && !m["DefaultRepoConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["DefaultRepoConfiguration"].type()) {
        RepoConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DefaultRepoConfiguration"]));
        defaultRepoConfiguration = make_shared<RepoConfiguration>(model1);
      }
    }
    if (m.find("DefaultRepoType") != m.end() && !m["DefaultRepoType"].empty()) {
      defaultRepoType = make_shared<string>(boost::any_cast<string>(m["DefaultRepoType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("NamespaceStatus") != m.end() && !m["NamespaceStatus"].empty()) {
      namespaceStatus = make_shared<string>(boost::any_cast<string>(m["NamespaceStatus"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListNamespaceResponseBodyNamespaces() = default;
};
class ListNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<vector<ListNamespaceResponseBodyNamespaces>> namespaces{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListNamespaceResponseBody() {}

  explicit ListNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (namespaces) {
      vector<boost::any> temp1;
      for(auto item1:*namespaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Namespaces"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Namespaces"].type()) {
        vector<ListNamespaceResponseBodyNamespaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Namespaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNamespaceResponseBodyNamespaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        namespaces = make_shared<vector<ListNamespaceResponseBodyNamespaces>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListNamespaceResponseBody() = default;
};
class ListNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNamespaceResponseBody> body{};

  ListNamespaceResponse() {}

  explicit ListNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~ListNamespaceResponse() = default;
};
class ListRepoBuildRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoId{};

  ListRepoBuildRecordRequest() {}

  explicit ListRepoBuildRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~ListRepoBuildRecordRequest() = default;
};
class ListRepoBuildRecordResponseBodyBuildRecordsImage : public Darabonba::Model {
public:
  shared_ptr<string> imageTag{};
  shared_ptr<string> repoId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  ListRepoBuildRecordResponseBodyBuildRecordsImage() {}

  explicit ListRepoBuildRecordResponseBodyBuildRecordsImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~ListRepoBuildRecordResponseBodyBuildRecordsImage() = default;
};
class ListRepoBuildRecordResponseBodyBuildRecords : public Darabonba::Model {
public:
  shared_ptr<string> buildRecordId{};
  shared_ptr<string> buildStatus{};
  shared_ptr<string> endTime{};
  shared_ptr<ListRepoBuildRecordResponseBodyBuildRecordsImage> image{};
  shared_ptr<string> startTime{};

  ListRepoBuildRecordResponseBodyBuildRecords() {}

  explicit ListRepoBuildRecordResponseBodyBuildRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRecordId) {
      res["BuildRecordId"] = boost::any(*buildRecordId);
    }
    if (buildStatus) {
      res["BuildStatus"] = boost::any(*buildStatus);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (image) {
      res["Image"] = image ? boost::any(image->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRecordId") != m.end() && !m["BuildRecordId"].empty()) {
      buildRecordId = make_shared<string>(boost::any_cast<string>(m["BuildRecordId"]));
    }
    if (m.find("BuildStatus") != m.end() && !m["BuildStatus"].empty()) {
      buildStatus = make_shared<string>(boost::any_cast<string>(m["BuildStatus"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      if (typeid(map<string, boost::any>) == m["Image"].type()) {
        ListRepoBuildRecordResponseBodyBuildRecordsImage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Image"]));
        image = make_shared<ListRepoBuildRecordResponseBodyBuildRecordsImage>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListRepoBuildRecordResponseBodyBuildRecords() = default;
};
class ListRepoBuildRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRepoBuildRecordResponseBodyBuildRecords>> buildRecords{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListRepoBuildRecordResponseBody() {}

  explicit ListRepoBuildRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRecords) {
      vector<boost::any> temp1;
      for(auto item1:*buildRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BuildRecords"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("BuildRecords") != m.end() && !m["BuildRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["BuildRecords"].type()) {
        vector<ListRepoBuildRecordResponseBodyBuildRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BuildRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepoBuildRecordResponseBodyBuildRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buildRecords = make_shared<vector<ListRepoBuildRecordResponseBodyBuildRecords>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListRepoBuildRecordResponseBody() = default;
};
class ListRepoBuildRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepoBuildRecordResponseBody> body{};

  ListRepoBuildRecordResponse() {}

  explicit ListRepoBuildRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepoBuildRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepoBuildRecordResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepoBuildRecordResponse() = default;
};
class ListRepoBuildRecordLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildRecordId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> offset{};
  shared_ptr<string> repoId{};

  ListRepoBuildRecordLogRequest() {}

  explicit ListRepoBuildRecordLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRecordId) {
      res["BuildRecordId"] = boost::any(*buildRecordId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRecordId") != m.end() && !m["BuildRecordId"].empty()) {
      buildRecordId = make_shared<string>(boost::any_cast<string>(m["BuildRecordId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~ListRepoBuildRecordLogRequest() = default;
};
class ListRepoBuildRecordLogResponseBodyBuildRecordLogs : public Darabonba::Model {
public:
  shared_ptr<string> buildStage{};
  shared_ptr<long> lineNumber{};
  shared_ptr<string> message{};

  ListRepoBuildRecordLogResponseBodyBuildRecordLogs() {}

  explicit ListRepoBuildRecordLogResponseBodyBuildRecordLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildStage) {
      res["BuildStage"] = boost::any(*buildStage);
    }
    if (lineNumber) {
      res["LineNumber"] = boost::any(*lineNumber);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildStage") != m.end() && !m["BuildStage"].empty()) {
      buildStage = make_shared<string>(boost::any_cast<string>(m["BuildStage"]));
    }
    if (m.find("LineNumber") != m.end() && !m["LineNumber"].empty()) {
      lineNumber = make_shared<long>(boost::any_cast<long>(m["LineNumber"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~ListRepoBuildRecordLogResponseBodyBuildRecordLogs() = default;
};
class ListRepoBuildRecordLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRepoBuildRecordLogResponseBodyBuildRecordLogs>> buildRecordLogs{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListRepoBuildRecordLogResponseBody() {}

  explicit ListRepoBuildRecordLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRecordLogs) {
      vector<boost::any> temp1;
      for(auto item1:*buildRecordLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BuildRecordLogs"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("BuildRecordLogs") != m.end() && !m["BuildRecordLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["BuildRecordLogs"].type()) {
        vector<ListRepoBuildRecordLogResponseBodyBuildRecordLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BuildRecordLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepoBuildRecordLogResponseBodyBuildRecordLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buildRecordLogs = make_shared<vector<ListRepoBuildRecordLogResponseBodyBuildRecordLogs>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListRepoBuildRecordLogResponseBody() = default;
};
class ListRepoBuildRecordLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepoBuildRecordLogResponseBody> body{};

  ListRepoBuildRecordLogResponse() {}

  explicit ListRepoBuildRecordLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepoBuildRecordLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepoBuildRecordLogResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepoBuildRecordLogResponse() = default;
};
class ListRepoBuildRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoId{};

  ListRepoBuildRuleRequest() {}

  explicit ListRepoBuildRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~ListRepoBuildRuleRequest() = default;
};
class ListRepoBuildRuleResponseBodyBuildRules : public Darabonba::Model {
public:
  shared_ptr<vector<string>> buildArgs{};
  shared_ptr<string> buildRuleId{};
  shared_ptr<string> dockerfileLocation{};
  shared_ptr<string> dockerfileName{};
  shared_ptr<string> imageTag{};
  shared_ptr<vector<string>> platforms{};
  shared_ptr<string> pushName{};
  shared_ptr<string> pushType{};

  ListRepoBuildRuleResponseBodyBuildRules() {}

  explicit ListRepoBuildRuleResponseBodyBuildRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildArgs) {
      res["BuildArgs"] = boost::any(*buildArgs);
    }
    if (buildRuleId) {
      res["BuildRuleId"] = boost::any(*buildRuleId);
    }
    if (dockerfileLocation) {
      res["DockerfileLocation"] = boost::any(*dockerfileLocation);
    }
    if (dockerfileName) {
      res["DockerfileName"] = boost::any(*dockerfileName);
    }
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (platforms) {
      res["Platforms"] = boost::any(*platforms);
    }
    if (pushName) {
      res["PushName"] = boost::any(*pushName);
    }
    if (pushType) {
      res["PushType"] = boost::any(*pushType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildArgs") != m.end() && !m["BuildArgs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BuildArgs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BuildArgs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      buildArgs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BuildRuleId") != m.end() && !m["BuildRuleId"].empty()) {
      buildRuleId = make_shared<string>(boost::any_cast<string>(m["BuildRuleId"]));
    }
    if (m.find("DockerfileLocation") != m.end() && !m["DockerfileLocation"].empty()) {
      dockerfileLocation = make_shared<string>(boost::any_cast<string>(m["DockerfileLocation"]));
    }
    if (m.find("DockerfileName") != m.end() && !m["DockerfileName"].empty()) {
      dockerfileName = make_shared<string>(boost::any_cast<string>(m["DockerfileName"]));
    }
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("Platforms") != m.end() && !m["Platforms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Platforms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Platforms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      platforms = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PushName") != m.end() && !m["PushName"].empty()) {
      pushName = make_shared<string>(boost::any_cast<string>(m["PushName"]));
    }
    if (m.find("PushType") != m.end() && !m["PushType"].empty()) {
      pushType = make_shared<string>(boost::any_cast<string>(m["PushType"]));
    }
  }


  virtual ~ListRepoBuildRuleResponseBodyBuildRules() = default;
};
class ListRepoBuildRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRepoBuildRuleResponseBodyBuildRules>> buildRules{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListRepoBuildRuleResponseBody() {}

  explicit ListRepoBuildRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRules) {
      vector<boost::any> temp1;
      for(auto item1:*buildRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BuildRules"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("BuildRules") != m.end() && !m["BuildRules"].empty()) {
      if (typeid(vector<boost::any>) == m["BuildRules"].type()) {
        vector<ListRepoBuildRuleResponseBodyBuildRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BuildRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepoBuildRuleResponseBodyBuildRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buildRules = make_shared<vector<ListRepoBuildRuleResponseBodyBuildRules>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListRepoBuildRuleResponseBody() = default;
};
class ListRepoBuildRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepoBuildRuleResponseBody> body{};

  ListRepoBuildRuleResponse() {}

  explicit ListRepoBuildRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepoBuildRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepoBuildRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepoBuildRuleResponse() = default;
};
class ListRepoSyncRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoName{};
  shared_ptr<string> targetInstanceId{};
  shared_ptr<string> targetRegionId{};

  ListRepoSyncRuleRequest() {}

  explicit ListRepoSyncRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (targetInstanceId) {
      res["TargetInstanceId"] = boost::any(*targetInstanceId);
    }
    if (targetRegionId) {
      res["TargetRegionId"] = boost::any(*targetRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("TargetInstanceId") != m.end() && !m["TargetInstanceId"].empty()) {
      targetInstanceId = make_shared<string>(boost::any_cast<string>(m["TargetInstanceId"]));
    }
    if (m.find("TargetRegionId") != m.end() && !m["TargetRegionId"].empty()) {
      targetRegionId = make_shared<string>(boost::any_cast<string>(m["TargetRegionId"]));
    }
  }


  virtual ~ListRepoSyncRuleRequest() = default;
};
class ListRepoSyncRuleResponseBodySyncRules : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<bool> crossUser{};
  shared_ptr<string> localInstanceId{};
  shared_ptr<string> localNamespaceName{};
  shared_ptr<string> localRegionId{};
  shared_ptr<string> localRepoName{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> repoNameFilter{};
  shared_ptr<string> syncDirection{};
  shared_ptr<string> syncRuleId{};
  shared_ptr<string> syncRuleName{};
  shared_ptr<string> syncScope{};
  shared_ptr<string> syncTrigger{};
  shared_ptr<string> tagFilter{};
  shared_ptr<string> targetInstanceId{};
  shared_ptr<string> targetNamespaceName{};
  shared_ptr<string> targetRegionId{};
  shared_ptr<string> targetRepoName{};

  ListRepoSyncRuleResponseBodySyncRules() {}

  explicit ListRepoSyncRuleResponseBodySyncRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (crossUser) {
      res["CrossUser"] = boost::any(*crossUser);
    }
    if (localInstanceId) {
      res["LocalInstanceId"] = boost::any(*localInstanceId);
    }
    if (localNamespaceName) {
      res["LocalNamespaceName"] = boost::any(*localNamespaceName);
    }
    if (localRegionId) {
      res["LocalRegionId"] = boost::any(*localRegionId);
    }
    if (localRepoName) {
      res["LocalRepoName"] = boost::any(*localRepoName);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (repoNameFilter) {
      res["RepoNameFilter"] = boost::any(*repoNameFilter);
    }
    if (syncDirection) {
      res["SyncDirection"] = boost::any(*syncDirection);
    }
    if (syncRuleId) {
      res["SyncRuleId"] = boost::any(*syncRuleId);
    }
    if (syncRuleName) {
      res["SyncRuleName"] = boost::any(*syncRuleName);
    }
    if (syncScope) {
      res["SyncScope"] = boost::any(*syncScope);
    }
    if (syncTrigger) {
      res["SyncTrigger"] = boost::any(*syncTrigger);
    }
    if (tagFilter) {
      res["TagFilter"] = boost::any(*tagFilter);
    }
    if (targetInstanceId) {
      res["TargetInstanceId"] = boost::any(*targetInstanceId);
    }
    if (targetNamespaceName) {
      res["TargetNamespaceName"] = boost::any(*targetNamespaceName);
    }
    if (targetRegionId) {
      res["TargetRegionId"] = boost::any(*targetRegionId);
    }
    if (targetRepoName) {
      res["TargetRepoName"] = boost::any(*targetRepoName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CrossUser") != m.end() && !m["CrossUser"].empty()) {
      crossUser = make_shared<bool>(boost::any_cast<bool>(m["CrossUser"]));
    }
    if (m.find("LocalInstanceId") != m.end() && !m["LocalInstanceId"].empty()) {
      localInstanceId = make_shared<string>(boost::any_cast<string>(m["LocalInstanceId"]));
    }
    if (m.find("LocalNamespaceName") != m.end() && !m["LocalNamespaceName"].empty()) {
      localNamespaceName = make_shared<string>(boost::any_cast<string>(m["LocalNamespaceName"]));
    }
    if (m.find("LocalRegionId") != m.end() && !m["LocalRegionId"].empty()) {
      localRegionId = make_shared<string>(boost::any_cast<string>(m["LocalRegionId"]));
    }
    if (m.find("LocalRepoName") != m.end() && !m["LocalRepoName"].empty()) {
      localRepoName = make_shared<string>(boost::any_cast<string>(m["LocalRepoName"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("RepoNameFilter") != m.end() && !m["RepoNameFilter"].empty()) {
      repoNameFilter = make_shared<string>(boost::any_cast<string>(m["RepoNameFilter"]));
    }
    if (m.find("SyncDirection") != m.end() && !m["SyncDirection"].empty()) {
      syncDirection = make_shared<string>(boost::any_cast<string>(m["SyncDirection"]));
    }
    if (m.find("SyncRuleId") != m.end() && !m["SyncRuleId"].empty()) {
      syncRuleId = make_shared<string>(boost::any_cast<string>(m["SyncRuleId"]));
    }
    if (m.find("SyncRuleName") != m.end() && !m["SyncRuleName"].empty()) {
      syncRuleName = make_shared<string>(boost::any_cast<string>(m["SyncRuleName"]));
    }
    if (m.find("SyncScope") != m.end() && !m["SyncScope"].empty()) {
      syncScope = make_shared<string>(boost::any_cast<string>(m["SyncScope"]));
    }
    if (m.find("SyncTrigger") != m.end() && !m["SyncTrigger"].empty()) {
      syncTrigger = make_shared<string>(boost::any_cast<string>(m["SyncTrigger"]));
    }
    if (m.find("TagFilter") != m.end() && !m["TagFilter"].empty()) {
      tagFilter = make_shared<string>(boost::any_cast<string>(m["TagFilter"]));
    }
    if (m.find("TargetInstanceId") != m.end() && !m["TargetInstanceId"].empty()) {
      targetInstanceId = make_shared<string>(boost::any_cast<string>(m["TargetInstanceId"]));
    }
    if (m.find("TargetNamespaceName") != m.end() && !m["TargetNamespaceName"].empty()) {
      targetNamespaceName = make_shared<string>(boost::any_cast<string>(m["TargetNamespaceName"]));
    }
    if (m.find("TargetRegionId") != m.end() && !m["TargetRegionId"].empty()) {
      targetRegionId = make_shared<string>(boost::any_cast<string>(m["TargetRegionId"]));
    }
    if (m.find("TargetRepoName") != m.end() && !m["TargetRepoName"].empty()) {
      targetRepoName = make_shared<string>(boost::any_cast<string>(m["TargetRepoName"]));
    }
  }


  virtual ~ListRepoSyncRuleResponseBodySyncRules() = default;
};
class ListRepoSyncRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRepoSyncRuleResponseBodySyncRules>> syncRules{};
  shared_ptr<long> totalCount{};

  ListRepoSyncRuleResponseBody() {}

  explicit ListRepoSyncRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (syncRules) {
      vector<boost::any> temp1;
      for(auto item1:*syncRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SyncRules"] = boost::any(temp1);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SyncRules") != m.end() && !m["SyncRules"].empty()) {
      if (typeid(vector<boost::any>) == m["SyncRules"].type()) {
        vector<ListRepoSyncRuleResponseBodySyncRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SyncRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepoSyncRuleResponseBodySyncRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        syncRules = make_shared<vector<ListRepoSyncRuleResponseBodySyncRules>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListRepoSyncRuleResponseBody() = default;
};
class ListRepoSyncRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepoSyncRuleResponseBody> body{};

  ListRepoSyncRuleResponse() {}

  explicit ListRepoSyncRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepoSyncRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepoSyncRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepoSyncRuleResponse() = default;
};
class ListRepoSyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> syncRecordId{};
  shared_ptr<string> tag{};

  ListRepoSyncTaskRequest() {}

  explicit ListRepoSyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (syncRecordId) {
      res["SyncRecordId"] = boost::any(*syncRecordId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("SyncRecordId") != m.end() && !m["SyncRecordId"].empty()) {
      syncRecordId = make_shared<string>(boost::any_cast<string>(m["SyncRecordId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ListRepoSyncTaskRequest() = default;
};
class ListRepoSyncTaskResponseBodySyncTasksImageFrom : public Darabonba::Model {
public:
  shared_ptr<string> imageTag{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  ListRepoSyncTaskResponseBodySyncTasksImageFrom() {}

  explicit ListRepoSyncTaskResponseBodySyncTasksImageFrom(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~ListRepoSyncTaskResponseBodySyncTasksImageFrom() = default;
};
class ListRepoSyncTaskResponseBodySyncTasksImageTo : public Darabonba::Model {
public:
  shared_ptr<string> imageTag{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};

  ListRepoSyncTaskResponseBodySyncTasksImageTo() {}

  explicit ListRepoSyncTaskResponseBodySyncTasksImageTo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
  }


  virtual ~ListRepoSyncTaskResponseBodySyncTasksImageTo() = default;
};
class ListRepoSyncTaskResponseBodySyncTasks : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<bool> crossUser{};
  shared_ptr<bool> customLink{};
  shared_ptr<ListRepoSyncTaskResponseBodySyncTasksImageFrom> imageFrom{};
  shared_ptr<ListRepoSyncTaskResponseBodySyncTasksImageTo> imageTo{};
  shared_ptr<long> modifedTime{};
  shared_ptr<string> syncBatchTaskId{};
  shared_ptr<string> syncRuleId{};
  shared_ptr<string> syncTaskId{};
  shared_ptr<bool> syncTransAccelerate{};
  shared_ptr<string> taskIssue{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> taskTrigger{};

  ListRepoSyncTaskResponseBodySyncTasks() {}

  explicit ListRepoSyncTaskResponseBodySyncTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (crossUser) {
      res["CrossUser"] = boost::any(*crossUser);
    }
    if (customLink) {
      res["CustomLink"] = boost::any(*customLink);
    }
    if (imageFrom) {
      res["ImageFrom"] = imageFrom ? boost::any(imageFrom->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageTo) {
      res["ImageTo"] = imageTo ? boost::any(imageTo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifedTime) {
      res["ModifedTime"] = boost::any(*modifedTime);
    }
    if (syncBatchTaskId) {
      res["SyncBatchTaskId"] = boost::any(*syncBatchTaskId);
    }
    if (syncRuleId) {
      res["SyncRuleId"] = boost::any(*syncRuleId);
    }
    if (syncTaskId) {
      res["SyncTaskId"] = boost::any(*syncTaskId);
    }
    if (syncTransAccelerate) {
      res["SyncTransAccelerate"] = boost::any(*syncTransAccelerate);
    }
    if (taskIssue) {
      res["TaskIssue"] = boost::any(*taskIssue);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskTrigger) {
      res["TaskTrigger"] = boost::any(*taskTrigger);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CrossUser") != m.end() && !m["CrossUser"].empty()) {
      crossUser = make_shared<bool>(boost::any_cast<bool>(m["CrossUser"]));
    }
    if (m.find("CustomLink") != m.end() && !m["CustomLink"].empty()) {
      customLink = make_shared<bool>(boost::any_cast<bool>(m["CustomLink"]));
    }
    if (m.find("ImageFrom") != m.end() && !m["ImageFrom"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageFrom"].type()) {
        ListRepoSyncTaskResponseBodySyncTasksImageFrom model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageFrom"]));
        imageFrom = make_shared<ListRepoSyncTaskResponseBodySyncTasksImageFrom>(model1);
      }
    }
    if (m.find("ImageTo") != m.end() && !m["ImageTo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageTo"].type()) {
        ListRepoSyncTaskResponseBodySyncTasksImageTo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageTo"]));
        imageTo = make_shared<ListRepoSyncTaskResponseBodySyncTasksImageTo>(model1);
      }
    }
    if (m.find("ModifedTime") != m.end() && !m["ModifedTime"].empty()) {
      modifedTime = make_shared<long>(boost::any_cast<long>(m["ModifedTime"]));
    }
    if (m.find("SyncBatchTaskId") != m.end() && !m["SyncBatchTaskId"].empty()) {
      syncBatchTaskId = make_shared<string>(boost::any_cast<string>(m["SyncBatchTaskId"]));
    }
    if (m.find("SyncRuleId") != m.end() && !m["SyncRuleId"].empty()) {
      syncRuleId = make_shared<string>(boost::any_cast<string>(m["SyncRuleId"]));
    }
    if (m.find("SyncTaskId") != m.end() && !m["SyncTaskId"].empty()) {
      syncTaskId = make_shared<string>(boost::any_cast<string>(m["SyncTaskId"]));
    }
    if (m.find("SyncTransAccelerate") != m.end() && !m["SyncTransAccelerate"].empty()) {
      syncTransAccelerate = make_shared<bool>(boost::any_cast<bool>(m["SyncTransAccelerate"]));
    }
    if (m.find("TaskIssue") != m.end() && !m["TaskIssue"].empty()) {
      taskIssue = make_shared<string>(boost::any_cast<string>(m["TaskIssue"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskTrigger") != m.end() && !m["TaskTrigger"].empty()) {
      taskTrigger = make_shared<string>(boost::any_cast<string>(m["TaskTrigger"]));
    }
  }


  virtual ~ListRepoSyncTaskResponseBodySyncTasks() = default;
};
class ListRepoSyncTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRepoSyncTaskResponseBodySyncTasks>> syncTasks{};
  shared_ptr<string> totalCount{};

  ListRepoSyncTaskResponseBody() {}

  explicit ListRepoSyncTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (syncTasks) {
      vector<boost::any> temp1;
      for(auto item1:*syncTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SyncTasks"] = boost::any(temp1);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SyncTasks") != m.end() && !m["SyncTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["SyncTasks"].type()) {
        vector<ListRepoSyncTaskResponseBodySyncTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SyncTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepoSyncTaskResponseBodySyncTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        syncTasks = make_shared<vector<ListRepoSyncTaskResponseBodySyncTasks>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListRepoSyncTaskResponseBody() = default;
};
class ListRepoSyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepoSyncTaskResponseBody> body{};

  ListRepoSyncTaskResponse() {}

  explicit ListRepoSyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepoSyncTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepoSyncTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepoSyncTaskResponse() = default;
};
class ListRepoTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoId{};

  ListRepoTagRequest() {}

  explicit ListRepoTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~ListRepoTagRequest() = default;
};
class ListRepoTagResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<string> digest{};
  shared_ptr<string> imageCreate{};
  shared_ptr<string> imageId{};
  shared_ptr<long> imageSize{};
  shared_ptr<string> imageUpdate{};
  shared_ptr<string> status{};
  shared_ptr<string> tag{};

  ListRepoTagResponseBodyImages() {}

  explicit ListRepoTagResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (imageCreate) {
      res["ImageCreate"] = boost::any(*imageCreate);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageSize) {
      res["ImageSize"] = boost::any(*imageSize);
    }
    if (imageUpdate) {
      res["ImageUpdate"] = boost::any(*imageUpdate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("ImageCreate") != m.end() && !m["ImageCreate"].empty()) {
      imageCreate = make_shared<string>(boost::any_cast<string>(m["ImageCreate"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageSize") != m.end() && !m["ImageSize"].empty()) {
      imageSize = make_shared<long>(boost::any_cast<long>(m["ImageSize"]));
    }
    if (m.find("ImageUpdate") != m.end() && !m["ImageUpdate"].empty()) {
      imageUpdate = make_shared<string>(boost::any_cast<string>(m["ImageUpdate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ListRepoTagResponseBodyImages() = default;
};
class ListRepoTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListRepoTagResponseBodyImages>> images{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListRepoTagResponseBody() {}

  explicit ListRepoTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<ListRepoTagResponseBodyImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepoTagResponseBodyImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<ListRepoTagResponseBodyImages>>(expect1);
      }
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListRepoTagResponseBody() = default;
};
class ListRepoTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepoTagResponseBody> body{};

  ListRepoTagResponse() {}

  explicit ListRepoTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepoTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepoTagResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepoTagResponse() = default;
};
class ListRepoTagScanResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> digest{};
  shared_ptr<string> filterValue{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoId{};
  shared_ptr<string> scanTaskId{};
  shared_ptr<string> scanType{};
  shared_ptr<string> severity{};
  shared_ptr<string> tag{};
  shared_ptr<string> vulQueryKey{};

  ListRepoTagScanResultRequest() {}

  explicit ListRepoTagScanResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (filterValue) {
      res["FilterValue"] = boost::any(*filterValue);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (scanTaskId) {
      res["ScanTaskId"] = boost::any(*scanTaskId);
    }
    if (scanType) {
      res["ScanType"] = boost::any(*scanType);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (vulQueryKey) {
      res["VulQueryKey"] = boost::any(*vulQueryKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("FilterValue") != m.end() && !m["FilterValue"].empty()) {
      filterValue = make_shared<string>(boost::any_cast<string>(m["FilterValue"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("ScanTaskId") != m.end() && !m["ScanTaskId"].empty()) {
      scanTaskId = make_shared<string>(boost::any_cast<string>(m["ScanTaskId"]));
    }
    if (m.find("ScanType") != m.end() && !m["ScanType"].empty()) {
      scanType = make_shared<string>(boost::any_cast<string>(m["ScanType"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("VulQueryKey") != m.end() && !m["VulQueryKey"].empty()) {
      vulQueryKey = make_shared<string>(boost::any_cast<string>(m["VulQueryKey"]));
    }
  }


  virtual ~ListRepoTagScanResultRequest() = default;
};
class ListRepoTagScanResultResponseBodyVulnerabilities : public Darabonba::Model {
public:
  shared_ptr<string> addedBy{};
  shared_ptr<string> aliasName{};
  shared_ptr<string> cveLink{};
  shared_ptr<string> cveLocation{};
  shared_ptr<string> cveName{};
  shared_ptr<string> description{};
  shared_ptr<string> feature{};
  shared_ptr<string> fixCmd{};
  shared_ptr<string> scanType{};
  shared_ptr<string> severity{};
  shared_ptr<string> version{};
  shared_ptr<string> versionFixed{};
  shared_ptr<string> versionFormat{};

  ListRepoTagScanResultResponseBodyVulnerabilities() {}

  explicit ListRepoTagScanResultResponseBodyVulnerabilities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addedBy) {
      res["AddedBy"] = boost::any(*addedBy);
    }
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (cveLink) {
      res["CveLink"] = boost::any(*cveLink);
    }
    if (cveLocation) {
      res["CveLocation"] = boost::any(*cveLocation);
    }
    if (cveName) {
      res["CveName"] = boost::any(*cveName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (feature) {
      res["Feature"] = boost::any(*feature);
    }
    if (fixCmd) {
      res["FixCmd"] = boost::any(*fixCmd);
    }
    if (scanType) {
      res["ScanType"] = boost::any(*scanType);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionFixed) {
      res["VersionFixed"] = boost::any(*versionFixed);
    }
    if (versionFormat) {
      res["VersionFormat"] = boost::any(*versionFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddedBy") != m.end() && !m["AddedBy"].empty()) {
      addedBy = make_shared<string>(boost::any_cast<string>(m["AddedBy"]));
    }
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("CveLink") != m.end() && !m["CveLink"].empty()) {
      cveLink = make_shared<string>(boost::any_cast<string>(m["CveLink"]));
    }
    if (m.find("CveLocation") != m.end() && !m["CveLocation"].empty()) {
      cveLocation = make_shared<string>(boost::any_cast<string>(m["CveLocation"]));
    }
    if (m.find("CveName") != m.end() && !m["CveName"].empty()) {
      cveName = make_shared<string>(boost::any_cast<string>(m["CveName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      feature = make_shared<string>(boost::any_cast<string>(m["Feature"]));
    }
    if (m.find("FixCmd") != m.end() && !m["FixCmd"].empty()) {
      fixCmd = make_shared<string>(boost::any_cast<string>(m["FixCmd"]));
    }
    if (m.find("ScanType") != m.end() && !m["ScanType"].empty()) {
      scanType = make_shared<string>(boost::any_cast<string>(m["ScanType"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionFixed") != m.end() && !m["VersionFixed"].empty()) {
      versionFixed = make_shared<string>(boost::any_cast<string>(m["VersionFixed"]));
    }
    if (m.find("VersionFormat") != m.end() && !m["VersionFormat"].empty()) {
      versionFormat = make_shared<string>(boost::any_cast<string>(m["VersionFormat"]));
    }
  }


  virtual ~ListRepoTagScanResultResponseBodyVulnerabilities() = default;
};
class ListRepoTagScanResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListRepoTagScanResultResponseBodyVulnerabilities>> vulnerabilities{};

  ListRepoTagScanResultResponseBody() {}

  explicit ListRepoTagScanResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (vulnerabilities) {
      vector<boost::any> temp1;
      for(auto item1:*vulnerabilities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vulnerabilities"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
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
    if (m.find("Vulnerabilities") != m.end() && !m["Vulnerabilities"].empty()) {
      if (typeid(vector<boost::any>) == m["Vulnerabilities"].type()) {
        vector<ListRepoTagScanResultResponseBodyVulnerabilities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vulnerabilities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepoTagScanResultResponseBodyVulnerabilities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vulnerabilities = make_shared<vector<ListRepoTagScanResultResponseBodyVulnerabilities>>(expect1);
      }
    }
  }


  virtual ~ListRepoTagScanResultResponseBody() = default;
};
class ListRepoTagScanResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepoTagScanResultResponseBody> body{};

  ListRepoTagScanResultResponse() {}

  explicit ListRepoTagScanResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepoTagScanResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepoTagScanResultResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepoTagScanResultResponse() = default;
};
class ListRepoTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};

  ListRepoTriggerRequest() {}

  explicit ListRepoTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~ListRepoTriggerRequest() = default;
};
class ListRepoTriggerResponseBodyTriggers : public Darabonba::Model {
public:
  shared_ptr<string> repoEvent{};
  shared_ptr<string> triggerId{};
  shared_ptr<string> triggerName{};
  shared_ptr<string> triggerTag{};
  shared_ptr<string> triggerType{};
  shared_ptr<string> triggerUrl{};

  ListRepoTriggerResponseBodyTriggers() {}

  explicit ListRepoTriggerResponseBodyTriggers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (repoEvent) {
      res["RepoEvent"] = boost::any(*repoEvent);
    }
    if (triggerId) {
      res["TriggerId"] = boost::any(*triggerId);
    }
    if (triggerName) {
      res["TriggerName"] = boost::any(*triggerName);
    }
    if (triggerTag) {
      res["TriggerTag"] = boost::any(*triggerTag);
    }
    if (triggerType) {
      res["TriggerType"] = boost::any(*triggerType);
    }
    if (triggerUrl) {
      res["TriggerUrl"] = boost::any(*triggerUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RepoEvent") != m.end() && !m["RepoEvent"].empty()) {
      repoEvent = make_shared<string>(boost::any_cast<string>(m["RepoEvent"]));
    }
    if (m.find("TriggerId") != m.end() && !m["TriggerId"].empty()) {
      triggerId = make_shared<string>(boost::any_cast<string>(m["TriggerId"]));
    }
    if (m.find("TriggerName") != m.end() && !m["TriggerName"].empty()) {
      triggerName = make_shared<string>(boost::any_cast<string>(m["TriggerName"]));
    }
    if (m.find("TriggerTag") != m.end() && !m["TriggerTag"].empty()) {
      triggerTag = make_shared<string>(boost::any_cast<string>(m["TriggerTag"]));
    }
    if (m.find("TriggerType") != m.end() && !m["TriggerType"].empty()) {
      triggerType = make_shared<string>(boost::any_cast<string>(m["TriggerType"]));
    }
    if (m.find("TriggerUrl") != m.end() && !m["TriggerUrl"].empty()) {
      triggerUrl = make_shared<string>(boost::any_cast<string>(m["TriggerUrl"]));
    }
  }


  virtual ~ListRepoTriggerResponseBodyTriggers() = default;
};
class ListRepoTriggerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRepoTriggerResponseBodyTriggers>> triggers{};

  ListRepoTriggerResponseBody() {}

  explicit ListRepoTriggerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (triggers) {
      vector<boost::any> temp1;
      for(auto item1:*triggers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Triggers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Triggers") != m.end() && !m["Triggers"].empty()) {
      if (typeid(vector<boost::any>) == m["Triggers"].type()) {
        vector<ListRepoTriggerResponseBodyTriggers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Triggers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepoTriggerResponseBodyTriggers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        triggers = make_shared<vector<ListRepoTriggerResponseBodyTriggers>>(expect1);
      }
    }
  }


  virtual ~ListRepoTriggerResponseBody() = default;
};
class ListRepoTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepoTriggerResponseBody> body{};

  ListRepoTriggerResponse() {}

  explicit ListRepoTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepoTriggerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepoTriggerResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepoTriggerResponse() = default;
};
class ListRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> repoStatus{};

  ListRepositoryRequest() {}

  explicit ListRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (repoStatus) {
      res["RepoStatus"] = boost::any(*repoStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("RepoStatus") != m.end() && !m["RepoStatus"].empty()) {
      repoStatus = make_shared<string>(boost::any_cast<string>(m["RepoStatus"]));
    }
  }


  virtual ~ListRepositoryRequest() = default;
};
class ListRepositoryResponseBodyRepositories : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> repoBuildType{};
  shared_ptr<string> repoId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> repoStatus{};
  shared_ptr<string> repoType{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> summary{};
  shared_ptr<bool> tagImmutability{};

  ListRepositoryResponseBodyRepositories() {}

  explicit ListRepositoryResponseBodyRepositories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (repoBuildType) {
      res["RepoBuildType"] = boost::any(*repoBuildType);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (repoStatus) {
      res["RepoStatus"] = boost::any(*repoStatus);
    }
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (tagImmutability) {
      res["TagImmutability"] = boost::any(*tagImmutability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("RepoBuildType") != m.end() && !m["RepoBuildType"].empty()) {
      repoBuildType = make_shared<string>(boost::any_cast<string>(m["RepoBuildType"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("RepoStatus") != m.end() && !m["RepoStatus"].empty()) {
      repoStatus = make_shared<string>(boost::any_cast<string>(m["RepoStatus"]));
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("TagImmutability") != m.end() && !m["TagImmutability"].empty()) {
      tagImmutability = make_shared<bool>(boost::any_cast<bool>(m["TagImmutability"]));
    }
  }


  virtual ~ListRepositoryResponseBodyRepositories() = default;
};
class ListRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListRepositoryResponseBodyRepositories>> repositories{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListRepositoryResponseBody() {}

  explicit ListRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repositories) {
      vector<boost::any> temp1;
      for(auto item1:*repositories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Repositories"] = boost::any(temp1);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Repositories") != m.end() && !m["Repositories"].empty()) {
      if (typeid(vector<boost::any>) == m["Repositories"].type()) {
        vector<ListRepositoryResponseBodyRepositories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Repositories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRepositoryResponseBodyRepositories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        repositories = make_shared<vector<ListRepositoryResponseBodyRepositories>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListRepositoryResponseBody() = default;
};
class ListRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRepositoryResponseBody> body{};

  ListRepositoryResponse() {}

  explicit ListRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoryResponse() = default;
};
class ListScanBaselineByTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> digest{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> level{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoId{};
  shared_ptr<string> scanTaskId{};
  shared_ptr<string> tag{};

  ListScanBaselineByTaskRequest() {}

  explicit ListScanBaselineByTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (scanTaskId) {
      res["ScanTaskId"] = boost::any(*scanTaskId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("ScanTaskId") != m.end() && !m["ScanTaskId"].empty()) {
      scanTaskId = make_shared<string>(boost::any_cast<string>(m["ScanTaskId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ListScanBaselineByTaskRequest() = default;
};
class ListScanBaselineByTaskResponseBodyScanBaselines : public Darabonba::Model {
public:
  shared_ptr<string> baselineClassAlias{};
  shared_ptr<string> baselineDetailAdvice{};
  shared_ptr<string> baselineDetailDescription{};
  shared_ptr<string> baselineDetailPrompt{};
  shared_ptr<long> baselineItemCount{};
  shared_ptr<string> baselineNameAlias{};
  shared_ptr<string> baselineNameKey{};
  shared_ptr<string> baselineNameLevel{};
  shared_ptr<long> createTime{};
  shared_ptr<long> firstScanTime{};
  shared_ptr<long> highRiskItemCount{};
  shared_ptr<long> lowRiskItemCount{};
  shared_ptr<long> middleRiskItemCount{};
  shared_ptr<string> scanTaskId{};
  shared_ptr<long> updateTime{};

  ListScanBaselineByTaskResponseBodyScanBaselines() {}

  explicit ListScanBaselineByTaskResponseBodyScanBaselines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baselineClassAlias) {
      res["BaselineClassAlias"] = boost::any(*baselineClassAlias);
    }
    if (baselineDetailAdvice) {
      res["BaselineDetailAdvice"] = boost::any(*baselineDetailAdvice);
    }
    if (baselineDetailDescription) {
      res["BaselineDetailDescription"] = boost::any(*baselineDetailDescription);
    }
    if (baselineDetailPrompt) {
      res["BaselineDetailPrompt"] = boost::any(*baselineDetailPrompt);
    }
    if (baselineItemCount) {
      res["BaselineItemCount"] = boost::any(*baselineItemCount);
    }
    if (baselineNameAlias) {
      res["BaselineNameAlias"] = boost::any(*baselineNameAlias);
    }
    if (baselineNameKey) {
      res["BaselineNameKey"] = boost::any(*baselineNameKey);
    }
    if (baselineNameLevel) {
      res["BaselineNameLevel"] = boost::any(*baselineNameLevel);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (firstScanTime) {
      res["FirstScanTime"] = boost::any(*firstScanTime);
    }
    if (highRiskItemCount) {
      res["HighRiskItemCount"] = boost::any(*highRiskItemCount);
    }
    if (lowRiskItemCount) {
      res["LowRiskItemCount"] = boost::any(*lowRiskItemCount);
    }
    if (middleRiskItemCount) {
      res["MiddleRiskItemCount"] = boost::any(*middleRiskItemCount);
    }
    if (scanTaskId) {
      res["ScanTaskId"] = boost::any(*scanTaskId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaselineClassAlias") != m.end() && !m["BaselineClassAlias"].empty()) {
      baselineClassAlias = make_shared<string>(boost::any_cast<string>(m["BaselineClassAlias"]));
    }
    if (m.find("BaselineDetailAdvice") != m.end() && !m["BaselineDetailAdvice"].empty()) {
      baselineDetailAdvice = make_shared<string>(boost::any_cast<string>(m["BaselineDetailAdvice"]));
    }
    if (m.find("BaselineDetailDescription") != m.end() && !m["BaselineDetailDescription"].empty()) {
      baselineDetailDescription = make_shared<string>(boost::any_cast<string>(m["BaselineDetailDescription"]));
    }
    if (m.find("BaselineDetailPrompt") != m.end() && !m["BaselineDetailPrompt"].empty()) {
      baselineDetailPrompt = make_shared<string>(boost::any_cast<string>(m["BaselineDetailPrompt"]));
    }
    if (m.find("BaselineItemCount") != m.end() && !m["BaselineItemCount"].empty()) {
      baselineItemCount = make_shared<long>(boost::any_cast<long>(m["BaselineItemCount"]));
    }
    if (m.find("BaselineNameAlias") != m.end() && !m["BaselineNameAlias"].empty()) {
      baselineNameAlias = make_shared<string>(boost::any_cast<string>(m["BaselineNameAlias"]));
    }
    if (m.find("BaselineNameKey") != m.end() && !m["BaselineNameKey"].empty()) {
      baselineNameKey = make_shared<string>(boost::any_cast<string>(m["BaselineNameKey"]));
    }
    if (m.find("BaselineNameLevel") != m.end() && !m["BaselineNameLevel"].empty()) {
      baselineNameLevel = make_shared<string>(boost::any_cast<string>(m["BaselineNameLevel"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("FirstScanTime") != m.end() && !m["FirstScanTime"].empty()) {
      firstScanTime = make_shared<long>(boost::any_cast<long>(m["FirstScanTime"]));
    }
    if (m.find("HighRiskItemCount") != m.end() && !m["HighRiskItemCount"].empty()) {
      highRiskItemCount = make_shared<long>(boost::any_cast<long>(m["HighRiskItemCount"]));
    }
    if (m.find("LowRiskItemCount") != m.end() && !m["LowRiskItemCount"].empty()) {
      lowRiskItemCount = make_shared<long>(boost::any_cast<long>(m["LowRiskItemCount"]));
    }
    if (m.find("MiddleRiskItemCount") != m.end() && !m["MiddleRiskItemCount"].empty()) {
      middleRiskItemCount = make_shared<long>(boost::any_cast<long>(m["MiddleRiskItemCount"]));
    }
    if (m.find("ScanTaskId") != m.end() && !m["ScanTaskId"].empty()) {
      scanTaskId = make_shared<string>(boost::any_cast<string>(m["ScanTaskId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListScanBaselineByTaskResponseBodyScanBaselines() = default;
};
class ListScanBaselineByTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListScanBaselineByTaskResponseBodyScanBaselines>> scanBaselines{};
  shared_ptr<long> totalCount{};

  ListScanBaselineByTaskResponseBody() {}

  explicit ListScanBaselineByTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scanBaselines) {
      vector<boost::any> temp1;
      for(auto item1:*scanBaselines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScanBaselines"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScanBaselines") != m.end() && !m["ScanBaselines"].empty()) {
      if (typeid(vector<boost::any>) == m["ScanBaselines"].type()) {
        vector<ListScanBaselineByTaskResponseBodyScanBaselines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScanBaselines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListScanBaselineByTaskResponseBodyScanBaselines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scanBaselines = make_shared<vector<ListScanBaselineByTaskResponseBodyScanBaselines>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListScanBaselineByTaskResponseBody() = default;
};
class ListScanBaselineByTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListScanBaselineByTaskResponseBody> body{};

  ListScanBaselineByTaskResponse() {}

  explicit ListScanBaselineByTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListScanBaselineByTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListScanBaselineByTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListScanBaselineByTaskResponse() = default;
};
class ListScanMaliciousFileByTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> digest{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> level{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> repoId{};
  shared_ptr<string> scanTaskId{};
  shared_ptr<string> tag{};

  ListScanMaliciousFileByTaskRequest() {}

  explicit ListScanMaliciousFileByTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (scanTaskId) {
      res["ScanTaskId"] = boost::any(*scanTaskId);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("ScanTaskId") != m.end() && !m["ScanTaskId"].empty()) {
      scanTaskId = make_shared<string>(boost::any_cast<string>(m["ScanTaskId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ListScanMaliciousFileByTaskRequest() = default;
};
class ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> filePath{};
  shared_ptr<long> firstScanTime{};
  shared_ptr<string> level{};
  shared_ptr<string> maliciousMd5{};
  shared_ptr<string> maliciousName{};
  shared_ptr<string> scanTaskId{};
  shared_ptr<long> updateTime{};

  ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles() {}

  explicit ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (firstScanTime) {
      res["FirstScanTime"] = boost::any(*firstScanTime);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (maliciousMd5) {
      res["MaliciousMd5"] = boost::any(*maliciousMd5);
    }
    if (maliciousName) {
      res["MaliciousName"] = boost::any(*maliciousName);
    }
    if (scanTaskId) {
      res["ScanTaskId"] = boost::any(*scanTaskId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("FirstScanTime") != m.end() && !m["FirstScanTime"].empty()) {
      firstScanTime = make_shared<long>(boost::any_cast<long>(m["FirstScanTime"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("MaliciousMd5") != m.end() && !m["MaliciousMd5"].empty()) {
      maliciousMd5 = make_shared<string>(boost::any_cast<string>(m["MaliciousMd5"]));
    }
    if (m.find("MaliciousName") != m.end() && !m["MaliciousName"].empty()) {
      maliciousName = make_shared<string>(boost::any_cast<string>(m["MaliciousName"]));
    }
    if (m.find("ScanTaskId") != m.end() && !m["ScanTaskId"].empty()) {
      scanTaskId = make_shared<string>(boost::any_cast<string>(m["ScanTaskId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles() = default;
};
class ListScanMaliciousFileByTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles>> scanMaliciousFiles{};
  shared_ptr<long> totalCount{};

  ListScanMaliciousFileByTaskResponseBody() {}

  explicit ListScanMaliciousFileByTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scanMaliciousFiles) {
      vector<boost::any> temp1;
      for(auto item1:*scanMaliciousFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScanMaliciousFiles"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScanMaliciousFiles") != m.end() && !m["ScanMaliciousFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["ScanMaliciousFiles"].type()) {
        vector<ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScanMaliciousFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scanMaliciousFiles = make_shared<vector<ListScanMaliciousFileByTaskResponseBodyScanMaliciousFiles>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListScanMaliciousFileByTaskResponseBody() = default;
};
class ListScanMaliciousFileByTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListScanMaliciousFileByTaskResponseBody> body{};

  ListScanMaliciousFileByTaskResponse() {}

  explicit ListScanMaliciousFileByTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListScanMaliciousFileByTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListScanMaliciousFileByTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListScanMaliciousFileByTaskResponse() = default;
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
class ResetLoginPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> password{};

  ResetLoginPasswordRequest() {}

  explicit ResetLoginPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
  }


  virtual ~ResetLoginPasswordRequest() = default;
};
class ResetLoginPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  ResetLoginPasswordResponseBody() {}

  explicit ResetLoginPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetLoginPasswordResponseBody() = default;
};
class ResetLoginPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetLoginPasswordResponseBody> body{};

  ResetLoginPasswordResponse() {}

  explicit ResetLoginPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetLoginPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetLoginPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ResetLoginPasswordResponse() = default;
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
class UpdateArtifactLifecycleRuleRequest : public Darabonba::Model {
public:
  shared_ptr<bool> auto_{};
  shared_ptr<bool> enableDeleteTag{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> repoName{};
  shared_ptr<long> retentionTagCount{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<string> scope{};
  shared_ptr<string> tagRegexp{};

  UpdateArtifactLifecycleRuleRequest() {}

  explicit UpdateArtifactLifecycleRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auto_) {
      res["Auto"] = boost::any(*auto_);
    }
    if (enableDeleteTag) {
      res["EnableDeleteTag"] = boost::any(*enableDeleteTag);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (retentionTagCount) {
      res["RetentionTagCount"] = boost::any(*retentionTagCount);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (tagRegexp) {
      res["TagRegexp"] = boost::any(*tagRegexp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Auto") != m.end() && !m["Auto"].empty()) {
      auto_ = make_shared<bool>(boost::any_cast<bool>(m["Auto"]));
    }
    if (m.find("EnableDeleteTag") != m.end() && !m["EnableDeleteTag"].empty()) {
      enableDeleteTag = make_shared<bool>(boost::any_cast<bool>(m["EnableDeleteTag"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RetentionTagCount") != m.end() && !m["RetentionTagCount"].empty()) {
      retentionTagCount = make_shared<long>(boost::any_cast<long>(m["RetentionTagCount"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("TagRegexp") != m.end() && !m["TagRegexp"].empty()) {
      tagRegexp = make_shared<string>(boost::any_cast<string>(m["TagRegexp"]));
    }
  }


  virtual ~UpdateArtifactLifecycleRuleRequest() = default;
};
class UpdateArtifactLifecycleRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateArtifactLifecycleRuleResponseBody() {}

  explicit UpdateArtifactLifecycleRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateArtifactLifecycleRuleResponseBody() = default;
};
class UpdateArtifactLifecycleRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateArtifactLifecycleRuleResponseBody> body{};

  UpdateArtifactLifecycleRuleResponse() {}

  explicit UpdateArtifactLifecycleRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateArtifactLifecycleRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateArtifactLifecycleRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateArtifactLifecycleRuleResponse() = default;
};
class UpdateArtifactSubscriptionRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> accelerate{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};
  shared_ptr<string> override{};
  shared_ptr<vector<string>> platform{};
  shared_ptr<string> repoName{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> sourceNamespaceName{};
  shared_ptr<string> sourceProvider{};
  shared_ptr<string> sourceRepoName{};
  shared_ptr<long> tagCount{};
  shared_ptr<string> tagRegexp{};

  UpdateArtifactSubscriptionRuleRequest() {}

  explicit UpdateArtifactSubscriptionRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accelerate) {
      res["Accelerate"] = boost::any(*accelerate);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    if (override) {
      res["Override"] = boost::any(*override);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (sourceNamespaceName) {
      res["SourceNamespaceName"] = boost::any(*sourceNamespaceName);
    }
    if (sourceProvider) {
      res["SourceProvider"] = boost::any(*sourceProvider);
    }
    if (sourceRepoName) {
      res["SourceRepoName"] = boost::any(*sourceRepoName);
    }
    if (tagCount) {
      res["TagCount"] = boost::any(*tagCount);
    }
    if (tagRegexp) {
      res["TagRegexp"] = boost::any(*tagRegexp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accelerate") != m.end() && !m["Accelerate"].empty()) {
      accelerate = make_shared<string>(boost::any_cast<string>(m["Accelerate"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
    if (m.find("Override") != m.end() && !m["Override"].empty()) {
      override = make_shared<string>(boost::any_cast<string>(m["Override"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Platform"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Platform"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      platform = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("SourceNamespaceName") != m.end() && !m["SourceNamespaceName"].empty()) {
      sourceNamespaceName = make_shared<string>(boost::any_cast<string>(m["SourceNamespaceName"]));
    }
    if (m.find("SourceProvider") != m.end() && !m["SourceProvider"].empty()) {
      sourceProvider = make_shared<string>(boost::any_cast<string>(m["SourceProvider"]));
    }
    if (m.find("SourceRepoName") != m.end() && !m["SourceRepoName"].empty()) {
      sourceRepoName = make_shared<string>(boost::any_cast<string>(m["SourceRepoName"]));
    }
    if (m.find("TagCount") != m.end() && !m["TagCount"].empty()) {
      tagCount = make_shared<long>(boost::any_cast<long>(m["TagCount"]));
    }
    if (m.find("TagRegexp") != m.end() && !m["TagRegexp"].empty()) {
      tagRegexp = make_shared<string>(boost::any_cast<string>(m["TagRegexp"]));
    }
  }


  virtual ~UpdateArtifactSubscriptionRuleRequest() = default;
};
class UpdateArtifactSubscriptionRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateArtifactSubscriptionRuleResponseBody() {}

  explicit UpdateArtifactSubscriptionRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateArtifactSubscriptionRuleResponseBody() = default;
};
class UpdateArtifactSubscriptionRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateArtifactSubscriptionRuleResponseBody> body{};

  UpdateArtifactSubscriptionRuleResponse() {}

  explicit UpdateArtifactSubscriptionRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateArtifactSubscriptionRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateArtifactSubscriptionRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateArtifactSubscriptionRuleResponse() = default;
};
class UpdateChainRequest : public Darabonba::Model {
public:
  shared_ptr<string> chainConfig{};
  shared_ptr<string> chainId{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> scopeExclude{};

  UpdateChainRequest() {}

  explicit UpdateChainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chainConfig) {
      res["ChainConfig"] = boost::any(*chainConfig);
    }
    if (chainId) {
      res["ChainId"] = boost::any(*chainId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (scopeExclude) {
      res["ScopeExclude"] = boost::any(*scopeExclude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChainConfig") != m.end() && !m["ChainConfig"].empty()) {
      chainConfig = make_shared<string>(boost::any_cast<string>(m["ChainConfig"]));
    }
    if (m.find("ChainId") != m.end() && !m["ChainId"].empty()) {
      chainId = make_shared<string>(boost::any_cast<string>(m["ChainId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ScopeExclude") != m.end() && !m["ScopeExclude"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScopeExclude"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScopeExclude"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scopeExclude = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateChainRequest() = default;
};
class UpdateChainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateChainResponseBody() {}

  explicit UpdateChainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateChainResponseBody() = default;
};
class UpdateChainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateChainResponseBody> body{};

  UpdateChainResponse() {}

  explicit UpdateChainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateChainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateChainResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateChainResponse() = default;
};
class UpdateChartNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateRepo{};
  shared_ptr<string> defaultRepoType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};

  UpdateChartNamespaceRequest() {}

  explicit UpdateChartNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateRepo) {
      res["AutoCreateRepo"] = boost::any(*autoCreateRepo);
    }
    if (defaultRepoType) {
      res["DefaultRepoType"] = boost::any(*defaultRepoType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreateRepo") != m.end() && !m["AutoCreateRepo"].empty()) {
      autoCreateRepo = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateRepo"]));
    }
    if (m.find("DefaultRepoType") != m.end() && !m["DefaultRepoType"].empty()) {
      defaultRepoType = make_shared<string>(boost::any_cast<string>(m["DefaultRepoType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~UpdateChartNamespaceRequest() = default;
};
class UpdateChartNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateChartNamespaceResponseBody() {}

  explicit UpdateChartNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateChartNamespaceResponseBody() = default;
};
class UpdateChartNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateChartNamespaceResponseBody> body{};

  UpdateChartNamespaceResponse() {}

  explicit UpdateChartNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateChartNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateChartNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateChartNamespaceResponse() = default;
};
class UpdateChartRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> repoType{};
  shared_ptr<string> summary{};

  UpdateChartRepositoryRequest() {}

  explicit UpdateChartRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
  }


  virtual ~UpdateChartRepositoryRequest() = default;
};
class UpdateChartRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateChartRepositoryResponseBody() {}

  explicit UpdateChartRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateChartRepositoryResponseBody() = default;
};
class UpdateChartRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateChartRepositoryResponseBody> body{};

  UpdateChartRepositoryResponse() {}

  explicit UpdateChartRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateChartRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateChartRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateChartRepositoryResponse() = default;
};
class UpdateEventCenterRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventChannel{};
  shared_ptr<string> eventConfig{};
  shared_ptr<string> eventScope{};
  shared_ptr<string> eventType{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> namespaces{};
  shared_ptr<vector<string>> repoNames{};
  shared_ptr<string> repoTagFilterPattern{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};

  UpdateEventCenterRuleRequest() {}

  explicit UpdateEventCenterRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventChannel) {
      res["EventChannel"] = boost::any(*eventChannel);
    }
    if (eventConfig) {
      res["EventConfig"] = boost::any(*eventConfig);
    }
    if (eventScope) {
      res["EventScope"] = boost::any(*eventScope);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaces) {
      res["Namespaces"] = boost::any(*namespaces);
    }
    if (repoNames) {
      res["RepoNames"] = boost::any(*repoNames);
    }
    if (repoTagFilterPattern) {
      res["RepoTagFilterPattern"] = boost::any(*repoTagFilterPattern);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventChannel") != m.end() && !m["EventChannel"].empty()) {
      eventChannel = make_shared<string>(boost::any_cast<string>(m["EventChannel"]));
    }
    if (m.find("EventConfig") != m.end() && !m["EventConfig"].empty()) {
      eventConfig = make_shared<string>(boost::any_cast<string>(m["EventConfig"]));
    }
    if (m.find("EventScope") != m.end() && !m["EventScope"].empty()) {
      eventScope = make_shared<string>(boost::any_cast<string>(m["EventScope"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Namespaces"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Namespaces"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      namespaces = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RepoNames") != m.end() && !m["RepoNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepoNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepoNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repoNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RepoTagFilterPattern") != m.end() && !m["RepoTagFilterPattern"].empty()) {
      repoTagFilterPattern = make_shared<string>(boost::any_cast<string>(m["RepoTagFilterPattern"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~UpdateEventCenterRuleRequest() = default;
};
class UpdateEventCenterRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventChannel{};
  shared_ptr<string> eventConfig{};
  shared_ptr<string> eventScope{};
  shared_ptr<string> eventType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespacesShrink{};
  shared_ptr<string> repoNamesShrink{};
  shared_ptr<string> repoTagFilterPattern{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};

  UpdateEventCenterRuleShrinkRequest() {}

  explicit UpdateEventCenterRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventChannel) {
      res["EventChannel"] = boost::any(*eventChannel);
    }
    if (eventConfig) {
      res["EventConfig"] = boost::any(*eventConfig);
    }
    if (eventScope) {
      res["EventScope"] = boost::any(*eventScope);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespacesShrink) {
      res["Namespaces"] = boost::any(*namespacesShrink);
    }
    if (repoNamesShrink) {
      res["RepoNames"] = boost::any(*repoNamesShrink);
    }
    if (repoTagFilterPattern) {
      res["RepoTagFilterPattern"] = boost::any(*repoTagFilterPattern);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventChannel") != m.end() && !m["EventChannel"].empty()) {
      eventChannel = make_shared<string>(boost::any_cast<string>(m["EventChannel"]));
    }
    if (m.find("EventConfig") != m.end() && !m["EventConfig"].empty()) {
      eventConfig = make_shared<string>(boost::any_cast<string>(m["EventConfig"]));
    }
    if (m.find("EventScope") != m.end() && !m["EventScope"].empty()) {
      eventScope = make_shared<string>(boost::any_cast<string>(m["EventScope"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      namespacesShrink = make_shared<string>(boost::any_cast<string>(m["Namespaces"]));
    }
    if (m.find("RepoNames") != m.end() && !m["RepoNames"].empty()) {
      repoNamesShrink = make_shared<string>(boost::any_cast<string>(m["RepoNames"]));
    }
    if (m.find("RepoTagFilterPattern") != m.end() && !m["RepoTagFilterPattern"].empty()) {
      repoTagFilterPattern = make_shared<string>(boost::any_cast<string>(m["RepoTagFilterPattern"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~UpdateEventCenterRuleShrinkRequest() = default;
};
class UpdateEventCenterRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> requestId{};
  shared_ptr<string> ruleId{};

  UpdateEventCenterRuleResponseBody() {}

  explicit UpdateEventCenterRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~UpdateEventCenterRuleResponseBody() = default;
};
class UpdateEventCenterRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEventCenterRuleResponseBody> body{};

  UpdateEventCenterRuleResponse() {}

  explicit UpdateEventCenterRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEventCenterRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEventCenterRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEventCenterRuleResponse() = default;
};
class UpdateInstanceEndpointStatusRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> endpointType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> moduleName{};

  UpdateInstanceEndpointStatusRequest() {}

  explicit UpdateInstanceEndpointStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~UpdateInstanceEndpointStatusRequest() = default;
};
class UpdateInstanceEndpointStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateInstanceEndpointStatusResponseBody() {}

  explicit UpdateInstanceEndpointStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateInstanceEndpointStatusResponseBody() = default;
};
class UpdateInstanceEndpointStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceEndpointStatusResponseBody> body{};

  UpdateInstanceEndpointStatusResponse() {}

  explicit UpdateInstanceEndpointStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceEndpointStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceEndpointStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceEndpointStatusResponse() = default;
};
class UpdateNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateRepo{};
  shared_ptr<RepoConfiguration> defaultRepoConfiguration{};
  shared_ptr<string> defaultRepoType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};

  UpdateNamespaceRequest() {}

  explicit UpdateNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateRepo) {
      res["AutoCreateRepo"] = boost::any(*autoCreateRepo);
    }
    if (defaultRepoConfiguration) {
      res["DefaultRepoConfiguration"] = defaultRepoConfiguration ? boost::any(defaultRepoConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultRepoType) {
      res["DefaultRepoType"] = boost::any(*defaultRepoType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreateRepo") != m.end() && !m["AutoCreateRepo"].empty()) {
      autoCreateRepo = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateRepo"]));
    }
    if (m.find("DefaultRepoConfiguration") != m.end() && !m["DefaultRepoConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["DefaultRepoConfiguration"].type()) {
        RepoConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DefaultRepoConfiguration"]));
        defaultRepoConfiguration = make_shared<RepoConfiguration>(model1);
      }
    }
    if (m.find("DefaultRepoType") != m.end() && !m["DefaultRepoType"].empty()) {
      defaultRepoType = make_shared<string>(boost::any_cast<string>(m["DefaultRepoType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~UpdateNamespaceRequest() = default;
};
class UpdateNamespaceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateRepo{};
  shared_ptr<string> defaultRepoConfigurationShrink{};
  shared_ptr<string> defaultRepoType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceName{};

  UpdateNamespaceShrinkRequest() {}

  explicit UpdateNamespaceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateRepo) {
      res["AutoCreateRepo"] = boost::any(*autoCreateRepo);
    }
    if (defaultRepoConfigurationShrink) {
      res["DefaultRepoConfiguration"] = boost::any(*defaultRepoConfigurationShrink);
    }
    if (defaultRepoType) {
      res["DefaultRepoType"] = boost::any(*defaultRepoType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceName) {
      res["NamespaceName"] = boost::any(*namespaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreateRepo") != m.end() && !m["AutoCreateRepo"].empty()) {
      autoCreateRepo = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateRepo"]));
    }
    if (m.find("DefaultRepoConfiguration") != m.end() && !m["DefaultRepoConfiguration"].empty()) {
      defaultRepoConfigurationShrink = make_shared<string>(boost::any_cast<string>(m["DefaultRepoConfiguration"]));
    }
    if (m.find("DefaultRepoType") != m.end() && !m["DefaultRepoType"].empty()) {
      defaultRepoType = make_shared<string>(boost::any_cast<string>(m["DefaultRepoType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceName") != m.end() && !m["NamespaceName"].empty()) {
      namespaceName = make_shared<string>(boost::any_cast<string>(m["NamespaceName"]));
    }
  }


  virtual ~UpdateNamespaceShrinkRequest() = default;
};
class UpdateNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateNamespaceResponseBody() {}

  explicit UpdateNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateNamespaceResponseBody() = default;
};
class UpdateNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateNamespaceResponseBody> body{};

  UpdateNamespaceResponse() {}

  explicit UpdateNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNamespaceResponse() = default;
};
class UpdateRepoBuildRuleRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> buildArgs{};
  shared_ptr<string> buildRuleId{};
  shared_ptr<string> dockerfileLocation{};
  shared_ptr<string> dockerfileName{};
  shared_ptr<string> imageTag{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> platforms{};
  shared_ptr<string> pushName{};
  shared_ptr<string> pushType{};
  shared_ptr<string> repoId{};

  UpdateRepoBuildRuleRequest() {}

  explicit UpdateRepoBuildRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildArgs) {
      res["BuildArgs"] = boost::any(*buildArgs);
    }
    if (buildRuleId) {
      res["BuildRuleId"] = boost::any(*buildRuleId);
    }
    if (dockerfileLocation) {
      res["DockerfileLocation"] = boost::any(*dockerfileLocation);
    }
    if (dockerfileName) {
      res["DockerfileName"] = boost::any(*dockerfileName);
    }
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (platforms) {
      res["Platforms"] = boost::any(*platforms);
    }
    if (pushName) {
      res["PushName"] = boost::any(*pushName);
    }
    if (pushType) {
      res["PushType"] = boost::any(*pushType);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildArgs") != m.end() && !m["BuildArgs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BuildArgs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BuildArgs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      buildArgs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BuildRuleId") != m.end() && !m["BuildRuleId"].empty()) {
      buildRuleId = make_shared<string>(boost::any_cast<string>(m["BuildRuleId"]));
    }
    if (m.find("DockerfileLocation") != m.end() && !m["DockerfileLocation"].empty()) {
      dockerfileLocation = make_shared<string>(boost::any_cast<string>(m["DockerfileLocation"]));
    }
    if (m.find("DockerfileName") != m.end() && !m["DockerfileName"].empty()) {
      dockerfileName = make_shared<string>(boost::any_cast<string>(m["DockerfileName"]));
    }
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Platforms") != m.end() && !m["Platforms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Platforms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Platforms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      platforms = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PushName") != m.end() && !m["PushName"].empty()) {
      pushName = make_shared<string>(boost::any_cast<string>(m["PushName"]));
    }
    if (m.find("PushType") != m.end() && !m["PushType"].empty()) {
      pushType = make_shared<string>(boost::any_cast<string>(m["PushType"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~UpdateRepoBuildRuleRequest() = default;
};
class UpdateRepoBuildRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buildRuleId{};
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateRepoBuildRuleResponseBody() {}

  explicit UpdateRepoBuildRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildRuleId) {
      res["BuildRuleId"] = boost::any(*buildRuleId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildRuleId") != m.end() && !m["BuildRuleId"].empty()) {
      buildRuleId = make_shared<string>(boost::any_cast<string>(m["BuildRuleId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateRepoBuildRuleResponseBody() = default;
};
class UpdateRepoBuildRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRepoBuildRuleResponseBody> body{};

  UpdateRepoBuildRuleResponse() {}

  explicit UpdateRepoBuildRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRepoBuildRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRepoBuildRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRepoBuildRuleResponse() = default;
};
class UpdateRepoSourceCodeRepoRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoBuild{};
  shared_ptr<string> codeRepoId{};
  shared_ptr<string> codeRepoName{};
  shared_ptr<string> codeRepoNamespaceName{};
  shared_ptr<string> codeRepoType{};
  shared_ptr<string> disableCacheBuild{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> overseaBuild{};
  shared_ptr<string> repoId{};

  UpdateRepoSourceCodeRepoRequest() {}

  explicit UpdateRepoSourceCodeRepoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (codeRepoId) {
      res["CodeRepoId"] = boost::any(*codeRepoId);
    }
    if (codeRepoName) {
      res["CodeRepoName"] = boost::any(*codeRepoName);
    }
    if (codeRepoNamespaceName) {
      res["CodeRepoNamespaceName"] = boost::any(*codeRepoNamespaceName);
    }
    if (codeRepoType) {
      res["CodeRepoType"] = boost::any(*codeRepoType);
    }
    if (disableCacheBuild) {
      res["DisableCacheBuild"] = boost::any(*disableCacheBuild);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (overseaBuild) {
      res["OverseaBuild"] = boost::any(*overseaBuild);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<string>(boost::any_cast<string>(m["AutoBuild"]));
    }
    if (m.find("CodeRepoId") != m.end() && !m["CodeRepoId"].empty()) {
      codeRepoId = make_shared<string>(boost::any_cast<string>(m["CodeRepoId"]));
    }
    if (m.find("CodeRepoName") != m.end() && !m["CodeRepoName"].empty()) {
      codeRepoName = make_shared<string>(boost::any_cast<string>(m["CodeRepoName"]));
    }
    if (m.find("CodeRepoNamespaceName") != m.end() && !m["CodeRepoNamespaceName"].empty()) {
      codeRepoNamespaceName = make_shared<string>(boost::any_cast<string>(m["CodeRepoNamespaceName"]));
    }
    if (m.find("CodeRepoType") != m.end() && !m["CodeRepoType"].empty()) {
      codeRepoType = make_shared<string>(boost::any_cast<string>(m["CodeRepoType"]));
    }
    if (m.find("DisableCacheBuild") != m.end() && !m["DisableCacheBuild"].empty()) {
      disableCacheBuild = make_shared<string>(boost::any_cast<string>(m["DisableCacheBuild"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OverseaBuild") != m.end() && !m["OverseaBuild"].empty()) {
      overseaBuild = make_shared<string>(boost::any_cast<string>(m["OverseaBuild"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~UpdateRepoSourceCodeRepoRequest() = default;
};
class UpdateRepoSourceCodeRepoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateRepoSourceCodeRepoResponseBody() {}

  explicit UpdateRepoSourceCodeRepoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateRepoSourceCodeRepoResponseBody() = default;
};
class UpdateRepoSourceCodeRepoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRepoSourceCodeRepoResponseBody> body{};

  UpdateRepoSourceCodeRepoResponse() {}

  explicit UpdateRepoSourceCodeRepoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRepoSourceCodeRepoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRepoSourceCodeRepoResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRepoSourceCodeRepoResponse() = default;
};
class UpdateRepoTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> triggerId{};
  shared_ptr<string> triggerName{};
  shared_ptr<string> triggerTag{};
  shared_ptr<string> triggerType{};
  shared_ptr<string> triggerUrl{};

  UpdateRepoTriggerRequest() {}

  explicit UpdateRepoTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (triggerId) {
      res["TriggerId"] = boost::any(*triggerId);
    }
    if (triggerName) {
      res["TriggerName"] = boost::any(*triggerName);
    }
    if (triggerTag) {
      res["TriggerTag"] = boost::any(*triggerTag);
    }
    if (triggerType) {
      res["TriggerType"] = boost::any(*triggerType);
    }
    if (triggerUrl) {
      res["TriggerUrl"] = boost::any(*triggerUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("TriggerId") != m.end() && !m["TriggerId"].empty()) {
      triggerId = make_shared<string>(boost::any_cast<string>(m["TriggerId"]));
    }
    if (m.find("TriggerName") != m.end() && !m["TriggerName"].empty()) {
      triggerName = make_shared<string>(boost::any_cast<string>(m["TriggerName"]));
    }
    if (m.find("TriggerTag") != m.end() && !m["TriggerTag"].empty()) {
      triggerTag = make_shared<string>(boost::any_cast<string>(m["TriggerTag"]));
    }
    if (m.find("TriggerType") != m.end() && !m["TriggerType"].empty()) {
      triggerType = make_shared<string>(boost::any_cast<string>(m["TriggerType"]));
    }
    if (m.find("TriggerUrl") != m.end() && !m["TriggerUrl"].empty()) {
      triggerUrl = make_shared<string>(boost::any_cast<string>(m["TriggerUrl"]));
    }
  }


  virtual ~UpdateRepoTriggerRequest() = default;
};
class UpdateRepoTriggerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateRepoTriggerResponseBody() {}

  explicit UpdateRepoTriggerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateRepoTriggerResponseBody() = default;
};
class UpdateRepoTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRepoTriggerResponseBody> body{};

  UpdateRepoTriggerResponse() {}

  explicit UpdateRepoTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRepoTriggerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRepoTriggerResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRepoTriggerResponse() = default;
};
class UpdateRepositoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespaceName{};
  shared_ptr<string> repoType{};
  shared_ptr<string> summary{};
  shared_ptr<bool> tagImmutability{};

  UpdateRepositoryRequest() {}

  explicit UpdateRepositoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespaceName) {
      res["RepoNamespaceName"] = boost::any(*repoNamespaceName);
    }
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (tagImmutability) {
      res["TagImmutability"] = boost::any(*tagImmutability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespaceName") != m.end() && !m["RepoNamespaceName"].empty()) {
      repoNamespaceName = make_shared<string>(boost::any_cast<string>(m["RepoNamespaceName"]));
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("TagImmutability") != m.end() && !m["TagImmutability"].empty()) {
      tagImmutability = make_shared<bool>(boost::any_cast<bool>(m["TagImmutability"]));
    }
  }


  virtual ~UpdateRepositoryRequest() = default;
};
class UpdateRepositoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> requestId{};

  UpdateRepositoryResponseBody() {}

  explicit UpdateRepositoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
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
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateRepositoryResponseBody() = default;
};
class UpdateRepositoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRepositoryResponseBody> body{};

  UpdateRepositoryResponse() {}

  explicit UpdateRepositoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRepositoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRepositoryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRepositoryResponse() = default;
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
  CancelArtifactBuildTaskResponse cancelArtifactBuildTaskWithOptions(shared_ptr<CancelArtifactBuildTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelArtifactBuildTaskResponse cancelArtifactBuildTask(shared_ptr<CancelArtifactBuildTaskRequest> request);
  CancelRepoBuildRecordResponse cancelRepoBuildRecordWithOptions(shared_ptr<CancelRepoBuildRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelRepoBuildRecordResponse cancelRepoBuildRecord(shared_ptr<CancelRepoBuildRecordRequest> request);
  CancelRepoSyncTaskResponse cancelRepoSyncTaskWithOptions(shared_ptr<CancelRepoSyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelRepoSyncTaskResponse cancelRepoSyncTask(shared_ptr<CancelRepoSyncTaskRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CreateArtifactBuildRuleResponse createArtifactBuildRuleWithOptions(shared_ptr<CreateArtifactBuildRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateArtifactBuildRuleResponse createArtifactBuildRule(shared_ptr<CreateArtifactBuildRuleRequest> request);
  CreateArtifactLifecycleRuleResponse createArtifactLifecycleRuleWithOptions(shared_ptr<CreateArtifactLifecycleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateArtifactLifecycleRuleResponse createArtifactLifecycleRule(shared_ptr<CreateArtifactLifecycleRuleRequest> request);
  CreateArtifactSubscriptionRuleResponse createArtifactSubscriptionRuleWithOptions(shared_ptr<CreateArtifactSubscriptionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateArtifactSubscriptionRuleResponse createArtifactSubscriptionRule(shared_ptr<CreateArtifactSubscriptionRuleRequest> request);
  CreateArtifactSubscriptionTaskResponse createArtifactSubscriptionTaskWithOptions(shared_ptr<CreateArtifactSubscriptionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateArtifactSubscriptionTaskResponse createArtifactSubscriptionTask(shared_ptr<CreateArtifactSubscriptionTaskRequest> request);
  CreateBuildRecordByRecordResponse createBuildRecordByRecordWithOptions(shared_ptr<CreateBuildRecordByRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBuildRecordByRecordResponse createBuildRecordByRecord(shared_ptr<CreateBuildRecordByRecordRequest> request);
  CreateBuildRecordByRuleResponse createBuildRecordByRuleWithOptions(shared_ptr<CreateBuildRecordByRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBuildRecordByRuleResponse createBuildRecordByRule(shared_ptr<CreateBuildRecordByRuleRequest> request);
  CreateChainResponse createChainWithOptions(shared_ptr<CreateChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChainResponse createChain(shared_ptr<CreateChainRequest> request);
  CreateChartNamespaceResponse createChartNamespaceWithOptions(shared_ptr<CreateChartNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChartNamespaceResponse createChartNamespace(shared_ptr<CreateChartNamespaceRequest> request);
  CreateChartRepositoryResponse createChartRepositoryWithOptions(shared_ptr<CreateChartRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChartRepositoryResponse createChartRepository(shared_ptr<CreateChartRepositoryRequest> request);
  CreateInstanceEndpointAclPolicyResponse createInstanceEndpointAclPolicyWithOptions(shared_ptr<CreateInstanceEndpointAclPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceEndpointAclPolicyResponse createInstanceEndpointAclPolicy(shared_ptr<CreateInstanceEndpointAclPolicyRequest> request);
  CreateInstanceVpcEndpointLinkedVpcResponse createInstanceVpcEndpointLinkedVpcWithOptions(shared_ptr<CreateInstanceVpcEndpointLinkedVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceVpcEndpointLinkedVpcResponse createInstanceVpcEndpointLinkedVpc(shared_ptr<CreateInstanceVpcEndpointLinkedVpcRequest> request);
  CreateNamespaceResponse createNamespaceWithOptions(shared_ptr<CreateNamespaceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNamespaceResponse createNamespace(shared_ptr<CreateNamespaceRequest> request);
  CreateRepoBuildRuleResponse createRepoBuildRuleWithOptions(shared_ptr<CreateRepoBuildRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepoBuildRuleResponse createRepoBuildRule(shared_ptr<CreateRepoBuildRuleRequest> request);
  CreateRepoSourceCodeRepoResponse createRepoSourceCodeRepoWithOptions(shared_ptr<CreateRepoSourceCodeRepoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepoSourceCodeRepoResponse createRepoSourceCodeRepo(shared_ptr<CreateRepoSourceCodeRepoRequest> request);
  CreateRepoSyncRuleResponse createRepoSyncRuleWithOptions(shared_ptr<CreateRepoSyncRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepoSyncRuleResponse createRepoSyncRule(shared_ptr<CreateRepoSyncRuleRequest> request);
  CreateRepoSyncTaskResponse createRepoSyncTaskWithOptions(shared_ptr<CreateRepoSyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepoSyncTaskResponse createRepoSyncTask(shared_ptr<CreateRepoSyncTaskRequest> request);
  CreateRepoSyncTaskByRuleResponse createRepoSyncTaskByRuleWithOptions(shared_ptr<CreateRepoSyncTaskByRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepoSyncTaskByRuleResponse createRepoSyncTaskByRule(shared_ptr<CreateRepoSyncTaskByRuleRequest> request);
  CreateRepoTagResponse createRepoTagWithOptions(shared_ptr<CreateRepoTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepoTagResponse createRepoTag(shared_ptr<CreateRepoTagRequest> request);
  CreateRepoTagScanTaskResponse createRepoTagScanTaskWithOptions(shared_ptr<CreateRepoTagScanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepoTagScanTaskResponse createRepoTagScanTask(shared_ptr<CreateRepoTagScanTaskRequest> request);
  CreateRepoTriggerResponse createRepoTriggerWithOptions(shared_ptr<CreateRepoTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepoTriggerResponse createRepoTrigger(shared_ptr<CreateRepoTriggerRequest> request);
  CreateRepositoryResponse createRepositoryWithOptions(shared_ptr<CreateRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRepositoryResponse createRepository(shared_ptr<CreateRepositoryRequest> request);
  DeleteArtifactLifecycleRuleResponse deleteArtifactLifecycleRuleWithOptions(shared_ptr<DeleteArtifactLifecycleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteArtifactLifecycleRuleResponse deleteArtifactLifecycleRule(shared_ptr<DeleteArtifactLifecycleRuleRequest> request);
  DeleteArtifactSubscriptionRuleResponse deleteArtifactSubscriptionRuleWithOptions(shared_ptr<DeleteArtifactSubscriptionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteArtifactSubscriptionRuleResponse deleteArtifactSubscriptionRule(shared_ptr<DeleteArtifactSubscriptionRuleRequest> request);
  DeleteChainResponse deleteChainWithOptions(shared_ptr<DeleteChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChainResponse deleteChain(shared_ptr<DeleteChainRequest> request);
  DeleteChartNamespaceResponse deleteChartNamespaceWithOptions(shared_ptr<DeleteChartNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChartNamespaceResponse deleteChartNamespace(shared_ptr<DeleteChartNamespaceRequest> request);
  DeleteChartReleaseResponse deleteChartReleaseWithOptions(shared_ptr<DeleteChartReleaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChartReleaseResponse deleteChartRelease(shared_ptr<DeleteChartReleaseRequest> request);
  DeleteChartRepositoryResponse deleteChartRepositoryWithOptions(shared_ptr<DeleteChartRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChartRepositoryResponse deleteChartRepository(shared_ptr<DeleteChartRepositoryRequest> request);
  DeleteEventCenterRuleResponse deleteEventCenterRuleWithOptions(shared_ptr<DeleteEventCenterRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEventCenterRuleResponse deleteEventCenterRule(shared_ptr<DeleteEventCenterRuleRequest> request);
  DeleteInstanceEndpointAclPolicyResponse deleteInstanceEndpointAclPolicyWithOptions(shared_ptr<DeleteInstanceEndpointAclPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceEndpointAclPolicyResponse deleteInstanceEndpointAclPolicy(shared_ptr<DeleteInstanceEndpointAclPolicyRequest> request);
  DeleteInstanceVpcEndpointLinkedVpcResponse deleteInstanceVpcEndpointLinkedVpcWithOptions(shared_ptr<DeleteInstanceVpcEndpointLinkedVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceVpcEndpointLinkedVpcResponse deleteInstanceVpcEndpointLinkedVpc(shared_ptr<DeleteInstanceVpcEndpointLinkedVpcRequest> request);
  DeleteNamespaceResponse deleteNamespaceWithOptions(shared_ptr<DeleteNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNamespaceResponse deleteNamespace(shared_ptr<DeleteNamespaceRequest> request);
  DeleteRepoBuildRuleResponse deleteRepoBuildRuleWithOptions(shared_ptr<DeleteRepoBuildRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepoBuildRuleResponse deleteRepoBuildRule(shared_ptr<DeleteRepoBuildRuleRequest> request);
  DeleteRepoSyncRuleResponse deleteRepoSyncRuleWithOptions(shared_ptr<DeleteRepoSyncRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepoSyncRuleResponse deleteRepoSyncRule(shared_ptr<DeleteRepoSyncRuleRequest> request);
  DeleteRepoTagResponse deleteRepoTagWithOptions(shared_ptr<DeleteRepoTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepoTagResponse deleteRepoTag(shared_ptr<DeleteRepoTagRequest> request);
  DeleteRepoTriggerResponse deleteRepoTriggerWithOptions(shared_ptr<DeleteRepoTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepoTriggerResponse deleteRepoTrigger(shared_ptr<DeleteRepoTriggerRequest> request);
  DeleteRepositoryResponse deleteRepositoryWithOptions(shared_ptr<DeleteRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRepositoryResponse deleteRepository(shared_ptr<DeleteRepositoryRequest> request);
  GetArtifactBuildRuleResponse getArtifactBuildRuleWithOptions(shared_ptr<GetArtifactBuildRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetArtifactBuildRuleResponse getArtifactBuildRule(shared_ptr<GetArtifactBuildRuleRequest> request);
  GetArtifactBuildTaskResponse getArtifactBuildTaskWithOptions(shared_ptr<GetArtifactBuildTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetArtifactBuildTaskResponse getArtifactBuildTask(shared_ptr<GetArtifactBuildTaskRequest> request);
  GetArtifactLifecycleRuleResponse getArtifactLifecycleRuleWithOptions(shared_ptr<GetArtifactLifecycleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetArtifactLifecycleRuleResponse getArtifactLifecycleRule(shared_ptr<GetArtifactLifecycleRuleRequest> request);
  GetArtifactSubscriptionRuleResponse getArtifactSubscriptionRuleWithOptions(shared_ptr<GetArtifactSubscriptionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetArtifactSubscriptionRuleResponse getArtifactSubscriptionRule(shared_ptr<GetArtifactSubscriptionRuleRequest> request);
  GetArtifactSubscriptionTaskResponse getArtifactSubscriptionTaskWithOptions(shared_ptr<GetArtifactSubscriptionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetArtifactSubscriptionTaskResponse getArtifactSubscriptionTask(shared_ptr<GetArtifactSubscriptionTaskRequest> request);
  GetArtifactSubscriptionTaskResultResponse getArtifactSubscriptionTaskResultWithOptions(shared_ptr<GetArtifactSubscriptionTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetArtifactSubscriptionTaskResultResponse getArtifactSubscriptionTaskResult(shared_ptr<GetArtifactSubscriptionTaskResultRequest> request);
  GetAuthorizationTokenResponse getAuthorizationTokenWithOptions(shared_ptr<GetAuthorizationTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthorizationTokenResponse getAuthorizationToken(shared_ptr<GetAuthorizationTokenRequest> request);
  GetChainResponse getChainWithOptions(shared_ptr<GetChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChainResponse getChain(shared_ptr<GetChainRequest> request);
  GetChartNamespaceResponse getChartNamespaceWithOptions(shared_ptr<GetChartNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChartNamespaceResponse getChartNamespace(shared_ptr<GetChartNamespaceRequest> request);
  GetChartRepositoryResponse getChartRepositoryWithOptions(shared_ptr<GetChartRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChartRepositoryResponse getChartRepository(shared_ptr<GetChartRepositoryRequest> request);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<GetInstanceRequest> request);
  GetInstanceCountResponse getInstanceCountWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceCountResponse getInstanceCount();
  GetInstanceEndpointResponse getInstanceEndpointWithOptions(shared_ptr<GetInstanceEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceEndpointResponse getInstanceEndpoint(shared_ptr<GetInstanceEndpointRequest> request);
  GetInstanceUsageResponse getInstanceUsageWithOptions(shared_ptr<GetInstanceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceUsageResponse getInstanceUsage(shared_ptr<GetInstanceUsageRequest> request);
  GetInstanceVpcEndpointResponse getInstanceVpcEndpointWithOptions(shared_ptr<GetInstanceVpcEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceVpcEndpointResponse getInstanceVpcEndpoint(shared_ptr<GetInstanceVpcEndpointRequest> request);
  GetNamespaceResponse getNamespaceWithOptions(shared_ptr<GetNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNamespaceResponse getNamespace(shared_ptr<GetNamespaceRequest> request);
  GetRepoBuildRecordResponse getRepoBuildRecordWithOptions(shared_ptr<GetRepoBuildRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoBuildRecordResponse getRepoBuildRecord(shared_ptr<GetRepoBuildRecordRequest> request);
  GetRepoBuildRecordStatusResponse getRepoBuildRecordStatusWithOptions(shared_ptr<GetRepoBuildRecordStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoBuildRecordStatusResponse getRepoBuildRecordStatus(shared_ptr<GetRepoBuildRecordStatusRequest> request);
  GetRepoSourceCodeRepoResponse getRepoSourceCodeRepoWithOptions(shared_ptr<GetRepoSourceCodeRepoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoSourceCodeRepoResponse getRepoSourceCodeRepo(shared_ptr<GetRepoSourceCodeRepoRequest> request);
  GetRepoSyncTaskResponse getRepoSyncTaskWithOptions(shared_ptr<GetRepoSyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoSyncTaskResponse getRepoSyncTask(shared_ptr<GetRepoSyncTaskRequest> request);
  GetRepoTagResponse getRepoTagWithOptions(shared_ptr<GetRepoTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoTagResponse getRepoTag(shared_ptr<GetRepoTagRequest> request);
  GetRepoTagScanStatusResponse getRepoTagScanStatusWithOptions(shared_ptr<GetRepoTagScanStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoTagScanStatusResponse getRepoTagScanStatus(shared_ptr<GetRepoTagScanStatusRequest> request);
  GetRepoTagScanSummaryResponse getRepoTagScanSummaryWithOptions(shared_ptr<GetRepoTagScanSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepoTagScanSummaryResponse getRepoTagScanSummary(shared_ptr<GetRepoTagScanSummaryRequest> request);
  GetRepositoryResponse getRepositoryWithOptions(shared_ptr<GetRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRepositoryResponse getRepository(shared_ptr<GetRepositoryRequest> request);
  ListArtifactBuildTaskLogResponse listArtifactBuildTaskLogWithOptions(shared_ptr<ListArtifactBuildTaskLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListArtifactBuildTaskLogResponse listArtifactBuildTaskLog(shared_ptr<ListArtifactBuildTaskLogRequest> request);
  ListArtifactLifecycleRuleResponse listArtifactLifecycleRuleWithOptions(shared_ptr<ListArtifactLifecycleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListArtifactLifecycleRuleResponse listArtifactLifecycleRule(shared_ptr<ListArtifactLifecycleRuleRequest> request);
  ListArtifactSubscriptionRuleResponse listArtifactSubscriptionRuleWithOptions(shared_ptr<ListArtifactSubscriptionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListArtifactSubscriptionRuleResponse listArtifactSubscriptionRule(shared_ptr<ListArtifactSubscriptionRuleRequest> request);
  ListArtifactSubscriptionTaskResponse listArtifactSubscriptionTaskWithOptions(shared_ptr<ListArtifactSubscriptionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListArtifactSubscriptionTaskResponse listArtifactSubscriptionTask(shared_ptr<ListArtifactSubscriptionTaskRequest> request);
  ListChainResponse listChainWithOptions(shared_ptr<ListChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChainResponse listChain(shared_ptr<ListChainRequest> request);
  ListChainInstanceResponse listChainInstanceWithOptions(shared_ptr<ListChainInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChainInstanceResponse listChainInstance(shared_ptr<ListChainInstanceRequest> request);
  ListChartNamespaceResponse listChartNamespaceWithOptions(shared_ptr<ListChartNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChartNamespaceResponse listChartNamespace(shared_ptr<ListChartNamespaceRequest> request);
  ListChartReleaseResponse listChartReleaseWithOptions(shared_ptr<ListChartReleaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChartReleaseResponse listChartRelease(shared_ptr<ListChartReleaseRequest> request);
  ListChartRepositoryResponse listChartRepositoryWithOptions(shared_ptr<ListChartRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChartRepositoryResponse listChartRepository(shared_ptr<ListChartRepositoryRequest> request);
  ListEventCenterRecordResponse listEventCenterRecordWithOptions(shared_ptr<ListEventCenterRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEventCenterRecordResponse listEventCenterRecord(shared_ptr<ListEventCenterRecordRequest> request);
  ListEventCenterRuleNameResponse listEventCenterRuleNameWithOptions(shared_ptr<ListEventCenterRuleNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEventCenterRuleNameResponse listEventCenterRuleName(shared_ptr<ListEventCenterRuleNameRequest> request);
  ListInstanceResponse listInstanceWithOptions(shared_ptr<ListInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceResponse listInstance(shared_ptr<ListInstanceRequest> request);
  ListInstanceEndpointResponse listInstanceEndpointWithOptions(shared_ptr<ListInstanceEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceEndpointResponse listInstanceEndpoint(shared_ptr<ListInstanceEndpointRequest> request);
  ListInstanceRegionResponse listInstanceRegionWithOptions(shared_ptr<ListInstanceRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceRegionResponse listInstanceRegion(shared_ptr<ListInstanceRegionRequest> request);
  ListNamespaceResponse listNamespaceWithOptions(shared_ptr<ListNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNamespaceResponse listNamespace(shared_ptr<ListNamespaceRequest> request);
  ListRepoBuildRecordResponse listRepoBuildRecordWithOptions(shared_ptr<ListRepoBuildRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepoBuildRecordResponse listRepoBuildRecord(shared_ptr<ListRepoBuildRecordRequest> request);
  ListRepoBuildRecordLogResponse listRepoBuildRecordLogWithOptions(shared_ptr<ListRepoBuildRecordLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepoBuildRecordLogResponse listRepoBuildRecordLog(shared_ptr<ListRepoBuildRecordLogRequest> request);
  ListRepoBuildRuleResponse listRepoBuildRuleWithOptions(shared_ptr<ListRepoBuildRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepoBuildRuleResponse listRepoBuildRule(shared_ptr<ListRepoBuildRuleRequest> request);
  ListRepoSyncRuleResponse listRepoSyncRuleWithOptions(shared_ptr<ListRepoSyncRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepoSyncRuleResponse listRepoSyncRule(shared_ptr<ListRepoSyncRuleRequest> request);
  ListRepoSyncTaskResponse listRepoSyncTaskWithOptions(shared_ptr<ListRepoSyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepoSyncTaskResponse listRepoSyncTask(shared_ptr<ListRepoSyncTaskRequest> request);
  ListRepoTagResponse listRepoTagWithOptions(shared_ptr<ListRepoTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepoTagResponse listRepoTag(shared_ptr<ListRepoTagRequest> request);
  ListRepoTagScanResultResponse listRepoTagScanResultWithOptions(shared_ptr<ListRepoTagScanResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepoTagScanResultResponse listRepoTagScanResult(shared_ptr<ListRepoTagScanResultRequest> request);
  ListRepoTriggerResponse listRepoTriggerWithOptions(shared_ptr<ListRepoTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepoTriggerResponse listRepoTrigger(shared_ptr<ListRepoTriggerRequest> request);
  ListRepositoryResponse listRepositoryWithOptions(shared_ptr<ListRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoryResponse listRepository(shared_ptr<ListRepositoryRequest> request);
  ListScanBaselineByTaskResponse listScanBaselineByTaskWithOptions(shared_ptr<ListScanBaselineByTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListScanBaselineByTaskResponse listScanBaselineByTask(shared_ptr<ListScanBaselineByTaskRequest> request);
  ListScanMaliciousFileByTaskResponse listScanMaliciousFileByTaskWithOptions(shared_ptr<ListScanMaliciousFileByTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListScanMaliciousFileByTaskResponse listScanMaliciousFileByTask(shared_ptr<ListScanMaliciousFileByTaskRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ResetLoginPasswordResponse resetLoginPasswordWithOptions(shared_ptr<ResetLoginPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetLoginPasswordResponse resetLoginPassword(shared_ptr<ResetLoginPasswordRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateArtifactLifecycleRuleResponse updateArtifactLifecycleRuleWithOptions(shared_ptr<UpdateArtifactLifecycleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateArtifactLifecycleRuleResponse updateArtifactLifecycleRule(shared_ptr<UpdateArtifactLifecycleRuleRequest> request);
  UpdateArtifactSubscriptionRuleResponse updateArtifactSubscriptionRuleWithOptions(shared_ptr<UpdateArtifactSubscriptionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateArtifactSubscriptionRuleResponse updateArtifactSubscriptionRule(shared_ptr<UpdateArtifactSubscriptionRuleRequest> request);
  UpdateChainResponse updateChainWithOptions(shared_ptr<UpdateChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateChainResponse updateChain(shared_ptr<UpdateChainRequest> request);
  UpdateChartNamespaceResponse updateChartNamespaceWithOptions(shared_ptr<UpdateChartNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateChartNamespaceResponse updateChartNamespace(shared_ptr<UpdateChartNamespaceRequest> request);
  UpdateChartRepositoryResponse updateChartRepositoryWithOptions(shared_ptr<UpdateChartRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateChartRepositoryResponse updateChartRepository(shared_ptr<UpdateChartRepositoryRequest> request);
  UpdateEventCenterRuleResponse updateEventCenterRuleWithOptions(shared_ptr<UpdateEventCenterRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEventCenterRuleResponse updateEventCenterRule(shared_ptr<UpdateEventCenterRuleRequest> request);
  UpdateInstanceEndpointStatusResponse updateInstanceEndpointStatusWithOptions(shared_ptr<UpdateInstanceEndpointStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceEndpointStatusResponse updateInstanceEndpointStatus(shared_ptr<UpdateInstanceEndpointStatusRequest> request);
  UpdateNamespaceResponse updateNamespaceWithOptions(shared_ptr<UpdateNamespaceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNamespaceResponse updateNamespace(shared_ptr<UpdateNamespaceRequest> request);
  UpdateRepoBuildRuleResponse updateRepoBuildRuleWithOptions(shared_ptr<UpdateRepoBuildRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRepoBuildRuleResponse updateRepoBuildRule(shared_ptr<UpdateRepoBuildRuleRequest> request);
  UpdateRepoSourceCodeRepoResponse updateRepoSourceCodeRepoWithOptions(shared_ptr<UpdateRepoSourceCodeRepoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRepoSourceCodeRepoResponse updateRepoSourceCodeRepo(shared_ptr<UpdateRepoSourceCodeRepoRequest> request);
  UpdateRepoTriggerResponse updateRepoTriggerWithOptions(shared_ptr<UpdateRepoTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRepoTriggerResponse updateRepoTrigger(shared_ptr<UpdateRepoTriggerRequest> request);
  UpdateRepositoryResponse updateRepositoryWithOptions(shared_ptr<UpdateRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRepositoryResponse updateRepository(shared_ptr<UpdateRepositoryRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cr20181201

#endif
