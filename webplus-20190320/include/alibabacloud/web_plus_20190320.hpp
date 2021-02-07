// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WEBPLUS20190320_H_
#define ALIBABACLOUD_WEBPLUS20190320_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_WebPlus20190320 {
class AbortChangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeId{};
  shared_ptr<string> regionId{};

  AbortChangeRequest() {}

  explicit AbortChangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AbortChangeRequest() = default;
};
class AbortChangeResponseBodyEnvChange : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};

  AbortChangeResponseBodyEnvChange() {}

  explicit AbortChangeResponseBodyEnvChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~AbortChangeResponseBodyEnvChange() = default;
};
class AbortChangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<AbortChangeResponseBodyEnvChange> envChange{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  AbortChangeResponseBody() {}

  explicit AbortChangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envChange) {
      res["EnvChange"] = envChange ? boost::any(envChange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvChange") != m.end() && !m["EnvChange"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChange"].type()) {
        AbortChangeResponseBodyEnvChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChange"]));
        envChange = make_shared<AbortChangeResponseBodyEnvChange>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~AbortChangeResponseBody() = default;
};
class AbortChangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AbortChangeResponseBody> body{};

  AbortChangeResponse() {}

  explicit AbortChangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbortChangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbortChangeResponseBody>(model1);
      }
    }
  }


  virtual ~AbortChangeResponse() = default;
};
class CreateAppEnvRequest : public Darabonba::Model {
public:
  shared_ptr<string> envName{};
  shared_ptr<string> envDescription{};
  shared_ptr<string> stackId{};
  shared_ptr<string> appId{};
  shared_ptr<string> pkgVersionId{};
  shared_ptr<string> optionSettings{};
  shared_ptr<string> profileName{};
  shared_ptr<string> sourceEnvId{};
  shared_ptr<string> templateId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> extraProperties{};
  shared_ptr<string> regionId{};

  CreateAppEnvRequest() {}

