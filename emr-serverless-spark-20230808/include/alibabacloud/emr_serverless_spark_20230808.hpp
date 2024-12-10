// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EMR-SERVERLESS-SPARK20230808_H_
#define ALIBABACLOUD_EMR-SERVERLESS-SPARK20230808_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Emr-serverless-spark20230808 {
class Credential : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> signature{};

  Credential() {}

  explicit Credential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["accessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["dir"] = boost::any(*dir);
    }
    if (expire) {
      res["expire"] = boost::any(*expire);
    }
    if (host) {
      res["host"] = boost::any(*host);
    }
    if (policy) {
      res["policy"] = boost::any(*policy);
    }
    if (securityToken) {
      res["securityToken"] = boost::any(*securityToken);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessId") != m.end() && !m["accessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["accessId"]));
    }
    if (m.find("dir") != m.end() && !m["dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["dir"]));
    }
    if (m.find("expire") != m.end() && !m["expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["expire"]));
    }
    if (m.find("host") != m.end() && !m["host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["host"]));
    }
    if (m.find("policy") != m.end() && !m["policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["policy"]));
    }
    if (m.find("securityToken") != m.end() && !m["securityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["securityToken"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
  }


  virtual ~Credential() = default;
};
class Artifact : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> catagoryBizId{};
  shared_ptr<long> creator{};
  shared_ptr<Credential> credential{};
  shared_ptr<vector<string>> fullPath{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> location{};
  shared_ptr<long> modifier{};
  shared_ptr<string> name{};

  Artifact() {}

  explicit Artifact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["bizId"] = boost::any(*bizId);
    }
    if (catagoryBizId) {
      res["catagoryBizId"] = boost::any(*catagoryBizId);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (credential) {
      res["credential"] = credential ? boost::any(credential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fullPath) {
      res["fullPath"] = boost::any(*fullPath);
    }
    if (gmtCreated) {
      res["gmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (location) {
      res["location"] = boost::any(*location);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizId") != m.end() && !m["bizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["bizId"]));
    }
    if (m.find("catagoryBizId") != m.end() && !m["catagoryBizId"].empty()) {
      catagoryBizId = make_shared<string>(boost::any_cast<string>(m["catagoryBizId"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<long>(boost::any_cast<long>(m["creator"]));
    }
    if (m.find("credential") != m.end() && !m["credential"].empty()) {
      if (typeid(map<string, boost::any>) == m["credential"].type()) {
        Credential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["credential"]));
        credential = make_shared<Credential>(model1);
      }
    }
    if (m.find("fullPath") != m.end() && !m["fullPath"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fullPath"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fullPath"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fullPath = make_shared<vector<string>>(toVec1);
    }
    if (m.find("gmtCreated") != m.end() && !m["gmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["gmtCreated"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("location") != m.end() && !m["location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["location"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<long>(boost::any_cast<long>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~Artifact() = default;
};
class Category : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<long> creator{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> modifier{};
  shared_ptr<string> name{};
  shared_ptr<string> parentBizId{};
  shared_ptr<string> type{};

  Category() {}

  explicit Category(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["bizId"] = boost::any(*bizId);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (gmtCreated) {
      res["gmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentBizId) {
      res["parentBizId"] = boost::any(*parentBizId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizId") != m.end() && !m["bizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["bizId"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<long>(boost::any_cast<long>(m["creator"]));
    }
    if (m.find("gmtCreated") != m.end() && !m["gmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["gmtCreated"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<long>(boost::any_cast<long>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentBizId") != m.end() && !m["parentBizId"].empty()) {
      parentBizId = make_shared<string>(boost::any_cast<string>(m["parentBizId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~Category() = default;
};
class Configuration : public Darabonba::Model {
public:
  shared_ptr<string> configFileName{};
  shared_ptr<string> configItemKey{};
  shared_ptr<string> configItemValue{};

  Configuration() {}

  explicit Configuration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configFileName) {
      res["configFileName"] = boost::any(*configFileName);
    }
    if (configItemKey) {
      res["configItemKey"] = boost::any(*configItemKey);
    }
    if (configItemValue) {
      res["configItemValue"] = boost::any(*configItemValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configFileName") != m.end() && !m["configFileName"].empty()) {
      configFileName = make_shared<string>(boost::any_cast<string>(m["configFileName"]));
    }
    if (m.find("configItemKey") != m.end() && !m["configItemKey"].empty()) {
      configItemKey = make_shared<string>(boost::any_cast<string>(m["configItemKey"]));
    }
    if (m.find("configItemValue") != m.end() && !m["configItemValue"].empty()) {
      configItemValue = make_shared<string>(boost::any_cast<string>(m["configItemValue"]));
    }
  }


  virtual ~Configuration() = default;
};
class ConfigurationOverridesConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> configFileName{};
  shared_ptr<string> configItemKey{};
  shared_ptr<string> configItemValue{};

  ConfigurationOverridesConfigurations() {}

  explicit ConfigurationOverridesConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configFileName) {
      res["configFileName"] = boost::any(*configFileName);
    }
    if (configItemKey) {
      res["configItemKey"] = boost::any(*configItemKey);
    }
    if (configItemValue) {
      res["configItemValue"] = boost::any(*configItemValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configFileName") != m.end() && !m["configFileName"].empty()) {
      configFileName = make_shared<string>(boost::any_cast<string>(m["configFileName"]));
    }
    if (m.find("configItemKey") != m.end() && !m["configItemKey"].empty()) {
      configItemKey = make_shared<string>(boost::any_cast<string>(m["configItemKey"]));
    }
    if (m.find("configItemValue") != m.end() && !m["configItemValue"].empty()) {
      configItemValue = make_shared<string>(boost::any_cast<string>(m["configItemValue"]));
    }
  }


  virtual ~ConfigurationOverridesConfigurations() = default;
};
class ConfigurationOverrides : public Darabonba::Model {
public:
  shared_ptr<vector<ConfigurationOverridesConfigurations>> configurations{};

  ConfigurationOverrides() {}

  explicit ConfigurationOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configurations) {
      vector<boost::any> temp1;
      for(auto item1:*configurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["configurations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configurations") != m.end() && !m["configurations"].empty()) {
      if (typeid(vector<boost::any>) == m["configurations"].type()) {
        vector<ConfigurationOverridesConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["configurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConfigurationOverridesConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configurations = make_shared<vector<ConfigurationOverridesConfigurations>>(expect1);
      }
    }
  }


  virtual ~ConfigurationOverrides() = default;
};
class JobDriverSparkSubmit : public Darabonba::Model {
public:
  shared_ptr<string> entryPoint{};
  shared_ptr<vector<string>> entryPointArguments{};
  shared_ptr<string> sparkSubmitParameters{};

  JobDriverSparkSubmit() {}

  explicit JobDriverSparkSubmit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entryPoint) {
      res["entryPoint"] = boost::any(*entryPoint);
    }
    if (entryPointArguments) {
      res["entryPointArguments"] = boost::any(*entryPointArguments);
    }
    if (sparkSubmitParameters) {
      res["sparkSubmitParameters"] = boost::any(*sparkSubmitParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entryPoint") != m.end() && !m["entryPoint"].empty()) {
      entryPoint = make_shared<string>(boost::any_cast<string>(m["entryPoint"]));
    }
    if (m.find("entryPointArguments") != m.end() && !m["entryPointArguments"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["entryPointArguments"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["entryPointArguments"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      entryPointArguments = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sparkSubmitParameters") != m.end() && !m["sparkSubmitParameters"].empty()) {
      sparkSubmitParameters = make_shared<string>(boost::any_cast<string>(m["sparkSubmitParameters"]));
    }
  }


  virtual ~JobDriverSparkSubmit() = default;
};
class JobDriver : public Darabonba::Model {
public:
  shared_ptr<JobDriverSparkSubmit> sparkSubmit{};

  JobDriver() {}

  explicit JobDriver(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sparkSubmit) {
      res["sparkSubmit"] = sparkSubmit ? boost::any(sparkSubmit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sparkSubmit") != m.end() && !m["sparkSubmit"].empty()) {
      if (typeid(map<string, boost::any>) == m["sparkSubmit"].type()) {
        JobDriverSparkSubmit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sparkSubmit"]));
        sparkSubmit = make_shared<JobDriverSparkSubmit>(model1);
      }
    }
  }


  virtual ~JobDriver() = default;
};
class KerberosConf : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> kerberosConfId{};
  shared_ptr<vector<string>> keytabs{};
  shared_ptr<string> krb5Conf{};
  shared_ptr<string> name{};
  shared_ptr<string> networkServiceId{};
  shared_ptr<string> workspaceId{};

  KerberosConf() {}

  explicit KerberosConf(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (gmtCreated) {
      res["gmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (kerberosConfId) {
      res["kerberosConfId"] = boost::any(*kerberosConfId);
    }
    if (keytabs) {
      res["keytabs"] = boost::any(*keytabs);
    }
    if (krb5Conf) {
      res["krb5Conf"] = boost::any(*krb5Conf);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (networkServiceId) {
      res["networkServiceId"] = boost::any(*networkServiceId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("gmtCreated") != m.end() && !m["gmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["gmtCreated"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("kerberosConfId") != m.end() && !m["kerberosConfId"].empty()) {
      kerberosConfId = make_shared<string>(boost::any_cast<string>(m["kerberosConfId"]));
    }
    if (m.find("keytabs") != m.end() && !m["keytabs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["keytabs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["keytabs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keytabs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("krb5Conf") != m.end() && !m["krb5Conf"].empty()) {
      krb5Conf = make_shared<string>(boost::any_cast<string>(m["krb5Conf"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("networkServiceId") != m.end() && !m["networkServiceId"].empty()) {
      networkServiceId = make_shared<string>(boost::any_cast<string>(m["networkServiceId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~KerberosConf() = default;
};
class PrincipalAction : public Darabonba::Model {
public:
  shared_ptr<string> actionArn{};
  shared_ptr<string> principalArn{};

  PrincipalAction() {}

  explicit PrincipalAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionArn) {
      res["actionArn"] = boost::any(*actionArn);
    }
    if (principalArn) {
      res["principalArn"] = boost::any(*principalArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actionArn") != m.end() && !m["actionArn"].empty()) {
      actionArn = make_shared<string>(boost::any_cast<string>(m["actionArn"]));
    }
    if (m.find("principalArn") != m.end() && !m["principalArn"].empty()) {
      principalArn = make_shared<string>(boost::any_cast<string>(m["principalArn"]));
    }
  }


  virtual ~PrincipalAction() = default;
};
class ReleaseVersionImage : public Darabonba::Model {
public:
  shared_ptr<string> cpuArchitecture{};
  shared_ptr<string> imageId{};
  shared_ptr<string> runtimeEngineType{};

  ReleaseVersionImage() {}

  explicit ReleaseVersionImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuArchitecture) {
      res["cpuArchitecture"] = boost::any(*cpuArchitecture);
    }
    if (imageId) {
      res["imageId"] = boost::any(*imageId);
    }
    if (runtimeEngineType) {
      res["runtimeEngineType"] = boost::any(*runtimeEngineType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cpuArchitecture") != m.end() && !m["cpuArchitecture"].empty()) {
      cpuArchitecture = make_shared<string>(boost::any_cast<string>(m["cpuArchitecture"]));
    }
    if (m.find("imageId") != m.end() && !m["imageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["imageId"]));
    }
    if (m.find("runtimeEngineType") != m.end() && !m["runtimeEngineType"].empty()) {
      runtimeEngineType = make_shared<string>(boost::any_cast<string>(m["runtimeEngineType"]));
    }
  }


  virtual ~ReleaseVersionImage() = default;
};
class RunLog : public Darabonba::Model {
public:
  shared_ptr<string> driverStartup{};
  shared_ptr<string> driverStdError{};
  shared_ptr<string> driverStdOut{};
  shared_ptr<string> driverSyslog{};

  RunLog() {}

  explicit RunLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (driverStartup) {
      res["driverStartup"] = boost::any(*driverStartup);
    }
    if (driverStdError) {
      res["driverStdError"] = boost::any(*driverStdError);
    }
    if (driverStdOut) {
      res["driverStdOut"] = boost::any(*driverStdOut);
    }
    if (driverSyslog) {
      res["driverSyslog"] = boost::any(*driverSyslog);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("driverStartup") != m.end() && !m["driverStartup"].empty()) {
      driverStartup = make_shared<string>(boost::any_cast<string>(m["driverStartup"]));
    }
    if (m.find("driverStdError") != m.end() && !m["driverStdError"].empty()) {
      driverStdError = make_shared<string>(boost::any_cast<string>(m["driverStdError"]));
    }
    if (m.find("driverStdOut") != m.end() && !m["driverStdOut"].empty()) {
      driverStdOut = make_shared<string>(boost::any_cast<string>(m["driverStdOut"]));
    }
    if (m.find("driverSyslog") != m.end() && !m["driverSyslog"].empty()) {
      driverSyslog = make_shared<string>(boost::any_cast<string>(m["driverSyslog"]));
    }
  }


  virtual ~RunLog() = default;
};
class SparkConf : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  SparkConf() {}

  explicit SparkConf(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~SparkConf() = default;
};
class SqlOutputRows : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};

  SqlOutputRows() {}

  explicit SqlOutputRows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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


  virtual ~SqlOutputRows() = default;
};
class SqlOutputSchemaFields : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> nullable{};
  shared_ptr<string> type{};

  SqlOutputSchemaFields() {}

  explicit SqlOutputSchemaFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nullable) {
      res["nullable"] = boost::any(*nullable);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nullable") != m.end() && !m["nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["nullable"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~SqlOutputSchemaFields() = default;
};
class SqlOutputSchema : public Darabonba::Model {
public:
  shared_ptr<vector<SqlOutputSchemaFields>> fields{};

  SqlOutputSchema() {}

  explicit SqlOutputSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["fields"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      if (typeid(vector<boost::any>) == m["fields"].type()) {
        vector<SqlOutputSchemaFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SqlOutputSchemaFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<SqlOutputSchemaFields>>(expect1);
      }
    }
  }


  virtual ~SqlOutputSchema() = default;
};
class SqlOutput : public Darabonba::Model {
public:
  shared_ptr<vector<SqlOutputRows>> rows{};
  shared_ptr<SqlOutputSchema> schema{};

  SqlOutput() {}

  explicit SqlOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rows) {
      vector<boost::any> temp1;
      for(auto item1:*rows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["rows"] = boost::any(temp1);
    }
    if (schema) {
      res["schema"] = schema ? boost::any(schema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("rows") != m.end() && !m["rows"].empty()) {
      if (typeid(vector<boost::any>) == m["rows"].type()) {
        vector<SqlOutputRows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["rows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SqlOutputRows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rows = make_shared<vector<SqlOutputRows>>(expect1);
      }
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      if (typeid(map<string, boost::any>) == m["schema"].type()) {
        SqlOutputSchema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schema"]));
        schema = make_shared<SqlOutputSchema>(model1);
      }
    }
  }


  virtual ~SqlOutput() = default;
};
class Tag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  Tag() {}

  explicit Tag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~Tag() = default;
};
class TaskCredential : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accessUrl{};
  shared_ptr<long> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> path{};
  shared_ptr<string> policy{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> signature{};

  TaskCredential() {}

  explicit TaskCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["accessId"] = boost::any(*accessId);
    }
    if (accessUrl) {
      res["accessUrl"] = boost::any(*accessUrl);
    }
    if (expire) {
      res["expire"] = boost::any(*expire);
    }
    if (host) {
      res["host"] = boost::any(*host);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (policy) {
      res["policy"] = boost::any(*policy);
    }
    if (securityToken) {
      res["securityToken"] = boost::any(*securityToken);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessId") != m.end() && !m["accessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["accessId"]));
    }
    if (m.find("accessUrl") != m.end() && !m["accessUrl"].empty()) {
      accessUrl = make_shared<string>(boost::any_cast<string>(m["accessUrl"]));
    }
    if (m.find("expire") != m.end() && !m["expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["expire"]));
    }
    if (m.find("host") != m.end() && !m["host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["host"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("policy") != m.end() && !m["policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["policy"]));
    }
    if (m.find("securityToken") != m.end() && !m["securityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["securityToken"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
  }


  virtual ~TaskCredential() = default;
};
class Task : public Darabonba::Model {
public:
  shared_ptr<vector<string>> archives{};
  shared_ptr<string> artifactUrl{};
  shared_ptr<string> bizId{};
  shared_ptr<string> categoryBizId{};
  shared_ptr<string> content{};
  shared_ptr<long> creator{};
  shared_ptr<TaskCredential> credential{};
  shared_ptr<string> defaultCatalogId{};
  shared_ptr<string> defaultDatabase{};
  shared_ptr<string> defaultResourceQueueId{};
  shared_ptr<string> defaultSqlComputeId{};
  shared_ptr<string> deploymentId{};
  shared_ptr<string> environmentId{};
  shared_ptr<vector<string>> extraArtifactIds{};
  shared_ptr<string> extraSparkSubmitParams{};
  shared_ptr<vector<string>> files{};
  shared_ptr<bool> fusion{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> hasChanged{};
  shared_ptr<bool> hasCommited{};
  shared_ptr<bool> isStreaming{};
  shared_ptr<vector<string>> jars{};
  shared_ptr<string> lastRunResourceQueueId{};
  shared_ptr<long> modifier{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> pyFiles{};
  shared_ptr<string> sparkArgs{};
  shared_ptr<vector<SparkConf>> sparkConf{};
  shared_ptr<long> sparkDriverCores{};
  shared_ptr<long> sparkDriverMemory{};
  shared_ptr<string> sparkEntrypoint{};
  shared_ptr<long> sparkExecutorCores{};
  shared_ptr<long> sparkExecutorMemory{};
  shared_ptr<string> sparkLogLevel{};
  shared_ptr<string> sparkLogPath{};
  shared_ptr<string> sparkSubmitClause{};
  shared_ptr<string> sparkVersion{};
  shared_ptr<map<string, string>> tags{};
  shared_ptr<long> timeout{};
  shared_ptr<string> type{};

  Task() {}

  explicit Task(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archives) {
      res["archives"] = boost::any(*archives);
    }
    if (artifactUrl) {
      res["artifactUrl"] = boost::any(*artifactUrl);
    }
    if (bizId) {
      res["bizId"] = boost::any(*bizId);
    }
    if (categoryBizId) {
      res["categoryBizId"] = boost::any(*categoryBizId);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (credential) {
      res["credential"] = credential ? boost::any(credential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultCatalogId) {
      res["defaultCatalogId"] = boost::any(*defaultCatalogId);
    }
    if (defaultDatabase) {
      res["defaultDatabase"] = boost::any(*defaultDatabase);
    }
    if (defaultResourceQueueId) {
      res["defaultResourceQueueId"] = boost::any(*defaultResourceQueueId);
    }
    if (defaultSqlComputeId) {
      res["defaultSqlComputeId"] = boost::any(*defaultSqlComputeId);
    }
    if (deploymentId) {
      res["deploymentId"] = boost::any(*deploymentId);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (extraArtifactIds) {
      res["extraArtifactIds"] = boost::any(*extraArtifactIds);
    }
    if (extraSparkSubmitParams) {
      res["extraSparkSubmitParams"] = boost::any(*extraSparkSubmitParams);
    }
    if (files) {
      res["files"] = boost::any(*files);
    }
    if (fusion) {
      res["fusion"] = boost::any(*fusion);
    }
    if (gmtCreated) {
      res["gmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (hasChanged) {
      res["hasChanged"] = boost::any(*hasChanged);
    }
    if (hasCommited) {
      res["hasCommited"] = boost::any(*hasCommited);
    }
    if (isStreaming) {
      res["isStreaming"] = boost::any(*isStreaming);
    }
    if (jars) {
      res["jars"] = boost::any(*jars);
    }
    if (lastRunResourceQueueId) {
      res["lastRunResourceQueueId"] = boost::any(*lastRunResourceQueueId);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pyFiles) {
      res["pyFiles"] = boost::any(*pyFiles);
    }
    if (sparkArgs) {
      res["sparkArgs"] = boost::any(*sparkArgs);
    }
    if (sparkConf) {
      vector<boost::any> temp1;
      for(auto item1:*sparkConf){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sparkConf"] = boost::any(temp1);
    }
    if (sparkDriverCores) {
      res["sparkDriverCores"] = boost::any(*sparkDriverCores);
    }
    if (sparkDriverMemory) {
      res["sparkDriverMemory"] = boost::any(*sparkDriverMemory);
    }
    if (sparkEntrypoint) {
      res["sparkEntrypoint"] = boost::any(*sparkEntrypoint);
    }
    if (sparkExecutorCores) {
      res["sparkExecutorCores"] = boost::any(*sparkExecutorCores);
    }
    if (sparkExecutorMemory) {
      res["sparkExecutorMemory"] = boost::any(*sparkExecutorMemory);
    }
    if (sparkLogLevel) {
      res["sparkLogLevel"] = boost::any(*sparkLogLevel);
    }
    if (sparkLogPath) {
      res["sparkLogPath"] = boost::any(*sparkLogPath);
    }
    if (sparkSubmitClause) {
      res["sparkSubmitClause"] = boost::any(*sparkSubmitClause);
    }
    if (sparkVersion) {
      res["sparkVersion"] = boost::any(*sparkVersion);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("archives") != m.end() && !m["archives"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["archives"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["archives"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      archives = make_shared<vector<string>>(toVec1);
    }
    if (m.find("artifactUrl") != m.end() && !m["artifactUrl"].empty()) {
      artifactUrl = make_shared<string>(boost::any_cast<string>(m["artifactUrl"]));
    }
    if (m.find("bizId") != m.end() && !m["bizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["bizId"]));
    }
    if (m.find("categoryBizId") != m.end() && !m["categoryBizId"].empty()) {
      categoryBizId = make_shared<string>(boost::any_cast<string>(m["categoryBizId"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<long>(boost::any_cast<long>(m["creator"]));
    }
    if (m.find("credential") != m.end() && !m["credential"].empty()) {
      if (typeid(map<string, boost::any>) == m["credential"].type()) {
        TaskCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["credential"]));
        credential = make_shared<TaskCredential>(model1);
      }
    }
    if (m.find("defaultCatalogId") != m.end() && !m["defaultCatalogId"].empty()) {
      defaultCatalogId = make_shared<string>(boost::any_cast<string>(m["defaultCatalogId"]));
    }
    if (m.find("defaultDatabase") != m.end() && !m["defaultDatabase"].empty()) {
      defaultDatabase = make_shared<string>(boost::any_cast<string>(m["defaultDatabase"]));
    }
    if (m.find("defaultResourceQueueId") != m.end() && !m["defaultResourceQueueId"].empty()) {
      defaultResourceQueueId = make_shared<string>(boost::any_cast<string>(m["defaultResourceQueueId"]));
    }
    if (m.find("defaultSqlComputeId") != m.end() && !m["defaultSqlComputeId"].empty()) {
      defaultSqlComputeId = make_shared<string>(boost::any_cast<string>(m["defaultSqlComputeId"]));
    }
    if (m.find("deploymentId") != m.end() && !m["deploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["deploymentId"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("extraArtifactIds") != m.end() && !m["extraArtifactIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["extraArtifactIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["extraArtifactIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extraArtifactIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("extraSparkSubmitParams") != m.end() && !m["extraSparkSubmitParams"].empty()) {
      extraSparkSubmitParams = make_shared<string>(boost::any_cast<string>(m["extraSparkSubmitParams"]));
    }
    if (m.find("files") != m.end() && !m["files"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["files"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["files"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      files = make_shared<vector<string>>(toVec1);
    }
    if (m.find("fusion") != m.end() && !m["fusion"].empty()) {
      fusion = make_shared<bool>(boost::any_cast<bool>(m["fusion"]));
    }
    if (m.find("gmtCreated") != m.end() && !m["gmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["gmtCreated"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("hasChanged") != m.end() && !m["hasChanged"].empty()) {
      hasChanged = make_shared<bool>(boost::any_cast<bool>(m["hasChanged"]));
    }
    if (m.find("hasCommited") != m.end() && !m["hasCommited"].empty()) {
      hasCommited = make_shared<bool>(boost::any_cast<bool>(m["hasCommited"]));
    }
    if (m.find("isStreaming") != m.end() && !m["isStreaming"].empty()) {
      isStreaming = make_shared<bool>(boost::any_cast<bool>(m["isStreaming"]));
    }
    if (m.find("jars") != m.end() && !m["jars"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["jars"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["jars"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      jars = make_shared<vector<string>>(toVec1);
    }
    if (m.find("lastRunResourceQueueId") != m.end() && !m["lastRunResourceQueueId"].empty()) {
      lastRunResourceQueueId = make_shared<string>(boost::any_cast<string>(m["lastRunResourceQueueId"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<long>(boost::any_cast<long>(m["modifier"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pyFiles") != m.end() && !m["pyFiles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["pyFiles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["pyFiles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      pyFiles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sparkArgs") != m.end() && !m["sparkArgs"].empty()) {
      sparkArgs = make_shared<string>(boost::any_cast<string>(m["sparkArgs"]));
    }
    if (m.find("sparkConf") != m.end() && !m["sparkConf"].empty()) {
      if (typeid(vector<boost::any>) == m["sparkConf"].type()) {
        vector<SparkConf> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sparkConf"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SparkConf model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sparkConf = make_shared<vector<SparkConf>>(expect1);
      }
    }
    if (m.find("sparkDriverCores") != m.end() && !m["sparkDriverCores"].empty()) {
      sparkDriverCores = make_shared<long>(boost::any_cast<long>(m["sparkDriverCores"]));
    }
    if (m.find("sparkDriverMemory") != m.end() && !m["sparkDriverMemory"].empty()) {
      sparkDriverMemory = make_shared<long>(boost::any_cast<long>(m["sparkDriverMemory"]));
    }
    if (m.find("sparkEntrypoint") != m.end() && !m["sparkEntrypoint"].empty()) {
      sparkEntrypoint = make_shared<string>(boost::any_cast<string>(m["sparkEntrypoint"]));
    }
    if (m.find("sparkExecutorCores") != m.end() && !m["sparkExecutorCores"].empty()) {
      sparkExecutorCores = make_shared<long>(boost::any_cast<long>(m["sparkExecutorCores"]));
    }
    if (m.find("sparkExecutorMemory") != m.end() && !m["sparkExecutorMemory"].empty()) {
      sparkExecutorMemory = make_shared<long>(boost::any_cast<long>(m["sparkExecutorMemory"]));
    }
    if (m.find("sparkLogLevel") != m.end() && !m["sparkLogLevel"].empty()) {
      sparkLogLevel = make_shared<string>(boost::any_cast<string>(m["sparkLogLevel"]));
    }
    if (m.find("sparkLogPath") != m.end() && !m["sparkLogPath"].empty()) {
      sparkLogPath = make_shared<string>(boost::any_cast<string>(m["sparkLogPath"]));
    }
    if (m.find("sparkSubmitClause") != m.end() && !m["sparkSubmitClause"].empty()) {
      sparkSubmitClause = make_shared<string>(boost::any_cast<string>(m["sparkSubmitClause"]));
    }
    if (m.find("sparkVersion") != m.end() && !m["sparkVersion"].empty()) {
      sparkVersion = make_shared<string>(boost::any_cast<string>(m["sparkVersion"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["tags"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~Task() = default;
};
class TaskInstance : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<long> creator{};
  shared_ptr<string> fenixRunId{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> taskBizId{};
  shared_ptr<Task> taskInfo{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> workspaceBizId{};

  TaskInstance() {}

  explicit TaskInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["bizId"] = boost::any(*bizId);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (fenixRunId) {
      res["fenixRunId"] = boost::any(*fenixRunId);
    }
    if (gmtCreated) {
      res["gmtCreated"] = boost::any(*gmtCreated);
    }
    if (taskBizId) {
      res["taskBizId"] = boost::any(*taskBizId);
    }
    if (taskInfo) {
      res["taskInfo"] = taskInfo ? boost::any(taskInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskStatus) {
      res["taskStatus"] = boost::any(*taskStatus);
    }
    if (workspaceBizId) {
      res["workspaceBizId"] = boost::any(*workspaceBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizId") != m.end() && !m["bizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["bizId"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<long>(boost::any_cast<long>(m["creator"]));
    }
    if (m.find("fenixRunId") != m.end() && !m["fenixRunId"].empty()) {
      fenixRunId = make_shared<string>(boost::any_cast<string>(m["fenixRunId"]));
    }
    if (m.find("gmtCreated") != m.end() && !m["gmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["gmtCreated"]));
    }
    if (m.find("taskBizId") != m.end() && !m["taskBizId"].empty()) {
      taskBizId = make_shared<string>(boost::any_cast<string>(m["taskBizId"]));
    }
    if (m.find("taskInfo") != m.end() && !m["taskInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["taskInfo"].type()) {
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["taskInfo"]));
        taskInfo = make_shared<Task>(model1);
      }
    }
    if (m.find("taskStatus") != m.end() && !m["taskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["taskStatus"]));
    }
    if (m.find("workspaceBizId") != m.end() && !m["workspaceBizId"].empty()) {
      workspaceBizId = make_shared<string>(boost::any_cast<string>(m["workspaceBizId"]));
    }
  }


  virtual ~TaskInstance() = default;
};
class TaskSnapshot : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<long> commiter{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<Task> item{};
  shared_ptr<string> message{};
  shared_ptr<string> taskBizId{};
  shared_ptr<string> version{};

  TaskSnapshot() {}

  explicit TaskSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["bizId"] = boost::any(*bizId);
    }
    if (commiter) {
      res["commiter"] = boost::any(*commiter);
    }
    if (gmtCreated) {
      res["gmtCreated"] = boost::any(*gmtCreated);
    }
    if (item) {
      res["item"] = item ? boost::any(item->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (taskBizId) {
      res["taskBizId"] = boost::any(*taskBizId);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizId") != m.end() && !m["bizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["bizId"]));
    }
    if (m.find("commiter") != m.end() && !m["commiter"].empty()) {
      commiter = make_shared<long>(boost::any_cast<long>(m["commiter"]));
    }
    if (m.find("gmtCreated") != m.end() && !m["gmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["gmtCreated"]));
    }
    if (m.find("item") != m.end() && !m["item"].empty()) {
      if (typeid(map<string, boost::any>) == m["item"].type()) {
        Task model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["item"]));
        item = make_shared<Task>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("taskBizId") != m.end() && !m["taskBizId"].empty()) {
      taskBizId = make_shared<string>(boost::any_cast<string>(m["taskBizId"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~TaskSnapshot() = default;
};
class Template : public Darabonba::Model {
public:
  shared_ptr<long> creator{};
  shared_ptr<string> displaySparkVersion{};
  shared_ptr<bool> fusion{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> modifier{};
  shared_ptr<vector<SparkConf>> sparkConf{};
  shared_ptr<long> sparkDriverCores{};
  shared_ptr<long> sparkDriverMemory{};
  shared_ptr<long> sparkExecutorCores{};
  shared_ptr<long> sparkExecutorMemory{};
  shared_ptr<string> sparkLogLevel{};
  shared_ptr<string> sparkLogPath{};
  shared_ptr<string> sparkVersion{};
  shared_ptr<string> templateType{};

  Template() {}

  explicit Template(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (displaySparkVersion) {
      res["displaySparkVersion"] = boost::any(*displaySparkVersion);
    }
    if (fusion) {
      res["fusion"] = boost::any(*fusion);
    }
    if (gmtCreated) {
      res["gmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (modifier) {
      res["modifier"] = boost::any(*modifier);
    }
    if (sparkConf) {
      vector<boost::any> temp1;
      for(auto item1:*sparkConf){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sparkConf"] = boost::any(temp1);
    }
    if (sparkDriverCores) {
      res["sparkDriverCores"] = boost::any(*sparkDriverCores);
    }
    if (sparkDriverMemory) {
      res["sparkDriverMemory"] = boost::any(*sparkDriverMemory);
    }
    if (sparkExecutorCores) {
      res["sparkExecutorCores"] = boost::any(*sparkExecutorCores);
    }
    if (sparkExecutorMemory) {
      res["sparkExecutorMemory"] = boost::any(*sparkExecutorMemory);
    }
    if (sparkLogLevel) {
      res["sparkLogLevel"] = boost::any(*sparkLogLevel);
    }
    if (sparkLogPath) {
      res["sparkLogPath"] = boost::any(*sparkLogPath);
    }
    if (sparkVersion) {
      res["sparkVersion"] = boost::any(*sparkVersion);
    }
    if (templateType) {
      res["templateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<long>(boost::any_cast<long>(m["creator"]));
    }
    if (m.find("displaySparkVersion") != m.end() && !m["displaySparkVersion"].empty()) {
      displaySparkVersion = make_shared<string>(boost::any_cast<string>(m["displaySparkVersion"]));
    }
    if (m.find("fusion") != m.end() && !m["fusion"].empty()) {
      fusion = make_shared<bool>(boost::any_cast<bool>(m["fusion"]));
    }
    if (m.find("gmtCreated") != m.end() && !m["gmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["gmtCreated"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("modifier") != m.end() && !m["modifier"].empty()) {
      modifier = make_shared<long>(boost::any_cast<long>(m["modifier"]));
    }
    if (m.find("sparkConf") != m.end() && !m["sparkConf"].empty()) {
      if (typeid(vector<boost::any>) == m["sparkConf"].type()) {
        vector<SparkConf> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sparkConf"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SparkConf model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sparkConf = make_shared<vector<SparkConf>>(expect1);
      }
    }
    if (m.find("sparkDriverCores") != m.end() && !m["sparkDriverCores"].empty()) {
      sparkDriverCores = make_shared<long>(boost::any_cast<long>(m["sparkDriverCores"]));
    }
    if (m.find("sparkDriverMemory") != m.end() && !m["sparkDriverMemory"].empty()) {
      sparkDriverMemory = make_shared<long>(boost::any_cast<long>(m["sparkDriverMemory"]));
    }
    if (m.find("sparkExecutorCores") != m.end() && !m["sparkExecutorCores"].empty()) {
      sparkExecutorCores = make_shared<long>(boost::any_cast<long>(m["sparkExecutorCores"]));
    }
    if (m.find("sparkExecutorMemory") != m.end() && !m["sparkExecutorMemory"].empty()) {
      sparkExecutorMemory = make_shared<long>(boost::any_cast<long>(m["sparkExecutorMemory"]));
    }
    if (m.find("sparkLogLevel") != m.end() && !m["sparkLogLevel"].empty()) {
      sparkLogLevel = make_shared<string>(boost::any_cast<string>(m["sparkLogLevel"]));
    }
    if (m.find("sparkLogPath") != m.end() && !m["sparkLogPath"].empty()) {
      sparkLogPath = make_shared<string>(boost::any_cast<string>(m["sparkLogPath"]));
    }
    if (m.find("sparkVersion") != m.end() && !m["sparkVersion"].empty()) {
      sparkVersion = make_shared<string>(boost::any_cast<string>(m["sparkVersion"]));
    }
    if (m.find("templateType") != m.end() && !m["templateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["templateType"]));
    }
  }


  virtual ~Template() = default;
};
class TimeRange : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};

  TimeRange() {}

  explicit TimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~TimeRange() = default;
};
class AddMembersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> memberArns{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> regionId{};

  AddMembersRequest() {}

  explicit AddMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberArns) {
      res["memberArns"] = boost::any(*memberArns);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("memberArns") != m.end() && !m["memberArns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["memberArns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["memberArns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      memberArns = make_shared<vector<string>>(toVec1);
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~AddMembersRequest() = default;
};
class AddMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddMembersResponseBody() {}

  explicit AddMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AddMembersResponseBody() = default;
};
class AddMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddMembersResponseBody> body{};

  AddMembersResponse() {}

  explicit AddMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddMembersResponseBody>(model1);
      }
    }
  }


  virtual ~AddMembersResponse() = default;
};
class CancelJobRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  CancelJobRunRequest() {}

  explicit CancelJobRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~CancelJobRunRequest() = default;
};
class CancelJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobRunId{};
  shared_ptr<string> requestId{};

  CancelJobRunResponseBody() {}

  explicit CancelJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobRunId) {
      res["jobRunId"] = boost::any(*jobRunId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobRunId") != m.end() && !m["jobRunId"].empty()) {
      jobRunId = make_shared<string>(boost::any_cast<string>(m["jobRunId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CancelJobRunResponseBody() = default;
};
class CancelJobRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelJobRunResponseBody> body{};

  CancelJobRunResponse() {}

  explicit CancelJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelJobRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelJobRunResponseBody>(model1);
      }
    }
  }


  virtual ~CancelJobRunResponse() = default;
};
class CreateSqlStatementRequest : public Darabonba::Model {
public:
  shared_ptr<string> codeContent{};
  shared_ptr<string> defaultCatalog{};
  shared_ptr<string> defaultDatabase{};
  shared_ptr<long> limit{};
  shared_ptr<string> sqlComputeId{};
  shared_ptr<string> regionId{};

  CreateSqlStatementRequest() {}

  explicit CreateSqlStatementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeContent) {
      res["codeContent"] = boost::any(*codeContent);
    }
    if (defaultCatalog) {
      res["defaultCatalog"] = boost::any(*defaultCatalog);
    }
    if (defaultDatabase) {
      res["defaultDatabase"] = boost::any(*defaultDatabase);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (sqlComputeId) {
      res["sqlComputeId"] = boost::any(*sqlComputeId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeContent") != m.end() && !m["codeContent"].empty()) {
      codeContent = make_shared<string>(boost::any_cast<string>(m["codeContent"]));
    }
    if (m.find("defaultCatalog") != m.end() && !m["defaultCatalog"].empty()) {
      defaultCatalog = make_shared<string>(boost::any_cast<string>(m["defaultCatalog"]));
    }
    if (m.find("defaultDatabase") != m.end() && !m["defaultDatabase"].empty()) {
      defaultDatabase = make_shared<string>(boost::any_cast<string>(m["defaultDatabase"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("sqlComputeId") != m.end() && !m["sqlComputeId"].empty()) {
      sqlComputeId = make_shared<string>(boost::any_cast<string>(m["sqlComputeId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~CreateSqlStatementRequest() = default;
};
class CreateSqlStatementResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> statementId{};

  CreateSqlStatementResponseBodyData() {}

  explicit CreateSqlStatementResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (statementId) {
      res["statementId"] = boost::any(*statementId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("statementId") != m.end() && !m["statementId"].empty()) {
      statementId = make_shared<string>(boost::any_cast<string>(m["statementId"]));
    }
  }


  virtual ~CreateSqlStatementResponseBodyData() = default;
};
class CreateSqlStatementResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateSqlStatementResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateSqlStatementResponseBody() {}

  explicit CreateSqlStatementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateSqlStatementResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateSqlStatementResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateSqlStatementResponseBody() = default;
};
class CreateSqlStatementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSqlStatementResponseBody> body{};

  CreateSqlStatementResponse() {}

  explicit CreateSqlStatementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSqlStatementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSqlStatementResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSqlStatementResponse() = default;
};
class GetJobRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetJobRunRequest() {}

  explicit GetJobRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~GetJobRunRequest() = default;
};
class GetJobRunResponseBodyJobRunConfigurationOverrides : public Darabonba::Model {
public:
  shared_ptr<vector<Configuration>> configurations{};

  GetJobRunResponseBodyJobRunConfigurationOverrides() {}

  explicit GetJobRunResponseBodyJobRunConfigurationOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configurations) {
      vector<boost::any> temp1;
      for(auto item1:*configurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["configurations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configurations") != m.end() && !m["configurations"].empty()) {
      if (typeid(vector<boost::any>) == m["configurations"].type()) {
        vector<Configuration> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["configurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Configuration model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configurations = make_shared<vector<Configuration>>(expect1);
      }
    }
  }


  virtual ~GetJobRunResponseBodyJobRunConfigurationOverrides() = default;
};
class GetJobRunResponseBodyJobRunStateChangeReason : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  GetJobRunResponseBodyJobRunStateChangeReason() {}

  explicit GetJobRunResponseBodyJobRunStateChangeReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~GetJobRunResponseBodyJobRunStateChangeReason() = default;
};
class GetJobRunResponseBodyJobRun : public Darabonba::Model {
public:
  shared_ptr<string> codeType{};
  shared_ptr<GetJobRunResponseBodyJobRunConfigurationOverrides> configurationOverrides{};
  shared_ptr<string> displayReleaseVersion{};
  shared_ptr<long> endTime{};
  shared_ptr<string> environmentId{};
  shared_ptr<long> executionTimeoutSeconds{};
  shared_ptr<bool> fusion{};
  shared_ptr<JobDriver> jobDriver{};
  shared_ptr<string> jobRunId{};
  shared_ptr<RunLog> log{};
  shared_ptr<string> name{};
  shared_ptr<string> releaseVersion{};
  shared_ptr<string> resourceOwnerId{};
  shared_ptr<string> resourceQueueId{};
  shared_ptr<string> state{};
  shared_ptr<GetJobRunResponseBodyJobRunStateChangeReason> stateChangeReason{};
  shared_ptr<long> submitTime{};
  shared_ptr<vector<Tag>> tags{};
  shared_ptr<string> webUI{};
  shared_ptr<string> workspaceId{};

  GetJobRunResponseBodyJobRun() {}

  explicit GetJobRunResponseBodyJobRun(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeType) {
      res["codeType"] = boost::any(*codeType);
    }
    if (configurationOverrides) {
      res["configurationOverrides"] = configurationOverrides ? boost::any(configurationOverrides->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayReleaseVersion) {
      res["displayReleaseVersion"] = boost::any(*displayReleaseVersion);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (executionTimeoutSeconds) {
      res["executionTimeoutSeconds"] = boost::any(*executionTimeoutSeconds);
    }
    if (fusion) {
      res["fusion"] = boost::any(*fusion);
    }
    if (jobDriver) {
      res["jobDriver"] = jobDriver ? boost::any(jobDriver->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobRunId) {
      res["jobRunId"] = boost::any(*jobRunId);
    }
    if (log) {
      res["log"] = log ? boost::any(log->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (releaseVersion) {
      res["releaseVersion"] = boost::any(*releaseVersion);
    }
    if (resourceOwnerId) {
      res["resourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceQueueId) {
      res["resourceQueueId"] = boost::any(*resourceQueueId);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (stateChangeReason) {
      res["stateChangeReason"] = stateChangeReason ? boost::any(stateChangeReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (submitTime) {
      res["submitTime"] = boost::any(*submitTime);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (webUI) {
      res["webUI"] = boost::any(*webUI);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeType") != m.end() && !m["codeType"].empty()) {
      codeType = make_shared<string>(boost::any_cast<string>(m["codeType"]));
    }
    if (m.find("configurationOverrides") != m.end() && !m["configurationOverrides"].empty()) {
      if (typeid(map<string, boost::any>) == m["configurationOverrides"].type()) {
        GetJobRunResponseBodyJobRunConfigurationOverrides model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configurationOverrides"]));
        configurationOverrides = make_shared<GetJobRunResponseBodyJobRunConfigurationOverrides>(model1);
      }
    }
    if (m.find("displayReleaseVersion") != m.end() && !m["displayReleaseVersion"].empty()) {
      displayReleaseVersion = make_shared<string>(boost::any_cast<string>(m["displayReleaseVersion"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("executionTimeoutSeconds") != m.end() && !m["executionTimeoutSeconds"].empty()) {
      executionTimeoutSeconds = make_shared<long>(boost::any_cast<long>(m["executionTimeoutSeconds"]));
    }
    if (m.find("fusion") != m.end() && !m["fusion"].empty()) {
      fusion = make_shared<bool>(boost::any_cast<bool>(m["fusion"]));
    }
    if (m.find("jobDriver") != m.end() && !m["jobDriver"].empty()) {
      if (typeid(map<string, boost::any>) == m["jobDriver"].type()) {
        JobDriver model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jobDriver"]));
        jobDriver = make_shared<JobDriver>(model1);
      }
    }
    if (m.find("jobRunId") != m.end() && !m["jobRunId"].empty()) {
      jobRunId = make_shared<string>(boost::any_cast<string>(m["jobRunId"]));
    }
    if (m.find("log") != m.end() && !m["log"].empty()) {
      if (typeid(map<string, boost::any>) == m["log"].type()) {
        RunLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["log"]));
        log = make_shared<RunLog>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("releaseVersion") != m.end() && !m["releaseVersion"].empty()) {
      releaseVersion = make_shared<string>(boost::any_cast<string>(m["releaseVersion"]));
    }
    if (m.find("resourceOwnerId") != m.end() && !m["resourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["resourceOwnerId"]));
    }
    if (m.find("resourceQueueId") != m.end() && !m["resourceQueueId"].empty()) {
      resourceQueueId = make_shared<string>(boost::any_cast<string>(m["resourceQueueId"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("stateChangeReason") != m.end() && !m["stateChangeReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["stateChangeReason"].type()) {
        GetJobRunResponseBodyJobRunStateChangeReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["stateChangeReason"]));
        stateChangeReason = make_shared<GetJobRunResponseBodyJobRunStateChangeReason>(model1);
      }
    }
    if (m.find("submitTime") != m.end() && !m["submitTime"].empty()) {
      submitTime = make_shared<long>(boost::any_cast<long>(m["submitTime"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("webUI") != m.end() && !m["webUI"].empty()) {
      webUI = make_shared<string>(boost::any_cast<string>(m["webUI"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~GetJobRunResponseBodyJobRun() = default;
};
class GetJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetJobRunResponseBodyJobRun> jobRun{};
  shared_ptr<string> requestId{};

  GetJobRunResponseBody() {}

  explicit GetJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobRun) {
      res["jobRun"] = jobRun ? boost::any(jobRun->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobRun") != m.end() && !m["jobRun"].empty()) {
      if (typeid(map<string, boost::any>) == m["jobRun"].type()) {
        GetJobRunResponseBodyJobRun model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jobRun"]));
        jobRun = make_shared<GetJobRunResponseBodyJobRun>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetJobRunResponseBody() = default;
};
class GetJobRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobRunResponseBody> body{};

  GetJobRunResponse() {}

  explicit GetJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetJobRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobRunResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobRunResponse() = default;
};
class GetSessionClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetSessionClusterRequest() {}

  explicit GetSessionClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~GetSessionClusterRequest() = default;
};
class GetSessionClusterResponseBodySessionClusterApplicationConfigs : public Darabonba::Model {
public:
  shared_ptr<string> configFileName{};
  shared_ptr<string> configItemKey{};
  shared_ptr<string> configItemValue{};

  GetSessionClusterResponseBodySessionClusterApplicationConfigs() {}

  explicit GetSessionClusterResponseBodySessionClusterApplicationConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configFileName) {
      res["configFileName"] = boost::any(*configFileName);
    }
    if (configItemKey) {
      res["configItemKey"] = boost::any(*configItemKey);
    }
    if (configItemValue) {
      res["configItemValue"] = boost::any(*configItemValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configFileName") != m.end() && !m["configFileName"].empty()) {
      configFileName = make_shared<string>(boost::any_cast<string>(m["configFileName"]));
    }
    if (m.find("configItemKey") != m.end() && !m["configItemKey"].empty()) {
      configItemKey = make_shared<string>(boost::any_cast<string>(m["configItemKey"]));
    }
    if (m.find("configItemValue") != m.end() && !m["configItemValue"].empty()) {
      configItemValue = make_shared<string>(boost::any_cast<string>(m["configItemValue"]));
    }
  }


  virtual ~GetSessionClusterResponseBodySessionClusterApplicationConfigs() = default;
};
class GetSessionClusterResponseBodySessionClusterAutoStartConfiguration : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  GetSessionClusterResponseBodySessionClusterAutoStartConfiguration() {}

  explicit GetSessionClusterResponseBodySessionClusterAutoStartConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
  }


  virtual ~GetSessionClusterResponseBodySessionClusterAutoStartConfiguration() = default;
};
class GetSessionClusterResponseBodySessionClusterAutoStopConfiguration : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<long> idleTimeoutMinutes{};

  GetSessionClusterResponseBodySessionClusterAutoStopConfiguration() {}

  explicit GetSessionClusterResponseBodySessionClusterAutoStopConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (idleTimeoutMinutes) {
      res["idleTimeoutMinutes"] = boost::any(*idleTimeoutMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("idleTimeoutMinutes") != m.end() && !m["idleTimeoutMinutes"].empty()) {
      idleTimeoutMinutes = make_shared<long>(boost::any_cast<long>(m["idleTimeoutMinutes"]));
    }
  }


  virtual ~GetSessionClusterResponseBodySessionClusterAutoStopConfiguration() = default;
};
class GetSessionClusterResponseBodySessionClusterStateChangeReason : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  GetSessionClusterResponseBodySessionClusterStateChangeReason() {}

  explicit GetSessionClusterResponseBodySessionClusterStateChangeReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~GetSessionClusterResponseBodySessionClusterStateChangeReason() = default;
};
class GetSessionClusterResponseBodySessionCluster : public Darabonba::Model {
public:
  shared_ptr<vector<GetSessionClusterResponseBodySessionClusterApplicationConfigs>> applicationConfigs{};
  shared_ptr<GetSessionClusterResponseBodySessionClusterAutoStartConfiguration> autoStartConfiguration{};
  shared_ptr<GetSessionClusterResponseBodySessionClusterAutoStopConfiguration> autoStopConfiguration{};
  shared_ptr<string> displayReleaseVersion{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainInner{};
  shared_ptr<string> draftId{};
  shared_ptr<string> envId{};
  shared_ptr<bool> fusion{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> kind{};
  shared_ptr<string> name{};
  shared_ptr<string> queueName{};
  shared_ptr<string> releaseVersion{};
  shared_ptr<string> sessionClusterId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> state{};
  shared_ptr<GetSessionClusterResponseBodySessionClusterStateChangeReason> stateChangeReason{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<string> webUI{};
  shared_ptr<string> workspaceId{};

  GetSessionClusterResponseBodySessionCluster() {}

  explicit GetSessionClusterResponseBodySessionCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*applicationConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["applicationConfigs"] = boost::any(temp1);
    }
    if (autoStartConfiguration) {
      res["autoStartConfiguration"] = autoStartConfiguration ? boost::any(autoStartConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (autoStopConfiguration) {
      res["autoStopConfiguration"] = autoStopConfiguration ? boost::any(autoStopConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayReleaseVersion) {
      res["displayReleaseVersion"] = boost::any(*displayReleaseVersion);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (domainInner) {
      res["domainInner"] = boost::any(*domainInner);
    }
    if (draftId) {
      res["draftId"] = boost::any(*draftId);
    }
    if (envId) {
      res["envId"] = boost::any(*envId);
    }
    if (fusion) {
      res["fusion"] = boost::any(*fusion);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (queueName) {
      res["queueName"] = boost::any(*queueName);
    }
    if (releaseVersion) {
      res["releaseVersion"] = boost::any(*releaseVersion);
    }
    if (sessionClusterId) {
      res["sessionClusterId"] = boost::any(*sessionClusterId);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (stateChangeReason) {
      res["stateChangeReason"] = stateChangeReason ? boost::any(stateChangeReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    if (webUI) {
      res["webUI"] = boost::any(*webUI);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationConfigs") != m.end() && !m["applicationConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["applicationConfigs"].type()) {
        vector<GetSessionClusterResponseBodySessionClusterApplicationConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["applicationConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSessionClusterResponseBodySessionClusterApplicationConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationConfigs = make_shared<vector<GetSessionClusterResponseBodySessionClusterApplicationConfigs>>(expect1);
      }
    }
    if (m.find("autoStartConfiguration") != m.end() && !m["autoStartConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["autoStartConfiguration"].type()) {
        GetSessionClusterResponseBodySessionClusterAutoStartConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["autoStartConfiguration"]));
        autoStartConfiguration = make_shared<GetSessionClusterResponseBodySessionClusterAutoStartConfiguration>(model1);
      }
    }
    if (m.find("autoStopConfiguration") != m.end() && !m["autoStopConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["autoStopConfiguration"].type()) {
        GetSessionClusterResponseBodySessionClusterAutoStopConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["autoStopConfiguration"]));
        autoStopConfiguration = make_shared<GetSessionClusterResponseBodySessionClusterAutoStopConfiguration>(model1);
      }
    }
    if (m.find("displayReleaseVersion") != m.end() && !m["displayReleaseVersion"].empty()) {
      displayReleaseVersion = make_shared<string>(boost::any_cast<string>(m["displayReleaseVersion"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("domainInner") != m.end() && !m["domainInner"].empty()) {
      domainInner = make_shared<string>(boost::any_cast<string>(m["domainInner"]));
    }
    if (m.find("draftId") != m.end() && !m["draftId"].empty()) {
      draftId = make_shared<string>(boost::any_cast<string>(m["draftId"]));
    }
    if (m.find("envId") != m.end() && !m["envId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["envId"]));
    }
    if (m.find("fusion") != m.end() && !m["fusion"].empty()) {
      fusion = make_shared<bool>(boost::any_cast<bool>(m["fusion"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("queueName") != m.end() && !m["queueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["queueName"]));
    }
    if (m.find("releaseVersion") != m.end() && !m["releaseVersion"].empty()) {
      releaseVersion = make_shared<string>(boost::any_cast<string>(m["releaseVersion"]));
    }
    if (m.find("sessionClusterId") != m.end() && !m["sessionClusterId"].empty()) {
      sessionClusterId = make_shared<string>(boost::any_cast<string>(m["sessionClusterId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("stateChangeReason") != m.end() && !m["stateChangeReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["stateChangeReason"].type()) {
        GetSessionClusterResponseBodySessionClusterStateChangeReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["stateChangeReason"]));
        stateChangeReason = make_shared<GetSessionClusterResponseBodySessionClusterStateChangeReason>(model1);
      }
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
    if (m.find("webUI") != m.end() && !m["webUI"].empty()) {
      webUI = make_shared<string>(boost::any_cast<string>(m["webUI"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~GetSessionClusterResponseBodySessionCluster() = default;
};
class GetSessionClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetSessionClusterResponseBodySessionCluster> sessionCluster{};

  GetSessionClusterResponseBody() {}

  explicit GetSessionClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionCluster) {
      res["sessionCluster"] = sessionCluster ? boost::any(sessionCluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionCluster") != m.end() && !m["sessionCluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["sessionCluster"].type()) {
        GetSessionClusterResponseBodySessionCluster model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sessionCluster"]));
        sessionCluster = make_shared<GetSessionClusterResponseBodySessionCluster>(model1);
      }
    }
  }


  virtual ~GetSessionClusterResponseBody() = default;
};
class GetSessionClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSessionClusterResponseBody> body{};

  GetSessionClusterResponse() {}

  explicit GetSessionClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSessionClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSessionClusterResponseBody>(model1);
      }
    }
  }


  virtual ~GetSessionClusterResponse() = default;
};
class GetSqlStatementRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetSqlStatementRequest() {}

  explicit GetSqlStatementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~GetSqlStatementRequest() = default;
};
class GetSqlStatementResponseBodyDataSqlOutputs : public Darabonba::Model {
public:
  shared_ptr<string> rows{};
  shared_ptr<string> schema{};

  GetSqlStatementResponseBodyDataSqlOutputs() {}

  explicit GetSqlStatementResponseBodyDataSqlOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rows) {
      res["rows"] = boost::any(*rows);
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("rows") != m.end() && !m["rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["rows"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["schema"]));
    }
  }


  virtual ~GetSqlStatementResponseBodyDataSqlOutputs() = default;
};
class GetSqlStatementResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<long>> executionTime{};
  shared_ptr<string> sqlErrorCode{};
  shared_ptr<string> sqlErrorMessage{};
  shared_ptr<vector<GetSqlStatementResponseBodyDataSqlOutputs>> sqlOutputs{};
  shared_ptr<string> state{};
  shared_ptr<string> statementId{};

  GetSqlStatementResponseBodyData() {}

  explicit GetSqlStatementResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionTime) {
      res["executionTime"] = boost::any(*executionTime);
    }
    if (sqlErrorCode) {
      res["sqlErrorCode"] = boost::any(*sqlErrorCode);
    }
    if (sqlErrorMessage) {
      res["sqlErrorMessage"] = boost::any(*sqlErrorMessage);
    }
    if (sqlOutputs) {
      vector<boost::any> temp1;
      for(auto item1:*sqlOutputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sqlOutputs"] = boost::any(temp1);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (statementId) {
      res["statementId"] = boost::any(*statementId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("executionTime") != m.end() && !m["executionTime"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["executionTime"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["executionTime"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      executionTime = make_shared<vector<long>>(toVec1);
    }
    if (m.find("sqlErrorCode") != m.end() && !m["sqlErrorCode"].empty()) {
      sqlErrorCode = make_shared<string>(boost::any_cast<string>(m["sqlErrorCode"]));
    }
    if (m.find("sqlErrorMessage") != m.end() && !m["sqlErrorMessage"].empty()) {
      sqlErrorMessage = make_shared<string>(boost::any_cast<string>(m["sqlErrorMessage"]));
    }
    if (m.find("sqlOutputs") != m.end() && !m["sqlOutputs"].empty()) {
      if (typeid(vector<boost::any>) == m["sqlOutputs"].type()) {
        vector<GetSqlStatementResponseBodyDataSqlOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sqlOutputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSqlStatementResponseBodyDataSqlOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sqlOutputs = make_shared<vector<GetSqlStatementResponseBodyDataSqlOutputs>>(expect1);
      }
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("statementId") != m.end() && !m["statementId"].empty()) {
      statementId = make_shared<string>(boost::any_cast<string>(m["statementId"]));
    }
  }


  virtual ~GetSqlStatementResponseBodyData() = default;
};
class GetSqlStatementResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSqlStatementResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetSqlStatementResponseBody() {}

  explicit GetSqlStatementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetSqlStatementResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetSqlStatementResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetSqlStatementResponseBody() = default;
};
class GetSqlStatementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSqlStatementResponseBody> body{};

  GetSqlStatementResponse() {}

  explicit GetSqlStatementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSqlStatementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSqlStatementResponseBody>(model1);
      }
    }
  }


  virtual ~GetSqlStatementResponse() = default;
};
class GetTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> templateType{};

  GetTemplateRequest() {}

  explicit GetTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (templateType) {
      res["templateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("templateType") != m.end() && !m["templateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["templateType"]));
    }
  }


  virtual ~GetTemplateRequest() = default;
};
class GetTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<Template_> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetTemplateResponseBody() {}

  explicit GetTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Template_ model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Template_>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
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
class GrantRoleToUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleArn{};
  shared_ptr<vector<string>> userArns{};
  shared_ptr<string> regionId{};

  GrantRoleToUsersRequest() {}

  explicit GrantRoleToUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (userArns) {
      res["userArns"] = boost::any(*userArns);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("userArns") != m.end() && !m["userArns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["userArns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["userArns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userArns = make_shared<vector<string>>(toVec1);
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~GrantRoleToUsersRequest() = default;
};
class GrantRoleToUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GrantRoleToUsersResponseBody() {}

  explicit GrantRoleToUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GrantRoleToUsersResponseBody() = default;
};
class GrantRoleToUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GrantRoleToUsersResponseBody> body{};

  GrantRoleToUsersResponse() {}

  explicit GrantRoleToUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GrantRoleToUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantRoleToUsersResponseBody>(model1);
      }
    }
  }


  virtual ~GrantRoleToUsersResponse() = default;
};
class ListJobRunsRequestEndTime : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};

  ListJobRunsRequestEndTime() {}

  explicit ListJobRunsRequestEndTime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~ListJobRunsRequestEndTime() = default;
};
class ListJobRunsRequestStartTime : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};

  ListJobRunsRequestStartTime() {}

  explicit ListJobRunsRequestStartTime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~ListJobRunsRequestStartTime() = default;
};
class ListJobRunsRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListJobRunsRequestTags() {}

  explicit ListJobRunsRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListJobRunsRequestTags() = default;
};
class ListJobRunsRequest : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<ListJobRunsRequestEndTime> endTime{};
  shared_ptr<string> jobRunDeploymentId{};
  shared_ptr<string> jobRunId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceQueueId{};
  shared_ptr<ListJobRunsRequestStartTime> startTime{};
  shared_ptr<vector<string>> states{};
  shared_ptr<vector<ListJobRunsRequestTags>> tags{};

  ListJobRunsRequest() {}

  explicit ListJobRunsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (endTime) {
      res["endTime"] = endTime ? boost::any(endTime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobRunDeploymentId) {
      res["jobRunDeploymentId"] = boost::any(*jobRunDeploymentId);
    }
    if (jobRunId) {
      res["jobRunId"] = boost::any(*jobRunId);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceQueueId) {
      res["resourceQueueId"] = boost::any(*resourceQueueId);
    }
    if (startTime) {
      res["startTime"] = startTime ? boost::any(startTime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (states) {
      res["states"] = boost::any(*states);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      if (typeid(map<string, boost::any>) == m["endTime"].type()) {
        ListJobRunsRequestEndTime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["endTime"]));
        endTime = make_shared<ListJobRunsRequestEndTime>(model1);
      }
    }
    if (m.find("jobRunDeploymentId") != m.end() && !m["jobRunDeploymentId"].empty()) {
      jobRunDeploymentId = make_shared<string>(boost::any_cast<string>(m["jobRunDeploymentId"]));
    }
    if (m.find("jobRunId") != m.end() && !m["jobRunId"].empty()) {
      jobRunId = make_shared<string>(boost::any_cast<string>(m["jobRunId"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceQueueId") != m.end() && !m["resourceQueueId"].empty()) {
      resourceQueueId = make_shared<string>(boost::any_cast<string>(m["resourceQueueId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      if (typeid(map<string, boost::any>) == m["startTime"].type()) {
        ListJobRunsRequestStartTime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["startTime"]));
        startTime = make_shared<ListJobRunsRequestStartTime>(model1);
      }
    }
    if (m.find("states") != m.end() && !m["states"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["states"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["states"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      states = make_shared<vector<string>>(toVec1);
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListJobRunsRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobRunsRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListJobRunsRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListJobRunsRequest() = default;
};
class ListJobRunsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> endTimeShrink{};
  shared_ptr<string> jobRunDeploymentId{};
  shared_ptr<string> jobRunId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceQueueId{};
  shared_ptr<string> startTimeShrink{};
  shared_ptr<string> statesShrink{};
  shared_ptr<string> tagsShrink{};

  ListJobRunsShrinkRequest() {}

  explicit ListJobRunsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (endTimeShrink) {
      res["endTime"] = boost::any(*endTimeShrink);
    }
    if (jobRunDeploymentId) {
      res["jobRunDeploymentId"] = boost::any(*jobRunDeploymentId);
    }
    if (jobRunId) {
      res["jobRunId"] = boost::any(*jobRunId);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (resourceQueueId) {
      res["resourceQueueId"] = boost::any(*resourceQueueId);
    }
    if (startTimeShrink) {
      res["startTime"] = boost::any(*startTimeShrink);
    }
    if (statesShrink) {
      res["states"] = boost::any(*statesShrink);
    }
    if (tagsShrink) {
      res["tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTimeShrink = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("jobRunDeploymentId") != m.end() && !m["jobRunDeploymentId"].empty()) {
      jobRunDeploymentId = make_shared<string>(boost::any_cast<string>(m["jobRunDeploymentId"]));
    }
    if (m.find("jobRunId") != m.end() && !m["jobRunId"].empty()) {
      jobRunId = make_shared<string>(boost::any_cast<string>(m["jobRunId"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("resourceQueueId") != m.end() && !m["resourceQueueId"].empty()) {
      resourceQueueId = make_shared<string>(boost::any_cast<string>(m["resourceQueueId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTimeShrink = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("states") != m.end() && !m["states"].empty()) {
      statesShrink = make_shared<string>(boost::any_cast<string>(m["states"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
  }


  virtual ~ListJobRunsShrinkRequest() = default;
};
class ListJobRunsResponseBodyJobRunsConfigurationOverrides : public Darabonba::Model {
public:
  shared_ptr<vector<Configuration>> configurations{};

  ListJobRunsResponseBodyJobRunsConfigurationOverrides() {}

  explicit ListJobRunsResponseBodyJobRunsConfigurationOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configurations) {
      vector<boost::any> temp1;
      for(auto item1:*configurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["configurations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configurations") != m.end() && !m["configurations"].empty()) {
      if (typeid(vector<boost::any>) == m["configurations"].type()) {
        vector<Configuration> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["configurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Configuration model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configurations = make_shared<vector<Configuration>>(expect1);
      }
    }
  }


  virtual ~ListJobRunsResponseBodyJobRunsConfigurationOverrides() = default;
};
class ListJobRunsResponseBodyJobRunsStateChangeReason : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  ListJobRunsResponseBodyJobRunsStateChangeReason() {}

  explicit ListJobRunsResponseBodyJobRunsStateChangeReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~ListJobRunsResponseBodyJobRunsStateChangeReason() = default;
};
class ListJobRunsResponseBodyJobRuns : public Darabonba::Model {
public:
  shared_ptr<string> codeType{};
  shared_ptr<ListJobRunsResponseBodyJobRunsConfigurationOverrides> configurationOverrides{};
  shared_ptr<string> creator{};
  shared_ptr<long> cuHours{};
  shared_ptr<string> displayReleaseVersion{};
  shared_ptr<long> endTime{};
  shared_ptr<long> executionTimeoutSeconds{};
  shared_ptr<bool> fusion{};
  shared_ptr<JobDriver> jobDriver{};
  shared_ptr<string> jobRunId{};
  shared_ptr<RunLog> log{};
  shared_ptr<long> mbSeconds{};
  shared_ptr<string> name{};
  shared_ptr<string> releaseVersion{};
  shared_ptr<string> state{};
  shared_ptr<ListJobRunsResponseBodyJobRunsStateChangeReason> stateChangeReason{};
  shared_ptr<long> submitTime{};
  shared_ptr<vector<Tag>> tags{};
  shared_ptr<long> vcoreSeconds{};
  shared_ptr<string> webUI{};
  shared_ptr<string> workspaceId{};

  ListJobRunsResponseBodyJobRuns() {}

  explicit ListJobRunsResponseBodyJobRuns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeType) {
      res["codeType"] = boost::any(*codeType);
    }
    if (configurationOverrides) {
      res["configurationOverrides"] = configurationOverrides ? boost::any(configurationOverrides->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (cuHours) {
      res["cuHours"] = boost::any(*cuHours);
    }
    if (displayReleaseVersion) {
      res["displayReleaseVersion"] = boost::any(*displayReleaseVersion);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (executionTimeoutSeconds) {
      res["executionTimeoutSeconds"] = boost::any(*executionTimeoutSeconds);
    }
    if (fusion) {
      res["fusion"] = boost::any(*fusion);
    }
    if (jobDriver) {
      res["jobDriver"] = jobDriver ? boost::any(jobDriver->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobRunId) {
      res["jobRunId"] = boost::any(*jobRunId);
    }
    if (log) {
      res["log"] = log ? boost::any(log->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mbSeconds) {
      res["mbSeconds"] = boost::any(*mbSeconds);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (releaseVersion) {
      res["releaseVersion"] = boost::any(*releaseVersion);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (stateChangeReason) {
      res["stateChangeReason"] = stateChangeReason ? boost::any(stateChangeReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (submitTime) {
      res["submitTime"] = boost::any(*submitTime);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (vcoreSeconds) {
      res["vcoreSeconds"] = boost::any(*vcoreSeconds);
    }
    if (webUI) {
      res["webUI"] = boost::any(*webUI);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeType") != m.end() && !m["codeType"].empty()) {
      codeType = make_shared<string>(boost::any_cast<string>(m["codeType"]));
    }
    if (m.find("configurationOverrides") != m.end() && !m["configurationOverrides"].empty()) {
      if (typeid(map<string, boost::any>) == m["configurationOverrides"].type()) {
        ListJobRunsResponseBodyJobRunsConfigurationOverrides model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configurationOverrides"]));
        configurationOverrides = make_shared<ListJobRunsResponseBodyJobRunsConfigurationOverrides>(model1);
      }
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("cuHours") != m.end() && !m["cuHours"].empty()) {
      cuHours = make_shared<long>(boost::any_cast<long>(m["cuHours"]));
    }
    if (m.find("displayReleaseVersion") != m.end() && !m["displayReleaseVersion"].empty()) {
      displayReleaseVersion = make_shared<string>(boost::any_cast<string>(m["displayReleaseVersion"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("executionTimeoutSeconds") != m.end() && !m["executionTimeoutSeconds"].empty()) {
      executionTimeoutSeconds = make_shared<long>(boost::any_cast<long>(m["executionTimeoutSeconds"]));
    }
    if (m.find("fusion") != m.end() && !m["fusion"].empty()) {
      fusion = make_shared<bool>(boost::any_cast<bool>(m["fusion"]));
    }
    if (m.find("jobDriver") != m.end() && !m["jobDriver"].empty()) {
      if (typeid(map<string, boost::any>) == m["jobDriver"].type()) {
        JobDriver model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jobDriver"]));
        jobDriver = make_shared<JobDriver>(model1);
      }
    }
    if (m.find("jobRunId") != m.end() && !m["jobRunId"].empty()) {
      jobRunId = make_shared<string>(boost::any_cast<string>(m["jobRunId"]));
    }
    if (m.find("log") != m.end() && !m["log"].empty()) {
      if (typeid(map<string, boost::any>) == m["log"].type()) {
        RunLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["log"]));
        log = make_shared<RunLog>(model1);
      }
    }
    if (m.find("mbSeconds") != m.end() && !m["mbSeconds"].empty()) {
      mbSeconds = make_shared<long>(boost::any_cast<long>(m["mbSeconds"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("releaseVersion") != m.end() && !m["releaseVersion"].empty()) {
      releaseVersion = make_shared<string>(boost::any_cast<string>(m["releaseVersion"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("stateChangeReason") != m.end() && !m["stateChangeReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["stateChangeReason"].type()) {
        ListJobRunsResponseBodyJobRunsStateChangeReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["stateChangeReason"]));
        stateChangeReason = make_shared<ListJobRunsResponseBodyJobRunsStateChangeReason>(model1);
      }
    }
    if (m.find("submitTime") != m.end() && !m["submitTime"].empty()) {
      submitTime = make_shared<long>(boost::any_cast<long>(m["submitTime"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("vcoreSeconds") != m.end() && !m["vcoreSeconds"].empty()) {
      vcoreSeconds = make_shared<long>(boost::any_cast<long>(m["vcoreSeconds"]));
    }
    if (m.find("webUI") != m.end() && !m["webUI"].empty()) {
      webUI = make_shared<string>(boost::any_cast<string>(m["webUI"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListJobRunsResponseBodyJobRuns() = default;
};
class ListJobRunsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListJobRunsResponseBodyJobRuns>> jobRuns{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListJobRunsResponseBody() {}

  explicit ListJobRunsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobRuns) {
      vector<boost::any> temp1;
      for(auto item1:*jobRuns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["jobRuns"] = boost::any(temp1);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobRuns") != m.end() && !m["jobRuns"].empty()) {
      if (typeid(vector<boost::any>) == m["jobRuns"].type()) {
        vector<ListJobRunsResponseBodyJobRuns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobRuns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobRunsResponseBodyJobRuns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobRuns = make_shared<vector<ListJobRunsResponseBodyJobRuns>>(expect1);
      }
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListJobRunsResponseBody() = default;
};
class ListJobRunsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListJobRunsResponseBody> body{};

  ListJobRunsResponse() {}

  explicit ListJobRunsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListJobRunsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobRunsResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobRunsResponse() = default;
};
class ListLogContentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<long> length{};
  shared_ptr<long> offset{};
  shared_ptr<string> regionId{};

  ListLogContentsRequest() {}

  explicit ListLogContentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (length) {
      res["length"] = boost::any(*length);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("length") != m.end() && !m["length"].empty()) {
      length = make_shared<long>(boost::any_cast<long>(m["length"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~ListLogContentsRequest() = default;
};
class ListLogContentsResponseBodyListLogContentContents : public Darabonba::Model {
public:
  shared_ptr<string> lineContent{};

  ListLogContentsResponseBodyListLogContentContents() {}

  explicit ListLogContentsResponseBodyListLogContentContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lineContent) {
      res["LineContent"] = boost::any(*lineContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LineContent") != m.end() && !m["LineContent"].empty()) {
      lineContent = make_shared<string>(boost::any_cast<string>(m["LineContent"]));
    }
  }


  virtual ~ListLogContentsResponseBodyListLogContentContents() = default;
};
class ListLogContentsResponseBodyListLogContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListLogContentsResponseBodyListLogContentContents>> contents{};
  shared_ptr<long> totalLength{};

  ListLogContentsResponseBodyListLogContent() {}

  explicit ListLogContentsResponseBodyListLogContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contents) {
      vector<boost::any> temp1;
      for(auto item1:*contents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["contents"] = boost::any(temp1);
    }
    if (totalLength) {
      res["totalLength"] = boost::any(*totalLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contents") != m.end() && !m["contents"].empty()) {
      if (typeid(vector<boost::any>) == m["contents"].type()) {
        vector<ListLogContentsResponseBodyListLogContentContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["contents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLogContentsResponseBodyListLogContentContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contents = make_shared<vector<ListLogContentsResponseBodyListLogContentContents>>(expect1);
      }
    }
    if (m.find("totalLength") != m.end() && !m["totalLength"].empty()) {
      totalLength = make_shared<long>(boost::any_cast<long>(m["totalLength"]));
    }
  }


  virtual ~ListLogContentsResponseBodyListLogContent() = default;
};
class ListLogContentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListLogContentsResponseBodyListLogContent> listLogContent{};
  shared_ptr<string> requestId{};

  ListLogContentsResponseBody() {}

  explicit ListLogContentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listLogContent) {
      res["listLogContent"] = listLogContent ? boost::any(listLogContent->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("listLogContent") != m.end() && !m["listLogContent"].empty()) {
      if (typeid(map<string, boost::any>) == m["listLogContent"].type()) {
        ListLogContentsResponseBodyListLogContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["listLogContent"]));
        listLogContent = make_shared<ListLogContentsResponseBodyListLogContent>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListLogContentsResponseBody() = default;
};
class ListLogContentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLogContentsResponseBody> body{};

  ListLogContentsResponse() {}

  explicit ListLogContentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListLogContentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLogContentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListLogContentsResponse() = default;
};
class ListReleaseVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> releaseType{};
  shared_ptr<string> releaseVersion{};
  shared_ptr<string> releaseVersionStatus{};
  shared_ptr<string> workspaceId{};

  ListReleaseVersionsRequest() {}

  explicit ListReleaseVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (releaseType) {
      res["releaseType"] = boost::any(*releaseType);
    }
    if (releaseVersion) {
      res["releaseVersion"] = boost::any(*releaseVersion);
    }
    if (releaseVersionStatus) {
      res["releaseVersionStatus"] = boost::any(*releaseVersionStatus);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("releaseType") != m.end() && !m["releaseType"].empty()) {
      releaseType = make_shared<string>(boost::any_cast<string>(m["releaseType"]));
    }
    if (m.find("releaseVersion") != m.end() && !m["releaseVersion"].empty()) {
      releaseVersion = make_shared<string>(boost::any_cast<string>(m["releaseVersion"]));
    }
    if (m.find("releaseVersionStatus") != m.end() && !m["releaseVersionStatus"].empty()) {
      releaseVersionStatus = make_shared<string>(boost::any_cast<string>(m["releaseVersionStatus"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListReleaseVersionsRequest() = default;
};
class ListReleaseVersionsResponseBodyReleaseVersions : public Darabonba::Model {
public:
  shared_ptr<string> communityVersion{};
  shared_ptr<vector<string>> cpuArchitectures{};
  shared_ptr<string> displayReleaseVersion{};
  shared_ptr<bool> fusion{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> iaasType{};
  shared_ptr<string> releaseVersion{};
  shared_ptr<string> scalaVersion{};
  shared_ptr<string> state{};
  shared_ptr<string> type{};

  ListReleaseVersionsResponseBodyReleaseVersions() {}

  explicit ListReleaseVersionsResponseBodyReleaseVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (communityVersion) {
      res["communityVersion"] = boost::any(*communityVersion);
    }
    if (cpuArchitectures) {
      res["cpuArchitectures"] = boost::any(*cpuArchitectures);
    }
    if (displayReleaseVersion) {
      res["displayReleaseVersion"] = boost::any(*displayReleaseVersion);
    }
    if (fusion) {
      res["fusion"] = boost::any(*fusion);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (iaasType) {
      res["iaasType"] = boost::any(*iaasType);
    }
    if (releaseVersion) {
      res["releaseVersion"] = boost::any(*releaseVersion);
    }
    if (scalaVersion) {
      res["scalaVersion"] = boost::any(*scalaVersion);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("communityVersion") != m.end() && !m["communityVersion"].empty()) {
      communityVersion = make_shared<string>(boost::any_cast<string>(m["communityVersion"]));
    }
    if (m.find("cpuArchitectures") != m.end() && !m["cpuArchitectures"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["cpuArchitectures"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["cpuArchitectures"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cpuArchitectures = make_shared<vector<string>>(toVec1);
    }
    if (m.find("displayReleaseVersion") != m.end() && !m["displayReleaseVersion"].empty()) {
      displayReleaseVersion = make_shared<string>(boost::any_cast<string>(m["displayReleaseVersion"]));
    }
    if (m.find("fusion") != m.end() && !m["fusion"].empty()) {
      fusion = make_shared<bool>(boost::any_cast<bool>(m["fusion"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("iaasType") != m.end() && !m["iaasType"].empty()) {
      iaasType = make_shared<string>(boost::any_cast<string>(m["iaasType"]));
    }
    if (m.find("releaseVersion") != m.end() && !m["releaseVersion"].empty()) {
      releaseVersion = make_shared<string>(boost::any_cast<string>(m["releaseVersion"]));
    }
    if (m.find("scalaVersion") != m.end() && !m["scalaVersion"].empty()) {
      scalaVersion = make_shared<string>(boost::any_cast<string>(m["scalaVersion"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListReleaseVersionsResponseBodyReleaseVersions() = default;
};
class ListReleaseVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListReleaseVersionsResponseBodyReleaseVersions>> releaseVersions{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListReleaseVersionsResponseBody() {}

  explicit ListReleaseVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (releaseVersions) {
      vector<boost::any> temp1;
      for(auto item1:*releaseVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["releaseVersions"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("releaseVersions") != m.end() && !m["releaseVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["releaseVersions"].type()) {
        vector<ListReleaseVersionsResponseBodyReleaseVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["releaseVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListReleaseVersionsResponseBodyReleaseVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        releaseVersions = make_shared<vector<ListReleaseVersionsResponseBodyReleaseVersions>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListReleaseVersionsResponseBody() = default;
};
class ListReleaseVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListReleaseVersionsResponseBody> body{};

  ListReleaseVersionsResponse() {}

  explicit ListReleaseVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListReleaseVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListReleaseVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListReleaseVersionsResponse() = default;
};
class ListSessionClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> kind{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> queueName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionClusterId{};

  ListSessionClustersRequest() {}

  explicit ListSessionClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (queueName) {
      res["queueName"] = boost::any(*queueName);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (sessionClusterId) {
      res["sessionClusterId"] = boost::any(*sessionClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("queueName") != m.end() && !m["queueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["queueName"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("sessionClusterId") != m.end() && !m["sessionClusterId"].empty()) {
      sessionClusterId = make_shared<string>(boost::any_cast<string>(m["sessionClusterId"]));
    }
  }


  virtual ~ListSessionClustersRequest() = default;
};
class ListSessionClustersResponseBodySessionClustersApplicationConfigs : public Darabonba::Model {
public:
  shared_ptr<string> configFileName{};
  shared_ptr<string> configItemKey{};
  shared_ptr<string> configItemValue{};

  ListSessionClustersResponseBodySessionClustersApplicationConfigs() {}

  explicit ListSessionClustersResponseBodySessionClustersApplicationConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configFileName) {
      res["configFileName"] = boost::any(*configFileName);
    }
    if (configItemKey) {
      res["configItemKey"] = boost::any(*configItemKey);
    }
    if (configItemValue) {
      res["configItemValue"] = boost::any(*configItemValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configFileName") != m.end() && !m["configFileName"].empty()) {
      configFileName = make_shared<string>(boost::any_cast<string>(m["configFileName"]));
    }
    if (m.find("configItemKey") != m.end() && !m["configItemKey"].empty()) {
      configItemKey = make_shared<string>(boost::any_cast<string>(m["configItemKey"]));
    }
    if (m.find("configItemValue") != m.end() && !m["configItemValue"].empty()) {
      configItemValue = make_shared<string>(boost::any_cast<string>(m["configItemValue"]));
    }
  }


  virtual ~ListSessionClustersResponseBodySessionClustersApplicationConfigs() = default;
};
class ListSessionClustersResponseBodySessionClustersAutoStartConfiguration : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  ListSessionClustersResponseBodySessionClustersAutoStartConfiguration() {}

  explicit ListSessionClustersResponseBodySessionClustersAutoStartConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
  }


  virtual ~ListSessionClustersResponseBodySessionClustersAutoStartConfiguration() = default;
};
class ListSessionClustersResponseBodySessionClustersAutoStopConfiguration : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<long> idleTimeoutMinutes{};

  ListSessionClustersResponseBodySessionClustersAutoStopConfiguration() {}

  explicit ListSessionClustersResponseBodySessionClustersAutoStopConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (idleTimeoutMinutes) {
      res["idleTimeoutMinutes"] = boost::any(*idleTimeoutMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("idleTimeoutMinutes") != m.end() && !m["idleTimeoutMinutes"].empty()) {
      idleTimeoutMinutes = make_shared<long>(boost::any_cast<long>(m["idleTimeoutMinutes"]));
    }
  }


  virtual ~ListSessionClustersResponseBodySessionClustersAutoStopConfiguration() = default;
};
class ListSessionClustersResponseBodySessionClustersStateChangeReason : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  ListSessionClustersResponseBodySessionClustersStateChangeReason() {}

  explicit ListSessionClustersResponseBodySessionClustersStateChangeReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~ListSessionClustersResponseBodySessionClustersStateChangeReason() = default;
};
class ListSessionClustersResponseBodySessionClusters : public Darabonba::Model {
public:
  shared_ptr<vector<ListSessionClustersResponseBodySessionClustersApplicationConfigs>> applicationConfigs{};
  shared_ptr<ListSessionClustersResponseBodySessionClustersAutoStartConfiguration> autoStartConfiguration{};
  shared_ptr<ListSessionClustersResponseBodySessionClustersAutoStopConfiguration> autoStopConfiguration{};
  shared_ptr<string> displayReleaseVersion{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainInner{};
  shared_ptr<string> draftId{};
  shared_ptr<bool> fusion{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> kind{};
  shared_ptr<string> name{};
  shared_ptr<string> queueName{};
  shared_ptr<string> releaseVersion{};
  shared_ptr<string> sessionClusterId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> state{};
  shared_ptr<ListSessionClustersResponseBodySessionClustersStateChangeReason> stateChangeReason{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<string> webUI{};
  shared_ptr<string> workspaceId{};

  ListSessionClustersResponseBodySessionClusters() {}

  explicit ListSessionClustersResponseBodySessionClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*applicationConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["applicationConfigs"] = boost::any(temp1);
    }
    if (autoStartConfiguration) {
      res["autoStartConfiguration"] = autoStartConfiguration ? boost::any(autoStartConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (autoStopConfiguration) {
      res["autoStopConfiguration"] = autoStopConfiguration ? boost::any(autoStopConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayReleaseVersion) {
      res["displayReleaseVersion"] = boost::any(*displayReleaseVersion);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (domainInner) {
      res["domainInner"] = boost::any(*domainInner);
    }
    if (draftId) {
      res["draftId"] = boost::any(*draftId);
    }
    if (fusion) {
      res["fusion"] = boost::any(*fusion);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (queueName) {
      res["queueName"] = boost::any(*queueName);
    }
    if (releaseVersion) {
      res["releaseVersion"] = boost::any(*releaseVersion);
    }
    if (sessionClusterId) {
      res["sessionClusterId"] = boost::any(*sessionClusterId);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (stateChangeReason) {
      res["stateChangeReason"] = stateChangeReason ? boost::any(stateChangeReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    if (webUI) {
      res["webUI"] = boost::any(*webUI);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationConfigs") != m.end() && !m["applicationConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["applicationConfigs"].type()) {
        vector<ListSessionClustersResponseBodySessionClustersApplicationConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["applicationConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSessionClustersResponseBodySessionClustersApplicationConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationConfigs = make_shared<vector<ListSessionClustersResponseBodySessionClustersApplicationConfigs>>(expect1);
      }
    }
    if (m.find("autoStartConfiguration") != m.end() && !m["autoStartConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["autoStartConfiguration"].type()) {
        ListSessionClustersResponseBodySessionClustersAutoStartConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["autoStartConfiguration"]));
        autoStartConfiguration = make_shared<ListSessionClustersResponseBodySessionClustersAutoStartConfiguration>(model1);
      }
    }
    if (m.find("autoStopConfiguration") != m.end() && !m["autoStopConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["autoStopConfiguration"].type()) {
        ListSessionClustersResponseBodySessionClustersAutoStopConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["autoStopConfiguration"]));
        autoStopConfiguration = make_shared<ListSessionClustersResponseBodySessionClustersAutoStopConfiguration>(model1);
      }
    }
    if (m.find("displayReleaseVersion") != m.end() && !m["displayReleaseVersion"].empty()) {
      displayReleaseVersion = make_shared<string>(boost::any_cast<string>(m["displayReleaseVersion"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("domainInner") != m.end() && !m["domainInner"].empty()) {
      domainInner = make_shared<string>(boost::any_cast<string>(m["domainInner"]));
    }
    if (m.find("draftId") != m.end() && !m["draftId"].empty()) {
      draftId = make_shared<string>(boost::any_cast<string>(m["draftId"]));
    }
    if (m.find("fusion") != m.end() && !m["fusion"].empty()) {
      fusion = make_shared<bool>(boost::any_cast<bool>(m["fusion"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["gmtCreate"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("queueName") != m.end() && !m["queueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["queueName"]));
    }
    if (m.find("releaseVersion") != m.end() && !m["releaseVersion"].empty()) {
      releaseVersion = make_shared<string>(boost::any_cast<string>(m["releaseVersion"]));
    }
    if (m.find("sessionClusterId") != m.end() && !m["sessionClusterId"].empty()) {
      sessionClusterId = make_shared<string>(boost::any_cast<string>(m["sessionClusterId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("stateChangeReason") != m.end() && !m["stateChangeReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["stateChangeReason"].type()) {
        ListSessionClustersResponseBodySessionClustersStateChangeReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["stateChangeReason"]));
        stateChangeReason = make_shared<ListSessionClustersResponseBodySessionClustersStateChangeReason>(model1);
      }
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
    if (m.find("webUI") != m.end() && !m["webUI"].empty()) {
      webUI = make_shared<string>(boost::any_cast<string>(m["webUI"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListSessionClustersResponseBodySessionClusters() = default;
};
class ListSessionClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSessionClustersResponseBodySessionClusters>> sessionClusters{};
  shared_ptr<long> totalCount{};

  ListSessionClustersResponseBody() {}

  explicit ListSessionClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionClusters) {
      vector<boost::any> temp1;
      for(auto item1:*sessionClusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sessionClusters"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionClusters") != m.end() && !m["sessionClusters"].empty()) {
      if (typeid(vector<boost::any>) == m["sessionClusters"].type()) {
        vector<ListSessionClustersResponseBodySessionClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sessionClusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSessionClustersResponseBodySessionClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sessionClusters = make_shared<vector<ListSessionClustersResponseBodySessionClusters>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListSessionClustersResponseBody() = default;
};
class ListSessionClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSessionClustersResponseBody> body{};

  ListSessionClustersResponse() {}

  explicit ListSessionClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSessionClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSessionClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListSessionClustersResponse() = default;
};
class ListWorkspaceQueuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> environment{};
  shared_ptr<string> regionId{};

  ListWorkspaceQueuesRequest() {}

  explicit ListWorkspaceQueuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environment) {
      res["environment"] = boost::any(*environment);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environment") != m.end() && !m["environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["environment"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~ListWorkspaceQueuesRequest() = default;
};
class ListWorkspaceQueuesResponseBodyQueuesAllowActions : public Darabonba::Model {
public:
  shared_ptr<string> actionArn{};
  shared_ptr<string> actionName{};
  shared_ptr<vector<string>> dependencies{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};

  ListWorkspaceQueuesResponseBodyQueuesAllowActions() {}

  explicit ListWorkspaceQueuesResponseBodyQueuesAllowActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionArn) {
      res["actionArn"] = boost::any(*actionArn);
    }
    if (actionName) {
      res["actionName"] = boost::any(*actionName);
    }
    if (dependencies) {
      res["dependencies"] = boost::any(*dependencies);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actionArn") != m.end() && !m["actionArn"].empty()) {
      actionArn = make_shared<string>(boost::any_cast<string>(m["actionArn"]));
    }
    if (m.find("actionName") != m.end() && !m["actionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["actionName"]));
    }
    if (m.find("dependencies") != m.end() && !m["dependencies"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dependencies"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dependencies"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dependencies = make_shared<vector<string>>(toVec1);
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
  }


  virtual ~ListWorkspaceQueuesResponseBodyQueuesAllowActions() = default;
};
class ListWorkspaceQueuesResponseBodyQueues : public Darabonba::Model {
public:
  shared_ptr<vector<ListWorkspaceQueuesResponseBodyQueuesAllowActions>> allowActions{};
  shared_ptr<string> creator{};
  shared_ptr<vector<string>> environments{};
  shared_ptr<string> maxResource{};
  shared_ptr<string> minResource{};
  shared_ptr<string> properties{};
  shared_ptr<string> queueName{};
  shared_ptr<string> queueScope{};
  shared_ptr<string> queueStatus{};
  shared_ptr<string> queueType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> usedResource{};
  shared_ptr<string> workspaceId{};

  ListWorkspaceQueuesResponseBodyQueues() {}

  explicit ListWorkspaceQueuesResponseBodyQueues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowActions) {
      vector<boost::any> temp1;
      for(auto item1:*allowActions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["allowActions"] = boost::any(temp1);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (environments) {
      res["environments"] = boost::any(*environments);
    }
    if (maxResource) {
      res["maxResource"] = boost::any(*maxResource);
    }
    if (minResource) {
      res["minResource"] = boost::any(*minResource);
    }
    if (properties) {
      res["properties"] = boost::any(*properties);
    }
    if (queueName) {
      res["queueName"] = boost::any(*queueName);
    }
    if (queueScope) {
      res["queueScope"] = boost::any(*queueScope);
    }
    if (queueStatus) {
      res["queueStatus"] = boost::any(*queueStatus);
    }
    if (queueType) {
      res["queueType"] = boost::any(*queueType);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (usedResource) {
      res["usedResource"] = boost::any(*usedResource);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowActions") != m.end() && !m["allowActions"].empty()) {
      if (typeid(vector<boost::any>) == m["allowActions"].type()) {
        vector<ListWorkspaceQueuesResponseBodyQueuesAllowActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["allowActions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspaceQueuesResponseBodyQueuesAllowActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        allowActions = make_shared<vector<ListWorkspaceQueuesResponseBodyQueuesAllowActions>>(expect1);
      }
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("environments") != m.end() && !m["environments"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["environments"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["environments"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      environments = make_shared<vector<string>>(toVec1);
    }
    if (m.find("maxResource") != m.end() && !m["maxResource"].empty()) {
      maxResource = make_shared<string>(boost::any_cast<string>(m["maxResource"]));
    }
    if (m.find("minResource") != m.end() && !m["minResource"].empty()) {
      minResource = make_shared<string>(boost::any_cast<string>(m["minResource"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["properties"]));
    }
    if (m.find("queueName") != m.end() && !m["queueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["queueName"]));
    }
    if (m.find("queueScope") != m.end() && !m["queueScope"].empty()) {
      queueScope = make_shared<string>(boost::any_cast<string>(m["queueScope"]));
    }
    if (m.find("queueStatus") != m.end() && !m["queueStatus"].empty()) {
      queueStatus = make_shared<string>(boost::any_cast<string>(m["queueStatus"]));
    }
    if (m.find("queueType") != m.end() && !m["queueType"].empty()) {
      queueType = make_shared<string>(boost::any_cast<string>(m["queueType"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("usedResource") != m.end() && !m["usedResource"].empty()) {
      usedResource = make_shared<string>(boost::any_cast<string>(m["usedResource"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListWorkspaceQueuesResponseBodyQueues() = default;
};
class ListWorkspaceQueuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListWorkspaceQueuesResponseBodyQueues>> queues{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListWorkspaceQueuesResponseBody() {}

  explicit ListWorkspaceQueuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (queues) {
      vector<boost::any> temp1;
      for(auto item1:*queues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queues"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("queues") != m.end() && !m["queues"].empty()) {
      if (typeid(vector<boost::any>) == m["queues"].type()) {
        vector<ListWorkspaceQueuesResponseBodyQueues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["queues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspaceQueuesResponseBodyQueues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queues = make_shared<vector<ListWorkspaceQueuesResponseBodyQueues>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListWorkspaceQueuesResponseBody() = default;
};
class ListWorkspaceQueuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkspaceQueuesResponseBody> body{};

  ListWorkspaceQueuesResponse() {}

  explicit ListWorkspaceQueuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListWorkspaceQueuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkspaceQueuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkspaceQueuesResponse() = default;
};
class ListWorkspacesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> state{};

  ListWorkspacesRequest() {}

  explicit ListWorkspacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~ListWorkspacesRequest() = default;
};
class ListWorkspacesResponseBodyWorkspacesStateChangeReason : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  ListWorkspacesResponseBodyWorkspacesStateChangeReason() {}

  explicit ListWorkspacesResponseBodyWorkspacesStateChangeReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~ListWorkspacesResponseBodyWorkspacesStateChangeReason() = default;
};
class ListWorkspacesResponseBodyWorkspaces : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<string> autoRenewPeriodUnit{};
  shared_ptr<long> createTime{};
  shared_ptr<string> dlfCatalogId{};
  shared_ptr<string> dlfType{};
  shared_ptr<long> duration{};
  shared_ptr<long> endTime{};
  shared_ptr<string> failReason{};
  shared_ptr<string> paymentDurationUnit{};
  shared_ptr<string> paymentStatus{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> releaseType{};
  shared_ptr<string> resourceSpec{};
  shared_ptr<ListWorkspacesResponseBodyWorkspacesStateChangeReason> stateChangeReason{};
  shared_ptr<string> storage{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};
  shared_ptr<string> workspaceStatus{};

  ListWorkspacesResponseBodyWorkspaces() {}

  explicit ListWorkspacesResponseBodyWorkspaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["autoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["autoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (autoRenewPeriodUnit) {
      res["autoRenewPeriodUnit"] = boost::any(*autoRenewPeriodUnit);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dlfCatalogId) {
      res["dlfCatalogId"] = boost::any(*dlfCatalogId);
    }
    if (dlfType) {
      res["dlfType"] = boost::any(*dlfType);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (failReason) {
      res["failReason"] = boost::any(*failReason);
    }
    if (paymentDurationUnit) {
      res["paymentDurationUnit"] = boost::any(*paymentDurationUnit);
    }
    if (paymentStatus) {
      res["paymentStatus"] = boost::any(*paymentStatus);
    }
    if (paymentType) {
      res["paymentType"] = boost::any(*paymentType);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (releaseType) {
      res["releaseType"] = boost::any(*releaseType);
    }
    if (resourceSpec) {
      res["resourceSpec"] = boost::any(*resourceSpec);
    }
    if (stateChangeReason) {
      res["stateChangeReason"] = stateChangeReason ? boost::any(stateChangeReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storage) {
      res["storage"] = boost::any(*storage);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["workspaceName"] = boost::any(*workspaceName);
    }
    if (workspaceStatus) {
      res["workspaceStatus"] = boost::any(*workspaceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoRenew") != m.end() && !m["autoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["autoRenew"]));
    }
    if (m.find("autoRenewPeriod") != m.end() && !m["autoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["autoRenewPeriod"]));
    }
    if (m.find("autoRenewPeriodUnit") != m.end() && !m["autoRenewPeriodUnit"].empty()) {
      autoRenewPeriodUnit = make_shared<string>(boost::any_cast<string>(m["autoRenewPeriodUnit"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("dlfCatalogId") != m.end() && !m["dlfCatalogId"].empty()) {
      dlfCatalogId = make_shared<string>(boost::any_cast<string>(m["dlfCatalogId"]));
    }
    if (m.find("dlfType") != m.end() && !m["dlfType"].empty()) {
      dlfType = make_shared<string>(boost::any_cast<string>(m["dlfType"]));
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("failReason") != m.end() && !m["failReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["failReason"]));
    }
    if (m.find("paymentDurationUnit") != m.end() && !m["paymentDurationUnit"].empty()) {
      paymentDurationUnit = make_shared<string>(boost::any_cast<string>(m["paymentDurationUnit"]));
    }
    if (m.find("paymentStatus") != m.end() && !m["paymentStatus"].empty()) {
      paymentStatus = make_shared<string>(boost::any_cast<string>(m["paymentStatus"]));
    }
    if (m.find("paymentType") != m.end() && !m["paymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["paymentType"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("releaseType") != m.end() && !m["releaseType"].empty()) {
      releaseType = make_shared<string>(boost::any_cast<string>(m["releaseType"]));
    }
    if (m.find("resourceSpec") != m.end() && !m["resourceSpec"].empty()) {
      resourceSpec = make_shared<string>(boost::any_cast<string>(m["resourceSpec"]));
    }
    if (m.find("stateChangeReason") != m.end() && !m["stateChangeReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["stateChangeReason"].type()) {
        ListWorkspacesResponseBodyWorkspacesStateChangeReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["stateChangeReason"]));
        stateChangeReason = make_shared<ListWorkspacesResponseBodyWorkspacesStateChangeReason>(model1);
      }
    }
    if (m.find("storage") != m.end() && !m["storage"].empty()) {
      storage = make_shared<string>(boost::any_cast<string>(m["storage"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
    if (m.find("workspaceName") != m.end() && !m["workspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["workspaceName"]));
    }
    if (m.find("workspaceStatus") != m.end() && !m["workspaceStatus"].empty()) {
      workspaceStatus = make_shared<string>(boost::any_cast<string>(m["workspaceStatus"]));
    }
  }


  virtual ~ListWorkspacesResponseBodyWorkspaces() = default;
};
class ListWorkspacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListWorkspacesResponseBodyWorkspaces>> workspaces{};

  ListWorkspacesResponseBody() {}

  explicit ListWorkspacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (workspaces) {
      vector<boost::any> temp1;
      for(auto item1:*workspaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workspaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("workspaces") != m.end() && !m["workspaces"].empty()) {
      if (typeid(vector<boost::any>) == m["workspaces"].type()) {
        vector<ListWorkspacesResponseBodyWorkspaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workspaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspacesResponseBodyWorkspaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workspaces = make_shared<vector<ListWorkspacesResponseBodyWorkspaces>>(expect1);
      }
    }
  }


  virtual ~ListWorkspacesResponseBody() = default;
};
class ListWorkspacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkspacesResponseBody> body{};

  ListWorkspacesResponse() {}

  explicit ListWorkspacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListWorkspacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkspacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkspacesResponse() = default;
};
class StartJobRunRequestConfigurationOverridesConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> configFileName{};
  shared_ptr<string> configItemKey{};
  shared_ptr<string> configItemValue{};

  StartJobRunRequestConfigurationOverridesConfigurations() {}

  explicit StartJobRunRequestConfigurationOverridesConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configFileName) {
      res["configFileName"] = boost::any(*configFileName);
    }
    if (configItemKey) {
      res["configItemKey"] = boost::any(*configItemKey);
    }
    if (configItemValue) {
      res["configItemValue"] = boost::any(*configItemValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configFileName") != m.end() && !m["configFileName"].empty()) {
      configFileName = make_shared<string>(boost::any_cast<string>(m["configFileName"]));
    }
    if (m.find("configItemKey") != m.end() && !m["configItemKey"].empty()) {
      configItemKey = make_shared<string>(boost::any_cast<string>(m["configItemKey"]));
    }
    if (m.find("configItemValue") != m.end() && !m["configItemValue"].empty()) {
      configItemValue = make_shared<string>(boost::any_cast<string>(m["configItemValue"]));
    }
  }


  virtual ~StartJobRunRequestConfigurationOverridesConfigurations() = default;
};
class StartJobRunRequestConfigurationOverrides : public Darabonba::Model {
public:
  shared_ptr<vector<StartJobRunRequestConfigurationOverridesConfigurations>> configurations{};

  StartJobRunRequestConfigurationOverrides() {}

  explicit StartJobRunRequestConfigurationOverrides(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configurations) {
      vector<boost::any> temp1;
      for(auto item1:*configurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["configurations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configurations") != m.end() && !m["configurations"].empty()) {
      if (typeid(vector<boost::any>) == m["configurations"].type()) {
        vector<StartJobRunRequestConfigurationOverridesConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["configurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartJobRunRequestConfigurationOverridesConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configurations = make_shared<vector<StartJobRunRequestConfigurationOverridesConfigurations>>(expect1);
      }
    }
  }


  virtual ~StartJobRunRequestConfigurationOverrides() = default;
};
class StartJobRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> codeType{};
  shared_ptr<StartJobRunRequestConfigurationOverrides> configurationOverrides{};
  shared_ptr<string> displayReleaseVersion{};
  shared_ptr<long> executionTimeoutSeconds{};
  shared_ptr<bool> fusion{};
  shared_ptr<JobDriver> jobDriver{};
  shared_ptr<string> jobId{};
  shared_ptr<string> name{};
  shared_ptr<string> releaseVersion{};
  shared_ptr<string> resourceQueueId{};
  shared_ptr<vector<Tag>> tags{};
  shared_ptr<string> regionId{};

  StartJobRunRequest() {}

  explicit StartJobRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    if (codeType) {
      res["codeType"] = boost::any(*codeType);
    }
    if (configurationOverrides) {
      res["configurationOverrides"] = configurationOverrides ? boost::any(configurationOverrides->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayReleaseVersion) {
      res["displayReleaseVersion"] = boost::any(*displayReleaseVersion);
    }
    if (executionTimeoutSeconds) {
      res["executionTimeoutSeconds"] = boost::any(*executionTimeoutSeconds);
    }
    if (fusion) {
      res["fusion"] = boost::any(*fusion);
    }
    if (jobDriver) {
      res["jobDriver"] = jobDriver ? boost::any(jobDriver->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (releaseVersion) {
      res["releaseVersion"] = boost::any(*releaseVersion);
    }
    if (resourceQueueId) {
      res["resourceQueueId"] = boost::any(*resourceQueueId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
    if (m.find("codeType") != m.end() && !m["codeType"].empty()) {
      codeType = make_shared<string>(boost::any_cast<string>(m["codeType"]));
    }
    if (m.find("configurationOverrides") != m.end() && !m["configurationOverrides"].empty()) {
      if (typeid(map<string, boost::any>) == m["configurationOverrides"].type()) {
        StartJobRunRequestConfigurationOverrides model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configurationOverrides"]));
        configurationOverrides = make_shared<StartJobRunRequestConfigurationOverrides>(model1);
      }
    }
    if (m.find("displayReleaseVersion") != m.end() && !m["displayReleaseVersion"].empty()) {
      displayReleaseVersion = make_shared<string>(boost::any_cast<string>(m["displayReleaseVersion"]));
    }
    if (m.find("executionTimeoutSeconds") != m.end() && !m["executionTimeoutSeconds"].empty()) {
      executionTimeoutSeconds = make_shared<long>(boost::any_cast<long>(m["executionTimeoutSeconds"]));
    }
    if (m.find("fusion") != m.end() && !m["fusion"].empty()) {
      fusion = make_shared<bool>(boost::any_cast<bool>(m["fusion"]));
    }
    if (m.find("jobDriver") != m.end() && !m["jobDriver"].empty()) {
      if (typeid(map<string, boost::any>) == m["jobDriver"].type()) {
        JobDriver model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jobDriver"]));
        jobDriver = make_shared<JobDriver>(model1);
      }
    }
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("releaseVersion") != m.end() && !m["releaseVersion"].empty()) {
      releaseVersion = make_shared<string>(boost::any_cast<string>(m["releaseVersion"]));
    }
    if (m.find("resourceQueueId") != m.end() && !m["resourceQueueId"].empty()) {
      resourceQueueId = make_shared<string>(boost::any_cast<string>(m["resourceQueueId"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~StartJobRunRequest() = default;
};
class StartJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobRunId{};
  shared_ptr<string> requestId{};

  StartJobRunResponseBody() {}

  explicit StartJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobRunId) {
      res["jobRunId"] = boost::any(*jobRunId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobRunId") != m.end() && !m["jobRunId"].empty()) {
      jobRunId = make_shared<string>(boost::any_cast<string>(m["jobRunId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~StartJobRunResponseBody() = default;
};
class StartJobRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartJobRunResponseBody> body{};

  StartJobRunResponse() {}

  explicit StartJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartJobRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartJobRunResponseBody>(model1);
      }
    }
  }


  virtual ~StartJobRunResponse() = default;
};
class StartSessionClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> queueName{};
  shared_ptr<string> sessionClusterId{};
  shared_ptr<string> regionId{};

  StartSessionClusterRequest() {}

  explicit StartSessionClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queueName) {
      res["queueName"] = boost::any(*queueName);
    }
    if (sessionClusterId) {
      res["sessionClusterId"] = boost::any(*sessionClusterId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("queueName") != m.end() && !m["queueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["queueName"]));
    }
    if (m.find("sessionClusterId") != m.end() && !m["sessionClusterId"].empty()) {
      sessionClusterId = make_shared<string>(boost::any_cast<string>(m["sessionClusterId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~StartSessionClusterRequest() = default;
};
class StartSessionClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionClusterId{};

  StartSessionClusterResponseBody() {}

  explicit StartSessionClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionClusterId) {
      res["sessionClusterId"] = boost::any(*sessionClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionClusterId") != m.end() && !m["sessionClusterId"].empty()) {
      sessionClusterId = make_shared<string>(boost::any_cast<string>(m["sessionClusterId"]));
    }
  }


  virtual ~StartSessionClusterResponseBody() = default;
};
class StartSessionClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartSessionClusterResponseBody> body{};

  StartSessionClusterResponse() {}

  explicit StartSessionClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartSessionClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartSessionClusterResponseBody>(model1);
      }
    }
  }


  virtual ~StartSessionClusterResponse() = default;
};
class StopSessionClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> queueName{};
  shared_ptr<string> sessionClusterId{};
  shared_ptr<string> regionId{};

  StopSessionClusterRequest() {}

  explicit StopSessionClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queueName) {
      res["queueName"] = boost::any(*queueName);
    }
    if (sessionClusterId) {
      res["sessionClusterId"] = boost::any(*sessionClusterId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("queueName") != m.end() && !m["queueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["queueName"]));
    }
    if (m.find("sessionClusterId") != m.end() && !m["sessionClusterId"].empty()) {
      sessionClusterId = make_shared<string>(boost::any_cast<string>(m["sessionClusterId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~StopSessionClusterRequest() = default;
};
class StopSessionClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionClusterId{};

  StopSessionClusterResponseBody() {}

  explicit StopSessionClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionClusterId) {
      res["sessionClusterId"] = boost::any(*sessionClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionClusterId") != m.end() && !m["sessionClusterId"].empty()) {
      sessionClusterId = make_shared<string>(boost::any_cast<string>(m["sessionClusterId"]));
    }
  }


  virtual ~StopSessionClusterResponseBody() = default;
};
class StopSessionClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopSessionClusterResponseBody> body{};

  StopSessionClusterResponse() {}

  explicit StopSessionClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopSessionClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopSessionClusterResponseBody>(model1);
      }
    }
  }


  virtual ~StopSessionClusterResponse() = default;
};
class TerminateSqlStatementRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  TerminateSqlStatementRequest() {}

  explicit TerminateSqlStatementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~TerminateSqlStatementRequest() = default;
};
class TerminateSqlStatementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TerminateSqlStatementResponseBody() {}

  explicit TerminateSqlStatementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~TerminateSqlStatementResponseBody() = default;
};
class TerminateSqlStatementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TerminateSqlStatementResponseBody> body{};

  TerminateSqlStatementResponse() {}

  explicit TerminateSqlStatementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TerminateSqlStatementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TerminateSqlStatementResponseBody>(model1);
      }
    }
  }


  virtual ~TerminateSqlStatementResponse() = default;
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
  AddMembersResponse addMembersWithOptions(shared_ptr<AddMembersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddMembersResponse addMembers(shared_ptr<AddMembersRequest> request);
  CancelJobRunResponse cancelJobRunWithOptions(shared_ptr<string> workspaceId,
                                               shared_ptr<string> jobRunId,
                                               shared_ptr<CancelJobRunRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelJobRunResponse cancelJobRun(shared_ptr<string> workspaceId, shared_ptr<string> jobRunId, shared_ptr<CancelJobRunRequest> request);
  CreateSqlStatementResponse createSqlStatementWithOptions(shared_ptr<string> workspaceId,
                                                           shared_ptr<CreateSqlStatementRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSqlStatementResponse createSqlStatement(shared_ptr<string> workspaceId, shared_ptr<CreateSqlStatementRequest> request);
  GetJobRunResponse getJobRunWithOptions(shared_ptr<string> workspaceId,
                                         shared_ptr<string> jobRunId,
                                         shared_ptr<GetJobRunRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobRunResponse getJobRun(shared_ptr<string> workspaceId, shared_ptr<string> jobRunId, shared_ptr<GetJobRunRequest> request);
  GetSessionClusterResponse getSessionClusterWithOptions(shared_ptr<string> workspaceId,
                                                         shared_ptr<string> sessionClusterId,
                                                         shared_ptr<GetSessionClusterRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSessionClusterResponse getSessionCluster(shared_ptr<string> workspaceId, shared_ptr<string> sessionClusterId, shared_ptr<GetSessionClusterRequest> request);
  GetSqlStatementResponse getSqlStatementWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<string> statementId,
                                                     shared_ptr<GetSqlStatementRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSqlStatementResponse getSqlStatement(shared_ptr<string> workspaceId, shared_ptr<string> statementId, shared_ptr<GetSqlStatementRequest> request);
  GetTemplateResponse getTemplateWithOptions(shared_ptr<string> workspaceBizId,
                                             shared_ptr<GetTemplateRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateResponse getTemplate(shared_ptr<string> workspaceBizId, shared_ptr<GetTemplateRequest> request);
  GrantRoleToUsersResponse grantRoleToUsersWithOptions(shared_ptr<GrantRoleToUsersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantRoleToUsersResponse grantRoleToUsers(shared_ptr<GrantRoleToUsersRequest> request);
  ListJobRunsResponse listJobRunsWithOptions(shared_ptr<string> workspaceId,
                                             shared_ptr<ListJobRunsRequest> tmpReq,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobRunsResponse listJobRuns(shared_ptr<string> workspaceId, shared_ptr<ListJobRunsRequest> request);
  ListLogContentsResponse listLogContentsWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<ListLogContentsRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLogContentsResponse listLogContents(shared_ptr<string> workspaceId, shared_ptr<ListLogContentsRequest> request);
  ListReleaseVersionsResponse listReleaseVersionsWithOptions(shared_ptr<ListReleaseVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListReleaseVersionsResponse listReleaseVersions(shared_ptr<ListReleaseVersionsRequest> request);
  ListSessionClustersResponse listSessionClustersWithOptions(shared_ptr<string> workspaceId,
                                                             shared_ptr<ListSessionClustersRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSessionClustersResponse listSessionClusters(shared_ptr<string> workspaceId, shared_ptr<ListSessionClustersRequest> request);
  ListWorkspaceQueuesResponse listWorkspaceQueuesWithOptions(shared_ptr<string> workspaceId,
                                                             shared_ptr<ListWorkspaceQueuesRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspaceQueuesResponse listWorkspaceQueues(shared_ptr<string> workspaceId, shared_ptr<ListWorkspaceQueuesRequest> request);
  ListWorkspacesResponse listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspacesResponse listWorkspaces(shared_ptr<ListWorkspacesRequest> request);
  StartJobRunResponse startJobRunWithOptions(shared_ptr<string> workspaceId,
                                             shared_ptr<StartJobRunRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartJobRunResponse startJobRun(shared_ptr<string> workspaceId, shared_ptr<StartJobRunRequest> request);
  StartSessionClusterResponse startSessionClusterWithOptions(shared_ptr<string> workspaceId,
                                                             shared_ptr<StartSessionClusterRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartSessionClusterResponse startSessionCluster(shared_ptr<string> workspaceId, shared_ptr<StartSessionClusterRequest> request);
  StopSessionClusterResponse stopSessionClusterWithOptions(shared_ptr<string> workspaceId,
                                                           shared_ptr<StopSessionClusterRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopSessionClusterResponse stopSessionCluster(shared_ptr<string> workspaceId, shared_ptr<StopSessionClusterRequest> request);
  TerminateSqlStatementResponse terminateSqlStatementWithOptions(shared_ptr<string> workspaceId,
                                                                 shared_ptr<string> statementId,
                                                                 shared_ptr<TerminateSqlStatementRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TerminateSqlStatementResponse terminateSqlStatement(shared_ptr<string> workspaceId, shared_ptr<string> statementId, shared_ptr<TerminateSqlStatementRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Emr-serverless-spark20230808

#endif
