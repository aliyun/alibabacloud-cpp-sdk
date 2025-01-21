// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER20210521_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER20210521_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ComputeNestSupplier20210521 {
class AddServiceSharedAccountsRequestSharedAccounts : public Darabonba::Model {
public:
  shared_ptr<string> permission{};
  shared_ptr<string> userAliUid{};

  AddServiceSharedAccountsRequestSharedAccounts() {}

  explicit AddServiceSharedAccountsRequestSharedAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    if (userAliUid) {
      res["UserAliUid"] = boost::any(*userAliUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
    if (m.find("UserAliUid") != m.end() && !m["UserAliUid"].empty()) {
      userAliUid = make_shared<string>(boost::any_cast<string>(m["UserAliUid"]));
    }
  }


  virtual ~AddServiceSharedAccountsRequestSharedAccounts() = default;
};
class AddServiceSharedAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<AddServiceSharedAccountsRequestSharedAccounts>> sharedAccounts{};
  shared_ptr<string> type{};

  AddServiceSharedAccountsRequest() {}

  explicit AddServiceSharedAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (sharedAccounts) {
      vector<boost::any> temp1;
      for(auto item1:*sharedAccounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SharedAccounts"] = boost::any(temp1);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("SharedAccounts") != m.end() && !m["SharedAccounts"].empty()) {
      if (typeid(vector<boost::any>) == m["SharedAccounts"].type()) {
        vector<AddServiceSharedAccountsRequestSharedAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SharedAccounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddServiceSharedAccountsRequestSharedAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sharedAccounts = make_shared<vector<AddServiceSharedAccountsRequestSharedAccounts>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AddServiceSharedAccountsRequest() = default;
};
class AddServiceSharedAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddServiceSharedAccountsResponseBody() {}

  explicit AddServiceSharedAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddServiceSharedAccountsResponseBody() = default;
};
class AddServiceSharedAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddServiceSharedAccountsResponseBody> body{};

  AddServiceSharedAccountsResponse() {}

  explicit AddServiceSharedAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddServiceSharedAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddServiceSharedAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~AddServiceSharedAccountsResponse() = default;
};
class ApproveServiceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> comments{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<long> type{};
  shared_ptr<long> userAliUid{};

  ApproveServiceUsageRequest() {}

  explicit ApproveServiceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userAliUid) {
      res["UserAliUid"] = boost::any(*userAliUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("UserAliUid") != m.end() && !m["UserAliUid"].empty()) {
      userAliUid = make_shared<long>(boost::any_cast<long>(m["UserAliUid"]));
    }
  }


  virtual ~ApproveServiceUsageRequest() = default;
};
class ApproveServiceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ApproveServiceUsageResponseBody() {}

  explicit ApproveServiceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ApproveServiceUsageResponseBody() = default;
};
class ApproveServiceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApproveServiceUsageResponseBody> body{};

  ApproveServiceUsageResponse() {}

  explicit ApproveServiceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApproveServiceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApproveServiceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~ApproveServiceUsageResponse() = default;
};
class ContinueDeployServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  ContinueDeployServiceInstanceRequest() {}

  explicit ContinueDeployServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~ContinueDeployServiceInstanceRequest() = default;
};
class ContinueDeployServiceInstanceResponseBodyDryRunResult : public Darabonba::Model {
public:
  shared_ptr<vector<string>> parametersAllowedToBeModified{};
  shared_ptr<vector<string>> parametersConditionallyAllowedToBeModified{};
  shared_ptr<vector<string>> parametersNotAllowedToBeModified{};

  ContinueDeployServiceInstanceResponseBodyDryRunResult() {}