  explicit CreateAppEnvRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envName) {
      res["EnvName"] = boost::any(*envName);
    }
    if (envDescription) {
      res["EnvDescription"] = boost::any(*envDescription);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pkgVersionId) {
      res["PkgVersionId"] = boost::any(*pkgVersionId);
    }
    if (optionSettings) {
      res["OptionSettings"] = boost::any(*optionSettings);
    }
    if (profileName) {
      res["ProfileName"] = boost::any(*profileName);
    }
    if (sourceEnvId) {
      res["SourceEnvId"] = boost::any(*sourceEnvId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (extraProperties) {
      res["ExtraProperties"] = boost::any(*extraProperties);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvName") != m.end() && !m["EnvName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["EnvName"]));
    }
    if (m.find("EnvDescription") != m.end() && !m["EnvDescription"].empty()) {
      envDescription = make_shared<string>(boost::any_cast<string>(m["EnvDescription"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PkgVersionId") != m.end() && !m["PkgVersionId"].empty()) {
      pkgVersionId = make_shared<string>(boost::any_cast<string>(m["PkgVersionId"]));
    }
    if (m.find("OptionSettings") != m.end() && !m["OptionSettings"].empty()) {
      optionSettings = make_shared<string>(boost::any_cast<string>(m["OptionSettings"]));
    }
    if (m.find("ProfileName") != m.end() && !m["ProfileName"].empty()) {
      profileName = make_shared<string>(boost::any_cast<string>(m["ProfileName"]));
    }
    if (m.find("SourceEnvId") != m.end() && !m["SourceEnvId"].empty()) {
      sourceEnvId = make_shared<string>(boost::any_cast<string>(m["SourceEnvId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ExtraProperties") != m.end() && !m["ExtraProperties"].empty()) {
      extraProperties = make_shared<string>(boost::any_cast<string>(m["ExtraProperties"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateAppEnvRequest() = default;
};
class CreateAppEnvResponseBodyEnvChangeDetailOperationsOperation : public Darabonba::Model {
public:
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationType{};

  CreateAppEnvResponseBodyEnvChangeDetailOperationsOperation() {}

  explicit CreateAppEnvResponseBodyEnvChangeDetailOperationsOperation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
  }


  virtual ~CreateAppEnvResponseBodyEnvChangeDetailOperationsOperation() = default;
};
class CreateAppEnvResponseBodyEnvChangeDetailOperations : public Darabonba::Model {
public:
  shared_ptr<vector<CreateAppEnvResponseBodyEnvChangeDetailOperationsOperation>> operation{};

  CreateAppEnvResponseBodyEnvChangeDetailOperations() {}

  explicit CreateAppEnvResponseBodyEnvChangeDetailOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      vector<boost::any> temp1;
      for(auto item1:*operation){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Operation"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      if (typeid(vector<boost::any>) == m["Operation"].type()) {
        vector<CreateAppEnvResponseBodyEnvChangeDetailOperationsOperation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Operation"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppEnvResponseBodyEnvChangeDetailOperationsOperation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operation = make_shared<vector<CreateAppEnvResponseBodyEnvChangeDetailOperationsOperation>>(expect1);
      }
    }
  }


  virtual ~CreateAppEnvResponseBodyEnvChangeDetailOperations() = default;
};
class CreateAppEnvResponseBodyEnvChangeDetail : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};
  shared_ptr<CreateAppEnvResponseBodyEnvChangeDetailOperations> operations{};

  CreateAppEnvResponseBodyEnvChangeDetail() {}

  explicit CreateAppEnvResponseBodyEnvChangeDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (operations) {
      res["Operations"] = operations ? boost::any(operations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Operations") != m.end() && !m["Operations"].empty()) {
      if (typeid(map<string, boost::any>) == m["Operations"].type()) {
        CreateAppEnvResponseBodyEnvChangeDetailOperations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Operations"]));
        operations = make_shared<CreateAppEnvResponseBodyEnvChangeDetailOperations>(model1);
      }
    }
  }


  virtual ~CreateAppEnvResponseBodyEnvChangeDetail() = default;
};
class CreateAppEnvResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateAppEnvResponseBodyEnvChangeDetail> envChangeDetail{};
  shared_ptr<string> code{};

  CreateAppEnvResponseBody() {}

  explicit CreateAppEnvResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (envChangeDetail) {
      res["EnvChangeDetail"] = envChangeDetail ? boost::any(envChangeDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("EnvChangeDetail") != m.end() && !m["EnvChangeDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChangeDetail"].type()) {
        CreateAppEnvResponseBodyEnvChangeDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChangeDetail"]));
        envChangeDetail = make_shared<CreateAppEnvResponseBodyEnvChangeDetail>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~CreateAppEnvResponseBody() = default;
};
class CreateAppEnvResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAppEnvResponseBody> body{};

  CreateAppEnvResponse() {}

  explicit CreateAppEnvResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppEnvResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppEnvResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppEnvResponse() = default;
};
class CreateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appDescription{};
  shared_ptr<string> categoryName{};
  shared_ptr<bool> usingSharedStorage{};
  shared_ptr<string> regionId{};

  CreateApplicationRequest() {}

  explicit CreateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appDescription) {
      res["AppDescription"] = boost::any(*appDescription);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (usingSharedStorage) {
      res["UsingSharedStorage"] = boost::any(*usingSharedStorage);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppDescription") != m.end() && !m["AppDescription"].empty()) {
      appDescription = make_shared<string>(boost::any_cast<string>(m["AppDescription"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("UsingSharedStorage") != m.end() && !m["UsingSharedStorage"].empty()) {
      usingSharedStorage = make_shared<bool>(boost::any_cast<bool>(m["UsingSharedStorage"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateApplicationRequest() = default;
};
class CreateApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<string> createUsername{};
  shared_ptr<string> appName{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> updateUsername{};
  shared_ptr<long> createTime{};
  shared_ptr<string> appId{};
  shared_ptr<string> categoryName{};
  shared_ptr<bool> usingSharedStorage{};
  shared_ptr<string> appDescription{};

  CreateApplicationResponseBodyApplication() {}

  explicit CreateApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createUsername) {
      res["CreateUsername"] = boost::any(*createUsername);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateUsername) {
      res["UpdateUsername"] = boost::any(*updateUsername);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (usingSharedStorage) {
      res["UsingSharedStorage"] = boost::any(*usingSharedStorage);
    }
    if (appDescription) {
      res["AppDescription"] = boost::any(*appDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateUsername") != m.end() && !m["CreateUsername"].empty()) {
      createUsername = make_shared<string>(boost::any_cast<string>(m["CreateUsername"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UpdateUsername") != m.end() && !m["UpdateUsername"].empty()) {
      updateUsername = make_shared<string>(boost::any_cast<string>(m["UpdateUsername"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("UsingSharedStorage") != m.end() && !m["UsingSharedStorage"].empty()) {
      usingSharedStorage = make_shared<bool>(boost::any_cast<bool>(m["UsingSharedStorage"]));
    }
    if (m.find("AppDescription") != m.end() && !m["AppDescription"].empty()) {
      appDescription = make_shared<string>(boost::any_cast<string>(m["AppDescription"]));
    }
  }


  virtual ~CreateApplicationResponseBodyApplication() = default;
};
class CreateApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<CreateApplicationResponseBodyApplication> application{};

  CreateApplicationResponseBody() {}

  explicit CreateApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        CreateApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<CreateApplicationResponseBodyApplication>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponseBody() = default;
};
class CreateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateApplicationResponseBody> body{};

  CreateApplicationResponse() {}

  explicit CreateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponse() = default;
};
class CreateConfigTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateName{};
  shared_ptr<string> templateDescription{};
  shared_ptr<string> appId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> sourceTemplateId{};
  shared_ptr<string> sourceEnvId{};
  shared_ptr<string> profileName{};
  shared_ptr<string> pkgVersionId{};
  shared_ptr<string> optionSettings{};
  shared_ptr<string> regionId{};

  CreateConfigTemplateRequest() {}

  explicit CreateConfigTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (sourceTemplateId) {
      res["SourceTemplateId"] = boost::any(*sourceTemplateId);
    }
    if (sourceEnvId) {
      res["SourceEnvId"] = boost::any(*sourceEnvId);
    }
    if (profileName) {
      res["ProfileName"] = boost::any(*profileName);
    }
    if (pkgVersionId) {
      res["PkgVersionId"] = boost::any(*pkgVersionId);
    }
    if (optionSettings) {
      res["OptionSettings"] = boost::any(*optionSettings);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("SourceTemplateId") != m.end() && !m["SourceTemplateId"].empty()) {
      sourceTemplateId = make_shared<string>(boost::any_cast<string>(m["SourceTemplateId"]));
    }
    if (m.find("SourceEnvId") != m.end() && !m["SourceEnvId"].empty()) {
      sourceEnvId = make_shared<string>(boost::any_cast<string>(m["SourceEnvId"]));
    }
    if (m.find("ProfileName") != m.end() && !m["ProfileName"].empty()) {
      profileName = make_shared<string>(boost::any_cast<string>(m["ProfileName"]));
    }
    if (m.find("PkgVersionId") != m.end() && !m["PkgVersionId"].empty()) {
      pkgVersionId = make_shared<string>(boost::any_cast<string>(m["PkgVersionId"]));
    }
    if (m.find("OptionSettings") != m.end() && !m["OptionSettings"].empty()) {
      optionSettings = make_shared<string>(boost::any_cast<string>(m["OptionSettings"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateConfigTemplateRequest() = default;
};
class CreateConfigTemplateResponseBodyConfigTemplate : public Darabonba::Model {
public:
  shared_ptr<long> updateTime{};
  shared_ptr<long> createTime{};
  shared_ptr<string> templateType{};
  shared_ptr<string> stackName{};
  shared_ptr<string> pkgVersionId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateDescription{};
  shared_ptr<string> appName{};
  shared_ptr<string> stackId{};
  shared_ptr<string> pkgVersionLabel{};
  shared_ptr<string> appId{};
  shared_ptr<string> templateId{};

  CreateConfigTemplateResponseBodyConfigTemplate() {}

  explicit CreateConfigTemplateResponseBodyConfigTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (pkgVersionId) {
      res["PkgVersionId"] = boost::any(*pkgVersionId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (pkgVersionLabel) {
      res["PkgVersionLabel"] = boost::any(*pkgVersionLabel);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("PkgVersionId") != m.end() && !m["PkgVersionId"].empty()) {
      pkgVersionId = make_shared<string>(boost::any_cast<string>(m["PkgVersionId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("PkgVersionLabel") != m.end() && !m["PkgVersionLabel"].empty()) {
      pkgVersionLabel = make_shared<string>(boost::any_cast<string>(m["PkgVersionLabel"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateConfigTemplateResponseBodyConfigTemplate() = default;
};
class CreateConfigTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateConfigTemplateResponseBodyConfigTemplate> configTemplate{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  CreateConfigTemplateResponseBody() {}

  explicit CreateConfigTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configTemplate) {
      res["ConfigTemplate"] = configTemplate ? boost::any(configTemplate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigTemplate") != m.end() && !m["ConfigTemplate"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigTemplate"].type()) {
        CreateConfigTemplateResponseBodyConfigTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigTemplate"]));
        configTemplate = make_shared<CreateConfigTemplateResponseBodyConfigTemplate>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~CreateConfigTemplateResponseBody() = default;
};
class CreateConfigTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateConfigTemplateResponseBody> body{};

  CreateConfigTemplateResponse() {}

  explicit CreateConfigTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateConfigTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConfigTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConfigTemplateResponse() = default;
};
class CreateOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> productName{};
  shared_ptr<string> regionId{};

  CreateOrderRequest() {}

  explicit CreateOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateOrderRequest() = default;
};
class CreateOrderResponseBodyOrderDetail : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  CreateOrderResponseBodyOrderDetail() {}

  explicit CreateOrderResponseBodyOrderDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~CreateOrderResponseBodyOrderDetail() = default;
};
class CreateOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateOrderResponseBodyOrderDetail> orderDetail{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  CreateOrderResponseBody() {}

  explicit CreateOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderDetail) {
      res["OrderDetail"] = orderDetail ? boost::any(orderDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderDetail") != m.end() && !m["OrderDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderDetail"].type()) {
        CreateOrderResponseBodyOrderDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderDetail"]));
        orderDetail = make_shared<CreateOrderResponseBodyOrderDetail>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~CreateOrderResponseBody() = default;
};
class CreateOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateOrderResponseBody> body{};

  CreateOrderResponse() {}

  explicit CreateOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOrderResponse() = default;
};
class CreatePkgVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> pkgVersionLabel{};
  shared_ptr<string> pkgVersionDescription{};
  shared_ptr<string> appId{};
  shared_ptr<string> packageSource{};
  shared_ptr<string> regionId{};

  CreatePkgVersionRequest() {}

  explicit CreatePkgVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pkgVersionLabel) {
      res["PkgVersionLabel"] = boost::any(*pkgVersionLabel);
    }
    if (pkgVersionDescription) {
      res["PkgVersionDescription"] = boost::any(*pkgVersionDescription);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (packageSource) {
      res["PackageSource"] = boost::any(*packageSource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PkgVersionLabel") != m.end() && !m["PkgVersionLabel"].empty()) {
      pkgVersionLabel = make_shared<string>(boost::any_cast<string>(m["PkgVersionLabel"]));
    }
    if (m.find("PkgVersionDescription") != m.end() && !m["PkgVersionDescription"].empty()) {
      pkgVersionDescription = make_shared<string>(boost::any_cast<string>(m["PkgVersionDescription"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PackageSource") != m.end() && !m["PackageSource"].empty()) {
      packageSource = make_shared<string>(boost::any_cast<string>(m["PackageSource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreatePkgVersionRequest() = default;
};
class CreatePkgVersionResponseBodyPkgVersion : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> pkgVersionLabel{};
  shared_ptr<long> createTime{};
  shared_ptr<string> appId{};
  shared_ptr<string> packageSource{};
  shared_ptr<string> pkgVersionId{};
  shared_ptr<string> pkgVersionDescription{};

  CreatePkgVersionResponseBodyPkgVersion() {}

  explicit CreatePkgVersionResponseBodyPkgVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (pkgVersionLabel) {
      res["PkgVersionLabel"] = boost::any(*pkgVersionLabel);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (packageSource) {
      res["PackageSource"] = boost::any(*packageSource);
    }
    if (pkgVersionId) {
      res["PkgVersionId"] = boost::any(*pkgVersionId);
    }
    if (pkgVersionDescription) {
      res["PkgVersionDescription"] = boost::any(*pkgVersionDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("PkgVersionLabel") != m.end() && !m["PkgVersionLabel"].empty()) {
      pkgVersionLabel = make_shared<string>(boost::any_cast<string>(m["PkgVersionLabel"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PackageSource") != m.end() && !m["PackageSource"].empty()) {
      packageSource = make_shared<string>(boost::any_cast<string>(m["PackageSource"]));
    }
    if (m.find("PkgVersionId") != m.end() && !m["PkgVersionId"].empty()) {
      pkgVersionId = make_shared<string>(boost::any_cast<string>(m["PkgVersionId"]));
    }
    if (m.find("PkgVersionDescription") != m.end() && !m["PkgVersionDescription"].empty()) {
      pkgVersionDescription = make_shared<string>(boost::any_cast<string>(m["PkgVersionDescription"]));
    }
  }


  virtual ~CreatePkgVersionResponseBodyPkgVersion() = default;
};
class CreatePkgVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreatePkgVersionResponseBodyPkgVersion> pkgVersion{};
  shared_ptr<string> code{};

  CreatePkgVersionResponseBody() {}

  explicit CreatePkgVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pkgVersion) {
      res["PkgVersion"] = pkgVersion ? boost::any(pkgVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PkgVersion") != m.end() && !m["PkgVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["PkgVersion"].type()) {
        CreatePkgVersionResponseBodyPkgVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PkgVersion"]));
        pkgVersion = make_shared<CreatePkgVersionResponseBodyPkgVersion>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~CreatePkgVersionResponseBody() = default;
};
class CreatePkgVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePkgVersionResponseBody> body{};

  CreatePkgVersionResponse() {}

  explicit CreatePkgVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePkgVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePkgVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePkgVersionResponse() = default;
};
class CreateStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  CreateStorageRequest() {}

  explicit CreateStorageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateStorageRequest() = default;
};
class CreateStorageResponseBodyStorage : public Darabonba::Model {
public:
  shared_ptr<long> updateTime{};
  shared_ptr<long> createTime{};
  shared_ptr<string> bucketName{};

  CreateStorageResponseBodyStorage() {}

  explicit CreateStorageResponseBodyStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
  }


  virtual ~CreateStorageResponseBodyStorage() = default;
};
class CreateStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateStorageResponseBodyStorage> storage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  CreateStorageResponseBody() {}

  explicit CreateStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storage) {
      res["Storage"] = storage ? boost::any(storage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Storage"].type()) {
        CreateStorageResponseBodyStorage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Storage"]));
        storage = make_shared<CreateStorageResponseBodyStorage>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~CreateStorageResponseBody() = default;
};
class CreateStorageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateStorageResponseBody> body{};

  CreateStorageResponse() {}

  explicit CreateStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateStorageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateStorageResponse() = default;
};
class DeleteAppEnvRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> regionId{};

  DeleteAppEnvRequest() {}

  explicit DeleteAppEnvRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteAppEnvRequest() = default;
};
class DeleteAppEnvResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  DeleteAppEnvResponseBody() {}

  explicit DeleteAppEnvResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DeleteAppEnvResponseBody() = default;
};
class DeleteAppEnvResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAppEnvResponseBody> body{};

  DeleteAppEnvResponse() {}

  explicit DeleteAppEnvResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppEnvResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppEnvResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppEnvResponse() = default;
};
class DeleteApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> regionId{};

  DeleteApplicationRequest() {}

  explicit DeleteApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteApplicationRequest() = default;
};
class DeleteApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  DeleteApplicationResponseBody() {}

  explicit DeleteApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DeleteApplicationResponseBody() = default;
};
class DeleteApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteApplicationResponseBody> body{};

  DeleteApplicationResponse() {}

  explicit DeleteApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApplicationResponse() = default;
};
class DeleteChangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeId{};
  shared_ptr<string> regionId{};

  DeleteChangeRequest() {}

  explicit DeleteChangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteChangeRequest() = default;
};
class DeleteChangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  DeleteChangeResponseBody() {}

  explicit DeleteChangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DeleteChangeResponseBody() = default;
};
class DeleteChangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteChangeResponseBody> body{};

  DeleteChangeResponse() {}

  explicit DeleteChangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteChangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChangeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChangeResponse() = default;
};
class DeleteConfigTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};
  shared_ptr<string> regionId{};

  DeleteConfigTemplateRequest() {}

  explicit DeleteConfigTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteConfigTemplateRequest() = default;
};
class DeleteConfigTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  DeleteConfigTemplateResponseBody() {}

  explicit DeleteConfigTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DeleteConfigTemplateResponseBody() = default;
};
class DeleteConfigTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteConfigTemplateResponseBody> body{};

  DeleteConfigTemplateResponse() {}

  explicit DeleteConfigTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteConfigTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConfigTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConfigTemplateResponse() = default;
};
class DeletePkgVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> pkgVersionId{};
  shared_ptr<string> regionId{};

  DeletePkgVersionRequest() {}

  explicit DeletePkgVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pkgVersionId) {
      res["PkgVersionId"] = boost::any(*pkgVersionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PkgVersionId") != m.end() && !m["PkgVersionId"].empty()) {
      pkgVersionId = make_shared<string>(boost::any_cast<string>(m["PkgVersionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeletePkgVersionRequest() = default;
};
class DeletePkgVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  DeletePkgVersionResponseBody() {}

  explicit DeletePkgVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DeletePkgVersionResponseBody() = default;
};
class DeletePkgVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeletePkgVersionResponseBody> body{};

  DeletePkgVersionResponse() {}

  explicit DeletePkgVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePkgVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePkgVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePkgVersionResponse() = default;
};
class DeployAppEnvRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<long> batchSize{};
  shared_ptr<long> batchPercent{};
  shared_ptr<long> batchInterval{};
  shared_ptr<bool> pauseBetweenBatches{};
  shared_ptr<string> pkgVersionId{};
  shared_ptr<string> regionId{};

  DeployAppEnvRequest() {}

  explicit DeployAppEnvRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (batchSize) {
      res["BatchSize"] = boost::any(*batchSize);
    }
    if (batchPercent) {
      res["BatchPercent"] = boost::any(*batchPercent);
    }
    if (batchInterval) {
      res["BatchInterval"] = boost::any(*batchInterval);
    }
    if (pauseBetweenBatches) {
      res["PauseBetweenBatches"] = boost::any(*pauseBetweenBatches);
    }
    if (pkgVersionId) {
      res["PkgVersionId"] = boost::any(*pkgVersionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("BatchSize") != m.end() && !m["BatchSize"].empty()) {
      batchSize = make_shared<long>(boost::any_cast<long>(m["BatchSize"]));
    }
    if (m.find("BatchPercent") != m.end() && !m["BatchPercent"].empty()) {
      batchPercent = make_shared<long>(boost::any_cast<long>(m["BatchPercent"]));
    }
    if (m.find("BatchInterval") != m.end() && !m["BatchInterval"].empty()) {
      batchInterval = make_shared<long>(boost::any_cast<long>(m["BatchInterval"]));
    }
    if (m.find("PauseBetweenBatches") != m.end() && !m["PauseBetweenBatches"].empty()) {
      pauseBetweenBatches = make_shared<bool>(boost::any_cast<bool>(m["PauseBetweenBatches"]));
    }
    if (m.find("PkgVersionId") != m.end() && !m["PkgVersionId"].empty()) {
      pkgVersionId = make_shared<string>(boost::any_cast<string>(m["PkgVersionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeployAppEnvRequest() = default;
};
class DeployAppEnvResponseBodyEnvChange : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};

  DeployAppEnvResponseBodyEnvChange() {}

  explicit DeployAppEnvResponseBodyEnvChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~DeployAppEnvResponseBodyEnvChange() = default;
};
class DeployAppEnvResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeployAppEnvResponseBodyEnvChange> envChange{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  DeployAppEnvResponseBody() {}

  explicit DeployAppEnvResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envChange) {
      res["EnvChange"] = envChange ? boost::any(envChange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvChange") != m.end() && !m["EnvChange"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChange"].type()) {
        DeployAppEnvResponseBodyEnvChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChange"]));
        envChange = make_shared<DeployAppEnvResponseBodyEnvChange>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DeployAppEnvResponseBody() = default;
};
class DeployAppEnvResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeployAppEnvResponseBody> body{};

  DeployAppEnvResponse() {}

  explicit DeployAppEnvResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployAppEnvResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployAppEnvResponseBody>(model1);
      }
    }
  }


  virtual ~DeployAppEnvResponse() = default;
};
class DescribeAppEnvInstanceHealthRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> regionId{};

  DescribeAppEnvInstanceHealthRequest() {}

  explicit DescribeAppEnvInstanceHealthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAppEnvInstanceHealthRequest() = default;
};
class DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthListInstanceHealth : public Darabonba::Model {
public:
  shared_ptr<string> appStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> disconnectedTime{};
  shared_ptr<string> agentStatus{};

  DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthListInstanceHealth() {}

  explicit DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthListInstanceHealth(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (disconnectedTime) {
      res["DisconnectedTime"] = boost::any(*disconnectedTime);
    }
    if (agentStatus) {
      res["AgentStatus"] = boost::any(*agentStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DisconnectedTime") != m.end() && !m["DisconnectedTime"].empty()) {
      disconnectedTime = make_shared<string>(boost::any_cast<string>(m["DisconnectedTime"]));
    }
    if (m.find("AgentStatus") != m.end() && !m["AgentStatus"].empty()) {
      agentStatus = make_shared<string>(boost::any_cast<string>(m["AgentStatus"]));
    }
  }


  virtual ~DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthListInstanceHealth() = default;
};
class DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthListInstanceHealth>> instanceHealth{};

  DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthList() {}

  explicit DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceHealth) {
      vector<boost::any> temp1;
      for(auto item1:*instanceHealth){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceHealth"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceHealth") != m.end() && !m["InstanceHealth"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceHealth"].type()) {
        vector<DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthListInstanceHealth> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceHealth"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthListInstanceHealth model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceHealth = make_shared<vector<DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthListInstanceHealth>>(expect1);
      }
    }
  }


  virtual ~DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthList() = default;
};
class DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealth : public Darabonba::Model {
public:
  shared_ptr<bool> enableHealthCheck{};
  shared_ptr<string> envName{};
  shared_ptr<string> envId{};
  shared_ptr<DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthList> instanceHealthList{};

  DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealth() {}

  explicit DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealth(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableHealthCheck) {
      res["EnableHealthCheck"] = boost::any(*enableHealthCheck);
    }
    if (envName) {
      res["EnvName"] = boost::any(*envName);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (instanceHealthList) {
      res["InstanceHealthList"] = instanceHealthList ? boost::any(instanceHealthList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableHealthCheck") != m.end() && !m["EnableHealthCheck"].empty()) {
      enableHealthCheck = make_shared<bool>(boost::any_cast<bool>(m["EnableHealthCheck"]));
    }
    if (m.find("EnvName") != m.end() && !m["EnvName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["EnvName"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("InstanceHealthList") != m.end() && !m["InstanceHealthList"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceHealthList"].type()) {
        DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceHealthList"]));
        instanceHealthList = make_shared<DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealthInstanceHealthList>(model1);
      }
    }
  }


  virtual ~DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealth() = default;
};
class DescribeAppEnvInstanceHealthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealth> envInstanceHealth{};

  DescribeAppEnvInstanceHealthResponseBody() {}

  explicit DescribeAppEnvInstanceHealthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (envInstanceHealth) {
      res["EnvInstanceHealth"] = envInstanceHealth ? boost::any(envInstanceHealth->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EnvInstanceHealth") != m.end() && !m["EnvInstanceHealth"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvInstanceHealth"].type()) {
        DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealth model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvInstanceHealth"]));
        envInstanceHealth = make_shared<DescribeAppEnvInstanceHealthResponseBodyEnvInstanceHealth>(model1);
      }
    }
  }


  virtual ~DescribeAppEnvInstanceHealthResponseBody() = default;
};
class DescribeAppEnvInstanceHealthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAppEnvInstanceHealthResponseBody> body{};

  DescribeAppEnvInstanceHealthResponse() {}

  explicit DescribeAppEnvInstanceHealthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAppEnvInstanceHealthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppEnvInstanceHealthResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppEnvInstanceHealthResponse() = default;
};
class DescribeAppEnvsRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> appId{};
  shared_ptr<bool> includeTerminated{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> envName{};
  shared_ptr<string> envSearch{};
  shared_ptr<bool> recentUpdated{};
  shared_ptr<string> stackSearch{};
  shared_ptr<string> regionId{};

  DescribeAppEnvsRequest() {}

  explicit DescribeAppEnvsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (includeTerminated) {
      res["IncludeTerminated"] = boost::any(*includeTerminated);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (envName) {
      res["EnvName"] = boost::any(*envName);
    }
    if (envSearch) {
      res["EnvSearch"] = boost::any(*envSearch);
    }
    if (recentUpdated) {
      res["RecentUpdated"] = boost::any(*recentUpdated);
    }
    if (stackSearch) {
      res["StackSearch"] = boost::any(*stackSearch);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("IncludeTerminated") != m.end() && !m["IncludeTerminated"].empty()) {
      includeTerminated = make_shared<bool>(boost::any_cast<bool>(m["IncludeTerminated"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("EnvName") != m.end() && !m["EnvName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["EnvName"]));
    }
    if (m.find("EnvSearch") != m.end() && !m["EnvSearch"].empty()) {
      envSearch = make_shared<string>(boost::any_cast<string>(m["EnvSearch"]));
    }
    if (m.find("RecentUpdated") != m.end() && !m["RecentUpdated"].empty()) {
      recentUpdated = make_shared<bool>(boost::any_cast<bool>(m["RecentUpdated"]));
    }
    if (m.find("StackSearch") != m.end() && !m["StackSearch"].empty()) {
      stackSearch = make_shared<string>(boost::any_cast<string>(m["StackSearch"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAppEnvsRequest() = default;
};
class DescribeAppEnvsResponseBodyAppEnvsAppEnv : public Darabonba::Model {
public:
  shared_ptr<long> updateTime{};
  shared_ptr<long> totalInstances{};
  shared_ptr<string> pkgVersionStorageKey{};
  shared_ptr<string> latestChangeId{};
  shared_ptr<string> envStatus{};
  shared_ptr<long> createTime{};
  shared_ptr<string> lastEnvStatus{};
  shared_ptr<string> pkgVersionId{};
  shared_ptr<string> envDescription{};
  shared_ptr<bool> applyingChange{};
  shared_ptr<string> envType{};
  shared_ptr<string> appName{};
  shared_ptr<string> createUsername{};
  shared_ptr<string> appId{};
  shared_ptr<string> dataRoot{};
  shared_ptr<string> storageBase{};
  shared_ptr<string> updateUsername{};
  shared_ptr<string> envName{};
  shared_ptr<string> logBase{};
  shared_ptr<string> stackName{};
  shared_ptr<string> categoryName{};
  shared_ptr<bool> usingSharedStorage{};
  shared_ptr<string> changeBanner{};
  shared_ptr<string> stackId{};
  shared_ptr<string> pkgVersionLabel{};
  shared_ptr<string> envId{};
  shared_ptr<bool> abortingChange{};

  DescribeAppEnvsResponseBodyAppEnvsAppEnv() {}

  explicit DescribeAppEnvsResponseBodyAppEnvsAppEnv(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (totalInstances) {
      res["TotalInstances"] = boost::any(*totalInstances);
    }
    if (pkgVersionStorageKey) {
      res["PkgVersionStorageKey"] = boost::any(*pkgVersionStorageKey);
    }
    if (latestChangeId) {
      res["LatestChangeId"] = boost::any(*latestChangeId);
    }
    if (envStatus) {
      res["EnvStatus"] = boost::any(*envStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastEnvStatus) {
      res["LastEnvStatus"] = boost::any(*lastEnvStatus);
    }
    if (pkgVersionId) {
      res["PkgVersionId"] = boost::any(*pkgVersionId);
    }
    if (envDescription) {
      res["EnvDescription"] = boost::any(*envDescription);
    }
    if (applyingChange) {
      res["ApplyingChange"] = boost::any(*applyingChange);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createUsername) {
      res["CreateUsername"] = boost::any(*createUsername);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (dataRoot) {
      res["DataRoot"] = boost::any(*dataRoot);
    }
    if (storageBase) {
      res["StorageBase"] = boost::any(*storageBase);
    }
    if (updateUsername) {
      res["UpdateUsername"] = boost::any(*updateUsername);
    }
    if (envName) {
      res["EnvName"] = boost::any(*envName);
    }
    if (logBase) {
      res["LogBase"] = boost::any(*logBase);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (usingSharedStorage) {
      res["UsingSharedStorage"] = boost::any(*usingSharedStorage);
    }
    if (changeBanner) {
      res["ChangeBanner"] = boost::any(*changeBanner);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (pkgVersionLabel) {
      res["PkgVersionLabel"] = boost::any(*pkgVersionLabel);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (abortingChange) {
      res["AbortingChange"] = boost::any(*abortingChange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("TotalInstances") != m.end() && !m["TotalInstances"].empty()) {
      totalInstances = make_shared<long>(boost::any_cast<long>(m["TotalInstances"]));
    }
    if (m.find("PkgVersionStorageKey") != m.end() && !m["PkgVersionStorageKey"].empty()) {
      pkgVersionStorageKey = make_shared<string>(boost::any_cast<string>(m["PkgVersionStorageKey"]));
    }
    if (m.find("LatestChangeId") != m.end() && !m["LatestChangeId"].empty()) {
      latestChangeId = make_shared<string>(boost::any_cast<string>(m["LatestChangeId"]));
    }
    if (m.find("EnvStatus") != m.end() && !m["EnvStatus"].empty()) {
      envStatus = make_shared<string>(boost::any_cast<string>(m["EnvStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("LastEnvStatus") != m.end() && !m["LastEnvStatus"].empty()) {
      lastEnvStatus = make_shared<string>(boost::any_cast<string>(m["LastEnvStatus"]));
    }
    if (m.find("PkgVersionId") != m.end() && !m["PkgVersionId"].empty()) {
      pkgVersionId = make_shared<string>(boost::any_cast<string>(m["PkgVersionId"]));
    }
    if (m.find("EnvDescription") != m.end() && !m["EnvDescription"].empty()) {
      envDescription = make_shared<string>(boost::any_cast<string>(m["EnvDescription"]));
    }
    if (m.find("ApplyingChange") != m.end() && !m["ApplyingChange"].empty()) {
      applyingChange = make_shared<bool>(boost::any_cast<bool>(m["ApplyingChange"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreateUsername") != m.end() && !m["CreateUsername"].empty()) {
      createUsername = make_shared<string>(boost::any_cast<string>(m["CreateUsername"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("DataRoot") != m.end() && !m["DataRoot"].empty()) {
      dataRoot = make_shared<string>(boost::any_cast<string>(m["DataRoot"]));
    }
    if (m.find("StorageBase") != m.end() && !m["StorageBase"].empty()) {
      storageBase = make_shared<string>(boost::any_cast<string>(m["StorageBase"]));
    }
    if (m.find("UpdateUsername") != m.end() && !m["UpdateUsername"].empty()) {
      updateUsername = make_shared<string>(boost::any_cast<string>(m["UpdateUsername"]));
    }
    if (m.find("EnvName") != m.end() && !m["EnvName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["EnvName"]));
    }
    if (m.find("LogBase") != m.end() && !m["LogBase"].empty()) {
      logBase = make_shared<string>(boost::any_cast<string>(m["LogBase"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("UsingSharedStorage") != m.end() && !m["UsingSharedStorage"].empty()) {
      usingSharedStorage = make_shared<bool>(boost::any_cast<bool>(m["UsingSharedStorage"]));
    }
    if (m.find("ChangeBanner") != m.end() && !m["ChangeBanner"].empty()) {
      changeBanner = make_shared<string>(boost::any_cast<string>(m["ChangeBanner"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("PkgVersionLabel") != m.end() && !m["PkgVersionLabel"].empty()) {
      pkgVersionLabel = make_shared<string>(boost::any_cast<string>(m["PkgVersionLabel"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("AbortingChange") != m.end() && !m["AbortingChange"].empty()) {
      abortingChange = make_shared<bool>(boost::any_cast<bool>(m["AbortingChange"]));
    }
  }


  virtual ~DescribeAppEnvsResponseBodyAppEnvsAppEnv() = default;
};
class DescribeAppEnvsResponseBodyAppEnvs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppEnvsResponseBodyAppEnvsAppEnv>> appEnv{};

  DescribeAppEnvsResponseBodyAppEnvs() {}

  explicit DescribeAppEnvsResponseBodyAppEnvs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appEnv) {
      vector<boost::any> temp1;
      for(auto item1:*appEnv){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppEnv"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppEnv") != m.end() && !m["AppEnv"].empty()) {
      if (typeid(vector<boost::any>) == m["AppEnv"].type()) {
        vector<DescribeAppEnvsResponseBodyAppEnvsAppEnv> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppEnv"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppEnvsResponseBodyAppEnvsAppEnv model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appEnv = make_shared<vector<DescribeAppEnvsResponseBodyAppEnvsAppEnv>>(expect1);
      }
    }
  }


  virtual ~DescribeAppEnvsResponseBodyAppEnvs() = default;
};
class DescribeAppEnvsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeAppEnvsResponseBodyAppEnvs> appEnvs{};
  shared_ptr<string> code{};

  DescribeAppEnvsResponseBody() {}

  explicit DescribeAppEnvsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (appEnvs) {
      res["AppEnvs"] = appEnvs ? boost::any(appEnvs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("AppEnvs") != m.end() && !m["AppEnvs"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppEnvs"].type()) {
        DescribeAppEnvsResponseBodyAppEnvs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppEnvs"]));
        appEnvs = make_shared<DescribeAppEnvsResponseBodyAppEnvs>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeAppEnvsResponseBody() = default;
};
class DescribeAppEnvsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAppEnvsResponseBody> body{};

  DescribeAppEnvsResponse() {}

  explicit DescribeAppEnvsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAppEnvsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppEnvsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppEnvsResponse() = default;
};
class DescribeAppEnvStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> regionId{};

  DescribeAppEnvStatusRequest() {}

  explicit DescribeAppEnvStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAppEnvStatusRequest() = default;
};
class DescribeAppEnvStatusResponseBodyEnvStatusInstanceAgentStatus : public Darabonba::Model {
public:
  shared_ptr<long> connectedInstances{};
  shared_ptr<long> disconnectedInstances{};

  DescribeAppEnvStatusResponseBodyEnvStatusInstanceAgentStatus() {}

  explicit DescribeAppEnvStatusResponseBodyEnvStatusInstanceAgentStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectedInstances) {
      res["ConnectedInstances"] = boost::any(*connectedInstances);
    }
    if (disconnectedInstances) {
      res["DisconnectedInstances"] = boost::any(*disconnectedInstances);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectedInstances") != m.end() && !m["ConnectedInstances"].empty()) {
      connectedInstances = make_shared<long>(boost::any_cast<long>(m["ConnectedInstances"]));
    }
    if (m.find("DisconnectedInstances") != m.end() && !m["DisconnectedInstances"].empty()) {
      disconnectedInstances = make_shared<long>(boost::any_cast<long>(m["DisconnectedInstances"]));
    }
  }


  virtual ~DescribeAppEnvStatusResponseBodyEnvStatusInstanceAgentStatus() = default;
};
class DescribeAppEnvStatusResponseBodyEnvStatusInstanceAppStatus : public Darabonba::Model {
public:
  shared_ptr<long> healthyInstances{};
  shared_ptr<long> stoppedInstances{};
  shared_ptr<long> unhealthyInstances{};
  shared_ptr<long> unknownInstances{};

  DescribeAppEnvStatusResponseBodyEnvStatusInstanceAppStatus() {}

  explicit DescribeAppEnvStatusResponseBodyEnvStatusInstanceAppStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthyInstances) {
      res["HealthyInstances"] = boost::any(*healthyInstances);
    }
    if (stoppedInstances) {
      res["StoppedInstances"] = boost::any(*stoppedInstances);
    }
    if (unhealthyInstances) {
      res["UnhealthyInstances"] = boost::any(*unhealthyInstances);
    }
    if (unknownInstances) {
      res["UnknownInstances"] = boost::any(*unknownInstances);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthyInstances") != m.end() && !m["HealthyInstances"].empty()) {
      healthyInstances = make_shared<long>(boost::any_cast<long>(m["HealthyInstances"]));
    }
    if (m.find("StoppedInstances") != m.end() && !m["StoppedInstances"].empty()) {
      stoppedInstances = make_shared<long>(boost::any_cast<long>(m["StoppedInstances"]));
    }
    if (m.find("UnhealthyInstances") != m.end() && !m["UnhealthyInstances"].empty()) {
      unhealthyInstances = make_shared<long>(boost::any_cast<long>(m["UnhealthyInstances"]));
    }
    if (m.find("UnknownInstances") != m.end() && !m["UnknownInstances"].empty()) {
      unknownInstances = make_shared<long>(boost::any_cast<long>(m["UnknownInstances"]));
    }
  }


  virtual ~DescribeAppEnvStatusResponseBodyEnvStatusInstanceAppStatus() = default;
};
class DescribeAppEnvStatusResponseBodyEnvStatus : public Darabonba::Model {
public:
  shared_ptr<string> changeBanner{};
  shared_ptr<string> latestChangeId{};
  shared_ptr<string> envStatus{};
  shared_ptr<string> envName{};
  shared_ptr<DescribeAppEnvStatusResponseBodyEnvStatusInstanceAgentStatus> instanceAgentStatus{};
  shared_ptr<string> lastEnvStatus{};
  shared_ptr<DescribeAppEnvStatusResponseBodyEnvStatusInstanceAppStatus> instanceAppStatus{};
  shared_ptr<string> envId{};
  shared_ptr<bool> abortingChange{};
  shared_ptr<bool> applyingChange{};

  DescribeAppEnvStatusResponseBodyEnvStatus() {}

  explicit DescribeAppEnvStatusResponseBodyEnvStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeBanner) {
      res["ChangeBanner"] = boost::any(*changeBanner);
    }
    if (latestChangeId) {
      res["LatestChangeId"] = boost::any(*latestChangeId);
    }
    if (envStatus) {
      res["EnvStatus"] = boost::any(*envStatus);
    }
    if (envName) {
      res["EnvName"] = boost::any(*envName);
    }
    if (instanceAgentStatus) {
      res["InstanceAgentStatus"] = instanceAgentStatus ? boost::any(instanceAgentStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (lastEnvStatus) {
      res["LastEnvStatus"] = boost::any(*lastEnvStatus);
    }
    if (instanceAppStatus) {
      res["InstanceAppStatus"] = instanceAppStatus ? boost::any(instanceAppStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (abortingChange) {
      res["AbortingChange"] = boost::any(*abortingChange);
    }
    if (applyingChange) {
      res["ApplyingChange"] = boost::any(*applyingChange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeBanner") != m.end() && !m["ChangeBanner"].empty()) {
      changeBanner = make_shared<string>(boost::any_cast<string>(m["ChangeBanner"]));
    }
    if (m.find("LatestChangeId") != m.end() && !m["LatestChangeId"].empty()) {
      latestChangeId = make_shared<string>(boost::any_cast<string>(m["LatestChangeId"]));
    }
    if (m.find("EnvStatus") != m.end() && !m["EnvStatus"].empty()) {
      envStatus = make_shared<string>(boost::any_cast<string>(m["EnvStatus"]));
    }
    if (m.find("EnvName") != m.end() && !m["EnvName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["EnvName"]));
    }
    if (m.find("InstanceAgentStatus") != m.end() && !m["InstanceAgentStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceAgentStatus"].type()) {
        DescribeAppEnvStatusResponseBodyEnvStatusInstanceAgentStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceAgentStatus"]));
        instanceAgentStatus = make_shared<DescribeAppEnvStatusResponseBodyEnvStatusInstanceAgentStatus>(model1);
      }
    }
    if (m.find("LastEnvStatus") != m.end() && !m["LastEnvStatus"].empty()) {
      lastEnvStatus = make_shared<string>(boost::any_cast<string>(m["LastEnvStatus"]));
    }
    if (m.find("InstanceAppStatus") != m.end() && !m["InstanceAppStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceAppStatus"].type()) {
        DescribeAppEnvStatusResponseBodyEnvStatusInstanceAppStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceAppStatus"]));
        instanceAppStatus = make_shared<DescribeAppEnvStatusResponseBodyEnvStatusInstanceAppStatus>(model1);
      }
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("AbortingChange") != m.end() && !m["AbortingChange"].empty()) {
      abortingChange = make_shared<bool>(boost::any_cast<bool>(m["AbortingChange"]));
    }
    if (m.find("ApplyingChange") != m.end() && !m["ApplyingChange"].empty()) {
      applyingChange = make_shared<bool>(boost::any_cast<bool>(m["ApplyingChange"]));
    }
  }


  virtual ~DescribeAppEnvStatusResponseBodyEnvStatus() = default;
};
class DescribeAppEnvStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAppEnvStatusResponseBodyEnvStatus> envStatus{};
  shared_ptr<string> code{};

  DescribeAppEnvStatusResponseBody() {}

  explicit DescribeAppEnvStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (envStatus) {
      res["EnvStatus"] = envStatus ? boost::any(envStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("EnvStatus") != m.end() && !m["EnvStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvStatus"].type()) {
        DescribeAppEnvStatusResponseBodyEnvStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvStatus"]));
        envStatus = make_shared<DescribeAppEnvStatusResponseBodyEnvStatus>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeAppEnvStatusResponseBody() = default;
};
class DescribeAppEnvStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAppEnvStatusResponseBody> body{};

  DescribeAppEnvStatusResponse() {}

  explicit DescribeAppEnvStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAppEnvStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppEnvStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppEnvStatusResponse() = default;
};
class DescribeApplicationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> appName{};
  shared_ptr<string> appSearch{};
  shared_ptr<string> envSearch{};
  shared_ptr<string> stackSearch{};
  shared_ptr<string> categorySearch{};
  shared_ptr<string> regionId{};

  DescribeApplicationsRequest() {}

  explicit DescribeApplicationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appSearch) {
      res["AppSearch"] = boost::any(*appSearch);
    }
    if (envSearch) {
      res["EnvSearch"] = boost::any(*envSearch);
    }
    if (stackSearch) {
      res["StackSearch"] = boost::any(*stackSearch);
    }
    if (categorySearch) {
      res["CategorySearch"] = boost::any(*categorySearch);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppSearch") != m.end() && !m["AppSearch"].empty()) {
      appSearch = make_shared<string>(boost::any_cast<string>(m["AppSearch"]));
    }
    if (m.find("EnvSearch") != m.end() && !m["EnvSearch"].empty()) {
      envSearch = make_shared<string>(boost::any_cast<string>(m["EnvSearch"]));
    }
    if (m.find("StackSearch") != m.end() && !m["StackSearch"].empty()) {
      stackSearch = make_shared<string>(boost::any_cast<string>(m["StackSearch"]));
    }
    if (m.find("CategorySearch") != m.end() && !m["CategorySearch"].empty()) {
      categorySearch = make_shared<string>(boost::any_cast<string>(m["CategorySearch"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeApplicationsRequest() = default;
};
class DescribeApplicationsResponseBodyApplicationsApplication : public Darabonba::Model {
public:
  shared_ptr<long> totalEnvs{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> updateUsername{};
  shared_ptr<long> runningEnvs{};
  shared_ptr<long> createTime{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> usingSharedStorage{};
  shared_ptr<string> createUsername{};
  shared_ptr<string> appName{};
  shared_ptr<string> appId{};
  shared_ptr<long> terminatedEnvs{};
  shared_ptr<string> appDescription{};

  DescribeApplicationsResponseBodyApplicationsApplication() {}

  explicit DescribeApplicationsResponseBodyApplicationsApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalEnvs) {
      res["TotalEnvs"] = boost::any(*totalEnvs);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateUsername) {
      res["UpdateUsername"] = boost::any(*updateUsername);
    }
    if (runningEnvs) {
      res["RunningEnvs"] = boost::any(*runningEnvs);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (usingSharedStorage) {
      res["UsingSharedStorage"] = boost::any(*usingSharedStorage);
    }
    if (createUsername) {
      res["CreateUsername"] = boost::any(*createUsername);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (terminatedEnvs) {
      res["TerminatedEnvs"] = boost::any(*terminatedEnvs);
    }
    if (appDescription) {
      res["AppDescription"] = boost::any(*appDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalEnvs") != m.end() && !m["TotalEnvs"].empty()) {
      totalEnvs = make_shared<long>(boost::any_cast<long>(m["TotalEnvs"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UpdateUsername") != m.end() && !m["UpdateUsername"].empty()) {
      updateUsername = make_shared<string>(boost::any_cast<string>(m["UpdateUsername"]));
    }
    if (m.find("RunningEnvs") != m.end() && !m["RunningEnvs"].empty()) {
      runningEnvs = make_shared<long>(boost::any_cast<long>(m["RunningEnvs"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("UsingSharedStorage") != m.end() && !m["UsingSharedStorage"].empty()) {
      usingSharedStorage = make_shared<string>(boost::any_cast<string>(m["UsingSharedStorage"]));
    }
    if (m.find("CreateUsername") != m.end() && !m["CreateUsername"].empty()) {
      createUsername = make_shared<string>(boost::any_cast<string>(m["CreateUsername"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("TerminatedEnvs") != m.end() && !m["TerminatedEnvs"].empty()) {
      terminatedEnvs = make_shared<long>(boost::any_cast<long>(m["TerminatedEnvs"]));
    }
    if (m.find("AppDescription") != m.end() && !m["AppDescription"].empty()) {
      appDescription = make_shared<string>(boost::any_cast<string>(m["AppDescription"]));
    }
  }


  virtual ~DescribeApplicationsResponseBodyApplicationsApplication() = default;
};
class DescribeApplicationsResponseBodyApplications : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApplicationsResponseBodyApplicationsApplication>> application{};

  DescribeApplicationsResponseBodyApplications() {}

  explicit DescribeApplicationsResponseBodyApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      vector<boost::any> temp1;
      for(auto item1:*application){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Application"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(vector<boost::any>) == m["Application"].type()) {
        vector<DescribeApplicationsResponseBodyApplicationsApplication> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Application"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApplicationsResponseBodyApplicationsApplication model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        application = make_shared<vector<DescribeApplicationsResponseBodyApplicationsApplication>>(expect1);
      }
    }
  }


  virtual ~DescribeApplicationsResponseBodyApplications() = default;
};
class DescribeApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribeApplicationsResponseBodyApplications> applications{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> code{};

  DescribeApplicationsResponseBody() {}

  explicit DescribeApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (applications) {
      res["Applications"] = applications ? boost::any(applications->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(map<string, boost::any>) == m["Applications"].type()) {
        DescribeApplicationsResponseBodyApplications model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Applications"]));
        applications = make_shared<DescribeApplicationsResponseBodyApplications>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeApplicationsResponseBody() = default;
};
class DescribeApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeApplicationsResponseBody> body{};

  DescribeApplicationsResponse() {}

  explicit DescribeApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApplicationsResponse() = default;
};
class DescribeCategoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeCategoriesRequest() {}

  explicit DescribeCategoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeCategoriesRequest() = default;
};
class DescribeCategoriesResponseBodyCategoriesCategoryDemoProjectsDemoProject : public Darabonba::Model {
public:
  shared_ptr<string> sourceUrl{};
  shared_ptr<string> packageDownloadUrl{};
  shared_ptr<string> packageUrl{};
  shared_ptr<string> regionId{};

  DescribeCategoriesResponseBodyCategoriesCategoryDemoProjectsDemoProject() {}

  explicit DescribeCategoriesResponseBodyCategoriesCategoryDemoProjectsDemoProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (packageDownloadUrl) {
      res["PackageDownloadUrl"] = boost::any(*packageDownloadUrl);
    }
    if (packageUrl) {
      res["PackageUrl"] = boost::any(*packageUrl);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("PackageDownloadUrl") != m.end() && !m["PackageDownloadUrl"].empty()) {
      packageDownloadUrl = make_shared<string>(boost::any_cast<string>(m["PackageDownloadUrl"]));
    }
    if (m.find("PackageUrl") != m.end() && !m["PackageUrl"].empty()) {
      packageUrl = make_shared<string>(boost::any_cast<string>(m["PackageUrl"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeCategoriesResponseBodyCategoriesCategoryDemoProjectsDemoProject() = default;
};
class DescribeCategoriesResponseBodyCategoriesCategoryDemoProjects : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCategoriesResponseBodyCategoriesCategoryDemoProjectsDemoProject>> demoProject{};

  DescribeCategoriesResponseBodyCategoriesCategoryDemoProjects() {}

  explicit DescribeCategoriesResponseBodyCategoriesCategoryDemoProjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (demoProject) {
      vector<boost::any> temp1;
      for(auto item1:*demoProject){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DemoProject"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DemoProject") != m.end() && !m["DemoProject"].empty()) {
      if (typeid(vector<boost::any>) == m["DemoProject"].type()) {
        vector<DescribeCategoriesResponseBodyCategoriesCategoryDemoProjectsDemoProject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DemoProject"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCategoriesResponseBodyCategoriesCategoryDemoProjectsDemoProject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        demoProject = make_shared<vector<DescribeCategoriesResponseBodyCategoriesCategoryDemoProjectsDemoProject>>(expect1);
      }
    }
  }


  virtual ~DescribeCategoriesResponseBodyCategoriesCategoryDemoProjects() = default;
};
class DescribeCategoriesResponseBodyCategoriesCategory : public Darabonba::Model {
public:
  shared_ptr<string> categoryLogo{};
  shared_ptr<string> updateTime{};
  shared_ptr<DescribeCategoriesResponseBodyCategoriesCategoryDemoProjects> demoProjects{};
  shared_ptr<string> createTime{};
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> categoryDescription{};

  DescribeCategoriesResponseBodyCategoriesCategory() {}

  explicit DescribeCategoriesResponseBodyCategoriesCategory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryLogo) {
      res["CategoryLogo"] = boost::any(*categoryLogo);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (demoProjects) {
      res["DemoProjects"] = demoProjects ? boost::any(demoProjects->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (categoryDescription) {
      res["CategoryDescription"] = boost::any(*categoryDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryLogo") != m.end() && !m["CategoryLogo"].empty()) {
      categoryLogo = make_shared<string>(boost::any_cast<string>(m["CategoryLogo"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("DemoProjects") != m.end() && !m["DemoProjects"].empty()) {
      if (typeid(map<string, boost::any>) == m["DemoProjects"].type()) {
        DescribeCategoriesResponseBodyCategoriesCategoryDemoProjects model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DemoProjects"]));
        demoProjects = make_shared<DescribeCategoriesResponseBodyCategoriesCategoryDemoProjects>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("CategoryDescription") != m.end() && !m["CategoryDescription"].empty()) {
      categoryDescription = make_shared<string>(boost::any_cast<string>(m["CategoryDescription"]));
    }
  }


  virtual ~DescribeCategoriesResponseBodyCategoriesCategory() = default;
};
class DescribeCategoriesResponseBodyCategories : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCategoriesResponseBodyCategoriesCategory>> category{};

  DescribeCategoriesResponseBodyCategories() {}

  explicit DescribeCategoriesResponseBodyCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      vector<boost::any> temp1;
      for(auto item1:*category){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Category"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      if (typeid(vector<boost::any>) == m["Category"].type()) {
        vector<DescribeCategoriesResponseBodyCategoriesCategory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Category"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCategoriesResponseBodyCategoriesCategory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        category = make_shared<vector<DescribeCategoriesResponseBodyCategoriesCategory>>(expect1);
      }
    }
  }


  virtual ~DescribeCategoriesResponseBodyCategories() = default;
};
class DescribeCategoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeCategoriesResponseBodyCategories> categories{};
  shared_ptr<string> code{};

  DescribeCategoriesResponseBody() {}

  explicit DescribeCategoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (categories) {
      res["Categories"] = categories ? boost::any(categories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(map<string, boost::any>) == m["Categories"].type()) {
        DescribeCategoriesResponseBodyCategories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Categories"]));
        categories = make_shared<DescribeCategoriesResponseBodyCategories>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeCategoriesResponseBody() = default;
};
class DescribeCategoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCategoriesResponseBody> body{};

  DescribeCategoriesResponse() {}

  explicit DescribeCategoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCategoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCategoriesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCategoriesResponse() = default;
};
class DescribeChangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> changeId{};
  shared_ptr<string> regionId{};

  DescribeChangeRequest() {}

  explicit DescribeChangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeChangeRequest() = default;
};
class DescribeChangeResponseBodyChange : public Darabonba::Model {
public:
  shared_ptr<bool> changePaused{};
  shared_ptr<string> changeDescription{};
  shared_ptr<long> finishTime{};
  shared_ptr<long> updateTime{};
  shared_ptr<bool> changeTimedout{};
  shared_ptr<long> createTime{};
  shared_ptr<string> changeMessage{};
  shared_ptr<string> actionName{};
  shared_ptr<bool> changeFinished{};
  shared_ptr<string> createUsername{};
  shared_ptr<string> changeId{};
  shared_ptr<bool> changeAborted{};
  shared_ptr<bool> changeSucceed{};
  shared_ptr<string> envId{};
  shared_ptr<string> changeName{};

  DescribeChangeResponseBodyChange() {}

  explicit DescribeChangeResponseBodyChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changePaused) {
      res["ChangePaused"] = boost::any(*changePaused);
    }
    if (changeDescription) {
      res["ChangeDescription"] = boost::any(*changeDescription);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (changeTimedout) {
      res["ChangeTimedout"] = boost::any(*changeTimedout);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (changeMessage) {
      res["ChangeMessage"] = boost::any(*changeMessage);
    }
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (changeFinished) {
      res["ChangeFinished"] = boost::any(*changeFinished);
    }
    if (createUsername) {
      res["CreateUsername"] = boost::any(*createUsername);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (changeAborted) {
      res["ChangeAborted"] = boost::any(*changeAborted);
    }
    if (changeSucceed) {
      res["ChangeSucceed"] = boost::any(*changeSucceed);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (changeName) {
      res["ChangeName"] = boost::any(*changeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangePaused") != m.end() && !m["ChangePaused"].empty()) {
      changePaused = make_shared<bool>(boost::any_cast<bool>(m["ChangePaused"]));
    }
    if (m.find("ChangeDescription") != m.end() && !m["ChangeDescription"].empty()) {
      changeDescription = make_shared<string>(boost::any_cast<string>(m["ChangeDescription"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<long>(boost::any_cast<long>(m["FinishTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("ChangeTimedout") != m.end() && !m["ChangeTimedout"].empty()) {
      changeTimedout = make_shared<bool>(boost::any_cast<bool>(m["ChangeTimedout"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ChangeMessage") != m.end() && !m["ChangeMessage"].empty()) {
      changeMessage = make_shared<string>(boost::any_cast<string>(m["ChangeMessage"]));
    }
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("ChangeFinished") != m.end() && !m["ChangeFinished"].empty()) {
      changeFinished = make_shared<bool>(boost::any_cast<bool>(m["ChangeFinished"]));
    }
    if (m.find("CreateUsername") != m.end() && !m["CreateUsername"].empty()) {
      createUsername = make_shared<string>(boost::any_cast<string>(m["CreateUsername"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("ChangeAborted") != m.end() && !m["ChangeAborted"].empty()) {
      changeAborted = make_shared<bool>(boost::any_cast<bool>(m["ChangeAborted"]));
    }
    if (m.find("ChangeSucceed") != m.end() && !m["ChangeSucceed"].empty()) {
      changeSucceed = make_shared<bool>(boost::any_cast<bool>(m["ChangeSucceed"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("ChangeName") != m.end() && !m["ChangeName"].empty()) {
      changeName = make_shared<string>(boost::any_cast<string>(m["ChangeName"]));
    }
  }


  virtual ~DescribeChangeResponseBodyChange() = default;
};
class DescribeChangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeChangeResponseBodyChange> change{};
  shared_ptr<string> code{};

  DescribeChangeResponseBody() {}

  explicit DescribeChangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (change) {
      res["Change"] = change ? boost::any(change->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Change") != m.end() && !m["Change"].empty()) {
      if (typeid(map<string, boost::any>) == m["Change"].type()) {
        DescribeChangeResponseBodyChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Change"]));
        change = make_shared<DescribeChangeResponseBodyChange>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeChangeResponseBody() = default;
};
class DescribeChangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeChangeResponseBody> body{};

  DescribeChangeResponse() {}

  explicit DescribeChangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeChangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChangeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChangeResponse() = default;
};
class DescribeChangesRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> actionName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> regionId{};

  DescribeChangesRequest() {}

  explicit DescribeChangesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeChangesRequest() = default;
};
class DescribeChangesResponseBodyChangesChange : public Darabonba::Model {
public:
  shared_ptr<bool> changePaused{};
  shared_ptr<string> changeDescription{};
  shared_ptr<long> finishTime{};
  shared_ptr<long> updateTime{};
  shared_ptr<bool> changeTimedout{};
  shared_ptr<long> createTime{};
  shared_ptr<string> changeMessage{};
  shared_ptr<string> actionName{};
  shared_ptr<bool> changeFinished{};
  shared_ptr<string> createUsername{};
  shared_ptr<string> changeId{};
  shared_ptr<bool> changeAborted{};
  shared_ptr<bool> changeSucceed{};
  shared_ptr<string> envId{};
  shared_ptr<string> changeName{};

  DescribeChangesResponseBodyChangesChange() {}

  explicit DescribeChangesResponseBodyChangesChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changePaused) {
      res["ChangePaused"] = boost::any(*changePaused);
    }
    if (changeDescription) {
      res["ChangeDescription"] = boost::any(*changeDescription);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (changeTimedout) {
      res["ChangeTimedout"] = boost::any(*changeTimedout);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (changeMessage) {
      res["ChangeMessage"] = boost::any(*changeMessage);
    }
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (changeFinished) {
      res["ChangeFinished"] = boost::any(*changeFinished);
    }
    if (createUsername) {
      res["CreateUsername"] = boost::any(*createUsername);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (changeAborted) {
      res["ChangeAborted"] = boost::any(*changeAborted);
    }
    if (changeSucceed) {
      res["ChangeSucceed"] = boost::any(*changeSucceed);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (changeName) {
      res["ChangeName"] = boost::any(*changeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangePaused") != m.end() && !m["ChangePaused"].empty()) {
      changePaused = make_shared<bool>(boost::any_cast<bool>(m["ChangePaused"]));
    }
    if (m.find("ChangeDescription") != m.end() && !m["ChangeDescription"].empty()) {
      changeDescription = make_shared<string>(boost::any_cast<string>(m["ChangeDescription"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<long>(boost::any_cast<long>(m["FinishTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("ChangeTimedout") != m.end() && !m["ChangeTimedout"].empty()) {
      changeTimedout = make_shared<bool>(boost::any_cast<bool>(m["ChangeTimedout"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ChangeMessage") != m.end() && !m["ChangeMessage"].empty()) {
      changeMessage = make_shared<string>(boost::any_cast<string>(m["ChangeMessage"]));
    }
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("ChangeFinished") != m.end() && !m["ChangeFinished"].empty()) {
      changeFinished = make_shared<bool>(boost::any_cast<bool>(m["ChangeFinished"]));
    }
    if (m.find("CreateUsername") != m.end() && !m["CreateUsername"].empty()) {
      createUsername = make_shared<string>(boost::any_cast<string>(m["CreateUsername"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("ChangeAborted") != m.end() && !m["ChangeAborted"].empty()) {
      changeAborted = make_shared<bool>(boost::any_cast<bool>(m["ChangeAborted"]));
    }
    if (m.find("ChangeSucceed") != m.end() && !m["ChangeSucceed"].empty()) {
      changeSucceed = make_shared<bool>(boost::any_cast<bool>(m["ChangeSucceed"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("ChangeName") != m.end() && !m["ChangeName"].empty()) {
      changeName = make_shared<string>(boost::any_cast<string>(m["ChangeName"]));
    }
  }


  virtual ~DescribeChangesResponseBodyChangesChange() = default;
};
class DescribeChangesResponseBodyChanges : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeChangesResponseBodyChangesChange>> change{};

  DescribeChangesResponseBodyChanges() {}

  explicit DescribeChangesResponseBodyChanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (change) {
      vector<boost::any> temp1;
      for(auto item1:*change){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Change"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Change") != m.end() && !m["Change"].empty()) {
      if (typeid(vector<boost::any>) == m["Change"].type()) {
        vector<DescribeChangesResponseBodyChangesChange> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Change"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChangesResponseBodyChangesChange model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        change = make_shared<vector<DescribeChangesResponseBodyChangesChange>>(expect1);
      }
    }
  }


  virtual ~DescribeChangesResponseBodyChanges() = default;
};
class DescribeChangesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeChangesResponseBodyChanges> changes{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> code{};

  DescribeChangesResponseBody() {}

  explicit DescribeChangesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changes) {
      res["Changes"] = changes ? boost::any(changes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Changes") != m.end() && !m["Changes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Changes"].type()) {
        DescribeChangesResponseBodyChanges model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Changes"]));
        changes = make_shared<DescribeChangesResponseBodyChanges>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeChangesResponseBody() = default;
};
class DescribeChangesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeChangesResponseBody> body{};

  DescribeChangesResponse() {}

  explicit DescribeChangesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeChangesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChangesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChangesResponse() = default;
};
class DescribeConfigIndexRequest : public Darabonba::Model {
public:
  shared_ptr<string> stackId{};
  shared_ptr<string> envId{};
  shared_ptr<string> profileName{};
  shared_ptr<string> templateId{};
  shared_ptr<string> regionId{};

  DescribeConfigIndexRequest() {}

  explicit DescribeConfigIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (profileName) {
      res["ProfileName"] = boost::any(*profileName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
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
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("ProfileName") != m.end() && !m["ProfileName"].empty()) {
      profileName = make_shared<string>(boost::any_cast<string>(m["ProfileName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeConfigIndexRequest() = default;
};
class DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptionsConfigOption : public Darabonba::Model {
public:
  shared_ptr<string> regexDesc{};
  shared_ptr<long> maxValue{};
  shared_ptr<string> editorType{};
  shared_ptr<long> minValue{};
  shared_ptr<string> optionLabel{};
  shared_ptr<string> defaultValue{};
  shared_ptr<long> maxLength{};
  shared_ptr<string> regexPattern{};
  shared_ptr<string> changeSeverity{};
  shared_ptr<string> optionDescription{};
  shared_ptr<string> optionName{};
  shared_ptr<string> pathName{};
  shared_ptr<bool> hiddenOption{};
  shared_ptr<string> valueType{};
  shared_ptr<long> minLength{};
  shared_ptr<string> valueOptions{};
  shared_ptr<bool> readonlyOption{};

  DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptionsConfigOption() {}

  explicit DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptionsConfigOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regexDesc) {
      res["RegexDesc"] = boost::any(*regexDesc);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (editorType) {
      res["EditorType"] = boost::any(*editorType);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (optionLabel) {
      res["OptionLabel"] = boost::any(*optionLabel);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (regexPattern) {
      res["RegexPattern"] = boost::any(*regexPattern);
    }
    if (changeSeverity) {
      res["ChangeSeverity"] = boost::any(*changeSeverity);
    }
    if (optionDescription) {
      res["OptionDescription"] = boost::any(*optionDescription);
    }
    if (optionName) {
      res["OptionName"] = boost::any(*optionName);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    if (hiddenOption) {
      res["HiddenOption"] = boost::any(*hiddenOption);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (valueOptions) {
      res["ValueOptions"] = boost::any(*valueOptions);
    }
    if (readonlyOption) {
      res["ReadonlyOption"] = boost::any(*readonlyOption);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegexDesc") != m.end() && !m["RegexDesc"].empty()) {
      regexDesc = make_shared<string>(boost::any_cast<string>(m["RegexDesc"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("EditorType") != m.end() && !m["EditorType"].empty()) {
      editorType = make_shared<string>(boost::any_cast<string>(m["EditorType"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("OptionLabel") != m.end() && !m["OptionLabel"].empty()) {
      optionLabel = make_shared<string>(boost::any_cast<string>(m["OptionLabel"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("RegexPattern") != m.end() && !m["RegexPattern"].empty()) {
      regexPattern = make_shared<string>(boost::any_cast<string>(m["RegexPattern"]));
    }
    if (m.find("ChangeSeverity") != m.end() && !m["ChangeSeverity"].empty()) {
      changeSeverity = make_shared<string>(boost::any_cast<string>(m["ChangeSeverity"]));
    }
    if (m.find("OptionDescription") != m.end() && !m["OptionDescription"].empty()) {
      optionDescription = make_shared<string>(boost::any_cast<string>(m["OptionDescription"]));
    }
    if (m.find("OptionName") != m.end() && !m["OptionName"].empty()) {
      optionName = make_shared<string>(boost::any_cast<string>(m["OptionName"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
    if (m.find("HiddenOption") != m.end() && !m["HiddenOption"].empty()) {
      hiddenOption = make_shared<bool>(boost::any_cast<bool>(m["HiddenOption"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("ValueOptions") != m.end() && !m["ValueOptions"].empty()) {
      valueOptions = make_shared<string>(boost::any_cast<string>(m["ValueOptions"]));
    }
    if (m.find("ReadonlyOption") != m.end() && !m["ReadonlyOption"].empty()) {
      readonlyOption = make_shared<bool>(boost::any_cast<bool>(m["ReadonlyOption"]));
    }
  }


  virtual ~DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptionsConfigOption() = default;
};
class DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptionsConfigOption>> configOption{};

  DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptions() {}

  explicit DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configOption) {
      vector<boost::any> temp1;
      for(auto item1:*configOption){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigOption"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigOption") != m.end() && !m["ConfigOption"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigOption"].type()) {
        vector<DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptionsConfigOption> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigOption"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptionsConfigOption model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configOption = make_shared<vector<DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptionsConfigOption>>(expect1);
      }
    }
  }


  virtual ~DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptions() = default;
};
class DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPath : public Darabonba::Model {
public:
  shared_ptr<string> pathName{};
  shared_ptr<bool> hiddenPath{};
  shared_ptr<DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptions> configOptions{};
  shared_ptr<string> pathLabel{};

  DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPath() {}

  explicit DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPath(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    if (hiddenPath) {
      res["HiddenPath"] = boost::any(*hiddenPath);
    }
    if (configOptions) {
      res["ConfigOptions"] = configOptions ? boost::any(configOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pathLabel) {
      res["PathLabel"] = boost::any(*pathLabel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
    if (m.find("HiddenPath") != m.end() && !m["HiddenPath"].empty()) {
      hiddenPath = make_shared<bool>(boost::any_cast<bool>(m["HiddenPath"]));
    }
    if (m.find("ConfigOptions") != m.end() && !m["ConfigOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigOptions"].type()) {
        DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigOptions"]));
        configOptions = make_shared<DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPathConfigOptions>(model1);
      }
    }
    if (m.find("PathLabel") != m.end() && !m["PathLabel"].empty()) {
      pathLabel = make_shared<string>(boost::any_cast<string>(m["PathLabel"]));
    }
  }


  virtual ~DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPath() = default;
};
class DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPaths : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPath>> configPath{};

  DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPaths() {}

  explicit DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configPath) {
      vector<boost::any> temp1;
      for(auto item1:*configPath){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigPath"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigPath") != m.end() && !m["ConfigPath"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigPath"].type()) {
        vector<DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPath> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigPath"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPath model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configPath = make_shared<vector<DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPathsConfigPath>>(expect1);
      }
    }
  }


  virtual ~DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPaths() = default;
};
class DescribeConfigIndexResponseBodyConfigGroupsConfigGroup : public Darabonba::Model {
public:
  shared_ptr<DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPaths> configPaths{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupLabel{};

  DescribeConfigIndexResponseBodyConfigGroupsConfigGroup() {}

  explicit DescribeConfigIndexResponseBodyConfigGroupsConfigGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configPaths) {
      res["ConfigPaths"] = configPaths ? boost::any(configPaths->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupLabel) {
      res["GroupLabel"] = boost::any(*groupLabel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigPaths") != m.end() && !m["ConfigPaths"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigPaths"].type()) {
        DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPaths model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigPaths"]));
        configPaths = make_shared<DescribeConfigIndexResponseBodyConfigGroupsConfigGroupConfigPaths>(model1);
      }
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupLabel") != m.end() && !m["GroupLabel"].empty()) {
      groupLabel = make_shared<string>(boost::any_cast<string>(m["GroupLabel"]));
    }
  }


  virtual ~DescribeConfigIndexResponseBodyConfigGroupsConfigGroup() = default;
};
class DescribeConfigIndexResponseBodyConfigGroups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeConfigIndexResponseBodyConfigGroupsConfigGroup>> configGroup{};

  DescribeConfigIndexResponseBodyConfigGroups() {}

  explicit DescribeConfigIndexResponseBodyConfigGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configGroup) {
      vector<boost::any> temp1;
      for(auto item1:*configGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigGroup") != m.end() && !m["ConfigGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigGroup"].type()) {
        vector<DescribeConfigIndexResponseBodyConfigGroupsConfigGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigIndexResponseBodyConfigGroupsConfigGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configGroup = make_shared<vector<DescribeConfigIndexResponseBodyConfigGroupsConfigGroup>>(expect1);
      }
    }
  }


  virtual ~DescribeConfigIndexResponseBodyConfigGroups() = default;
};
class DescribeConfigIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeConfigIndexResponseBodyConfigGroups> configGroups{};
  shared_ptr<string> code{};
  shared_ptr<string> stackName{};
  shared_ptr<string> stackId{};

  DescribeConfigIndexResponseBody() {}

  explicit DescribeConfigIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (configGroups) {
      res["ConfigGroups"] = configGroups ? boost::any(configGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ConfigGroups") != m.end() && !m["ConfigGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigGroups"].type()) {
        DescribeConfigIndexResponseBodyConfigGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigGroups"]));
        configGroups = make_shared<DescribeConfigIndexResponseBodyConfigGroups>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
  }


  virtual ~DescribeConfigIndexResponseBody() = default;
};
class DescribeConfigIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeConfigIndexResponseBody> body{};

  DescribeConfigIndexResponse() {}

  explicit DescribeConfigIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConfigIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConfigIndexResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConfigIndexResponse() = default;
};
class DescribeConfigOptionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> stackId{};
  shared_ptr<string> envId{};
  shared_ptr<string> profileName{};
  shared_ptr<string> regionId{};

  DescribeConfigOptionsRequest() {}

  explicit DescribeConfigOptionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (profileName) {
      res["ProfileName"] = boost::any(*profileName);
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
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("ProfileName") != m.end() && !m["ProfileName"].empty()) {
      profileName = make_shared<string>(boost::any_cast<string>(m["ProfileName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeConfigOptionsRequest() = default;
};
class DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptionsConfigOption : public Darabonba::Model {
public:
  shared_ptr<string> regexDesc{};
  shared_ptr<long> maxValue{};
  shared_ptr<string> editorType{};
  shared_ptr<long> minValue{};
  shared_ptr<string> defaultValue{};
  shared_ptr<long> maxLength{};
  shared_ptr<string> optionLabel{};
  shared_ptr<string> regexPattern{};
  shared_ptr<string> changeSeverity{};
  shared_ptr<string> optionDescription{};
  shared_ptr<string> optionName{};
  shared_ptr<string> pathName{};
  shared_ptr<bool> hiddenOption{};
  shared_ptr<string> valueType{};
  shared_ptr<long> minLength{};
  shared_ptr<string> valueOptions{};
  shared_ptr<bool> readonlyOption{};

  DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptionsConfigOption() {}

  explicit DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptionsConfigOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regexDesc) {
      res["RegexDesc"] = boost::any(*regexDesc);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (editorType) {
      res["EditorType"] = boost::any(*editorType);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (optionLabel) {
      res["OptionLabel"] = boost::any(*optionLabel);
    }
    if (regexPattern) {
      res["RegexPattern"] = boost::any(*regexPattern);
    }
    if (changeSeverity) {
      res["ChangeSeverity"] = boost::any(*changeSeverity);
    }
    if (optionDescription) {
      res["OptionDescription"] = boost::any(*optionDescription);
    }
    if (optionName) {
      res["OptionName"] = boost::any(*optionName);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    if (hiddenOption) {
      res["HiddenOption"] = boost::any(*hiddenOption);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (valueOptions) {
      res["ValueOptions"] = boost::any(*valueOptions);
    }
    if (readonlyOption) {
      res["ReadonlyOption"] = boost::any(*readonlyOption);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegexDesc") != m.end() && !m["RegexDesc"].empty()) {
      regexDesc = make_shared<string>(boost::any_cast<string>(m["RegexDesc"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("EditorType") != m.end() && !m["EditorType"].empty()) {
      editorType = make_shared<string>(boost::any_cast<string>(m["EditorType"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("OptionLabel") != m.end() && !m["OptionLabel"].empty()) {
      optionLabel = make_shared<string>(boost::any_cast<string>(m["OptionLabel"]));
    }
    if (m.find("RegexPattern") != m.end() && !m["RegexPattern"].empty()) {
      regexPattern = make_shared<string>(boost::any_cast<string>(m["RegexPattern"]));
    }
    if (m.find("ChangeSeverity") != m.end() && !m["ChangeSeverity"].empty()) {
      changeSeverity = make_shared<string>(boost::any_cast<string>(m["ChangeSeverity"]));
    }
    if (m.find("OptionDescription") != m.end() && !m["OptionDescription"].empty()) {
      optionDescription = make_shared<string>(boost::any_cast<string>(m["OptionDescription"]));
    }
    if (m.find("OptionName") != m.end() && !m["OptionName"].empty()) {
      optionName = make_shared<string>(boost::any_cast<string>(m["OptionName"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
    if (m.find("HiddenOption") != m.end() && !m["HiddenOption"].empty()) {
      hiddenOption = make_shared<bool>(boost::any_cast<bool>(m["HiddenOption"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("ValueOptions") != m.end() && !m["ValueOptions"].empty()) {
      valueOptions = make_shared<string>(boost::any_cast<string>(m["ValueOptions"]));
    }
    if (m.find("ReadonlyOption") != m.end() && !m["ReadonlyOption"].empty()) {
      readonlyOption = make_shared<bool>(boost::any_cast<bool>(m["ReadonlyOption"]));
    }
  }


  virtual ~DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptionsConfigOption() = default;
};
class DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptionsConfigOption>> configOption{};

  DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptions() {}

  explicit DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configOption) {
      vector<boost::any> temp1;
      for(auto item1:*configOption){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigOption"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigOption") != m.end() && !m["ConfigOption"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigOption"].type()) {
        vector<DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptionsConfigOption> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigOption"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptionsConfigOption model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configOption = make_shared<vector<DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptionsConfigOption>>(expect1);
      }
    }
  }


  virtual ~DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptions() = default;
};
class DescribeConfigOptionsResponseBodyStackConfigOption : public Darabonba::Model {
public:
  shared_ptr<string> stackId{};
  shared_ptr<DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptions> configOptions{};
  shared_ptr<string> stackName{};

  DescribeConfigOptionsResponseBodyStackConfigOption() {}

  explicit DescribeConfigOptionsResponseBodyStackConfigOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (configOptions) {
      res["ConfigOptions"] = configOptions ? boost::any(configOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("ConfigOptions") != m.end() && !m["ConfigOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigOptions"].type()) {
        DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigOptions"]));
        configOptions = make_shared<DescribeConfigOptionsResponseBodyStackConfigOptionConfigOptions>(model1);
      }
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
  }


  virtual ~DescribeConfigOptionsResponseBodyStackConfigOption() = default;
};
class DescribeConfigOptionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeConfigOptionsResponseBodyStackConfigOption> stackConfigOption{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  DescribeConfigOptionsResponseBody() {}

  explicit DescribeConfigOptionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stackConfigOption) {
      res["StackConfigOption"] = stackConfigOption ? boost::any(stackConfigOption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StackConfigOption") != m.end() && !m["StackConfigOption"].empty()) {
      if (typeid(map<string, boost::any>) == m["StackConfigOption"].type()) {
        DescribeConfigOptionsResponseBodyStackConfigOption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StackConfigOption"]));
        stackConfigOption = make_shared<DescribeConfigOptionsResponseBodyStackConfigOption>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeConfigOptionsResponseBody() = default;
};
class DescribeConfigOptionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeConfigOptionsResponseBody> body{};

  DescribeConfigOptionsResponse() {}

  explicit DescribeConfigOptionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConfigOptionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConfigOptionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConfigOptionsResponse() = default;
};
class DescribeConfigSettingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> pathName{};
  shared_ptr<string> optionName{};
  shared_ptr<string> regionId{};

  DescribeConfigSettingsRequest() {}

  explicit DescribeConfigSettingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    if (optionName) {
      res["OptionName"] = boost::any(*optionName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
    if (m.find("OptionName") != m.end() && !m["OptionName"].empty()) {
      optionName = make_shared<string>(boost::any_cast<string>(m["OptionName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeConfigSettingsRequest() = default;
};
class DescribeConfigSettingsResponseBodyConfigSettingsConfigSetting : public Darabonba::Model {
public:
  shared_ptr<string> optionName{};
  shared_ptr<string> pathName{};
  shared_ptr<string> settingValue{};

  DescribeConfigSettingsResponseBodyConfigSettingsConfigSetting() {}

  explicit DescribeConfigSettingsResponseBodyConfigSettingsConfigSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (optionName) {
      res["OptionName"] = boost::any(*optionName);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    if (settingValue) {
      res["SettingValue"] = boost::any(*settingValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OptionName") != m.end() && !m["OptionName"].empty()) {
      optionName = make_shared<string>(boost::any_cast<string>(m["OptionName"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
    if (m.find("SettingValue") != m.end() && !m["SettingValue"].empty()) {
      settingValue = make_shared<string>(boost::any_cast<string>(m["SettingValue"]));
    }
  }


  virtual ~DescribeConfigSettingsResponseBodyConfigSettingsConfigSetting() = default;
};
class DescribeConfigSettingsResponseBodyConfigSettings : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeConfigSettingsResponseBodyConfigSettingsConfigSetting>> configSetting{};

  DescribeConfigSettingsResponseBodyConfigSettings() {}

  explicit DescribeConfigSettingsResponseBodyConfigSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configSetting) {
      vector<boost::any> temp1;
      for(auto item1:*configSetting){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigSetting"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigSetting") != m.end() && !m["ConfigSetting"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigSetting"].type()) {
        vector<DescribeConfigSettingsResponseBodyConfigSettingsConfigSetting> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigSetting"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigSettingsResponseBodyConfigSettingsConfigSetting model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configSetting = make_shared<vector<DescribeConfigSettingsResponseBodyConfigSettingsConfigSetting>>(expect1);
      }
    }
  }


  virtual ~DescribeConfigSettingsResponseBodyConfigSettings() = default;
};
class DescribeConfigSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeConfigSettingsResponseBodyConfigSettings> configSettings{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  DescribeConfigSettingsResponseBody() {}

  explicit DescribeConfigSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configSettings) {
      res["ConfigSettings"] = configSettings ? boost::any(configSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigSettings") != m.end() && !m["ConfigSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigSettings"].type()) {
        DescribeConfigSettingsResponseBodyConfigSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigSettings"]));
        configSettings = make_shared<DescribeConfigSettingsResponseBodyConfigSettings>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeConfigSettingsResponseBody() = default;
};
class DescribeConfigSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeConfigSettingsResponseBody> body{};

  DescribeConfigSettingsResponse() {}

  explicit DescribeConfigSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConfigSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConfigSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConfigSettingsResponse() = default;
};
class DescribeConfigTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateSearch{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> regionId{};

  DescribeConfigTemplatesRequest() {}

  explicit DescribeConfigTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateSearch) {
      res["TemplateSearch"] = boost::any(*templateSearch);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateSearch") != m.end() && !m["TemplateSearch"].empty()) {
      templateSearch = make_shared<string>(boost::any_cast<string>(m["TemplateSearch"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeConfigTemplatesRequest() = default;
};
class DescribeConfigTemplatesResponseBodyConfigTemplatesConfigTemplate : public Darabonba::Model {
public:
  shared_ptr<string> templateDescription{};
  shared_ptr<string> appName{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> stackId{};
  shared_ptr<string> pkgVersionLabel{};
  shared_ptr<long> createTime{};
  shared_ptr<string> appId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> pkgVersionId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateId{};

  DescribeConfigTemplatesResponseBodyConfigTemplatesConfigTemplate() {}

  explicit DescribeConfigTemplatesResponseBodyConfigTemplatesConfigTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (pkgVersionLabel) {
      res["PkgVersionLabel"] = boost::any(*pkgVersionLabel);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (pkgVersionId) {
      res["PkgVersionId"] = boost::any(*pkgVersionId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("PkgVersionLabel") != m.end() && !m["PkgVersionLabel"].empty()) {
      pkgVersionLabel = make_shared<string>(boost::any_cast<string>(m["PkgVersionLabel"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("PkgVersionId") != m.end() && !m["PkgVersionId"].empty()) {
      pkgVersionId = make_shared<string>(boost::any_cast<string>(m["PkgVersionId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DescribeConfigTemplatesResponseBodyConfigTemplatesConfigTemplate() = default;
};
class DescribeConfigTemplatesResponseBodyConfigTemplates : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeConfigTemplatesResponseBodyConfigTemplatesConfigTemplate>> configTemplate{};

  DescribeConfigTemplatesResponseBodyConfigTemplates() {}

  explicit DescribeConfigTemplatesResponseBodyConfigTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configTemplate) {
      vector<boost::any> temp1;
      for(auto item1:*configTemplate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigTemplate"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigTemplate") != m.end() && !m["ConfigTemplate"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigTemplate"].type()) {
        vector<DescribeConfigTemplatesResponseBodyConfigTemplatesConfigTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigTemplate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigTemplatesResponseBodyConfigTemplatesConfigTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configTemplate = make_shared<vector<DescribeConfigTemplatesResponseBodyConfigTemplatesConfigTemplate>>(expect1);
      }
    }
  }


  virtual ~DescribeConfigTemplatesResponseBodyConfigTemplates() = default;
};
class DescribeConfigTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeConfigTemplatesResponseBodyConfigTemplates> configTemplates{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> code{};

  DescribeConfigTemplatesResponseBody() {}

  explicit DescribeConfigTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configTemplates) {
      res["ConfigTemplates"] = configTemplates ? boost::any(configTemplates->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigTemplates") != m.end() && !m["ConfigTemplates"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigTemplates"].type()) {
        DescribeConfigTemplatesResponseBodyConfigTemplates model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigTemplates"]));
        configTemplates = make_shared<DescribeConfigTemplatesResponseBodyConfigTemplates>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeConfigTemplatesResponseBody() = default;
};
class DescribeConfigTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeConfigTemplatesResponseBody> body{};

  DescribeConfigTemplatesResponse() {}

  explicit DescribeConfigTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConfigTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConfigTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConfigTemplatesResponse() = default;
};
class DescribeEnvResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> regionId{};

  DescribeEnvResourceRequest() {}

  explicit DescribeEnvResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeEnvResourceRequest() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceVSwitchesVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DescribeEnvResourceResponseBodyEnvResourceVSwitchesVSwitch() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceVSwitchesVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceVSwitchesVSwitch() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceVSwitches : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEnvResourceResponseBodyEnvResourceVSwitchesVSwitch>> vSwitch{};

  DescribeEnvResourceResponseBodyEnvResourceVSwitches() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitch) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitch){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitch"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitch") != m.end() && !m["VSwitch"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitch"].type()) {
        vector<DescribeEnvResourceResponseBodyEnvResourceVSwitchesVSwitch> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitch"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnvResourceResponseBodyEnvResourceVSwitchesVSwitch model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitch = make_shared<vector<DescribeEnvResourceResponseBodyEnvResourceVSwitchesVSwitch>>(expect1);
      }
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceVSwitches() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceVpc : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DescribeEnvResourceResponseBodyEnvResourceVpc() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceVpc() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceMonitorGroup : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DescribeEnvResourceResponseBodyEnvResourceMonitorGroup() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceMonitorGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceMonitorGroup() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListenersListener : public Darabonba::Model {
public:
  shared_ptr<string> protocol{};
  shared_ptr<long> port{};

  DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListenersListener() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListenersListener(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListenersListener() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListeners : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListenersListener>> listener{};

  DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListeners() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listener) {
      vector<boost::any> temp1;
      for(auto item1:*listener){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listener"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Listener") != m.end() && !m["Listener"].empty()) {
      if (typeid(vector<boost::any>) == m["Listener"].type()) {
        vector<DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListenersListener> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listener"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListenersListener model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listener = make_shared<vector<DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListenersListener>>(expect1);
      }
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListeners() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancer : public Darabonba::Model {
public:
  shared_ptr<bool> imported{};
  shared_ptr<string> protocol{};
  shared_ptr<string> addressType{};
  shared_ptr<DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListeners> listeners{};
  shared_ptr<long> port{};
  shared_ptr<string> id{};

  DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancer() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imported) {
      res["Imported"] = boost::any(*imported);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (listeners) {
      res["Listeners"] = listeners ? boost::any(listeners->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Imported") != m.end() && !m["Imported"].empty()) {
      imported = make_shared<bool>(boost::any_cast<bool>(m["Imported"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(map<string, boost::any>) == m["Listeners"].type()) {
        DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListeners model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Listeners"]));
        listeners = make_shared<DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancerListeners>(model1);
      }
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancer() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceLoadBalancers : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancer>> loadBalancer{};

  DescribeEnvResourceResponseBodyEnvResourceLoadBalancers() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceLoadBalancers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancer) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LoadBalancer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancer") != m.end() && !m["LoadBalancer"].empty()) {
      if (typeid(vector<boost::any>) == m["LoadBalancer"].type()) {
        vector<DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LoadBalancer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancer = make_shared<vector<DescribeEnvResourceResponseBodyEnvResourceLoadBalancersLoadBalancer>>(expect1);
      }
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceLoadBalancers() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceInstancesInstance : public Darabonba::Model {
public:
  shared_ptr<bool> imported{};
  shared_ptr<string> id{};

  DescribeEnvResourceResponseBodyEnvResourceInstancesInstance() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceInstancesInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imported) {
      res["Imported"] = boost::any(*imported);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Imported") != m.end() && !m["Imported"].empty()) {
      imported = make_shared<bool>(boost::any_cast<bool>(m["Imported"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceInstancesInstance() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEnvResourceResponseBodyEnvResourceInstancesInstance>> instance{};

  DescribeEnvResourceResponseBodyEnvResourceInstances() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<DescribeEnvResourceResponseBodyEnvResourceInstancesInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnvResourceResponseBodyEnvResourceInstancesInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<DescribeEnvResourceResponseBodyEnvResourceInstancesInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceInstances() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroupsSecurityGroup : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroupsSecurityGroup() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroupsSecurityGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroupsSecurityGroup() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroupsSecurityGroup>> securityGroup{};

  DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroups() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroup) {
      vector<boost::any> temp1;
      for(auto item1:*securityGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityGroup") != m.end() && !m["SecurityGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityGroup"].type()) {
        vector<DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroupsSecurityGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroupsSecurityGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityGroup = make_shared<vector<DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroupsSecurityGroup>>(expect1);
      }
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroups() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceScalingGroup : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DescribeEnvResourceResponseBodyEnvResourceScalingGroup() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceScalingGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceScalingGroup() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceDomainsDomain : public Darabonba::Model {
public:
  shared_ptr<bool> isDefault{};
  shared_ptr<string> hostedBy{};
  shared_ptr<string> subDomain{};
  shared_ptr<string> domainName{};
  shared_ptr<string> managedBy{};

  DescribeEnvResourceResponseBodyEnvResourceDomainsDomain() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceDomainsDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (hostedBy) {
      res["HostedBy"] = boost::any(*hostedBy);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (managedBy) {
      res["ManagedBy"] = boost::any(*managedBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("HostedBy") != m.end() && !m["HostedBy"].empty()) {
      hostedBy = make_shared<string>(boost::any_cast<string>(m["HostedBy"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ManagedBy") != m.end() && !m["ManagedBy"].empty()) {
      managedBy = make_shared<string>(boost::any_cast<string>(m["ManagedBy"]));
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceDomainsDomain() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceDomains : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEnvResourceResponseBodyEnvResourceDomainsDomain>> domain{};

  DescribeEnvResourceResponseBodyEnvResourceDomains() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      vector<boost::any> temp1;
      for(auto item1:*domain){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Domain"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      if (typeid(vector<boost::any>) == m["Domain"].type()) {
        vector<DescribeEnvResourceResponseBodyEnvResourceDomainsDomain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnvResourceResponseBodyEnvResourceDomainsDomain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domain = make_shared<vector<DescribeEnvResourceResponseBodyEnvResourceDomainsDomain>>(expect1);
      }
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceDomains() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceRdsInstancesRdsInstance : public Darabonba::Model {
public:
  shared_ptr<bool> imported{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> id{};
  shared_ptr<string> accountName{};

  DescribeEnvResourceResponseBodyEnvResourceRdsInstancesRdsInstance() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceRdsInstancesRdsInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imported) {
      res["Imported"] = boost::any(*imported);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Imported") != m.end() && !m["Imported"].empty()) {
      imported = make_shared<bool>(boost::any_cast<bool>(m["Imported"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceRdsInstancesRdsInstance() = default;
};
class DescribeEnvResourceResponseBodyEnvResourceRdsInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEnvResourceResponseBodyEnvResourceRdsInstancesRdsInstance>> rdsInstance{};

  DescribeEnvResourceResponseBodyEnvResourceRdsInstances() {}

  explicit DescribeEnvResourceResponseBodyEnvResourceRdsInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rdsInstance) {
      vector<boost::any> temp1;
      for(auto item1:*rdsInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RdsInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RdsInstance") != m.end() && !m["RdsInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["RdsInstance"].type()) {
        vector<DescribeEnvResourceResponseBodyEnvResourceRdsInstancesRdsInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RdsInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEnvResourceResponseBodyEnvResourceRdsInstancesRdsInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rdsInstance = make_shared<vector<DescribeEnvResourceResponseBodyEnvResourceRdsInstancesRdsInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResourceRdsInstances() = default;
};
class DescribeEnvResourceResponseBodyEnvResource : public Darabonba::Model {
public:
  shared_ptr<string> launchTemplateId{};
  shared_ptr<string> envName{};
  shared_ptr<DescribeEnvResourceResponseBodyEnvResourceVSwitches> vSwitches{};
  shared_ptr<DescribeEnvResourceResponseBodyEnvResourceVpc> vpc{};
  shared_ptr<DescribeEnvResourceResponseBodyEnvResourceMonitorGroup> monitorGroup{};
  shared_ptr<string> launchConfigurationId{};
  shared_ptr<DescribeEnvResourceResponseBodyEnvResourceLoadBalancers> loadBalancers{};
  shared_ptr<DescribeEnvResourceResponseBodyEnvResourceInstances> instances{};
  shared_ptr<DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroups> defaultSecurityGroups{};
  shared_ptr<DescribeEnvResourceResponseBodyEnvResourceScalingGroup> scalingGroup{};
  shared_ptr<DescribeEnvResourceResponseBodyEnvResourceDomains> domains{};
  shared_ptr<DescribeEnvResourceResponseBodyEnvResourceRdsInstances> rdsInstances{};
  shared_ptr<string> envId{};

  DescribeEnvResourceResponseBodyEnvResource() {}

  explicit DescribeEnvResourceResponseBodyEnvResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (launchTemplateId) {
      res["LaunchTemplateId"] = boost::any(*launchTemplateId);
    }
    if (envName) {
      res["EnvName"] = boost::any(*envName);
    }
    if (vSwitches) {
      res["VSwitches"] = vSwitches ? boost::any(vSwitches->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpc) {
      res["Vpc"] = vpc ? boost::any(vpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (monitorGroup) {
      res["MonitorGroup"] = monitorGroup ? boost::any(monitorGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (launchConfigurationId) {
      res["LaunchConfigurationId"] = boost::any(*launchConfigurationId);
    }
    if (loadBalancers) {
      res["LoadBalancers"] = loadBalancers ? boost::any(loadBalancers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instances) {
      res["Instances"] = instances ? boost::any(instances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultSecurityGroups) {
      res["DefaultSecurityGroups"] = defaultSecurityGroups ? boost::any(defaultSecurityGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scalingGroup) {
      res["ScalingGroup"] = scalingGroup ? boost::any(scalingGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domains) {
      res["Domains"] = domains ? boost::any(domains->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rdsInstances) {
      res["RdsInstances"] = rdsInstances ? boost::any(rdsInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LaunchTemplateId") != m.end() && !m["LaunchTemplateId"].empty()) {
      launchTemplateId = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateId"]));
    }
    if (m.find("EnvName") != m.end() && !m["EnvName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["EnvName"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(map<string, boost::any>) == m["VSwitches"].type()) {
        DescribeEnvResourceResponseBodyEnvResourceVSwitches model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VSwitches"]));
        vSwitches = make_shared<DescribeEnvResourceResponseBodyEnvResourceVSwitches>(model1);
      }
    }
    if (m.find("Vpc") != m.end() && !m["Vpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vpc"].type()) {
        DescribeEnvResourceResponseBodyEnvResourceVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vpc"]));
        vpc = make_shared<DescribeEnvResourceResponseBodyEnvResourceVpc>(model1);
      }
    }
    if (m.find("MonitorGroup") != m.end() && !m["MonitorGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["MonitorGroup"].type()) {
        DescribeEnvResourceResponseBodyEnvResourceMonitorGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MonitorGroup"]));
        monitorGroup = make_shared<DescribeEnvResourceResponseBodyEnvResourceMonitorGroup>(model1);
      }
    }
    if (m.find("LaunchConfigurationId") != m.end() && !m["LaunchConfigurationId"].empty()) {
      launchConfigurationId = make_shared<string>(boost::any_cast<string>(m["LaunchConfigurationId"]));
    }
    if (m.find("LoadBalancers") != m.end() && !m["LoadBalancers"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancers"].type()) {
        DescribeEnvResourceResponseBodyEnvResourceLoadBalancers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancers"]));
        loadBalancers = make_shared<DescribeEnvResourceResponseBodyEnvResourceLoadBalancers>(model1);
      }
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instances"].type()) {
        DescribeEnvResourceResponseBodyEnvResourceInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instances"]));
        instances = make_shared<DescribeEnvResourceResponseBodyEnvResourceInstances>(model1);
      }
    }
    if (m.find("DefaultSecurityGroups") != m.end() && !m["DefaultSecurityGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["DefaultSecurityGroups"].type()) {
        DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DefaultSecurityGroups"]));
        defaultSecurityGroups = make_shared<DescribeEnvResourceResponseBodyEnvResourceDefaultSecurityGroups>(model1);
      }
    }
    if (m.find("ScalingGroup") != m.end() && !m["ScalingGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScalingGroup"].type()) {
        DescribeEnvResourceResponseBodyEnvResourceScalingGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScalingGroup"]));
        scalingGroup = make_shared<DescribeEnvResourceResponseBodyEnvResourceScalingGroup>(model1);
      }
    }
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(map<string, boost::any>) == m["Domains"].type()) {
        DescribeEnvResourceResponseBodyEnvResourceDomains model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Domains"]));
        domains = make_shared<DescribeEnvResourceResponseBodyEnvResourceDomains>(model1);
      }
    }
    if (m.find("RdsInstances") != m.end() && !m["RdsInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["RdsInstances"].type()) {
        DescribeEnvResourceResponseBodyEnvResourceRdsInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RdsInstances"]));
        rdsInstances = make_shared<DescribeEnvResourceResponseBodyEnvResourceRdsInstances>(model1);
      }
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~DescribeEnvResourceResponseBodyEnvResource() = default;
};
class DescribeEnvResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<DescribeEnvResourceResponseBodyEnvResource> envResource{};

  DescribeEnvResourceResponseBody() {}

  explicit DescribeEnvResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (envResource) {
      res["EnvResource"] = envResource ? boost::any(envResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EnvResource") != m.end() && !m["EnvResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvResource"].type()) {
        DescribeEnvResourceResponseBodyEnvResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvResource"]));
        envResource = make_shared<DescribeEnvResourceResponseBodyEnvResource>(model1);
      }
    }
  }


  virtual ~DescribeEnvResourceResponseBody() = default;
};
class DescribeEnvResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeEnvResourceResponseBody> body{};

  DescribeEnvResourceResponse() {}

  explicit DescribeEnvResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEnvResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEnvResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEnvResourceResponse() = default;
};
class DescribeEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> changeId{};
  shared_ptr<bool> lastChangeEvents{};
  shared_ptr<bool> reverseByTimestamp{};
  shared_ptr<string> regionId{};

  DescribeEventsRequest() {}

  explicit DescribeEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (lastChangeEvents) {
      res["LastChangeEvents"] = boost::any(*lastChangeEvents);
    }
    if (reverseByTimestamp) {
      res["ReverseByTimestamp"] = boost::any(*reverseByTimestamp);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("LastChangeEvents") != m.end() && !m["LastChangeEvents"].empty()) {
      lastChangeEvents = make_shared<bool>(boost::any_cast<bool>(m["LastChangeEvents"]));
    }
    if (m.find("ReverseByTimestamp") != m.end() && !m["ReverseByTimestamp"].empty()) {
      reverseByTimestamp = make_shared<bool>(boost::any_cast<bool>(m["ReverseByTimestamp"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeEventsRequest() = default;
};
class DescribeEventsResponseBodyEventsEventObjectAttrsObjectAttr : public Darabonba::Model {
public:
  shared_ptr<string> attributeName{};
  shared_ptr<string> attributeValue{};

  DescribeEventsResponseBodyEventsEventObjectAttrsObjectAttr() {}

  explicit DescribeEventsResponseBodyEventsEventObjectAttrsObjectAttr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributeName) {
      res["AttributeName"] = boost::any(*attributeName);
    }
    if (attributeValue) {
      res["AttributeValue"] = boost::any(*attributeValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttributeName") != m.end() && !m["AttributeName"].empty()) {
      attributeName = make_shared<string>(boost::any_cast<string>(m["AttributeName"]));
    }
    if (m.find("AttributeValue") != m.end() && !m["AttributeValue"].empty()) {
      attributeValue = make_shared<string>(boost::any_cast<string>(m["AttributeValue"]));
    }
  }


  virtual ~DescribeEventsResponseBodyEventsEventObjectAttrsObjectAttr() = default;
};
class DescribeEventsResponseBodyEventsEventObjectAttrs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEventsResponseBodyEventsEventObjectAttrsObjectAttr>> objectAttr{};

  DescribeEventsResponseBodyEventsEventObjectAttrs() {}

  explicit DescribeEventsResponseBodyEventsEventObjectAttrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectAttr) {
      vector<boost::any> temp1;
      for(auto item1:*objectAttr){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ObjectAttr"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ObjectAttr") != m.end() && !m["ObjectAttr"].empty()) {
      if (typeid(vector<boost::any>) == m["ObjectAttr"].type()) {
        vector<DescribeEventsResponseBodyEventsEventObjectAttrsObjectAttr> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ObjectAttr"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventsResponseBodyEventsEventObjectAttrsObjectAttr model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        objectAttr = make_shared<vector<DescribeEventsResponseBodyEventsEventObjectAttrsObjectAttr>>(expect1);
      }
    }
  }


  virtual ~DescribeEventsResponseBodyEventsEventObjectAttrs() = default;
};
class DescribeEventsResponseBodyEventsEventMsgParams : public Darabonba::Model {
public:
  shared_ptr<vector<string>> msgParam{};

  DescribeEventsResponseBodyEventsEventMsgParams() {}

  explicit DescribeEventsResponseBodyEventsEventMsgParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msgParam) {
      res["MsgParam"] = boost::any(*msgParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MsgParam") != m.end() && !m["MsgParam"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MsgParam"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MsgParam"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      msgParam = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeEventsResponseBodyEventsEventMsgParams() = default;
};
class DescribeEventsResponseBodyEventsEvent : public Darabonba::Model {
public:
  shared_ptr<string> primaryUserName{};
  shared_ptr<string> objectType{};
  shared_ptr<string> enventName{};
  shared_ptr<long> eventTimestamp{};
  shared_ptr<string> secondUserName{};
  shared_ptr<string> msgCode{};
  shared_ptr<string> objectName{};
  shared_ptr<string> eventMessage{};
  shared_ptr<string> eventId{};
  shared_ptr<DescribeEventsResponseBodyEventsEventObjectAttrs> objectAttrs{};
  shared_ptr<string> appId{};
  shared_ptr<string> eventLevel{};
  shared_ptr<string> objectId{};
  shared_ptr<DescribeEventsResponseBodyEventsEventMsgParams> msgParams{};
  shared_ptr<string> primaryUserId{};
  shared_ptr<string> envId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> secondUserId{};

  DescribeEventsResponseBodyEventsEvent() {}

  explicit DescribeEventsResponseBodyEventsEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (primaryUserName) {
      res["PrimaryUserName"] = boost::any(*primaryUserName);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (enventName) {
      res["EnventName"] = boost::any(*enventName);
    }
    if (eventTimestamp) {
      res["EventTimestamp"] = boost::any(*eventTimestamp);
    }
    if (secondUserName) {
      res["SecondUserName"] = boost::any(*secondUserName);
    }
    if (msgCode) {
      res["MsgCode"] = boost::any(*msgCode);
    }
    if (objectName) {
      res["ObjectName"] = boost::any(*objectName);
    }
    if (eventMessage) {
      res["EventMessage"] = boost::any(*eventMessage);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (objectAttrs) {
      res["ObjectAttrs"] = objectAttrs ? boost::any(objectAttrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (eventLevel) {
      res["EventLevel"] = boost::any(*eventLevel);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (msgParams) {
      res["MsgParams"] = msgParams ? boost::any(msgParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (primaryUserId) {
      res["PrimaryUserId"] = boost::any(*primaryUserId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (secondUserId) {
      res["SecondUserId"] = boost::any(*secondUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrimaryUserName") != m.end() && !m["PrimaryUserName"].empty()) {
      primaryUserName = make_shared<string>(boost::any_cast<string>(m["PrimaryUserName"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("EnventName") != m.end() && !m["EnventName"].empty()) {
      enventName = make_shared<string>(boost::any_cast<string>(m["EnventName"]));
    }
    if (m.find("EventTimestamp") != m.end() && !m["EventTimestamp"].empty()) {
      eventTimestamp = make_shared<long>(boost::any_cast<long>(m["EventTimestamp"]));
    }
    if (m.find("SecondUserName") != m.end() && !m["SecondUserName"].empty()) {
      secondUserName = make_shared<string>(boost::any_cast<string>(m["SecondUserName"]));
    }
    if (m.find("MsgCode") != m.end() && !m["MsgCode"].empty()) {
      msgCode = make_shared<string>(boost::any_cast<string>(m["MsgCode"]));
    }
    if (m.find("ObjectName") != m.end() && !m["ObjectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["ObjectName"]));
    }
    if (m.find("EventMessage") != m.end() && !m["EventMessage"].empty()) {
      eventMessage = make_shared<string>(boost::any_cast<string>(m["EventMessage"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("ObjectAttrs") != m.end() && !m["ObjectAttrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ObjectAttrs"].type()) {
        DescribeEventsResponseBodyEventsEventObjectAttrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ObjectAttrs"]));
        objectAttrs = make_shared<DescribeEventsResponseBodyEventsEventObjectAttrs>(model1);
      }
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EventLevel") != m.end() && !m["EventLevel"].empty()) {
      eventLevel = make_shared<string>(boost::any_cast<string>(m["EventLevel"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("MsgParams") != m.end() && !m["MsgParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["MsgParams"].type()) {
        DescribeEventsResponseBodyEventsEventMsgParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MsgParams"]));
        msgParams = make_shared<DescribeEventsResponseBodyEventsEventMsgParams>(model1);
      }
    }
    if (m.find("PrimaryUserId") != m.end() && !m["PrimaryUserId"].empty()) {
      primaryUserId = make_shared<string>(boost::any_cast<string>(m["PrimaryUserId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("SecondUserId") != m.end() && !m["SecondUserId"].empty()) {
      secondUserId = make_shared<string>(boost::any_cast<string>(m["SecondUserId"]));
    }
  }


  virtual ~DescribeEventsResponseBodyEventsEvent() = default;
};
class DescribeEventsResponseBodyEvents : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEventsResponseBodyEventsEvent>> event{};

  DescribeEventsResponseBodyEvents() {}

  explicit DescribeEventsResponseBodyEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      vector<boost::any> temp1;
      for(auto item1:*event){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Event"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Event") != m.end() && !m["Event"].empty()) {
      if (typeid(vector<boost::any>) == m["Event"].type()) {
        vector<DescribeEventsResponseBodyEventsEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Event"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventsResponseBodyEventsEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        event = make_shared<vector<DescribeEventsResponseBodyEventsEvent>>(expect1);
      }
    }
  }


  virtual ~DescribeEventsResponseBodyEvents() = default;
};
class DescribeEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeEventsResponseBodyEvents> events{};
  shared_ptr<string> code{};

  DescribeEventsResponseBody() {}

  explicit DescribeEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (events) {
      res["Events"] = events ? boost::any(events->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(map<string, boost::any>) == m["Events"].type()) {
        DescribeEventsResponseBodyEvents model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Events"]));
        events = make_shared<DescribeEventsResponseBodyEvents>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeEventsResponseBody() = default;
};
class DescribeEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeEventsResponseBody> body{};

  DescribeEventsResponse() {}

  explicit DescribeEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEventsResponse() = default;
};
class DescribeGatherLogResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeId{};
  shared_ptr<string> regionId{};

  DescribeGatherLogResultRequest() {}

  explicit DescribeGatherLogResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeGatherLogResultRequest() = default;
};
class DescribeGatherLogResultResponseBodyGatherLogResultChange : public Darabonba::Model {
public:
  shared_ptr<bool> changePaused{};
  shared_ptr<string> changeDescription{};
  shared_ptr<long> finishTime{};
  shared_ptr<long> updateTime{};
  shared_ptr<bool> changeTimedout{};
  shared_ptr<long> createTime{};
  shared_ptr<string> changeMessage{};
  shared_ptr<string> actionName{};
  shared_ptr<bool> changeFinished{};
  shared_ptr<string> createUsername{};
  shared_ptr<bool> changeSucceeded{};
  shared_ptr<string> changeId{};
  shared_ptr<bool> changeAborted{};
  shared_ptr<string> envId{};
  shared_ptr<string> changeName{};

  DescribeGatherLogResultResponseBodyGatherLogResultChange() {}

  explicit DescribeGatherLogResultResponseBodyGatherLogResultChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changePaused) {
      res["ChangePaused"] = boost::any(*changePaused);
    }
    if (changeDescription) {
      res["ChangeDescription"] = boost::any(*changeDescription);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (changeTimedout) {
      res["ChangeTimedout"] = boost::any(*changeTimedout);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (changeMessage) {
      res["ChangeMessage"] = boost::any(*changeMessage);
    }
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (changeFinished) {
      res["ChangeFinished"] = boost::any(*changeFinished);
    }
    if (createUsername) {
      res["CreateUsername"] = boost::any(*createUsername);
    }
    if (changeSucceeded) {
      res["ChangeSucceeded"] = boost::any(*changeSucceeded);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (changeAborted) {
      res["ChangeAborted"] = boost::any(*changeAborted);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (changeName) {
      res["ChangeName"] = boost::any(*changeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangePaused") != m.end() && !m["ChangePaused"].empty()) {
      changePaused = make_shared<bool>(boost::any_cast<bool>(m["ChangePaused"]));
    }
    if (m.find("ChangeDescription") != m.end() && !m["ChangeDescription"].empty()) {
      changeDescription = make_shared<string>(boost::any_cast<string>(m["ChangeDescription"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<long>(boost::any_cast<long>(m["FinishTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("ChangeTimedout") != m.end() && !m["ChangeTimedout"].empty()) {
      changeTimedout = make_shared<bool>(boost::any_cast<bool>(m["ChangeTimedout"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ChangeMessage") != m.end() && !m["ChangeMessage"].empty()) {
      changeMessage = make_shared<string>(boost::any_cast<string>(m["ChangeMessage"]));
    }
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("ChangeFinished") != m.end() && !m["ChangeFinished"].empty()) {
      changeFinished = make_shared<bool>(boost::any_cast<bool>(m["ChangeFinished"]));
    }
    if (m.find("CreateUsername") != m.end() && !m["CreateUsername"].empty()) {
      createUsername = make_shared<string>(boost::any_cast<string>(m["CreateUsername"]));
    }
    if (m.find("ChangeSucceeded") != m.end() && !m["ChangeSucceeded"].empty()) {
      changeSucceeded = make_shared<bool>(boost::any_cast<bool>(m["ChangeSucceeded"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("ChangeAborted") != m.end() && !m["ChangeAborted"].empty()) {
      changeAborted = make_shared<bool>(boost::any_cast<bool>(m["ChangeAborted"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("ChangeName") != m.end() && !m["ChangeName"].empty()) {
      changeName = make_shared<string>(boost::any_cast<string>(m["ChangeName"]));
    }
  }


  virtual ~DescribeGatherLogResultResponseBodyGatherLogResultChange() = default;
};
class DescribeGatherLogResultResponseBodyGatherLogResultInstanceResultsInstanceResult : public Darabonba::Model {
public:
  shared_ptr<string> taskMessage{};
  shared_ptr<string> storageKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> taskSucceeded{};

  DescribeGatherLogResultResponseBodyGatherLogResultInstanceResultsInstanceResult() {}

  explicit DescribeGatherLogResultResponseBodyGatherLogResultInstanceResultsInstanceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskMessage) {
      res["TaskMessage"] = boost::any(*taskMessage);
    }
    if (storageKey) {
      res["StorageKey"] = boost::any(*storageKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskSucceeded) {
      res["TaskSucceeded"] = boost::any(*taskSucceeded);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskMessage") != m.end() && !m["TaskMessage"].empty()) {
      taskMessage = make_shared<string>(boost::any_cast<string>(m["TaskMessage"]));
    }
    if (m.find("StorageKey") != m.end() && !m["StorageKey"].empty()) {
      storageKey = make_shared<string>(boost::any_cast<string>(m["StorageKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskSucceeded") != m.end() && !m["TaskSucceeded"].empty()) {
      taskSucceeded = make_shared<bool>(boost::any_cast<bool>(m["TaskSucceeded"]));
    }
  }


  virtual ~DescribeGatherLogResultResponseBodyGatherLogResultInstanceResultsInstanceResult() = default;
};
class DescribeGatherLogResultResponseBodyGatherLogResultInstanceResults : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatherLogResultResponseBodyGatherLogResultInstanceResultsInstanceResult>> instanceResult{};

  DescribeGatherLogResultResponseBodyGatherLogResultInstanceResults() {}

  explicit DescribeGatherLogResultResponseBodyGatherLogResultInstanceResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceResult) {
      vector<boost::any> temp1;
      for(auto item1:*instanceResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceResult"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceResult") != m.end() && !m["InstanceResult"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceResult"].type()) {
        vector<DescribeGatherLogResultResponseBodyGatherLogResultInstanceResultsInstanceResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatherLogResultResponseBodyGatherLogResultInstanceResultsInstanceResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceResult = make_shared<vector<DescribeGatherLogResultResponseBodyGatherLogResultInstanceResultsInstanceResult>>(expect1);
      }
    }
  }


  virtual ~DescribeGatherLogResultResponseBodyGatherLogResultInstanceResults() = default;
};
class DescribeGatherLogResultResponseBodyGatherLogResult : public Darabonba::Model {
public:
  shared_ptr<string> logPath{};
  shared_ptr<DescribeGatherLogResultResponseBodyGatherLogResultChange> change{};
  shared_ptr<DescribeGatherLogResultResponseBodyGatherLogResultInstanceResults> instanceResults{};

  DescribeGatherLogResultResponseBodyGatherLogResult() {}

  explicit DescribeGatherLogResultResponseBodyGatherLogResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logPath) {
      res["LogPath"] = boost::any(*logPath);
    }
    if (change) {
      res["Change"] = change ? boost::any(change->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceResults) {
      res["InstanceResults"] = instanceResults ? boost::any(instanceResults->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogPath") != m.end() && !m["LogPath"].empty()) {
      logPath = make_shared<string>(boost::any_cast<string>(m["LogPath"]));
    }
    if (m.find("Change") != m.end() && !m["Change"].empty()) {
      if (typeid(map<string, boost::any>) == m["Change"].type()) {
        DescribeGatherLogResultResponseBodyGatherLogResultChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Change"]));
        change = make_shared<DescribeGatherLogResultResponseBodyGatherLogResultChange>(model1);
      }
    }
    if (m.find("InstanceResults") != m.end() && !m["InstanceResults"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceResults"].type()) {
        DescribeGatherLogResultResponseBodyGatherLogResultInstanceResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceResults"]));
        instanceResults = make_shared<DescribeGatherLogResultResponseBodyGatherLogResultInstanceResults>(model1);
      }
    }
  }


  virtual ~DescribeGatherLogResultResponseBodyGatherLogResult() = default;
};
class DescribeGatherLogResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeGatherLogResultResponseBodyGatherLogResult> gatherLogResult{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  DescribeGatherLogResultResponseBody() {}

  explicit DescribeGatherLogResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatherLogResult) {
      res["GatherLogResult"] = gatherLogResult ? boost::any(gatherLogResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatherLogResult") != m.end() && !m["GatherLogResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["GatherLogResult"].type()) {
        DescribeGatherLogResultResponseBodyGatherLogResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GatherLogResult"]));
        gatherLogResult = make_shared<DescribeGatherLogResultResponseBodyGatherLogResult>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeGatherLogResultResponseBody() = default;
};
class DescribeGatherLogResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGatherLogResultResponseBody> body{};

  DescribeGatherLogResultResponse() {}

  explicit DescribeGatherLogResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatherLogResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatherLogResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatherLogResultResponse() = default;
};
class DescribeGatherStatsResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeId{};
  shared_ptr<string> regionId{};

  DescribeGatherStatsResultRequest() {}

  explicit DescribeGatherStatsResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeGatherStatsResultRequest() = default;
};
class DescribeGatherStatsResultResponseBodyGatherStatsResultChange : public Darabonba::Model {
public:
  shared_ptr<bool> changePaused{};
  shared_ptr<string> changeDescription{};
  shared_ptr<long> finishTime{};
  shared_ptr<long> updateTime{};
  shared_ptr<bool> changeTimedout{};
  shared_ptr<long> createTime{};
  shared_ptr<string> changeMessage{};
  shared_ptr<string> actionName{};
  shared_ptr<bool> changeFinished{};
  shared_ptr<string> createUsername{};
  shared_ptr<bool> changeSucceeded{};
  shared_ptr<string> changeId{};
  shared_ptr<bool> changeAborted{};
  shared_ptr<string> envId{};
  shared_ptr<string> changeName{};

  DescribeGatherStatsResultResponseBodyGatherStatsResultChange() {}

  explicit DescribeGatherStatsResultResponseBodyGatherStatsResultChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changePaused) {
      res["ChangePaused"] = boost::any(*changePaused);
    }
    if (changeDescription) {
      res["ChangeDescription"] = boost::any(*changeDescription);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (changeTimedout) {
      res["ChangeTimedout"] = boost::any(*changeTimedout);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (changeMessage) {
      res["ChangeMessage"] = boost::any(*changeMessage);
    }
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (changeFinished) {
      res["ChangeFinished"] = boost::any(*changeFinished);
    }
    if (createUsername) {
      res["CreateUsername"] = boost::any(*createUsername);
    }
    if (changeSucceeded) {
      res["ChangeSucceeded"] = boost::any(*changeSucceeded);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (changeAborted) {
      res["ChangeAborted"] = boost::any(*changeAborted);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (changeName) {
      res["ChangeName"] = boost::any(*changeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangePaused") != m.end() && !m["ChangePaused"].empty()) {
      changePaused = make_shared<bool>(boost::any_cast<bool>(m["ChangePaused"]));
    }
    if (m.find("ChangeDescription") != m.end() && !m["ChangeDescription"].empty()) {
      changeDescription = make_shared<string>(boost::any_cast<string>(m["ChangeDescription"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<long>(boost::any_cast<long>(m["FinishTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("ChangeTimedout") != m.end() && !m["ChangeTimedout"].empty()) {
      changeTimedout = make_shared<bool>(boost::any_cast<bool>(m["ChangeTimedout"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ChangeMessage") != m.end() && !m["ChangeMessage"].empty()) {
      changeMessage = make_shared<string>(boost::any_cast<string>(m["ChangeMessage"]));
    }
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("ChangeFinished") != m.end() && !m["ChangeFinished"].empty()) {
      changeFinished = make_shared<bool>(boost::any_cast<bool>(m["ChangeFinished"]));
    }
    if (m.find("CreateUsername") != m.end() && !m["CreateUsername"].empty()) {
      createUsername = make_shared<string>(boost::any_cast<string>(m["CreateUsername"]));
    }
    if (m.find("ChangeSucceeded") != m.end() && !m["ChangeSucceeded"].empty()) {
      changeSucceeded = make_shared<bool>(boost::any_cast<bool>(m["ChangeSucceeded"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("ChangeAborted") != m.end() && !m["ChangeAborted"].empty()) {
      changeAborted = make_shared<bool>(boost::any_cast<bool>(m["ChangeAborted"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("ChangeName") != m.end() && !m["ChangeName"].empty()) {
      changeName = make_shared<string>(boost::any_cast<string>(m["ChangeName"]));
    }
  }


  virtual ~DescribeGatherStatsResultResponseBodyGatherStatsResultChange() = default;
};
class DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResultsInstanceResult : public Darabonba::Model {
public:
  shared_ptr<string> taskMessage{};
  shared_ptr<string> storageKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> taskSucceeded{};

  DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResultsInstanceResult() {}

  explicit DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResultsInstanceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskMessage) {
      res["TaskMessage"] = boost::any(*taskMessage);
    }
    if (storageKey) {
      res["StorageKey"] = boost::any(*storageKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskSucceeded) {
      res["TaskSucceeded"] = boost::any(*taskSucceeded);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskMessage") != m.end() && !m["TaskMessage"].empty()) {
      taskMessage = make_shared<string>(boost::any_cast<string>(m["TaskMessage"]));
    }
    if (m.find("StorageKey") != m.end() && !m["StorageKey"].empty()) {
      storageKey = make_shared<string>(boost::any_cast<string>(m["StorageKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskSucceeded") != m.end() && !m["TaskSucceeded"].empty()) {
      taskSucceeded = make_shared<bool>(boost::any_cast<bool>(m["TaskSucceeded"]));
    }
  }


  virtual ~DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResultsInstanceResult() = default;
};
class DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResults : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResultsInstanceResult>> instanceResult{};

  DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResults() {}

  explicit DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceResult) {
      vector<boost::any> temp1;
      for(auto item1:*instanceResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceResult"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceResult") != m.end() && !m["InstanceResult"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceResult"].type()) {
        vector<DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResultsInstanceResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResultsInstanceResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceResult = make_shared<vector<DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResultsInstanceResult>>(expect1);
      }
    }
  }


  virtual ~DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResults() = default;
};
class DescribeGatherStatsResultResponseBodyGatherStatsResult : public Darabonba::Model {
public:
  shared_ptr<DescribeGatherStatsResultResponseBodyGatherStatsResultChange> change{};
  shared_ptr<DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResults> instanceResults{};

  DescribeGatherStatsResultResponseBodyGatherStatsResult() {}

  explicit DescribeGatherStatsResultResponseBodyGatherStatsResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (change) {
      res["Change"] = change ? boost::any(change->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceResults) {
      res["InstanceResults"] = instanceResults ? boost::any(instanceResults->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Change") != m.end() && !m["Change"].empty()) {
      if (typeid(map<string, boost::any>) == m["Change"].type()) {
        DescribeGatherStatsResultResponseBodyGatherStatsResultChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Change"]));
        change = make_shared<DescribeGatherStatsResultResponseBodyGatherStatsResultChange>(model1);
      }
    }
    if (m.find("InstanceResults") != m.end() && !m["InstanceResults"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceResults"].type()) {
        DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceResults"]));
        instanceResults = make_shared<DescribeGatherStatsResultResponseBodyGatherStatsResultInstanceResults>(model1);
      }
    }
  }


  virtual ~DescribeGatherStatsResultResponseBodyGatherStatsResult() = default;
};
class DescribeGatherStatsResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeGatherStatsResultResponseBodyGatherStatsResult> gatherStatsResult{};
  shared_ptr<string> code{};

  DescribeGatherStatsResultResponseBody() {}

  explicit DescribeGatherStatsResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (gatherStatsResult) {
      res["GatherStatsResult"] = gatherStatsResult ? boost::any(gatherStatsResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("GatherStatsResult") != m.end() && !m["GatherStatsResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["GatherStatsResult"].type()) {
        DescribeGatherStatsResultResponseBodyGatherStatsResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GatherStatsResult"]));
        gatherStatsResult = make_shared<DescribeGatherStatsResultResponseBodyGatherStatsResult>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeGatherStatsResultResponseBody() = default;
};
class DescribeGatherStatsResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGatherStatsResultResponseBody> body{};

  DescribeGatherStatsResultResponse() {}

  explicit DescribeGatherStatsResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatherStatsResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatherStatsResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatherStatsResultResponse() = default;
};
class DescribeInstanceHealthRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DescribeInstanceHealthRequest() {}

  explicit DescribeInstanceHealthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeInstanceHealthRequest() = default;
};
class DescribeInstanceHealthResponseBodyInstanceHealth : public Darabonba::Model {
public:
  shared_ptr<string> appStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> disconnectedTime{};
  shared_ptr<string> agentStatus{};

  DescribeInstanceHealthResponseBodyInstanceHealth() {}

  explicit DescribeInstanceHealthResponseBodyInstanceHealth(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (disconnectedTime) {
      res["DisconnectedTime"] = boost::any(*disconnectedTime);
    }
    if (agentStatus) {
      res["AgentStatus"] = boost::any(*agentStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DisconnectedTime") != m.end() && !m["DisconnectedTime"].empty()) {
      disconnectedTime = make_shared<long>(boost::any_cast<long>(m["DisconnectedTime"]));
    }
    if (m.find("AgentStatus") != m.end() && !m["AgentStatus"].empty()) {
      agentStatus = make_shared<string>(boost::any_cast<string>(m["AgentStatus"]));
    }
  }


  virtual ~DescribeInstanceHealthResponseBodyInstanceHealth() = default;
};
class DescribeInstanceHealthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInstanceHealthResponseBodyInstanceHealth> instanceHealth{};
  shared_ptr<string> code{};

  DescribeInstanceHealthResponseBody() {}

  explicit DescribeInstanceHealthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceHealth) {
      res["InstanceHealth"] = instanceHealth ? boost::any(instanceHealth->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceHealth") != m.end() && !m["InstanceHealth"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceHealth"].type()) {
        DescribeInstanceHealthResponseBodyInstanceHealth model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceHealth"]));
        instanceHealth = make_shared<DescribeInstanceHealthResponseBodyInstanceHealth>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeInstanceHealthResponseBody() = default;
};
class DescribeInstanceHealthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceHealthResponseBody> body{};

  DescribeInstanceHealthResponse() {}

  explicit DescribeInstanceHealthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceHealthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceHealthResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceHealthResponse() = default;
};
class DescribePkgVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> pkgVersionLabel{};
  shared_ptr<string> pkgVersionSearch{};
  shared_ptr<string> regionId{};

  DescribePkgVersionsRequest() {}

  explicit DescribePkgVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pkgVersionLabel) {
      res["PkgVersionLabel"] = boost::any(*pkgVersionLabel);
    }
    if (pkgVersionSearch) {
      res["PkgVersionSearch"] = boost::any(*pkgVersionSearch);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PkgVersionLabel") != m.end() && !m["PkgVersionLabel"].empty()) {
      pkgVersionLabel = make_shared<string>(boost::any_cast<string>(m["PkgVersionLabel"]));
    }
    if (m.find("PkgVersionSearch") != m.end() && !m["PkgVersionSearch"].empty()) {
      pkgVersionSearch = make_shared<string>(boost::any_cast<string>(m["PkgVersionSearch"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribePkgVersionsRequest() = default;
};
class DescribePkgVersionsResponseBodyPkgVersionsPkgVersion : public Darabonba::Model {
public:
  shared_ptr<string> createUsername{};
  shared_ptr<string> appName{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> pkgVersionLabel{};
  shared_ptr<long> createTime{};
  shared_ptr<string> packageSource{};
  shared_ptr<string> appId{};
  shared_ptr<string> packageETag{};
  shared_ptr<string> pkgVersionId{};
  shared_ptr<string> pkgVersionDescription{};

  DescribePkgVersionsResponseBodyPkgVersionsPkgVersion() {}

  explicit DescribePkgVersionsResponseBodyPkgVersionsPkgVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createUsername) {
      res["CreateUsername"] = boost::any(*createUsername);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (pkgVersionLabel) {
      res["PkgVersionLabel"] = boost::any(*pkgVersionLabel);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (packageSource) {
      res["PackageSource"] = boost::any(*packageSource);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (packageETag) {
      res["PackageETag"] = boost::any(*packageETag);
    }
    if (pkgVersionId) {
      res["PkgVersionId"] = boost::any(*pkgVersionId);
    }
    if (pkgVersionDescription) {
      res["PkgVersionDescription"] = boost::any(*pkgVersionDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateUsername") != m.end() && !m["CreateUsername"].empty()) {
      createUsername = make_shared<string>(boost::any_cast<string>(m["CreateUsername"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("PkgVersionLabel") != m.end() && !m["PkgVersionLabel"].empty()) {
      pkgVersionLabel = make_shared<string>(boost::any_cast<string>(m["PkgVersionLabel"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("PackageSource") != m.end() && !m["PackageSource"].empty()) {
      packageSource = make_shared<string>(boost::any_cast<string>(m["PackageSource"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PackageETag") != m.end() && !m["PackageETag"].empty()) {
      packageETag = make_shared<string>(boost::any_cast<string>(m["PackageETag"]));
    }
    if (m.find("PkgVersionId") != m.end() && !m["PkgVersionId"].empty()) {
      pkgVersionId = make_shared<string>(boost::any_cast<string>(m["PkgVersionId"]));
    }
    if (m.find("PkgVersionDescription") != m.end() && !m["PkgVersionDescription"].empty()) {
      pkgVersionDescription = make_shared<string>(boost::any_cast<string>(m["PkgVersionDescription"]));
    }
  }


  virtual ~DescribePkgVersionsResponseBodyPkgVersionsPkgVersion() = default;
};
class DescribePkgVersionsResponseBodyPkgVersions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePkgVersionsResponseBodyPkgVersionsPkgVersion>> pkgVersion{};

  DescribePkgVersionsResponseBodyPkgVersions() {}

  explicit DescribePkgVersionsResponseBodyPkgVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pkgVersion) {
      vector<boost::any> temp1;
      for(auto item1:*pkgVersion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PkgVersion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PkgVersion") != m.end() && !m["PkgVersion"].empty()) {
      if (typeid(vector<boost::any>) == m["PkgVersion"].type()) {
        vector<DescribePkgVersionsResponseBodyPkgVersionsPkgVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PkgVersion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePkgVersionsResponseBodyPkgVersionsPkgVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pkgVersion = make_shared<vector<DescribePkgVersionsResponseBodyPkgVersionsPkgVersion>>(expect1);
      }
    }
  }


  virtual ~DescribePkgVersionsResponseBodyPkgVersions() = default;
};
class DescribePkgVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribePkgVersionsResponseBodyPkgVersions> pkgVersions{};
  shared_ptr<string> code{};

  DescribePkgVersionsResponseBody() {}

  explicit DescribePkgVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pkgVersions) {
      res["PkgVersions"] = pkgVersions ? boost::any(pkgVersions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PkgVersions") != m.end() && !m["PkgVersions"].empty()) {
      if (typeid(map<string, boost::any>) == m["PkgVersions"].type()) {
        DescribePkgVersionsResponseBodyPkgVersions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PkgVersions"]));
        pkgVersions = make_shared<DescribePkgVersionsResponseBodyPkgVersions>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribePkgVersionsResponseBody() = default;
};
class DescribePkgVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePkgVersionsResponseBody> body{};

  DescribePkgVersionsResponse() {}

  explicit DescribePkgVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePkgVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePkgVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePkgVersionsResponse() = default;
};
class DescribePublicConfigTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> regionId{};

  DescribePublicConfigTemplatesRequest() {}

  explicit DescribePublicConfigTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribePublicConfigTemplatesRequest() = default;
};
class DescribePublicConfigTemplatesResponseBodyPublicConfigTemplatesPublicConfigTemplate : public Darabonba::Model {
public:
  shared_ptr<string> templateDescription{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> stackId{};
  shared_ptr<string> templateLogo{};
  shared_ptr<long> createTime{};
  shared_ptr<string> packageSource{};
  shared_ptr<string> stackName{};
  shared_ptr<string> templateName{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> templateId{};

  DescribePublicConfigTemplatesResponseBodyPublicConfigTemplatesPublicConfigTemplate() {}

  explicit DescribePublicConfigTemplatesResponseBodyPublicConfigTemplatesPublicConfigTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (templateLogo) {
      res["TemplateLogo"] = boost::any(*templateLogo);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (packageSource) {
      res["PackageSource"] = boost::any(*packageSource);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("TemplateLogo") != m.end() && !m["TemplateLogo"].empty()) {
      templateLogo = make_shared<string>(boost::any_cast<string>(m["TemplateLogo"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("PackageSource") != m.end() && !m["PackageSource"].empty()) {
      packageSource = make_shared<string>(boost::any_cast<string>(m["PackageSource"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DescribePublicConfigTemplatesResponseBodyPublicConfigTemplatesPublicConfigTemplate() = default;
};
class DescribePublicConfigTemplatesResponseBodyPublicConfigTemplates : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePublicConfigTemplatesResponseBodyPublicConfigTemplatesPublicConfigTemplate>> publicConfigTemplate{};

  DescribePublicConfigTemplatesResponseBodyPublicConfigTemplates() {}

  explicit DescribePublicConfigTemplatesResponseBodyPublicConfigTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (publicConfigTemplate) {
      vector<boost::any> temp1;
      for(auto item1:*publicConfigTemplate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PublicConfigTemplate"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PublicConfigTemplate") != m.end() && !m["PublicConfigTemplate"].empty()) {
      if (typeid(vector<boost::any>) == m["PublicConfigTemplate"].type()) {
        vector<DescribePublicConfigTemplatesResponseBodyPublicConfigTemplatesPublicConfigTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PublicConfigTemplate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePublicConfigTemplatesResponseBodyPublicConfigTemplatesPublicConfigTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        publicConfigTemplate = make_shared<vector<DescribePublicConfigTemplatesResponseBodyPublicConfigTemplatesPublicConfigTemplate>>(expect1);
      }
    }
  }


  virtual ~DescribePublicConfigTemplatesResponseBodyPublicConfigTemplates() = default;
};
class DescribePublicConfigTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribePublicConfigTemplatesResponseBodyPublicConfigTemplates> publicConfigTemplates{};
  shared_ptr<string> code{};

  DescribePublicConfigTemplatesResponseBody() {}

  explicit DescribePublicConfigTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (publicConfigTemplates) {
      res["PublicConfigTemplates"] = publicConfigTemplates ? boost::any(publicConfigTemplates->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PublicConfigTemplates") != m.end() && !m["PublicConfigTemplates"].empty()) {
      if (typeid(map<string, boost::any>) == m["PublicConfigTemplates"].type()) {
        DescribePublicConfigTemplatesResponseBodyPublicConfigTemplates model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PublicConfigTemplates"]));
        publicConfigTemplates = make_shared<DescribePublicConfigTemplatesResponseBodyPublicConfigTemplates>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribePublicConfigTemplatesResponseBody() = default;
};
class DescribePublicConfigTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePublicConfigTemplatesResponseBody> body{};

  DescribePublicConfigTemplatesResponse() {}

  explicit DescribePublicConfigTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePublicConfigTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePublicConfigTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePublicConfigTemplatesResponse() = default;
};
class DescribeStacksRequest : public Darabonba::Model {
public:
  shared_ptr<bool> recommendedOnly{};
  shared_ptr<string> categoryName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> regionId{};

  DescribeStacksRequest() {}

  explicit DescribeStacksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recommendedOnly) {
      res["RecommendedOnly"] = boost::any(*recommendedOnly);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecommendedOnly") != m.end() && !m["RecommendedOnly"].empty()) {
      recommendedOnly = make_shared<bool>(boost::any_cast<bool>(m["RecommendedOnly"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeStacksRequest() = default;
};
class DescribeStacksResponseBodyStacksStack : public Darabonba::Model {
public:
  shared_ptr<long> updateTime{};
  shared_ptr<string> stackId{};
  shared_ptr<long> createTime{};
  shared_ptr<bool> recommendedStack{};
  shared_ptr<string> stackName{};
  shared_ptr<string> categoryName{};
  shared_ptr<long> versionCode{};
  shared_ptr<bool> latestStack{};

  DescribeStacksResponseBodyStacksStack() {}

  explicit DescribeStacksResponseBodyStacksStack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (recommendedStack) {
      res["RecommendedStack"] = boost::any(*recommendedStack);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (versionCode) {
      res["VersionCode"] = boost::any(*versionCode);
    }
    if (latestStack) {
      res["LatestStack"] = boost::any(*latestStack);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("RecommendedStack") != m.end() && !m["RecommendedStack"].empty()) {
      recommendedStack = make_shared<bool>(boost::any_cast<bool>(m["RecommendedStack"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("VersionCode") != m.end() && !m["VersionCode"].empty()) {
      versionCode = make_shared<long>(boost::any_cast<long>(m["VersionCode"]));
    }
    if (m.find("LatestStack") != m.end() && !m["LatestStack"].empty()) {
      latestStack = make_shared<bool>(boost::any_cast<bool>(m["LatestStack"]));
    }
  }


  virtual ~DescribeStacksResponseBodyStacksStack() = default;
};
class DescribeStacksResponseBodyStacks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeStacksResponseBodyStacksStack>> stack{};

  DescribeStacksResponseBodyStacks() {}

  explicit DescribeStacksResponseBodyStacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stack) {
      vector<boost::any> temp1;
      for(auto item1:*stack){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stack"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Stack") != m.end() && !m["Stack"].empty()) {
      if (typeid(vector<boost::any>) == m["Stack"].type()) {
        vector<DescribeStacksResponseBodyStacksStack> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stack"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStacksResponseBodyStacksStack model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stack = make_shared<vector<DescribeStacksResponseBodyStacksStack>>(expect1);
      }
    }
  }


  virtual ~DescribeStacksResponseBodyStacks() = default;
};
class DescribeStacksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeStacksResponseBodyStacks> stacks{};
  shared_ptr<string> code{};

  DescribeStacksResponseBody() {}

  explicit DescribeStacksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (stacks) {
      res["Stacks"] = stacks ? boost::any(stacks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Stacks") != m.end() && !m["Stacks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stacks"].type()) {
        DescribeStacksResponseBodyStacks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stacks"]));
        stacks = make_shared<DescribeStacksResponseBodyStacks>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeStacksResponseBody() = default;
};
class DescribeStacksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeStacksResponseBody> body{};

  DescribeStacksResponse() {}

  explicit DescribeStacksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStacksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStacksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStacksResponse() = default;
};
class DescribeStorageRequest : public Darabonba::Model {
public:
  shared_ptr<bool> usingSharedStorage{};
  shared_ptr<string> regionId{};

  DescribeStorageRequest() {}

  explicit DescribeStorageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (usingSharedStorage) {
      res["UsingSharedStorage"] = boost::any(*usingSharedStorage);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UsingSharedStorage") != m.end() && !m["UsingSharedStorage"].empty()) {
      usingSharedStorage = make_shared<bool>(boost::any_cast<bool>(m["UsingSharedStorage"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeStorageRequest() = default;
};
class DescribeStorageResponseBodyStorage : public Darabonba::Model {
public:
  shared_ptr<long> updateTime{};
  shared_ptr<string> keyPrefix{};
  shared_ptr<string> pkgKeyPrefix{};
  shared_ptr<long> createTime{};
  shared_ptr<string> bucketName{};

  DescribeStorageResponseBodyStorage() {}

  explicit DescribeStorageResponseBodyStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (keyPrefix) {
      res["KeyPrefix"] = boost::any(*keyPrefix);
    }
    if (pkgKeyPrefix) {
      res["PkgKeyPrefix"] = boost::any(*pkgKeyPrefix);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("KeyPrefix") != m.end() && !m["KeyPrefix"].empty()) {
      keyPrefix = make_shared<string>(boost::any_cast<string>(m["KeyPrefix"]));
    }
    if (m.find("PkgKeyPrefix") != m.end() && !m["PkgKeyPrefix"].empty()) {
      pkgKeyPrefix = make_shared<string>(boost::any_cast<string>(m["PkgKeyPrefix"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
  }


  virtual ~DescribeStorageResponseBodyStorage() = default;
};
class DescribeStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeStorageResponseBodyStorage> storage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  DescribeStorageResponseBody() {}

  explicit DescribeStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storage) {
      res["Storage"] = storage ? boost::any(storage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Storage"].type()) {
        DescribeStorageResponseBodyStorage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Storage"]));
        storage = make_shared<DescribeStorageResponseBodyStorage>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~DescribeStorageResponseBody() = default;
};
class DescribeStorageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeStorageResponseBody> body{};

  DescribeStorageResponse() {}

  explicit DescribeStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStorageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStorageResponse() = default;
};
class GatherAppEnvLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> targetInstances{};
  shared_ptr<string> logPath{};
  shared_ptr<string> regionId{};

  GatherAppEnvLogRequest() {}

  explicit GatherAppEnvLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (targetInstances) {
      res["TargetInstances"] = boost::any(*targetInstances);
    }
    if (logPath) {
      res["LogPath"] = boost::any(*logPath);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("TargetInstances") != m.end() && !m["TargetInstances"].empty()) {
      targetInstances = make_shared<string>(boost::any_cast<string>(m["TargetInstances"]));
    }
    if (m.find("LogPath") != m.end() && !m["LogPath"].empty()) {
      logPath = make_shared<string>(boost::any_cast<string>(m["LogPath"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GatherAppEnvLogRequest() = default;
};
class GatherAppEnvLogResponseBodyEnvChange : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};

  GatherAppEnvLogResponseBodyEnvChange() {}

  explicit GatherAppEnvLogResponseBodyEnvChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~GatherAppEnvLogResponseBodyEnvChange() = default;
};
class GatherAppEnvLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<GatherAppEnvLogResponseBodyEnvChange> envChange{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  GatherAppEnvLogResponseBody() {}

  explicit GatherAppEnvLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envChange) {
      res["EnvChange"] = envChange ? boost::any(envChange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvChange") != m.end() && !m["EnvChange"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChange"].type()) {
        GatherAppEnvLogResponseBodyEnvChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChange"]));
        envChange = make_shared<GatherAppEnvLogResponseBodyEnvChange>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~GatherAppEnvLogResponseBody() = default;
};
class GatherAppEnvLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GatherAppEnvLogResponseBody> body{};

  GatherAppEnvLogResponse() {}

  explicit GatherAppEnvLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GatherAppEnvLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GatherAppEnvLogResponseBody>(model1);
      }
    }
  }


  virtual ~GatherAppEnvLogResponse() = default;
};
class GatherAppEnvStatsRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> targetInstances{};
  shared_ptr<string> regionId{};

  GatherAppEnvStatsRequest() {}

  explicit GatherAppEnvStatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (targetInstances) {
      res["TargetInstances"] = boost::any(*targetInstances);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("TargetInstances") != m.end() && !m["TargetInstances"].empty()) {
      targetInstances = make_shared<string>(boost::any_cast<string>(m["TargetInstances"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GatherAppEnvStatsRequest() = default;
};
class GatherAppEnvStatsResponseBodyEnvChange : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};

  GatherAppEnvStatsResponseBodyEnvChange() {}

  explicit GatherAppEnvStatsResponseBodyEnvChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~GatherAppEnvStatsResponseBodyEnvChange() = default;
};
class GatherAppEnvStatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GatherAppEnvStatsResponseBodyEnvChange> envChange{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  GatherAppEnvStatsResponseBody() {}

  explicit GatherAppEnvStatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envChange) {
      res["EnvChange"] = envChange ? boost::any(envChange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvChange") != m.end() && !m["EnvChange"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChange"].type()) {
        GatherAppEnvStatsResponseBodyEnvChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChange"]));
        envChange = make_shared<GatherAppEnvStatsResponseBodyEnvChange>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~GatherAppEnvStatsResponseBody() = default;
};
class GatherAppEnvStatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GatherAppEnvStatsResponseBody> body{};

  GatherAppEnvStatsResponse() {}

  explicit GatherAppEnvStatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GatherAppEnvStatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GatherAppEnvStatsResponseBody>(model1);
      }
    }
  }


  virtual ~GatherAppEnvStatsResponse() = default;
};
class PauseChangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeId{};
  shared_ptr<string> regionId{};

  PauseChangeRequest() {}

  explicit PauseChangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~PauseChangeRequest() = default;
};
class PauseChangeResponseBodyEnvChange : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};

  PauseChangeResponseBodyEnvChange() {}

  explicit PauseChangeResponseBodyEnvChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~PauseChangeResponseBodyEnvChange() = default;
};
class PauseChangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<PauseChangeResponseBodyEnvChange> envChange{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  PauseChangeResponseBody() {}

  explicit PauseChangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envChange) {
      res["EnvChange"] = envChange ? boost::any(envChange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvChange") != m.end() && !m["EnvChange"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChange"].type()) {
        PauseChangeResponseBodyEnvChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChange"]));
        envChange = make_shared<PauseChangeResponseBodyEnvChange>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~PauseChangeResponseBody() = default;
};
class PauseChangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PauseChangeResponseBody> body{};

  PauseChangeResponse() {}

  explicit PauseChangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PauseChangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PauseChangeResponseBody>(model1);
      }
    }
  }


  virtual ~PauseChangeResponse() = default;
};
class RebuildAppEnvRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};

  RebuildAppEnvRequest() {}

  explicit RebuildAppEnvRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~RebuildAppEnvRequest() = default;
};
class RebuildAppEnvResponseBodyEnvChangeDetailOperationsOperation : public Darabonba::Model {
public:
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationType{};

  RebuildAppEnvResponseBodyEnvChangeDetailOperationsOperation() {}

  explicit RebuildAppEnvResponseBodyEnvChangeDetailOperationsOperation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
  }


  virtual ~RebuildAppEnvResponseBodyEnvChangeDetailOperationsOperation() = default;
};
class RebuildAppEnvResponseBodyEnvChangeDetailOperations : public Darabonba::Model {
public:
  shared_ptr<vector<RebuildAppEnvResponseBodyEnvChangeDetailOperationsOperation>> operation{};

  RebuildAppEnvResponseBodyEnvChangeDetailOperations() {}

  explicit RebuildAppEnvResponseBodyEnvChangeDetailOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      vector<boost::any> temp1;
      for(auto item1:*operation){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Operation"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      if (typeid(vector<boost::any>) == m["Operation"].type()) {
        vector<RebuildAppEnvResponseBodyEnvChangeDetailOperationsOperation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Operation"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RebuildAppEnvResponseBodyEnvChangeDetailOperationsOperation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operation = make_shared<vector<RebuildAppEnvResponseBodyEnvChangeDetailOperationsOperation>>(expect1);
      }
    }
  }


  virtual ~RebuildAppEnvResponseBodyEnvChangeDetailOperations() = default;
};
class RebuildAppEnvResponseBodyEnvChangeDetail : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};
  shared_ptr<RebuildAppEnvResponseBodyEnvChangeDetailOperations> operations{};

  RebuildAppEnvResponseBodyEnvChangeDetail() {}

  explicit RebuildAppEnvResponseBodyEnvChangeDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (operations) {
      res["Operations"] = operations ? boost::any(operations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Operations") != m.end() && !m["Operations"].empty()) {
      if (typeid(map<string, boost::any>) == m["Operations"].type()) {
        RebuildAppEnvResponseBodyEnvChangeDetailOperations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Operations"]));
        operations = make_shared<RebuildAppEnvResponseBodyEnvChangeDetailOperations>(model1);
      }
    }
  }


  virtual ~RebuildAppEnvResponseBodyEnvChangeDetail() = default;
};
class RebuildAppEnvResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<RebuildAppEnvResponseBodyEnvChangeDetail> envChangeDetail{};
  shared_ptr<string> code{};

  RebuildAppEnvResponseBody() {}

  explicit RebuildAppEnvResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (envChangeDetail) {
      res["EnvChangeDetail"] = envChangeDetail ? boost::any(envChangeDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("EnvChangeDetail") != m.end() && !m["EnvChangeDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChangeDetail"].type()) {
        RebuildAppEnvResponseBodyEnvChangeDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChangeDetail"]));
        envChangeDetail = make_shared<RebuildAppEnvResponseBodyEnvChangeDetail>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~RebuildAppEnvResponseBody() = default;
};
class RebuildAppEnvResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RebuildAppEnvResponseBody> body{};

  RebuildAppEnvResponse() {}

  explicit RebuildAppEnvResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebuildAppEnvResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebuildAppEnvResponseBody>(model1);
      }
    }
  }


  virtual ~RebuildAppEnvResponse() = default;
};
class RestartAppEnvRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<long> batchSize{};
  shared_ptr<long> batchPercent{};
  shared_ptr<long> batchInterval{};
  shared_ptr<bool> pauseBetweenBatches{};
  shared_ptr<string> regionId{};

  RestartAppEnvRequest() {}

  explicit RestartAppEnvRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (batchSize) {
      res["BatchSize"] = boost::any(*batchSize);
    }
    if (batchPercent) {
      res["BatchPercent"] = boost::any(*batchPercent);
    }
    if (batchInterval) {
      res["BatchInterval"] = boost::any(*batchInterval);
    }
    if (pauseBetweenBatches) {
      res["PauseBetweenBatches"] = boost::any(*pauseBetweenBatches);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("BatchSize") != m.end() && !m["BatchSize"].empty()) {
      batchSize = make_shared<long>(boost::any_cast<long>(m["BatchSize"]));
    }
    if (m.find("BatchPercent") != m.end() && !m["BatchPercent"].empty()) {
      batchPercent = make_shared<long>(boost::any_cast<long>(m["BatchPercent"]));
    }
    if (m.find("BatchInterval") != m.end() && !m["BatchInterval"].empty()) {
      batchInterval = make_shared<long>(boost::any_cast<long>(m["BatchInterval"]));
    }
    if (m.find("PauseBetweenBatches") != m.end() && !m["PauseBetweenBatches"].empty()) {
      pauseBetweenBatches = make_shared<bool>(boost::any_cast<bool>(m["PauseBetweenBatches"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~RestartAppEnvRequest() = default;
};
class RestartAppEnvResponseBodyEnvChange : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};

  RestartAppEnvResponseBodyEnvChange() {}

  explicit RestartAppEnvResponseBodyEnvChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~RestartAppEnvResponseBodyEnvChange() = default;
};
class RestartAppEnvResponseBody : public Darabonba::Model {
public:
  shared_ptr<RestartAppEnvResponseBodyEnvChange> envChange{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  RestartAppEnvResponseBody() {}

  explicit RestartAppEnvResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envChange) {
      res["EnvChange"] = envChange ? boost::any(envChange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvChange") != m.end() && !m["EnvChange"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChange"].type()) {
        RestartAppEnvResponseBodyEnvChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChange"]));
        envChange = make_shared<RestartAppEnvResponseBodyEnvChange>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~RestartAppEnvResponseBody() = default;
};
class RestartAppEnvResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestartAppEnvResponseBody> body{};

  RestartAppEnvResponse() {}

  explicit RestartAppEnvResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartAppEnvResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartAppEnvResponseBody>(model1);
      }
    }
  }


  virtual ~RestartAppEnvResponse() = default;
};
class ResumeChangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeId{};
  shared_ptr<string> regionId{};

  ResumeChangeRequest() {}

  explicit ResumeChangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ResumeChangeRequest() = default;
};
class ResumeChangeResponseBodyEnvChange : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};

  ResumeChangeResponseBodyEnvChange() {}

  explicit ResumeChangeResponseBodyEnvChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~ResumeChangeResponseBodyEnvChange() = default;
};
class ResumeChangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<ResumeChangeResponseBodyEnvChange> envChange{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  ResumeChangeResponseBody() {}

  explicit ResumeChangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envChange) {
      res["EnvChange"] = envChange ? boost::any(envChange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvChange") != m.end() && !m["EnvChange"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChange"].type()) {
        ResumeChangeResponseBodyEnvChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChange"]));
        envChange = make_shared<ResumeChangeResponseBodyEnvChange>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ResumeChangeResponseBody() = default;
};
class ResumeChangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResumeChangeResponseBody> body{};

  ResumeChangeResponse() {}

  explicit ResumeChangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeChangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeChangeResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeChangeResponse() = default;
};
class StartAppEnvRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> regionId{};

  StartAppEnvRequest() {}

  explicit StartAppEnvRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StartAppEnvRequest() = default;
};
class StartAppEnvResponseBodyEnvChange : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};

  StartAppEnvResponseBodyEnvChange() {}

  explicit StartAppEnvResponseBodyEnvChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~StartAppEnvResponseBodyEnvChange() = default;
};
class StartAppEnvResponseBody : public Darabonba::Model {
public:
  shared_ptr<StartAppEnvResponseBodyEnvChange> envChange{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  StartAppEnvResponseBody() {}

  explicit StartAppEnvResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envChange) {
      res["EnvChange"] = envChange ? boost::any(envChange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvChange") != m.end() && !m["EnvChange"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChange"].type()) {
        StartAppEnvResponseBodyEnvChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChange"]));
        envChange = make_shared<StartAppEnvResponseBodyEnvChange>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~StartAppEnvResponseBody() = default;
};
class StartAppEnvResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartAppEnvResponseBody> body{};

  StartAppEnvResponse() {}

  explicit StartAppEnvResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartAppEnvResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartAppEnvResponseBody>(model1);
      }
    }
  }


  virtual ~StartAppEnvResponse() = default;
};
class StopAppEnvRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> regionId{};

  StopAppEnvRequest() {}

  explicit StopAppEnvRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StopAppEnvRequest() = default;
};
class StopAppEnvResponseBodyEnvChange : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};

  StopAppEnvResponseBodyEnvChange() {}

  explicit StopAppEnvResponseBodyEnvChange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~StopAppEnvResponseBodyEnvChange() = default;
};
class StopAppEnvResponseBody : public Darabonba::Model {
public:
  shared_ptr<StopAppEnvResponseBodyEnvChange> envChange{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  StopAppEnvResponseBody() {}

  explicit StopAppEnvResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envChange) {
      res["EnvChange"] = envChange ? boost::any(envChange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvChange") != m.end() && !m["EnvChange"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChange"].type()) {
        StopAppEnvResponseBodyEnvChange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChange"]));
        envChange = make_shared<StopAppEnvResponseBodyEnvChange>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~StopAppEnvResponseBody() = default;
};
class StopAppEnvResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopAppEnvResponseBody> body{};

  StopAppEnvResponse() {}

  explicit StopAppEnvResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopAppEnvResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopAppEnvResponseBody>(model1);
      }
    }
  }


  virtual ~StopAppEnvResponse() = default;
};
class TerminateAppEnvRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> dryRun{};
  shared_ptr<string> regionId{};

  TerminateAppEnvRequest() {}

  explicit TerminateAppEnvRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<string>(boost::any_cast<string>(m["DryRun"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~TerminateAppEnvRequest() = default;
};
class TerminateAppEnvResponseBodyEnvChangeDetailOperationsOperation : public Darabonba::Model {
public:
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationType{};

  TerminateAppEnvResponseBodyEnvChangeDetailOperationsOperation() {}

  explicit TerminateAppEnvResponseBodyEnvChangeDetailOperationsOperation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
  }


  virtual ~TerminateAppEnvResponseBodyEnvChangeDetailOperationsOperation() = default;
};
class TerminateAppEnvResponseBodyEnvChangeDetailOperations : public Darabonba::Model {
public:
  shared_ptr<vector<TerminateAppEnvResponseBodyEnvChangeDetailOperationsOperation>> operation{};

  TerminateAppEnvResponseBodyEnvChangeDetailOperations() {}

  explicit TerminateAppEnvResponseBodyEnvChangeDetailOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      vector<boost::any> temp1;
      for(auto item1:*operation){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Operation"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      if (typeid(vector<boost::any>) == m["Operation"].type()) {
        vector<TerminateAppEnvResponseBodyEnvChangeDetailOperationsOperation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Operation"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TerminateAppEnvResponseBodyEnvChangeDetailOperationsOperation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operation = make_shared<vector<TerminateAppEnvResponseBodyEnvChangeDetailOperationsOperation>>(expect1);
      }
    }
  }


  virtual ~TerminateAppEnvResponseBodyEnvChangeDetailOperations() = default;
};
class TerminateAppEnvResponseBodyEnvChangeDetail : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};
  shared_ptr<TerminateAppEnvResponseBodyEnvChangeDetailOperations> operations{};

  TerminateAppEnvResponseBodyEnvChangeDetail() {}

  explicit TerminateAppEnvResponseBodyEnvChangeDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (operations) {
      res["Operations"] = operations ? boost::any(operations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Operations") != m.end() && !m["Operations"].empty()) {
      if (typeid(map<string, boost::any>) == m["Operations"].type()) {
        TerminateAppEnvResponseBodyEnvChangeDetailOperations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Operations"]));
        operations = make_shared<TerminateAppEnvResponseBodyEnvChangeDetailOperations>(model1);
      }
    }
  }


  virtual ~TerminateAppEnvResponseBodyEnvChangeDetail() = default;
};
class TerminateAppEnvResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<TerminateAppEnvResponseBodyEnvChangeDetail> envChangeDetail{};
  shared_ptr<string> code{};

  TerminateAppEnvResponseBody() {}

  explicit TerminateAppEnvResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (envChangeDetail) {
      res["EnvChangeDetail"] = envChangeDetail ? boost::any(envChangeDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("EnvChangeDetail") != m.end() && !m["EnvChangeDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChangeDetail"].type()) {
        TerminateAppEnvResponseBodyEnvChangeDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChangeDetail"]));
        envChangeDetail = make_shared<TerminateAppEnvResponseBodyEnvChangeDetail>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~TerminateAppEnvResponseBody() = default;
};
class TerminateAppEnvResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TerminateAppEnvResponseBody> body{};

  TerminateAppEnvResponse() {}

  explicit TerminateAppEnvResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TerminateAppEnvResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TerminateAppEnvResponseBody>(model1);
      }
    }
  }


  virtual ~TerminateAppEnvResponse() = default;
};
class UpdateAppEnvRequest : public Darabonba::Model {
public:
  shared_ptr<string> envDescription{};
  shared_ptr<string> envId{};
  shared_ptr<string> pkgVersionId{};
  shared_ptr<string> optionSettings{};
  shared_ptr<string> stackId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> extraProperties{};
  shared_ptr<string> batchSize{};
  shared_ptr<string> batchPercent{};
  shared_ptr<string> batchInterval{};
  shared_ptr<bool> pauseBetweenBatches{};
  shared_ptr<string> regionId{};

  UpdateAppEnvRequest() {}

  explicit UpdateAppEnvRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envDescription) {
      res["EnvDescription"] = boost::any(*envDescription);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (pkgVersionId) {
      res["PkgVersionId"] = boost::any(*pkgVersionId);
    }
    if (optionSettings) {
      res["OptionSettings"] = boost::any(*optionSettings);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (extraProperties) {
      res["ExtraProperties"] = boost::any(*extraProperties);
    }
    if (batchSize) {
      res["BatchSize"] = boost::any(*batchSize);
    }
    if (batchPercent) {
      res["BatchPercent"] = boost::any(*batchPercent);
    }
    if (batchInterval) {
      res["BatchInterval"] = boost::any(*batchInterval);
    }
    if (pauseBetweenBatches) {
      res["PauseBetweenBatches"] = boost::any(*pauseBetweenBatches);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvDescription") != m.end() && !m["EnvDescription"].empty()) {
      envDescription = make_shared<string>(boost::any_cast<string>(m["EnvDescription"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("PkgVersionId") != m.end() && !m["PkgVersionId"].empty()) {
      pkgVersionId = make_shared<string>(boost::any_cast<string>(m["PkgVersionId"]));
    }
    if (m.find("OptionSettings") != m.end() && !m["OptionSettings"].empty()) {
      optionSettings = make_shared<string>(boost::any_cast<string>(m["OptionSettings"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ExtraProperties") != m.end() && !m["ExtraProperties"].empty()) {
      extraProperties = make_shared<string>(boost::any_cast<string>(m["ExtraProperties"]));
    }
    if (m.find("BatchSize") != m.end() && !m["BatchSize"].empty()) {
      batchSize = make_shared<string>(boost::any_cast<string>(m["BatchSize"]));
    }
    if (m.find("BatchPercent") != m.end() && !m["BatchPercent"].empty()) {
      batchPercent = make_shared<string>(boost::any_cast<string>(m["BatchPercent"]));
    }
    if (m.find("BatchInterval") != m.end() && !m["BatchInterval"].empty()) {
      batchInterval = make_shared<string>(boost::any_cast<string>(m["BatchInterval"]));
    }
    if (m.find("PauseBetweenBatches") != m.end() && !m["PauseBetweenBatches"].empty()) {
      pauseBetweenBatches = make_shared<bool>(boost::any_cast<bool>(m["PauseBetweenBatches"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateAppEnvRequest() = default;
};
class UpdateAppEnvResponseBodyEnvChangeDetailOperationsOperation : public Darabonba::Model {
public:
  shared_ptr<string> operationDescription{};
  shared_ptr<string> operationType{};

  UpdateAppEnvResponseBodyEnvChangeDetailOperationsOperation() {}

  explicit UpdateAppEnvResponseBodyEnvChangeDetailOperationsOperation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationDescription) {
      res["OperationDescription"] = boost::any(*operationDescription);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationDescription") != m.end() && !m["OperationDescription"].empty()) {
      operationDescription = make_shared<string>(boost::any_cast<string>(m["OperationDescription"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
  }


  virtual ~UpdateAppEnvResponseBodyEnvChangeDetailOperationsOperation() = default;
};
class UpdateAppEnvResponseBodyEnvChangeDetailOperations : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateAppEnvResponseBodyEnvChangeDetailOperationsOperation>> operation{};

  UpdateAppEnvResponseBodyEnvChangeDetailOperations() {}

  explicit UpdateAppEnvResponseBodyEnvChangeDetailOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      vector<boost::any> temp1;
      for(auto item1:*operation){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Operation"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      if (typeid(vector<boost::any>) == m["Operation"].type()) {
        vector<UpdateAppEnvResponseBodyEnvChangeDetailOperationsOperation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Operation"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAppEnvResponseBodyEnvChangeDetailOperationsOperation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operation = make_shared<vector<UpdateAppEnvResponseBodyEnvChangeDetailOperationsOperation>>(expect1);
      }
    }
  }


  virtual ~UpdateAppEnvResponseBodyEnvChangeDetailOperations() = default;
};
class UpdateAppEnvResponseBodyEnvChangeDetail : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> changeId{};
  shared_ptr<string> envId{};
  shared_ptr<UpdateAppEnvResponseBodyEnvChangeDetailOperations> operations{};

  UpdateAppEnvResponseBodyEnvChangeDetail() {}

  explicit UpdateAppEnvResponseBodyEnvChangeDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (operations) {
      res["Operations"] = operations ? boost::any(operations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Operations") != m.end() && !m["Operations"].empty()) {
      if (typeid(map<string, boost::any>) == m["Operations"].type()) {
        UpdateAppEnvResponseBodyEnvChangeDetailOperations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Operations"]));
        operations = make_shared<UpdateAppEnvResponseBodyEnvChangeDetailOperations>(model1);
      }
    }
  }


  virtual ~UpdateAppEnvResponseBodyEnvChangeDetail() = default;
};
class UpdateAppEnvResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<UpdateAppEnvResponseBodyEnvChangeDetail> envChangeDetail{};
  shared_ptr<string> code{};

  UpdateAppEnvResponseBody() {}

  explicit UpdateAppEnvResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (envChangeDetail) {
      res["EnvChangeDetail"] = envChangeDetail ? boost::any(envChangeDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("EnvChangeDetail") != m.end() && !m["EnvChangeDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvChangeDetail"].type()) {
        UpdateAppEnvResponseBodyEnvChangeDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvChangeDetail"]));
        envChangeDetail = make_shared<UpdateAppEnvResponseBodyEnvChangeDetail>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~UpdateAppEnvResponseBody() = default;
};
class UpdateAppEnvResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAppEnvResponseBody> body{};

  UpdateAppEnvResponse() {}

  explicit UpdateAppEnvResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppEnvResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppEnvResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppEnvResponse() = default;
};
class UpdateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appDescription{};
  shared_ptr<string> regionId{};

  UpdateApplicationRequest() {}

  explicit UpdateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appDescription) {
      res["AppDescription"] = boost::any(*appDescription);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppDescription") != m.end() && !m["AppDescription"].empty()) {
      appDescription = make_shared<string>(boost::any_cast<string>(m["AppDescription"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateApplicationRequest() = default;
};
class UpdateApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> createUsername{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> updateUsername{};
  shared_ptr<long> createTime{};
  shared_ptr<string> appId{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> appDescription{};

  UpdateApplicationResponseBodyApplication() {}

  explicit UpdateApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createUsername) {
      res["CreateUsername"] = boost::any(*createUsername);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateUsername) {
      res["UpdateUsername"] = boost::any(*updateUsername);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (appDescription) {
      res["AppDescription"] = boost::any(*appDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreateUsername") != m.end() && !m["CreateUsername"].empty()) {
      createUsername = make_shared<string>(boost::any_cast<string>(m["CreateUsername"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UpdateUsername") != m.end() && !m["UpdateUsername"].empty()) {
      updateUsername = make_shared<string>(boost::any_cast<string>(m["UpdateUsername"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("AppDescription") != m.end() && !m["AppDescription"].empty()) {
      appDescription = make_shared<string>(boost::any_cast<string>(m["AppDescription"]));
    }
  }


  virtual ~UpdateApplicationResponseBodyApplication() = default;
};
class UpdateApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<UpdateApplicationResponseBodyApplication> application{};

  UpdateApplicationResponseBody() {}

  explicit UpdateApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        UpdateApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<UpdateApplicationResponseBodyApplication>(model1);
      }
    }
  }


  virtual ~UpdateApplicationResponseBody() = default;
};
class UpdateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateApplicationResponseBody> body{};

  UpdateApplicationResponse() {}

  explicit UpdateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApplicationResponse() = default;
};
class UpdateConfigTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateDescription{};
  shared_ptr<string> templateId{};
  shared_ptr<string> optionSettings{};
  shared_ptr<string> regionId{};

  UpdateConfigTemplateRequest() {}

  explicit UpdateConfigTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (optionSettings) {
      res["OptionSettings"] = boost::any(*optionSettings);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("OptionSettings") != m.end() && !m["OptionSettings"].empty()) {
      optionSettings = make_shared<string>(boost::any_cast<string>(m["OptionSettings"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateConfigTemplateRequest() = default;
};
class UpdateConfigTemplateResponseBodyConfigTemplate : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> stackId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> appId{};
  shared_ptr<string> stackName{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateId{};

  UpdateConfigTemplateResponseBodyConfigTemplate() {}

  explicit UpdateConfigTemplateResponseBodyConfigTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (stackName) {
      res["StackName"] = boost::any(*stackName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("StackName") != m.end() && !m["StackName"].empty()) {
      stackName = make_shared<string>(boost::any_cast<string>(m["StackName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~UpdateConfigTemplateResponseBodyConfigTemplate() = default;
};
class UpdateConfigTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateConfigTemplateResponseBodyConfigTemplate> configTemplate{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  UpdateConfigTemplateResponseBody() {}

  explicit UpdateConfigTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configTemplate) {
      res["ConfigTemplate"] = configTemplate ? boost::any(configTemplate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigTemplate") != m.end() && !m["ConfigTemplate"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigTemplate"].type()) {
        UpdateConfigTemplateResponseBodyConfigTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigTemplate"]));
        configTemplate = make_shared<UpdateConfigTemplateResponseBodyConfigTemplate>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~UpdateConfigTemplateResponseBody() = default;
};
class UpdateConfigTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateConfigTemplateResponseBody> body{};

  UpdateConfigTemplateResponse() {}

  explicit UpdateConfigTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateConfigTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConfigTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConfigTemplateResponse() = default;
};
class ValidateConfigSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> envId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> stackId{};
  shared_ptr<string> optionSettings{};
  shared_ptr<string> regionId{};

  ValidateConfigSettingRequest() {}

  explicit ValidateConfigSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (stackId) {
      res["StackId"] = boost::any(*stackId);
    }
    if (optionSettings) {
      res["OptionSettings"] = boost::any(*optionSettings);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("StackId") != m.end() && !m["StackId"].empty()) {
      stackId = make_shared<string>(boost::any_cast<string>(m["StackId"]));
    }
    if (m.find("OptionSettings") != m.end() && !m["OptionSettings"].empty()) {
      optionSettings = make_shared<string>(boost::any_cast<string>(m["OptionSettings"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ValidateConfigSettingRequest() = default;
};
class ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResultConfigOption : public Darabonba::Model {
public:
  shared_ptr<string> regexDesc{};
  shared_ptr<long> maxValue{};
  shared_ptr<string> editorType{};
  shared_ptr<long> minValue{};
  shared_ptr<string> defaultValue{};
  shared_ptr<long> maxLength{};
  shared_ptr<string> optionLabel{};
  shared_ptr<string> regexPattern{};
  shared_ptr<string> changeSeverity{};
  shared_ptr<string> optionDescription{};
  shared_ptr<string> optionName{};
  shared_ptr<string> pathName{};
  shared_ptr<bool> hiddenOption{};
  shared_ptr<string> valueType{};
  shared_ptr<long> minLength{};
  shared_ptr<string> valueOptions{};
  shared_ptr<bool> readonlyOption{};

  ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResultConfigOption() {}

  explicit ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResultConfigOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regexDesc) {
      res["RegexDesc"] = boost::any(*regexDesc);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (editorType) {
      res["EditorType"] = boost::any(*editorType);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (optionLabel) {
      res["OptionLabel"] = boost::any(*optionLabel);
    }
    if (regexPattern) {
      res["RegexPattern"] = boost::any(*regexPattern);
    }
    if (changeSeverity) {
      res["ChangeSeverity"] = boost::any(*changeSeverity);
    }
    if (optionDescription) {
      res["OptionDescription"] = boost::any(*optionDescription);
    }
    if (optionName) {
      res["OptionName"] = boost::any(*optionName);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    if (hiddenOption) {
      res["HiddenOption"] = boost::any(*hiddenOption);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (valueOptions) {
      res["ValueOptions"] = boost::any(*valueOptions);
    }
    if (readonlyOption) {
      res["ReadonlyOption"] = boost::any(*readonlyOption);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegexDesc") != m.end() && !m["RegexDesc"].empty()) {
      regexDesc = make_shared<string>(boost::any_cast<string>(m["RegexDesc"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("EditorType") != m.end() && !m["EditorType"].empty()) {
      editorType = make_shared<string>(boost::any_cast<string>(m["EditorType"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("OptionLabel") != m.end() && !m["OptionLabel"].empty()) {
      optionLabel = make_shared<string>(boost::any_cast<string>(m["OptionLabel"]));
    }
    if (m.find("RegexPattern") != m.end() && !m["RegexPattern"].empty()) {
      regexPattern = make_shared<string>(boost::any_cast<string>(m["RegexPattern"]));
    }
    if (m.find("ChangeSeverity") != m.end() && !m["ChangeSeverity"].empty()) {
      changeSeverity = make_shared<string>(boost::any_cast<string>(m["ChangeSeverity"]));
    }
    if (m.find("OptionDescription") != m.end() && !m["OptionDescription"].empty()) {
      optionDescription = make_shared<string>(boost::any_cast<string>(m["OptionDescription"]));
    }
    if (m.find("OptionName") != m.end() && !m["OptionName"].empty()) {
      optionName = make_shared<string>(boost::any_cast<string>(m["OptionName"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
    if (m.find("HiddenOption") != m.end() && !m["HiddenOption"].empty()) {
      hiddenOption = make_shared<bool>(boost::any_cast<bool>(m["HiddenOption"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("ValueOptions") != m.end() && !m["ValueOptions"].empty()) {
      valueOptions = make_shared<string>(boost::any_cast<string>(m["ValueOptions"]));
    }
    if (m.find("ReadonlyOption") != m.end() && !m["ReadonlyOption"].empty()) {
      readonlyOption = make_shared<bool>(boost::any_cast<bool>(m["ReadonlyOption"]));
    }
  }


  virtual ~ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResultConfigOption() = default;
};
class ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResult : public Darabonba::Model {
public:
  shared_ptr<string> optionName{};
  shared_ptr<string> pathName{};
  shared_ptr<string> resultMessage{};
  shared_ptr<string> resultSeverity{};
  shared_ptr<ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResultConfigOption> configOption{};

  ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResult() {}

  explicit ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (optionName) {
      res["OptionName"] = boost::any(*optionName);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    if (resultMessage) {
      res["ResultMessage"] = boost::any(*resultMessage);
    }
    if (resultSeverity) {
      res["ResultSeverity"] = boost::any(*resultSeverity);
    }
    if (configOption) {
      res["ConfigOption"] = configOption ? boost::any(configOption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OptionName") != m.end() && !m["OptionName"].empty()) {
      optionName = make_shared<string>(boost::any_cast<string>(m["OptionName"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
    if (m.find("ResultMessage") != m.end() && !m["ResultMessage"].empty()) {
      resultMessage = make_shared<string>(boost::any_cast<string>(m["ResultMessage"]));
    }
    if (m.find("ResultSeverity") != m.end() && !m["ResultSeverity"].empty()) {
      resultSeverity = make_shared<string>(boost::any_cast<string>(m["ResultSeverity"]));
    }
    if (m.find("ConfigOption") != m.end() && !m["ConfigOption"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigOption"].type()) {
        ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResultConfigOption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigOption"]));
        configOption = make_shared<ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResultConfigOption>(model1);
      }
    }
  }


  virtual ~ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResult() = default;
};
class ValidateConfigSettingResponseBodyConfigValidationResults : public Darabonba::Model {
public:
  shared_ptr<vector<ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResult>> configValidationResult{};

  ValidateConfigSettingResponseBodyConfigValidationResults() {}

  explicit ValidateConfigSettingResponseBodyConfigValidationResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configValidationResult) {
      vector<boost::any> temp1;
      for(auto item1:*configValidationResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigValidationResult"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigValidationResult") != m.end() && !m["ConfigValidationResult"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigValidationResult"].type()) {
        vector<ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigValidationResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configValidationResult = make_shared<vector<ValidateConfigSettingResponseBodyConfigValidationResultsConfigValidationResult>>(expect1);
      }
    }
  }


  virtual ~ValidateConfigSettingResponseBodyConfigValidationResults() = default;
};
class ValidateConfigSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ValidateConfigSettingResponseBodyConfigValidationResults> configValidationResults{};
  shared_ptr<string> code{};

  ValidateConfigSettingResponseBody() {}

  explicit ValidateConfigSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (configValidationResults) {
      res["ConfigValidationResults"] = configValidationResults ? boost::any(configValidationResults->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ConfigValidationResults") != m.end() && !m["ConfigValidationResults"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigValidationResults"].type()) {
        ValidateConfigSettingResponseBodyConfigValidationResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigValidationResults"]));
        configValidationResults = make_shared<ValidateConfigSettingResponseBodyConfigValidationResults>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ValidateConfigSettingResponseBody() = default;
};
class ValidateConfigSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ValidateConfigSettingResponseBody> body{};

  ValidateConfigSettingResponse() {}

  explicit ValidateConfigSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ValidateConfigSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateConfigSettingResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateConfigSettingResponse() = default;
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
  AbortChangeResponse abortChange(shared_ptr<AbortChangeRequest> request);
  AbortChangeResponse abortChangeWithOptions(shared_ptr<AbortChangeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppEnvResponse createAppEnv(shared_ptr<CreateAppEnvRequest> request);
  CreateAppEnvResponse createAppEnvWithOptions(shared_ptr<CreateAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicationResponse createApplication(shared_ptr<CreateApplicationRequest> request);
  CreateApplicationResponse createApplicationWithOptions(shared_ptr<CreateApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConfigTemplateResponse createConfigTemplate(shared_ptr<CreateConfigTemplateRequest> request);
  CreateConfigTemplateResponse createConfigTemplateWithOptions(shared_ptr<CreateConfigTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOrderResponse createOrder(shared_ptr<CreateOrderRequest> request);
  CreateOrderResponse createOrderWithOptions(shared_ptr<CreateOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePkgVersionResponse createPkgVersion(shared_ptr<CreatePkgVersionRequest> request);
  CreatePkgVersionResponse createPkgVersionWithOptions(shared_ptr<CreatePkgVersionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStorageResponse createStorage(shared_ptr<CreateStorageRequest> request);
  CreateStorageResponse createStorageWithOptions(shared_ptr<CreateStorageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppEnvResponse deleteAppEnv(shared_ptr<DeleteAppEnvRequest> request);
  DeleteAppEnvResponse deleteAppEnvWithOptions(shared_ptr<DeleteAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApplicationResponse deleteApplication(shared_ptr<DeleteApplicationRequest> request);
  DeleteApplicationResponse deleteApplicationWithOptions(shared_ptr<DeleteApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChangeResponse deleteChange(shared_ptr<DeleteChangeRequest> request);
  DeleteChangeResponse deleteChangeWithOptions(shared_ptr<DeleteChangeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConfigTemplateResponse deleteConfigTemplate(shared_ptr<DeleteConfigTemplateRequest> request);
  DeleteConfigTemplateResponse deleteConfigTemplateWithOptions(shared_ptr<DeleteConfigTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePkgVersionResponse deletePkgVersion(shared_ptr<DeletePkgVersionRequest> request);
  DeletePkgVersionResponse deletePkgVersionWithOptions(shared_ptr<DeletePkgVersionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployAppEnvResponse deployAppEnv(shared_ptr<DeployAppEnvRequest> request);
  DeployAppEnvResponse deployAppEnvWithOptions(shared_ptr<DeployAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppEnvInstanceHealthResponse describeAppEnvInstanceHealth(shared_ptr<DescribeAppEnvInstanceHealthRequest> request);
  DescribeAppEnvInstanceHealthResponse describeAppEnvInstanceHealthWithOptions(shared_ptr<DescribeAppEnvInstanceHealthRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppEnvsResponse describeAppEnvs(shared_ptr<DescribeAppEnvsRequest> request);
  DescribeAppEnvsResponse describeAppEnvsWithOptions(shared_ptr<DescribeAppEnvsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppEnvStatusResponse describeAppEnvStatus(shared_ptr<DescribeAppEnvStatusRequest> request);
  DescribeAppEnvStatusResponse describeAppEnvStatusWithOptions(shared_ptr<DescribeAppEnvStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApplicationsResponse describeApplications(shared_ptr<DescribeApplicationsRequest> request);
  DescribeApplicationsResponse describeApplicationsWithOptions(shared_ptr<DescribeApplicationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCategoriesResponse describeCategories(shared_ptr<DescribeCategoriesRequest> request);
  DescribeCategoriesResponse describeCategoriesWithOptions(shared_ptr<DescribeCategoriesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChangeResponse describeChange(shared_ptr<DescribeChangeRequest> request);
  DescribeChangeResponse describeChangeWithOptions(shared_ptr<DescribeChangeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChangesResponse describeChanges(shared_ptr<DescribeChangesRequest> request);
  DescribeChangesResponse describeChangesWithOptions(shared_ptr<DescribeChangesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConfigIndexResponse describeConfigIndex(shared_ptr<DescribeConfigIndexRequest> request);
  DescribeConfigIndexResponse describeConfigIndexWithOptions(shared_ptr<DescribeConfigIndexRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConfigOptionsResponse describeConfigOptions(shared_ptr<DescribeConfigOptionsRequest> request);
  DescribeConfigOptionsResponse describeConfigOptionsWithOptions(shared_ptr<DescribeConfigOptionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConfigSettingsResponse describeConfigSettings(shared_ptr<DescribeConfigSettingsRequest> request);
  DescribeConfigSettingsResponse describeConfigSettingsWithOptions(shared_ptr<DescribeConfigSettingsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConfigTemplatesResponse describeConfigTemplates(shared_ptr<DescribeConfigTemplatesRequest> request);
  DescribeConfigTemplatesResponse describeConfigTemplatesWithOptions(shared_ptr<DescribeConfigTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEnvResourceResponse describeEnvResource(shared_ptr<DescribeEnvResourceRequest> request);
  DescribeEnvResourceResponse describeEnvResourceWithOptions(shared_ptr<DescribeEnvResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEventsResponse describeEvents(shared_ptr<DescribeEventsRequest> request);
  DescribeEventsResponse describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatherLogResultResponse describeGatherLogResult(shared_ptr<DescribeGatherLogResultRequest> request);
  DescribeGatherLogResultResponse describeGatherLogResultWithOptions(shared_ptr<DescribeGatherLogResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatherStatsResultResponse describeGatherStatsResult(shared_ptr<DescribeGatherStatsResultRequest> request);
  DescribeGatherStatsResultResponse describeGatherStatsResultWithOptions(shared_ptr<DescribeGatherStatsResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceHealthResponse describeInstanceHealth(shared_ptr<DescribeInstanceHealthRequest> request);
  DescribeInstanceHealthResponse describeInstanceHealthWithOptions(shared_ptr<DescribeInstanceHealthRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePkgVersionsResponse describePkgVersions(shared_ptr<DescribePkgVersionsRequest> request);
  DescribePkgVersionsResponse describePkgVersionsWithOptions(shared_ptr<DescribePkgVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePublicConfigTemplatesResponse describePublicConfigTemplates(shared_ptr<DescribePublicConfigTemplatesRequest> request);
  DescribePublicConfigTemplatesResponse describePublicConfigTemplatesWithOptions(shared_ptr<DescribePublicConfigTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStacksResponse describeStacks(shared_ptr<DescribeStacksRequest> request);
  DescribeStacksResponse describeStacksWithOptions(shared_ptr<DescribeStacksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStorageResponse describeStorage(shared_ptr<DescribeStorageRequest> request);
  DescribeStorageResponse describeStorageWithOptions(shared_ptr<DescribeStorageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GatherAppEnvLogResponse gatherAppEnvLog(shared_ptr<GatherAppEnvLogRequest> request);
  GatherAppEnvLogResponse gatherAppEnvLogWithOptions(shared_ptr<GatherAppEnvLogRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GatherAppEnvStatsResponse gatherAppEnvStats(shared_ptr<GatherAppEnvStatsRequest> request);
  GatherAppEnvStatsResponse gatherAppEnvStatsWithOptions(shared_ptr<GatherAppEnvStatsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PauseChangeResponse pauseChange(shared_ptr<PauseChangeRequest> request);
  PauseChangeResponse pauseChangeWithOptions(shared_ptr<PauseChangeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebuildAppEnvResponse rebuildAppEnv(shared_ptr<RebuildAppEnvRequest> request);
  RebuildAppEnvResponse rebuildAppEnvWithOptions(shared_ptr<RebuildAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartAppEnvResponse restartAppEnv(shared_ptr<RestartAppEnvRequest> request);
  RestartAppEnvResponse restartAppEnvWithOptions(shared_ptr<RestartAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeChangeResponse resumeChange(shared_ptr<ResumeChangeRequest> request);
  ResumeChangeResponse resumeChangeWithOptions(shared_ptr<ResumeChangeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartAppEnvResponse startAppEnv(shared_ptr<StartAppEnvRequest> request);
  StartAppEnvResponse startAppEnvWithOptions(shared_ptr<StartAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopAppEnvResponse stopAppEnv(shared_ptr<StopAppEnvRequest> request);
  StopAppEnvResponse stopAppEnvWithOptions(shared_ptr<StopAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TerminateAppEnvResponse terminateAppEnv(shared_ptr<TerminateAppEnvRequest> request);
  TerminateAppEnvResponse terminateAppEnvWithOptions(shared_ptr<TerminateAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppEnvResponse updateAppEnv(shared_ptr<UpdateAppEnvRequest> request);
  UpdateAppEnvResponse updateAppEnvWithOptions(shared_ptr<UpdateAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicationResponse updateApplication(shared_ptr<UpdateApplicationRequest> request);
  UpdateApplicationResponse updateApplicationWithOptions(shared_ptr<UpdateApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConfigTemplateResponse updateConfigTemplate(shared_ptr<UpdateConfigTemplateRequest> request);
  UpdateConfigTemplateResponse updateConfigTemplateWithOptions(shared_ptr<UpdateConfigTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateConfigSettingResponse validateConfigSetting(shared_ptr<ValidateConfigSettingRequest> request);
  ValidateConfigSettingResponse validateConfigSettingWithOptions(shared_ptr<ValidateConfigSettingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_WebPlus20190320

#endif
