// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DTS20160801_H_
#define ALIBABACLOUD_DTS20160801_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dts20160801 {
class ConfigurationSynchronizationJobRequestDestinationEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> instanceID{};
  shared_ptr<string> instanceType{};

  ConfigurationSynchronizationJobRequestDestinationEndpoint() {}

  explicit ConfigurationSynchronizationJobRequestDestinationEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~ConfigurationSynchronizationJobRequestDestinationEndpoint() = default;
};
class ConfigurationSynchronizationJobRequestInitialization : public Darabonba::Model {
public:
  shared_ptr<bool> dataLoad{};
  shared_ptr<bool> structureLoad{};

  ConfigurationSynchronizationJobRequestInitialization() {}

  explicit ConfigurationSynchronizationJobRequestInitialization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataLoad) {
      res["DataLoad"] = boost::any(*dataLoad);
    }
    if (structureLoad) {
      res["StructureLoad"] = boost::any(*structureLoad);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataLoad") != m.end() && !m["DataLoad"].empty()) {
      dataLoad = make_shared<bool>(boost::any_cast<bool>(m["DataLoad"]));
    }
    if (m.find("StructureLoad") != m.end() && !m["StructureLoad"].empty()) {
      structureLoad = make_shared<bool>(boost::any_cast<bool>(m["StructureLoad"]));
    }
  }


  virtual ~ConfigurationSynchronizationJobRequestInitialization() = default;
};
class ConfigurationSynchronizationJobRequestSourceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> instanceID{};
  shared_ptr<string> instanceType{};

  ConfigurationSynchronizationJobRequestSourceEndpoint() {}

  explicit ConfigurationSynchronizationJobRequestSourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~ConfigurationSynchronizationJobRequestSourceEndpoint() = default;
};
class ConfigurationSynchronizationJobRequest : public Darabonba::Model {
public:
  shared_ptr<ConfigurationSynchronizationJobRequestDestinationEndpoint> destinationEndpoint{};
  shared_ptr<ConfigurationSynchronizationJobRequestInitialization> initialization{};
  shared_ptr<ConfigurationSynchronizationJobRequestSourceEndpoint> sourceEndpoint{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationJobId{};
  shared_ptr<string> synchronizationJobName{};
  shared_ptr<string> synchronizationObject{};

  ConfigurationSynchronizationJobRequest() {}

  explicit ConfigurationSynchronizationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationEndpoint) {
      res["DestinationEndpoint"] = destinationEndpoint ? boost::any(destinationEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (initialization) {
      res["Initialization"] = initialization ? boost::any(initialization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceEndpoint) {
      res["SourceEndpoint"] = sourceEndpoint ? boost::any(sourceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    if (synchronizationJobName) {
      res["SynchronizationJobName"] = boost::any(*synchronizationJobName);
    }
    if (synchronizationObject) {
      res["SynchronizationObject"] = boost::any(*synchronizationObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationEndpoint") != m.end() && !m["DestinationEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationEndpoint"].type()) {
        ConfigurationSynchronizationJobRequestDestinationEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationEndpoint"]));
        destinationEndpoint = make_shared<ConfigurationSynchronizationJobRequestDestinationEndpoint>(model1);
      }
    }
    if (m.find("Initialization") != m.end() && !m["Initialization"].empty()) {
      if (typeid(map<string, boost::any>) == m["Initialization"].type()) {
        ConfigurationSynchronizationJobRequestInitialization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Initialization"]));
        initialization = make_shared<ConfigurationSynchronizationJobRequestInitialization>(model1);
      }
    }
    if (m.find("SourceEndpoint") != m.end() && !m["SourceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceEndpoint"].type()) {
        ConfigurationSynchronizationJobRequestSourceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceEndpoint"]));
        sourceEndpoint = make_shared<ConfigurationSynchronizationJobRequestSourceEndpoint>(model1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
    if (m.find("SynchronizationJobName") != m.end() && !m["SynchronizationJobName"].empty()) {
      synchronizationJobName = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobName"]));
    }
    if (m.find("SynchronizationObject") != m.end() && !m["SynchronizationObject"].empty()) {
      synchronizationObject = make_shared<string>(boost::any_cast<string>(m["SynchronizationObject"]));
    }
  }


  virtual ~ConfigurationSynchronizationJobRequest() = default;
};
class ConfigurationSynchronizationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ConfigurationSynchronizationJobResponseBody() {}

  explicit ConfigurationSynchronizationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ConfigurationSynchronizationJobResponseBody() = default;
};
class ConfigurationSynchronizationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigurationSynchronizationJobResponseBody> body{};

  ConfigurationSynchronizationJobResponse() {}

  explicit ConfigurationSynchronizationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigurationSynchronizationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigurationSynchronizationJobResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigurationSynchronizationJobResponse() = default;
};
class ConfigureMigrationJobRequestDestinationEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> dataBaseName{};
  shared_ptr<string> engineName{};
  shared_ptr<string> IP{};
  shared_ptr<string> instanceID{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> password{};
  shared_ptr<string> port{};
  shared_ptr<string> region{};
  shared_ptr<string> userName{};

  ConfigureMigrationJobRequestDestinationEndpoint() {}

  explicit ConfigureMigrationJobRequestDestinationEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataBaseName) {
      res["DataBaseName"] = boost::any(*dataBaseName);
    }
    if (engineName) {
      res["EngineName"] = boost::any(*engineName);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataBaseName") != m.end() && !m["DataBaseName"].empty()) {
      dataBaseName = make_shared<string>(boost::any_cast<string>(m["DataBaseName"]));
    }
    if (m.find("EngineName") != m.end() && !m["EngineName"].empty()) {
      engineName = make_shared<string>(boost::any_cast<string>(m["EngineName"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ConfigureMigrationJobRequestDestinationEndpoint() = default;
};
class ConfigureMigrationJobRequestMigrationMode : public Darabonba::Model {
public:
  shared_ptr<bool> dataIntialization{};
  shared_ptr<bool> dataSynchronization{};
  shared_ptr<bool> structureIntialization{};

  ConfigureMigrationJobRequestMigrationMode() {}

  explicit ConfigureMigrationJobRequestMigrationMode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataIntialization) {
      res["DataIntialization"] = boost::any(*dataIntialization);
    }
    if (dataSynchronization) {
      res["DataSynchronization"] = boost::any(*dataSynchronization);
    }
    if (structureIntialization) {
      res["StructureIntialization"] = boost::any(*structureIntialization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataIntialization") != m.end() && !m["DataIntialization"].empty()) {
      dataIntialization = make_shared<bool>(boost::any_cast<bool>(m["DataIntialization"]));
    }
    if (m.find("DataSynchronization") != m.end() && !m["DataSynchronization"].empty()) {
      dataSynchronization = make_shared<bool>(boost::any_cast<bool>(m["DataSynchronization"]));
    }
    if (m.find("StructureIntialization") != m.end() && !m["StructureIntialization"].empty()) {
      structureIntialization = make_shared<bool>(boost::any_cast<bool>(m["StructureIntialization"]));
    }
  }


  virtual ~ConfigureMigrationJobRequestMigrationMode() = default;
};
class ConfigureMigrationJobRequestSourceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<string> engineName{};
  shared_ptr<string> IP{};
  shared_ptr<string> instanceID{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> oracleSID{};
  shared_ptr<string> ownerID{};
  shared_ptr<string> password{};
  shared_ptr<string> port{};
  shared_ptr<string> region{};
  shared_ptr<string> role{};
  shared_ptr<string> userName{};

  ConfigureMigrationJobRequestSourceEndpoint() {}

  explicit ConfigureMigrationJobRequestSourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (engineName) {
      res["EngineName"] = boost::any(*engineName);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (oracleSID) {
      res["OracleSID"] = boost::any(*oracleSID);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("EngineName") != m.end() && !m["EngineName"].empty()) {
      engineName = make_shared<string>(boost::any_cast<string>(m["EngineName"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OracleSID") != m.end() && !m["OracleSID"].empty()) {
      oracleSID = make_shared<string>(boost::any_cast<string>(m["OracleSID"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<string>(boost::any_cast<string>(m["OwnerID"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ConfigureMigrationJobRequestSourceEndpoint() = default;
};
class ConfigureMigrationJobRequest : public Darabonba::Model {
public:
  shared_ptr<ConfigureMigrationJobRequestDestinationEndpoint> destinationEndpoint{};
  shared_ptr<ConfigureMigrationJobRequestMigrationMode> migrationMode{};
  shared_ptr<ConfigureMigrationJobRequestSourceEndpoint> sourceEndpoint{};
  shared_ptr<string> checkpoint{};
  shared_ptr<string> migrationJobId{};
  shared_ptr<string> migrationJobName{};
  shared_ptr<string> migrationObject{};
  shared_ptr<string> migrationReserved{};
  shared_ptr<string> ownerId{};

  ConfigureMigrationJobRequest() {}

  explicit ConfigureMigrationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationEndpoint) {
      res["DestinationEndpoint"] = destinationEndpoint ? boost::any(destinationEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (migrationMode) {
      res["MigrationMode"] = migrationMode ? boost::any(migrationMode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceEndpoint) {
      res["SourceEndpoint"] = sourceEndpoint ? boost::any(sourceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkpoint) {
      res["Checkpoint"] = boost::any(*checkpoint);
    }
    if (migrationJobId) {
      res["MigrationJobId"] = boost::any(*migrationJobId);
    }
    if (migrationJobName) {
      res["MigrationJobName"] = boost::any(*migrationJobName);
    }
    if (migrationObject) {
      res["MigrationObject"] = boost::any(*migrationObject);
    }
    if (migrationReserved) {
      res["MigrationReserved"] = boost::any(*migrationReserved);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationEndpoint") != m.end() && !m["DestinationEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationEndpoint"].type()) {
        ConfigureMigrationJobRequestDestinationEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationEndpoint"]));
        destinationEndpoint = make_shared<ConfigureMigrationJobRequestDestinationEndpoint>(model1);
      }
    }
    if (m.find("MigrationMode") != m.end() && !m["MigrationMode"].empty()) {
      if (typeid(map<string, boost::any>) == m["MigrationMode"].type()) {
        ConfigureMigrationJobRequestMigrationMode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MigrationMode"]));
        migrationMode = make_shared<ConfigureMigrationJobRequestMigrationMode>(model1);
      }
    }
    if (m.find("SourceEndpoint") != m.end() && !m["SourceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceEndpoint"].type()) {
        ConfigureMigrationJobRequestSourceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceEndpoint"]));
        sourceEndpoint = make_shared<ConfigureMigrationJobRequestSourceEndpoint>(model1);
      }
    }
    if (m.find("Checkpoint") != m.end() && !m["Checkpoint"].empty()) {
      checkpoint = make_shared<string>(boost::any_cast<string>(m["Checkpoint"]));
    }
    if (m.find("MigrationJobId") != m.end() && !m["MigrationJobId"].empty()) {
      migrationJobId = make_shared<string>(boost::any_cast<string>(m["MigrationJobId"]));
    }
    if (m.find("MigrationJobName") != m.end() && !m["MigrationJobName"].empty()) {
      migrationJobName = make_shared<string>(boost::any_cast<string>(m["MigrationJobName"]));
    }
    if (m.find("MigrationObject") != m.end() && !m["MigrationObject"].empty()) {
      migrationObject = make_shared<string>(boost::any_cast<string>(m["MigrationObject"]));
    }
    if (m.find("MigrationReserved") != m.end() && !m["MigrationReserved"].empty()) {
      migrationReserved = make_shared<string>(boost::any_cast<string>(m["MigrationReserved"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~ConfigureMigrationJobRequest() = default;
};
class ConfigureMigrationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ConfigureMigrationJobResponseBody() {}

  explicit ConfigureMigrationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ConfigureMigrationJobResponseBody() = default;
};
class ConfigureMigrationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigureMigrationJobResponseBody> body{};

  ConfigureMigrationJobResponse() {}

  explicit ConfigureMigrationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigureMigrationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigureMigrationJobResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigureMigrationJobResponse() = default;
};
class ConfigureSubscriptionInstanceRequestSourceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> instanceID{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> ownerID{};
  shared_ptr<string> role{};

  ConfigureSubscriptionInstanceRequestSourceEndpoint() {}

  explicit ConfigureSubscriptionInstanceRequestSourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<string>(boost::any_cast<string>(m["OwnerID"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~ConfigureSubscriptionInstanceRequestSourceEndpoint() = default;
};
class ConfigureSubscriptionInstanceRequestSubscriptionDataType : public Darabonba::Model {
public:
  shared_ptr<bool> DDL{};
  shared_ptr<bool> DML{};

  ConfigureSubscriptionInstanceRequestSubscriptionDataType() {}

  explicit ConfigureSubscriptionInstanceRequestSubscriptionDataType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DDL) {
      res["DDL"] = boost::any(*DDL);
    }
    if (DML) {
      res["DML"] = boost::any(*DML);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DDL") != m.end() && !m["DDL"].empty()) {
      DDL = make_shared<bool>(boost::any_cast<bool>(m["DDL"]));
    }
    if (m.find("DML") != m.end() && !m["DML"].empty()) {
      DML = make_shared<bool>(boost::any_cast<bool>(m["DML"]));
    }
  }


  virtual ~ConfigureSubscriptionInstanceRequestSubscriptionDataType() = default;
};
class ConfigureSubscriptionInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<ConfigureSubscriptionInstanceRequestSourceEndpoint> sourceEndpoint{};
  shared_ptr<ConfigureSubscriptionInstanceRequestSubscriptionDataType> subscriptionDataType{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> subscriptionInstanceId{};
  shared_ptr<string> subscriptionInstanceName{};
  shared_ptr<string> subscriptionObject{};

  ConfigureSubscriptionInstanceRequest() {}

  explicit ConfigureSubscriptionInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceEndpoint) {
      res["SourceEndpoint"] = sourceEndpoint ? boost::any(sourceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subscriptionDataType) {
      res["SubscriptionDataType"] = subscriptionDataType ? boost::any(subscriptionDataType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (subscriptionInstanceId) {
      res["SubscriptionInstanceId"] = boost::any(*subscriptionInstanceId);
    }
    if (subscriptionInstanceName) {
      res["SubscriptionInstanceName"] = boost::any(*subscriptionInstanceName);
    }
    if (subscriptionObject) {
      res["SubscriptionObject"] = boost::any(*subscriptionObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceEndpoint") != m.end() && !m["SourceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceEndpoint"].type()) {
        ConfigureSubscriptionInstanceRequestSourceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceEndpoint"]));
        sourceEndpoint = make_shared<ConfigureSubscriptionInstanceRequestSourceEndpoint>(model1);
      }
    }
    if (m.find("SubscriptionDataType") != m.end() && !m["SubscriptionDataType"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionDataType"].type()) {
        ConfigureSubscriptionInstanceRequestSubscriptionDataType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionDataType"]));
        subscriptionDataType = make_shared<ConfigureSubscriptionInstanceRequestSubscriptionDataType>(model1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SubscriptionInstanceId") != m.end() && !m["SubscriptionInstanceId"].empty()) {
      subscriptionInstanceId = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceId"]));
    }
    if (m.find("SubscriptionInstanceName") != m.end() && !m["SubscriptionInstanceName"].empty()) {
      subscriptionInstanceName = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceName"]));
    }
    if (m.find("SubscriptionObject") != m.end() && !m["SubscriptionObject"].empty()) {
      subscriptionObject = make_shared<string>(boost::any_cast<string>(m["SubscriptionObject"]));
    }
  }


  virtual ~ConfigureSubscriptionInstanceRequest() = default;
};
class ConfigureSubscriptionInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ConfigureSubscriptionInstanceResponseBody() {}

  explicit ConfigureSubscriptionInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ConfigureSubscriptionInstanceResponseBody() = default;
};
class ConfigureSubscriptionInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigureSubscriptionInstanceResponseBody> body{};

  ConfigureSubscriptionInstanceResponse() {}

  explicit ConfigureSubscriptionInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigureSubscriptionInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigureSubscriptionInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigureSubscriptionInstanceResponse() = default;
};
class ConfigureSynchronizationJobRequestDestinationEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> IP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> password{};
  shared_ptr<string> port{};
  shared_ptr<string> userName{};

  ConfigureSynchronizationJobRequestDestinationEndpoint() {}

  explicit ConfigureSynchronizationJobRequestDestinationEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ConfigureSynchronizationJobRequestDestinationEndpoint() = default;
};
class ConfigureSynchronizationJobRequestPartitionKey : public Darabonba::Model {
public:
  shared_ptr<bool> modifyTimeDay{};
  shared_ptr<bool> modifyTimeHour{};
  shared_ptr<bool> modifyTimeMinute{};
  shared_ptr<bool> modifyTimeMonth{};
  shared_ptr<bool> modifyTimeYear{};

  ConfigureSynchronizationJobRequestPartitionKey() {}

  explicit ConfigureSynchronizationJobRequestPartitionKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modifyTimeDay) {
      res["ModifyTime_Day"] = boost::any(*modifyTimeDay);
    }
    if (modifyTimeHour) {
      res["ModifyTime_Hour"] = boost::any(*modifyTimeHour);
    }
    if (modifyTimeMinute) {
      res["ModifyTime_Minute"] = boost::any(*modifyTimeMinute);
    }
    if (modifyTimeMonth) {
      res["ModifyTime_Month"] = boost::any(*modifyTimeMonth);
    }
    if (modifyTimeYear) {
      res["ModifyTime_Year"] = boost::any(*modifyTimeYear);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModifyTime_Day") != m.end() && !m["ModifyTime_Day"].empty()) {
      modifyTimeDay = make_shared<bool>(boost::any_cast<bool>(m["ModifyTime_Day"]));
    }
    if (m.find("ModifyTime_Hour") != m.end() && !m["ModifyTime_Hour"].empty()) {
      modifyTimeHour = make_shared<bool>(boost::any_cast<bool>(m["ModifyTime_Hour"]));
    }
    if (m.find("ModifyTime_Minute") != m.end() && !m["ModifyTime_Minute"].empty()) {
      modifyTimeMinute = make_shared<bool>(boost::any_cast<bool>(m["ModifyTime_Minute"]));
    }
    if (m.find("ModifyTime_Month") != m.end() && !m["ModifyTime_Month"].empty()) {
      modifyTimeMonth = make_shared<bool>(boost::any_cast<bool>(m["ModifyTime_Month"]));
    }
    if (m.find("ModifyTime_Year") != m.end() && !m["ModifyTime_Year"].empty()) {
      modifyTimeYear = make_shared<bool>(boost::any_cast<bool>(m["ModifyTime_Year"]));
    }
  }


  virtual ~ConfigureSynchronizationJobRequestPartitionKey() = default;
};
class ConfigureSynchronizationJobRequestSourceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> IP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> ownerID{};
  shared_ptr<string> password{};
  shared_ptr<string> port{};
  shared_ptr<string> role{};
  shared_ptr<string> userName{};

  ConfigureSynchronizationJobRequestSourceEndpoint() {}

  explicit ConfigureSynchronizationJobRequestSourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (ownerID) {
      res["OwnerID"] = boost::any(*ownerID);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OwnerID") != m.end() && !m["OwnerID"].empty()) {
      ownerID = make_shared<string>(boost::any_cast<string>(m["OwnerID"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ConfigureSynchronizationJobRequestSourceEndpoint() = default;
};
class ConfigureSynchronizationJobRequest : public Darabonba::Model {
public:
  shared_ptr<ConfigureSynchronizationJobRequestDestinationEndpoint> destinationEndpoint{};
  shared_ptr<ConfigureSynchronizationJobRequestPartitionKey> partitionKey{};
  shared_ptr<ConfigureSynchronizationJobRequestSourceEndpoint> sourceEndpoint{};
  shared_ptr<string> checkpoint{};
  shared_ptr<bool> dataInitialization{};
  shared_ptr<string> migrationReserved{};
  shared_ptr<string> ownerId{};
  shared_ptr<bool> structureInitialization{};
  shared_ptr<string> synchronizationJobId{};
  shared_ptr<string> synchronizationJobName{};
  shared_ptr<string> synchronizationObjects{};

  ConfigureSynchronizationJobRequest() {}

  explicit ConfigureSynchronizationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationEndpoint) {
      res["DestinationEndpoint"] = destinationEndpoint ? boost::any(destinationEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (partitionKey) {
      res["PartitionKey"] = partitionKey ? boost::any(partitionKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceEndpoint) {
      res["SourceEndpoint"] = sourceEndpoint ? boost::any(sourceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkpoint) {
      res["Checkpoint"] = boost::any(*checkpoint);
    }
    if (dataInitialization) {
      res["DataInitialization"] = boost::any(*dataInitialization);
    }
    if (migrationReserved) {
      res["MigrationReserved"] = boost::any(*migrationReserved);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (structureInitialization) {
      res["StructureInitialization"] = boost::any(*structureInitialization);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    if (synchronizationJobName) {
      res["SynchronizationJobName"] = boost::any(*synchronizationJobName);
    }
    if (synchronizationObjects) {
      res["SynchronizationObjects"] = boost::any(*synchronizationObjects);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationEndpoint") != m.end() && !m["DestinationEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationEndpoint"].type()) {
        ConfigureSynchronizationJobRequestDestinationEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationEndpoint"]));
        destinationEndpoint = make_shared<ConfigureSynchronizationJobRequestDestinationEndpoint>(model1);
      }
    }
    if (m.find("PartitionKey") != m.end() && !m["PartitionKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["PartitionKey"].type()) {
        ConfigureSynchronizationJobRequestPartitionKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PartitionKey"]));
        partitionKey = make_shared<ConfigureSynchronizationJobRequestPartitionKey>(model1);
      }
    }
    if (m.find("SourceEndpoint") != m.end() && !m["SourceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceEndpoint"].type()) {
        ConfigureSynchronizationJobRequestSourceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceEndpoint"]));
        sourceEndpoint = make_shared<ConfigureSynchronizationJobRequestSourceEndpoint>(model1);
      }
    }
    if (m.find("Checkpoint") != m.end() && !m["Checkpoint"].empty()) {
      checkpoint = make_shared<string>(boost::any_cast<string>(m["Checkpoint"]));
    }
    if (m.find("DataInitialization") != m.end() && !m["DataInitialization"].empty()) {
      dataInitialization = make_shared<bool>(boost::any_cast<bool>(m["DataInitialization"]));
    }
    if (m.find("MigrationReserved") != m.end() && !m["MigrationReserved"].empty()) {
      migrationReserved = make_shared<string>(boost::any_cast<string>(m["MigrationReserved"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("StructureInitialization") != m.end() && !m["StructureInitialization"].empty()) {
      structureInitialization = make_shared<bool>(boost::any_cast<bool>(m["StructureInitialization"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
    if (m.find("SynchronizationJobName") != m.end() && !m["SynchronizationJobName"].empty()) {
      synchronizationJobName = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobName"]));
    }
    if (m.find("SynchronizationObjects") != m.end() && !m["SynchronizationObjects"].empty()) {
      synchronizationObjects = make_shared<string>(boost::any_cast<string>(m["SynchronizationObjects"]));
    }
  }


  virtual ~ConfigureSynchronizationJobRequest() = default;
};
class ConfigureSynchronizationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ConfigureSynchronizationJobResponseBody() {}

  explicit ConfigureSynchronizationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ConfigureSynchronizationJobResponseBody() = default;
};
class ConfigureSynchronizationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigureSynchronizationJobResponseBody> body{};

  ConfigureSynchronizationJobResponse() {}

  explicit ConfigureSynchronizationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigureSynchronizationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigureSynchronizationJobResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigureSynchronizationJobResponse() = default;
};
class CreateMigrationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> migrationJobClass{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> region{};

  CreateMigrationJobRequest() {}

  explicit CreateMigrationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (migrationJobClass) {
      res["MigrationJobClass"] = boost::any(*migrationJobClass);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("MigrationJobClass") != m.end() && !m["MigrationJobClass"].empty()) {
      migrationJobClass = make_shared<string>(boost::any_cast<string>(m["MigrationJobClass"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~CreateMigrationJobRequest() = default;
};
class CreateMigrationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> migrationJobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateMigrationJobResponseBody() {}

  explicit CreateMigrationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (migrationJobId) {
      res["MigrationJobId"] = boost::any(*migrationJobId);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("MigrationJobId") != m.end() && !m["MigrationJobId"].empty()) {
      migrationJobId = make_shared<string>(boost::any_cast<string>(m["MigrationJobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~CreateMigrationJobResponseBody() = default;
};
class CreateMigrationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMigrationJobResponseBody> body{};

  CreateMigrationJobResponse() {}

  explicit CreateMigrationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMigrationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMigrationJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMigrationJobResponse() = default;
};
class CreateSubscriptionInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> region{};
  shared_ptr<long> usedTime{};

  CreateSubscriptionInstanceRequest() {}

  explicit CreateSubscriptionInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
  }


  virtual ~CreateSubscriptionInstanceRequest() = default;
};
class CreateSubscriptionInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subscriptionInstanceId{};
  shared_ptr<string> success{};

  CreateSubscriptionInstanceResponseBody() {}

  explicit CreateSubscriptionInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subscriptionInstanceId) {
      res["SubscriptionInstanceId"] = boost::any(*subscriptionInstanceId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubscriptionInstanceId") != m.end() && !m["SubscriptionInstanceId"].empty()) {
      subscriptionInstanceId = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~CreateSubscriptionInstanceResponseBody() = default;
};
class CreateSubscriptionInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSubscriptionInstanceResponseBody> body{};

  CreateSubscriptionInstanceResponse() {}

  explicit CreateSubscriptionInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSubscriptionInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSubscriptionInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSubscriptionInstanceResponse() = default;
};
class CreateSynchronizationJobRequestDestinationEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};

  CreateSynchronizationJobRequestDestinationEndpoint() {}

  explicit CreateSynchronizationJobRequestDestinationEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~CreateSynchronizationJobRequestDestinationEndpoint() = default;
};
class CreateSynchronizationJobRequestSourceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};

  CreateSynchronizationJobRequestSourceEndpoint() {}

  explicit CreateSynchronizationJobRequestSourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~CreateSynchronizationJobRequestSourceEndpoint() = default;
};
class CreateSynchronizationJobRequest : public Darabonba::Model {
public:
  shared_ptr<CreateSynchronizationJobRequestDestinationEndpoint> destinationEndpoint{};
  shared_ptr<CreateSynchronizationJobRequestSourceEndpoint> sourceEndpoint{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> destRegion{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> sourceRegion{};
  shared_ptr<string> synchronizationJobClass{};
  shared_ptr<long> usedTime{};
  shared_ptr<string> networkType{};

  CreateSynchronizationJobRequest() {}

  explicit CreateSynchronizationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationEndpoint) {
      res["DestinationEndpoint"] = destinationEndpoint ? boost::any(destinationEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceEndpoint) {
      res["SourceEndpoint"] = sourceEndpoint ? boost::any(sourceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (destRegion) {
      res["DestRegion"] = boost::any(*destRegion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (sourceRegion) {
      res["SourceRegion"] = boost::any(*sourceRegion);
    }
    if (synchronizationJobClass) {
      res["SynchronizationJobClass"] = boost::any(*synchronizationJobClass);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (networkType) {
      res["networkType"] = boost::any(*networkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationEndpoint") != m.end() && !m["DestinationEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationEndpoint"].type()) {
        CreateSynchronizationJobRequestDestinationEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationEndpoint"]));
        destinationEndpoint = make_shared<CreateSynchronizationJobRequestDestinationEndpoint>(model1);
      }
    }
    if (m.find("SourceEndpoint") != m.end() && !m["SourceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceEndpoint"].type()) {
        CreateSynchronizationJobRequestSourceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceEndpoint"]));
        sourceEndpoint = make_shared<CreateSynchronizationJobRequestSourceEndpoint>(model1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DestRegion") != m.end() && !m["DestRegion"].empty()) {
      destRegion = make_shared<string>(boost::any_cast<string>(m["DestRegion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("SourceRegion") != m.end() && !m["SourceRegion"].empty()) {
      sourceRegion = make_shared<string>(boost::any_cast<string>(m["SourceRegion"]));
    }
    if (m.find("SynchronizationJobClass") != m.end() && !m["SynchronizationJobClass"].empty()) {
      synchronizationJobClass = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobClass"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
    if (m.find("networkType") != m.end() && !m["networkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["networkType"]));
    }
  }


  virtual ~CreateSynchronizationJobRequest() = default;
};
class CreateSynchronizationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<string> synchronizationJobId{};

  CreateSynchronizationJobResponseBody() {}

  explicit CreateSynchronizationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
  }


  virtual ~CreateSynchronizationJobResponseBody() = default;
};
class CreateSynchronizationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSynchronizationJobResponseBody> body{};

  CreateSynchronizationJobResponse() {}

  explicit CreateSynchronizationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSynchronizationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSynchronizationJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSynchronizationJobResponse() = default;
};
class DeleteMigrationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> migrationJobId{};
  shared_ptr<string> ownerId{};

  DeleteMigrationJobRequest() {}

  explicit DeleteMigrationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (migrationJobId) {
      res["MigrationJobId"] = boost::any(*migrationJobId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MigrationJobId") != m.end() && !m["MigrationJobId"].empty()) {
      migrationJobId = make_shared<string>(boost::any_cast<string>(m["MigrationJobId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~DeleteMigrationJobRequest() = default;
};
class DeleteMigrationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DeleteMigrationJobResponseBody() {}

  explicit DeleteMigrationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~DeleteMigrationJobResponseBody() = default;
};
class DeleteMigrationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMigrationJobResponseBody> body{};

  DeleteMigrationJobResponse() {}

  explicit DeleteMigrationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMigrationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMigrationJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMigrationJobResponse() = default;
};
class DeleteSubscriptionInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> subscriptionInstanceId{};

  DeleteSubscriptionInstanceRequest() {}

  explicit DeleteSubscriptionInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (subscriptionInstanceId) {
      res["SubscriptionInstanceId"] = boost::any(*subscriptionInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SubscriptionInstanceId") != m.end() && !m["SubscriptionInstanceId"].empty()) {
      subscriptionInstanceId = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceId"]));
    }
  }


  virtual ~DeleteSubscriptionInstanceRequest() = default;
};
class DeleteSubscriptionInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DeleteSubscriptionInstanceResponseBody() {}

  explicit DeleteSubscriptionInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~DeleteSubscriptionInstanceResponseBody() = default;
};
class DeleteSubscriptionInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSubscriptionInstanceResponseBody> body{};

  DeleteSubscriptionInstanceResponse() {}

  explicit DeleteSubscriptionInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSubscriptionInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSubscriptionInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSubscriptionInstanceResponse() = default;
};
class DeleteSynchronizationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationJobId{};

  DeleteSynchronizationJobRequest() {}

  explicit DeleteSynchronizationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
  }


  virtual ~DeleteSynchronizationJobRequest() = default;
};
class DeleteSynchronizationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DeleteSynchronizationJobResponseBody() {}

  explicit DeleteSynchronizationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~DeleteSynchronizationJobResponseBody() = default;
};
class DeleteSynchronizationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSynchronizationJobResponseBody> body{};

  DeleteSynchronizationJobResponse() {}

  explicit DeleteSynchronizationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSynchronizationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSynchronizationJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSynchronizationJobResponse() = default;
};
class DescirbeMigrationJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> migrationJobName{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescirbeMigrationJobsRequest() {}

  explicit DescirbeMigrationJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (migrationJobName) {
      res["MigrationJobName"] = boost::any(*migrationJobName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MigrationJobName") != m.end() && !m["MigrationJobName"].empty()) {
      migrationJobName = make_shared<string>(boost::any_cast<string>(m["MigrationJobName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescirbeMigrationJobsRequest() = default;
};
class DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};

  DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization() {}

  explicit DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization() = default;
};
class DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization : public Darabonba::Model {
public:
  shared_ptr<string> delay{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> status{};

  DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization() {}

  explicit DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delay) {
      res["Delay"] = boost::any(*delay);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Delay") != m.end() && !m["Delay"].empty()) {
      delay = make_shared<string>(boost::any_cast<string>(m["Delay"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization() = default;
};
class DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<string> engineName{};
  shared_ptr<string> IP{};
  shared_ptr<string> instanceID{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> oracleSID{};
  shared_ptr<string> port{};
  shared_ptr<string> userName{};

  DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint() {}

  explicit DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (engineName) {
      res["EngineName"] = boost::any(*engineName);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (oracleSID) {
      res["OracleSID"] = boost::any(*oracleSID);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("EngineName") != m.end() && !m["EngineName"].empty()) {
      engineName = make_shared<string>(boost::any_cast<string>(m["EngineName"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OracleSID") != m.end() && !m["OracleSID"].empty()) {
      oracleSID = make_shared<string>(boost::any_cast<string>(m["OracleSID"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint() = default;
};
class DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode : public Darabonba::Model {
public:
  shared_ptr<bool> dataInitialization{};
  shared_ptr<bool> dataSynchronization{};
  shared_ptr<bool> structureInitialization{};

  DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode() {}

  explicit DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInitialization) {
      res["DataInitialization"] = boost::any(*dataInitialization);
    }
    if (dataSynchronization) {
      res["DataSynchronization"] = boost::any(*dataSynchronization);
    }
    if (structureInitialization) {
      res["StructureInitialization"] = boost::any(*structureInitialization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInitialization") != m.end() && !m["DataInitialization"].empty()) {
      dataInitialization = make_shared<bool>(boost::any_cast<bool>(m["DataInitialization"]));
    }
    if (m.find("DataSynchronization") != m.end() && !m["DataSynchronization"].empty()) {
      dataSynchronization = make_shared<bool>(boost::any_cast<bool>(m["DataSynchronization"]));
    }
    if (m.find("StructureInitialization") != m.end() && !m["StructureInitialization"].empty()) {
      structureInitialization = make_shared<bool>(boost::any_cast<bool>(m["StructureInitialization"]));
    }
  }


  virtual ~DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode() = default;
};
class DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> table{};

  DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList() {}

  explicit DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Table"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      table = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList() = default;
};
class DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList> tableList{};
  shared_ptr<string> wholeDatabase{};

  DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject() {}

  explicit DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (tableList) {
      res["TableList"] = tableList ? boost::any(tableList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wholeDatabase) {
      res["WholeDatabase"] = boost::any(*wholeDatabase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("TableList") != m.end() && !m["TableList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableList"].type()) {
        DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableList"]));
        tableList = make_shared<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList>(model1);
      }
    }
    if (m.find("WholeDatabase") != m.end() && !m["WholeDatabase"].empty()) {
      wholeDatabase = make_shared<string>(boost::any_cast<string>(m["WholeDatabase"]));
    }
  }


  virtual ~DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject() = default;
};
class DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject : public Darabonba::Model {
public:
  shared_ptr<vector<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject>> synchronousObject{};

  DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject() {}

  explicit DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (synchronousObject) {
      vector<boost::any> temp1;
      for(auto item1:*synchronousObject){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SynchronousObject"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SynchronousObject") != m.end() && !m["SynchronousObject"].empty()) {
      if (typeid(vector<boost::any>) == m["SynchronousObject"].type()) {
        vector<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SynchronousObject"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        synchronousObject = make_shared<vector<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject>>(expect1);
      }
    }
  }


  virtual ~DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject() = default;
};
class DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck : public Darabonba::Model {
public:
  shared_ptr<string> percent{};
  shared_ptr<string> status{};

  DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck() {}

  explicit DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck() = default;
};
class DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<string> engineName{};
  shared_ptr<string> IP{};
  shared_ptr<string> instanceID{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> oracleSID{};
  shared_ptr<string> port{};
  shared_ptr<string> userName{};

  DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint() {}

  explicit DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (engineName) {
      res["EngineName"] = boost::any(*engineName);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (oracleSID) {
      res["OracleSID"] = boost::any(*oracleSID);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("EngineName") != m.end() && !m["EngineName"].empty()) {
      engineName = make_shared<string>(boost::any_cast<string>(m["EngineName"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OracleSID") != m.end() && !m["OracleSID"].empty()) {
      oracleSID = make_shared<string>(boost::any_cast<string>(m["OracleSID"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint() = default;
};
class DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};

  DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization() {}

  explicit DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization() = default;
};
class DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJob : public Darabonba::Model {
public:
  shared_ptr<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization> dataInitialization{};
  shared_ptr<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization> dataSynchronization{};
  shared_ptr<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint> destinationEndpoint{};
  shared_ptr<string> migrationJobClass{};
  shared_ptr<string> migrationJobID{};
  shared_ptr<string> migrationJobName{};
  shared_ptr<string> migrationJobStatus{};
  shared_ptr<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode> migrationMode{};
  shared_ptr<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject> migrationObject{};
  shared_ptr<string> payType{};
  shared_ptr<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck> precheck{};
  shared_ptr<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint> sourceEndpoint{};
  shared_ptr<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization> structureInitialization{};

  DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJob() {}

  explicit DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInitialization) {
      res["DataInitialization"] = dataInitialization ? boost::any(dataInitialization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSynchronization) {
      res["DataSynchronization"] = dataSynchronization ? boost::any(dataSynchronization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (destinationEndpoint) {
      res["DestinationEndpoint"] = destinationEndpoint ? boost::any(destinationEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (migrationJobClass) {
      res["MigrationJobClass"] = boost::any(*migrationJobClass);
    }
    if (migrationJobID) {
      res["MigrationJobID"] = boost::any(*migrationJobID);
    }
    if (migrationJobName) {
      res["MigrationJobName"] = boost::any(*migrationJobName);
    }
    if (migrationJobStatus) {
      res["MigrationJobStatus"] = boost::any(*migrationJobStatus);
    }
    if (migrationMode) {
      res["MigrationMode"] = migrationMode ? boost::any(migrationMode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (migrationObject) {
      res["MigrationObject"] = migrationObject ? boost::any(migrationObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (precheck) {
      res["Precheck"] = precheck ? boost::any(precheck->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceEndpoint) {
      res["SourceEndpoint"] = sourceEndpoint ? boost::any(sourceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (structureInitialization) {
      res["StructureInitialization"] = structureInitialization ? boost::any(structureInitialization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInitialization") != m.end() && !m["DataInitialization"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataInitialization"].type()) {
        DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataInitialization"]));
        dataInitialization = make_shared<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization>(model1);
      }
    }
    if (m.find("DataSynchronization") != m.end() && !m["DataSynchronization"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSynchronization"].type()) {
        DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSynchronization"]));
        dataSynchronization = make_shared<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization>(model1);
      }
    }
    if (m.find("DestinationEndpoint") != m.end() && !m["DestinationEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationEndpoint"].type()) {
        DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationEndpoint"]));
        destinationEndpoint = make_shared<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint>(model1);
      }
    }
    if (m.find("MigrationJobClass") != m.end() && !m["MigrationJobClass"].empty()) {
      migrationJobClass = make_shared<string>(boost::any_cast<string>(m["MigrationJobClass"]));
    }
    if (m.find("MigrationJobID") != m.end() && !m["MigrationJobID"].empty()) {
      migrationJobID = make_shared<string>(boost::any_cast<string>(m["MigrationJobID"]));
    }
    if (m.find("MigrationJobName") != m.end() && !m["MigrationJobName"].empty()) {
      migrationJobName = make_shared<string>(boost::any_cast<string>(m["MigrationJobName"]));
    }
    if (m.find("MigrationJobStatus") != m.end() && !m["MigrationJobStatus"].empty()) {
      migrationJobStatus = make_shared<string>(boost::any_cast<string>(m["MigrationJobStatus"]));
    }
    if (m.find("MigrationMode") != m.end() && !m["MigrationMode"].empty()) {
      if (typeid(map<string, boost::any>) == m["MigrationMode"].type()) {
        DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MigrationMode"]));
        migrationMode = make_shared<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode>(model1);
      }
    }
    if (m.find("MigrationObject") != m.end() && !m["MigrationObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["MigrationObject"].type()) {
        DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MigrationObject"]));
        migrationObject = make_shared<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject>(model1);
      }
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Precheck") != m.end() && !m["Precheck"].empty()) {
      if (typeid(map<string, boost::any>) == m["Precheck"].type()) {
        DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Precheck"]));
        precheck = make_shared<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck>(model1);
      }
    }
    if (m.find("SourceEndpoint") != m.end() && !m["SourceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceEndpoint"].type()) {
        DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceEndpoint"]));
        sourceEndpoint = make_shared<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint>(model1);
      }
    }
    if (m.find("StructureInitialization") != m.end() && !m["StructureInitialization"].empty()) {
      if (typeid(map<string, boost::any>) == m["StructureInitialization"].type()) {
        DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StructureInitialization"]));
        structureInitialization = make_shared<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization>(model1);
      }
    }
  }


  virtual ~DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJob() = default;
};
class DescirbeMigrationJobsResponseBodyMigrationJobs : public Darabonba::Model {
public:
  shared_ptr<vector<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJob>> migrationJob{};

  DescirbeMigrationJobsResponseBodyMigrationJobs() {}

  explicit DescirbeMigrationJobsResponseBodyMigrationJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (migrationJob) {
      vector<boost::any> temp1;
      for(auto item1:*migrationJob){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MigrationJob"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MigrationJob") != m.end() && !m["MigrationJob"].empty()) {
      if (typeid(vector<boost::any>) == m["MigrationJob"].type()) {
        vector<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJob> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MigrationJob"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJob model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        migrationJob = make_shared<vector<DescirbeMigrationJobsResponseBodyMigrationJobsMigrationJob>>(expect1);
      }
    }
  }


  virtual ~DescirbeMigrationJobsResponseBodyMigrationJobs() = default;
};
class DescirbeMigrationJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescirbeMigrationJobsResponseBodyMigrationJobs> migrationJobs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<long> totalRecordCount{};

  DescirbeMigrationJobsResponseBody() {}

  explicit DescirbeMigrationJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (migrationJobs) {
      res["MigrationJobs"] = migrationJobs ? boost::any(migrationJobs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MigrationJobs") != m.end() && !m["MigrationJobs"].empty()) {
      if (typeid(map<string, boost::any>) == m["MigrationJobs"].type()) {
        DescirbeMigrationJobsResponseBodyMigrationJobs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MigrationJobs"]));
        migrationJobs = make_shared<DescirbeMigrationJobsResponseBodyMigrationJobs>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescirbeMigrationJobsResponseBody() = default;
};
class DescirbeMigrationJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescirbeMigrationJobsResponseBody> body{};

  DescirbeMigrationJobsResponse() {}

  explicit DescirbeMigrationJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescirbeMigrationJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescirbeMigrationJobsResponseBody>(model1);
      }
    }
  }


  virtual ~DescirbeMigrationJobsResponse() = default;
};
class DescribeInitializationStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> synchronizationJobId{};

  DescribeInitializationStatusRequest() {}

  explicit DescribeInitializationStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
  }


  virtual ~DescribeInitializationStatusRequest() = default;
};
class DescribeInitializationStatusResponseBodyDataInitializationDetails : public Darabonba::Model {
public:
  shared_ptr<string> destinationOwnerDBName{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> finishRowNum{};
  shared_ptr<string> sourceOwnerDBName{};
  shared_ptr<string> status{};
  shared_ptr<string> tableName{};
  shared_ptr<string> totalRowNum{};
  shared_ptr<string> usedTime{};

  DescribeInitializationStatusResponseBodyDataInitializationDetails() {}

  explicit DescribeInitializationStatusResponseBodyDataInitializationDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationOwnerDBName) {
      res["DestinationOwnerDBName"] = boost::any(*destinationOwnerDBName);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (finishRowNum) {
      res["FinishRowNum"] = boost::any(*finishRowNum);
    }
    if (sourceOwnerDBName) {
      res["SourceOwnerDBName"] = boost::any(*sourceOwnerDBName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (totalRowNum) {
      res["TotalRowNum"] = boost::any(*totalRowNum);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationOwnerDBName") != m.end() && !m["DestinationOwnerDBName"].empty()) {
      destinationOwnerDBName = make_shared<string>(boost::any_cast<string>(m["DestinationOwnerDBName"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("FinishRowNum") != m.end() && !m["FinishRowNum"].empty()) {
      finishRowNum = make_shared<string>(boost::any_cast<string>(m["FinishRowNum"]));
    }
    if (m.find("SourceOwnerDBName") != m.end() && !m["SourceOwnerDBName"].empty()) {
      sourceOwnerDBName = make_shared<string>(boost::any_cast<string>(m["SourceOwnerDBName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TotalRowNum") != m.end() && !m["TotalRowNum"].empty()) {
      totalRowNum = make_shared<string>(boost::any_cast<string>(m["TotalRowNum"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<string>(boost::any_cast<string>(m["UsedTime"]));
    }
  }


  virtual ~DescribeInitializationStatusResponseBodyDataInitializationDetails() = default;
};
class DescribeInitializationStatusResponseBodyDataSynchronizationDetails : public Darabonba::Model {
public:
  shared_ptr<string> destinationOwnerDBName{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> sourceOwnerDBName{};
  shared_ptr<string> status{};
  shared_ptr<string> tableName{};

  DescribeInitializationStatusResponseBodyDataSynchronizationDetails() {}

  explicit DescribeInitializationStatusResponseBodyDataSynchronizationDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationOwnerDBName) {
      res["DestinationOwnerDBName"] = boost::any(*destinationOwnerDBName);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (sourceOwnerDBName) {
      res["SourceOwnerDBName"] = boost::any(*sourceOwnerDBName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationOwnerDBName") != m.end() && !m["DestinationOwnerDBName"].empty()) {
      destinationOwnerDBName = make_shared<string>(boost::any_cast<string>(m["DestinationOwnerDBName"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("SourceOwnerDBName") != m.end() && !m["SourceOwnerDBName"].empty()) {
      sourceOwnerDBName = make_shared<string>(boost::any_cast<string>(m["SourceOwnerDBName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeInitializationStatusResponseBodyDataSynchronizationDetails() = default;
};
class DescribeInitializationStatusResponseBodyStructureInitializationDetailsConstraints : public Darabonba::Model {
public:
  shared_ptr<string> destinationOwnerDBName{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> objectDefinition{};
  shared_ptr<string> objectName{};
  shared_ptr<string> objectType{};
  shared_ptr<string> sourceOwnerDBName{};
  shared_ptr<string> status{};

  DescribeInitializationStatusResponseBodyStructureInitializationDetailsConstraints() {}

  explicit DescribeInitializationStatusResponseBodyStructureInitializationDetailsConstraints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationOwnerDBName) {
      res["DestinationOwnerDBName"] = boost::any(*destinationOwnerDBName);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (objectDefinition) {
      res["ObjectDefinition"] = boost::any(*objectDefinition);
    }
    if (objectName) {
      res["ObjectName"] = boost::any(*objectName);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (sourceOwnerDBName) {
      res["SourceOwnerDBName"] = boost::any(*sourceOwnerDBName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationOwnerDBName") != m.end() && !m["DestinationOwnerDBName"].empty()) {
      destinationOwnerDBName = make_shared<string>(boost::any_cast<string>(m["DestinationOwnerDBName"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ObjectDefinition") != m.end() && !m["ObjectDefinition"].empty()) {
      objectDefinition = make_shared<string>(boost::any_cast<string>(m["ObjectDefinition"]));
    }
    if (m.find("ObjectName") != m.end() && !m["ObjectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["ObjectName"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("SourceOwnerDBName") != m.end() && !m["SourceOwnerDBName"].empty()) {
      sourceOwnerDBName = make_shared<string>(boost::any_cast<string>(m["SourceOwnerDBName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeInitializationStatusResponseBodyStructureInitializationDetailsConstraints() = default;
};
class DescribeInitializationStatusResponseBodyStructureInitializationDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInitializationStatusResponseBodyStructureInitializationDetailsConstraints>> constraints{};
  shared_ptr<string> destinationOwnerDBName{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> objectDefinition{};
  shared_ptr<string> objectName{};
  shared_ptr<string> objectType{};
  shared_ptr<string> sourceOwnerDBName{};
  shared_ptr<string> status{};

  DescribeInitializationStatusResponseBodyStructureInitializationDetails() {}

  explicit DescribeInitializationStatusResponseBodyStructureInitializationDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constraints) {
      vector<boost::any> temp1;
      for(auto item1:*constraints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Constraints"] = boost::any(temp1);
    }
    if (destinationOwnerDBName) {
      res["DestinationOwnerDBName"] = boost::any(*destinationOwnerDBName);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (objectDefinition) {
      res["ObjectDefinition"] = boost::any(*objectDefinition);
    }
    if (objectName) {
      res["ObjectName"] = boost::any(*objectName);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (sourceOwnerDBName) {
      res["SourceOwnerDBName"] = boost::any(*sourceOwnerDBName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Constraints") != m.end() && !m["Constraints"].empty()) {
      if (typeid(vector<boost::any>) == m["Constraints"].type()) {
        vector<DescribeInitializationStatusResponseBodyStructureInitializationDetailsConstraints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Constraints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInitializationStatusResponseBodyStructureInitializationDetailsConstraints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        constraints = make_shared<vector<DescribeInitializationStatusResponseBodyStructureInitializationDetailsConstraints>>(expect1);
      }
    }
    if (m.find("DestinationOwnerDBName") != m.end() && !m["DestinationOwnerDBName"].empty()) {
      destinationOwnerDBName = make_shared<string>(boost::any_cast<string>(m["DestinationOwnerDBName"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ObjectDefinition") != m.end() && !m["ObjectDefinition"].empty()) {
      objectDefinition = make_shared<string>(boost::any_cast<string>(m["ObjectDefinition"]));
    }
    if (m.find("ObjectName") != m.end() && !m["ObjectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["ObjectName"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("SourceOwnerDBName") != m.end() && !m["SourceOwnerDBName"].empty()) {
      sourceOwnerDBName = make_shared<string>(boost::any_cast<string>(m["SourceOwnerDBName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeInitializationStatusResponseBodyStructureInitializationDetails() = default;
};
class DescribeInitializationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInitializationStatusResponseBodyDataInitializationDetails>> dataInitializationDetails{};
  shared_ptr<vector<DescribeInitializationStatusResponseBodyDataSynchronizationDetails>> dataSynchronizationDetails{};
  shared_ptr<vector<DescribeInitializationStatusResponseBodyStructureInitializationDetails>> structureInitializationDetails{};

  DescribeInitializationStatusResponseBody() {}

  explicit DescribeInitializationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInitializationDetails) {
      vector<boost::any> temp1;
      for(auto item1:*dataInitializationDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataInitializationDetails"] = boost::any(temp1);
    }
    if (dataSynchronizationDetails) {
      vector<boost::any> temp1;
      for(auto item1:*dataSynchronizationDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSynchronizationDetails"] = boost::any(temp1);
    }
    if (structureInitializationDetails) {
      vector<boost::any> temp1;
      for(auto item1:*structureInitializationDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StructureInitializationDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInitializationDetails") != m.end() && !m["DataInitializationDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["DataInitializationDetails"].type()) {
        vector<DescribeInitializationStatusResponseBodyDataInitializationDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataInitializationDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInitializationStatusResponseBodyDataInitializationDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataInitializationDetails = make_shared<vector<DescribeInitializationStatusResponseBodyDataInitializationDetails>>(expect1);
      }
    }
    if (m.find("DataSynchronizationDetails") != m.end() && !m["DataSynchronizationDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSynchronizationDetails"].type()) {
        vector<DescribeInitializationStatusResponseBodyDataSynchronizationDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSynchronizationDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInitializationStatusResponseBodyDataSynchronizationDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSynchronizationDetails = make_shared<vector<DescribeInitializationStatusResponseBodyDataSynchronizationDetails>>(expect1);
      }
    }
    if (m.find("StructureInitializationDetails") != m.end() && !m["StructureInitializationDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["StructureInitializationDetails"].type()) {
        vector<DescribeInitializationStatusResponseBodyStructureInitializationDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StructureInitializationDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInitializationStatusResponseBodyStructureInitializationDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        structureInitializationDetails = make_shared<vector<DescribeInitializationStatusResponseBodyStructureInitializationDetails>>(expect1);
      }
    }
  }


  virtual ~DescribeInitializationStatusResponseBody() = default;
};
class DescribeInitializationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInitializationStatusResponseBody> body{};

  DescribeInitializationStatusResponse() {}

  explicit DescribeInitializationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInitializationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInitializationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInitializationStatusResponse() = default;
};
class DescribeMigrationJobDetailRequestMigrationMode : public Darabonba::Model {
public:
  shared_ptr<bool> dataInitialization{};
  shared_ptr<bool> dataSynchronization{};
  shared_ptr<bool> structureInitialization{};

  DescribeMigrationJobDetailRequestMigrationMode() {}

  explicit DescribeMigrationJobDetailRequestMigrationMode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInitialization) {
      res["DataInitialization"] = boost::any(*dataInitialization);
    }
    if (dataSynchronization) {
      res["DataSynchronization"] = boost::any(*dataSynchronization);
    }
    if (structureInitialization) {
      res["StructureInitialization"] = boost::any(*structureInitialization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInitialization") != m.end() && !m["DataInitialization"].empty()) {
      dataInitialization = make_shared<bool>(boost::any_cast<bool>(m["DataInitialization"]));
    }
    if (m.find("DataSynchronization") != m.end() && !m["DataSynchronization"].empty()) {
      dataSynchronization = make_shared<bool>(boost::any_cast<bool>(m["DataSynchronization"]));
    }
    if (m.find("StructureInitialization") != m.end() && !m["StructureInitialization"].empty()) {
      structureInitialization = make_shared<bool>(boost::any_cast<bool>(m["StructureInitialization"]));
    }
  }


  virtual ~DescribeMigrationJobDetailRequestMigrationMode() = default;
};
class DescribeMigrationJobDetailRequest : public Darabonba::Model {
public:
  shared_ptr<DescribeMigrationJobDetailRequestMigrationMode> migrationMode{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> migrationJobId{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeMigrationJobDetailRequest() {}

  explicit DescribeMigrationJobDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (migrationMode) {
      res["MigrationMode"] = migrationMode ? boost::any(migrationMode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (migrationJobId) {
      res["MigrationJobId"] = boost::any(*migrationJobId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MigrationMode") != m.end() && !m["MigrationMode"].empty()) {
      if (typeid(map<string, boost::any>) == m["MigrationMode"].type()) {
        DescribeMigrationJobDetailRequestMigrationMode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MigrationMode"]));
        migrationMode = make_shared<DescribeMigrationJobDetailRequestMigrationMode>(model1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("MigrationJobId") != m.end() && !m["MigrationJobId"].empty()) {
      migrationJobId = make_shared<string>(boost::any_cast<string>(m["MigrationJobId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeMigrationJobDetailRequest() = default;
};
class DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail : public Darabonba::Model {
public:
  shared_ptr<string> destinationOwnerDBName{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> finishRowNum{};
  shared_ptr<string> migrationTime{};
  shared_ptr<string> sourceOwnerDBName{};
  shared_ptr<string> status{};
  shared_ptr<string> tableName{};
  shared_ptr<string> totalRowNum{};

  DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail() {}

  explicit DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationOwnerDBName) {
      res["DestinationOwnerDBName"] = boost::any(*destinationOwnerDBName);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (finishRowNum) {
      res["FinishRowNum"] = boost::any(*finishRowNum);
    }
    if (migrationTime) {
      res["MigrationTime"] = boost::any(*migrationTime);
    }
    if (sourceOwnerDBName) {
      res["SourceOwnerDBName"] = boost::any(*sourceOwnerDBName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (totalRowNum) {
      res["TotalRowNum"] = boost::any(*totalRowNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationOwnerDBName") != m.end() && !m["DestinationOwnerDBName"].empty()) {
      destinationOwnerDBName = make_shared<string>(boost::any_cast<string>(m["DestinationOwnerDBName"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("FinishRowNum") != m.end() && !m["FinishRowNum"].empty()) {
      finishRowNum = make_shared<string>(boost::any_cast<string>(m["FinishRowNum"]));
    }
    if (m.find("MigrationTime") != m.end() && !m["MigrationTime"].empty()) {
      migrationTime = make_shared<string>(boost::any_cast<string>(m["MigrationTime"]));
    }
    if (m.find("SourceOwnerDBName") != m.end() && !m["SourceOwnerDBName"].empty()) {
      sourceOwnerDBName = make_shared<string>(boost::any_cast<string>(m["SourceOwnerDBName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TotalRowNum") != m.end() && !m["TotalRowNum"].empty()) {
      totalRowNum = make_shared<string>(boost::any_cast<string>(m["TotalRowNum"]));
    }
  }


  virtual ~DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail() = default;
};
class DescribeMigrationJobDetailResponseBodyDataInitializationDetailList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail>> dataInitializationDetail{};

  DescribeMigrationJobDetailResponseBodyDataInitializationDetailList() {}

  explicit DescribeMigrationJobDetailResponseBodyDataInitializationDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInitializationDetail) {
      vector<boost::any> temp1;
      for(auto item1:*dataInitializationDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataInitializationDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInitializationDetail") != m.end() && !m["DataInitializationDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["DataInitializationDetail"].type()) {
        vector<DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataInitializationDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataInitializationDetail = make_shared<vector<DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeMigrationJobDetailResponseBodyDataInitializationDetailList() = default;
};
class DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail : public Darabonba::Model {
public:
  shared_ptr<string> destinationOwnerDBName{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> sourceOwnerDBName{};
  shared_ptr<string> status{};
  shared_ptr<string> tableName{};

  DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail() {}

  explicit DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationOwnerDBName) {
      res["DestinationOwnerDBName"] = boost::any(*destinationOwnerDBName);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (sourceOwnerDBName) {
      res["SourceOwnerDBName"] = boost::any(*sourceOwnerDBName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationOwnerDBName") != m.end() && !m["DestinationOwnerDBName"].empty()) {
      destinationOwnerDBName = make_shared<string>(boost::any_cast<string>(m["DestinationOwnerDBName"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("SourceOwnerDBName") != m.end() && !m["SourceOwnerDBName"].empty()) {
      sourceOwnerDBName = make_shared<string>(boost::any_cast<string>(m["SourceOwnerDBName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail() = default;
};
class DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail>> dataSynchronizationDetail{};

  DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList() {}

  explicit DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSynchronizationDetail) {
      vector<boost::any> temp1;
      for(auto item1:*dataSynchronizationDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSynchronizationDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSynchronizationDetail") != m.end() && !m["DataSynchronizationDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSynchronizationDetail"].type()) {
        vector<DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSynchronizationDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSynchronizationDetail = make_shared<vector<DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList() = default;
};
class DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail : public Darabonba::Model {
public:
  shared_ptr<string> destinationOwnerDBName{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> objectDefinition{};
  shared_ptr<string> objectName{};
  shared_ptr<string> objectType{};
  shared_ptr<string> sourceOwnerDBName{};
  shared_ptr<string> status{};

  DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail() {}

  explicit DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationOwnerDBName) {
      res["DestinationOwnerDBName"] = boost::any(*destinationOwnerDBName);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (objectDefinition) {
      res["ObjectDefinition"] = boost::any(*objectDefinition);
    }
    if (objectName) {
      res["ObjectName"] = boost::any(*objectName);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (sourceOwnerDBName) {
      res["SourceOwnerDBName"] = boost::any(*sourceOwnerDBName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationOwnerDBName") != m.end() && !m["DestinationOwnerDBName"].empty()) {
      destinationOwnerDBName = make_shared<string>(boost::any_cast<string>(m["DestinationOwnerDBName"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ObjectDefinition") != m.end() && !m["ObjectDefinition"].empty()) {
      objectDefinition = make_shared<string>(boost::any_cast<string>(m["ObjectDefinition"]));
    }
    if (m.find("ObjectName") != m.end() && !m["ObjectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["ObjectName"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("SourceOwnerDBName") != m.end() && !m["SourceOwnerDBName"].empty()) {
      sourceOwnerDBName = make_shared<string>(boost::any_cast<string>(m["SourceOwnerDBName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail() = default;
};
class DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail>> structureInitializationDetail{};

  DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList() {}

  explicit DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (structureInitializationDetail) {
      vector<boost::any> temp1;
      for(auto item1:*structureInitializationDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StructureInitializationDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StructureInitializationDetail") != m.end() && !m["StructureInitializationDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["StructureInitializationDetail"].type()) {
        vector<DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StructureInitializationDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        structureInitializationDetail = make_shared<vector<DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintListStructureInitializationDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList() = default;
};
class DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail : public Darabonba::Model {
public:
  shared_ptr<DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList> constraintList{};
  shared_ptr<string> destinationOwnerDBName{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> objectDefinition{};
  shared_ptr<string> objectName{};
  shared_ptr<string> objectType{};
  shared_ptr<string> sourceOwnerDBName{};
  shared_ptr<string> status{};

  DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail() {}

  explicit DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constraintList) {
      res["ConstraintList"] = constraintList ? boost::any(constraintList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (destinationOwnerDBName) {
      res["DestinationOwnerDBName"] = boost::any(*destinationOwnerDBName);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (objectDefinition) {
      res["ObjectDefinition"] = boost::any(*objectDefinition);
    }
    if (objectName) {
      res["ObjectName"] = boost::any(*objectName);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (sourceOwnerDBName) {
      res["SourceOwnerDBName"] = boost::any(*sourceOwnerDBName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstraintList") != m.end() && !m["ConstraintList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConstraintList"].type()) {
        DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConstraintList"]));
        constraintList = make_shared<DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetailConstraintList>(model1);
      }
    }
    if (m.find("DestinationOwnerDBName") != m.end() && !m["DestinationOwnerDBName"].empty()) {
      destinationOwnerDBName = make_shared<string>(boost::any_cast<string>(m["DestinationOwnerDBName"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ObjectDefinition") != m.end() && !m["ObjectDefinition"].empty()) {
      objectDefinition = make_shared<string>(boost::any_cast<string>(m["ObjectDefinition"]));
    }
    if (m.find("ObjectName") != m.end() && !m["ObjectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["ObjectName"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("SourceOwnerDBName") != m.end() && !m["SourceOwnerDBName"].empty()) {
      sourceOwnerDBName = make_shared<string>(boost::any_cast<string>(m["SourceOwnerDBName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail() = default;
};
class DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail>> structureInitializationDetail{};

  DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList() {}

  explicit DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (structureInitializationDetail) {
      vector<boost::any> temp1;
      for(auto item1:*structureInitializationDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StructureInitializationDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StructureInitializationDetail") != m.end() && !m["StructureInitializationDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["StructureInitializationDetail"].type()) {
        vector<DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StructureInitializationDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        structureInitializationDetail = make_shared<vector<DescribeMigrationJobDetailResponseBodyStructureInitializationDetailListStructureInitializationDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList() = default;
};
class DescribeMigrationJobDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeMigrationJobDetailResponseBodyDataInitializationDetailList> dataInitializationDetailList{};
  shared_ptr<DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList> dataSynchronizationDetailList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList> structureInitializationDetailList{};
  shared_ptr<long> totalRecordCount{};

  DescribeMigrationJobDetailResponseBody() {}

  explicit DescribeMigrationJobDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInitializationDetailList) {
      res["DataInitializationDetailList"] = dataInitializationDetailList ? boost::any(dataInitializationDetailList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSynchronizationDetailList) {
      res["DataSynchronizationDetailList"] = dataSynchronizationDetailList ? boost::any(dataSynchronizationDetailList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (structureInitializationDetailList) {
      res["StructureInitializationDetailList"] = structureInitializationDetailList ? boost::any(structureInitializationDetailList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInitializationDetailList") != m.end() && !m["DataInitializationDetailList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataInitializationDetailList"].type()) {
        DescribeMigrationJobDetailResponseBodyDataInitializationDetailList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataInitializationDetailList"]));
        dataInitializationDetailList = make_shared<DescribeMigrationJobDetailResponseBodyDataInitializationDetailList>(model1);
      }
    }
    if (m.find("DataSynchronizationDetailList") != m.end() && !m["DataSynchronizationDetailList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSynchronizationDetailList"].type()) {
        DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSynchronizationDetailList"]));
        dataSynchronizationDetailList = make_shared<DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("StructureInitializationDetailList") != m.end() && !m["StructureInitializationDetailList"].empty()) {
      if (typeid(map<string, boost::any>) == m["StructureInitializationDetailList"].type()) {
        DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StructureInitializationDetailList"]));
        structureInitializationDetailList = make_shared<DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList>(model1);
      }
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeMigrationJobDetailResponseBody() = default;
};
class DescribeMigrationJobDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMigrationJobDetailResponseBody> body{};

  DescribeMigrationJobDetailResponse() {}

  explicit DescribeMigrationJobDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMigrationJobDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMigrationJobDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMigrationJobDetailResponse() = default;
};
class DescribeMigrationJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> migrationJobId{};
  shared_ptr<string> ownerId{};

  DescribeMigrationJobStatusRequest() {}

  explicit DescribeMigrationJobStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (migrationJobId) {
      res["MigrationJobId"] = boost::any(*migrationJobId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("MigrationJobId") != m.end() && !m["MigrationJobId"].empty()) {
      migrationJobId = make_shared<string>(boost::any_cast<string>(m["MigrationJobId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~DescribeMigrationJobStatusRequest() = default;
};
class DescribeMigrationJobStatusResponseBodyDataInitializationStatus : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};

  DescribeMigrationJobStatusResponseBodyDataInitializationStatus() {}

  explicit DescribeMigrationJobStatusResponseBodyDataInitializationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeMigrationJobStatusResponseBodyDataInitializationStatus() = default;
};
class DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus : public Darabonba::Model {
public:
  shared_ptr<string> checkpoint{};
  shared_ptr<string> delay{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> status{};

  DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus() {}

  explicit DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkpoint) {
      res["Checkpoint"] = boost::any(*checkpoint);
    }
    if (delay) {
      res["Delay"] = boost::any(*delay);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Checkpoint") != m.end() && !m["Checkpoint"].empty()) {
      checkpoint = make_shared<string>(boost::any_cast<string>(m["Checkpoint"]));
    }
    if (m.find("Delay") != m.end() && !m["Delay"].empty()) {
      delay = make_shared<string>(boost::any_cast<string>(m["Delay"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus() = default;
};
class DescribeMigrationJobStatusResponseBodyDestinationEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<string> engineName{};
  shared_ptr<string> IP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> port{};
  shared_ptr<string> userName{};
  shared_ptr<string> oracleSID{};

  DescribeMigrationJobStatusResponseBodyDestinationEndpoint() {}

  explicit DescribeMigrationJobStatusResponseBodyDestinationEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (engineName) {
      res["EngineName"] = boost::any(*engineName);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (oracleSID) {
      res["oracleSID"] = boost::any(*oracleSID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("EngineName") != m.end() && !m["EngineName"].empty()) {
      engineName = make_shared<string>(boost::any_cast<string>(m["EngineName"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("oracleSID") != m.end() && !m["oracleSID"].empty()) {
      oracleSID = make_shared<string>(boost::any_cast<string>(m["oracleSID"]));
    }
  }


  virtual ~DescribeMigrationJobStatusResponseBodyDestinationEndpoint() = default;
};
class DescribeMigrationJobStatusResponseBodyMigrationMode : public Darabonba::Model {
public:
  shared_ptr<bool> dataInitialization{};
  shared_ptr<bool> dataSynchronization{};
  shared_ptr<bool> structureInitialization{};

  DescribeMigrationJobStatusResponseBodyMigrationMode() {}

  explicit DescribeMigrationJobStatusResponseBodyMigrationMode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInitialization) {
      res["dataInitialization"] = boost::any(*dataInitialization);
    }
    if (dataSynchronization) {
      res["dataSynchronization"] = boost::any(*dataSynchronization);
    }
    if (structureInitialization) {
      res["structureInitialization"] = boost::any(*structureInitialization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataInitialization") != m.end() && !m["dataInitialization"].empty()) {
      dataInitialization = make_shared<bool>(boost::any_cast<bool>(m["dataInitialization"]));
    }
    if (m.find("dataSynchronization") != m.end() && !m["dataSynchronization"].empty()) {
      dataSynchronization = make_shared<bool>(boost::any_cast<bool>(m["dataSynchronization"]));
    }
    if (m.find("structureInitialization") != m.end() && !m["structureInitialization"].empty()) {
      structureInitialization = make_shared<bool>(boost::any_cast<bool>(m["structureInitialization"]));
    }
  }


  virtual ~DescribeMigrationJobStatusResponseBodyMigrationMode() = default;
};
class DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> itemName{};
  shared_ptr<string> repairMethod{};

  DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem() {}

  explicit DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (repairMethod) {
      res["RepairMethod"] = boost::any(*repairMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("RepairMethod") != m.end() && !m["RepairMethod"].empty()) {
      repairMethod = make_shared<string>(boost::any_cast<string>(m["RepairMethod"]));
    }
  }


  virtual ~DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem() = default;
};
class DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem>> checkItem{};

  DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail() {}

  explicit DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkItem) {
      vector<boost::any> temp1;
      for(auto item1:*checkItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CheckItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckItem") != m.end() && !m["CheckItem"].empty()) {
      if (typeid(vector<boost::any>) == m["CheckItem"].type()) {
        vector<DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CheckItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkItem = make_shared<vector<DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem>>(expect1);
      }
    }
  }


  virtual ~DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail() = default;
};
class DescribeMigrationJobStatusResponseBodyPrecheckStatus : public Darabonba::Model {
public:
  shared_ptr<DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail> detail{};
  shared_ptr<string> percent{};
  shared_ptr<string> status{};

  DescribeMigrationJobStatusResponseBodyPrecheckStatus() {}

  explicit DescribeMigrationJobStatusResponseBodyPrecheckStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = detail ? boost::any(detail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(map<string, boost::any>) == m["Detail"].type()) {
        DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Detail"]));
        detail = make_shared<DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail>(model1);
      }
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeMigrationJobStatusResponseBodyPrecheckStatus() = default;
};
class DescribeMigrationJobStatusResponseBodySourceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<string> engineName{};
  shared_ptr<string> IP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> port{};
  shared_ptr<string> userName{};
  shared_ptr<string> oracleSID{};

  DescribeMigrationJobStatusResponseBodySourceEndpoint() {}

  explicit DescribeMigrationJobStatusResponseBodySourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (engineName) {
      res["EngineName"] = boost::any(*engineName);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (oracleSID) {
      res["oracleSID"] = boost::any(*oracleSID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("EngineName") != m.end() && !m["EngineName"].empty()) {
      engineName = make_shared<string>(boost::any_cast<string>(m["EngineName"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("oracleSID") != m.end() && !m["oracleSID"].empty()) {
      oracleSID = make_shared<string>(boost::any_cast<string>(m["oracleSID"]));
    }
  }


  virtual ~DescribeMigrationJobStatusResponseBodySourceEndpoint() = default;
};
class DescribeMigrationJobStatusResponseBodyStructureInitializationStatus : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};

  DescribeMigrationJobStatusResponseBodyStructureInitializationStatus() {}

  explicit DescribeMigrationJobStatusResponseBodyStructureInitializationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeMigrationJobStatusResponseBodyStructureInitializationStatus() = default;
};
class DescribeMigrationJobStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeMigrationJobStatusResponseBodyDataInitializationStatus> dataInitializationStatus{};
  shared_ptr<DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus> dataSynchronizationStatus{};
  shared_ptr<DescribeMigrationJobStatusResponseBodyDestinationEndpoint> destinationEndpoint{};
  shared_ptr<string> migrationJobClass{};
  shared_ptr<string> migrationJobId{};
  shared_ptr<string> migrationJobName{};
  shared_ptr<string> migrationJobStatus{};
  shared_ptr<DescribeMigrationJobStatusResponseBodyMigrationMode> migrationMode{};
  shared_ptr<string> migrationObject{};
  shared_ptr<string> payType{};
  shared_ptr<DescribeMigrationJobStatusResponseBodyPrecheckStatus> precheckStatus{};
  shared_ptr<DescribeMigrationJobStatusResponseBodySourceEndpoint> sourceEndpoint{};
  shared_ptr<DescribeMigrationJobStatusResponseBodyStructureInitializationStatus> structureInitializationStatus{};

  DescribeMigrationJobStatusResponseBody() {}

  explicit DescribeMigrationJobStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInitializationStatus) {
      res["DataInitializationStatus"] = dataInitializationStatus ? boost::any(dataInitializationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSynchronizationStatus) {
      res["DataSynchronizationStatus"] = dataSynchronizationStatus ? boost::any(dataSynchronizationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (destinationEndpoint) {
      res["DestinationEndpoint"] = destinationEndpoint ? boost::any(destinationEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (migrationJobClass) {
      res["MigrationJobClass"] = boost::any(*migrationJobClass);
    }
    if (migrationJobId) {
      res["MigrationJobId"] = boost::any(*migrationJobId);
    }
    if (migrationJobName) {
      res["MigrationJobName"] = boost::any(*migrationJobName);
    }
    if (migrationJobStatus) {
      res["MigrationJobStatus"] = boost::any(*migrationJobStatus);
    }
    if (migrationMode) {
      res["MigrationMode"] = migrationMode ? boost::any(migrationMode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (migrationObject) {
      res["MigrationObject"] = boost::any(*migrationObject);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (precheckStatus) {
      res["PrecheckStatus"] = precheckStatus ? boost::any(precheckStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceEndpoint) {
      res["SourceEndpoint"] = sourceEndpoint ? boost::any(sourceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (structureInitializationStatus) {
      res["StructureInitializationStatus"] = structureInitializationStatus ? boost::any(structureInitializationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInitializationStatus") != m.end() && !m["DataInitializationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataInitializationStatus"].type()) {
        DescribeMigrationJobStatusResponseBodyDataInitializationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataInitializationStatus"]));
        dataInitializationStatus = make_shared<DescribeMigrationJobStatusResponseBodyDataInitializationStatus>(model1);
      }
    }
    if (m.find("DataSynchronizationStatus") != m.end() && !m["DataSynchronizationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSynchronizationStatus"].type()) {
        DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSynchronizationStatus"]));
        dataSynchronizationStatus = make_shared<DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus>(model1);
      }
    }
    if (m.find("DestinationEndpoint") != m.end() && !m["DestinationEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationEndpoint"].type()) {
        DescribeMigrationJobStatusResponseBodyDestinationEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationEndpoint"]));
        destinationEndpoint = make_shared<DescribeMigrationJobStatusResponseBodyDestinationEndpoint>(model1);
      }
    }
    if (m.find("MigrationJobClass") != m.end() && !m["MigrationJobClass"].empty()) {
      migrationJobClass = make_shared<string>(boost::any_cast<string>(m["MigrationJobClass"]));
    }
    if (m.find("MigrationJobId") != m.end() && !m["MigrationJobId"].empty()) {
      migrationJobId = make_shared<string>(boost::any_cast<string>(m["MigrationJobId"]));
    }
    if (m.find("MigrationJobName") != m.end() && !m["MigrationJobName"].empty()) {
      migrationJobName = make_shared<string>(boost::any_cast<string>(m["MigrationJobName"]));
    }
    if (m.find("MigrationJobStatus") != m.end() && !m["MigrationJobStatus"].empty()) {
      migrationJobStatus = make_shared<string>(boost::any_cast<string>(m["MigrationJobStatus"]));
    }
    if (m.find("MigrationMode") != m.end() && !m["MigrationMode"].empty()) {
      if (typeid(map<string, boost::any>) == m["MigrationMode"].type()) {
        DescribeMigrationJobStatusResponseBodyMigrationMode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MigrationMode"]));
        migrationMode = make_shared<DescribeMigrationJobStatusResponseBodyMigrationMode>(model1);
      }
    }
    if (m.find("MigrationObject") != m.end() && !m["MigrationObject"].empty()) {
      migrationObject = make_shared<string>(boost::any_cast<string>(m["MigrationObject"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PrecheckStatus") != m.end() && !m["PrecheckStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrecheckStatus"].type()) {
        DescribeMigrationJobStatusResponseBodyPrecheckStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrecheckStatus"]));
        precheckStatus = make_shared<DescribeMigrationJobStatusResponseBodyPrecheckStatus>(model1);
      }
    }
    if (m.find("SourceEndpoint") != m.end() && !m["SourceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceEndpoint"].type()) {
        DescribeMigrationJobStatusResponseBodySourceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceEndpoint"]));
        sourceEndpoint = make_shared<DescribeMigrationJobStatusResponseBodySourceEndpoint>(model1);
      }
    }
    if (m.find("StructureInitializationStatus") != m.end() && !m["StructureInitializationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["StructureInitializationStatus"].type()) {
        DescribeMigrationJobStatusResponseBodyStructureInitializationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StructureInitializationStatus"]));
        structureInitializationStatus = make_shared<DescribeMigrationJobStatusResponseBodyStructureInitializationStatus>(model1);
      }
    }
  }


  virtual ~DescribeMigrationJobStatusResponseBody() = default;
};
class DescribeMigrationJobStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMigrationJobStatusResponseBody> body{};

  DescribeMigrationJobStatusResponse() {}

  explicit DescribeMigrationJobStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMigrationJobStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMigrationJobStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMigrationJobStatusResponse() = default;
};
class DescribeMigrationJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> migrationJobName{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeMigrationJobsRequest() {}

  explicit DescribeMigrationJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (migrationJobName) {
      res["MigrationJobName"] = boost::any(*migrationJobName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MigrationJobName") != m.end() && !m["MigrationJobName"].empty()) {
      migrationJobName = make_shared<string>(boost::any_cast<string>(m["MigrationJobName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeMigrationJobsRequest() = default;
};
class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};

  DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization() {}

  explicit DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization() = default;
};
class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization : public Darabonba::Model {
public:
  shared_ptr<string> delay{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> status{};

  DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization() {}

  explicit DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delay) {
      res["Delay"] = boost::any(*delay);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Delay") != m.end() && !m["Delay"].empty()) {
      delay = make_shared<string>(boost::any_cast<string>(m["Delay"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization() = default;
};
class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<string> engineName{};
  shared_ptr<string> IP{};
  shared_ptr<string> instanceID{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> oracleSID{};
  shared_ptr<string> port{};
  shared_ptr<string> userName{};

  DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint() {}

  explicit DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (engineName) {
      res["EngineName"] = boost::any(*engineName);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (oracleSID) {
      res["OracleSID"] = boost::any(*oracleSID);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("EngineName") != m.end() && !m["EngineName"].empty()) {
      engineName = make_shared<string>(boost::any_cast<string>(m["EngineName"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OracleSID") != m.end() && !m["OracleSID"].empty()) {
      oracleSID = make_shared<string>(boost::any_cast<string>(m["OracleSID"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint() = default;
};
class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode : public Darabonba::Model {
public:
  shared_ptr<bool> dataInitialization{};
  shared_ptr<bool> dataSynchronization{};
  shared_ptr<bool> structureInitialization{};

  DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode() {}

  explicit DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInitialization) {
      res["DataInitialization"] = boost::any(*dataInitialization);
    }
    if (dataSynchronization) {
      res["DataSynchronization"] = boost::any(*dataSynchronization);
    }
    if (structureInitialization) {
      res["StructureInitialization"] = boost::any(*structureInitialization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInitialization") != m.end() && !m["DataInitialization"].empty()) {
      dataInitialization = make_shared<bool>(boost::any_cast<bool>(m["DataInitialization"]));
    }
    if (m.find("DataSynchronization") != m.end() && !m["DataSynchronization"].empty()) {
      dataSynchronization = make_shared<bool>(boost::any_cast<bool>(m["DataSynchronization"]));
    }
    if (m.find("StructureInitialization") != m.end() && !m["StructureInitialization"].empty()) {
      structureInitialization = make_shared<bool>(boost::any_cast<bool>(m["StructureInitialization"]));
    }
  }


  virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode() = default;
};
class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> table{};

  DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList() {}

  explicit DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Table"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      table = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList() = default;
};
class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList> tableList{};
  shared_ptr<string> wholeDatabase{};

  DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject() {}

  explicit DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (tableList) {
      res["TableList"] = tableList ? boost::any(tableList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wholeDatabase) {
      res["WholeDatabase"] = boost::any(*wholeDatabase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("TableList") != m.end() && !m["TableList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableList"].type()) {
        DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableList"]));
        tableList = make_shared<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObjectTableList>(model1);
      }
    }
    if (m.find("WholeDatabase") != m.end() && !m["WholeDatabase"].empty()) {
      wholeDatabase = make_shared<string>(boost::any_cast<string>(m["WholeDatabase"]));
    }
  }


  virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject() = default;
};
class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject>> synchronousObject{};

  DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject() {}

  explicit DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (synchronousObject) {
      vector<boost::any> temp1;
      for(auto item1:*synchronousObject){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SynchronousObject"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SynchronousObject") != m.end() && !m["SynchronousObject"].empty()) {
      if (typeid(vector<boost::any>) == m["SynchronousObject"].type()) {
        vector<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SynchronousObject"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        synchronousObject = make_shared<vector<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObjectSynchronousObject>>(expect1);
      }
    }
  }


  virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject() = default;
};
class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck : public Darabonba::Model {
public:
  shared_ptr<string> percent{};
  shared_ptr<string> status{};

  DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck() {}

  explicit DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck() = default;
};
class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<string> engineName{};
  shared_ptr<string> IP{};
  shared_ptr<string> instanceID{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> oracleSID{};
  shared_ptr<string> port{};
  shared_ptr<string> userName{};

  DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint() {}

  explicit DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (engineName) {
      res["EngineName"] = boost::any(*engineName);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (oracleSID) {
      res["OracleSID"] = boost::any(*oracleSID);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("EngineName") != m.end() && !m["EngineName"].empty()) {
      engineName = make_shared<string>(boost::any_cast<string>(m["EngineName"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OracleSID") != m.end() && !m["OracleSID"].empty()) {
      oracleSID = make_shared<string>(boost::any_cast<string>(m["OracleSID"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint() = default;
};
class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};

  DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization() {}

  explicit DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization() = default;
};
class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob : public Darabonba::Model {
public:
  shared_ptr<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization> dataInitialization{};
  shared_ptr<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization> dataSynchronization{};
  shared_ptr<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint> destinationEndpoint{};
  shared_ptr<string> migrationJobClass{};
  shared_ptr<string> migrationJobID{};
  shared_ptr<string> migrationJobName{};
  shared_ptr<string> migrationJobStatus{};
  shared_ptr<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode> migrationMode{};
  shared_ptr<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject> migrationObject{};
  shared_ptr<string> payType{};
  shared_ptr<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck> precheck{};
  shared_ptr<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint> sourceEndpoint{};
  shared_ptr<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization> structureInitialization{};

  DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob() {}

  explicit DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInitialization) {
      res["DataInitialization"] = dataInitialization ? boost::any(dataInitialization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSynchronization) {
      res["DataSynchronization"] = dataSynchronization ? boost::any(dataSynchronization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (destinationEndpoint) {
      res["DestinationEndpoint"] = destinationEndpoint ? boost::any(destinationEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (migrationJobClass) {
      res["MigrationJobClass"] = boost::any(*migrationJobClass);
    }
    if (migrationJobID) {
      res["MigrationJobID"] = boost::any(*migrationJobID);
    }
    if (migrationJobName) {
      res["MigrationJobName"] = boost::any(*migrationJobName);
    }
    if (migrationJobStatus) {
      res["MigrationJobStatus"] = boost::any(*migrationJobStatus);
    }
    if (migrationMode) {
      res["MigrationMode"] = migrationMode ? boost::any(migrationMode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (migrationObject) {
      res["MigrationObject"] = migrationObject ? boost::any(migrationObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (precheck) {
      res["Precheck"] = precheck ? boost::any(precheck->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceEndpoint) {
      res["SourceEndpoint"] = sourceEndpoint ? boost::any(sourceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (structureInitialization) {
      res["StructureInitialization"] = structureInitialization ? boost::any(structureInitialization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInitialization") != m.end() && !m["DataInitialization"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataInitialization"].type()) {
        DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataInitialization"]));
        dataInitialization = make_shared<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization>(model1);
      }
    }
    if (m.find("DataSynchronization") != m.end() && !m["DataSynchronization"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSynchronization"].type()) {
        DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSynchronization"]));
        dataSynchronization = make_shared<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization>(model1);
      }
    }
    if (m.find("DestinationEndpoint") != m.end() && !m["DestinationEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationEndpoint"].type()) {
        DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationEndpoint"]));
        destinationEndpoint = make_shared<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint>(model1);
      }
    }
    if (m.find("MigrationJobClass") != m.end() && !m["MigrationJobClass"].empty()) {
      migrationJobClass = make_shared<string>(boost::any_cast<string>(m["MigrationJobClass"]));
    }
    if (m.find("MigrationJobID") != m.end() && !m["MigrationJobID"].empty()) {
      migrationJobID = make_shared<string>(boost::any_cast<string>(m["MigrationJobID"]));
    }
    if (m.find("MigrationJobName") != m.end() && !m["MigrationJobName"].empty()) {
      migrationJobName = make_shared<string>(boost::any_cast<string>(m["MigrationJobName"]));
    }
    if (m.find("MigrationJobStatus") != m.end() && !m["MigrationJobStatus"].empty()) {
      migrationJobStatus = make_shared<string>(boost::any_cast<string>(m["MigrationJobStatus"]));
    }
    if (m.find("MigrationMode") != m.end() && !m["MigrationMode"].empty()) {
      if (typeid(map<string, boost::any>) == m["MigrationMode"].type()) {
        DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MigrationMode"]));
        migrationMode = make_shared<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode>(model1);
      }
    }
    if (m.find("MigrationObject") != m.end() && !m["MigrationObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["MigrationObject"].type()) {
        DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MigrationObject"]));
        migrationObject = make_shared<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject>(model1);
      }
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Precheck") != m.end() && !m["Precheck"].empty()) {
      if (typeid(map<string, boost::any>) == m["Precheck"].type()) {
        DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Precheck"]));
        precheck = make_shared<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck>(model1);
      }
    }
    if (m.find("SourceEndpoint") != m.end() && !m["SourceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceEndpoint"].type()) {
        DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceEndpoint"]));
        sourceEndpoint = make_shared<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint>(model1);
      }
    }
    if (m.find("StructureInitialization") != m.end() && !m["StructureInitialization"].empty()) {
      if (typeid(map<string, boost::any>) == m["StructureInitialization"].type()) {
        DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StructureInitialization"]));
        structureInitialization = make_shared<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization>(model1);
      }
    }
  }


  virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob() = default;
};
class DescribeMigrationJobsResponseBodyMigrationJobs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob>> migrationJob{};

  DescribeMigrationJobsResponseBodyMigrationJobs() {}

  explicit DescribeMigrationJobsResponseBodyMigrationJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (migrationJob) {
      vector<boost::any> temp1;
      for(auto item1:*migrationJob){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MigrationJob"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MigrationJob") != m.end() && !m["MigrationJob"].empty()) {
      if (typeid(vector<boost::any>) == m["MigrationJob"].type()) {
        vector<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MigrationJob"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        migrationJob = make_shared<vector<DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob>>(expect1);
      }
    }
  }


  virtual ~DescribeMigrationJobsResponseBodyMigrationJobs() = default;
};
class DescribeMigrationJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeMigrationJobsResponseBodyMigrationJobs> migrationJobs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<long> totalRecordCount{};

  DescribeMigrationJobsResponseBody() {}

  explicit DescribeMigrationJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (migrationJobs) {
      res["MigrationJobs"] = migrationJobs ? boost::any(migrationJobs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MigrationJobs") != m.end() && !m["MigrationJobs"].empty()) {
      if (typeid(map<string, boost::any>) == m["MigrationJobs"].type()) {
        DescribeMigrationJobsResponseBodyMigrationJobs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MigrationJobs"]));
        migrationJobs = make_shared<DescribeMigrationJobsResponseBodyMigrationJobs>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeMigrationJobsResponseBody() = default;
};
class DescribeMigrationJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMigrationJobsResponseBody> body{};

  DescribeMigrationJobsResponse() {}

  explicit DescribeMigrationJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMigrationJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMigrationJobsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMigrationJobsResponse() = default;
};
class DescribeSubscriptionInstanceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> subscriptionInstanceId{};

  DescribeSubscriptionInstanceStatusRequest() {}

  explicit DescribeSubscriptionInstanceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (subscriptionInstanceId) {
      res["SubscriptionInstanceId"] = boost::any(*subscriptionInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SubscriptionInstanceId") != m.end() && !m["SubscriptionInstanceId"].empty()) {
      subscriptionInstanceId = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceId"]));
    }
  }


  virtual ~DescribeSubscriptionInstanceStatusRequest() = default;
};
class DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> instanceID{};
  shared_ptr<string> instanceType{};

  DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint() {}

  explicit DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint() = default;
};
class DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType : public Darabonba::Model {
public:
  shared_ptr<bool> DDL{};
  shared_ptr<bool> DML{};

  DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType() {}

  explicit DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DDL) {
      res["DDL"] = boost::any(*DDL);
    }
    if (DML) {
      res["DML"] = boost::any(*DML);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DDL") != m.end() && !m["DDL"].empty()) {
      DDL = make_shared<bool>(boost::any_cast<bool>(m["DDL"]));
    }
    if (m.find("DML") != m.end() && !m["DML"].empty()) {
      DML = make_shared<bool>(boost::any_cast<bool>(m["DML"]));
    }
  }


  virtual ~DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType() = default;
};
class DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> table{};

  DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList() {}

  explicit DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Table"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      table = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList() = default;
};
class DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList> tableList{};
  shared_ptr<string> wholeDatabase{};

  DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject() {}

  explicit DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (tableList) {
      res["TableList"] = tableList ? boost::any(tableList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wholeDatabase) {
      res["WholeDatabase"] = boost::any(*wholeDatabase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("TableList") != m.end() && !m["TableList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableList"].type()) {
        DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableList"]));
        tableList = make_shared<DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList>(model1);
      }
    }
    if (m.find("WholeDatabase") != m.end() && !m["WholeDatabase"].empty()) {
      wholeDatabase = make_shared<string>(boost::any_cast<string>(m["WholeDatabase"]));
    }
  }


  virtual ~DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject() = default;
};
class DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject>> synchronousObject{};

  DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject() {}

  explicit DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (synchronousObject) {
      vector<boost::any> temp1;
      for(auto item1:*synchronousObject){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SynchronousObject"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SynchronousObject") != m.end() && !m["SynchronousObject"].empty()) {
      if (typeid(vector<boost::any>) == m["SynchronousObject"].type()) {
        vector<DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SynchronousObject"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        synchronousObject = make_shared<vector<DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObject>>(expect1);
      }
    }
  }


  virtual ~DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject() = default;
};
class DescribeSubscriptionInstanceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> beginTimestamp{};
  shared_ptr<string> consumptionCheckpoint{};
  shared_ptr<string> consumptionClient{};
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> payType{};
  shared_ptr<DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint> sourceEndpoint{};
  shared_ptr<string> status{};
  shared_ptr<DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType> subscriptionDataType{};
  shared_ptr<string> subscriptionInstanceID{};
  shared_ptr<string> subscriptionInstanceName{};
  shared_ptr<DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject> subscriptionObject{};

  DescribeSubscriptionInstanceStatusResponseBody() {}

  explicit DescribeSubscriptionInstanceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTimestamp) {
      res["BeginTimestamp"] = boost::any(*beginTimestamp);
    }
    if (consumptionCheckpoint) {
      res["ConsumptionCheckpoint"] = boost::any(*consumptionCheckpoint);
    }
    if (consumptionClient) {
      res["ConsumptionClient"] = boost::any(*consumptionClient);
    }
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (sourceEndpoint) {
      res["SourceEndpoint"] = sourceEndpoint ? boost::any(sourceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subscriptionDataType) {
      res["SubscriptionDataType"] = subscriptionDataType ? boost::any(subscriptionDataType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subscriptionInstanceID) {
      res["SubscriptionInstanceID"] = boost::any(*subscriptionInstanceID);
    }
    if (subscriptionInstanceName) {
      res["SubscriptionInstanceName"] = boost::any(*subscriptionInstanceName);
    }
    if (subscriptionObject) {
      res["SubscriptionObject"] = subscriptionObject ? boost::any(subscriptionObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTimestamp") != m.end() && !m["BeginTimestamp"].empty()) {
      beginTimestamp = make_shared<string>(boost::any_cast<string>(m["BeginTimestamp"]));
    }
    if (m.find("ConsumptionCheckpoint") != m.end() && !m["ConsumptionCheckpoint"].empty()) {
      consumptionCheckpoint = make_shared<string>(boost::any_cast<string>(m["ConsumptionCheckpoint"]));
    }
    if (m.find("ConsumptionClient") != m.end() && !m["ConsumptionClient"].empty()) {
      consumptionClient = make_shared<string>(boost::any_cast<string>(m["ConsumptionClient"]));
    }
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("SourceEndpoint") != m.end() && !m["SourceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceEndpoint"].type()) {
        DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceEndpoint"]));
        sourceEndpoint = make_shared<DescribeSubscriptionInstanceStatusResponseBodySourceEndpoint>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubscriptionDataType") != m.end() && !m["SubscriptionDataType"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionDataType"].type()) {
        DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionDataType"]));
        subscriptionDataType = make_shared<DescribeSubscriptionInstanceStatusResponseBodySubscriptionDataType>(model1);
      }
    }
    if (m.find("SubscriptionInstanceID") != m.end() && !m["SubscriptionInstanceID"].empty()) {
      subscriptionInstanceID = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceID"]));
    }
    if (m.find("SubscriptionInstanceName") != m.end() && !m["SubscriptionInstanceName"].empty()) {
      subscriptionInstanceName = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceName"]));
    }
    if (m.find("SubscriptionObject") != m.end() && !m["SubscriptionObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionObject"].type()) {
        DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionObject"]));
        subscriptionObject = make_shared<DescribeSubscriptionInstanceStatusResponseBodySubscriptionObject>(model1);
      }
    }
  }


  virtual ~DescribeSubscriptionInstanceStatusResponseBody() = default;
};
class DescribeSubscriptionInstanceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSubscriptionInstanceStatusResponseBody> body{};

  DescribeSubscriptionInstanceStatusResponse() {}

  explicit DescribeSubscriptionInstanceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSubscriptionInstanceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSubscriptionInstanceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSubscriptionInstanceStatusResponse() = default;
};
class DescribeSubscriptionInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> subscriptionInstanceName{};

  DescribeSubscriptionInstancesRequest() {}

  explicit DescribeSubscriptionInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (subscriptionInstanceName) {
      res["SubscriptionInstanceName"] = boost::any(*subscriptionInstanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SubscriptionInstanceName") != m.end() && !m["SubscriptionInstanceName"].empty()) {
      subscriptionInstanceName = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceName"]));
    }
  }


  virtual ~DescribeSubscriptionInstancesRequest() = default;
};
class DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> instanceID{};
  shared_ptr<string> instanceType{};

  DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint() {}

  explicit DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint() = default;
};
class DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType : public Darabonba::Model {
public:
  shared_ptr<bool> DDL{};
  shared_ptr<bool> DML{};

  DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType() {}

  explicit DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DDL) {
      res["DDL"] = boost::any(*DDL);
    }
    if (DML) {
      res["DML"] = boost::any(*DML);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DDL") != m.end() && !m["DDL"].empty()) {
      DDL = make_shared<bool>(boost::any_cast<bool>(m["DDL"]));
    }
    if (m.find("DML") != m.end() && !m["DML"].empty()) {
      DML = make_shared<bool>(boost::any_cast<bool>(m["DML"]));
    }
  }


  virtual ~DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType() = default;
};
class DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObjectTableList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> table{};

  DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObjectTableList() {}

  explicit DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObjectTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      res["Table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Table"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      table = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObjectTableList() = default;
};
class DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObjectTableList> tableList{};
  shared_ptr<string> wholeDatabase{};

  DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject() {}

  explicit DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (tableList) {
      res["TableList"] = tableList ? boost::any(tableList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wholeDatabase) {
      res["WholeDatabase"] = boost::any(*wholeDatabase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("TableList") != m.end() && !m["TableList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableList"].type()) {
        DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObjectTableList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableList"]));
        tableList = make_shared<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObjectTableList>(model1);
      }
    }
    if (m.find("WholeDatabase") != m.end() && !m["WholeDatabase"].empty()) {
      wholeDatabase = make_shared<string>(boost::any_cast<string>(m["WholeDatabase"]));
    }
  }


  virtual ~DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject() = default;
};
class DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject>> synchronousObject{};

  DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject() {}

  explicit DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (synchronousObject) {
      vector<boost::any> temp1;
      for(auto item1:*synchronousObject){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SynchronousObject"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SynchronousObject") != m.end() && !m["SynchronousObject"].empty()) {
      if (typeid(vector<boost::any>) == m["SynchronousObject"].type()) {
        vector<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SynchronousObject"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        synchronousObject = make_shared<vector<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject>>(expect1);
      }
    }
  }


  virtual ~DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject() = default;
};
class DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance : public Darabonba::Model {
public:
  shared_ptr<string> beginTimestamp{};
  shared_ptr<string> consumptionCheckpoint{};
  shared_ptr<string> consumptionClient{};
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> payType{};
  shared_ptr<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint> sourceEndpoint{};
  shared_ptr<string> status{};
  shared_ptr<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType> subscriptionDataType{};
  shared_ptr<string> subscriptionInstanceID{};
  shared_ptr<string> subscriptionInstanceName{};
  shared_ptr<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject> subscriptionObject{};

  DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance() {}

  explicit DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTimestamp) {
      res["BeginTimestamp"] = boost::any(*beginTimestamp);
    }
    if (consumptionCheckpoint) {
      res["ConsumptionCheckpoint"] = boost::any(*consumptionCheckpoint);
    }
    if (consumptionClient) {
      res["ConsumptionClient"] = boost::any(*consumptionClient);
    }
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (sourceEndpoint) {
      res["SourceEndpoint"] = sourceEndpoint ? boost::any(sourceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subscriptionDataType) {
      res["SubscriptionDataType"] = subscriptionDataType ? boost::any(subscriptionDataType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subscriptionInstanceID) {
      res["SubscriptionInstanceID"] = boost::any(*subscriptionInstanceID);
    }
    if (subscriptionInstanceName) {
      res["SubscriptionInstanceName"] = boost::any(*subscriptionInstanceName);
    }
    if (subscriptionObject) {
      res["SubscriptionObject"] = subscriptionObject ? boost::any(subscriptionObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTimestamp") != m.end() && !m["BeginTimestamp"].empty()) {
      beginTimestamp = make_shared<string>(boost::any_cast<string>(m["BeginTimestamp"]));
    }
    if (m.find("ConsumptionCheckpoint") != m.end() && !m["ConsumptionCheckpoint"].empty()) {
      consumptionCheckpoint = make_shared<string>(boost::any_cast<string>(m["ConsumptionCheckpoint"]));
    }
    if (m.find("ConsumptionClient") != m.end() && !m["ConsumptionClient"].empty()) {
      consumptionClient = make_shared<string>(boost::any_cast<string>(m["ConsumptionClient"]));
    }
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("SourceEndpoint") != m.end() && !m["SourceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceEndpoint"].type()) {
        DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceEndpoint"]));
        sourceEndpoint = make_shared<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSourceEndpoint>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubscriptionDataType") != m.end() && !m["SubscriptionDataType"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionDataType"].type()) {
        DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionDataType"]));
        subscriptionDataType = make_shared<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionDataType>(model1);
      }
    }
    if (m.find("SubscriptionInstanceID") != m.end() && !m["SubscriptionInstanceID"].empty()) {
      subscriptionInstanceID = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceID"]));
    }
    if (m.find("SubscriptionInstanceName") != m.end() && !m["SubscriptionInstanceName"].empty()) {
      subscriptionInstanceName = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceName"]));
    }
    if (m.find("SubscriptionObject") != m.end() && !m["SubscriptionObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionObject"].type()) {
        DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionObject"]));
        subscriptionObject = make_shared<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceSubscriptionObject>(model1);
      }
    }
  }


  virtual ~DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance() = default;
};
class DescribeSubscriptionInstancesResponseBodySubscriptionInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance>> subscriptionInstance{};

  DescribeSubscriptionInstancesResponseBodySubscriptionInstances() {}

  explicit DescribeSubscriptionInstancesResponseBodySubscriptionInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subscriptionInstance) {
      vector<boost::any> temp1;
      for(auto item1:*subscriptionInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubscriptionInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubscriptionInstance") != m.end() && !m["SubscriptionInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["SubscriptionInstance"].type()) {
        vector<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubscriptionInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subscriptionInstance = make_shared<vector<DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeSubscriptionInstancesResponseBodySubscriptionInstances() = default;
};
class DescribeSubscriptionInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<DescribeSubscriptionInstancesResponseBodySubscriptionInstances> subscriptionInstances{};
  shared_ptr<long> totalRecordCount{};

  DescribeSubscriptionInstancesResponseBody() {}

  explicit DescribeSubscriptionInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (subscriptionInstances) {
      res["SubscriptionInstances"] = subscriptionInstances ? boost::any(subscriptionInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("SubscriptionInstances") != m.end() && !m["SubscriptionInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubscriptionInstances"].type()) {
        DescribeSubscriptionInstancesResponseBodySubscriptionInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubscriptionInstances"]));
        subscriptionInstances = make_shared<DescribeSubscriptionInstancesResponseBodySubscriptionInstances>(model1);
      }
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeSubscriptionInstancesResponseBody() = default;
};
class DescribeSubscriptionInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSubscriptionInstancesResponseBody> body{};

  DescribeSubscriptionInstancesResponse() {}

  explicit DescribeSubscriptionInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSubscriptionInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSubscriptionInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSubscriptionInstancesResponse() = default;
};
class DescribeSubscriptionObjectModifyStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> subscriptionInstanceId{};

  DescribeSubscriptionObjectModifyStatusRequest() {}

  explicit DescribeSubscriptionObjectModifyStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (subscriptionInstanceId) {
      res["SubscriptionInstanceId"] = boost::any(*subscriptionInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SubscriptionInstanceId") != m.end() && !m["SubscriptionInstanceId"].empty()) {
      subscriptionInstanceId = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceId"]));
    }
  }


  virtual ~DescribeSubscriptionObjectModifyStatusRequest() = default;
};
class DescribeSubscriptionObjectModifyStatusResponseBodyDetailCheckItem : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> itemName{};
  shared_ptr<string> repairMethod{};

  DescribeSubscriptionObjectModifyStatusResponseBodyDetailCheckItem() {}

  explicit DescribeSubscriptionObjectModifyStatusResponseBodyDetailCheckItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (repairMethod) {
      res["RepairMethod"] = boost::any(*repairMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("RepairMethod") != m.end() && !m["RepairMethod"].empty()) {
      repairMethod = make_shared<string>(boost::any_cast<string>(m["RepairMethod"]));
    }
  }


  virtual ~DescribeSubscriptionObjectModifyStatusResponseBodyDetailCheckItem() = default;
};
class DescribeSubscriptionObjectModifyStatusResponseBodyDetail : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSubscriptionObjectModifyStatusResponseBodyDetailCheckItem>> checkItem{};

  DescribeSubscriptionObjectModifyStatusResponseBodyDetail() {}

  explicit DescribeSubscriptionObjectModifyStatusResponseBodyDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkItem) {
      vector<boost::any> temp1;
      for(auto item1:*checkItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CheckItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckItem") != m.end() && !m["CheckItem"].empty()) {
      if (typeid(vector<boost::any>) == m["CheckItem"].type()) {
        vector<DescribeSubscriptionObjectModifyStatusResponseBodyDetailCheckItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CheckItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSubscriptionObjectModifyStatusResponseBodyDetailCheckItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkItem = make_shared<vector<DescribeSubscriptionObjectModifyStatusResponseBodyDetailCheckItem>>(expect1);
      }
    }
  }


  virtual ~DescribeSubscriptionObjectModifyStatusResponseBodyDetail() = default;
};
class DescribeSubscriptionObjectModifyStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSubscriptionObjectModifyStatusResponseBodyDetail> detail{};
  shared_ptr<string> percent{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribeSubscriptionObjectModifyStatusResponseBody() {}

  explicit DescribeSubscriptionObjectModifyStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = detail ? boost::any(detail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
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
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(map<string, boost::any>) == m["Detail"].type()) {
        DescribeSubscriptionObjectModifyStatusResponseBodyDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Detail"]));
        detail = make_shared<DescribeSubscriptionObjectModifyStatusResponseBodyDetail>(model1);
      }
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSubscriptionObjectModifyStatusResponseBody() = default;
};
class DescribeSubscriptionObjectModifyStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSubscriptionObjectModifyStatusResponseBody> body{};

  DescribeSubscriptionObjectModifyStatusResponse() {}

  explicit DescribeSubscriptionObjectModifyStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSubscriptionObjectModifyStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSubscriptionObjectModifyStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSubscriptionObjectModifyStatusResponse() = default;
};
class DescribeSynchronizationJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationJobId{};

  DescribeSynchronizationJobStatusRequest() {}

  explicit DescribeSynchronizationJobStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
  }


  virtual ~DescribeSynchronizationJobStatusRequest() = default;
};
class DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};

  DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus() {}

  explicit DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus() = default;
};
class DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus : public Darabonba::Model {
public:
  shared_ptr<string> checkpoint{};
  shared_ptr<string> delay{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> status{};

  DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus() {}

  explicit DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkpoint) {
      res["Checkpoint"] = boost::any(*checkpoint);
    }
    if (delay) {
      res["Delay"] = boost::any(*delay);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Checkpoint") != m.end() && !m["Checkpoint"].empty()) {
      checkpoint = make_shared<string>(boost::any_cast<string>(m["Checkpoint"]));
    }
    if (m.find("Delay") != m.end() && !m["Delay"].empty()) {
      delay = make_shared<string>(boost::any_cast<string>(m["Delay"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus() = default;
};
class DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};

  DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint() {}

  explicit DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint() = default;
};
class DescribeSynchronizationJobStatusResponseBodyPerformance : public Darabonba::Model {
public:
  shared_ptr<string> FLOW{};
  shared_ptr<string> RPS{};

  DescribeSynchronizationJobStatusResponseBodyPerformance() {}

  explicit DescribeSynchronizationJobStatusResponseBodyPerformance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (FLOW) {
      res["FLOW"] = boost::any(*FLOW);
    }
    if (RPS) {
      res["RPS"] = boost::any(*RPS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FLOW") != m.end() && !m["FLOW"].empty()) {
      FLOW = make_shared<string>(boost::any_cast<string>(m["FLOW"]));
    }
    if (m.find("RPS") != m.end() && !m["RPS"].empty()) {
      RPS = make_shared<string>(boost::any_cast<string>(m["RPS"]));
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponseBodyPerformance() = default;
};
class DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> itemName{};
  shared_ptr<string> repairMethod{};

  DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail() {}

  explicit DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (repairMethod) {
      res["RepairMethod"] = boost::any(*repairMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("RepairMethod") != m.end() && !m["RepairMethod"].empty()) {
      repairMethod = make_shared<string>(boost::any_cast<string>(m["RepairMethod"]));
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail() = default;
};
class DescribeSynchronizationJobStatusResponseBodyPrecheckStatus : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail>> detail{};
  shared_ptr<string> percent{};
  shared_ptr<string> status{};

  DescribeSynchronizationJobStatusResponseBodyPrecheckStatus() {}

  explicit DescribeSynchronizationJobStatusResponseBodyPrecheckStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      vector<boost::any> temp1;
      for(auto item1:*detail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detail"] = boost::any(temp1);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(vector<boost::any>) == m["Detail"].type()) {
        vector<DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detail = make_shared<vector<DescribeSynchronizationJobStatusResponseBodyPrecheckStatusDetail>>(expect1);
      }
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponseBodyPrecheckStatus() = default;
};
class DescribeSynchronizationJobStatusResponseBodySourceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};

  DescribeSynchronizationJobStatusResponseBodySourceEndpoint() {}

  explicit DescribeSynchronizationJobStatusResponseBodySourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponseBodySourceEndpoint() = default;
};
class DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};

  DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus() {}

  explicit DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus() = default;
};
class DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};

  DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes() {}

  explicit DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes() = default;
};
class DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableIncludes : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};

  DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableIncludes() {}

  explicit DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableIncludes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableIncludes() = default;
};
class DescribeSynchronizationJobStatusResponseBodySynchronizationObjects : public Darabonba::Model {
public:
  shared_ptr<string> newSchemaName{};
  shared_ptr<string> schemaName{};
  shared_ptr<vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes>> tableExcludes{};
  shared_ptr<vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableIncludes>> tableIncludes{};

  DescribeSynchronizationJobStatusResponseBodySynchronizationObjects() {}

  explicit DescribeSynchronizationJobStatusResponseBodySynchronizationObjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newSchemaName) {
      res["NewSchemaName"] = boost::any(*newSchemaName);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableExcludes) {
      vector<boost::any> temp1;
      for(auto item1:*tableExcludes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableExcludes"] = boost::any(temp1);
    }
    if (tableIncludes) {
      vector<boost::any> temp1;
      for(auto item1:*tableIncludes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableIncludes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewSchemaName") != m.end() && !m["NewSchemaName"].empty()) {
      newSchemaName = make_shared<string>(boost::any_cast<string>(m["NewSchemaName"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableExcludes") != m.end() && !m["TableExcludes"].empty()) {
      if (typeid(vector<boost::any>) == m["TableExcludes"].type()) {
        vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableExcludes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableExcludes = make_shared<vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableExcludes>>(expect1);
      }
    }
    if (m.find("TableIncludes") != m.end() && !m["TableIncludes"].empty()) {
      if (typeid(vector<boost::any>) == m["TableIncludes"].type()) {
        vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableIncludes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableIncludes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableIncludes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableIncludes = make_shared<vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjectsTableIncludes>>(expect1);
      }
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponseBodySynchronizationObjects() = default;
};
class DescribeSynchronizationJobStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> checkpoint{};
  shared_ptr<string> dataInitialization{};
  shared_ptr<DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus> dataInitializationStatus{};
  shared_ptr<DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus> dataSynchronizationStatus{};
  shared_ptr<string> delay{};
  shared_ptr<DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint> destinationEndpoint{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> payType{};
  shared_ptr<DescribeSynchronizationJobStatusResponseBodyPerformance> performance{};
  shared_ptr<DescribeSynchronizationJobStatusResponseBodyPrecheckStatus> precheckStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSynchronizationJobStatusResponseBodySourceEndpoint> sourceEndpoint{};
  shared_ptr<string> status{};
  shared_ptr<string> structureInitialization{};
  shared_ptr<DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus> structureInitializationStatus{};
  shared_ptr<string> synchronizationJobClass{};
  shared_ptr<string> synchronizationJobId{};
  shared_ptr<string> synchronizationJobName{};
  shared_ptr<vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjects>> synchronizationObjects{};

  DescribeSynchronizationJobStatusResponseBody() {}

  explicit DescribeSynchronizationJobStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkpoint) {
      res["Checkpoint"] = boost::any(*checkpoint);
    }
    if (dataInitialization) {
      res["DataInitialization"] = boost::any(*dataInitialization);
    }
    if (dataInitializationStatus) {
      res["DataInitializationStatus"] = dataInitializationStatus ? boost::any(dataInitializationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSynchronizationStatus) {
      res["DataSynchronizationStatus"] = dataSynchronizationStatus ? boost::any(dataSynchronizationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (delay) {
      res["Delay"] = boost::any(*delay);
    }
    if (destinationEndpoint) {
      res["DestinationEndpoint"] = destinationEndpoint ? boost::any(destinationEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (performance) {
      res["Performance"] = performance ? boost::any(performance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (precheckStatus) {
      res["PrecheckStatus"] = precheckStatus ? boost::any(precheckStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceEndpoint) {
      res["SourceEndpoint"] = sourceEndpoint ? boost::any(sourceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (structureInitialization) {
      res["StructureInitialization"] = boost::any(*structureInitialization);
    }
    if (structureInitializationStatus) {
      res["StructureInitializationStatus"] = structureInitializationStatus ? boost::any(structureInitializationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (synchronizationJobClass) {
      res["SynchronizationJobClass"] = boost::any(*synchronizationJobClass);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    if (synchronizationJobName) {
      res["SynchronizationJobName"] = boost::any(*synchronizationJobName);
    }
    if (synchronizationObjects) {
      vector<boost::any> temp1;
      for(auto item1:*synchronizationObjects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SynchronizationObjects"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Checkpoint") != m.end() && !m["Checkpoint"].empty()) {
      checkpoint = make_shared<string>(boost::any_cast<string>(m["Checkpoint"]));
    }
    if (m.find("DataInitialization") != m.end() && !m["DataInitialization"].empty()) {
      dataInitialization = make_shared<string>(boost::any_cast<string>(m["DataInitialization"]));
    }
    if (m.find("DataInitializationStatus") != m.end() && !m["DataInitializationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataInitializationStatus"].type()) {
        DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataInitializationStatus"]));
        dataInitializationStatus = make_shared<DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus>(model1);
      }
    }
    if (m.find("DataSynchronizationStatus") != m.end() && !m["DataSynchronizationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSynchronizationStatus"].type()) {
        DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSynchronizationStatus"]));
        dataSynchronizationStatus = make_shared<DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus>(model1);
      }
    }
    if (m.find("Delay") != m.end() && !m["Delay"].empty()) {
      delay = make_shared<string>(boost::any_cast<string>(m["Delay"]));
    }
    if (m.find("DestinationEndpoint") != m.end() && !m["DestinationEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationEndpoint"].type()) {
        DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationEndpoint"]));
        destinationEndpoint = make_shared<DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Performance") != m.end() && !m["Performance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Performance"].type()) {
        DescribeSynchronizationJobStatusResponseBodyPerformance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Performance"]));
        performance = make_shared<DescribeSynchronizationJobStatusResponseBodyPerformance>(model1);
      }
    }
    if (m.find("PrecheckStatus") != m.end() && !m["PrecheckStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrecheckStatus"].type()) {
        DescribeSynchronizationJobStatusResponseBodyPrecheckStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrecheckStatus"]));
        precheckStatus = make_shared<DescribeSynchronizationJobStatusResponseBodyPrecheckStatus>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceEndpoint") != m.end() && !m["SourceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceEndpoint"].type()) {
        DescribeSynchronizationJobStatusResponseBodySourceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceEndpoint"]));
        sourceEndpoint = make_shared<DescribeSynchronizationJobStatusResponseBodySourceEndpoint>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StructureInitialization") != m.end() && !m["StructureInitialization"].empty()) {
      structureInitialization = make_shared<string>(boost::any_cast<string>(m["StructureInitialization"]));
    }
    if (m.find("StructureInitializationStatus") != m.end() && !m["StructureInitializationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["StructureInitializationStatus"].type()) {
        DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StructureInitializationStatus"]));
        structureInitializationStatus = make_shared<DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus>(model1);
      }
    }
    if (m.find("SynchronizationJobClass") != m.end() && !m["SynchronizationJobClass"].empty()) {
      synchronizationJobClass = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobClass"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
    if (m.find("SynchronizationJobName") != m.end() && !m["SynchronizationJobName"].empty()) {
      synchronizationJobName = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobName"]));
    }
    if (m.find("SynchronizationObjects") != m.end() && !m["SynchronizationObjects"].empty()) {
      if (typeid(vector<boost::any>) == m["SynchronizationObjects"].type()) {
        vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SynchronizationObjects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSynchronizationJobStatusResponseBodySynchronizationObjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        synchronizationObjects = make_shared<vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjects>>(expect1);
      }
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponseBody() = default;
};
class DescribeSynchronizationJobStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSynchronizationJobStatusResponseBody> body{};

  DescribeSynchronizationJobStatusResponse() {}

  explicit DescribeSynchronizationJobStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSynchronizationJobStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSynchronizationJobStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSynchronizationJobStatusResponse() = default;
};
class DescribeSynchronizationJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> synchronizationJobName{};

  DescribeSynchronizationJobsRequest() {}

  explicit DescribeSynchronizationJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (synchronizationJobName) {
      res["SynchronizationJobName"] = boost::any(*synchronizationJobName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SynchronizationJobName") != m.end() && !m["SynchronizationJobName"].empty()) {
      synchronizationJobName = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobName"]));
    }
  }


  virtual ~DescribeSynchronizationJobsRequest() = default;
};
class DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus() = default;
};
class DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus : public Darabonba::Model {
public:
  shared_ptr<string> delay{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> status{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delay) {
      res["Delay"] = boost::any(*delay);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Delay") != m.end() && !m["Delay"].empty()) {
      delay = make_shared<string>(boost::any_cast<string>(m["Delay"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus() = default;
};
class DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint() = default;
};
class DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance : public Darabonba::Model {
public:
  shared_ptr<string> FLOW{};
  shared_ptr<string> RPS{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (FLOW) {
      res["FLOW"] = boost::any(*FLOW);
    }
    if (RPS) {
      res["RPS"] = boost::any(*RPS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FLOW") != m.end() && !m["FLOW"].empty()) {
      FLOW = make_shared<string>(boost::any_cast<string>(m["FLOW"]));
    }
    if (m.find("RPS") != m.end() && !m["RPS"].empty()) {
      RPS = make_shared<string>(boost::any_cast<string>(m["RPS"]));
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance() = default;
};
class DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> itemName{};
  shared_ptr<string> repairMethod{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (repairMethod) {
      res["RepairMethod"] = boost::any(*repairMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("RepairMethod") != m.end() && !m["RepairMethod"].empty()) {
      repairMethod = make_shared<string>(boost::any_cast<string>(m["RepairMethod"]));
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail() = default;
};
class DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail>> detail{};
  shared_ptr<string> percent{};
  shared_ptr<string> status{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      vector<boost::any> temp1;
      for(auto item1:*detail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detail"] = boost::any(temp1);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(vector<boost::any>) == m["Detail"].type()) {
        vector<DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detail = make_shared<vector<DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatusDetail>>(expect1);
      }
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus() = default;
};
class DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint() = default;
};
class DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus() = default;
};
class DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes() = default;
};
class DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes() = default;
};
class DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects : public Darabonba::Model {
public:
  shared_ptr<string> newSchemaName{};
  shared_ptr<string> schemaName{};
  shared_ptr<vector<DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes>> tableExcludes{};
  shared_ptr<vector<DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes>> tableIncludes{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newSchemaName) {
      res["NewSchemaName"] = boost::any(*newSchemaName);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableExcludes) {
      vector<boost::any> temp1;
      for(auto item1:*tableExcludes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableExcludes"] = boost::any(temp1);
    }
    if (tableIncludes) {
      vector<boost::any> temp1;
      for(auto item1:*tableIncludes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableIncludes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewSchemaName") != m.end() && !m["NewSchemaName"].empty()) {
      newSchemaName = make_shared<string>(boost::any_cast<string>(m["NewSchemaName"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableExcludes") != m.end() && !m["TableExcludes"].empty()) {
      if (typeid(vector<boost::any>) == m["TableExcludes"].type()) {
        vector<DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableExcludes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableExcludes = make_shared<vector<DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableExcludes>>(expect1);
      }
    }
    if (m.find("TableIncludes") != m.end() && !m["TableIncludes"].empty()) {
      if (typeid(vector<boost::any>) == m["TableIncludes"].type()) {
        vector<DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableIncludes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableIncludes = make_shared<vector<DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjectsTableIncludes>>(expect1);
      }
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects() = default;
};
class DescribeSynchronizationJobsResponseBodySynchronizationInstances : public Darabonba::Model {
public:
  shared_ptr<string> dataInitialization{};
  shared_ptr<DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus> dataInitializationStatus{};
  shared_ptr<DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus> dataSynchronizationStatus{};
  shared_ptr<string> delay{};
  shared_ptr<DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint> destinationEndpoint{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> payType{};
  shared_ptr<DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance> performance{};
  shared_ptr<DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus> precheckStatus{};
  shared_ptr<DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint> sourceEndpoint{};
  shared_ptr<string> status{};
  shared_ptr<string> structureInitialization{};
  shared_ptr<DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus> structureInitializationStatus{};
  shared_ptr<string> synchronizationJobClass{};
  shared_ptr<string> synchronizationJobId{};
  shared_ptr<string> synchronizationJobName{};
  shared_ptr<vector<DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects>> synchronizationObjects{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstances() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInitialization) {
      res["DataInitialization"] = boost::any(*dataInitialization);
    }
    if (dataInitializationStatus) {
      res["DataInitializationStatus"] = dataInitializationStatus ? boost::any(dataInitializationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSynchronizationStatus) {
      res["DataSynchronizationStatus"] = dataSynchronizationStatus ? boost::any(dataSynchronizationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (delay) {
      res["Delay"] = boost::any(*delay);
    }
    if (destinationEndpoint) {
      res["DestinationEndpoint"] = destinationEndpoint ? boost::any(destinationEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (performance) {
      res["Performance"] = performance ? boost::any(performance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (precheckStatus) {
      res["PrecheckStatus"] = precheckStatus ? boost::any(precheckStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceEndpoint) {
      res["SourceEndpoint"] = sourceEndpoint ? boost::any(sourceEndpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (structureInitialization) {
      res["StructureInitialization"] = boost::any(*structureInitialization);
    }
    if (structureInitializationStatus) {
      res["StructureInitializationStatus"] = structureInitializationStatus ? boost::any(structureInitializationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (synchronizationJobClass) {
      res["SynchronizationJobClass"] = boost::any(*synchronizationJobClass);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    if (synchronizationJobName) {
      res["SynchronizationJobName"] = boost::any(*synchronizationJobName);
    }
    if (synchronizationObjects) {
      vector<boost::any> temp1;
      for(auto item1:*synchronizationObjects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SynchronizationObjects"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInitialization") != m.end() && !m["DataInitialization"].empty()) {
      dataInitialization = make_shared<string>(boost::any_cast<string>(m["DataInitialization"]));
    }
    if (m.find("DataInitializationStatus") != m.end() && !m["DataInitializationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataInitializationStatus"].type()) {
        DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataInitializationStatus"]));
        dataInitializationStatus = make_shared<DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataInitializationStatus>(model1);
      }
    }
    if (m.find("DataSynchronizationStatus") != m.end() && !m["DataSynchronizationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSynchronizationStatus"].type()) {
        DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSynchronizationStatus"]));
        dataSynchronizationStatus = make_shared<DescribeSynchronizationJobsResponseBodySynchronizationInstancesDataSynchronizationStatus>(model1);
      }
    }
    if (m.find("Delay") != m.end() && !m["Delay"].empty()) {
      delay = make_shared<string>(boost::any_cast<string>(m["Delay"]));
    }
    if (m.find("DestinationEndpoint") != m.end() && !m["DestinationEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationEndpoint"].type()) {
        DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationEndpoint"]));
        destinationEndpoint = make_shared<DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Performance") != m.end() && !m["Performance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Performance"].type()) {
        DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Performance"]));
        performance = make_shared<DescribeSynchronizationJobsResponseBodySynchronizationInstancesPerformance>(model1);
      }
    }
    if (m.find("PrecheckStatus") != m.end() && !m["PrecheckStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrecheckStatus"].type()) {
        DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrecheckStatus"]));
        precheckStatus = make_shared<DescribeSynchronizationJobsResponseBodySynchronizationInstancesPrecheckStatus>(model1);
      }
    }
    if (m.find("SourceEndpoint") != m.end() && !m["SourceEndpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceEndpoint"].type()) {
        DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceEndpoint"]));
        sourceEndpoint = make_shared<DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StructureInitialization") != m.end() && !m["StructureInitialization"].empty()) {
      structureInitialization = make_shared<string>(boost::any_cast<string>(m["StructureInitialization"]));
    }
    if (m.find("StructureInitializationStatus") != m.end() && !m["StructureInitializationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["StructureInitializationStatus"].type()) {
        DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StructureInitializationStatus"]));
        structureInitializationStatus = make_shared<DescribeSynchronizationJobsResponseBodySynchronizationInstancesStructureInitializationStatus>(model1);
      }
    }
    if (m.find("SynchronizationJobClass") != m.end() && !m["SynchronizationJobClass"].empty()) {
      synchronizationJobClass = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobClass"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
    if (m.find("SynchronizationJobName") != m.end() && !m["SynchronizationJobName"].empty()) {
      synchronizationJobName = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobName"]));
    }
    if (m.find("SynchronizationObjects") != m.end() && !m["SynchronizationObjects"].empty()) {
      if (typeid(vector<boost::any>) == m["SynchronizationObjects"].type()) {
        vector<DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SynchronizationObjects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        synchronizationObjects = make_shared<vector<DescribeSynchronizationJobsResponseBodySynchronizationInstancesSynchronizationObjects>>(expect1);
      }
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstances() = default;
};
class DescribeSynchronizationJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSynchronizationJobsResponseBodySynchronizationInstances>> synchronizationInstances{};
  shared_ptr<long> totalRecordCount{};

  DescribeSynchronizationJobsResponseBody() {}

  explicit DescribeSynchronizationJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (synchronizationInstances) {
      vector<boost::any> temp1;
      for(auto item1:*synchronizationInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SynchronizationInstances"] = boost::any(temp1);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SynchronizationInstances") != m.end() && !m["SynchronizationInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["SynchronizationInstances"].type()) {
        vector<DescribeSynchronizationJobsResponseBodySynchronizationInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SynchronizationInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSynchronizationJobsResponseBodySynchronizationInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        synchronizationInstances = make_shared<vector<DescribeSynchronizationJobsResponseBodySynchronizationInstances>>(expect1);
      }
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeSynchronizationJobsResponseBody() = default;
};
class DescribeSynchronizationJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSynchronizationJobsResponseBody> body{};

  DescribeSynchronizationJobsResponse() {}

  explicit DescribeSynchronizationJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSynchronizationJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSynchronizationJobsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSynchronizationJobsResponse() = default;
};
class DescribeSynchronizationObjectModifyStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> taskId{};

  DescribeSynchronizationObjectModifyStatusRequest() {}

  explicit DescribeSynchronizationObjectModifyStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeSynchronizationObjectModifyStatusRequest() = default;
};
class DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};

  DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus() {}

  explicit DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus() = default;
};
class DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus : public Darabonba::Model {
public:
  shared_ptr<string> delay{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> status{};

  DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus() {}

  explicit DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delay) {
      res["Delay"] = boost::any(*delay);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Delay") != m.end() && !m["Delay"].empty()) {
      delay = make_shared<string>(boost::any_cast<string>(m["Delay"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus() = default;
};
class DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatusDetail : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> itemName{};
  shared_ptr<string> repairMethod{};

  DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatusDetail() {}

  explicit DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatusDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (repairMethod) {
      res["RepairMethod"] = boost::any(*repairMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("RepairMethod") != m.end() && !m["RepairMethod"].empty()) {
      repairMethod = make_shared<string>(boost::any_cast<string>(m["RepairMethod"]));
    }
  }


  virtual ~DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatusDetail() = default;
};
class DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatusDetail>> detail{};
  shared_ptr<string> percent{};
  shared_ptr<string> status{};

  DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus() {}

  explicit DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      vector<boost::any> temp1;
      for(auto item1:*detail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Detail"] = boost::any(temp1);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(vector<boost::any>) == m["Detail"].type()) {
        vector<DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatusDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Detail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatusDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detail = make_shared<vector<DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatusDetail>>(expect1);
      }
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus() = default;
};
class DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> percent{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};

  DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus() {}

  explicit DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["Percent"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus() = default;
};
class DescribeSynchronizationObjectModifyStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus> dataInitializationStatus{};
  shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus> dataSynchronizationStatus{};
  shared_ptr<string> errorMessage{};
  shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus> precheckStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus> structureInitializationStatus{};

  DescribeSynchronizationObjectModifyStatusResponseBody() {}

  explicit DescribeSynchronizationObjectModifyStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataInitializationStatus) {
      res["DataInitializationStatus"] = dataInitializationStatus ? boost::any(dataInitializationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSynchronizationStatus) {
      res["DataSynchronizationStatus"] = dataSynchronizationStatus ? boost::any(dataSynchronizationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (precheckStatus) {
      res["PrecheckStatus"] = precheckStatus ? boost::any(precheckStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (structureInitializationStatus) {
      res["StructureInitializationStatus"] = structureInitializationStatus ? boost::any(structureInitializationStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataInitializationStatus") != m.end() && !m["DataInitializationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataInitializationStatus"].type()) {
        DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataInitializationStatus"]));
        dataInitializationStatus = make_shared<DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus>(model1);
      }
    }
    if (m.find("DataSynchronizationStatus") != m.end() && !m["DataSynchronizationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSynchronizationStatus"].type()) {
        DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSynchronizationStatus"]));
        dataSynchronizationStatus = make_shared<DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("PrecheckStatus") != m.end() && !m["PrecheckStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrecheckStatus"].type()) {
        DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrecheckStatus"]));
        precheckStatus = make_shared<DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StructureInitializationStatus") != m.end() && !m["StructureInitializationStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["StructureInitializationStatus"].type()) {
        DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StructureInitializationStatus"]));
        structureInitializationStatus = make_shared<DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus>(model1);
      }
    }
  }


  virtual ~DescribeSynchronizationObjectModifyStatusResponseBody() = default;
};
class DescribeSynchronizationObjectModifyStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBody> body{};

  DescribeSynchronizationObjectModifyStatusResponse() {}

  explicit DescribeSynchronizationObjectModifyStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSynchronizationObjectModifyStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSynchronizationObjectModifyStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSynchronizationObjectModifyStatusResponse() = default;
};
class ModifyConsumptionTimestampRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumptionTimestamp{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> subscriptionInstanceId{};

  ModifyConsumptionTimestampRequest() {}

  explicit ModifyConsumptionTimestampRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumptionTimestamp) {
      res["ConsumptionTimestamp"] = boost::any(*consumptionTimestamp);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (subscriptionInstanceId) {
      res["SubscriptionInstanceId"] = boost::any(*subscriptionInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumptionTimestamp") != m.end() && !m["ConsumptionTimestamp"].empty()) {
      consumptionTimestamp = make_shared<string>(boost::any_cast<string>(m["ConsumptionTimestamp"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SubscriptionInstanceId") != m.end() && !m["SubscriptionInstanceId"].empty()) {
      subscriptionInstanceId = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceId"]));
    }
  }


  virtual ~ModifyConsumptionTimestampRequest() = default;
};
class ModifyConsumptionTimestampResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ModifyConsumptionTimestampResponseBody() {}

  explicit ModifyConsumptionTimestampResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ModifyConsumptionTimestampResponseBody() = default;
};
class ModifyConsumptionTimestampResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyConsumptionTimestampResponseBody> body{};

  ModifyConsumptionTimestampResponse() {}

  explicit ModifyConsumptionTimestampResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyConsumptionTimestampResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyConsumptionTimestampResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyConsumptionTimestampResponse() = default;
};
class ModifyMigrationObjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> migrationJobId{};
  shared_ptr<string> migrationObject{};
  shared_ptr<string> ownerId{};

  ModifyMigrationObjectRequest() {}

  explicit ModifyMigrationObjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (migrationJobId) {
      res["MigrationJobId"] = boost::any(*migrationJobId);
    }
    if (migrationObject) {
      res["MigrationObject"] = boost::any(*migrationObject);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("MigrationJobId") != m.end() && !m["MigrationJobId"].empty()) {
      migrationJobId = make_shared<string>(boost::any_cast<string>(m["MigrationJobId"]));
    }
    if (m.find("MigrationObject") != m.end() && !m["MigrationObject"].empty()) {
      migrationObject = make_shared<string>(boost::any_cast<string>(m["MigrationObject"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~ModifyMigrationObjectRequest() = default;
};
class ModifyMigrationObjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ModifyMigrationObjectResponseBody() {}

  explicit ModifyMigrationObjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ModifyMigrationObjectResponseBody() = default;
};
class ModifyMigrationObjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMigrationObjectResponseBody> body{};

  ModifyMigrationObjectResponse() {}

  explicit ModifyMigrationObjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyMigrationObjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMigrationObjectResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMigrationObjectResponse() = default;
};
class ModifySubscriptionObjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> subscriptionInstanceId{};
  shared_ptr<string> subscriptionObject{};

  ModifySubscriptionObjectRequest() {}

  explicit ModifySubscriptionObjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (subscriptionInstanceId) {
      res["SubscriptionInstanceId"] = boost::any(*subscriptionInstanceId);
    }
    if (subscriptionObject) {
      res["SubscriptionObject"] = boost::any(*subscriptionObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SubscriptionInstanceId") != m.end() && !m["SubscriptionInstanceId"].empty()) {
      subscriptionInstanceId = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceId"]));
    }
    if (m.find("SubscriptionObject") != m.end() && !m["SubscriptionObject"].empty()) {
      subscriptionObject = make_shared<string>(boost::any_cast<string>(m["SubscriptionObject"]));
    }
  }


  virtual ~ModifySubscriptionObjectRequest() = default;
};
class ModifySubscriptionObjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ModifySubscriptionObjectResponseBody() {}

  explicit ModifySubscriptionObjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ModifySubscriptionObjectResponseBody() = default;
};
class ModifySubscriptionObjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySubscriptionObjectResponseBody> body{};

  ModifySubscriptionObjectResponse() {}

  explicit ModifySubscriptionObjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySubscriptionObjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySubscriptionObjectResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySubscriptionObjectResponse() = default;
};
class ModifySynchronizationObjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationJobId{};
  shared_ptr<string> synchronizationObjects{};

  ModifySynchronizationObjectRequest() {}

  explicit ModifySynchronizationObjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    if (synchronizationObjects) {
      res["SynchronizationObjects"] = boost::any(*synchronizationObjects);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
    if (m.find("SynchronizationObjects") != m.end() && !m["SynchronizationObjects"].empty()) {
      synchronizationObjects = make_shared<string>(boost::any_cast<string>(m["SynchronizationObjects"]));
    }
  }


  virtual ~ModifySynchronizationObjectRequest() = default;
};
class ModifySynchronizationObjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<string> taskId{};

  ModifySynchronizationObjectResponseBody() {}

  explicit ModifySynchronizationObjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ModifySynchronizationObjectResponseBody() = default;
};
class ModifySynchronizationObjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySynchronizationObjectResponseBody> body{};

  ModifySynchronizationObjectResponse() {}

  explicit ModifySynchronizationObjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySynchronizationObjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySynchronizationObjectResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySynchronizationObjectResponse() = default;
};
class StartMigrationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> migrationJobId{};
  shared_ptr<string> ownerId{};

  StartMigrationJobRequest() {}

  explicit StartMigrationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (migrationJobId) {
      res["MigrationJobId"] = boost::any(*migrationJobId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MigrationJobId") != m.end() && !m["MigrationJobId"].empty()) {
      migrationJobId = make_shared<string>(boost::any_cast<string>(m["MigrationJobId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~StartMigrationJobRequest() = default;
};
class StartMigrationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  StartMigrationJobResponseBody() {}

  explicit StartMigrationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~StartMigrationJobResponseBody() = default;
};
class StartMigrationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartMigrationJobResponseBody> body{};

  StartMigrationJobResponse() {}

  explicit StartMigrationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartMigrationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartMigrationJobResponseBody>(model1);
      }
    }
  }


  virtual ~StartMigrationJobResponse() = default;
};
class StartSubscriptionInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> subscriptionInstanceId{};

  StartSubscriptionInstanceRequest() {}

  explicit StartSubscriptionInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (subscriptionInstanceId) {
      res["SubscriptionInstanceId"] = boost::any(*subscriptionInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SubscriptionInstanceId") != m.end() && !m["SubscriptionInstanceId"].empty()) {
      subscriptionInstanceId = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceId"]));
    }
  }


  virtual ~StartSubscriptionInstanceRequest() = default;
};
class StartSubscriptionInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<string> taskId{};

  StartSubscriptionInstanceResponseBody() {}

  explicit StartSubscriptionInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StartSubscriptionInstanceResponseBody() = default;
};
class StartSubscriptionInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartSubscriptionInstanceResponseBody> body{};

  StartSubscriptionInstanceResponse() {}

  explicit StartSubscriptionInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartSubscriptionInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartSubscriptionInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartSubscriptionInstanceResponse() = default;
};
class StartSynchronizationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationJobId{};

  StartSynchronizationJobRequest() {}

  explicit StartSynchronizationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
  }


  virtual ~StartSynchronizationJobRequest() = default;
};
class StartSynchronizationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  StartSynchronizationJobResponseBody() {}

  explicit StartSynchronizationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~StartSynchronizationJobResponseBody() = default;
};
class StartSynchronizationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartSynchronizationJobResponseBody> body{};

  StartSynchronizationJobResponse() {}

  explicit StartSynchronizationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartSynchronizationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartSynchronizationJobResponseBody>(model1);
      }
    }
  }


  virtual ~StartSynchronizationJobResponse() = default;
};
class StopMigrationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> migrationJobId{};
  shared_ptr<string> ownerId{};

  StopMigrationJobRequest() {}

  explicit StopMigrationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (migrationJobId) {
      res["MigrationJobId"] = boost::any(*migrationJobId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("MigrationJobId") != m.end() && !m["MigrationJobId"].empty()) {
      migrationJobId = make_shared<string>(boost::any_cast<string>(m["MigrationJobId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~StopMigrationJobRequest() = default;
};
class StopMigrationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  StopMigrationJobResponseBody() {}

  explicit StopMigrationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~StopMigrationJobResponseBody() = default;
};
class StopMigrationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopMigrationJobResponseBody> body{};

  StopMigrationJobResponse() {}

  explicit StopMigrationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopMigrationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopMigrationJobResponseBody>(model1);
      }
    }
  }


  virtual ~StopMigrationJobResponse() = default;
};
class SuspendMigrationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> migrationJobId{};
  shared_ptr<string> ownerId{};

  SuspendMigrationJobRequest() {}

  explicit SuspendMigrationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (migrationJobId) {
      res["MigrationJobId"] = boost::any(*migrationJobId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("MigrationJobId") != m.end() && !m["MigrationJobId"].empty()) {
      migrationJobId = make_shared<string>(boost::any_cast<string>(m["MigrationJobId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~SuspendMigrationJobRequest() = default;
};
class SuspendMigrationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  SuspendMigrationJobResponseBody() {}

  explicit SuspendMigrationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~SuspendMigrationJobResponseBody() = default;
};
class SuspendMigrationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SuspendMigrationJobResponseBody> body{};

  SuspendMigrationJobResponse() {}

  explicit SuspendMigrationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SuspendMigrationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SuspendMigrationJobResponseBody>(model1);
      }
    }
  }


  virtual ~SuspendMigrationJobResponse() = default;
};
class SuspendSynchronizationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationJobId{};

  SuspendSynchronizationJobRequest() {}

  explicit SuspendSynchronizationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
  }


  virtual ~SuspendSynchronizationJobRequest() = default;
};
class SuspendSynchronizationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  SuspendSynchronizationJobResponseBody() {}

  explicit SuspendSynchronizationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~SuspendSynchronizationJobResponseBody() = default;
};
class SuspendSynchronizationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SuspendSynchronizationJobResponseBody> body{};

  SuspendSynchronizationJobResponse() {}

  explicit SuspendSynchronizationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SuspendSynchronizationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SuspendSynchronizationJobResponseBody>(model1);
      }
    }
  }


  virtual ~SuspendSynchronizationJobResponse() = default;
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
  ConfigurationSynchronizationJobResponse configurationSynchronizationJobWithOptions(shared_ptr<ConfigurationSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigurationSynchronizationJobResponse configurationSynchronizationJob(shared_ptr<ConfigurationSynchronizationJobRequest> request);
  ConfigureMigrationJobResponse configureMigrationJobWithOptions(shared_ptr<ConfigureMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigureMigrationJobResponse configureMigrationJob(shared_ptr<ConfigureMigrationJobRequest> request);
  ConfigureSubscriptionInstanceResponse configureSubscriptionInstanceWithOptions(shared_ptr<ConfigureSubscriptionInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigureSubscriptionInstanceResponse configureSubscriptionInstance(shared_ptr<ConfigureSubscriptionInstanceRequest> request);
  ConfigureSynchronizationJobResponse configureSynchronizationJobWithOptions(shared_ptr<ConfigureSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigureSynchronizationJobResponse configureSynchronizationJob(shared_ptr<ConfigureSynchronizationJobRequest> request);
  CreateMigrationJobResponse createMigrationJobWithOptions(shared_ptr<CreateMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMigrationJobResponse createMigrationJob(shared_ptr<CreateMigrationJobRequest> request);
  CreateSubscriptionInstanceResponse createSubscriptionInstanceWithOptions(shared_ptr<CreateSubscriptionInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSubscriptionInstanceResponse createSubscriptionInstance(shared_ptr<CreateSubscriptionInstanceRequest> request);
  CreateSynchronizationJobResponse createSynchronizationJobWithOptions(shared_ptr<CreateSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSynchronizationJobResponse createSynchronizationJob(shared_ptr<CreateSynchronizationJobRequest> request);
  DeleteMigrationJobResponse deleteMigrationJobWithOptions(shared_ptr<DeleteMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMigrationJobResponse deleteMigrationJob(shared_ptr<DeleteMigrationJobRequest> request);
  DeleteSubscriptionInstanceResponse deleteSubscriptionInstanceWithOptions(shared_ptr<DeleteSubscriptionInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSubscriptionInstanceResponse deleteSubscriptionInstance(shared_ptr<DeleteSubscriptionInstanceRequest> request);
  DeleteSynchronizationJobResponse deleteSynchronizationJobWithOptions(shared_ptr<DeleteSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSynchronizationJobResponse deleteSynchronizationJob(shared_ptr<DeleteSynchronizationJobRequest> request);
  DescirbeMigrationJobsResponse descirbeMigrationJobsWithOptions(shared_ptr<DescirbeMigrationJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescirbeMigrationJobsResponse descirbeMigrationJobs(shared_ptr<DescirbeMigrationJobsRequest> request);
  DescribeInitializationStatusResponse describeInitializationStatusWithOptions(shared_ptr<DescribeInitializationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInitializationStatusResponse describeInitializationStatus(shared_ptr<DescribeInitializationStatusRequest> request);
  DescribeMigrationJobDetailResponse describeMigrationJobDetailWithOptions(shared_ptr<DescribeMigrationJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMigrationJobDetailResponse describeMigrationJobDetail(shared_ptr<DescribeMigrationJobDetailRequest> request);
  DescribeMigrationJobStatusResponse describeMigrationJobStatusWithOptions(shared_ptr<DescribeMigrationJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMigrationJobStatusResponse describeMigrationJobStatus(shared_ptr<DescribeMigrationJobStatusRequest> request);
  DescribeMigrationJobsResponse describeMigrationJobsWithOptions(shared_ptr<DescribeMigrationJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMigrationJobsResponse describeMigrationJobs(shared_ptr<DescribeMigrationJobsRequest> request);
  DescribeSubscriptionInstanceStatusResponse describeSubscriptionInstanceStatusWithOptions(shared_ptr<DescribeSubscriptionInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSubscriptionInstanceStatusResponse describeSubscriptionInstanceStatus(shared_ptr<DescribeSubscriptionInstanceStatusRequest> request);
  DescribeSubscriptionInstancesResponse describeSubscriptionInstancesWithOptions(shared_ptr<DescribeSubscriptionInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSubscriptionInstancesResponse describeSubscriptionInstances(shared_ptr<DescribeSubscriptionInstancesRequest> request);
  DescribeSubscriptionObjectModifyStatusResponse describeSubscriptionObjectModifyStatusWithOptions(shared_ptr<DescribeSubscriptionObjectModifyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSubscriptionObjectModifyStatusResponse describeSubscriptionObjectModifyStatus(shared_ptr<DescribeSubscriptionObjectModifyStatusRequest> request);
  DescribeSynchronizationJobStatusResponse describeSynchronizationJobStatusWithOptions(shared_ptr<DescribeSynchronizationJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSynchronizationJobStatusResponse describeSynchronizationJobStatus(shared_ptr<DescribeSynchronizationJobStatusRequest> request);
  DescribeSynchronizationJobsResponse describeSynchronizationJobsWithOptions(shared_ptr<DescribeSynchronizationJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSynchronizationJobsResponse describeSynchronizationJobs(shared_ptr<DescribeSynchronizationJobsRequest> request);
  DescribeSynchronizationObjectModifyStatusResponse describeSynchronizationObjectModifyStatusWithOptions(shared_ptr<DescribeSynchronizationObjectModifyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSynchronizationObjectModifyStatusResponse describeSynchronizationObjectModifyStatus(shared_ptr<DescribeSynchronizationObjectModifyStatusRequest> request);
  ModifyConsumptionTimestampResponse modifyConsumptionTimestampWithOptions(shared_ptr<ModifyConsumptionTimestampRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyConsumptionTimestampResponse modifyConsumptionTimestamp(shared_ptr<ModifyConsumptionTimestampRequest> request);
  ModifyMigrationObjectResponse modifyMigrationObjectWithOptions(shared_ptr<ModifyMigrationObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMigrationObjectResponse modifyMigrationObject(shared_ptr<ModifyMigrationObjectRequest> request);
  ModifySubscriptionObjectResponse modifySubscriptionObjectWithOptions(shared_ptr<ModifySubscriptionObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySubscriptionObjectResponse modifySubscriptionObject(shared_ptr<ModifySubscriptionObjectRequest> request);
  ModifySynchronizationObjectResponse modifySynchronizationObjectWithOptions(shared_ptr<ModifySynchronizationObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySynchronizationObjectResponse modifySynchronizationObject(shared_ptr<ModifySynchronizationObjectRequest> request);
  StartMigrationJobResponse startMigrationJobWithOptions(shared_ptr<StartMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartMigrationJobResponse startMigrationJob(shared_ptr<StartMigrationJobRequest> request);
  StartSubscriptionInstanceResponse startSubscriptionInstanceWithOptions(shared_ptr<StartSubscriptionInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartSubscriptionInstanceResponse startSubscriptionInstance(shared_ptr<StartSubscriptionInstanceRequest> request);
  StartSynchronizationJobResponse startSynchronizationJobWithOptions(shared_ptr<StartSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartSynchronizationJobResponse startSynchronizationJob(shared_ptr<StartSynchronizationJobRequest> request);
  StopMigrationJobResponse stopMigrationJobWithOptions(shared_ptr<StopMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopMigrationJobResponse stopMigrationJob(shared_ptr<StopMigrationJobRequest> request);
  SuspendMigrationJobResponse suspendMigrationJobWithOptions(shared_ptr<SuspendMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SuspendMigrationJobResponse suspendMigrationJob(shared_ptr<SuspendMigrationJobRequest> request);
  SuspendSynchronizationJobResponse suspendSynchronizationJobWithOptions(shared_ptr<SuspendSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SuspendSynchronizationJobResponse suspendSynchronizationJob(shared_ptr<SuspendSynchronizationJobRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dts20160801

#endif
