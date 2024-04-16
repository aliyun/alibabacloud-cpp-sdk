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
  shared_ptr<long> creator{};
  shared_ptr<Credential> credential{};
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
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (credential) {
      res["credential"] = credential ? boost::any(credential->toMap()) : boost::any(map<string,boost::any>({}));
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
  shared_ptr<string> driverStdError{};
  shared_ptr<string> driverStdOut{};

  RunLog() {}

  explicit RunLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (driverStdError) {
      res["driverStdError"] = boost::any(*driverStdError);
    }
    if (driverStdOut) {
      res["driverStdOut"] = boost::any(*driverStdOut);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("driverStdError") != m.end() && !m["driverStdError"].empty()) {
      driverStdError = make_shared<string>(boost::any_cast<string>(m["driverStdError"]));
    }
    if (m.find("driverStdOut") != m.end() && !m["driverStdOut"].empty()) {
      driverStdOut = make_shared<string>(boost::any_cast<string>(m["driverStdOut"]));
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
class Task : public Darabonba::Model {
public:
  shared_ptr<string> artifactUrl{};
  shared_ptr<string> bizId{};
  shared_ptr<string> categoryBizId{};
  shared_ptr<string> content{};
  shared_ptr<long> creator{};
  shared_ptr<string> defaultCatalogId{};
  shared_ptr<string> defaultDatabase{};
  shared_ptr<string> defaultResourceQueueId{};
  shared_ptr<string> defaultSqlComputeId{};
  shared_ptr<vector<string>> extraArtifactIds{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> hasChanged{};
  shared_ptr<bool> hasCommited{};
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
  shared_ptr<string> sparkVersion{};
  shared_ptr<map<string, string>> tags{};
  shared_ptr<string> type{};

  Task() {}

  explicit Task(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (extraArtifactIds) {
      res["extraArtifactIds"] = boost::any(*extraArtifactIds);
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
    if (sparkVersion) {
      res["sparkVersion"] = boost::any(*sparkVersion);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<long> endTime{};
  shared_ptr<long> executionTimeoutSeconds{};
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
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (executionTimeoutSeconds) {
      res["executionTimeoutSeconds"] = boost::any(*executionTimeoutSeconds);
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
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("executionTimeoutSeconds") != m.end() && !m["executionTimeoutSeconds"].empty()) {
      executionTimeoutSeconds = make_shared<long>(boost::any_cast<long>(m["executionTimeoutSeconds"]));
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
  shared_ptr<long> endTime{};
  shared_ptr<long> executionTimeoutSeconds{};
  shared_ptr<JobDriver> jobDriver{};
  shared_ptr<string> jobRunId{};
  shared_ptr<RunLog> log{};
  shared_ptr<string> name{};
  shared_ptr<string> releaseVersion{};
  shared_ptr<string> state{};
  shared_ptr<ListJobRunsResponseBodyJobRunsStateChangeReason> stateChangeReason{};
  shared_ptr<long> submitTime{};
  shared_ptr<vector<Tag>> tags{};
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
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (executionTimeoutSeconds) {
      res["executionTimeoutSeconds"] = boost::any(*executionTimeoutSeconds);
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
        ListJobRunsResponseBodyJobRunsConfigurationOverrides model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configurationOverrides"]));
        configurationOverrides = make_shared<ListJobRunsResponseBodyJobRunsConfigurationOverrides>(model1);
      }
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("executionTimeoutSeconds") != m.end() && !m["executionTimeoutSeconds"].empty()) {
      executionTimeoutSeconds = make_shared<long>(boost::any_cast<long>(m["executionTimeoutSeconds"]));
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
  shared_ptr<long> executionTimeoutSeconds{};
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
    if (executionTimeoutSeconds) {
      res["executionTimeoutSeconds"] = boost::any(*executionTimeoutSeconds);
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
    if (m.find("executionTimeoutSeconds") != m.end() && !m["executionTimeoutSeconds"].empty()) {
      executionTimeoutSeconds = make_shared<long>(boost::any_cast<long>(m["executionTimeoutSeconds"]));
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
  CancelJobRunResponse cancelJobRunWithOptions(shared_ptr<string> workspaceId,
                                               shared_ptr<string> jobRunId,
                                               shared_ptr<CancelJobRunRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelJobRunResponse cancelJobRun(shared_ptr<string> workspaceId, shared_ptr<string> jobRunId, shared_ptr<CancelJobRunRequest> request);
  GetJobRunResponse getJobRunWithOptions(shared_ptr<string> workspaceId,
                                         shared_ptr<string> jobRunId,
                                         shared_ptr<GetJobRunRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobRunResponse getJobRun(shared_ptr<string> workspaceId, shared_ptr<string> jobRunId, shared_ptr<GetJobRunRequest> request);
  ListJobRunsResponse listJobRunsWithOptions(shared_ptr<string> workspaceId,
                                             shared_ptr<ListJobRunsRequest> tmpReq,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobRunsResponse listJobRuns(shared_ptr<string> workspaceId, shared_ptr<ListJobRunsRequest> request);
  StartJobRunResponse startJobRunWithOptions(shared_ptr<string> workspaceId,
                                             shared_ptr<StartJobRunRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartJobRunResponse startJobRun(shared_ptr<string> workspaceId, shared_ptr<StartJobRunRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Emr-serverless-spark20230808

#endif