  explicit ContinueDeployServiceInstanceResponseBodyDryRunResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parametersAllowedToBeModified) {
      res["ParametersAllowedToBeModified"] = boost::any(*parametersAllowedToBeModified);
    }
    if (parametersConditionallyAllowedToBeModified) {
      res["ParametersConditionallyAllowedToBeModified"] = boost::any(*parametersConditionallyAllowedToBeModified);
    }
    if (parametersNotAllowedToBeModified) {
      res["ParametersNotAllowedToBeModified"] = boost::any(*parametersNotAllowedToBeModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParametersAllowedToBeModified") != m.end() && !m["ParametersAllowedToBeModified"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParametersAllowedToBeModified"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParametersAllowedToBeModified"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parametersAllowedToBeModified = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ParametersConditionallyAllowedToBeModified") != m.end() && !m["ParametersConditionallyAllowedToBeModified"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParametersConditionallyAllowedToBeModified"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParametersConditionallyAllowedToBeModified"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parametersConditionallyAllowedToBeModified = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ParametersNotAllowedToBeModified") != m.end() && !m["ParametersNotAllowedToBeModified"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParametersNotAllowedToBeModified"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParametersNotAllowedToBeModified"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parametersNotAllowedToBeModified = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ContinueDeployServiceInstanceResponseBodyDryRunResult() = default;
};
class ContinueDeployServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<ContinueDeployServiceInstanceResponseBodyDryRunResult> dryRunResult{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceInstanceId{};

  ContinueDeployServiceInstanceResponseBody() {}

  explicit ContinueDeployServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRunResult) {
      res["DryRunResult"] = dryRunResult ? boost::any(dryRunResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DryRunResult") != m.end() && !m["DryRunResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["DryRunResult"].type()) {
        ContinueDeployServiceInstanceResponseBodyDryRunResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DryRunResult"]));
        dryRunResult = make_shared<ContinueDeployServiceInstanceResponseBodyDryRunResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~ContinueDeployServiceInstanceResponseBody() = default;
};
class ContinueDeployServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ContinueDeployServiceInstanceResponseBody> body{};

  ContinueDeployServiceInstanceResponse() {}

  explicit ContinueDeployServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ContinueDeployServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContinueDeployServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ContinueDeployServiceInstanceResponse() = default;
};
class CreateArtifactRequestArtifactBuildPropertyBuildArgs : public Darabonba::Model {
public:
  shared_ptr<string> argumentName{};
  shared_ptr<string> argumentValue{};

  CreateArtifactRequestArtifactBuildPropertyBuildArgs() {}

  explicit CreateArtifactRequestArtifactBuildPropertyBuildArgs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (argumentName) {
      res["ArgumentName"] = boost::any(*argumentName);
    }
    if (argumentValue) {
      res["ArgumentValue"] = boost::any(*argumentValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArgumentName") != m.end() && !m["ArgumentName"].empty()) {
      argumentName = make_shared<string>(boost::any_cast<string>(m["ArgumentName"]));
    }
    if (m.find("ArgumentValue") != m.end() && !m["ArgumentValue"].empty()) {
      argumentValue = make_shared<string>(boost::any_cast<string>(m["ArgumentValue"]));
    }
  }


  virtual ~CreateArtifactRequestArtifactBuildPropertyBuildArgs() = default;
};
class CreateArtifactRequestArtifactBuildPropertyCodeRepo : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> owner{};
  shared_ptr<string> platform{};
  shared_ptr<string> repoName{};

  CreateArtifactRequestArtifactBuildPropertyCodeRepo() {}

  explicit CreateArtifactRequestArtifactBuildPropertyCodeRepo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["Branch"] = boost::any(*branch);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Branch") != m.end() && !m["Branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["Branch"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
  }


  virtual ~CreateArtifactRequestArtifactBuildPropertyCodeRepo() = default;
};
class CreateArtifactRequestArtifactBuildProperty : public Darabonba::Model {
public:
  shared_ptr<vector<CreateArtifactRequestArtifactBuildPropertyBuildArgs>> buildArgs{};
  shared_ptr<CreateArtifactRequestArtifactBuildPropertyCodeRepo> codeRepo{};
  shared_ptr<string> commandContent{};
  shared_ptr<string> commandType{};
  shared_ptr<string> dockerfilePath{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sourceContainerImage{};
  shared_ptr<string> sourceImageId{};

  CreateArtifactRequestArtifactBuildProperty() {}

  explicit CreateArtifactRequestArtifactBuildProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildArgs) {
      vector<boost::any> temp1;
      for(auto item1:*buildArgs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BuildArgs"] = boost::any(temp1);
    }
    if (codeRepo) {
      res["CodeRepo"] = codeRepo ? boost::any(codeRepo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (commandContent) {
      res["CommandContent"] = boost::any(*commandContent);
    }
    if (commandType) {
      res["CommandType"] = boost::any(*commandType);
    }
    if (dockerfilePath) {
      res["DockerfilePath"] = boost::any(*dockerfilePath);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceContainerImage) {
      res["SourceContainerImage"] = boost::any(*sourceContainerImage);
    }
    if (sourceImageId) {
      res["SourceImageId"] = boost::any(*sourceImageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildArgs") != m.end() && !m["BuildArgs"].empty()) {
      if (typeid(vector<boost::any>) == m["BuildArgs"].type()) {
        vector<CreateArtifactRequestArtifactBuildPropertyBuildArgs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BuildArgs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateArtifactRequestArtifactBuildPropertyBuildArgs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buildArgs = make_shared<vector<CreateArtifactRequestArtifactBuildPropertyBuildArgs>>(expect1);
      }
    }
    if (m.find("CodeRepo") != m.end() && !m["CodeRepo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodeRepo"].type()) {
        CreateArtifactRequestArtifactBuildPropertyCodeRepo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodeRepo"]));
        codeRepo = make_shared<CreateArtifactRequestArtifactBuildPropertyCodeRepo>(model1);
      }
    }
    if (m.find("CommandContent") != m.end() && !m["CommandContent"].empty()) {
      commandContent = make_shared<string>(boost::any_cast<string>(m["CommandContent"]));
    }
    if (m.find("CommandType") != m.end() && !m["CommandType"].empty()) {
      commandType = make_shared<string>(boost::any_cast<string>(m["CommandType"]));
    }
    if (m.find("DockerfilePath") != m.end() && !m["DockerfilePath"].empty()) {
      dockerfilePath = make_shared<string>(boost::any_cast<string>(m["DockerfilePath"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceContainerImage") != m.end() && !m["SourceContainerImage"].empty()) {
      sourceContainerImage = make_shared<string>(boost::any_cast<string>(m["SourceContainerImage"]));
    }
    if (m.find("SourceImageId") != m.end() && !m["SourceImageId"].empty()) {
      sourceImageId = make_shared<string>(boost::any_cast<string>(m["SourceImageId"]));
    }
  }


  virtual ~CreateArtifactRequestArtifactBuildProperty() = default;
};
class CreateArtifactRequestArtifactProperty : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityVersion{};
  shared_ptr<string> imageId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoType{};
  shared_ptr<string> tag{};
  shared_ptr<string> url{};

  CreateArtifactRequestArtifactProperty() {}

  explicit CreateArtifactRequestArtifactProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (commodityVersion) {
      res["CommodityVersion"] = boost::any(*commodityVersion);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CommodityVersion") != m.end() && !m["CommodityVersion"].empty()) {
      commodityVersion = make_shared<string>(boost::any_cast<string>(m["CommodityVersion"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateArtifactRequestArtifactProperty() = default;
};
class CreateArtifactRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateArtifactRequestTag() {}

  explicit CreateArtifactRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateArtifactRequestTag() = default;
};
class CreateArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<CreateArtifactRequestArtifactBuildProperty> artifactBuildProperty{};
  shared_ptr<string> artifactBuildType{};
  shared_ptr<string> artifactId{};
  shared_ptr<CreateArtifactRequestArtifactProperty> artifactProperty{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> supportRegionIds{};
  shared_ptr<vector<CreateArtifactRequestTag>> tag{};
  shared_ptr<string> versionName{};

  CreateArtifactRequest() {}

  explicit CreateArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactBuildProperty) {
      res["ArtifactBuildProperty"] = artifactBuildProperty ? boost::any(artifactBuildProperty->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (artifactBuildType) {
      res["ArtifactBuildType"] = boost::any(*artifactBuildType);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = artifactProperty ? boost::any(artifactProperty->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactBuildProperty") != m.end() && !m["ArtifactBuildProperty"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtifactBuildProperty"].type()) {
        CreateArtifactRequestArtifactBuildProperty model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtifactBuildProperty"]));
        artifactBuildProperty = make_shared<CreateArtifactRequestArtifactBuildProperty>(model1);
      }
    }
    if (m.find("ArtifactBuildType") != m.end() && !m["ArtifactBuildType"].empty()) {
      artifactBuildType = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildType"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtifactProperty"].type()) {
        CreateArtifactRequestArtifactProperty model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtifactProperty"]));
        artifactProperty = make_shared<CreateArtifactRequestArtifactProperty>(model1);
      }
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateArtifactRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateArtifactRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateArtifactRequestTag>>(expect1);
      }
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateArtifactRequest() = default;
};
class CreateArtifactShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateArtifactShrinkRequestTag() {}

  explicit CreateArtifactShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateArtifactShrinkRequestTag() = default;
};
class CreateArtifactShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactBuildPropertyShrink{};
  shared_ptr<string> artifactBuildType{};
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactPropertyShrink{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> supportRegionIds{};
  shared_ptr<vector<CreateArtifactShrinkRequestTag>> tag{};
  shared_ptr<string> versionName{};

  CreateArtifactShrinkRequest() {}

  explicit CreateArtifactShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactBuildPropertyShrink) {
      res["ArtifactBuildProperty"] = boost::any(*artifactBuildPropertyShrink);
    }
    if (artifactBuildType) {
      res["ArtifactBuildType"] = boost::any(*artifactBuildType);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactPropertyShrink) {
      res["ArtifactProperty"] = boost::any(*artifactPropertyShrink);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactBuildProperty") != m.end() && !m["ArtifactBuildProperty"].empty()) {
      artifactBuildPropertyShrink = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildProperty"]));
    }
    if (m.find("ArtifactBuildType") != m.end() && !m["ArtifactBuildType"].empty()) {
      artifactBuildType = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildType"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactPropertyShrink = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateArtifactShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateArtifactShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateArtifactShrinkRequestTag>>(expect1);
      }
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateArtifactShrinkRequest() = default;
};
class CreateArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> artifactBuildProperty{};
  shared_ptr<string> artifactBuildType{};
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactProperty{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> maxVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDetail{};
  shared_ptr<string> supportRegionIds{};
  shared_ptr<string> versionName{};

  CreateArtifactResponseBody() {}

  explicit CreateArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactBuildProperty) {
      res["ArtifactBuildProperty"] = boost::any(*artifactBuildProperty);
    }
    if (artifactBuildType) {
      res["ArtifactBuildType"] = boost::any(*artifactBuildType);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = boost::any(*artifactProperty);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (maxVersion) {
      res["MaxVersion"] = boost::any(*maxVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactBuildProperty") != m.end() && !m["ArtifactBuildProperty"].empty()) {
      artifactBuildProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildProperty"]));
    }
    if (m.find("ArtifactBuildType") != m.end() && !m["ArtifactBuildType"].empty()) {
      artifactBuildType = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildType"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MaxVersion") != m.end() && !m["MaxVersion"].empty()) {
      maxVersion = make_shared<long>(boost::any_cast<long>(m["MaxVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      supportRegionIds = make_shared<string>(boost::any_cast<string>(m["SupportRegionIds"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateArtifactResponseBody() = default;
};
class CreateArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateArtifactResponseBody> body{};

  CreateArtifactResponse() {}

  explicit CreateArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~CreateArtifactResponse() = default;
};
class CreateServiceRequestComplianceMetadata : public Darabonba::Model {
public:
  shared_ptr<vector<string>> compliancePacks{};

  CreateServiceRequestComplianceMetadata() {}

  explicit CreateServiceRequestComplianceMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePacks) {
      res["CompliancePacks"] = boost::any(*compliancePacks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePacks") != m.end() && !m["CompliancePacks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CompliancePacks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CompliancePacks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      compliancePacks = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateServiceRequestComplianceMetadata() = default;
};
class CreateServiceRequestServiceInfoAgreements : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  CreateServiceRequestServiceInfoAgreements() {}

  explicit CreateServiceRequestServiceInfoAgreements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateServiceRequestServiceInfoAgreements() = default;
};
class CreateServiceRequestServiceInfoSoftwares : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  CreateServiceRequestServiceInfoSoftwares() {}

  explicit CreateServiceRequestServiceInfoSoftwares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CreateServiceRequestServiceInfoSoftwares() = default;
};
class CreateServiceRequestServiceInfo : public Darabonba::Model {
public:
  shared_ptr<vector<CreateServiceRequestServiceInfoAgreements>> agreements{};
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> longDescriptionUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};
  shared_ptr<vector<CreateServiceRequestServiceInfoSoftwares>> softwares{};

  CreateServiceRequestServiceInfo() {}

  explicit CreateServiceRequestServiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreements) {
      vector<boost::any> temp1;
      for(auto item1:*agreements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Agreements"] = boost::any(temp1);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (longDescriptionUrl) {
      res["LongDescriptionUrl"] = boost::any(*longDescriptionUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (softwares) {
      vector<boost::any> temp1;
      for(auto item1:*softwares){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Softwares"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agreements") != m.end() && !m["Agreements"].empty()) {
      if (typeid(vector<boost::any>) == m["Agreements"].type()) {
        vector<CreateServiceRequestServiceInfoAgreements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Agreements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceRequestServiceInfoAgreements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        agreements = make_shared<vector<CreateServiceRequestServiceInfoAgreements>>(expect1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("LongDescriptionUrl") != m.end() && !m["LongDescriptionUrl"].empty()) {
      longDescriptionUrl = make_shared<string>(boost::any_cast<string>(m["LongDescriptionUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("Softwares") != m.end() && !m["Softwares"].empty()) {
      if (typeid(vector<boost::any>) == m["Softwares"].type()) {
        vector<CreateServiceRequestServiceInfoSoftwares> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Softwares"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceRequestServiceInfoSoftwares model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        softwares = make_shared<vector<CreateServiceRequestServiceInfoSoftwares>>(expect1);
      }
    }
  }


  virtual ~CreateServiceRequestServiceInfo() = default;
};
class CreateServiceRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateServiceRequestTag() {}

  explicit CreateServiceRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceRequestTag() = default;
};
class CreateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmMetadata{};
  shared_ptr<string> approvalType{};
  shared_ptr<string> buildParameters{};
  shared_ptr<string> clientToken{};
  shared_ptr<CreateServiceRequestComplianceMetadata> complianceMetadata{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> duration{};
  shared_ptr<bool> isSupportOperated{};
  shared_ptr<string> licenseMetadata{};
  shared_ptr<string> logMetadata{};
  shared_ptr<string> operationMetadata{};
  shared_ptr<string> policyNames{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> resellable{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<CreateServiceRequestServiceInfo>> serviceInfo{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> shareType{};
  shared_ptr<string> sourceServiceId{};
  shared_ptr<string> sourceServiceVersion{};
  shared_ptr<vector<CreateServiceRequestTag>> tag{};
  shared_ptr<string> tenantType{};
  shared_ptr<long> trialDuration{};
  shared_ptr<string> upgradeMetadata{};
  shared_ptr<string> versionName{};

  CreateServiceRequest() {}

  explicit CreateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmMetadata) {
      res["AlarmMetadata"] = boost::any(*alarmMetadata);
    }
    if (approvalType) {
      res["ApprovalType"] = boost::any(*approvalType);
    }
    if (buildParameters) {
      res["BuildParameters"] = boost::any(*buildParameters);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (complianceMetadata) {
      res["ComplianceMetadata"] = complianceMetadata ? boost::any(complianceMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (isSupportOperated) {
      res["IsSupportOperated"] = boost::any(*isSupportOperated);
    }
    if (licenseMetadata) {
      res["LicenseMetadata"] = boost::any(*licenseMetadata);
    }
    if (logMetadata) {
      res["LogMetadata"] = boost::any(*logMetadata);
    }
    if (operationMetadata) {
      res["OperationMetadata"] = boost::any(*operationMetadata);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resellable) {
      res["Resellable"] = boost::any(*resellable);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfo"] = boost::any(temp1);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (sourceServiceId) {
      res["SourceServiceId"] = boost::any(*sourceServiceId);
    }
    if (sourceServiceVersion) {
      res["SourceServiceVersion"] = boost::any(*sourceServiceVersion);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (tenantType) {
      res["TenantType"] = boost::any(*tenantType);
    }
    if (trialDuration) {
      res["TrialDuration"] = boost::any(*trialDuration);
    }
    if (upgradeMetadata) {
      res["UpgradeMetadata"] = boost::any(*upgradeMetadata);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmMetadata") != m.end() && !m["AlarmMetadata"].empty()) {
      alarmMetadata = make_shared<string>(boost::any_cast<string>(m["AlarmMetadata"]));
    }
    if (m.find("ApprovalType") != m.end() && !m["ApprovalType"].empty()) {
      approvalType = make_shared<string>(boost::any_cast<string>(m["ApprovalType"]));
    }
    if (m.find("BuildParameters") != m.end() && !m["BuildParameters"].empty()) {
      buildParameters = make_shared<string>(boost::any_cast<string>(m["BuildParameters"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ComplianceMetadata") != m.end() && !m["ComplianceMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComplianceMetadata"].type()) {
        CreateServiceRequestComplianceMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComplianceMetadata"]));
        complianceMetadata = make_shared<CreateServiceRequestComplianceMetadata>(model1);
      }
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("IsSupportOperated") != m.end() && !m["IsSupportOperated"].empty()) {
      isSupportOperated = make_shared<bool>(boost::any_cast<bool>(m["IsSupportOperated"]));
    }
    if (m.find("LicenseMetadata") != m.end() && !m["LicenseMetadata"].empty()) {
      licenseMetadata = make_shared<string>(boost::any_cast<string>(m["LicenseMetadata"]));
    }
    if (m.find("LogMetadata") != m.end() && !m["LogMetadata"].empty()) {
      logMetadata = make_shared<string>(boost::any_cast<string>(m["LogMetadata"]));
    }
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      operationMetadata = make_shared<string>(boost::any_cast<string>(m["OperationMetadata"]));
    }
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      policyNames = make_shared<string>(boost::any_cast<string>(m["PolicyNames"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resellable") != m.end() && !m["Resellable"].empty()) {
      resellable = make_shared<bool>(boost::any_cast<bool>(m["Resellable"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfo") != m.end() && !m["ServiceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfo"].type()) {
        vector<CreateServiceRequestServiceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceRequestServiceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfo = make_shared<vector<CreateServiceRequestServiceInfo>>(expect1);
      }
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("SourceServiceId") != m.end() && !m["SourceServiceId"].empty()) {
      sourceServiceId = make_shared<string>(boost::any_cast<string>(m["SourceServiceId"]));
    }
    if (m.find("SourceServiceVersion") != m.end() && !m["SourceServiceVersion"].empty()) {
      sourceServiceVersion = make_shared<string>(boost::any_cast<string>(m["SourceServiceVersion"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateServiceRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateServiceRequestTag>>(expect1);
      }
    }
    if (m.find("TenantType") != m.end() && !m["TenantType"].empty()) {
      tenantType = make_shared<string>(boost::any_cast<string>(m["TenantType"]));
    }
    if (m.find("TrialDuration") != m.end() && !m["TrialDuration"].empty()) {
      trialDuration = make_shared<long>(boost::any_cast<long>(m["TrialDuration"]));
    }
    if (m.find("UpgradeMetadata") != m.end() && !m["UpgradeMetadata"].empty()) {
      upgradeMetadata = make_shared<string>(boost::any_cast<string>(m["UpgradeMetadata"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateServiceRequest() = default;
};
class CreateServiceShrinkRequestServiceInfoAgreements : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  CreateServiceShrinkRequestServiceInfoAgreements() {}

  explicit CreateServiceShrinkRequestServiceInfoAgreements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateServiceShrinkRequestServiceInfoAgreements() = default;
};
class CreateServiceShrinkRequestServiceInfoSoftwares : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  CreateServiceShrinkRequestServiceInfoSoftwares() {}

  explicit CreateServiceShrinkRequestServiceInfoSoftwares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CreateServiceShrinkRequestServiceInfoSoftwares() = default;
};
class CreateServiceShrinkRequestServiceInfo : public Darabonba::Model {
public:
  shared_ptr<vector<CreateServiceShrinkRequestServiceInfoAgreements>> agreements{};
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> longDescriptionUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};
  shared_ptr<vector<CreateServiceShrinkRequestServiceInfoSoftwares>> softwares{};

  CreateServiceShrinkRequestServiceInfo() {}

  explicit CreateServiceShrinkRequestServiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreements) {
      vector<boost::any> temp1;
      for(auto item1:*agreements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Agreements"] = boost::any(temp1);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (longDescriptionUrl) {
      res["LongDescriptionUrl"] = boost::any(*longDescriptionUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (softwares) {
      vector<boost::any> temp1;
      for(auto item1:*softwares){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Softwares"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agreements") != m.end() && !m["Agreements"].empty()) {
      if (typeid(vector<boost::any>) == m["Agreements"].type()) {
        vector<CreateServiceShrinkRequestServiceInfoAgreements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Agreements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceShrinkRequestServiceInfoAgreements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        agreements = make_shared<vector<CreateServiceShrinkRequestServiceInfoAgreements>>(expect1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("LongDescriptionUrl") != m.end() && !m["LongDescriptionUrl"].empty()) {
      longDescriptionUrl = make_shared<string>(boost::any_cast<string>(m["LongDescriptionUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("Softwares") != m.end() && !m["Softwares"].empty()) {
      if (typeid(vector<boost::any>) == m["Softwares"].type()) {
        vector<CreateServiceShrinkRequestServiceInfoSoftwares> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Softwares"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceShrinkRequestServiceInfoSoftwares model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        softwares = make_shared<vector<CreateServiceShrinkRequestServiceInfoSoftwares>>(expect1);
      }
    }
  }


  virtual ~CreateServiceShrinkRequestServiceInfo() = default;
};
class CreateServiceShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateServiceShrinkRequestTag() {}

  explicit CreateServiceShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceShrinkRequestTag() = default;
};
class CreateServiceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmMetadata{};
  shared_ptr<string> approvalType{};
  shared_ptr<string> buildParameters{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> complianceMetadataShrink{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> duration{};
  shared_ptr<bool> isSupportOperated{};
  shared_ptr<string> licenseMetadata{};
  shared_ptr<string> logMetadata{};
  shared_ptr<string> operationMetadata{};
  shared_ptr<string> policyNames{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> resellable{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<CreateServiceShrinkRequestServiceInfo>> serviceInfo{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> shareType{};
  shared_ptr<string> sourceServiceId{};
  shared_ptr<string> sourceServiceVersion{};
  shared_ptr<vector<CreateServiceShrinkRequestTag>> tag{};
  shared_ptr<string> tenantType{};
  shared_ptr<long> trialDuration{};
  shared_ptr<string> upgradeMetadata{};
  shared_ptr<string> versionName{};

  CreateServiceShrinkRequest() {}

  explicit CreateServiceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmMetadata) {
      res["AlarmMetadata"] = boost::any(*alarmMetadata);
    }
    if (approvalType) {
      res["ApprovalType"] = boost::any(*approvalType);
    }
    if (buildParameters) {
      res["BuildParameters"] = boost::any(*buildParameters);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (complianceMetadataShrink) {
      res["ComplianceMetadata"] = boost::any(*complianceMetadataShrink);
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (isSupportOperated) {
      res["IsSupportOperated"] = boost::any(*isSupportOperated);
    }
    if (licenseMetadata) {
      res["LicenseMetadata"] = boost::any(*licenseMetadata);
    }
    if (logMetadata) {
      res["LogMetadata"] = boost::any(*logMetadata);
    }
    if (operationMetadata) {
      res["OperationMetadata"] = boost::any(*operationMetadata);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resellable) {
      res["Resellable"] = boost::any(*resellable);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfo"] = boost::any(temp1);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (sourceServiceId) {
      res["SourceServiceId"] = boost::any(*sourceServiceId);
    }
    if (sourceServiceVersion) {
      res["SourceServiceVersion"] = boost::any(*sourceServiceVersion);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (tenantType) {
      res["TenantType"] = boost::any(*tenantType);
    }
    if (trialDuration) {
      res["TrialDuration"] = boost::any(*trialDuration);
    }
    if (upgradeMetadata) {
      res["UpgradeMetadata"] = boost::any(*upgradeMetadata);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmMetadata") != m.end() && !m["AlarmMetadata"].empty()) {
      alarmMetadata = make_shared<string>(boost::any_cast<string>(m["AlarmMetadata"]));
    }
    if (m.find("ApprovalType") != m.end() && !m["ApprovalType"].empty()) {
      approvalType = make_shared<string>(boost::any_cast<string>(m["ApprovalType"]));
    }
    if (m.find("BuildParameters") != m.end() && !m["BuildParameters"].empty()) {
      buildParameters = make_shared<string>(boost::any_cast<string>(m["BuildParameters"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ComplianceMetadata") != m.end() && !m["ComplianceMetadata"].empty()) {
      complianceMetadataShrink = make_shared<string>(boost::any_cast<string>(m["ComplianceMetadata"]));
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("IsSupportOperated") != m.end() && !m["IsSupportOperated"].empty()) {
      isSupportOperated = make_shared<bool>(boost::any_cast<bool>(m["IsSupportOperated"]));
    }
    if (m.find("LicenseMetadata") != m.end() && !m["LicenseMetadata"].empty()) {
      licenseMetadata = make_shared<string>(boost::any_cast<string>(m["LicenseMetadata"]));
    }
    if (m.find("LogMetadata") != m.end() && !m["LogMetadata"].empty()) {
      logMetadata = make_shared<string>(boost::any_cast<string>(m["LogMetadata"]));
    }
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      operationMetadata = make_shared<string>(boost::any_cast<string>(m["OperationMetadata"]));
    }
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      policyNames = make_shared<string>(boost::any_cast<string>(m["PolicyNames"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resellable") != m.end() && !m["Resellable"].empty()) {
      resellable = make_shared<bool>(boost::any_cast<bool>(m["Resellable"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfo") != m.end() && !m["ServiceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfo"].type()) {
        vector<CreateServiceShrinkRequestServiceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceShrinkRequestServiceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfo = make_shared<vector<CreateServiceShrinkRequestServiceInfo>>(expect1);
      }
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("SourceServiceId") != m.end() && !m["SourceServiceId"].empty()) {
      sourceServiceId = make_shared<string>(boost::any_cast<string>(m["SourceServiceId"]));
    }
    if (m.find("SourceServiceVersion") != m.end() && !m["SourceServiceVersion"].empty()) {
      sourceServiceVersion = make_shared<string>(boost::any_cast<string>(m["SourceServiceVersion"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateServiceShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateServiceShrinkRequestTag>>(expect1);
      }
    }
    if (m.find("TenantType") != m.end() && !m["TenantType"].empty()) {
      tenantType = make_shared<string>(boost::any_cast<string>(m["TenantType"]));
    }
    if (m.find("TrialDuration") != m.end() && !m["TrialDuration"].empty()) {
      trialDuration = make_shared<long>(boost::any_cast<long>(m["TrialDuration"]));
    }
    if (m.find("UpgradeMetadata") != m.end() && !m["UpgradeMetadata"].empty()) {
      upgradeMetadata = make_shared<string>(boost::any_cast<string>(m["UpgradeMetadata"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateServiceShrinkRequest() = default;
};
class CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy : public Darabonba::Model {
public:
  shared_ptr<vector<string>> action{};
  shared_ptr<string> resource{};
  shared_ptr<string> serviceName{};

  CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy() {}

  explicit CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
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
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy() = default;
};
class CreateServiceResponseBodyDryRunResultRolePolicy : public Darabonba::Model {
public:
  shared_ptr<vector<CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy>> missingPolicy{};
  shared_ptr<string> policy{};

  CreateServiceResponseBodyDryRunResultRolePolicy() {}

  explicit CreateServiceResponseBodyDryRunResultRolePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (missingPolicy) {
      vector<boost::any> temp1;
      for(auto item1:*missingPolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MissingPolicy"] = boost::any(temp1);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MissingPolicy") != m.end() && !m["MissingPolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["MissingPolicy"].type()) {
        vector<CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MissingPolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        missingPolicy = make_shared<vector<CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy>>(expect1);
      }
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
  }


  virtual ~CreateServiceResponseBodyDryRunResultRolePolicy() = default;
};
class CreateServiceResponseBodyDryRunResult : public Darabonba::Model {
public:
  shared_ptr<CreateServiceResponseBodyDryRunResultRolePolicy> rolePolicy{};

  CreateServiceResponseBodyDryRunResult() {}

  explicit CreateServiceResponseBodyDryRunResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rolePolicy) {
      res["RolePolicy"] = rolePolicy ? boost::any(rolePolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RolePolicy") != m.end() && !m["RolePolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["RolePolicy"].type()) {
        CreateServiceResponseBodyDryRunResultRolePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RolePolicy"]));
        rolePolicy = make_shared<CreateServiceResponseBodyDryRunResultRolePolicy>(model1);
      }
    }
  }


  virtual ~CreateServiceResponseBodyDryRunResult() = default;
};
class CreateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateServiceResponseBodyDryRunResult> dryRunResult{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> status{};
  shared_ptr<string> version{};

  CreateServiceResponseBody() {}

  explicit CreateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRunResult) {
      res["DryRunResult"] = dryRunResult ? boost::any(dryRunResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DryRunResult") != m.end() && !m["DryRunResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["DryRunResult"].type()) {
        CreateServiceResponseBodyDryRunResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DryRunResult"]));
        dryRunResult = make_shared<CreateServiceResponseBodyDryRunResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CreateServiceResponseBody() = default;
};
class CreateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceResponseBody> body{};

  CreateServiceResponse() {}

  explicit CreateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceResponse() = default;
};
class CreateServiceInstanceRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateServiceInstanceRequestTag() {}

  explicit CreateServiceInstanceRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceInstanceRequestTag() = default;
};
class CreateServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> endTime{};
  shared_ptr<string> name{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> specificationName{};
  shared_ptr<vector<CreateServiceInstanceRequestTag>> tag{};
  shared_ptr<string> templateName{};
  shared_ptr<string> userId{};

  CreateServiceInstanceRequest() {}

  explicit CreateServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
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
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateServiceInstanceRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceInstanceRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateServiceInstanceRequestTag>>(expect1);
      }
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateServiceInstanceRequest() = default;
};
class CreateServiceInstanceShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateServiceInstanceShrinkRequestTag() {}

  explicit CreateServiceInstanceShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceInstanceShrinkRequestTag() = default;
};
class CreateServiceInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> endTime{};
  shared_ptr<string> name{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> specificationName{};
  shared_ptr<vector<CreateServiceInstanceShrinkRequestTag>> tag{};
  shared_ptr<string> templateName{};
  shared_ptr<string> userId{};

  CreateServiceInstanceShrinkRequest() {}

  explicit CreateServiceInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
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
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateServiceInstanceShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceInstanceShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateServiceInstanceShrinkRequestTag>>(expect1);
      }
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateServiceInstanceShrinkRequest() = default;
};
class CreateServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> status{};

  CreateServiceInstanceResponseBody() {}

  explicit CreateServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateServiceInstanceResponseBody() = default;
};
class CreateServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceInstanceResponseBody> body{};

  CreateServiceInstanceResponse() {}

  explicit CreateServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceInstanceResponse() = default;
};
class CreateServiceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};

  CreateServiceUsageRequest() {}

  explicit CreateServiceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
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
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~CreateServiceUsageRequest() = default;
};
class CreateServiceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateServiceUsageResponseBody() {}

  explicit CreateServiceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceUsageResponseBody() = default;
};
class CreateServiceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceUsageResponseBody> body{};

  CreateServiceUsageResponse() {}

  explicit CreateServiceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceUsageResponse() = default;
};
class DeleteArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> clientToken{};

  DeleteArtifactRequest() {}

  explicit DeleteArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~DeleteArtifactRequest() = default;
};
class DeleteArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteArtifactResponseBody() {}

  explicit DeleteArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteArtifactResponseBody() = default;
};
class DeleteArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteArtifactResponseBody> body{};

  DeleteArtifactResponse() {}

  explicit DeleteArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteArtifactResponse() = default;
};
class DeleteServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};

  DeleteServiceRequest() {}

  explicit DeleteServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
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
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~DeleteServiceRequest() = default;
};
class DeleteServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServiceResponseBody() {}

  explicit DeleteServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServiceResponseBody() = default;
};
class DeleteServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceResponseBody> body{};

  DeleteServiceResponse() {}

  explicit DeleteServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceResponse() = default;
};
class DeleteServiceInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> serviceInstanceId{};

  DeleteServiceInstancesRequest() {}

  explicit DeleteServiceInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServiceInstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServiceInstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceInstanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteServiceInstancesRequest() = default;
};
class DeleteServiceInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServiceInstancesResponseBody() {}

  explicit DeleteServiceInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServiceInstancesResponseBody() = default;
};
class DeleteServiceInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceInstancesResponseBody> body{};

  DeleteServiceInstancesResponse() {}

  explicit DeleteServiceInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceInstancesResponse() = default;
};
class DeployServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  DeployServiceInstanceRequest() {}

  explicit DeployServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~DeployServiceInstanceRequest() = default;
};
class DeployServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeployServiceInstanceResponseBody() {}

  explicit DeployServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeployServiceInstanceResponseBody() = default;
};
class DeployServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployServiceInstanceResponseBody> body{};

  DeployServiceInstanceResponse() {}

  explicit DeployServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeployServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeployServiceInstanceResponse() = default;
};
class GenerateServicePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> operationTypes{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> templateName{};
  shared_ptr<string> trialType{};

  GenerateServicePolicyRequest() {}

  explicit GenerateServicePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationTypes) {
      res["OperationTypes"] = boost::any(*operationTypes);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (trialType) {
      res["TrialType"] = boost::any(*trialType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationTypes") != m.end() && !m["OperationTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperationTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperationTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operationTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
  }


  virtual ~GenerateServicePolicyRequest() = default;
};
class GenerateServicePolicyResponseBodyMissingPolicy : public Darabonba::Model {
public:
  shared_ptr<vector<string>> action{};
  shared_ptr<string> resource{};
  shared_ptr<string> serviceName{};

  GenerateServicePolicyResponseBodyMissingPolicy() {}

  explicit GenerateServicePolicyResponseBodyMissingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
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
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~GenerateServicePolicyResponseBodyMissingPolicy() = default;
};
class GenerateServicePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GenerateServicePolicyResponseBodyMissingPolicy>> missingPolicy{};
  shared_ptr<string> policy{};
  shared_ptr<string> requestId{};

  GenerateServicePolicyResponseBody() {}

  explicit GenerateServicePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (missingPolicy) {
      vector<boost::any> temp1;
      for(auto item1:*missingPolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MissingPolicy"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["MissingPolicy"].type()) {
        vector<GenerateServicePolicyResponseBodyMissingPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MissingPolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateServicePolicyResponseBodyMissingPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        missingPolicy = make_shared<vector<GenerateServicePolicyResponseBodyMissingPolicy>>(expect1);
      }
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateServicePolicyResponseBody() = default;
};
class GenerateServicePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateServicePolicyResponseBody> body{};

  GenerateServicePolicyResponse() {}

  explicit GenerateServicePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GenerateServicePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateServicePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateServicePolicyResponse() = default;
};
class GetArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactName{};
  shared_ptr<string> artifactVersion{};

  GetArtifactRequest() {}

  explicit GetArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactName) {
      res["ArtifactName"] = boost::any(*artifactName);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactName") != m.end() && !m["ArtifactName"].empty()) {
      artifactName = make_shared<string>(boost::any_cast<string>(m["ArtifactName"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
  }


  virtual ~GetArtifactRequest() = default;
};
class GetArtifactResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetArtifactResponseBodyTags() {}

  explicit GetArtifactResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetArtifactResponseBodyTags() = default;
};
class GetArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> artifactBuildProperty{};
  shared_ptr<string> artifactBuildType{};
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactProperty{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> maxVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> permissionType{};
  shared_ptr<string> progress{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDetail{};
  shared_ptr<string> supportRegionIds{};
  shared_ptr<vector<GetArtifactResponseBodyTags>> tags{};
  shared_ptr<string> versionName{};

  GetArtifactResponseBody() {}

  explicit GetArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactBuildProperty) {
      res["ArtifactBuildProperty"] = boost::any(*artifactBuildProperty);
    }
    if (artifactBuildType) {
      res["ArtifactBuildType"] = boost::any(*artifactBuildType);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = boost::any(*artifactProperty);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (maxVersion) {
      res["MaxVersion"] = boost::any(*maxVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (permissionType) {
      res["PermissionType"] = boost::any(*permissionType);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactBuildProperty") != m.end() && !m["ArtifactBuildProperty"].empty()) {
      artifactBuildProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildProperty"]));
    }
    if (m.find("ArtifactBuildType") != m.end() && !m["ArtifactBuildType"].empty()) {
      artifactBuildType = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildType"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MaxVersion") != m.end() && !m["MaxVersion"].empty()) {
      maxVersion = make_shared<long>(boost::any_cast<long>(m["MaxVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PermissionType") != m.end() && !m["PermissionType"].empty()) {
      permissionType = make_shared<string>(boost::any_cast<string>(m["PermissionType"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      supportRegionIds = make_shared<string>(boost::any_cast<string>(m["SupportRegionIds"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetArtifactResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetArtifactResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetArtifactResponseBodyTags>>(expect1);
      }
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetArtifactResponseBody() = default;
};
class GetArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetArtifactResponseBody> body{};

  GetArtifactResponse() {}

  explicit GetArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~GetArtifactResponse() = default;
};
class GetArtifactRepositoryCredentialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> deployRegionId{};

  GetArtifactRepositoryCredentialsRequest() {}

  explicit GetArtifactRepositoryCredentialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (deployRegionId) {
      res["DeployRegionId"] = boost::any(*deployRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("DeployRegionId") != m.end() && !m["DeployRegionId"].empty()) {
      deployRegionId = make_shared<string>(boost::any_cast<string>(m["DeployRegionId"]));
    }
  }


  virtual ~GetArtifactRepositoryCredentialsRequest() = default;
};
class GetArtifactRepositoryCredentialsResponseBodyAvailableResources : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repositoryName{};

  GetArtifactRepositoryCredentialsResponseBodyAvailableResources() {}

  explicit GetArtifactRepositoryCredentialsResponseBodyAvailableResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repositoryName) {
      res["RepositoryName"] = boost::any(*repositoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepositoryName") != m.end() && !m["RepositoryName"].empty()) {
      repositoryName = make_shared<string>(boost::any_cast<string>(m["RepositoryName"]));
    }
  }


  virtual ~GetArtifactRepositoryCredentialsResponseBodyAvailableResources() = default;
};
class GetArtifactRepositoryCredentialsResponseBodyCredentials : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> password{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> username{};

  GetArtifactRepositoryCredentialsResponseBodyCredentials() {}

  explicit GetArtifactRepositoryCredentialsResponseBodyCredentials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~GetArtifactRepositoryCredentialsResponseBodyCredentials() = default;
};
class GetArtifactRepositoryCredentialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources>> availableResources{};
  shared_ptr<GetArtifactRepositoryCredentialsResponseBodyCredentials> credentials{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> requestId{};

  GetArtifactRepositoryCredentialsResponseBody() {}

  explicit GetArtifactRepositoryCredentialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableResources) {
      vector<boost::any> temp1;
      for(auto item1:*availableResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableResources"] = boost::any(temp1);
    }
    if (credentials) {
      res["Credentials"] = credentials ? boost::any(credentials->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableResources") != m.end() && !m["AvailableResources"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableResources"].type()) {
        vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetArtifactRepositoryCredentialsResponseBodyAvailableResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableResources = make_shared<vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources>>(expect1);
      }
    }
    if (m.find("Credentials") != m.end() && !m["Credentials"].empty()) {
      if (typeid(map<string, boost::any>) == m["Credentials"].type()) {
        GetArtifactRepositoryCredentialsResponseBodyCredentials model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Credentials"]));
        credentials = make_shared<GetArtifactRepositoryCredentialsResponseBodyCredentials>(model1);
      }
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetArtifactRepositoryCredentialsResponseBody() = default;
};
class GetArtifactRepositoryCredentialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetArtifactRepositoryCredentialsResponseBody> body{};

  GetArtifactRepositoryCredentialsResponse() {}

  explicit GetArtifactRepositoryCredentialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetArtifactRepositoryCredentialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetArtifactRepositoryCredentialsResponseBody>(model1);
      }
    }
  }


  virtual ~GetArtifactRepositoryCredentialsResponse() = default;
};
class GetServiceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> filterAliUid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> sharedAccountType{};
  shared_ptr<vector<string>> showDetail{};

  GetServiceRequest() {}

  explicit GetServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterAliUid) {
      res["FilterAliUid"] = boost::any(*filterAliUid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (sharedAccountType) {
      res["SharedAccountType"] = boost::any(*sharedAccountType);
    }
    if (showDetail) {
      res["ShowDetail"] = boost::any(*showDetail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilterAliUid") != m.end() && !m["FilterAliUid"].empty()) {
      filterAliUid = make_shared<bool>(boost::any_cast<bool>(m["FilterAliUid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("SharedAccountType") != m.end() && !m["SharedAccountType"].empty()) {
      sharedAccountType = make_shared<string>(boost::any_cast<string>(m["SharedAccountType"]));
    }
    if (m.find("ShowDetail") != m.end() && !m["ShowDetail"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ShowDetail"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ShowDetail"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      showDetail = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetServiceRequest() = default;
};
class GetServiceResponseBodyCommodityCssMetadataComponentsMappings : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> mappings{};
  shared_ptr<string> templateName{};

  GetServiceResponseBodyCommodityCssMetadataComponentsMappings() {}

  explicit GetServiceResponseBodyCommodityCssMetadataComponentsMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mappings) {
      res["Mappings"] = boost::any(*mappings);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mappings") != m.end() && !m["Mappings"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Mappings"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      mappings = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceResponseBodyCommodityCssMetadataComponentsMappings() = default;
};
class GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> metricName{};
  shared_ptr<string> promql{};
  shared_ptr<string> type{};

  GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos() {}

  explicit GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (promql) {
      res["Promql"] = boost::any(*promql);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Promql") != m.end() && !m["Promql"].empty()) {
      promql = make_shared<string>(boost::any_cast<string>(m["Promql"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos() = default;
};
class GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings : public Darabonba::Model {
public:
  shared_ptr<string> entityIds{};
  shared_ptr<string> specificationName{};
  shared_ptr<string> templateName{};

  GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings() {}

  explicit GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityIds) {
      res["EntityIds"] = boost::any(*entityIds);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityIds") != m.end() && !m["EntityIds"].empty()) {
      entityIds = make_shared<string>(boost::any_cast<string>(m["EntityIds"]));
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings() = default;
};
class GetServiceResponseBodyCommodityCssMetadata : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceResponseBodyCommodityCssMetadataComponentsMappings>> componentsMappings{};
  shared_ptr<vector<GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos>> meteringEntityExtraInfos{};
  shared_ptr<vector<GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings>> meteringEntityMappings{};

  GetServiceResponseBodyCommodityCssMetadata() {}

  explicit GetServiceResponseBodyCommodityCssMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentsMappings) {
      vector<boost::any> temp1;
      for(auto item1:*componentsMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComponentsMappings"] = boost::any(temp1);
    }
    if (meteringEntityExtraInfos) {
      vector<boost::any> temp1;
      for(auto item1:*meteringEntityExtraInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MeteringEntityExtraInfos"] = boost::any(temp1);
    }
    if (meteringEntityMappings) {
      vector<boost::any> temp1;
      for(auto item1:*meteringEntityMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MeteringEntityMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentsMappings") != m.end() && !m["ComponentsMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ComponentsMappings"].type()) {
        vector<GetServiceResponseBodyCommodityCssMetadataComponentsMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComponentsMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommodityCssMetadataComponentsMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        componentsMappings = make_shared<vector<GetServiceResponseBodyCommodityCssMetadataComponentsMappings>>(expect1);
      }
    }
    if (m.find("MeteringEntityExtraInfos") != m.end() && !m["MeteringEntityExtraInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MeteringEntityExtraInfos"].type()) {
        vector<GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MeteringEntityExtraInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meteringEntityExtraInfos = make_shared<vector<GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos>>(expect1);
      }
    }
    if (m.find("MeteringEntityMappings") != m.end() && !m["MeteringEntityMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["MeteringEntityMappings"].type()) {
        vector<GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MeteringEntityMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meteringEntityMappings = make_shared<vector<GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings>>(expect1);
      }
    }
  }


  virtual ~GetServiceResponseBodyCommodityCssMetadata() = default;
};
class GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> metricName{};
  shared_ptr<string> promql{};
  shared_ptr<string> type{};

  GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos() {}

  explicit GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (promql) {
      res["Promql"] = boost::any(*promql);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Promql") != m.end() && !m["Promql"].empty()) {
      promql = make_shared<string>(boost::any_cast<string>(m["Promql"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos() = default;
};
class GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings : public Darabonba::Model {
public:
  shared_ptr<string> entityIds{};
  shared_ptr<string> specificationName{};
  shared_ptr<string> templateName{};

  GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings() {}

  explicit GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityIds) {
      res["EntityIds"] = boost::any(*entityIds);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityIds") != m.end() && !m["EntityIds"].empty()) {
      entityIds = make_shared<string>(boost::any_cast<string>(m["EntityIds"]));
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings() = default;
};
class GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings : public Darabonba::Model {
public:
  shared_ptr<string> specificationCode{};
  shared_ptr<string> specificationName{};
  shared_ptr<string> templateName{};
  shared_ptr<string> trialType{};

  GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings() {}

  explicit GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specificationCode) {
      res["SpecificationCode"] = boost::any(*specificationCode);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (trialType) {
      res["TrialType"] = boost::any(*trialType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecificationCode") != m.end() && !m["SpecificationCode"].empty()) {
      specificationCode = make_shared<string>(boost::any_cast<string>(m["SpecificationCode"]));
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
  }


  virtual ~GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings() = default;
};
class GetServiceResponseBodyCommodityMarketplaceMetadata : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos>> meteringEntityExtraInfos{};
  shared_ptr<vector<GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings>> meteringEntityMappings{};
  shared_ptr<vector<GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings>> specificationMappings{};

  GetServiceResponseBodyCommodityMarketplaceMetadata() {}

  explicit GetServiceResponseBodyCommodityMarketplaceMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meteringEntityExtraInfos) {
      vector<boost::any> temp1;
      for(auto item1:*meteringEntityExtraInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MeteringEntityExtraInfos"] = boost::any(temp1);
    }
    if (meteringEntityMappings) {
      vector<boost::any> temp1;
      for(auto item1:*meteringEntityMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MeteringEntityMappings"] = boost::any(temp1);
    }
    if (specificationMappings) {
      vector<boost::any> temp1;
      for(auto item1:*specificationMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpecificationMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MeteringEntityExtraInfos") != m.end() && !m["MeteringEntityExtraInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MeteringEntityExtraInfos"].type()) {
        vector<GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MeteringEntityExtraInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meteringEntityExtraInfos = make_shared<vector<GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityExtraInfos>>(expect1);
      }
    }
    if (m.find("MeteringEntityMappings") != m.end() && !m["MeteringEntityMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["MeteringEntityMappings"].type()) {
        vector<GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MeteringEntityMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meteringEntityMappings = make_shared<vector<GetServiceResponseBodyCommodityMarketplaceMetadataMeteringEntityMappings>>(expect1);
      }
    }
    if (m.find("SpecificationMappings") != m.end() && !m["SpecificationMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["SpecificationMappings"].type()) {
        vector<GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpecificationMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specificationMappings = make_shared<vector<GetServiceResponseBodyCommodityMarketplaceMetadataSpecificationMappings>>(expect1);
      }
    }
  }


  virtual ~GetServiceResponseBodyCommodityMarketplaceMetadata() = default;
};
class GetServiceResponseBodyCommodityMeteringEntities : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> name{};

  GetServiceResponseBodyCommodityMeteringEntities() {}

  explicit GetServiceResponseBodyCommodityMeteringEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetServiceResponseBodyCommodityMeteringEntities() = default;
};
class GetServiceResponseBodyCommoditySpecifications : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> times{};

  GetServiceResponseBodyCommoditySpecifications() {}

  explicit GetServiceResponseBodyCommoditySpecifications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (times) {
      res["Times"] = boost::any(*times);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Times") != m.end() && !m["Times"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Times"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Times"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      times = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetServiceResponseBodyCommoditySpecifications() = default;
};
class GetServiceResponseBodyCommodity : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<vector<string>> components{};
  shared_ptr<GetServiceResponseBodyCommodityCssMetadata> cssMetadata{};
  shared_ptr<GetServiceResponseBodyCommodityMarketplaceMetadata> marketplaceMetadata{};
  shared_ptr<vector<GetServiceResponseBodyCommodityMeteringEntities>> meteringEntities{};
  shared_ptr<string> saasBoostMetadata{};
  shared_ptr<vector<GetServiceResponseBodyCommoditySpecifications>> specifications{};
  shared_ptr<string> type{};

  GetServiceResponseBodyCommodity() {}

  explicit GetServiceResponseBodyCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (components) {
      res["Components"] = boost::any(*components);
    }
    if (cssMetadata) {
      res["CssMetadata"] = cssMetadata ? boost::any(cssMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (marketplaceMetadata) {
      res["MarketplaceMetadata"] = marketplaceMetadata ? boost::any(marketplaceMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (meteringEntities) {
      vector<boost::any> temp1;
      for(auto item1:*meteringEntities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MeteringEntities"] = boost::any(temp1);
    }
    if (saasBoostMetadata) {
      res["SaasBoostMetadata"] = boost::any(*saasBoostMetadata);
    }
    if (specifications) {
      vector<boost::any> temp1;
      for(auto item1:*specifications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Specifications"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Components"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      components = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CssMetadata") != m.end() && !m["CssMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["CssMetadata"].type()) {
        GetServiceResponseBodyCommodityCssMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CssMetadata"]));
        cssMetadata = make_shared<GetServiceResponseBodyCommodityCssMetadata>(model1);
      }
    }
    if (m.find("MarketplaceMetadata") != m.end() && !m["MarketplaceMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["MarketplaceMetadata"].type()) {
        GetServiceResponseBodyCommodityMarketplaceMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MarketplaceMetadata"]));
        marketplaceMetadata = make_shared<GetServiceResponseBodyCommodityMarketplaceMetadata>(model1);
      }
    }
    if (m.find("MeteringEntities") != m.end() && !m["MeteringEntities"].empty()) {
      if (typeid(vector<boost::any>) == m["MeteringEntities"].type()) {
        vector<GetServiceResponseBodyCommodityMeteringEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MeteringEntities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommodityMeteringEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meteringEntities = make_shared<vector<GetServiceResponseBodyCommodityMeteringEntities>>(expect1);
      }
    }
    if (m.find("SaasBoostMetadata") != m.end() && !m["SaasBoostMetadata"].empty()) {
      saasBoostMetadata = make_shared<string>(boost::any_cast<string>(m["SaasBoostMetadata"]));
    }
    if (m.find("Specifications") != m.end() && !m["Specifications"].empty()) {
      if (typeid(vector<boost::any>) == m["Specifications"].type()) {
        vector<GetServiceResponseBodyCommoditySpecifications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Specifications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyCommoditySpecifications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specifications = make_shared<vector<GetServiceResponseBodyCommoditySpecifications>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetServiceResponseBodyCommodity() = default;
};
class GetServiceResponseBodyComplianceMetadata : public Darabonba::Model {
public:
  shared_ptr<vector<string>> compliancePacks{};

  GetServiceResponseBodyComplianceMetadata() {}

  explicit GetServiceResponseBodyComplianceMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePacks) {
      res["CompliancePacks"] = boost::any(*compliancePacks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePacks") != m.end() && !m["CompliancePacks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CompliancePacks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CompliancePacks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      compliancePacks = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetServiceResponseBodyComplianceMetadata() = default;
};
class GetServiceResponseBodyServiceDocumentInfos : public Darabonba::Model {
public:
  shared_ptr<string> documentUrl{};
  shared_ptr<string> locale{};
  shared_ptr<string> templateName{};

  GetServiceResponseBodyServiceDocumentInfos() {}

  explicit GetServiceResponseBodyServiceDocumentInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentUrl) {
      res["DocumentUrl"] = boost::any(*documentUrl);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocumentUrl") != m.end() && !m["DocumentUrl"].empty()) {
      documentUrl = make_shared<string>(boost::any_cast<string>(m["DocumentUrl"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceResponseBodyServiceDocumentInfos() = default;
};
class GetServiceResponseBodyServiceInfosAgreements : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  GetServiceResponseBodyServiceInfosAgreements() {}

  explicit GetServiceResponseBodyServiceInfosAgreements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetServiceResponseBodyServiceInfosAgreements() = default;
};
class GetServiceResponseBodyServiceInfosSoftwares : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  GetServiceResponseBodyServiceInfosSoftwares() {}

  explicit GetServiceResponseBodyServiceInfosSoftwares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetServiceResponseBodyServiceInfosSoftwares() = default;
};
class GetServiceResponseBodyServiceInfos : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceResponseBodyServiceInfosAgreements>> agreements{};
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> longDescriptionUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};
  shared_ptr<vector<GetServiceResponseBodyServiceInfosSoftwares>> softwares{};

  GetServiceResponseBodyServiceInfos() {}

  explicit GetServiceResponseBodyServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreements) {
      vector<boost::any> temp1;
      for(auto item1:*agreements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Agreements"] = boost::any(temp1);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (longDescriptionUrl) {
      res["LongDescriptionUrl"] = boost::any(*longDescriptionUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (softwares) {
      vector<boost::any> temp1;
      for(auto item1:*softwares){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Softwares"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agreements") != m.end() && !m["Agreements"].empty()) {
      if (typeid(vector<boost::any>) == m["Agreements"].type()) {
        vector<GetServiceResponseBodyServiceInfosAgreements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Agreements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyServiceInfosAgreements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        agreements = make_shared<vector<GetServiceResponseBodyServiceInfosAgreements>>(expect1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("LongDescriptionUrl") != m.end() && !m["LongDescriptionUrl"].empty()) {
      longDescriptionUrl = make_shared<string>(boost::any_cast<string>(m["LongDescriptionUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("Softwares") != m.end() && !m["Softwares"].empty()) {
      if (typeid(vector<boost::any>) == m["Softwares"].type()) {
        vector<GetServiceResponseBodyServiceInfosSoftwares> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Softwares"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyServiceInfosSoftwares model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        softwares = make_shared<vector<GetServiceResponseBodyServiceInfosSoftwares>>(expect1);
      }
    }
  }


  virtual ~GetServiceResponseBodyServiceInfos() = default;
};
class GetServiceResponseBodyStatistic : public Darabonba::Model {
public:
  shared_ptr<long> accumulativeInstanceCount{};
  shared_ptr<double> accumulativePocAmount{};
  shared_ptr<long> accumulativeUserCount{};
  shared_ptr<double> averagePocAmount{};
  shared_ptr<double> averagePocDuration{};
  shared_ptr<double> averagePocUnitAmount{};
  shared_ptr<long> deployedServiceInstanceCount{};
  shared_ptr<long> deployedUserCount{};
  shared_ptr<long> submittedUsageCount{};

  GetServiceResponseBodyStatistic() {}

  explicit GetServiceResponseBodyStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accumulativeInstanceCount) {
      res["AccumulativeInstanceCount"] = boost::any(*accumulativeInstanceCount);
    }
    if (accumulativePocAmount) {
      res["AccumulativePocAmount"] = boost::any(*accumulativePocAmount);
    }
    if (accumulativeUserCount) {
      res["AccumulativeUserCount"] = boost::any(*accumulativeUserCount);
    }
    if (averagePocAmount) {
      res["AveragePocAmount"] = boost::any(*averagePocAmount);
    }
    if (averagePocDuration) {
      res["AveragePocDuration"] = boost::any(*averagePocDuration);
    }
    if (averagePocUnitAmount) {
      res["AveragePocUnitAmount"] = boost::any(*averagePocUnitAmount);
    }
    if (deployedServiceInstanceCount) {
      res["DeployedServiceInstanceCount"] = boost::any(*deployedServiceInstanceCount);
    }
    if (deployedUserCount) {
      res["DeployedUserCount"] = boost::any(*deployedUserCount);
    }
    if (submittedUsageCount) {
      res["SubmittedUsageCount"] = boost::any(*submittedUsageCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccumulativeInstanceCount") != m.end() && !m["AccumulativeInstanceCount"].empty()) {
      accumulativeInstanceCount = make_shared<long>(boost::any_cast<long>(m["AccumulativeInstanceCount"]));
    }
    if (m.find("AccumulativePocAmount") != m.end() && !m["AccumulativePocAmount"].empty()) {
      accumulativePocAmount = make_shared<double>(boost::any_cast<double>(m["AccumulativePocAmount"]));
    }
    if (m.find("AccumulativeUserCount") != m.end() && !m["AccumulativeUserCount"].empty()) {
      accumulativeUserCount = make_shared<long>(boost::any_cast<long>(m["AccumulativeUserCount"]));
    }
    if (m.find("AveragePocAmount") != m.end() && !m["AveragePocAmount"].empty()) {
      averagePocAmount = make_shared<double>(boost::any_cast<double>(m["AveragePocAmount"]));
    }
    if (m.find("AveragePocDuration") != m.end() && !m["AveragePocDuration"].empty()) {
      averagePocDuration = make_shared<double>(boost::any_cast<double>(m["AveragePocDuration"]));
    }
    if (m.find("AveragePocUnitAmount") != m.end() && !m["AveragePocUnitAmount"].empty()) {
      averagePocUnitAmount = make_shared<double>(boost::any_cast<double>(m["AveragePocUnitAmount"]));
    }
    if (m.find("DeployedServiceInstanceCount") != m.end() && !m["DeployedServiceInstanceCount"].empty()) {
      deployedServiceInstanceCount = make_shared<long>(boost::any_cast<long>(m["DeployedServiceInstanceCount"]));
    }
    if (m.find("DeployedUserCount") != m.end() && !m["DeployedUserCount"].empty()) {
      deployedUserCount = make_shared<long>(boost::any_cast<long>(m["DeployedUserCount"]));
    }
    if (m.find("SubmittedUsageCount") != m.end() && !m["SubmittedUsageCount"].empty()) {
      submittedUsageCount = make_shared<long>(boost::any_cast<long>(m["SubmittedUsageCount"]));
    }
  }


  virtual ~GetServiceResponseBodyStatistic() = default;
};
class GetServiceResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetServiceResponseBodyTags() {}

  explicit GetServiceResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetServiceResponseBodyTags() = default;
};
class GetServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> alarmMetadata{};
  shared_ptr<string> approvalType{};
  shared_ptr<string> buildInfo{};
  shared_ptr<string> categories{};
  shared_ptr<GetServiceResponseBodyCommodity> commodity{};
  shared_ptr<GetServiceResponseBodyComplianceMetadata> complianceMetadata{};
  shared_ptr<string> createTime{};
  shared_ptr<string> crossRegionConnectionStatus{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<long> duration{};
  shared_ptr<map<string, string>> entitySource{};
  shared_ptr<bool> isSupportOperated{};
  shared_ptr<string> licenseMetadata{};
  shared_ptr<string> logMetadata{};
  shared_ptr<string> operationMetadata{};
  shared_ptr<string> payFromType{};
  shared_ptr<string> permission{};
  shared_ptr<string> policyNames{};
  shared_ptr<long> progress{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> registrationId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> resellable{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceAuditDocumentUrl{};
  shared_ptr<string> serviceDiscoverable{};
  shared_ptr<vector<GetServiceResponseBodyServiceDocumentInfos>> serviceDocumentInfos{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<GetServiceResponseBodyServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceProductUrl{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> shareType{};
  shared_ptr<string> shareTypeStatus{};
  shared_ptr<string> sourceServiceId{};
  shared_ptr<string> sourceServiceVersion{};
  shared_ptr<string> sourceSupplierName{};
  shared_ptr<GetServiceResponseBodyStatistic> statistic{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDetail{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<vector<GetServiceResponseBodyTags>> tags{};
  shared_ptr<string> tenantType{};
  shared_ptr<string> testStatus{};
  shared_ptr<long> trialDuration{};
  shared_ptr<string> trialType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> upgradeMetadata{};
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};
  shared_ptr<string> virtualInternetService{};
  shared_ptr<string> virtualInternetServiceId{};

  GetServiceResponseBody() {}

  explicit GetServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmMetadata) {
      res["AlarmMetadata"] = boost::any(*alarmMetadata);
    }
    if (approvalType) {
      res["ApprovalType"] = boost::any(*approvalType);
    }
    if (buildInfo) {
      res["BuildInfo"] = boost::any(*buildInfo);
    }
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (complianceMetadata) {
      res["ComplianceMetadata"] = complianceMetadata ? boost::any(complianceMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (crossRegionConnectionStatus) {
      res["CrossRegionConnectionStatus"] = boost::any(*crossRegionConnectionStatus);
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (entitySource) {
      res["EntitySource"] = boost::any(*entitySource);
    }
    if (isSupportOperated) {
      res["IsSupportOperated"] = boost::any(*isSupportOperated);
    }
    if (licenseMetadata) {
      res["LicenseMetadata"] = boost::any(*licenseMetadata);
    }
    if (logMetadata) {
      res["LogMetadata"] = boost::any(*logMetadata);
    }
    if (operationMetadata) {
      res["OperationMetadata"] = boost::any(*operationMetadata);
    }
    if (payFromType) {
      res["PayFromType"] = boost::any(*payFromType);
    }
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (registrationId) {
      res["RegistrationId"] = boost::any(*registrationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resellable) {
      res["Resellable"] = boost::any(*resellable);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceAuditDocumentUrl) {
      res["ServiceAuditDocumentUrl"] = boost::any(*serviceAuditDocumentUrl);
    }
    if (serviceDiscoverable) {
      res["ServiceDiscoverable"] = boost::any(*serviceDiscoverable);
    }
    if (serviceDocumentInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceDocumentInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceDocumentInfos"] = boost::any(temp1);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    if (serviceProductUrl) {
      res["ServiceProductUrl"] = boost::any(*serviceProductUrl);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (shareTypeStatus) {
      res["ShareTypeStatus"] = boost::any(*shareTypeStatus);
    }
    if (sourceServiceId) {
      res["SourceServiceId"] = boost::any(*sourceServiceId);
    }
    if (sourceServiceVersion) {
      res["SourceServiceVersion"] = boost::any(*sourceServiceVersion);
    }
    if (sourceSupplierName) {
      res["SourceSupplierName"] = boost::any(*sourceSupplierName);
    }
    if (statistic) {
      res["Statistic"] = statistic ? boost::any(statistic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantType) {
      res["TenantType"] = boost::any(*tenantType);
    }
    if (testStatus) {
      res["TestStatus"] = boost::any(*testStatus);
    }
    if (trialDuration) {
      res["TrialDuration"] = boost::any(*trialDuration);
    }
    if (trialType) {
      res["TrialType"] = boost::any(*trialType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (upgradeMetadata) {
      res["UpgradeMetadata"] = boost::any(*upgradeMetadata);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    if (virtualInternetService) {
      res["VirtualInternetService"] = boost::any(*virtualInternetService);
    }
    if (virtualInternetServiceId) {
      res["VirtualInternetServiceId"] = boost::any(*virtualInternetServiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmMetadata") != m.end() && !m["AlarmMetadata"].empty()) {
      alarmMetadata = make_shared<string>(boost::any_cast<string>(m["AlarmMetadata"]));
    }
    if (m.find("ApprovalType") != m.end() && !m["ApprovalType"].empty()) {
      approvalType = make_shared<string>(boost::any_cast<string>(m["ApprovalType"]));
    }
    if (m.find("BuildInfo") != m.end() && !m["BuildInfo"].empty()) {
      buildInfo = make_shared<string>(boost::any_cast<string>(m["BuildInfo"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      categories = make_shared<string>(boost::any_cast<string>(m["Categories"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        GetServiceResponseBodyCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<GetServiceResponseBodyCommodity>(model1);
      }
    }
    if (m.find("ComplianceMetadata") != m.end() && !m["ComplianceMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComplianceMetadata"].type()) {
        GetServiceResponseBodyComplianceMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComplianceMetadata"]));
        complianceMetadata = make_shared<GetServiceResponseBodyComplianceMetadata>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CrossRegionConnectionStatus") != m.end() && !m["CrossRegionConnectionStatus"].empty()) {
      crossRegionConnectionStatus = make_shared<string>(boost::any_cast<string>(m["CrossRegionConnectionStatus"]));
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EntitySource") != m.end() && !m["EntitySource"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EntitySource"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      entitySource = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("IsSupportOperated") != m.end() && !m["IsSupportOperated"].empty()) {
      isSupportOperated = make_shared<bool>(boost::any_cast<bool>(m["IsSupportOperated"]));
    }
    if (m.find("LicenseMetadata") != m.end() && !m["LicenseMetadata"].empty()) {
      licenseMetadata = make_shared<string>(boost::any_cast<string>(m["LicenseMetadata"]));
    }
    if (m.find("LogMetadata") != m.end() && !m["LogMetadata"].empty()) {
      logMetadata = make_shared<string>(boost::any_cast<string>(m["LogMetadata"]));
    }
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      operationMetadata = make_shared<string>(boost::any_cast<string>(m["OperationMetadata"]));
    }
    if (m.find("PayFromType") != m.end() && !m["PayFromType"].empty()) {
      payFromType = make_shared<string>(boost::any_cast<string>(m["PayFromType"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      policyNames = make_shared<string>(boost::any_cast<string>(m["PolicyNames"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("RegistrationId") != m.end() && !m["RegistrationId"].empty()) {
      registrationId = make_shared<string>(boost::any_cast<string>(m["RegistrationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resellable") != m.end() && !m["Resellable"].empty()) {
      resellable = make_shared<bool>(boost::any_cast<bool>(m["Resellable"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceAuditDocumentUrl") != m.end() && !m["ServiceAuditDocumentUrl"].empty()) {
      serviceAuditDocumentUrl = make_shared<string>(boost::any_cast<string>(m["ServiceAuditDocumentUrl"]));
    }
    if (m.find("ServiceDiscoverable") != m.end() && !m["ServiceDiscoverable"].empty()) {
      serviceDiscoverable = make_shared<string>(boost::any_cast<string>(m["ServiceDiscoverable"]));
    }
    if (m.find("ServiceDocumentInfos") != m.end() && !m["ServiceDocumentInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceDocumentInfos"].type()) {
        vector<GetServiceResponseBodyServiceDocumentInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceDocumentInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyServiceDocumentInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceDocumentInfos = make_shared<vector<GetServiceResponseBodyServiceDocumentInfos>>(expect1);
      }
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfos") != m.end() && !m["ServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfos"].type()) {
        vector<GetServiceResponseBodyServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfos = make_shared<vector<GetServiceResponseBodyServiceInfos>>(expect1);
      }
    }
    if (m.find("ServiceProductUrl") != m.end() && !m["ServiceProductUrl"].empty()) {
      serviceProductUrl = make_shared<string>(boost::any_cast<string>(m["ServiceProductUrl"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("ShareTypeStatus") != m.end() && !m["ShareTypeStatus"].empty()) {
      shareTypeStatus = make_shared<string>(boost::any_cast<string>(m["ShareTypeStatus"]));
    }
    if (m.find("SourceServiceId") != m.end() && !m["SourceServiceId"].empty()) {
      sourceServiceId = make_shared<string>(boost::any_cast<string>(m["SourceServiceId"]));
    }
    if (m.find("SourceServiceVersion") != m.end() && !m["SourceServiceVersion"].empty()) {
      sourceServiceVersion = make_shared<string>(boost::any_cast<string>(m["SourceServiceVersion"]));
    }
    if (m.find("SourceSupplierName") != m.end() && !m["SourceSupplierName"].empty()) {
      sourceSupplierName = make_shared<string>(boost::any_cast<string>(m["SourceSupplierName"]));
    }
    if (m.find("Statistic") != m.end() && !m["Statistic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Statistic"].type()) {
        GetServiceResponseBodyStatistic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Statistic"]));
        statistic = make_shared<GetServiceResponseBodyStatistic>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetServiceResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetServiceResponseBodyTags>>(expect1);
      }
    }
    if (m.find("TenantType") != m.end() && !m["TenantType"].empty()) {
      tenantType = make_shared<string>(boost::any_cast<string>(m["TenantType"]));
    }
    if (m.find("TestStatus") != m.end() && !m["TestStatus"].empty()) {
      testStatus = make_shared<string>(boost::any_cast<string>(m["TestStatus"]));
    }
    if (m.find("TrialDuration") != m.end() && !m["TrialDuration"].empty()) {
      trialDuration = make_shared<long>(boost::any_cast<long>(m["TrialDuration"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpgradeMetadata") != m.end() && !m["UpgradeMetadata"].empty()) {
      upgradeMetadata = make_shared<string>(boost::any_cast<string>(m["UpgradeMetadata"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
    if (m.find("VirtualInternetService") != m.end() && !m["VirtualInternetService"].empty()) {
      virtualInternetService = make_shared<string>(boost::any_cast<string>(m["VirtualInternetService"]));
    }
    if (m.find("VirtualInternetServiceId") != m.end() && !m["VirtualInternetServiceId"].empty()) {
      virtualInternetServiceId = make_shared<string>(boost::any_cast<string>(m["VirtualInternetServiceId"]));
    }
  }


  virtual ~GetServiceResponseBody() = default;
};
class GetServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceResponseBody> body{};

  GetServiceResponse() {}

  explicit GetServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceResponse() = default;
};
class GetServiceEstimateCostRequestCommodity : public Darabonba::Model {
public:
  shared_ptr<long> payPeriod{};
  shared_ptr<string> payPeriodUnit{};

  GetServiceEstimateCostRequestCommodity() {}

  explicit GetServiceEstimateCostRequestCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payPeriod) {
      res["PayPeriod"] = boost::any(*payPeriod);
    }
    if (payPeriodUnit) {
      res["PayPeriodUnit"] = boost::any(*payPeriodUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayPeriod") != m.end() && !m["PayPeriod"].empty()) {
      payPeriod = make_shared<long>(boost::any_cast<long>(m["PayPeriod"]));
    }
    if (m.find("PayPeriodUnit") != m.end() && !m["PayPeriodUnit"].empty()) {
      payPeriodUnit = make_shared<string>(boost::any_cast<string>(m["PayPeriodUnit"]));
    }
  }


  virtual ~GetServiceEstimateCostRequestCommodity() = default;
};
class GetServiceEstimateCostRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<GetServiceEstimateCostRequestCommodity> commodity{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> specificationName{};
  shared_ptr<string> templateName{};

  GetServiceEstimateCostRequest() {}

  explicit GetServiceEstimateCostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        GetServiceEstimateCostRequestCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<GetServiceEstimateCostRequestCommodity>(model1);
      }
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
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceEstimateCostRequest() = default;
};
class GetServiceEstimateCostShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> commodityShrink{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> specificationName{};
  shared_ptr<string> templateName{};

  GetServiceEstimateCostShrinkRequest() {}

  explicit GetServiceEstimateCostShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodityShrink) {
      res["Commodity"] = boost::any(*commodityShrink);
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      commodityShrink = make_shared<string>(boost::any_cast<string>(m["Commodity"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceEstimateCostShrinkRequest() = default;
};
class GetServiceEstimateCostResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> commodity{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> resources{};

  GetServiceEstimateCostResponseBody() {}

  explicit GetServiceEstimateCostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodity) {
      res["Commodity"] = boost::any(*commodity);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Commodity"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commodity = make_shared<map<string, boost::any>>(toMap1);
    }
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


  virtual ~GetServiceEstimateCostResponseBody() = default;
};
class GetServiceEstimateCostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceEstimateCostResponseBody> body{};

  GetServiceEstimateCostResponse() {}

  explicit GetServiceEstimateCostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceEstimateCostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceEstimateCostResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceEstimateCostResponse() = default;
};
class GetServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  GetServiceInstanceRequest() {}

  explicit GetServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~GetServiceInstanceRequest() = default;
};
class GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs : public Darabonba::Model {
public:
  shared_ptr<long> connectBandwidth{};
  shared_ptr<string> domainName{};
  shared_ptr<vector<string>> endpointIps{};
  shared_ptr<string> ingressEndpointStatus{};
  shared_ptr<string> networkServiceStatus{};
  shared_ptr<vector<string>> securityGroups{};
  shared_ptr<vector<string>> vSwitches{};
  shared_ptr<string> vpcId{};

  GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs() {}

  explicit GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectBandwidth) {
      res["ConnectBandwidth"] = boost::any(*connectBandwidth);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endpointIps) {
      res["EndpointIps"] = boost::any(*endpointIps);
    }
    if (ingressEndpointStatus) {
      res["IngressEndpointStatus"] = boost::any(*ingressEndpointStatus);
    }
    if (networkServiceStatus) {
      res["NetworkServiceStatus"] = boost::any(*networkServiceStatus);
    }
    if (securityGroups) {
      res["SecurityGroups"] = boost::any(*securityGroups);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectBandwidth") != m.end() && !m["ConnectBandwidth"].empty()) {
      connectBandwidth = make_shared<long>(boost::any_cast<long>(m["ConnectBandwidth"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndpointIps") != m.end() && !m["EndpointIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndpointIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndpointIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpointIps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IngressEndpointStatus") != m.end() && !m["IngressEndpointStatus"].empty()) {
      ingressEndpointStatus = make_shared<string>(boost::any_cast<string>(m["IngressEndpointStatus"]));
    }
    if (m.find("NetworkServiceStatus") != m.end() && !m["NetworkServiceStatus"].empty()) {
      networkServiceStatus = make_shared<string>(boost::any_cast<string>(m["NetworkServiceStatus"]));
    }
    if (m.find("SecurityGroups") != m.end() && !m["SecurityGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs() = default;
};
class GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs>> connectionConfigs{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointServiceId{};
  shared_ptr<string> privateZoneName{};

  GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections() {}

  explicit GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*connectionConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectionConfigs"] = boost::any(temp1);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointServiceId) {
      res["EndpointServiceId"] = boost::any(*endpointServiceId);
    }
    if (privateZoneName) {
      res["PrivateZoneName"] = boost::any(*privateZoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionConfigs") != m.end() && !m["ConnectionConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectionConfigs"].type()) {
        vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectionConfigs = make_shared<vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs>>(expect1);
      }
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointServiceId") != m.end() && !m["EndpointServiceId"].empty()) {
      endpointServiceId = make_shared<string>(boost::any_cast<string>(m["EndpointServiceId"]));
    }
    if (m.find("PrivateZoneName") != m.end() && !m["PrivateZoneName"].empty()) {
      privateZoneName = make_shared<string>(boost::any_cast<string>(m["PrivateZoneName"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections() = default;
};
class GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointServiceId{};

  GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections() {}

  explicit GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointServiceId) {
      res["EndpointServiceId"] = boost::any(*endpointServiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointServiceId") != m.end() && !m["EndpointServiceId"].empty()) {
      endpointServiceId = make_shared<string>(boost::any_cast<string>(m["EndpointServiceId"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections() = default;
};
class GetServiceInstanceResponseBodyNetworkConfig : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointServiceId{};
  shared_ptr<vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections>> privateVpcConnections{};
  shared_ptr<vector<GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections>> reversePrivateVpcConnections{};

  GetServiceInstanceResponseBodyNetworkConfig() {}

  explicit GetServiceInstanceResponseBodyNetworkConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointServiceId) {
      res["EndpointServiceId"] = boost::any(*endpointServiceId);
    }
    if (privateVpcConnections) {
      vector<boost::any> temp1;
      for(auto item1:*privateVpcConnections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PrivateVpcConnections"] = boost::any(temp1);
    }
    if (reversePrivateVpcConnections) {
      vector<boost::any> temp1;
      for(auto item1:*reversePrivateVpcConnections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReversePrivateVpcConnections"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointServiceId") != m.end() && !m["EndpointServiceId"].empty()) {
      endpointServiceId = make_shared<string>(boost::any_cast<string>(m["EndpointServiceId"]));
    }
    if (m.find("PrivateVpcConnections") != m.end() && !m["PrivateVpcConnections"].empty()) {
      if (typeid(vector<boost::any>) == m["PrivateVpcConnections"].type()) {
        vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PrivateVpcConnections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        privateVpcConnections = make_shared<vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections>>(expect1);
      }
    }
    if (m.find("ReversePrivateVpcConnections") != m.end() && !m["ReversePrivateVpcConnections"].empty()) {
      if (typeid(vector<boost::any>) == m["ReversePrivateVpcConnections"].type()) {
        vector<GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReversePrivateVpcConnections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reversePrivateVpcConnections = make_shared<vector<GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections>>(expect1);
      }
    }
  }


  virtual ~GetServiceInstanceResponseBodyNetworkConfig() = default;
};
class GetServiceInstanceResponseBodyServiceServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  GetServiceInstanceResponseBodyServiceServiceInfos() {}

  explicit GetServiceInstanceResponseBodyServiceServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyServiceServiceInfos() = default;
};
class GetServiceInstanceResponseBodyServiceUpgradableServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};

  GetServiceInstanceResponseBodyServiceUpgradableServiceInfos() {}

  explicit GetServiceInstanceResponseBodyServiceUpgradableServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyServiceUpgradableServiceInfos() = default;
};
class GetServiceInstanceResponseBodyService : public Darabonba::Model {
public:
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> serviceDocUrl{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<GetServiceInstanceResponseBodyServiceServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceProductUrl{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<vector<GetServiceInstanceResponseBodyServiceUpgradableServiceInfos>> upgradableServiceInfos{};
  shared_ptr<vector<string>> upgradableServiceVersions{};
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};

  GetServiceInstanceResponseBodyService() {}

  explicit GetServiceInstanceResponseBodyService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (serviceDocUrl) {
      res["ServiceDocUrl"] = boost::any(*serviceDocUrl);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    if (serviceProductUrl) {
      res["ServiceProductUrl"] = boost::any(*serviceProductUrl);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (upgradableServiceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*upgradableServiceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UpgradableServiceInfos"] = boost::any(temp1);
    }
    if (upgradableServiceVersions) {
      res["UpgradableServiceVersions"] = boost::any(*upgradableServiceVersions);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("ServiceDocUrl") != m.end() && !m["ServiceDocUrl"].empty()) {
      serviceDocUrl = make_shared<string>(boost::any_cast<string>(m["ServiceDocUrl"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfos") != m.end() && !m["ServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfos"].type()) {
        vector<GetServiceInstanceResponseBodyServiceServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyServiceServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfos = make_shared<vector<GetServiceInstanceResponseBodyServiceServiceInfos>>(expect1);
      }
    }
    if (m.find("ServiceProductUrl") != m.end() && !m["ServiceProductUrl"].empty()) {
      serviceProductUrl = make_shared<string>(boost::any_cast<string>(m["ServiceProductUrl"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("UpgradableServiceInfos") != m.end() && !m["UpgradableServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["UpgradableServiceInfos"].type()) {
        vector<GetServiceInstanceResponseBodyServiceUpgradableServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UpgradableServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyServiceUpgradableServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        upgradableServiceInfos = make_shared<vector<GetServiceInstanceResponseBodyServiceUpgradableServiceInfos>>(expect1);
      }
    }
    if (m.find("UpgradableServiceVersions") != m.end() && !m["UpgradableServiceVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UpgradableServiceVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UpgradableServiceVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      upgradableServiceVersions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyService() = default;
};
class GetServiceInstanceResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetServiceInstanceResponseBodyTags() {}

  explicit GetServiceInstanceResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetServiceInstanceResponseBodyTags() = default;
};
class GetServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bizStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> enableInstanceOps{};
  shared_ptr<bool> enableUserPrometheus{};
  shared_ptr<string> endTime{};
  shared_ptr<string> grafanaDashBoardUrl{};
  shared_ptr<bool> isOperated{};
  shared_ptr<string> licenseMetadata{};
  shared_ptr<string> name{};
  shared_ptr<GetServiceInstanceResponseBodyNetworkConfig> networkConfig{};
  shared_ptr<string> operatedServiceInstanceId{};
  shared_ptr<string> operationEndTime{};
  shared_ptr<string> operationExtraInfo{};
  shared_ptr<string> operationStartTime{};
  shared_ptr<string> outputs{};
  shared_ptr<string> parameters{};
  shared_ptr<string> payType{};
  shared_ptr<string> predefinedParameterName{};
  shared_ptr<long> progress{};
  shared_ptr<string> rdAccountLoginUrl{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resources{};
  shared_ptr<GetServiceInstanceResponseBodyService> service{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDetail{};
  shared_ptr<long> supplierUid{};
  shared_ptr<vector<GetServiceInstanceResponseBodyTags>> tags{};
  shared_ptr<string> templateName{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> userId{};

  GetServiceInstanceResponseBody() {}

  explicit GetServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizStatus) {
      res["BizStatus"] = boost::any(*bizStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (enableInstanceOps) {
      res["EnableInstanceOps"] = boost::any(*enableInstanceOps);
    }
    if (enableUserPrometheus) {
      res["EnableUserPrometheus"] = boost::any(*enableUserPrometheus);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (grafanaDashBoardUrl) {
      res["GrafanaDashBoardUrl"] = boost::any(*grafanaDashBoardUrl);
    }
    if (isOperated) {
      res["IsOperated"] = boost::any(*isOperated);
    }
    if (licenseMetadata) {
      res["LicenseMetadata"] = boost::any(*licenseMetadata);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (networkConfig) {
      res["NetworkConfig"] = networkConfig ? boost::any(networkConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operatedServiceInstanceId) {
      res["OperatedServiceInstanceId"] = boost::any(*operatedServiceInstanceId);
    }
    if (operationEndTime) {
      res["OperationEndTime"] = boost::any(*operationEndTime);
    }
    if (operationExtraInfo) {
      res["OperationExtraInfo"] = boost::any(*operationExtraInfo);
    }
    if (operationStartTime) {
      res["OperationStartTime"] = boost::any(*operationStartTime);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (predefinedParameterName) {
      res["PredefinedParameterName"] = boost::any(*predefinedParameterName);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (rdAccountLoginUrl) {
      res["RdAccountLoginUrl"] = boost::any(*rdAccountLoginUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (service) {
      res["Service"] = service ? boost::any(service->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (supplierUid) {
      res["SupplierUid"] = boost::any(*supplierUid);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizStatus") != m.end() && !m["BizStatus"].empty()) {
      bizStatus = make_shared<string>(boost::any_cast<string>(m["BizStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EnableInstanceOps") != m.end() && !m["EnableInstanceOps"].empty()) {
      enableInstanceOps = make_shared<bool>(boost::any_cast<bool>(m["EnableInstanceOps"]));
    }
    if (m.find("EnableUserPrometheus") != m.end() && !m["EnableUserPrometheus"].empty()) {
      enableUserPrometheus = make_shared<bool>(boost::any_cast<bool>(m["EnableUserPrometheus"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("GrafanaDashBoardUrl") != m.end() && !m["GrafanaDashBoardUrl"].empty()) {
      grafanaDashBoardUrl = make_shared<string>(boost::any_cast<string>(m["GrafanaDashBoardUrl"]));
    }
    if (m.find("IsOperated") != m.end() && !m["IsOperated"].empty()) {
      isOperated = make_shared<bool>(boost::any_cast<bool>(m["IsOperated"]));
    }
    if (m.find("LicenseMetadata") != m.end() && !m["LicenseMetadata"].empty()) {
      licenseMetadata = make_shared<string>(boost::any_cast<string>(m["LicenseMetadata"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetworkConfig") != m.end() && !m["NetworkConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkConfig"].type()) {
        GetServiceInstanceResponseBodyNetworkConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkConfig"]));
        networkConfig = make_shared<GetServiceInstanceResponseBodyNetworkConfig>(model1);
      }
    }
    if (m.find("OperatedServiceInstanceId") != m.end() && !m["OperatedServiceInstanceId"].empty()) {
      operatedServiceInstanceId = make_shared<string>(boost::any_cast<string>(m["OperatedServiceInstanceId"]));
    }
    if (m.find("OperationEndTime") != m.end() && !m["OperationEndTime"].empty()) {
      operationEndTime = make_shared<string>(boost::any_cast<string>(m["OperationEndTime"]));
    }
    if (m.find("OperationExtraInfo") != m.end() && !m["OperationExtraInfo"].empty()) {
      operationExtraInfo = make_shared<string>(boost::any_cast<string>(m["OperationExtraInfo"]));
    }
    if (m.find("OperationStartTime") != m.end() && !m["OperationStartTime"].empty()) {
      operationStartTime = make_shared<string>(boost::any_cast<string>(m["OperationStartTime"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PredefinedParameterName") != m.end() && !m["PredefinedParameterName"].empty()) {
      predefinedParameterName = make_shared<string>(boost::any_cast<string>(m["PredefinedParameterName"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RdAccountLoginUrl") != m.end() && !m["RdAccountLoginUrl"].empty()) {
      rdAccountLoginUrl = make_shared<string>(boost::any_cast<string>(m["RdAccountLoginUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      if (typeid(map<string, boost::any>) == m["Service"].type()) {
        GetServiceInstanceResponseBodyService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Service"]));
        service = make_shared<GetServiceInstanceResponseBodyService>(model1);
      }
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("SupplierUid") != m.end() && !m["SupplierUid"].empty()) {
      supplierUid = make_shared<long>(boost::any_cast<long>(m["SupplierUid"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetServiceInstanceResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetServiceInstanceResponseBodyTags>>(expect1);
      }
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~GetServiceInstanceResponseBody() = default;
};
class GetServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceInstanceResponseBody> body{};

  GetServiceInstanceResponse() {}

  explicit GetServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceInstanceResponse() = default;
};
class GetServiceProvisionsRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> templateName{};

  GetServiceProvisionsRequest() {}

  explicit GetServiceProvisionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceProvisionsRequest() = default;
};
class GetServiceProvisionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> templateName{};

  GetServiceProvisionsShrinkRequest() {}

  explicit GetServiceProvisionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceProvisionsShrinkRequest() = default;
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class GetServiceTemplateParameterConstraintsRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetServiceTemplateParameterConstraintsRequestParameters() {}

  explicit GetServiceTemplateParameterConstraintsRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetServiceTemplateParameterConstraintsRequestParameters() = default;
};
class GetServiceTemplateParameterConstraintsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> deployRegionId{};
  shared_ptr<bool> enablePrivateVpcConnection{};
  shared_ptr<vector<GetServiceTemplateParameterConstraintsRequestParameters>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> templateName{};

  GetServiceTemplateParameterConstraintsRequest() {}

  explicit GetServiceTemplateParameterConstraintsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deployRegionId) {
      res["DeployRegionId"] = boost::any(*deployRegionId);
    }
    if (enablePrivateVpcConnection) {
      res["EnablePrivateVpcConnection"] = boost::any(*enablePrivateVpcConnection);
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
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeployRegionId") != m.end() && !m["DeployRegionId"].empty()) {
      deployRegionId = make_shared<string>(boost::any_cast<string>(m["DeployRegionId"]));
    }
    if (m.find("EnablePrivateVpcConnection") != m.end() && !m["EnablePrivateVpcConnection"].empty()) {
      enablePrivateVpcConnection = make_shared<bool>(boost::any_cast<bool>(m["EnablePrivateVpcConnection"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetServiceTemplateParameterConstraintsRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceTemplateParameterConstraintsRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetServiceTemplateParameterConstraintsRequestParameters>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~GetServiceTemplateParameterConstraintsRequest() = default;
};
class GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints : public Darabonba::Model {
public:
  shared_ptr<vector<string>> allowedValues{};
  shared_ptr<string> propertyName{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints() {}

  explicit GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedValues) {
      res["AllowedValues"] = boost::any(*allowedValues);
    }
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
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
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints() = default;
};
class GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints : public Darabonba::Model {
public:
  shared_ptr<vector<string>> allowedValues{};
  shared_ptr<vector<string>> associationParameterNames{};
  shared_ptr<string> behavior{};
  shared_ptr<string> behaviorReason{};
  shared_ptr<vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints>> originalConstraints{};
  shared_ptr<string> parameterKey{};
  shared_ptr<string> type{};

  GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints() {}

  explicit GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (originalConstraints) {
      vector<boost::any> temp1;
      for(auto item1:*originalConstraints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OriginalConstraints"] = boost::any(temp1);
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
    if (m.find("OriginalConstraints") != m.end() && !m["OriginalConstraints"].empty()) {
      if (typeid(vector<boost::any>) == m["OriginalConstraints"].type()) {
        vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OriginalConstraints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        originalConstraints = make_shared<vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints>>(expect1);
      }
    }
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints() = default;
};
class GetServiceTemplateParameterConstraintsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> familyConstraints{};
  shared_ptr<vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints>> parameterConstraints{};
  shared_ptr<string> requestId{};

  GetServiceTemplateParameterConstraintsResponseBody() {}

  explicit GetServiceTemplateParameterConstraintsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (familyConstraints) {
      res["FamilyConstraints"] = boost::any(*familyConstraints);
    }
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
    if (m.find("FamilyConstraints") != m.end() && !m["FamilyConstraints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FamilyConstraints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FamilyConstraints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      familyConstraints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ParameterConstraints") != m.end() && !m["ParameterConstraints"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterConstraints"].type()) {
        vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterConstraints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterConstraints = make_shared<vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetServiceTemplateParameterConstraintsResponseBody() = default;
};
class GetServiceTemplateParameterConstraintsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceTemplateParameterConstraintsResponseBody> body{};

  GetServiceTemplateParameterConstraintsResponse() {}

  explicit GetServiceTemplateParameterConstraintsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceTemplateParameterConstraintsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceTemplateParameterConstraintsResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceTemplateParameterConstraintsResponse() = default;
};
class GetUploadCredentialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> visibility{};

  GetUploadCredentialsRequest() {}

  explicit GetUploadCredentialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~GetUploadCredentialsRequest() = default;
};
class GetUploadCredentialsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> key{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityToken{};

  GetUploadCredentialsResponseBodyData() {}

  explicit GetUploadCredentialsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetUploadCredentialsResponseBodyData() = default;
};
class GetUploadCredentialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetUploadCredentialsResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetUploadCredentialsResponseBody() {}

  explicit GetUploadCredentialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUploadCredentialsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetUploadCredentialsResponseBodyData>(model1);
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


  virtual ~GetUploadCredentialsResponseBody() = default;
};
class GetUploadCredentialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUploadCredentialsResponseBody> body{};

  GetUploadCredentialsResponse() {}

  explicit GetUploadCredentialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUploadCredentialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUploadCredentialsResponseBody>(model1);
      }
    }
  }


  virtual ~GetUploadCredentialsResponse() = default;
};
class LaunchServiceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> recommend{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};

  LaunchServiceRequest() {}

  explicit LaunchServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (recommend) {
      res["Recommend"] = boost::any(*recommend);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Recommend") != m.end() && !m["Recommend"].empty()) {
      recommend = make_shared<bool>(boost::any_cast<bool>(m["Recommend"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~LaunchServiceRequest() = default;
};
class LaunchServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceLaunchResultType{};
  shared_ptr<string> version{};

  LaunchServiceResponseBody() {}

  explicit LaunchServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceLaunchResultType) {
      res["ServiceLaunchResultType"] = boost::any(*serviceLaunchResultType);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceLaunchResultType") != m.end() && !m["ServiceLaunchResultType"].empty()) {
      serviceLaunchResultType = make_shared<string>(boost::any_cast<string>(m["ServiceLaunchResultType"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~LaunchServiceResponseBody() = default;
};
class LaunchServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LaunchServiceResponseBody> body{};

  LaunchServiceResponse() {}

  explicit LaunchServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LaunchServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LaunchServiceResponseBody>(model1);
      }
    }
  }


  virtual ~LaunchServiceResponse() = default;
};
class ListAcrImageRepositoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> repoName{};

  ListAcrImageRepositoriesRequest() {}

  explicit ListAcrImageRepositoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
  }


  virtual ~ListAcrImageRepositoriesRequest() = default;
};
class ListAcrImageRepositoriesResponseBodyRepositories : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> repoId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoType{};

  ListAcrImageRepositoriesResponseBodyRepositories() {}

  explicit ListAcrImageRepositoriesResponseBodyRepositories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
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
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
  }


  virtual ~ListAcrImageRepositoriesResponseBodyRepositories() = default;
};
class ListAcrImageRepositoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListAcrImageRepositoriesResponseBodyRepositories>> repositories{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAcrImageRepositoriesResponseBody() {}

  explicit ListAcrImageRepositoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Repositories") != m.end() && !m["Repositories"].empty()) {
      if (typeid(vector<boost::any>) == m["Repositories"].type()) {
        vector<ListAcrImageRepositoriesResponseBodyRepositories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Repositories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAcrImageRepositoriesResponseBodyRepositories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        repositories = make_shared<vector<ListAcrImageRepositoriesResponseBodyRepositories>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAcrImageRepositoriesResponseBody() = default;
};
class ListAcrImageRepositoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAcrImageRepositoriesResponseBody> body{};

  ListAcrImageRepositoriesResponse() {}

  explicit ListAcrImageRepositoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAcrImageRepositoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAcrImageRepositoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAcrImageRepositoriesResponse() = default;
};
class ListAcrImageTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> repoId{};

  ListAcrImageTagsRequest() {}

  explicit ListAcrImageTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
  }


  virtual ~ListAcrImageTagsRequest() = default;
};
class ListAcrImageTagsResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> imageSize{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> tag{};

  ListAcrImageTagsResponseBodyImages() {}

  explicit ListAcrImageTagsResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (imageSize) {
      res["ImageSize"] = boost::any(*imageSize);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ImageSize") != m.end() && !m["ImageSize"].empty()) {
      imageSize = make_shared<string>(boost::any_cast<string>(m["ImageSize"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ListAcrImageTagsResponseBodyImages() = default;
};
class ListAcrImageTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAcrImageTagsResponseBodyImages>> images{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAcrImageTagsResponseBody() {}

  explicit ListAcrImageTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
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
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<ListAcrImageTagsResponseBodyImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAcrImageTagsResponseBodyImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<ListAcrImageTagsResponseBodyImages>>(expect1);
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


  virtual ~ListAcrImageTagsResponseBody() = default;
};
class ListAcrImageTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAcrImageTagsResponseBody> body{};

  ListAcrImageTagsResponse() {}

  explicit ListAcrImageTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAcrImageTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAcrImageTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAcrImageTagsResponse() = default;
};
class ListArtifactVersionsRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> values{};

  ListArtifactVersionsRequestFilters() {}

  explicit ListArtifactVersionsRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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


  virtual ~ListArtifactVersionsRequestFilters() = default;
};
class ListArtifactVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<vector<ListArtifactVersionsRequestFilters>> filters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListArtifactVersionsRequest() {}

  explicit ListArtifactVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<ListArtifactVersionsRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactVersionsRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<ListArtifactVersionsRequestFilters>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListArtifactVersionsRequest() = default;
};
class ListArtifactVersionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> filtersShrink{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListArtifactVersionsShrinkRequest() {}

  explicit ListArtifactVersionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (filtersShrink) {
      res["Filters"] = boost::any(*filtersShrink);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filtersShrink = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListArtifactVersionsShrinkRequest() = default;
};
class ListArtifactVersionsResponseBodyArtifacts : public Darabonba::Model {
public:
  shared_ptr<string> artifactBuildProperty{};
  shared_ptr<string> artifactBuildType{};
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactProperty{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<map<string, string>> imageDelivery{};
  shared_ptr<string> progress{};
  shared_ptr<string> resultFile{};
  shared_ptr<string> securityAuditResult{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDetail{};
  shared_ptr<string> supportRegionIds{};
  shared_ptr<string> versionName{};

  ListArtifactVersionsResponseBodyArtifacts() {}

  explicit ListArtifactVersionsResponseBodyArtifacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactBuildProperty) {
      res["ArtifactBuildProperty"] = boost::any(*artifactBuildProperty);
    }
    if (artifactBuildType) {
      res["ArtifactBuildType"] = boost::any(*artifactBuildType);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = boost::any(*artifactProperty);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (imageDelivery) {
      res["ImageDelivery"] = boost::any(*imageDelivery);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (resultFile) {
      res["ResultFile"] = boost::any(*resultFile);
    }
    if (securityAuditResult) {
      res["SecurityAuditResult"] = boost::any(*securityAuditResult);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactBuildProperty") != m.end() && !m["ArtifactBuildProperty"].empty()) {
      artifactBuildProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildProperty"]));
    }
    if (m.find("ArtifactBuildType") != m.end() && !m["ArtifactBuildType"].empty()) {
      artifactBuildType = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildType"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("ImageDelivery") != m.end() && !m["ImageDelivery"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ImageDelivery"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      imageDelivery = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("ResultFile") != m.end() && !m["ResultFile"].empty()) {
      resultFile = make_shared<string>(boost::any_cast<string>(m["ResultFile"]));
    }
    if (m.find("SecurityAuditResult") != m.end() && !m["SecurityAuditResult"].empty()) {
      securityAuditResult = make_shared<string>(boost::any_cast<string>(m["SecurityAuditResult"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      supportRegionIds = make_shared<string>(boost::any_cast<string>(m["SupportRegionIds"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ListArtifactVersionsResponseBodyArtifacts() = default;
};
class ListArtifactVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListArtifactVersionsResponseBodyArtifacts>> artifacts{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListArtifactVersionsResponseBody() {}

  explicit ListArtifactVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifacts) {
      vector<boost::any> temp1;
      for(auto item1:*artifacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Artifacts"] = boost::any(temp1);
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
    if (m.find("Artifacts") != m.end() && !m["Artifacts"].empty()) {
      if (typeid(vector<boost::any>) == m["Artifacts"].type()) {
        vector<ListArtifactVersionsResponseBodyArtifacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Artifacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactVersionsResponseBodyArtifacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        artifacts = make_shared<vector<ListArtifactVersionsResponseBodyArtifacts>>(expect1);
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


  virtual ~ListArtifactVersionsResponseBody() = default;
};
class ListArtifactVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListArtifactVersionsResponseBody> body{};

  ListArtifactVersionsResponse() {}

  explicit ListArtifactVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListArtifactVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListArtifactVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListArtifactVersionsResponse() = default;
};
class ListArtifactsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> values{};

  ListArtifactsRequestFilter() {}

  explicit ListArtifactsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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


  virtual ~ListArtifactsRequestFilter() = default;
};
class ListArtifactsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListArtifactsRequestTag() {}

  explicit ListArtifactsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListArtifactsRequestTag() = default;
};
class ListArtifactsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListArtifactsRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListArtifactsRequestTag>> tag{};

  ListArtifactsRequest() {}

  explicit ListArtifactsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListArtifactsRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactsRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListArtifactsRequestFilter>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListArtifactsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListArtifactsRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListArtifactsRequest() = default;
};
class ListArtifactsResponseBodyArtifactsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListArtifactsResponseBodyArtifactsTags() {}

  explicit ListArtifactsResponseBodyArtifactsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListArtifactsResponseBodyArtifactsTags() = default;
};
class ListArtifactsResponseBodyArtifacts : public Darabonba::Model {
public:
  shared_ptr<string> artifactBuildProperty{};
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> maxVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListArtifactsResponseBodyArtifactsTags>> tags{};

  ListArtifactsResponseBodyArtifacts() {}

  explicit ListArtifactsResponseBodyArtifacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactBuildProperty) {
      res["ArtifactBuildProperty"] = boost::any(*artifactBuildProperty);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (maxVersion) {
      res["MaxVersion"] = boost::any(*maxVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("ArtifactBuildProperty") != m.end() && !m["ArtifactBuildProperty"].empty()) {
      artifactBuildProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildProperty"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MaxVersion") != m.end() && !m["MaxVersion"].empty()) {
      maxVersion = make_shared<string>(boost::any_cast<string>(m["MaxVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListArtifactsResponseBodyArtifactsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactsResponseBodyArtifactsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListArtifactsResponseBodyArtifactsTags>>(expect1);
      }
    }
  }


  virtual ~ListArtifactsResponseBodyArtifacts() = default;
};
class ListArtifactsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListArtifactsResponseBodyArtifacts>> artifacts{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListArtifactsResponseBody() {}

  explicit ListArtifactsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifacts) {
      vector<boost::any> temp1;
      for(auto item1:*artifacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Artifacts"] = boost::any(temp1);
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
    if (m.find("Artifacts") != m.end() && !m["Artifacts"].empty()) {
      if (typeid(vector<boost::any>) == m["Artifacts"].type()) {
        vector<ListArtifactsResponseBodyArtifacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Artifacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactsResponseBodyArtifacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        artifacts = make_shared<vector<ListArtifactsResponseBodyArtifacts>>(expect1);
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


  virtual ~ListArtifactsResponseBody() = default;
};
class ListArtifactsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListArtifactsResponseBody> body{};

  ListArtifactsResponse() {}

  explicit ListArtifactsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListArtifactsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListArtifactsResponseBody>(model1);
      }
    }
  }


  virtual ~ListArtifactsResponse() = default;
};
class ListServiceInstanceDeployDetailsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> value{};

  ListServiceInstanceDeployDetailsRequestFilter() {}

  explicit ListServiceInstanceDeployDetailsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
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


  virtual ~ListServiceInstanceDeployDetailsRequestFilter() = default;
};
class ListServiceInstanceDeployDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cycleTimeZone{};
  shared_ptr<string> cycleType{};
  shared_ptr<vector<string>> dimension{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<ListServiceInstanceDeployDetailsRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  ListServiceInstanceDeployDetailsRequest() {}

  explicit ListServiceInstanceDeployDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cycleTimeZone) {
      res["CycleTimeZone"] = boost::any(*cycleTimeZone);
    }
    if (cycleType) {
      res["CycleType"] = boost::any(*cycleType);
    }
    if (dimension) {
      res["Dimension"] = boost::any(*dimension);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CycleTimeZone") != m.end() && !m["CycleTimeZone"].empty()) {
      cycleTimeZone = make_shared<string>(boost::any_cast<string>(m["CycleTimeZone"]));
    }
    if (m.find("CycleType") != m.end() && !m["CycleType"].empty()) {
      cycleType = make_shared<string>(boost::any_cast<string>(m["CycleType"]));
    }
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Dimension"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Dimension"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dimension = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServiceInstanceDeployDetailsRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstanceDeployDetailsRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServiceInstanceDeployDetailsRequestFilter>>(expect1);
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListServiceInstanceDeployDetailsRequest() = default;
};
class ListServiceInstanceDeployDetailsResponseBodyDeployDetails : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> createTime{};
  shared_ptr<string> cycle{};
  shared_ptr<string> deploySucceeded{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorDetail{};
  shared_ptr<string> errorType{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceNameChn{};
  shared_ptr<string> serviceNameEng{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> timestamp{};
  shared_ptr<string> userId{};

  ListServiceInstanceDeployDetailsResponseBodyDeployDetails() {}

  explicit ListServiceInstanceDeployDetailsResponseBodyDeployDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (cycle) {
      res["Cycle"] = boost::any(*cycle);
    }
    if (deploySucceeded) {
      res["DeploySucceeded"] = boost::any(*deploySucceeded);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorDetail) {
      res["ErrorDetail"] = boost::any(*errorDetail);
    }
    if (errorType) {
      res["ErrorType"] = boost::any(*errorType);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceNameChn) {
      res["ServiceNameChn"] = boost::any(*serviceNameChn);
    }
    if (serviceNameEng) {
      res["ServiceNameEng"] = boost::any(*serviceNameEng);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Cycle") != m.end() && !m["Cycle"].empty()) {
      cycle = make_shared<string>(boost::any_cast<string>(m["Cycle"]));
    }
    if (m.find("DeploySucceeded") != m.end() && !m["DeploySucceeded"].empty()) {
      deploySucceeded = make_shared<string>(boost::any_cast<string>(m["DeploySucceeded"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorDetail") != m.end() && !m["ErrorDetail"].empty()) {
      errorDetail = make_shared<string>(boost::any_cast<string>(m["ErrorDetail"]));
    }
    if (m.find("ErrorType") != m.end() && !m["ErrorType"].empty()) {
      errorType = make_shared<string>(boost::any_cast<string>(m["ErrorType"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceNameChn") != m.end() && !m["ServiceNameChn"].empty()) {
      serviceNameChn = make_shared<string>(boost::any_cast<string>(m["ServiceNameChn"]));
    }
    if (m.find("ServiceNameEng") != m.end() && !m["ServiceNameEng"].empty()) {
      serviceNameEng = make_shared<string>(boost::any_cast<string>(m["ServiceNameEng"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListServiceInstanceDeployDetailsResponseBodyDeployDetails() = default;
};
class ListServiceInstanceDeployDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceInstanceDeployDetailsResponseBodyDeployDetails>> deployDetails{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListServiceInstanceDeployDetailsResponseBody() {}

  explicit ListServiceInstanceDeployDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployDetails) {
      vector<boost::any> temp1;
      for(auto item1:*deployDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeployDetails"] = boost::any(temp1);
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
    if (m.find("DeployDetails") != m.end() && !m["DeployDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["DeployDetails"].type()) {
        vector<ListServiceInstanceDeployDetailsResponseBodyDeployDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeployDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstanceDeployDetailsResponseBodyDeployDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deployDetails = make_shared<vector<ListServiceInstanceDeployDetailsResponseBodyDeployDetails>>(expect1);
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


  virtual ~ListServiceInstanceDeployDetailsResponseBody() = default;
};
class ListServiceInstanceDeployDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceInstanceDeployDetailsResponseBody> body{};

  ListServiceInstanceDeployDetailsResponse() {}

  explicit ListServiceInstanceDeployDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServiceInstanceDeployDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceInstanceDeployDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceInstanceDeployDetailsResponse() = default;
};
class ListServiceInstancesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> value{};

  ListServiceInstancesRequestFilter() {}

  explicit ListServiceInstancesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
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


  virtual ~ListServiceInstancesRequestFilter() = default;
};
class ListServiceInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServiceInstancesRequestTag() {}

  explicit ListServiceInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceInstancesRequestTag() = default;
};
class ListServiceInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceInstancesRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> showDeleted{};
  shared_ptr<vector<ListServiceInstancesRequestTag>> tag{};

  ListServiceInstancesRequest() {}

  explicit ListServiceInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (showDeleted) {
      res["ShowDeleted"] = boost::any(*showDeleted);
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
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServiceInstancesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServiceInstancesRequestFilter>>(expect1);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShowDeleted") != m.end() && !m["ShowDeleted"].empty()) {
      showDeleted = make_shared<bool>(boost::any_cast<bool>(m["ShowDeleted"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListServiceInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListServiceInstancesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListServiceInstancesRequest() = default;
};
class ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos() {}

  explicit ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos() = default;
};
class ListServiceInstancesResponseBodyServiceInstancesService : public Darabonba::Model {
public:
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<bool> enablePrivateVpcConnection{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> sourceSupplierName{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};

  ListServiceInstancesResponseBodyServiceInstancesService() {}

  explicit ListServiceInstancesResponseBodyServiceInstancesService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (enablePrivateVpcConnection) {
      res["EnablePrivateVpcConnection"] = boost::any(*enablePrivateVpcConnection);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (sourceSupplierName) {
      res["SourceSupplierName"] = boost::any(*sourceSupplierName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("EnablePrivateVpcConnection") != m.end() && !m["EnablePrivateVpcConnection"].empty()) {
      enablePrivateVpcConnection = make_shared<bool>(boost::any_cast<bool>(m["EnablePrivateVpcConnection"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfos") != m.end() && !m["ServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfos"].type()) {
        vector<ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfos = make_shared<vector<ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos>>(expect1);
      }
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("SourceSupplierName") != m.end() && !m["SourceSupplierName"].empty()) {
      sourceSupplierName = make_shared<string>(boost::any_cast<string>(m["SourceSupplierName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ListServiceInstancesResponseBodyServiceInstancesService() = default;
};
class ListServiceInstancesResponseBodyServiceInstancesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServiceInstancesResponseBodyServiceInstancesTags() {}

  explicit ListServiceInstancesResponseBodyServiceInstancesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceInstancesResponseBodyServiceInstancesTags() = default;
};
class ListServiceInstancesResponseBodyServiceInstances : public Darabonba::Model {
public:
  shared_ptr<string> bizStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> enableInstanceOps{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> isOperated{};
  shared_ptr<string> name{};
  shared_ptr<string> operatedServiceInstanceId{};
  shared_ptr<string> operationEndTime{};
  shared_ptr<string> operationStartTime{};
  shared_ptr<string> parameters{};
  shared_ptr<string> payType{};
  shared_ptr<long> progress{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<ListServiceInstancesResponseBodyServiceInstancesService> service{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDetail{};
  shared_ptr<vector<ListServiceInstancesResponseBodyServiceInstancesTags>> tags{};
  shared_ptr<string> templateName{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> userId{};

  ListServiceInstancesResponseBodyServiceInstances() {}

  explicit ListServiceInstancesResponseBodyServiceInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizStatus) {
      res["BizStatus"] = boost::any(*bizStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (enableInstanceOps) {
      res["EnableInstanceOps"] = boost::any(*enableInstanceOps);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (isOperated) {
      res["IsOperated"] = boost::any(*isOperated);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operatedServiceInstanceId) {
      res["OperatedServiceInstanceId"] = boost::any(*operatedServiceInstanceId);
    }
    if (operationEndTime) {
      res["OperationEndTime"] = boost::any(*operationEndTime);
    }
    if (operationStartTime) {
      res["OperationStartTime"] = boost::any(*operationStartTime);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (service) {
      res["Service"] = service ? boost::any(service->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizStatus") != m.end() && !m["BizStatus"].empty()) {
      bizStatus = make_shared<string>(boost::any_cast<string>(m["BizStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EnableInstanceOps") != m.end() && !m["EnableInstanceOps"].empty()) {
      enableInstanceOps = make_shared<bool>(boost::any_cast<bool>(m["EnableInstanceOps"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IsOperated") != m.end() && !m["IsOperated"].empty()) {
      isOperated = make_shared<bool>(boost::any_cast<bool>(m["IsOperated"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperatedServiceInstanceId") != m.end() && !m["OperatedServiceInstanceId"].empty()) {
      operatedServiceInstanceId = make_shared<string>(boost::any_cast<string>(m["OperatedServiceInstanceId"]));
    }
    if (m.find("OperationEndTime") != m.end() && !m["OperationEndTime"].empty()) {
      operationEndTime = make_shared<string>(boost::any_cast<string>(m["OperationEndTime"]));
    }
    if (m.find("OperationStartTime") != m.end() && !m["OperationStartTime"].empty()) {
      operationStartTime = make_shared<string>(boost::any_cast<string>(m["OperationStartTime"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      if (typeid(map<string, boost::any>) == m["Service"].type()) {
        ListServiceInstancesResponseBodyServiceInstancesService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Service"]));
        service = make_shared<ListServiceInstancesResponseBodyServiceInstancesService>(model1);
      }
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListServiceInstancesResponseBodyServiceInstancesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesResponseBodyServiceInstancesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListServiceInstancesResponseBodyServiceInstancesTags>>(expect1);
      }
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~ListServiceInstancesResponseBodyServiceInstances() = default;
};
class ListServiceInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceInstancesResponseBodyServiceInstances>> serviceInstances{};
  shared_ptr<long> totalCount{};

  ListServiceInstancesResponseBody() {}

  explicit ListServiceInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceInstances) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInstances"] = boost::any(temp1);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceInstances") != m.end() && !m["ServiceInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInstances"].type()) {
        vector<ListServiceInstancesResponseBodyServiceInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesResponseBodyServiceInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInstances = make_shared<vector<ListServiceInstancesResponseBodyServiceInstances>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServiceInstancesResponseBody() = default;
};
class ListServiceInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceInstancesResponseBody> body{};

  ListServiceInstancesResponse() {}

  explicit ListServiceInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServiceInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceInstancesResponse() = default;
};
class ListServiceSharedAccountsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> value{};

  ListServiceSharedAccountsRequestFilter() {}

  explicit ListServiceSharedAccountsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
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


  virtual ~ListServiceSharedAccountsRequestFilter() = default;
};
class ListServiceSharedAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceSharedAccountsRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> permission{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};

  ListServiceSharedAccountsRequest() {}

  explicit ListServiceSharedAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServiceSharedAccountsRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceSharedAccountsRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServiceSharedAccountsRequestFilter>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~ListServiceSharedAccountsRequest() = default;
};
class ListServiceSharedAccountsResponseBodyShareAccount : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> logo{};
  shared_ptr<string> name{};
  shared_ptr<string> permission{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userAliUid{};

  ListServiceSharedAccountsResponseBodyShareAccount() {}

  explicit ListServiceSharedAccountsResponseBodyShareAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (logo) {
      res["Logo"] = boost::any(*logo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userAliUid) {
      res["UserAliUid"] = boost::any(*userAliUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Logo") != m.end() && !m["Logo"].empty()) {
      logo = make_shared<string>(boost::any_cast<string>(m["Logo"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserAliUid") != m.end() && !m["UserAliUid"].empty()) {
      userAliUid = make_shared<string>(boost::any_cast<string>(m["UserAliUid"]));
    }
  }


  virtual ~ListServiceSharedAccountsResponseBodyShareAccount() = default;
};
class ListServiceSharedAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceSharedAccountsResponseBodyShareAccount>> shareAccount{};
  shared_ptr<long> totalCount{};

  ListServiceSharedAccountsResponseBody() {}

  explicit ListServiceSharedAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (shareAccount) {
      vector<boost::any> temp1;
      for(auto item1:*shareAccount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShareAccount"] = boost::any(temp1);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShareAccount") != m.end() && !m["ShareAccount"].empty()) {
      if (typeid(vector<boost::any>) == m["ShareAccount"].type()) {
        vector<ListServiceSharedAccountsResponseBodyShareAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShareAccount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceSharedAccountsResponseBodyShareAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shareAccount = make_shared<vector<ListServiceSharedAccountsResponseBodyShareAccount>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServiceSharedAccountsResponseBody() = default;
};
class ListServiceSharedAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceSharedAccountsResponseBody> body{};

  ListServiceSharedAccountsResponse() {}

  explicit ListServiceSharedAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServiceSharedAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceSharedAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceSharedAccountsResponse() = default;
};
class ListServiceUsagesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> value{};

  ListServiceUsagesRequestFilter() {}

  explicit ListServiceUsagesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
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


  virtual ~ListServiceUsagesRequestFilter() = default;
};
class ListServiceUsagesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceUsagesRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> supplierRole{};

  ListServiceUsagesRequest() {}

  explicit ListServiceUsagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (supplierRole) {
      res["SupplierRole"] = boost::any(*supplierRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServiceUsagesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceUsagesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServiceUsagesRequestFilter>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("SupplierRole") != m.end() && !m["SupplierRole"].empty()) {
      supplierRole = make_shared<string>(boost::any_cast<string>(m["SupplierRole"]));
    }
  }


  virtual ~ListServiceUsagesRequest() = default;
};
class ListServiceUsagesResponseBodyServiceUsages : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createTime{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> userAliUid{};
  shared_ptr<map<string, string>> userInformation{};

  ListServiceUsagesResponseBodyServiceUsages() {}

  explicit ListServiceUsagesResponseBodyServiceUsages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userAliUid) {
      res["UserAliUid"] = boost::any(*userAliUid);
    }
    if (userInformation) {
      res["UserInformation"] = boost::any(*userInformation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserAliUid") != m.end() && !m["UserAliUid"].empty()) {
      userAliUid = make_shared<long>(boost::any_cast<long>(m["UserAliUid"]));
    }
    if (m.find("UserInformation") != m.end() && !m["UserInformation"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["UserInformation"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userInformation = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~ListServiceUsagesResponseBodyServiceUsages() = default;
};
class ListServiceUsagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceUsagesResponseBodyServiceUsages>> serviceUsages{};
  shared_ptr<long> totalCount{};

  ListServiceUsagesResponseBody() {}

  explicit ListServiceUsagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceUsages) {
      vector<boost::any> temp1;
      for(auto item1:*serviceUsages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceUsages"] = boost::any(temp1);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceUsages") != m.end() && !m["ServiceUsages"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceUsages"].type()) {
        vector<ListServiceUsagesResponseBodyServiceUsages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceUsages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceUsagesResponseBodyServiceUsages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceUsages = make_shared<vector<ListServiceUsagesResponseBodyServiceUsages>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServiceUsagesResponseBody() = default;
};
class ListServiceUsagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceUsagesResponseBody> body{};

  ListServiceUsagesResponse() {}

  explicit ListServiceUsagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServiceUsagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceUsagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceUsagesResponse() = default;
};
class ListServicesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> value{};

  ListServicesRequestFilter() {}

  explicit ListServicesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
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


  virtual ~ListServicesRequestFilter() = default;
};
class ListServicesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServicesRequestTag() {}

  explicit ListServicesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServicesRequestTag() = default;
};
class ListServicesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allVersions{};
  shared_ptr<vector<ListServicesRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListServicesRequestTag>> tag{};

  ListServicesRequest() {}

  explicit ListServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allVersions) {
      res["AllVersions"] = boost::any(*allVersions);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("AllVersions") != m.end() && !m["AllVersions"].empty()) {
      allVersions = make_shared<bool>(boost::any_cast<bool>(m["AllVersions"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServicesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServicesRequestFilter>>(expect1);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListServicesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListServicesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListServicesRequest() = default;
};
class ListServicesResponseBodyServicesCommodity : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> saasBoostMetadata{};
  shared_ptr<string> type{};

  ListServicesResponseBodyServicesCommodity() {}

  explicit ListServicesResponseBodyServicesCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (saasBoostMetadata) {
      res["SaasBoostMetadata"] = boost::any(*saasBoostMetadata);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("SaasBoostMetadata") != m.end() && !m["SaasBoostMetadata"].empty()) {
      saasBoostMetadata = make_shared<string>(boost::any_cast<string>(m["SaasBoostMetadata"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListServicesResponseBodyServicesCommodity() = default;
};
class ListServicesResponseBodyServicesServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  ListServicesResponseBodyServicesServiceInfos() {}

  explicit ListServicesResponseBodyServicesServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~ListServicesResponseBodyServicesServiceInfos() = default;
};
class ListServicesResponseBodyServicesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServicesResponseBodyServicesTags() {}

  explicit ListServicesResponseBodyServicesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServicesResponseBodyServicesTags() = default;
};
class ListServicesResponseBodyServices : public Darabonba::Model {
public:
  shared_ptr<string> approvalType{};
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> buildInfo{};
  shared_ptr<string> categories{};
  shared_ptr<ListServicesResponseBodyServicesCommodity> commodity{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> defaultVersion{};
  shared_ptr<string> deployType{};
  shared_ptr<bool> hasBeta{};
  shared_ptr<bool> hasDraft{};
  shared_ptr<string> latestResellSourceServiceVersion{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> relationType{};
  shared_ptr<string> resellApplyStatus{};
  shared_ptr<string> resellServiceId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceDiscoverable{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<ListServicesResponseBodyServicesServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> shareType{};
  shared_ptr<string> sourceImage{};
  shared_ptr<string> sourceServiceId{};
  shared_ptr<string> sourceServiceVersion{};
  shared_ptr<string> sourceSupplierName{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<vector<ListServicesResponseBodyServicesTags>> tags{};
  shared_ptr<string> tenantType{};
  shared_ptr<string> trialType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};
  shared_ptr<string> virtualInternetService{};

  ListServicesResponseBodyServices() {}

  explicit ListServicesResponseBodyServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalType) {
      res["ApprovalType"] = boost::any(*approvalType);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (buildInfo) {
      res["BuildInfo"] = boost::any(*buildInfo);
    }
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (hasBeta) {
      res["HasBeta"] = boost::any(*hasBeta);
    }
    if (hasDraft) {
      res["HasDraft"] = boost::any(*hasDraft);
    }
    if (latestResellSourceServiceVersion) {
      res["LatestResellSourceServiceVersion"] = boost::any(*latestResellSourceServiceVersion);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (relationType) {
      res["RelationType"] = boost::any(*relationType);
    }
    if (resellApplyStatus) {
      res["ResellApplyStatus"] = boost::any(*resellApplyStatus);
    }
    if (resellServiceId) {
      res["ResellServiceId"] = boost::any(*resellServiceId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceDiscoverable) {
      res["ServiceDiscoverable"] = boost::any(*serviceDiscoverable);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (sourceImage) {
      res["SourceImage"] = boost::any(*sourceImage);
    }
    if (sourceServiceId) {
      res["SourceServiceId"] = boost::any(*sourceServiceId);
    }
    if (sourceServiceVersion) {
      res["SourceServiceVersion"] = boost::any(*sourceServiceVersion);
    }
    if (sourceSupplierName) {
      res["SourceSupplierName"] = boost::any(*sourceSupplierName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantType) {
      res["TenantType"] = boost::any(*tenantType);
    }
    if (trialType) {
      res["TrialType"] = boost::any(*trialType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    if (virtualInternetService) {
      res["VirtualInternetService"] = boost::any(*virtualInternetService);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalType") != m.end() && !m["ApprovalType"].empty()) {
      approvalType = make_shared<string>(boost::any_cast<string>(m["ApprovalType"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("BuildInfo") != m.end() && !m["BuildInfo"].empty()) {
      buildInfo = make_shared<string>(boost::any_cast<string>(m["BuildInfo"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      categories = make_shared<string>(boost::any_cast<string>(m["Categories"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        ListServicesResponseBodyServicesCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<ListServicesResponseBodyServicesCommodity>(model1);
      }
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<bool>(boost::any_cast<bool>(m["DefaultVersion"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("HasBeta") != m.end() && !m["HasBeta"].empty()) {
      hasBeta = make_shared<bool>(boost::any_cast<bool>(m["HasBeta"]));
    }
    if (m.find("HasDraft") != m.end() && !m["HasDraft"].empty()) {
      hasDraft = make_shared<bool>(boost::any_cast<bool>(m["HasDraft"]));
    }
    if (m.find("LatestResellSourceServiceVersion") != m.end() && !m["LatestResellSourceServiceVersion"].empty()) {
      latestResellSourceServiceVersion = make_shared<string>(boost::any_cast<string>(m["LatestResellSourceServiceVersion"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("RelationType") != m.end() && !m["RelationType"].empty()) {
      relationType = make_shared<string>(boost::any_cast<string>(m["RelationType"]));
    }
    if (m.find("ResellApplyStatus") != m.end() && !m["ResellApplyStatus"].empty()) {
      resellApplyStatus = make_shared<string>(boost::any_cast<string>(m["ResellApplyStatus"]));
    }
    if (m.find("ResellServiceId") != m.end() && !m["ResellServiceId"].empty()) {
      resellServiceId = make_shared<string>(boost::any_cast<string>(m["ResellServiceId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceDiscoverable") != m.end() && !m["ServiceDiscoverable"].empty()) {
      serviceDiscoverable = make_shared<string>(boost::any_cast<string>(m["ServiceDiscoverable"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfos") != m.end() && !m["ServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfos"].type()) {
        vector<ListServicesResponseBodyServicesServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServicesServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfos = make_shared<vector<ListServicesResponseBodyServicesServiceInfos>>(expect1);
      }
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("SourceImage") != m.end() && !m["SourceImage"].empty()) {
      sourceImage = make_shared<string>(boost::any_cast<string>(m["SourceImage"]));
    }
    if (m.find("SourceServiceId") != m.end() && !m["SourceServiceId"].empty()) {
      sourceServiceId = make_shared<string>(boost::any_cast<string>(m["SourceServiceId"]));
    }
    if (m.find("SourceServiceVersion") != m.end() && !m["SourceServiceVersion"].empty()) {
      sourceServiceVersion = make_shared<string>(boost::any_cast<string>(m["SourceServiceVersion"]));
    }
    if (m.find("SourceSupplierName") != m.end() && !m["SourceSupplierName"].empty()) {
      sourceSupplierName = make_shared<string>(boost::any_cast<string>(m["SourceSupplierName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListServicesResponseBodyServicesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServicesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListServicesResponseBodyServicesTags>>(expect1);
      }
    }
    if (m.find("TenantType") != m.end() && !m["TenantType"].empty()) {
      tenantType = make_shared<string>(boost::any_cast<string>(m["TenantType"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
    if (m.find("VirtualInternetService") != m.end() && !m["VirtualInternetService"].empty()) {
      virtualInternetService = make_shared<string>(boost::any_cast<string>(m["VirtualInternetService"]));
    }
  }


  virtual ~ListServicesResponseBodyServices() = default;
};
class ListServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServicesResponseBodyServices>> services{};
  shared_ptr<long> totalCount{};

  ListServicesResponseBody() {}

  explicit ListServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Services"] = boost::any(temp1);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<ListServicesResponseBodyServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<ListServicesResponseBodyServices>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServicesResponseBody() = default;
};
class ListServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServicesResponseBody> body{};

  ListServicesResponse() {}

  explicit ListServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServicesResponse() = default;
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class ModifyServiceInstanceResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> resources{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceInstanceResourcesAction{};

  ModifyServiceInstanceResourcesRequest() {}

  explicit ModifyServiceInstanceResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceInstanceResourcesAction) {
      res["ServiceInstanceResourcesAction"] = boost::any(*serviceInstanceResourcesAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceInstanceResourcesAction") != m.end() && !m["ServiceInstanceResourcesAction"].empty()) {
      serviceInstanceResourcesAction = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceResourcesAction"]));
    }
  }


  virtual ~ModifyServiceInstanceResourcesRequest() = default;
};
class ModifyServiceInstanceResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyServiceInstanceResourcesResponseBody() {}

  explicit ModifyServiceInstanceResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyServiceInstanceResourcesResponseBody() = default;
};
class ModifyServiceInstanceResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyServiceInstanceResourcesResponseBody> body{};

  ModifyServiceInstanceResourcesResponse() {}

  explicit ModifyServiceInstanceResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyServiceInstanceResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyServiceInstanceResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyServiceInstanceResourcesResponse() = default;
};
class PreLaunchServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};

  PreLaunchServiceRequest() {}

  explicit PreLaunchServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
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
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~PreLaunchServiceRequest() = default;
};
class PreLaunchServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PreLaunchServiceResponseBody() {}

  explicit PreLaunchServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PreLaunchServiceResponseBody() = default;
};
class PreLaunchServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PreLaunchServiceResponseBody> body{};

  PreLaunchServiceResponse() {}

  explicit PreLaunchServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PreLaunchServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PreLaunchServiceResponseBody>(model1);
      }
    }
  }


  virtual ~PreLaunchServiceResponse() = default;
};
class PushMeteringDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> metering{};
  shared_ptr<string> serviceInstanceId{};

  PushMeteringDataRequest() {}

  explicit PushMeteringDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metering) {
      res["Metering"] = boost::any(*metering);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metering") != m.end() && !m["Metering"].empty()) {
      metering = make_shared<string>(boost::any_cast<string>(m["Metering"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~PushMeteringDataRequest() = default;
};
class PushMeteringDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PushMeteringDataResponseBody() {}

  explicit PushMeteringDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PushMeteringDataResponseBody() = default;
};
class PushMeteringDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushMeteringDataResponseBody> body{};

  PushMeteringDataResponse() {}

  explicit PushMeteringDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PushMeteringDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushMeteringDataResponseBody>(model1);
      }
    }
  }


  virtual ~PushMeteringDataResponse() = default;
};
class RegisterServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};

  RegisterServiceRequest() {}

  explicit RegisterServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
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
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~RegisterServiceRequest() = default;
};
class RegisterServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> registrationId{};
  shared_ptr<string> requestId{};

  RegisterServiceResponseBody() {}

  explicit RegisterServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (registrationId) {
      res["RegistrationId"] = boost::any(*registrationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegistrationId") != m.end() && !m["RegistrationId"].empty()) {
      registrationId = make_shared<string>(boost::any_cast<string>(m["RegistrationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RegisterServiceResponseBody() = default;
};
class RegisterServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterServiceResponseBody> body{};

  RegisterServiceResponse() {}

  explicit RegisterServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RegisterServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterServiceResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterServiceResponse() = default;
};
class RejectServiceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> comments{};
  shared_ptr<string> serviceId{};
  shared_ptr<long> type{};
  shared_ptr<long> userAliUid{};

  RejectServiceUsageRequest() {}

  explicit RejectServiceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userAliUid) {
      res["UserAliUid"] = boost::any(*userAliUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("UserAliUid") != m.end() && !m["UserAliUid"].empty()) {
      userAliUid = make_shared<long>(boost::any_cast<long>(m["UserAliUid"]));
    }
  }


  virtual ~RejectServiceUsageRequest() = default;
};
class RejectServiceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RejectServiceUsageResponseBody() {}

  explicit RejectServiceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RejectServiceUsageResponseBody() = default;
};
class RejectServiceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RejectServiceUsageResponseBody> body{};

  RejectServiceUsageResponse() {}

  explicit RejectServiceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RejectServiceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RejectServiceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~RejectServiceUsageResponse() = default;
};
class ReleaseArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> clientToken{};

  ReleaseArtifactRequest() {}

  explicit ReleaseArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~ReleaseArtifactRequest() = default;
};
class ReleaseArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactProperty{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> versionName{};

  ReleaseArtifactResponseBody() {}

  explicit ReleaseArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = boost::any(*artifactProperty);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ReleaseArtifactResponseBody() = default;
};
class ReleaseArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseArtifactResponseBody> body{};

  ReleaseArtifactResponse() {}

  explicit ReleaseArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReleaseArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseArtifactResponse() = default;
};
class RemoveServiceSharedAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> type{};
  shared_ptr<vector<long>> userAliUids{};

  RemoveServiceSharedAccountsRequest() {}

  explicit RemoveServiceSharedAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userAliUids) {
      res["UserAliUids"] = boost::any(*userAliUids);
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
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserAliUids") != m.end() && !m["UserAliUids"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["UserAliUids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserAliUids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      userAliUids = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RemoveServiceSharedAccountsRequest() = default;
};
class RemoveServiceSharedAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveServiceSharedAccountsResponseBody() {}

  explicit RemoveServiceSharedAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveServiceSharedAccountsResponseBody() = default;
};
class RemoveServiceSharedAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveServiceSharedAccountsResponseBody> body{};

  RemoveServiceSharedAccountsResponse() {}

  explicit RemoveServiceSharedAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveServiceSharedAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveServiceSharedAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveServiceSharedAccountsResponse() = default;
};
class RestartServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  RestartServiceInstanceRequest() {}

  explicit RestartServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~RestartServiceInstanceRequest() = default;
};
class RestartServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestartServiceInstanceResponseBody() {}

  explicit RestartServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RestartServiceInstanceResponseBody() = default;
};
class RestartServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartServiceInstanceResponseBody> body{};

  RestartServiceInstanceResponse() {}

  explicit RestartServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestartServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestartServiceInstanceResponse() = default;
};
class RollbackServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  RollbackServiceInstanceRequest() {}

  explicit RollbackServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~RollbackServiceInstanceRequest() = default;
};
class RollbackServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> status{};

  RollbackServiceInstanceResponseBody() {}

  explicit RollbackServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~RollbackServiceInstanceResponseBody() = default;
};
class RollbackServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RollbackServiceInstanceResponseBody> body{};

  RollbackServiceInstanceResponse() {}

  explicit RollbackServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RollbackServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RollbackServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RollbackServiceInstanceResponse() = default;
};
class StartServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  StartServiceInstanceRequest() {}

  explicit StartServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~StartServiceInstanceRequest() = default;
};
class StartServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartServiceInstanceResponseBody() {}

  explicit StartServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartServiceInstanceResponseBody() = default;
};
class StartServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartServiceInstanceResponseBody> body{};

  StartServiceInstanceResponse() {}

  explicit StartServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartServiceInstanceResponse() = default;
};
class StopServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  StopServiceInstanceRequest() {}

  explicit StopServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~StopServiceInstanceRequest() = default;
};
class StopServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopServiceInstanceResponseBody() {}

  explicit StopServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopServiceInstanceResponseBody() = default;
};
class StopServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopServiceInstanceResponseBody> body{};

  StopServiceInstanceResponse() {}

  explicit StopServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StopServiceInstanceResponse() = default;
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
class UnTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UnTagResourcesRequest() {}

  explicit UnTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnTagResourcesRequest() = default;
};
class UnTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnTagResourcesResponseBody() {}

  explicit UnTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnTagResourcesResponseBody() = default;
};
class UnTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnTagResourcesResponseBody> body{};

  UnTagResourcesResponse() {}

  explicit UnTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UnTagResourcesResponse() = default;
};
class UpdateArtifactRequestArtifactBuildPropertyBuildArgs : public Darabonba::Model {
public:
  shared_ptr<string> argumentName{};
  shared_ptr<string> argumentValue{};

  UpdateArtifactRequestArtifactBuildPropertyBuildArgs() {}

  explicit UpdateArtifactRequestArtifactBuildPropertyBuildArgs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (argumentName) {
      res["ArgumentName"] = boost::any(*argumentName);
    }
    if (argumentValue) {
      res["ArgumentValue"] = boost::any(*argumentValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArgumentName") != m.end() && !m["ArgumentName"].empty()) {
      argumentName = make_shared<string>(boost::any_cast<string>(m["ArgumentName"]));
    }
    if (m.find("ArgumentValue") != m.end() && !m["ArgumentValue"].empty()) {
      argumentValue = make_shared<string>(boost::any_cast<string>(m["ArgumentValue"]));
    }
  }


  virtual ~UpdateArtifactRequestArtifactBuildPropertyBuildArgs() = default;
};
class UpdateArtifactRequestArtifactBuildPropertyCodeRepo : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> owner{};
  shared_ptr<string> platform{};
  shared_ptr<string> repoName{};

  UpdateArtifactRequestArtifactBuildPropertyCodeRepo() {}

  explicit UpdateArtifactRequestArtifactBuildPropertyCodeRepo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["Branch"] = boost::any(*branch);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Branch") != m.end() && !m["Branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["Branch"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
  }


  virtual ~UpdateArtifactRequestArtifactBuildPropertyCodeRepo() = default;
};
class UpdateArtifactRequestArtifactBuildProperty : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateArtifactRequestArtifactBuildPropertyBuildArgs>> buildArgs{};
  shared_ptr<UpdateArtifactRequestArtifactBuildPropertyCodeRepo> codeRepo{};
  shared_ptr<string> commandContent{};
  shared_ptr<string> commandType{};
  shared_ptr<string> dockerfilePath{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sourceContainerImage{};
  shared_ptr<string> sourceImageId{};

  UpdateArtifactRequestArtifactBuildProperty() {}

  explicit UpdateArtifactRequestArtifactBuildProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildArgs) {
      vector<boost::any> temp1;
      for(auto item1:*buildArgs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BuildArgs"] = boost::any(temp1);
    }
    if (codeRepo) {
      res["CodeRepo"] = codeRepo ? boost::any(codeRepo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (commandContent) {
      res["CommandContent"] = boost::any(*commandContent);
    }
    if (commandType) {
      res["CommandType"] = boost::any(*commandType);
    }
    if (dockerfilePath) {
      res["DockerfilePath"] = boost::any(*dockerfilePath);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceContainerImage) {
      res["SourceContainerImage"] = boost::any(*sourceContainerImage);
    }
    if (sourceImageId) {
      res["SourceImageId"] = boost::any(*sourceImageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildArgs") != m.end() && !m["BuildArgs"].empty()) {
      if (typeid(vector<boost::any>) == m["BuildArgs"].type()) {
        vector<UpdateArtifactRequestArtifactBuildPropertyBuildArgs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BuildArgs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateArtifactRequestArtifactBuildPropertyBuildArgs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buildArgs = make_shared<vector<UpdateArtifactRequestArtifactBuildPropertyBuildArgs>>(expect1);
      }
    }
    if (m.find("CodeRepo") != m.end() && !m["CodeRepo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodeRepo"].type()) {
        UpdateArtifactRequestArtifactBuildPropertyCodeRepo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodeRepo"]));
        codeRepo = make_shared<UpdateArtifactRequestArtifactBuildPropertyCodeRepo>(model1);
      }
    }
    if (m.find("CommandContent") != m.end() && !m["CommandContent"].empty()) {
      commandContent = make_shared<string>(boost::any_cast<string>(m["CommandContent"]));
    }
    if (m.find("CommandType") != m.end() && !m["CommandType"].empty()) {
      commandType = make_shared<string>(boost::any_cast<string>(m["CommandType"]));
    }
    if (m.find("DockerfilePath") != m.end() && !m["DockerfilePath"].empty()) {
      dockerfilePath = make_shared<string>(boost::any_cast<string>(m["DockerfilePath"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceContainerImage") != m.end() && !m["SourceContainerImage"].empty()) {
      sourceContainerImage = make_shared<string>(boost::any_cast<string>(m["SourceContainerImage"]));
    }
    if (m.find("SourceImageId") != m.end() && !m["SourceImageId"].empty()) {
      sourceImageId = make_shared<string>(boost::any_cast<string>(m["SourceImageId"]));
    }
  }


  virtual ~UpdateArtifactRequestArtifactBuildProperty() = default;
};
class UpdateArtifactRequestArtifactProperty : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityVersion{};
  shared_ptr<string> imageId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repoId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoType{};
  shared_ptr<string> tag{};
  shared_ptr<string> url{};

  UpdateArtifactRequestArtifactProperty() {}

  explicit UpdateArtifactRequestArtifactProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (commodityVersion) {
      res["CommodityVersion"] = boost::any(*commodityVersion);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repoId) {
      res["RepoId"] = boost::any(*repoId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoType) {
      res["RepoType"] = boost::any(*repoType);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CommodityVersion") != m.end() && !m["CommodityVersion"].empty()) {
      commodityVersion = make_shared<string>(boost::any_cast<string>(m["CommodityVersion"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepoId") != m.end() && !m["RepoId"].empty()) {
      repoId = make_shared<string>(boost::any_cast<string>(m["RepoId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoType") != m.end() && !m["RepoType"].empty()) {
      repoType = make_shared<string>(boost::any_cast<string>(m["RepoType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~UpdateArtifactRequestArtifactProperty() = default;
};
class UpdateArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateArtifactRequestArtifactBuildProperty> artifactBuildProperty{};
  shared_ptr<string> artifactId{};
  shared_ptr<UpdateArtifactRequestArtifactProperty> artifactProperty{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> permissionType{};
  shared_ptr<vector<string>> supportRegionIds{};
  shared_ptr<string> versionName{};

  UpdateArtifactRequest() {}

  explicit UpdateArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactBuildProperty) {
      res["ArtifactBuildProperty"] = artifactBuildProperty ? boost::any(artifactBuildProperty->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = artifactProperty ? boost::any(artifactProperty->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (permissionType) {
      res["PermissionType"] = boost::any(*permissionType);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactBuildProperty") != m.end() && !m["ArtifactBuildProperty"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtifactBuildProperty"].type()) {
        UpdateArtifactRequestArtifactBuildProperty model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtifactBuildProperty"]));
        artifactBuildProperty = make_shared<UpdateArtifactRequestArtifactBuildProperty>(model1);
      }
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArtifactProperty"].type()) {
        UpdateArtifactRequestArtifactProperty model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArtifactProperty"]));
        artifactProperty = make_shared<UpdateArtifactRequestArtifactProperty>(model1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PermissionType") != m.end() && !m["PermissionType"].empty()) {
      permissionType = make_shared<string>(boost::any_cast<string>(m["PermissionType"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UpdateArtifactRequest() = default;
};
class UpdateArtifactShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> artifactBuildPropertyShrink{};
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactPropertyShrink{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> permissionType{};
  shared_ptr<vector<string>> supportRegionIds{};
  shared_ptr<string> versionName{};

  UpdateArtifactShrinkRequest() {}

  explicit UpdateArtifactShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactBuildPropertyShrink) {
      res["ArtifactBuildProperty"] = boost::any(*artifactBuildPropertyShrink);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactPropertyShrink) {
      res["ArtifactProperty"] = boost::any(*artifactPropertyShrink);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (permissionType) {
      res["PermissionType"] = boost::any(*permissionType);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactBuildProperty") != m.end() && !m["ArtifactBuildProperty"].empty()) {
      artifactBuildPropertyShrink = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildProperty"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactPropertyShrink = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PermissionType") != m.end() && !m["PermissionType"].empty()) {
      permissionType = make_shared<string>(boost::any_cast<string>(m["PermissionType"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportRegionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UpdateArtifactShrinkRequest() = default;
};
class UpdateArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> artifactBuildProperty{};
  shared_ptr<string> artifactBuildType{};
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactProperty{};
  shared_ptr<string> artifactType{};
  shared_ptr<string> artifactVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDetail{};
  shared_ptr<string> supportRegionIds{};
  shared_ptr<string> versionName{};

  UpdateArtifactResponseBody() {}

  explicit UpdateArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactBuildProperty) {
      res["ArtifactBuildProperty"] = boost::any(*artifactBuildProperty);
    }
    if (artifactBuildType) {
      res["ArtifactBuildType"] = boost::any(*artifactBuildType);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactProperty) {
      res["ArtifactProperty"] = boost::any(*artifactProperty);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (artifactVersion) {
      res["ArtifactVersion"] = boost::any(*artifactVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (supportRegionIds) {
      res["SupportRegionIds"] = boost::any(*supportRegionIds);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactBuildProperty") != m.end() && !m["ArtifactBuildProperty"].empty()) {
      artifactBuildProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildProperty"]));
    }
    if (m.find("ArtifactBuildType") != m.end() && !m["ArtifactBuildType"].empty()) {
      artifactBuildType = make_shared<string>(boost::any_cast<string>(m["ArtifactBuildType"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactProperty") != m.end() && !m["ArtifactProperty"].empty()) {
      artifactProperty = make_shared<string>(boost::any_cast<string>(m["ArtifactProperty"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("ArtifactVersion") != m.end() && !m["ArtifactVersion"].empty()) {
      artifactVersion = make_shared<string>(boost::any_cast<string>(m["ArtifactVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("SupportRegionIds") != m.end() && !m["SupportRegionIds"].empty()) {
      supportRegionIds = make_shared<string>(boost::any_cast<string>(m["SupportRegionIds"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UpdateArtifactResponseBody() = default;
};
class UpdateArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateArtifactResponseBody> body{};

  UpdateArtifactResponse() {}

  explicit UpdateArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateArtifactResponse() = default;
};
class UpdateServiceRequestCommodityComponentsMappings : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> mappings{};
  shared_ptr<string> templateName{};

  UpdateServiceRequestCommodityComponentsMappings() {}

  explicit UpdateServiceRequestCommodityComponentsMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mappings) {
      res["Mappings"] = boost::any(*mappings);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mappings") != m.end() && !m["Mappings"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Mappings"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      mappings = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~UpdateServiceRequestCommodityComponentsMappings() = default;
};
class UpdateServiceRequestCommodityMeteringEntityExtraInfos : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> metricName{};
  shared_ptr<string> promql{};
  shared_ptr<string> type{};

  UpdateServiceRequestCommodityMeteringEntityExtraInfos() {}

  explicit UpdateServiceRequestCommodityMeteringEntityExtraInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (promql) {
      res["Promql"] = boost::any(*promql);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Promql") != m.end() && !m["Promql"].empty()) {
      promql = make_shared<string>(boost::any_cast<string>(m["Promql"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateServiceRequestCommodityMeteringEntityExtraInfos() = default;
};
class UpdateServiceRequestCommodityMeteringEntityMappings : public Darabonba::Model {
public:
  shared_ptr<vector<string>> entityIds{};
  shared_ptr<string> specificationName{};
  shared_ptr<string> templateName{};

  UpdateServiceRequestCommodityMeteringEntityMappings() {}

  explicit UpdateServiceRequestCommodityMeteringEntityMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityIds) {
      res["EntityIds"] = boost::any(*entityIds);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityIds") != m.end() && !m["EntityIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EntityIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EntityIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      entityIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~UpdateServiceRequestCommodityMeteringEntityMappings() = default;
};
class UpdateServiceRequestCommoditySpecificationMappings : public Darabonba::Model {
public:
  shared_ptr<string> specificationCode{};
  shared_ptr<string> specificationName{};
  shared_ptr<string> templateName{};

  UpdateServiceRequestCommoditySpecificationMappings() {}

  explicit UpdateServiceRequestCommoditySpecificationMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specificationCode) {
      res["SpecificationCode"] = boost::any(*specificationCode);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecificationCode") != m.end() && !m["SpecificationCode"].empty()) {
      specificationCode = make_shared<string>(boost::any_cast<string>(m["SpecificationCode"]));
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~UpdateServiceRequestCommoditySpecificationMappings() = default;
};
class UpdateServiceRequestCommodity : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateServiceRequestCommodityComponentsMappings>> componentsMappings{};
  shared_ptr<vector<UpdateServiceRequestCommodityMeteringEntityExtraInfos>> meteringEntityExtraInfos{};
  shared_ptr<vector<UpdateServiceRequestCommodityMeteringEntityMappings>> meteringEntityMappings{};
  shared_ptr<string> saasBoostConfig{};
  shared_ptr<vector<UpdateServiceRequestCommoditySpecificationMappings>> specificationMappings{};

  UpdateServiceRequestCommodity() {}

  explicit UpdateServiceRequestCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentsMappings) {
      vector<boost::any> temp1;
      for(auto item1:*componentsMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComponentsMappings"] = boost::any(temp1);
    }
    if (meteringEntityExtraInfos) {
      vector<boost::any> temp1;
      for(auto item1:*meteringEntityExtraInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MeteringEntityExtraInfos"] = boost::any(temp1);
    }
    if (meteringEntityMappings) {
      vector<boost::any> temp1;
      for(auto item1:*meteringEntityMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MeteringEntityMappings"] = boost::any(temp1);
    }
    if (saasBoostConfig) {
      res["SaasBoostConfig"] = boost::any(*saasBoostConfig);
    }
    if (specificationMappings) {
      vector<boost::any> temp1;
      for(auto item1:*specificationMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpecificationMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentsMappings") != m.end() && !m["ComponentsMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ComponentsMappings"].type()) {
        vector<UpdateServiceRequestCommodityComponentsMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComponentsMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceRequestCommodityComponentsMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        componentsMappings = make_shared<vector<UpdateServiceRequestCommodityComponentsMappings>>(expect1);
      }
    }
    if (m.find("MeteringEntityExtraInfos") != m.end() && !m["MeteringEntityExtraInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MeteringEntityExtraInfos"].type()) {
        vector<UpdateServiceRequestCommodityMeteringEntityExtraInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MeteringEntityExtraInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceRequestCommodityMeteringEntityExtraInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meteringEntityExtraInfos = make_shared<vector<UpdateServiceRequestCommodityMeteringEntityExtraInfos>>(expect1);
      }
    }
    if (m.find("MeteringEntityMappings") != m.end() && !m["MeteringEntityMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["MeteringEntityMappings"].type()) {
        vector<UpdateServiceRequestCommodityMeteringEntityMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MeteringEntityMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceRequestCommodityMeteringEntityMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meteringEntityMappings = make_shared<vector<UpdateServiceRequestCommodityMeteringEntityMappings>>(expect1);
      }
    }
    if (m.find("SaasBoostConfig") != m.end() && !m["SaasBoostConfig"].empty()) {
      saasBoostConfig = make_shared<string>(boost::any_cast<string>(m["SaasBoostConfig"]));
    }
    if (m.find("SpecificationMappings") != m.end() && !m["SpecificationMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["SpecificationMappings"].type()) {
        vector<UpdateServiceRequestCommoditySpecificationMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpecificationMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceRequestCommoditySpecificationMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specificationMappings = make_shared<vector<UpdateServiceRequestCommoditySpecificationMappings>>(expect1);
      }
    }
  }


  virtual ~UpdateServiceRequestCommodity() = default;
};
class UpdateServiceRequestComplianceMetadata : public Darabonba::Model {
public:
  shared_ptr<vector<string>> compliancePacks{};

  UpdateServiceRequestComplianceMetadata() {}

  explicit UpdateServiceRequestComplianceMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compliancePacks) {
      res["CompliancePacks"] = boost::any(*compliancePacks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompliancePacks") != m.end() && !m["CompliancePacks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CompliancePacks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CompliancePacks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      compliancePacks = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateServiceRequestComplianceMetadata() = default;
};
class UpdateServiceRequestServiceInfoAgreements : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  UpdateServiceRequestServiceInfoAgreements() {}

  explicit UpdateServiceRequestServiceInfoAgreements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~UpdateServiceRequestServiceInfoAgreements() = default;
};
class UpdateServiceRequestServiceInfoSoftwares : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  UpdateServiceRequestServiceInfoSoftwares() {}

  explicit UpdateServiceRequestServiceInfoSoftwares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~UpdateServiceRequestServiceInfoSoftwares() = default;
};
class UpdateServiceRequestServiceInfo : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateServiceRequestServiceInfoAgreements>> agreements{};
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> longDescriptionUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};
  shared_ptr<vector<UpdateServiceRequestServiceInfoSoftwares>> softwares{};

  UpdateServiceRequestServiceInfo() {}

  explicit UpdateServiceRequestServiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreements) {
      vector<boost::any> temp1;
      for(auto item1:*agreements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Agreements"] = boost::any(temp1);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (longDescriptionUrl) {
      res["LongDescriptionUrl"] = boost::any(*longDescriptionUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (softwares) {
      vector<boost::any> temp1;
      for(auto item1:*softwares){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Softwares"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agreements") != m.end() && !m["Agreements"].empty()) {
      if (typeid(vector<boost::any>) == m["Agreements"].type()) {
        vector<UpdateServiceRequestServiceInfoAgreements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Agreements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceRequestServiceInfoAgreements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        agreements = make_shared<vector<UpdateServiceRequestServiceInfoAgreements>>(expect1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("LongDescriptionUrl") != m.end() && !m["LongDescriptionUrl"].empty()) {
      longDescriptionUrl = make_shared<string>(boost::any_cast<string>(m["LongDescriptionUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("Softwares") != m.end() && !m["Softwares"].empty()) {
      if (typeid(vector<boost::any>) == m["Softwares"].type()) {
        vector<UpdateServiceRequestServiceInfoSoftwares> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Softwares"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceRequestServiceInfoSoftwares model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        softwares = make_shared<vector<UpdateServiceRequestServiceInfoSoftwares>>(expect1);
      }
    }
  }


  virtual ~UpdateServiceRequestServiceInfo() = default;
};
class UpdateServiceRequestUpdateOption : public Darabonba::Model {
public:
  shared_ptr<bool> updateArtifact{};
  shared_ptr<string> updateFrom{};

  UpdateServiceRequestUpdateOption() {}

  explicit UpdateServiceRequestUpdateOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateArtifact) {
      res["UpdateArtifact"] = boost::any(*updateArtifact);
    }
    if (updateFrom) {
      res["UpdateFrom"] = boost::any(*updateFrom);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateArtifact") != m.end() && !m["UpdateArtifact"].empty()) {
      updateArtifact = make_shared<bool>(boost::any_cast<bool>(m["UpdateArtifact"]));
    }
    if (m.find("UpdateFrom") != m.end() && !m["UpdateFrom"].empty()) {
      updateFrom = make_shared<string>(boost::any_cast<string>(m["UpdateFrom"]));
    }
  }


  virtual ~UpdateServiceRequestUpdateOption() = default;
};
class UpdateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmMetadata{};
  shared_ptr<string> approvalType{};
  shared_ptr<string> clientToken{};
  shared_ptr<UpdateServiceRequestCommodity> commodity{};
  shared_ptr<UpdateServiceRequestComplianceMetadata> complianceMetadata{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> duration{};
  shared_ptr<bool> isSupportOperated{};
  shared_ptr<string> licenseMetadata{};
  shared_ptr<string> logMetadata{};
  shared_ptr<string> operationMetadata{};
  shared_ptr<string> policyNames{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> resellable{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<UpdateServiceRequestServiceInfo>> serviceInfo{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> shareType{};
  shared_ptr<string> tenantType{};
  shared_ptr<long> trialDuration{};
  shared_ptr<UpdateServiceRequestUpdateOption> updateOption{};
  shared_ptr<string> upgradeMetadata{};
  shared_ptr<string> versionName{};

  UpdateServiceRequest() {}

  explicit UpdateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmMetadata) {
      res["AlarmMetadata"] = boost::any(*alarmMetadata);
    }
    if (approvalType) {
      res["ApprovalType"] = boost::any(*approvalType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (complianceMetadata) {
      res["ComplianceMetadata"] = complianceMetadata ? boost::any(complianceMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (isSupportOperated) {
      res["IsSupportOperated"] = boost::any(*isSupportOperated);
    }
    if (licenseMetadata) {
      res["LicenseMetadata"] = boost::any(*licenseMetadata);
    }
    if (logMetadata) {
      res["LogMetadata"] = boost::any(*logMetadata);
    }
    if (operationMetadata) {
      res["OperationMetadata"] = boost::any(*operationMetadata);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resellable) {
      res["Resellable"] = boost::any(*resellable);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfo"] = boost::any(temp1);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tenantType) {
      res["TenantType"] = boost::any(*tenantType);
    }
    if (trialDuration) {
      res["TrialDuration"] = boost::any(*trialDuration);
    }
    if (updateOption) {
      res["UpdateOption"] = updateOption ? boost::any(updateOption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (upgradeMetadata) {
      res["UpgradeMetadata"] = boost::any(*upgradeMetadata);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmMetadata") != m.end() && !m["AlarmMetadata"].empty()) {
      alarmMetadata = make_shared<string>(boost::any_cast<string>(m["AlarmMetadata"]));
    }
    if (m.find("ApprovalType") != m.end() && !m["ApprovalType"].empty()) {
      approvalType = make_shared<string>(boost::any_cast<string>(m["ApprovalType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        UpdateServiceRequestCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<UpdateServiceRequestCommodity>(model1);
      }
    }
    if (m.find("ComplianceMetadata") != m.end() && !m["ComplianceMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComplianceMetadata"].type()) {
        UpdateServiceRequestComplianceMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComplianceMetadata"]));
        complianceMetadata = make_shared<UpdateServiceRequestComplianceMetadata>(model1);
      }
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("IsSupportOperated") != m.end() && !m["IsSupportOperated"].empty()) {
      isSupportOperated = make_shared<bool>(boost::any_cast<bool>(m["IsSupportOperated"]));
    }
    if (m.find("LicenseMetadata") != m.end() && !m["LicenseMetadata"].empty()) {
      licenseMetadata = make_shared<string>(boost::any_cast<string>(m["LicenseMetadata"]));
    }
    if (m.find("LogMetadata") != m.end() && !m["LogMetadata"].empty()) {
      logMetadata = make_shared<string>(boost::any_cast<string>(m["LogMetadata"]));
    }
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      operationMetadata = make_shared<string>(boost::any_cast<string>(m["OperationMetadata"]));
    }
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      policyNames = make_shared<string>(boost::any_cast<string>(m["PolicyNames"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resellable") != m.end() && !m["Resellable"].empty()) {
      resellable = make_shared<bool>(boost::any_cast<bool>(m["Resellable"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfo") != m.end() && !m["ServiceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfo"].type()) {
        vector<UpdateServiceRequestServiceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceRequestServiceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfo = make_shared<vector<UpdateServiceRequestServiceInfo>>(expect1);
      }
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("TenantType") != m.end() && !m["TenantType"].empty()) {
      tenantType = make_shared<string>(boost::any_cast<string>(m["TenantType"]));
    }
    if (m.find("TrialDuration") != m.end() && !m["TrialDuration"].empty()) {
      trialDuration = make_shared<long>(boost::any_cast<long>(m["TrialDuration"]));
    }
    if (m.find("UpdateOption") != m.end() && !m["UpdateOption"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpdateOption"].type()) {
        UpdateServiceRequestUpdateOption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpdateOption"]));
        updateOption = make_shared<UpdateServiceRequestUpdateOption>(model1);
      }
    }
    if (m.find("UpgradeMetadata") != m.end() && !m["UpgradeMetadata"].empty()) {
      upgradeMetadata = make_shared<string>(boost::any_cast<string>(m["UpgradeMetadata"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UpdateServiceRequest() = default;
};
class UpdateServiceShrinkRequestServiceInfoAgreements : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  UpdateServiceShrinkRequestServiceInfoAgreements() {}

  explicit UpdateServiceShrinkRequestServiceInfoAgreements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~UpdateServiceShrinkRequestServiceInfoAgreements() = default;
};
class UpdateServiceShrinkRequestServiceInfoSoftwares : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  UpdateServiceShrinkRequestServiceInfoSoftwares() {}

  explicit UpdateServiceShrinkRequestServiceInfoSoftwares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~UpdateServiceShrinkRequestServiceInfoSoftwares() = default;
};
class UpdateServiceShrinkRequestServiceInfo : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateServiceShrinkRequestServiceInfoAgreements>> agreements{};
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> longDescriptionUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};
  shared_ptr<vector<UpdateServiceShrinkRequestServiceInfoSoftwares>> softwares{};

  UpdateServiceShrinkRequestServiceInfo() {}

  explicit UpdateServiceShrinkRequestServiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreements) {
      vector<boost::any> temp1;
      for(auto item1:*agreements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Agreements"] = boost::any(temp1);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (longDescriptionUrl) {
      res["LongDescriptionUrl"] = boost::any(*longDescriptionUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (softwares) {
      vector<boost::any> temp1;
      for(auto item1:*softwares){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Softwares"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agreements") != m.end() && !m["Agreements"].empty()) {
      if (typeid(vector<boost::any>) == m["Agreements"].type()) {
        vector<UpdateServiceShrinkRequestServiceInfoAgreements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Agreements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceShrinkRequestServiceInfoAgreements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        agreements = make_shared<vector<UpdateServiceShrinkRequestServiceInfoAgreements>>(expect1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("LongDescriptionUrl") != m.end() && !m["LongDescriptionUrl"].empty()) {
      longDescriptionUrl = make_shared<string>(boost::any_cast<string>(m["LongDescriptionUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("Softwares") != m.end() && !m["Softwares"].empty()) {
      if (typeid(vector<boost::any>) == m["Softwares"].type()) {
        vector<UpdateServiceShrinkRequestServiceInfoSoftwares> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Softwares"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceShrinkRequestServiceInfoSoftwares model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        softwares = make_shared<vector<UpdateServiceShrinkRequestServiceInfoSoftwares>>(expect1);
      }
    }
  }


  virtual ~UpdateServiceShrinkRequestServiceInfo() = default;
};
class UpdateServiceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmMetadata{};
  shared_ptr<string> approvalType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> commodityShrink{};
  shared_ptr<string> complianceMetadataShrink{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> duration{};
  shared_ptr<bool> isSupportOperated{};
  shared_ptr<string> licenseMetadata{};
  shared_ptr<string> logMetadata{};
  shared_ptr<string> operationMetadata{};
  shared_ptr<string> policyNames{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> resellable{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<UpdateServiceShrinkRequestServiceInfo>> serviceInfo{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> shareType{};
  shared_ptr<string> tenantType{};
  shared_ptr<long> trialDuration{};
  shared_ptr<string> updateOptionShrink{};
  shared_ptr<string> upgradeMetadata{};
  shared_ptr<string> versionName{};

  UpdateServiceShrinkRequest() {}

  explicit UpdateServiceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmMetadata) {
      res["AlarmMetadata"] = boost::any(*alarmMetadata);
    }
    if (approvalType) {
      res["ApprovalType"] = boost::any(*approvalType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodityShrink) {
      res["Commodity"] = boost::any(*commodityShrink);
    }
    if (complianceMetadataShrink) {
      res["ComplianceMetadata"] = boost::any(*complianceMetadataShrink);
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (isSupportOperated) {
      res["IsSupportOperated"] = boost::any(*isSupportOperated);
    }
    if (licenseMetadata) {
      res["LicenseMetadata"] = boost::any(*licenseMetadata);
    }
    if (logMetadata) {
      res["LogMetadata"] = boost::any(*logMetadata);
    }
    if (operationMetadata) {
      res["OperationMetadata"] = boost::any(*operationMetadata);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resellable) {
      res["Resellable"] = boost::any(*resellable);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfo"] = boost::any(temp1);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (tenantType) {
      res["TenantType"] = boost::any(*tenantType);
    }
    if (trialDuration) {
      res["TrialDuration"] = boost::any(*trialDuration);
    }
    if (updateOptionShrink) {
      res["UpdateOption"] = boost::any(*updateOptionShrink);
    }
    if (upgradeMetadata) {
      res["UpgradeMetadata"] = boost::any(*upgradeMetadata);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmMetadata") != m.end() && !m["AlarmMetadata"].empty()) {
      alarmMetadata = make_shared<string>(boost::any_cast<string>(m["AlarmMetadata"]));
    }
    if (m.find("ApprovalType") != m.end() && !m["ApprovalType"].empty()) {
      approvalType = make_shared<string>(boost::any_cast<string>(m["ApprovalType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      commodityShrink = make_shared<string>(boost::any_cast<string>(m["Commodity"]));
    }
    if (m.find("ComplianceMetadata") != m.end() && !m["ComplianceMetadata"].empty()) {
      complianceMetadataShrink = make_shared<string>(boost::any_cast<string>(m["ComplianceMetadata"]));
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("IsSupportOperated") != m.end() && !m["IsSupportOperated"].empty()) {
      isSupportOperated = make_shared<bool>(boost::any_cast<bool>(m["IsSupportOperated"]));
    }
    if (m.find("LicenseMetadata") != m.end() && !m["LicenseMetadata"].empty()) {
      licenseMetadata = make_shared<string>(boost::any_cast<string>(m["LicenseMetadata"]));
    }
    if (m.find("LogMetadata") != m.end() && !m["LogMetadata"].empty()) {
      logMetadata = make_shared<string>(boost::any_cast<string>(m["LogMetadata"]));
    }
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      operationMetadata = make_shared<string>(boost::any_cast<string>(m["OperationMetadata"]));
    }
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      policyNames = make_shared<string>(boost::any_cast<string>(m["PolicyNames"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resellable") != m.end() && !m["Resellable"].empty()) {
      resellable = make_shared<bool>(boost::any_cast<bool>(m["Resellable"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfo") != m.end() && !m["ServiceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfo"].type()) {
        vector<UpdateServiceShrinkRequestServiceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceShrinkRequestServiceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfo = make_shared<vector<UpdateServiceShrinkRequestServiceInfo>>(expect1);
      }
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("TenantType") != m.end() && !m["TenantType"].empty()) {
      tenantType = make_shared<string>(boost::any_cast<string>(m["TenantType"]));
    }
    if (m.find("TrialDuration") != m.end() && !m["TrialDuration"].empty()) {
      trialDuration = make_shared<long>(boost::any_cast<long>(m["TrialDuration"]));
    }
    if (m.find("UpdateOption") != m.end() && !m["UpdateOption"].empty()) {
      updateOptionShrink = make_shared<string>(boost::any_cast<string>(m["UpdateOption"]));
    }
    if (m.find("UpgradeMetadata") != m.end() && !m["UpgradeMetadata"].empty()) {
      upgradeMetadata = make_shared<string>(boost::any_cast<string>(m["UpgradeMetadata"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UpdateServiceShrinkRequest() = default;
};
class UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy : public Darabonba::Model {
public:
  shared_ptr<vector<string>> action{};
  shared_ptr<string> resource{};
  shared_ptr<string> serviceName{};

  UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy() {}

  explicit UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
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
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy() = default;
};
class UpdateServiceResponseBodyDryRunResultRolePolicy : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy>> missingPolicy{};
  shared_ptr<string> policy{};

  UpdateServiceResponseBodyDryRunResultRolePolicy() {}

  explicit UpdateServiceResponseBodyDryRunResultRolePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (missingPolicy) {
      vector<boost::any> temp1;
      for(auto item1:*missingPolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MissingPolicy"] = boost::any(temp1);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MissingPolicy") != m.end() && !m["MissingPolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["MissingPolicy"].type()) {
        vector<UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MissingPolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        missingPolicy = make_shared<vector<UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy>>(expect1);
      }
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
  }


  virtual ~UpdateServiceResponseBodyDryRunResultRolePolicy() = default;
};
class UpdateServiceResponseBodyDryRunResult : public Darabonba::Model {
public:
  shared_ptr<UpdateServiceResponseBodyDryRunResultRolePolicy> rolePolicy{};

  UpdateServiceResponseBodyDryRunResult() {}

  explicit UpdateServiceResponseBodyDryRunResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rolePolicy) {
      res["RolePolicy"] = rolePolicy ? boost::any(rolePolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RolePolicy") != m.end() && !m["RolePolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["RolePolicy"].type()) {
        UpdateServiceResponseBodyDryRunResultRolePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RolePolicy"]));
        rolePolicy = make_shared<UpdateServiceResponseBodyDryRunResultRolePolicy>(model1);
      }
    }
  }


  virtual ~UpdateServiceResponseBodyDryRunResult() = default;
};
class UpdateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateServiceResponseBodyDryRunResult> dryRunResult{};
  shared_ptr<string> requestId{};

  UpdateServiceResponseBody() {}

  explicit UpdateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRunResult) {
      res["DryRunResult"] = dryRunResult ? boost::any(dryRunResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DryRunResult") != m.end() && !m["DryRunResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["DryRunResult"].type()) {
        UpdateServiceResponseBodyDryRunResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DryRunResult"]));
        dryRunResult = make_shared<UpdateServiceResponseBodyDryRunResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateServiceResponseBody() = default;
};
class UpdateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceResponseBody> body{};

  UpdateServiceResponse() {}

  explicit UpdateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceResponse() = default;
};
class UpdateServiceInstanceAttributeRequestLicenseData : public Darabonba::Model {
public:
  shared_ptr<string> customData{};

  UpdateServiceInstanceAttributeRequestLicenseData() {}

  explicit UpdateServiceInstanceAttributeRequestLicenseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customData) {
      res["CustomData"] = boost::any(*customData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomData") != m.end() && !m["CustomData"].empty()) {
      customData = make_shared<string>(boost::any_cast<string>(m["CustomData"]));
    }
  }


  virtual ~UpdateServiceInstanceAttributeRequestLicenseData() = default;
};
class UpdateServiceInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<UpdateServiceInstanceAttributeRequestLicenseData> licenseData{};
  shared_ptr<string> reason{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  UpdateServiceInstanceAttributeRequest() {}

  explicit UpdateServiceInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (licenseData) {
      res["LicenseData"] = licenseData ? boost::any(licenseData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("LicenseData") != m.end() && !m["LicenseData"].empty()) {
      if (typeid(map<string, boost::any>) == m["LicenseData"].type()) {
        UpdateServiceInstanceAttributeRequestLicenseData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LicenseData"]));
        licenseData = make_shared<UpdateServiceInstanceAttributeRequestLicenseData>(model1);
      }
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~UpdateServiceInstanceAttributeRequest() = default;
};
class UpdateServiceInstanceAttributeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> licenseDataShrink{};
  shared_ptr<string> reason{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  UpdateServiceInstanceAttributeShrinkRequest() {}

  explicit UpdateServiceInstanceAttributeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (licenseDataShrink) {
      res["LicenseData"] = boost::any(*licenseDataShrink);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("LicenseData") != m.end() && !m["LicenseData"].empty()) {
      licenseDataShrink = make_shared<string>(boost::any_cast<string>(m["LicenseData"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~UpdateServiceInstanceAttributeShrinkRequest() = default;
};
class UpdateServiceInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateServiceInstanceAttributeResponseBody() {}

  explicit UpdateServiceInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateServiceInstanceAttributeResponseBody() = default;
};
class UpdateServiceInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceInstanceAttributeResponseBody> body{};

  UpdateServiceInstanceAttributeResponse() {}

  explicit UpdateServiceInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceInstanceAttributeResponse() = default;
};
class UpdateServiceInstanceSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> enableUserPrometheus{};
  shared_ptr<string> operationName{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> predefinedParametersName{};
  shared_ptr<string> serviceInstanceId{};

  UpdateServiceInstanceSpecRequest() {}

  explicit UpdateServiceInstanceSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (enableUserPrometheus) {
      res["EnableUserPrometheus"] = boost::any(*enableUserPrometheus);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (predefinedParametersName) {
      res["PredefinedParametersName"] = boost::any(*predefinedParametersName);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EnableUserPrometheus") != m.end() && !m["EnableUserPrometheus"].empty()) {
      enableUserPrometheus = make_shared<bool>(boost::any_cast<bool>(m["EnableUserPrometheus"]));
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
    if (m.find("PredefinedParametersName") != m.end() && !m["PredefinedParametersName"].empty()) {
      predefinedParametersName = make_shared<string>(boost::any_cast<string>(m["PredefinedParametersName"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~UpdateServiceInstanceSpecRequest() = default;
};
class UpdateServiceInstanceSpecShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> enableUserPrometheus{};
  shared_ptr<string> operationName{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> predefinedParametersName{};
  shared_ptr<string> serviceInstanceId{};

  UpdateServiceInstanceSpecShrinkRequest() {}

  explicit UpdateServiceInstanceSpecShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (enableUserPrometheus) {
      res["EnableUserPrometheus"] = boost::any(*enableUserPrometheus);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (predefinedParametersName) {
      res["PredefinedParametersName"] = boost::any(*predefinedParametersName);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EnableUserPrometheus") != m.end() && !m["EnableUserPrometheus"].empty()) {
      enableUserPrometheus = make_shared<bool>(boost::any_cast<bool>(m["EnableUserPrometheus"]));
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("PredefinedParametersName") != m.end() && !m["PredefinedParametersName"].empty()) {
      predefinedParametersName = make_shared<string>(boost::any_cast<string>(m["PredefinedParametersName"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~UpdateServiceInstanceSpecShrinkRequest() = default;
};
class UpdateServiceInstanceSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  UpdateServiceInstanceSpecResponseBody() {}

  explicit UpdateServiceInstanceSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateServiceInstanceSpecResponseBody() = default;
};
class UpdateServiceInstanceSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceInstanceSpecResponseBody> body{};

  UpdateServiceInstanceSpecResponse() {}

  explicit UpdateServiceInstanceSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceInstanceSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceInstanceSpecResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceInstanceSpecResponse() = default;
};
class UpgradeServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dryRun{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceVersion{};

  UpgradeServiceInstanceRequest() {}

  explicit UpgradeServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<string>(boost::any_cast<string>(m["DryRun"]));
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
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~UpgradeServiceInstanceRequest() = default;
};
class UpgradeServiceInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dryRun{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceVersion{};

  UpgradeServiceInstanceShrinkRequest() {}

  explicit UpgradeServiceInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<string>(boost::any_cast<string>(m["DryRun"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~UpgradeServiceInstanceShrinkRequest() = default;
};
class UpgradeServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> upgradeRequiredParameters{};

  UpgradeServiceInstanceResponseBody() {}

  explicit UpgradeServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (upgradeRequiredParameters) {
      res["UpgradeRequiredParameters"] = boost::any(*upgradeRequiredParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpgradeRequiredParameters") != m.end() && !m["UpgradeRequiredParameters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UpgradeRequiredParameters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UpgradeRequiredParameters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      upgradeRequiredParameters = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpgradeServiceInstanceResponseBody() = default;
};
class UpgradeServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeServiceInstanceResponseBody> body{};

  UpgradeServiceInstanceResponse() {}

  explicit UpgradeServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeServiceInstanceResponse() = default;
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
  AddServiceSharedAccountsResponse addServiceSharedAccountsWithOptions(shared_ptr<AddServiceSharedAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddServiceSharedAccountsResponse addServiceSharedAccounts(shared_ptr<AddServiceSharedAccountsRequest> request);
  ApproveServiceUsageResponse approveServiceUsageWithOptions(shared_ptr<ApproveServiceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApproveServiceUsageResponse approveServiceUsage(shared_ptr<ApproveServiceUsageRequest> request);
  ContinueDeployServiceInstanceResponse continueDeployServiceInstanceWithOptions(shared_ptr<ContinueDeployServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContinueDeployServiceInstanceResponse continueDeployServiceInstance(shared_ptr<ContinueDeployServiceInstanceRequest> request);
  CreateArtifactResponse createArtifactWithOptions(shared_ptr<CreateArtifactRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateArtifactResponse createArtifact(shared_ptr<CreateArtifactRequest> request);
  CreateServiceResponse createServiceWithOptions(shared_ptr<CreateServiceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceResponse createService(shared_ptr<CreateServiceRequest> request);
  CreateServiceInstanceResponse createServiceInstanceWithOptions(shared_ptr<CreateServiceInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceInstanceResponse createServiceInstance(shared_ptr<CreateServiceInstanceRequest> request);
  CreateServiceUsageResponse createServiceUsageWithOptions(shared_ptr<CreateServiceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceUsageResponse createServiceUsage(shared_ptr<CreateServiceUsageRequest> request);
  DeleteArtifactResponse deleteArtifactWithOptions(shared_ptr<DeleteArtifactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteArtifactResponse deleteArtifact(shared_ptr<DeleteArtifactRequest> request);
  DeleteServiceResponse deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceResponse deleteService(shared_ptr<DeleteServiceRequest> request);
  DeleteServiceInstancesResponse deleteServiceInstancesWithOptions(shared_ptr<DeleteServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceInstancesResponse deleteServiceInstances(shared_ptr<DeleteServiceInstancesRequest> request);
  DeployServiceInstanceResponse deployServiceInstanceWithOptions(shared_ptr<DeployServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployServiceInstanceResponse deployServiceInstance(shared_ptr<DeployServiceInstanceRequest> request);
  GenerateServicePolicyResponse generateServicePolicyWithOptions(shared_ptr<GenerateServicePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateServicePolicyResponse generateServicePolicy(shared_ptr<GenerateServicePolicyRequest> request);
  GetArtifactResponse getArtifactWithOptions(shared_ptr<GetArtifactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetArtifactResponse getArtifact(shared_ptr<GetArtifactRequest> request);
  GetArtifactRepositoryCredentialsResponse getArtifactRepositoryCredentialsWithOptions(shared_ptr<GetArtifactRepositoryCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetArtifactRepositoryCredentialsResponse getArtifactRepositoryCredentials(shared_ptr<GetArtifactRepositoryCredentialsRequest> request);
  GetServiceResponse getServiceWithOptions(shared_ptr<GetServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceResponse getService(shared_ptr<GetServiceRequest> request);
  GetServiceEstimateCostResponse getServiceEstimateCostWithOptions(shared_ptr<GetServiceEstimateCostRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceEstimateCostResponse getServiceEstimateCost(shared_ptr<GetServiceEstimateCostRequest> request);
  GetServiceInstanceResponse getServiceInstanceWithOptions(shared_ptr<GetServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceInstanceResponse getServiceInstance(shared_ptr<GetServiceInstanceRequest> request);
  GetServiceProvisionsResponse getServiceProvisionsWithOptions(shared_ptr<GetServiceProvisionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceProvisionsResponse getServiceProvisions(shared_ptr<GetServiceProvisionsRequest> request);
  GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraintsWithOptions(shared_ptr<GetServiceTemplateParameterConstraintsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraints(shared_ptr<GetServiceTemplateParameterConstraintsRequest> request);
  GetUploadCredentialsResponse getUploadCredentialsWithOptions(shared_ptr<GetUploadCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUploadCredentialsResponse getUploadCredentials(shared_ptr<GetUploadCredentialsRequest> request);
  LaunchServiceResponse launchServiceWithOptions(shared_ptr<LaunchServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LaunchServiceResponse launchService(shared_ptr<LaunchServiceRequest> request);
  ListAcrImageRepositoriesResponse listAcrImageRepositoriesWithOptions(shared_ptr<ListAcrImageRepositoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAcrImageRepositoriesResponse listAcrImageRepositories(shared_ptr<ListAcrImageRepositoriesRequest> request);
  ListAcrImageTagsResponse listAcrImageTagsWithOptions(shared_ptr<ListAcrImageTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAcrImageTagsResponse listAcrImageTags(shared_ptr<ListAcrImageTagsRequest> request);
  ListArtifactVersionsResponse listArtifactVersionsWithOptions(shared_ptr<ListArtifactVersionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListArtifactVersionsResponse listArtifactVersions(shared_ptr<ListArtifactVersionsRequest> request);
  ListArtifactsResponse listArtifactsWithOptions(shared_ptr<ListArtifactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListArtifactsResponse listArtifacts(shared_ptr<ListArtifactsRequest> request);
  ListServiceInstanceDeployDetailsResponse listServiceInstanceDeployDetailsWithOptions(shared_ptr<ListServiceInstanceDeployDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstanceDeployDetailsResponse listServiceInstanceDeployDetails(shared_ptr<ListServiceInstanceDeployDetailsRequest> request);
  ListServiceInstancesResponse listServiceInstancesWithOptions(shared_ptr<ListServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstancesResponse listServiceInstances(shared_ptr<ListServiceInstancesRequest> request);
  ListServiceSharedAccountsResponse listServiceSharedAccountsWithOptions(shared_ptr<ListServiceSharedAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceSharedAccountsResponse listServiceSharedAccounts(shared_ptr<ListServiceSharedAccountsRequest> request);
  ListServiceUsagesResponse listServiceUsagesWithOptions(shared_ptr<ListServiceUsagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceUsagesResponse listServiceUsages(shared_ptr<ListServiceUsagesRequest> request);
  ListServicesResponse listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices(shared_ptr<ListServicesRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagValuesResponse listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagValuesResponse listTagValues(shared_ptr<ListTagValuesRequest> request);
  ModifyServiceInstanceResourcesResponse modifyServiceInstanceResourcesWithOptions(shared_ptr<ModifyServiceInstanceResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyServiceInstanceResourcesResponse modifyServiceInstanceResources(shared_ptr<ModifyServiceInstanceResourcesRequest> request);
  PreLaunchServiceResponse preLaunchServiceWithOptions(shared_ptr<PreLaunchServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PreLaunchServiceResponse preLaunchService(shared_ptr<PreLaunchServiceRequest> request);
  PushMeteringDataResponse pushMeteringDataWithOptions(shared_ptr<PushMeteringDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushMeteringDataResponse pushMeteringData(shared_ptr<PushMeteringDataRequest> request);
  RegisterServiceResponse registerServiceWithOptions(shared_ptr<RegisterServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterServiceResponse registerService(shared_ptr<RegisterServiceRequest> request);
  RejectServiceUsageResponse rejectServiceUsageWithOptions(shared_ptr<RejectServiceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RejectServiceUsageResponse rejectServiceUsage(shared_ptr<RejectServiceUsageRequest> request);
  ReleaseArtifactResponse releaseArtifactWithOptions(shared_ptr<ReleaseArtifactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseArtifactResponse releaseArtifact(shared_ptr<ReleaseArtifactRequest> request);
  RemoveServiceSharedAccountsResponse removeServiceSharedAccountsWithOptions(shared_ptr<RemoveServiceSharedAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveServiceSharedAccountsResponse removeServiceSharedAccounts(shared_ptr<RemoveServiceSharedAccountsRequest> request);
  RestartServiceInstanceResponse restartServiceInstanceWithOptions(shared_ptr<RestartServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartServiceInstanceResponse restartServiceInstance(shared_ptr<RestartServiceInstanceRequest> request);
  RollbackServiceInstanceResponse rollbackServiceInstanceWithOptions(shared_ptr<RollbackServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RollbackServiceInstanceResponse rollbackServiceInstance(shared_ptr<RollbackServiceInstanceRequest> request);
  StartServiceInstanceResponse startServiceInstanceWithOptions(shared_ptr<StartServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartServiceInstanceResponse startServiceInstance(shared_ptr<StartServiceInstanceRequest> request);
  StopServiceInstanceResponse stopServiceInstanceWithOptions(shared_ptr<StopServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopServiceInstanceResponse stopServiceInstance(shared_ptr<StopServiceInstanceRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnTagResourcesResponse unTagResourcesWithOptions(shared_ptr<UnTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnTagResourcesResponse unTagResources(shared_ptr<UnTagResourcesRequest> request);
  UpdateArtifactResponse updateArtifactWithOptions(shared_ptr<UpdateArtifactRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateArtifactResponse updateArtifact(shared_ptr<UpdateArtifactRequest> request);
  UpdateServiceResponse updateServiceWithOptions(shared_ptr<UpdateServiceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceResponse updateService(shared_ptr<UpdateServiceRequest> request);
  UpdateServiceInstanceAttributeResponse updateServiceInstanceAttributeWithOptions(shared_ptr<UpdateServiceInstanceAttributeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceInstanceAttributeResponse updateServiceInstanceAttribute(shared_ptr<UpdateServiceInstanceAttributeRequest> request);
  UpdateServiceInstanceSpecResponse updateServiceInstanceSpecWithOptions(shared_ptr<UpdateServiceInstanceSpecRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceInstanceSpecResponse updateServiceInstanceSpec(shared_ptr<UpdateServiceInstanceSpecRequest> request);
  UpgradeServiceInstanceResponse upgradeServiceInstanceWithOptions(shared_ptr<UpgradeServiceInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeServiceInstanceResponse upgradeServiceInstance(shared_ptr<UpgradeServiceInstanceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ComputeNestSupplier20210521

#endif
