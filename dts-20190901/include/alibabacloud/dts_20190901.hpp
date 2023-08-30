// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DTS20190901_H_
#define ALIBABACLOUD_DTS20190901_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dts20190901 {
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
  shared_ptr<string> synchronizationDirection{};
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
    if (synchronizationDirection) {
      res["SynchronizationDirection"] = boost::any(*synchronizationDirection);
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
    if (m.find("SynchronizationDirection") != m.end() && !m["SynchronizationDirection"].empty()) {
      synchronizationDirection = make_shared<string>(boost::any_cast<string>(m["SynchronizationDirection"]));
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
class ConfigureSynchronizationJobAlertRequest : public Darabonba::Model {
public:
  shared_ptr<string> delayAlertPhone{};
  shared_ptr<string> delayAlertStatus{};
  shared_ptr<string> delayOverSeconds{};
  shared_ptr<string> errorAlertPhone{};
  shared_ptr<string> errorAlertStatus{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationDirection{};
  shared_ptr<string> synchronizationJobId{};

  ConfigureSynchronizationJobAlertRequest() {}

  explicit ConfigureSynchronizationJobAlertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delayAlertPhone) {
      res["DelayAlertPhone"] = boost::any(*delayAlertPhone);
    }
    if (delayAlertStatus) {
      res["DelayAlertStatus"] = boost::any(*delayAlertStatus);
    }
    if (delayOverSeconds) {
      res["DelayOverSeconds"] = boost::any(*delayOverSeconds);
    }
    if (errorAlertPhone) {
      res["ErrorAlertPhone"] = boost::any(*errorAlertPhone);
    }
    if (errorAlertStatus) {
      res["ErrorAlertStatus"] = boost::any(*errorAlertStatus);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (synchronizationDirection) {
      res["SynchronizationDirection"] = boost::any(*synchronizationDirection);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelayAlertPhone") != m.end() && !m["DelayAlertPhone"].empty()) {
      delayAlertPhone = make_shared<string>(boost::any_cast<string>(m["DelayAlertPhone"]));
    }
    if (m.find("DelayAlertStatus") != m.end() && !m["DelayAlertStatus"].empty()) {
      delayAlertStatus = make_shared<string>(boost::any_cast<string>(m["DelayAlertStatus"]));
    }
    if (m.find("DelayOverSeconds") != m.end() && !m["DelayOverSeconds"].empty()) {
      delayOverSeconds = make_shared<string>(boost::any_cast<string>(m["DelayOverSeconds"]));
    }
    if (m.find("ErrorAlertPhone") != m.end() && !m["ErrorAlertPhone"].empty()) {
      errorAlertPhone = make_shared<string>(boost::any_cast<string>(m["ErrorAlertPhone"]));
    }
    if (m.find("ErrorAlertStatus") != m.end() && !m["ErrorAlertStatus"].empty()) {
      errorAlertStatus = make_shared<string>(boost::any_cast<string>(m["ErrorAlertStatus"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SynchronizationDirection") != m.end() && !m["SynchronizationDirection"].empty()) {
      synchronizationDirection = make_shared<string>(boost::any_cast<string>(m["SynchronizationDirection"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
  }


  virtual ~ConfigureSynchronizationJobAlertRequest() = default;
};
class ConfigureSynchronizationJobAlertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ConfigureSynchronizationJobAlertResponseBody() {}

  explicit ConfigureSynchronizationJobAlertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigureSynchronizationJobAlertResponseBody() = default;
};
class ConfigureSynchronizationJobAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigureSynchronizationJobAlertResponseBody> body{};

  ConfigureSynchronizationJobAlertResponse() {}

  explicit ConfigureSynchronizationJobAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigureSynchronizationJobAlertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigureSynchronizationJobAlertResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigureSynchronizationJobAlertResponse() = default;
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
  shared_ptr<string> topology{};
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
    if (topology) {
      res["Topology"] = boost::any(*topology);
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
    if (m.find("Topology") != m.end() && !m["Topology"].empty()) {
      topology = make_shared<string>(boost::any_cast<string>(m["Topology"]));
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
class DescribeEndpointSwitchStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> taskId{};

  DescribeEndpointSwitchStatusRequest() {}

  explicit DescribeEndpointSwitchStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeEndpointSwitchStatusRequest() = default;
};
class DescribeEndpointSwitchStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribeEndpointSwitchStatusResponseBody() {}

  explicit DescribeEndpointSwitchStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeEndpointSwitchStatusResponseBody() = default;
};
class DescribeEndpointSwitchStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEndpointSwitchStatusResponseBody> body{};

  DescribeEndpointSwitchStatusResponse() {}

  explicit DescribeEndpointSwitchStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEndpointSwitchStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEndpointSwitchStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEndpointSwitchStatusResponse() = default;
};
class DescribeSynchronizationJobAlertRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationDirection{};
  shared_ptr<string> synchronizationJobId{};

  DescribeSynchronizationJobAlertRequest() {}

  explicit DescribeSynchronizationJobAlertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (synchronizationDirection) {
      res["SynchronizationDirection"] = boost::any(*synchronizationDirection);
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
    if (m.find("SynchronizationDirection") != m.end() && !m["SynchronizationDirection"].empty()) {
      synchronizationDirection = make_shared<string>(boost::any_cast<string>(m["SynchronizationDirection"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
  }


  virtual ~DescribeSynchronizationJobAlertRequest() = default;
};
class DescribeSynchronizationJobAlertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> delayAlertPhone{};
  shared_ptr<string> delayAlertStatus{};
  shared_ptr<string> delayOverSeconds{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> errorAlertPhone{};
  shared_ptr<string> errorAlertStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<string> synchronizationDirection{};
  shared_ptr<string> synchronizationJobId{};
  shared_ptr<string> synchronizationJobName{};

  DescribeSynchronizationJobAlertResponseBody() {}

  explicit DescribeSynchronizationJobAlertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delayAlertPhone) {
      res["DelayAlertPhone"] = boost::any(*delayAlertPhone);
    }
    if (delayAlertStatus) {
      res["DelayAlertStatus"] = boost::any(*delayAlertStatus);
    }
    if (delayOverSeconds) {
      res["DelayOverSeconds"] = boost::any(*delayOverSeconds);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (errorAlertPhone) {
      res["ErrorAlertPhone"] = boost::any(*errorAlertPhone);
    }
    if (errorAlertStatus) {
      res["ErrorAlertStatus"] = boost::any(*errorAlertStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (synchronizationDirection) {
      res["SynchronizationDirection"] = boost::any(*synchronizationDirection);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    if (synchronizationJobName) {
      res["SynchronizationJobName"] = boost::any(*synchronizationJobName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelayAlertPhone") != m.end() && !m["DelayAlertPhone"].empty()) {
      delayAlertPhone = make_shared<string>(boost::any_cast<string>(m["DelayAlertPhone"]));
    }
    if (m.find("DelayAlertStatus") != m.end() && !m["DelayAlertStatus"].empty()) {
      delayAlertStatus = make_shared<string>(boost::any_cast<string>(m["DelayAlertStatus"]));
    }
    if (m.find("DelayOverSeconds") != m.end() && !m["DelayOverSeconds"].empty()) {
      delayOverSeconds = make_shared<string>(boost::any_cast<string>(m["DelayOverSeconds"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("ErrorAlertPhone") != m.end() && !m["ErrorAlertPhone"].empty()) {
      errorAlertPhone = make_shared<string>(boost::any_cast<string>(m["ErrorAlertPhone"]));
    }
    if (m.find("ErrorAlertStatus") != m.end() && !m["ErrorAlertStatus"].empty()) {
      errorAlertStatus = make_shared<string>(boost::any_cast<string>(m["ErrorAlertStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("SynchronizationDirection") != m.end() && !m["SynchronizationDirection"].empty()) {
      synchronizationDirection = make_shared<string>(boost::any_cast<string>(m["SynchronizationDirection"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
    if (m.find("SynchronizationJobName") != m.end() && !m["SynchronizationJobName"].empty()) {
      synchronizationJobName = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobName"]));
    }
  }


  virtual ~DescribeSynchronizationJobAlertResponseBody() = default;
};
class DescribeSynchronizationJobAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSynchronizationJobAlertResponseBody> body{};

  DescribeSynchronizationJobAlertResponse() {}

  explicit DescribeSynchronizationJobAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSynchronizationJobAlertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSynchronizationJobAlertResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSynchronizationJobAlertResponse() = default;
};
class DescribeSynchronizationJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationDirection{};
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
    if (synchronizationDirection) {
      res["SynchronizationDirection"] = boost::any(*synchronizationDirection);
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
    if (m.find("SynchronizationDirection") != m.end() && !m["SynchronizationDirection"].empty()) {
      synchronizationDirection = make_shared<string>(boost::any_cast<string>(m["SynchronizationDirection"]));
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
  shared_ptr<string> engineName{};
  shared_ptr<string> IP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> port{};
  shared_ptr<string> userName{};

  DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint() {}

  explicit DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<string> engineName{};
  shared_ptr<string> IP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> port{};
  shared_ptr<string> userName{};

  DescribeSynchronizationJobStatusResponseBodySourceEndpoint() {}

  explicit DescribeSynchronizationJobStatusResponseBodySourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<string> synchronizationDirection{};
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
    if (synchronizationDirection) {
      res["SynchronizationDirection"] = boost::any(*synchronizationDirection);
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
    if (m.find("SynchronizationDirection") != m.end() && !m["SynchronizationDirection"].empty()) {
      synchronizationDirection = make_shared<string>(boost::any_cast<string>(m["SynchronizationDirection"]));
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
  shared_ptr<string> engineName{};
  shared_ptr<string> IP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> port{};
  shared_ptr<string> userName{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<string> engineName{};
  shared_ptr<string> IP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> port{};
  shared_ptr<string> userName{};

  DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint() {}

  explicit DescribeSynchronizationJobsResponseBodySynchronizationInstancesSourceEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<string> synchronizationDirection{};
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
    if (synchronizationDirection) {
      res["SynchronizationDirection"] = boost::any(*synchronizationDirection);
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
    if (m.find("SynchronizationDirection") != m.end() && !m["SynchronizationDirection"].empty()) {
      synchronizationDirection = make_shared<string>(boost::any_cast<string>(m["SynchronizationDirection"]));
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
class ModifySynchronizationObjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationDirection{};
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
    if (synchronizationDirection) {
      res["SynchronizationDirection"] = boost::any(*synchronizationDirection);
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
    if (m.find("SynchronizationDirection") != m.end() && !m["SynchronizationDirection"].empty()) {
      synchronizationDirection = make_shared<string>(boost::any_cast<string>(m["SynchronizationDirection"]));
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
class ResetSynchronizationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationDirection{};
  shared_ptr<string> synchronizationJobId{};

  ResetSynchronizationJobRequest() {}

  explicit ResetSynchronizationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (synchronizationDirection) {
      res["SynchronizationDirection"] = boost::any(*synchronizationDirection);
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
    if (m.find("SynchronizationDirection") != m.end() && !m["SynchronizationDirection"].empty()) {
      synchronizationDirection = make_shared<string>(boost::any_cast<string>(m["SynchronizationDirection"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
  }


  virtual ~ResetSynchronizationJobRequest() = default;
};
class ResetSynchronizationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ResetSynchronizationJobResponseBody() {}

  explicit ResetSynchronizationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetSynchronizationJobResponseBody() = default;
};
class ResetSynchronizationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetSynchronizationJobResponseBody> body{};

  ResetSynchronizationJobResponse() {}

  explicit ResetSynchronizationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetSynchronizationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetSynchronizationJobResponseBody>(model1);
      }
    }
  }


  virtual ~ResetSynchronizationJobResponse() = default;
};
class StartSynchronizationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationDirection{};
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
    if (synchronizationDirection) {
      res["SynchronizationDirection"] = boost::any(*synchronizationDirection);
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
    if (m.find("SynchronizationDirection") != m.end() && !m["SynchronizationDirection"].empty()) {
      synchronizationDirection = make_shared<string>(boost::any_cast<string>(m["SynchronizationDirection"]));
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
class SuspendSynchronizationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationDirection{};
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
    if (synchronizationDirection) {
      res["SynchronizationDirection"] = boost::any(*synchronizationDirection);
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
    if (m.find("SynchronizationDirection") != m.end() && !m["SynchronizationDirection"].empty()) {
      synchronizationDirection = make_shared<string>(boost::any_cast<string>(m["SynchronizationDirection"]));
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
class SwitchSynchronizationEndpointRequestEndpoint : public Darabonba::Model {
public:
  shared_ptr<string> IP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> port{};
  shared_ptr<string> type{};

  SwitchSynchronizationEndpointRequestEndpoint() {}

  explicit SwitchSynchronizationEndpointRequestEndpoint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SwitchSynchronizationEndpointRequestEndpoint() = default;
};
class SwitchSynchronizationEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<SwitchSynchronizationEndpointRequestEndpoint> endpoint{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> synchronizationDirection{};
  shared_ptr<string> synchronizationJobId{};

  SwitchSynchronizationEndpointRequest() {}

  explicit SwitchSynchronizationEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = endpoint ? boost::any(endpoint->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (synchronizationDirection) {
      res["SynchronizationDirection"] = boost::any(*synchronizationDirection);
    }
    if (synchronizationJobId) {
      res["SynchronizationJobId"] = boost::any(*synchronizationJobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      if (typeid(map<string, boost::any>) == m["Endpoint"].type()) {
        SwitchSynchronizationEndpointRequestEndpoint model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Endpoint"]));
        endpoint = make_shared<SwitchSynchronizationEndpointRequestEndpoint>(model1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SynchronizationDirection") != m.end() && !m["SynchronizationDirection"].empty()) {
      synchronizationDirection = make_shared<string>(boost::any_cast<string>(m["SynchronizationDirection"]));
    }
    if (m.find("SynchronizationJobId") != m.end() && !m["SynchronizationJobId"].empty()) {
      synchronizationJobId = make_shared<string>(boost::any_cast<string>(m["SynchronizationJobId"]));
    }
  }


  virtual ~SwitchSynchronizationEndpointRequest() = default;
};
class SwitchSynchronizationEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<string> taskId{};

  SwitchSynchronizationEndpointResponseBody() {}

  explicit SwitchSynchronizationEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SwitchSynchronizationEndpointResponseBody() = default;
};
class SwitchSynchronizationEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchSynchronizationEndpointResponseBody> body{};

  SwitchSynchronizationEndpointResponse() {}

  explicit SwitchSynchronizationEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchSynchronizationEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchSynchronizationEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchSynchronizationEndpointResponse() = default;
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
  ConfigureSynchronizationJobResponse configureSynchronizationJobWithOptions(shared_ptr<ConfigureSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigureSynchronizationJobResponse configureSynchronizationJob(shared_ptr<ConfigureSynchronizationJobRequest> request);
  ConfigureSynchronizationJobAlertResponse configureSynchronizationJobAlertWithOptions(shared_ptr<ConfigureSynchronizationJobAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigureSynchronizationJobAlertResponse configureSynchronizationJobAlert(shared_ptr<ConfigureSynchronizationJobAlertRequest> request);
  CreateSynchronizationJobResponse createSynchronizationJobWithOptions(shared_ptr<CreateSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSynchronizationJobResponse createSynchronizationJob(shared_ptr<CreateSynchronizationJobRequest> request);
  DeleteSynchronizationJobResponse deleteSynchronizationJobWithOptions(shared_ptr<DeleteSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSynchronizationJobResponse deleteSynchronizationJob(shared_ptr<DeleteSynchronizationJobRequest> request);
  DescribeEndpointSwitchStatusResponse describeEndpointSwitchStatusWithOptions(shared_ptr<DescribeEndpointSwitchStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEndpointSwitchStatusResponse describeEndpointSwitchStatus(shared_ptr<DescribeEndpointSwitchStatusRequest> request);
  DescribeSynchronizationJobAlertResponse describeSynchronizationJobAlertWithOptions(shared_ptr<DescribeSynchronizationJobAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSynchronizationJobAlertResponse describeSynchronizationJobAlert(shared_ptr<DescribeSynchronizationJobAlertRequest> request);
  DescribeSynchronizationJobStatusResponse describeSynchronizationJobStatusWithOptions(shared_ptr<DescribeSynchronizationJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSynchronizationJobStatusResponse describeSynchronizationJobStatus(shared_ptr<DescribeSynchronizationJobStatusRequest> request);
  DescribeSynchronizationJobsResponse describeSynchronizationJobsWithOptions(shared_ptr<DescribeSynchronizationJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSynchronizationJobsResponse describeSynchronizationJobs(shared_ptr<DescribeSynchronizationJobsRequest> request);
  DescribeSynchronizationObjectModifyStatusResponse describeSynchronizationObjectModifyStatusWithOptions(shared_ptr<DescribeSynchronizationObjectModifyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSynchronizationObjectModifyStatusResponse describeSynchronizationObjectModifyStatus(shared_ptr<DescribeSynchronizationObjectModifyStatusRequest> request);
  ModifySynchronizationObjectResponse modifySynchronizationObjectWithOptions(shared_ptr<ModifySynchronizationObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySynchronizationObjectResponse modifySynchronizationObject(shared_ptr<ModifySynchronizationObjectRequest> request);
  ResetSynchronizationJobResponse resetSynchronizationJobWithOptions(shared_ptr<ResetSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetSynchronizationJobResponse resetSynchronizationJob(shared_ptr<ResetSynchronizationJobRequest> request);
  StartSynchronizationJobResponse startSynchronizationJobWithOptions(shared_ptr<StartSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartSynchronizationJobResponse startSynchronizationJob(shared_ptr<StartSynchronizationJobRequest> request);
  SuspendSynchronizationJobResponse suspendSynchronizationJobWithOptions(shared_ptr<SuspendSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SuspendSynchronizationJobResponse suspendSynchronizationJob(shared_ptr<SuspendSynchronizationJobRequest> request);
  SwitchSynchronizationEndpointResponse switchSynchronizationEndpointWithOptions(shared_ptr<SwitchSynchronizationEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchSynchronizationEndpointResponse switchSynchronizationEndpoint(shared_ptr<SwitchSynchronizationEndpointRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dts20190901

#endif
