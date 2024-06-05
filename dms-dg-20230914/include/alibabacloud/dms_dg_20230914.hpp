// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DMS-DG20230914_H_
#define ALIBABACLOUD_DMS-DG20230914_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dms-dg20230914 {
class AddDatabaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dbDescription{};
  shared_ptr<string> dbName{};
  shared_ptr<string> dbPassword{};
  shared_ptr<string> dbType{};
  shared_ptr<string> dbUserName{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> host{};
  shared_ptr<long> port{};
  shared_ptr<string> regionId{};

  AddDatabaseRequest() {}

  explicit AddDatabaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dbDescription) {
      res["DbDescription"] = boost::any(*dbDescription);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbPassword) {
      res["DbPassword"] = boost::any(*dbPassword);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (dbUserName) {
      res["DbUserName"] = boost::any(*dbUserName);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
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
    if (m.find("DbDescription") != m.end() && !m["DbDescription"].empty()) {
      dbDescription = make_shared<string>(boost::any_cast<string>(m["DbDescription"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbPassword") != m.end() && !m["DbPassword"].empty()) {
      dbPassword = make_shared<string>(boost::any_cast<string>(m["DbPassword"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("DbUserName") != m.end() && !m["DbUserName"].empty()) {
      dbUserName = make_shared<string>(boost::any_cast<string>(m["DbUserName"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddDatabaseRequest() = default;
};
class AddDatabaseResponseBodyDbInstance : public Darabonba::Model {
public:
  shared_ptr<string> connectHost{};
  shared_ptr<long> connectPort{};
  shared_ptr<string> dbDescription{};
  shared_ptr<string> dbType{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayName{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> networkType{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> parentId{};
  shared_ptr<long> port{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> userId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcInstanceId{};

  AddDatabaseResponseBodyDbInstance() {}

  explicit AddDatabaseResponseBodyDbInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectHost) {
      res["ConnectHost"] = boost::any(*connectHost);
    }
    if (connectPort) {
      res["ConnectPort"] = boost::any(*connectPort);
    }
    if (dbDescription) {
      res["DbDescription"] = boost::any(*dbDescription);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayName) {
      res["GatewayName"] = boost::any(*gatewayName);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcInstanceId) {
      res["VpcInstanceId"] = boost::any(*vpcInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectHost") != m.end() && !m["ConnectHost"].empty()) {
      connectHost = make_shared<string>(boost::any_cast<string>(m["ConnectHost"]));
    }
    if (m.find("ConnectPort") != m.end() && !m["ConnectPort"].empty()) {
      connectPort = make_shared<long>(boost::any_cast<long>(m["ConnectPort"]));
    }
    if (m.find("DbDescription") != m.end() && !m["DbDescription"].empty()) {
      dbDescription = make_shared<string>(boost::any_cast<string>(m["DbDescription"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayName") != m.end() && !m["GatewayName"].empty()) {
      gatewayName = make_shared<string>(boost::any_cast<string>(m["GatewayName"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcInstanceId") != m.end() && !m["VpcInstanceId"].empty()) {
      vpcInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcInstanceId"]));
    }
  }


  virtual ~AddDatabaseResponseBodyDbInstance() = default;
};
class AddDatabaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AddDatabaseResponseBodyDbInstance> dbInstance{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddDatabaseResponseBody() {}

  explicit AddDatabaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dbInstance) {
      res["DbInstance"] = dbInstance ? boost::any(dbInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
    if (m.find("DbInstance") != m.end() && !m["DbInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbInstance"].type()) {
        AddDatabaseResponseBodyDbInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbInstance"]));
        dbInstance = make_shared<AddDatabaseResponseBodyDbInstance>(model1);
      }
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddDatabaseResponseBody() = default;
};
class AddDatabaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDatabaseResponseBody> body{};

  AddDatabaseResponse() {}

  explicit AddDatabaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddDatabaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDatabaseResponseBody>(model1);
      }
    }
  }


  virtual ~AddDatabaseResponse() = default;
};
class AddDatabaseListRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> databaseString{};

  AddDatabaseListRequest() {}

  explicit AddDatabaseListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (databaseString) {
      res["DatabaseString"] = boost::any(*databaseString);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DatabaseString") != m.end() && !m["DatabaseString"].empty()) {
      databaseString = make_shared<string>(boost::any_cast<string>(m["DatabaseString"]));
    }
  }


  virtual ~AddDatabaseListRequest() = default;
};
class AddDatabaseListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddDatabaseListResponseBody() {}

  explicit AddDatabaseListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddDatabaseListResponseBody() = default;
};
class AddDatabaseListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDatabaseListResponseBody> body{};

  AddDatabaseListResponse() {}

  explicit AddDatabaseListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddDatabaseListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDatabaseListResponseBody>(model1);
      }
    }
  }


  virtual ~AddDatabaseListResponse() = default;
};
class CheckDGEnabledResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckDGEnabledResponseBody() {}

  explicit CheckDGEnabledResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckDGEnabledResponseBody() = default;
};
class CheckDGEnabledResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDGEnabledResponseBody> body{};

  CheckDGEnabledResponse() {}

  explicit CheckDGEnabledResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckDGEnabledResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDGEnabledResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDGEnabledResponse() = default;
};
class ConnectDatabaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> dbPassword{};
  shared_ptr<string> dbType{};
  shared_ptr<string> dbUserName{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> host{};
  shared_ptr<long> port{};

  ConnectDatabaseRequest() {}

  explicit ConnectDatabaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbPassword) {
      res["DbPassword"] = boost::any(*dbPassword);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (dbUserName) {
      res["DbUserName"] = boost::any(*dbUserName);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbPassword") != m.end() && !m["DbPassword"].empty()) {
      dbPassword = make_shared<string>(boost::any_cast<string>(m["DbPassword"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("DbUserName") != m.end() && !m["DbUserName"].empty()) {
      dbUserName = make_shared<string>(boost::any_cast<string>(m["DbUserName"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~ConnectDatabaseRequest() = default;
};
class ConnectDatabaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConnectDatabaseResponseBody() {}

  explicit ConnectDatabaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ConnectDatabaseResponseBody() = default;
};
class ConnectDatabaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConnectDatabaseResponseBody> body{};

  ConnectDatabaseResponse() {}

  explicit ConnectDatabaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ConnectDatabaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConnectDatabaseResponseBody>(model1);
      }
    }
  }


  virtual ~ConnectDatabaseResponse() = default;
};
class CreateGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayDesc{};
  shared_ptr<string> gatewayName{};
  shared_ptr<string> regionId{};

  CreateGatewayRequest() {}

  explicit CreateGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayDesc) {
      res["GatewayDesc"] = boost::any(*gatewayDesc);
    }
    if (gatewayName) {
      res["GatewayName"] = boost::any(*gatewayName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayDesc") != m.end() && !m["GatewayDesc"].empty()) {
      gatewayDesc = make_shared<string>(boost::any_cast<string>(m["GatewayDesc"]));
    }
    if (m.find("GatewayName") != m.end() && !m["GatewayName"].empty()) {
      gatewayName = make_shared<string>(boost::any_cast<string>(m["GatewayName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateGatewayRequest() = default;
};
class CreateGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateGatewayResponseBody() {}

  explicit CreateGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateGatewayResponseBody() = default;
};
class CreateGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayResponseBody> body{};

  CreateGatewayResponse() {}

  explicit CreateGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayResponse() = default;
};
class CreateGatewayVerifyCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};

  CreateGatewayVerifyCodeRequest() {}

  explicit CreateGatewayVerifyCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
  }


  virtual ~CreateGatewayVerifyCodeRequest() = default;
};
class CreateGatewayVerifyCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateGatewayVerifyCodeResponseBody() {}

  explicit CreateGatewayVerifyCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateGatewayVerifyCodeResponseBody() = default;
};
class CreateGatewayVerifyCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayVerifyCodeResponseBody> body{};

  CreateGatewayVerifyCodeResponse() {}

  explicit CreateGatewayVerifyCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGatewayVerifyCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayVerifyCodeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayVerifyCodeResponse() = default;
};
class DeleteDatabaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteDatabaseRequest() {}

  explicit DeleteDatabaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDatabaseRequest() = default;
};
class DeleteDatabaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDatabaseResponseBody() {}

  explicit DeleteDatabaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDatabaseResponseBody() = default;
};
class DeleteDatabaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatabaseResponseBody> body{};

  DeleteDatabaseResponse() {}

  explicit DeleteDatabaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatabaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatabaseResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatabaseResponse() = default;
};
class DeleteGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};

  DeleteGatewayRequest() {}

  explicit DeleteGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
  }


  virtual ~DeleteGatewayRequest() = default;
};
class DeleteGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteGatewayResponseBody() {}

  explicit DeleteGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteGatewayResponseBody() = default;
};
class DeleteGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayResponseBody> body{};

  DeleteGatewayResponse() {}

  explicit DeleteGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayResponse() = default;
};
class DeleteGatewayInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayInstanceId{};
  shared_ptr<string> regionId{};

  DeleteGatewayInstanceRequest() {}

  explicit DeleteGatewayInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayInstanceId) {
      res["GatewayInstanceId"] = boost::any(*gatewayInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayInstanceId") != m.end() && !m["GatewayInstanceId"].empty()) {
      gatewayInstanceId = make_shared<string>(boost::any_cast<string>(m["GatewayInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteGatewayInstanceRequest() = default;
};
class DeleteGatewayInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteGatewayInstanceResponseBody() {}

  explicit DeleteGatewayInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteGatewayInstanceResponseBody() = default;
};
class DeleteGatewayInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayInstanceResponseBody> body{};

  DeleteGatewayInstanceResponse() {}

  explicit DeleteGatewayInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewayInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayInstanceResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMsg{};
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class DownloadGatewayProgramRequest : public Darabonba::Model {
public:
  shared_ptr<string> dgVersion{};
  shared_ptr<string> userOS{};

  DownloadGatewayProgramRequest() {}

  explicit DownloadGatewayProgramRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dgVersion) {
      res["DgVersion"] = boost::any(*dgVersion);
    }
    if (userOS) {
      res["UserOS"] = boost::any(*userOS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DgVersion") != m.end() && !m["DgVersion"].empty()) {
      dgVersion = make_shared<string>(boost::any_cast<string>(m["DgVersion"]));
    }
    if (m.find("UserOS") != m.end() && !m["UserOS"].empty()) {
      userOS = make_shared<string>(boost::any_cast<string>(m["UserOS"]));
    }
  }


  virtual ~DownloadGatewayProgramRequest() = default;
};
class DownloadGatewayProgramResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DownloadGatewayProgramResponseBody() {}

  explicit DownloadGatewayProgramResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DownloadGatewayProgramResponseBody() = default;
};
class DownloadGatewayProgramResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DownloadGatewayProgramResponseBody> body{};

  DownloadGatewayProgramResponse() {}

  explicit DownloadGatewayProgramResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DownloadGatewayProgramResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DownloadGatewayProgramResponseBody>(model1);
      }
    }
  }


  virtual ~DownloadGatewayProgramResponse() = default;
};
class FindUserGatewayByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};

  FindUserGatewayByIdRequest() {}

  explicit FindUserGatewayByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
  }


  virtual ~FindUserGatewayByIdRequest() = default;
};
class FindUserGatewayByIdResponseBodyGateway : public Darabonba::Model {
public:
  shared_ptr<string> creatorId{};
  shared_ptr<string> dgVersion{};
  shared_ptr<string> exceptionMsg{};
  shared_ptr<string> gatewayDesc{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayName{};
  shared_ptr<long> numOfExceptionInstance{};
  shared_ptr<long> numOfRunningInstance{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> userId{};

  FindUserGatewayByIdResponseBodyGateway() {}

  explicit FindUserGatewayByIdResponseBodyGateway(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (dgVersion) {
      res["DgVersion"] = boost::any(*dgVersion);
    }
    if (exceptionMsg) {
      res["ExceptionMsg"] = boost::any(*exceptionMsg);
    }
    if (gatewayDesc) {
      res["GatewayDesc"] = boost::any(*gatewayDesc);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayName) {
      res["GatewayName"] = boost::any(*gatewayName);
    }
    if (numOfExceptionInstance) {
      res["NumOfExceptionInstance"] = boost::any(*numOfExceptionInstance);
    }
    if (numOfRunningInstance) {
      res["NumOfRunningInstance"] = boost::any(*numOfRunningInstance);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("DgVersion") != m.end() && !m["DgVersion"].empty()) {
      dgVersion = make_shared<string>(boost::any_cast<string>(m["DgVersion"]));
    }
    if (m.find("ExceptionMsg") != m.end() && !m["ExceptionMsg"].empty()) {
      exceptionMsg = make_shared<string>(boost::any_cast<string>(m["ExceptionMsg"]));
    }
    if (m.find("GatewayDesc") != m.end() && !m["GatewayDesc"].empty()) {
      gatewayDesc = make_shared<string>(boost::any_cast<string>(m["GatewayDesc"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayName") != m.end() && !m["GatewayName"].empty()) {
      gatewayName = make_shared<string>(boost::any_cast<string>(m["GatewayName"]));
    }
    if (m.find("NumOfExceptionInstance") != m.end() && !m["NumOfExceptionInstance"].empty()) {
      numOfExceptionInstance = make_shared<long>(boost::any_cast<long>(m["NumOfExceptionInstance"]));
    }
    if (m.find("NumOfRunningInstance") != m.end() && !m["NumOfRunningInstance"].empty()) {
      numOfRunningInstance = make_shared<long>(boost::any_cast<long>(m["NumOfRunningInstance"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~FindUserGatewayByIdResponseBodyGateway() = default;
};
class FindUserGatewayByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMsg{};
  shared_ptr<FindUserGatewayByIdResponseBodyGateway> gateway{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FindUserGatewayByIdResponseBody() {}

  explicit FindUserGatewayByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (gateway) {
      res["Gateway"] = gateway ? boost::any(gateway->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Gateway") != m.end() && !m["Gateway"].empty()) {
      if (typeid(map<string, boost::any>) == m["Gateway"].type()) {
        FindUserGatewayByIdResponseBodyGateway model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Gateway"]));
        gateway = make_shared<FindUserGatewayByIdResponseBodyGateway>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FindUserGatewayByIdResponseBody() = default;
};
class FindUserGatewayByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FindUserGatewayByIdResponseBody> body{};

  FindUserGatewayByIdResponse() {}

  explicit FindUserGatewayByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FindUserGatewayByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FindUserGatewayByIdResponseBody>(model1);
      }
    }
  }


  virtual ~FindUserGatewayByIdResponse() = default;
};
class GetUserDatabasesRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbType{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<long> port{};
  shared_ptr<string> regionId{};
  shared_ptr<string> searchKey{};

  GetUserDatabasesRequest() {}

  explicit GetUserDatabasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetUserDatabasesRequest() = default;
};
class GetUserDatabasesResponseBodyDbInstanceListDbInstance : public Darabonba::Model {
public:
  shared_ptr<string> connectHost{};
  shared_ptr<long> connectPort{};
  shared_ptr<string> dbDescription{};
  shared_ptr<string> dbType{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayName{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> networkType{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> parentId{};
  shared_ptr<long> port{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> userId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcInstanceId{};

  GetUserDatabasesResponseBodyDbInstanceListDbInstance() {}

  explicit GetUserDatabasesResponseBodyDbInstanceListDbInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectHost) {
      res["ConnectHost"] = boost::any(*connectHost);
    }
    if (connectPort) {
      res["ConnectPort"] = boost::any(*connectPort);
    }
    if (dbDescription) {
      res["DbDescription"] = boost::any(*dbDescription);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayName) {
      res["GatewayName"] = boost::any(*gatewayName);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcInstanceId) {
      res["VpcInstanceId"] = boost::any(*vpcInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectHost") != m.end() && !m["ConnectHost"].empty()) {
      connectHost = make_shared<string>(boost::any_cast<string>(m["ConnectHost"]));
    }
    if (m.find("ConnectPort") != m.end() && !m["ConnectPort"].empty()) {
      connectPort = make_shared<long>(boost::any_cast<long>(m["ConnectPort"]));
    }
    if (m.find("DbDescription") != m.end() && !m["DbDescription"].empty()) {
      dbDescription = make_shared<string>(boost::any_cast<string>(m["DbDescription"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayName") != m.end() && !m["GatewayName"].empty()) {
      gatewayName = make_shared<string>(boost::any_cast<string>(m["GatewayName"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcInstanceId") != m.end() && !m["VpcInstanceId"].empty()) {
      vpcInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcInstanceId"]));
    }
  }


  virtual ~GetUserDatabasesResponseBodyDbInstanceListDbInstance() = default;
};
class GetUserDatabasesResponseBodyDbInstanceList : public Darabonba::Model {
public:
  shared_ptr<vector<GetUserDatabasesResponseBodyDbInstanceListDbInstance>> dbInstance{};

  GetUserDatabasesResponseBodyDbInstanceList() {}

  explicit GetUserDatabasesResponseBodyDbInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbInstance) {
      vector<boost::any> temp1;
      for(auto item1:*dbInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbInstance") != m.end() && !m["DbInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["DbInstance"].type()) {
        vector<GetUserDatabasesResponseBodyDbInstanceListDbInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserDatabasesResponseBodyDbInstanceListDbInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbInstance = make_shared<vector<GetUserDatabasesResponseBodyDbInstanceListDbInstance>>(expect1);
      }
    }
  }


  virtual ~GetUserDatabasesResponseBodyDbInstanceList() = default;
};
class GetUserDatabasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<GetUserDatabasesResponseBodyDbInstanceList> dbInstanceList{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetUserDatabasesResponseBody() {}

  explicit GetUserDatabasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dbInstanceList) {
      res["DbInstanceList"] = dbInstanceList ? boost::any(dbInstanceList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DbInstanceList") != m.end() && !m["DbInstanceList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbInstanceList"].type()) {
        GetUserDatabasesResponseBodyDbInstanceList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbInstanceList"]));
        dbInstanceList = make_shared<GetUserDatabasesResponseBodyDbInstanceList>(model1);
      }
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetUserDatabasesResponseBody() = default;
};
class GetUserDatabasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserDatabasesResponseBody> body{};

  GetUserDatabasesResponse() {}

  explicit GetUserDatabasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserDatabasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserDatabasesResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserDatabasesResponse() = default;
};
class GetUserGatewayInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};

  GetUserGatewayInstancesRequest() {}

  explicit GetUserGatewayInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
  }


  virtual ~GetUserGatewayInstancesRequest() = default;
};
class GetUserGatewayInstancesResponseBodyGatewayInstanceList : public Darabonba::Model {
public:
  shared_ptr<string> connectEndpointType{};
  shared_ptr<string> currentDaemonVersion{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayInstanceId{};
  shared_ptr<string> gatewayInstanceStatus{};
  shared_ptr<long> lastUpdateTime{};
  shared_ptr<string> localIP{};
  shared_ptr<string> message{};
  shared_ptr<string> outputIP{};
  shared_ptr<string> regionId{};

  GetUserGatewayInstancesResponseBodyGatewayInstanceList() {}

  explicit GetUserGatewayInstancesResponseBodyGatewayInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectEndpointType) {
      res["ConnectEndpointType"] = boost::any(*connectEndpointType);
    }
    if (currentDaemonVersion) {
      res["CurrentDaemonVersion"] = boost::any(*currentDaemonVersion);
    }
    if (currentVersion) {
      res["CurrentVersion"] = boost::any(*currentVersion);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayInstanceId) {
      res["GatewayInstanceId"] = boost::any(*gatewayInstanceId);
    }
    if (gatewayInstanceStatus) {
      res["GatewayInstanceStatus"] = boost::any(*gatewayInstanceStatus);
    }
    if (lastUpdateTime) {
      res["LastUpdateTime"] = boost::any(*lastUpdateTime);
    }
    if (localIP) {
      res["LocalIP"] = boost::any(*localIP);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (outputIP) {
      res["OutputIP"] = boost::any(*outputIP);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectEndpointType") != m.end() && !m["ConnectEndpointType"].empty()) {
      connectEndpointType = make_shared<string>(boost::any_cast<string>(m["ConnectEndpointType"]));
    }
    if (m.find("CurrentDaemonVersion") != m.end() && !m["CurrentDaemonVersion"].empty()) {
      currentDaemonVersion = make_shared<string>(boost::any_cast<string>(m["CurrentDaemonVersion"]));
    }
    if (m.find("CurrentVersion") != m.end() && !m["CurrentVersion"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["CurrentVersion"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayInstanceId") != m.end() && !m["GatewayInstanceId"].empty()) {
      gatewayInstanceId = make_shared<string>(boost::any_cast<string>(m["GatewayInstanceId"]));
    }
    if (m.find("GatewayInstanceStatus") != m.end() && !m["GatewayInstanceStatus"].empty()) {
      gatewayInstanceStatus = make_shared<string>(boost::any_cast<string>(m["GatewayInstanceStatus"]));
    }
    if (m.find("LastUpdateTime") != m.end() && !m["LastUpdateTime"].empty()) {
      lastUpdateTime = make_shared<long>(boost::any_cast<long>(m["LastUpdateTime"]));
    }
    if (m.find("LocalIP") != m.end() && !m["LocalIP"].empty()) {
      localIP = make_shared<string>(boost::any_cast<string>(m["LocalIP"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OutputIP") != m.end() && !m["OutputIP"].empty()) {
      outputIP = make_shared<string>(boost::any_cast<string>(m["OutputIP"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetUserGatewayInstancesResponseBodyGatewayInstanceList() = default;
};
class GetUserGatewayInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMsg{};
  shared_ptr<vector<GetUserGatewayInstancesResponseBodyGatewayInstanceList>> gatewayInstanceList{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetUserGatewayInstancesResponseBody() {}

  explicit GetUserGatewayInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (gatewayInstanceList) {
      vector<boost::any> temp1;
      for(auto item1:*gatewayInstanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GatewayInstanceList"] = boost::any(temp1);
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
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("GatewayInstanceList") != m.end() && !m["GatewayInstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["GatewayInstanceList"].type()) {
        vector<GetUserGatewayInstancesResponseBodyGatewayInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GatewayInstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserGatewayInstancesResponseBodyGatewayInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gatewayInstanceList = make_shared<vector<GetUserGatewayInstancesResponseBodyGatewayInstanceList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetUserGatewayInstancesResponseBody() = default;
};
class GetUserGatewayInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserGatewayInstancesResponseBody> body{};

  GetUserGatewayInstancesResponse() {}

  explicit GetUserGatewayInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserGatewayInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserGatewayInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserGatewayInstancesResponse() = default;
};
class GetUserGatewaysRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> searchKey{};

  GetUserGatewaysRequest() {}

  explicit GetUserGatewaysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
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
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
  }


  virtual ~GetUserGatewaysRequest() = default;
};
class GetUserGatewaysResponseBodyGatewayListGateway : public Darabonba::Model {
public:
  shared_ptr<string> creatorId{};
  shared_ptr<string> dgVersion{};
  shared_ptr<string> exceptionMsg{};
  shared_ptr<string> gatewayDesc{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayName{};
  shared_ptr<long> numOfExceptionInstance{};
  shared_ptr<long> numOfRunningInstance{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> userId{};

  GetUserGatewaysResponseBodyGatewayListGateway() {}

  explicit GetUserGatewaysResponseBodyGatewayListGateway(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (dgVersion) {
      res["DgVersion"] = boost::any(*dgVersion);
    }
    if (exceptionMsg) {
      res["ExceptionMsg"] = boost::any(*exceptionMsg);
    }
    if (gatewayDesc) {
      res["GatewayDesc"] = boost::any(*gatewayDesc);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayName) {
      res["GatewayName"] = boost::any(*gatewayName);
    }
    if (numOfExceptionInstance) {
      res["NumOfExceptionInstance"] = boost::any(*numOfExceptionInstance);
    }
    if (numOfRunningInstance) {
      res["NumOfRunningInstance"] = boost::any(*numOfRunningInstance);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("DgVersion") != m.end() && !m["DgVersion"].empty()) {
      dgVersion = make_shared<string>(boost::any_cast<string>(m["DgVersion"]));
    }
    if (m.find("ExceptionMsg") != m.end() && !m["ExceptionMsg"].empty()) {
      exceptionMsg = make_shared<string>(boost::any_cast<string>(m["ExceptionMsg"]));
    }
    if (m.find("GatewayDesc") != m.end() && !m["GatewayDesc"].empty()) {
      gatewayDesc = make_shared<string>(boost::any_cast<string>(m["GatewayDesc"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayName") != m.end() && !m["GatewayName"].empty()) {
      gatewayName = make_shared<string>(boost::any_cast<string>(m["GatewayName"]));
    }
    if (m.find("NumOfExceptionInstance") != m.end() && !m["NumOfExceptionInstance"].empty()) {
      numOfExceptionInstance = make_shared<long>(boost::any_cast<long>(m["NumOfExceptionInstance"]));
    }
    if (m.find("NumOfRunningInstance") != m.end() && !m["NumOfRunningInstance"].empty()) {
      numOfRunningInstance = make_shared<long>(boost::any_cast<long>(m["NumOfRunningInstance"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetUserGatewaysResponseBodyGatewayListGateway() = default;
};
class GetUserGatewaysResponseBodyGatewayList : public Darabonba::Model {
public:
  shared_ptr<vector<GetUserGatewaysResponseBodyGatewayListGateway>> gateway{};

  GetUserGatewaysResponseBodyGatewayList() {}

  explicit GetUserGatewaysResponseBodyGatewayList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gateway) {
      vector<boost::any> temp1;
      for(auto item1:*gateway){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Gateway"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gateway") != m.end() && !m["Gateway"].empty()) {
      if (typeid(vector<boost::any>) == m["Gateway"].type()) {
        vector<GetUserGatewaysResponseBodyGatewayListGateway> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Gateway"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserGatewaysResponseBodyGatewayListGateway model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gateway = make_shared<vector<GetUserGatewaysResponseBodyGatewayListGateway>>(expect1);
      }
    }
  }


  virtual ~GetUserGatewaysResponseBodyGatewayList() = default;
};
class GetUserGatewaysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<string> errorMsg{};
  shared_ptr<GetUserGatewaysResponseBodyGatewayList> gatewayList{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetUserGatewaysResponseBody() {}

  explicit GetUserGatewaysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (gatewayList) {
      res["GatewayList"] = gatewayList ? boost::any(gatewayList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("GatewayList") != m.end() && !m["GatewayList"].empty()) {
      if (typeid(map<string, boost::any>) == m["GatewayList"].type()) {
        GetUserGatewaysResponseBodyGatewayList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GatewayList"]));
        gatewayList = make_shared<GetUserGatewaysResponseBodyGatewayList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetUserGatewaysResponseBody() = default;
};
class GetUserGatewaysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserGatewaysResponseBody> body{};

  GetUserGatewaysResponse() {}

  explicit GetUserGatewaysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserGatewaysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserGatewaysResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserGatewaysResponse() = default;
};
class ListDatabaseAccessPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> host{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<long> port{};
  shared_ptr<string> regionId{};
  shared_ptr<string> searchKey{};
  shared_ptr<string> vpcId{};

  ListDatabaseAccessPointRequest() {}

  explicit ListDatabaseAccessPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListDatabaseAccessPointRequest() = default;
};
class ListDatabaseAccessPointResponseBodyDbInstanceAccessPointList : public Darabonba::Model {
public:
  shared_ptr<string> accessAddr{};
  shared_ptr<long> accessPort{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> routerId{};
  shared_ptr<string> vpcAzoneId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};

  ListDatabaseAccessPointResponseBodyDbInstanceAccessPointList() {}

  explicit ListDatabaseAccessPointResponseBodyDbInstanceAccessPointList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessAddr) {
      res["AccessAddr"] = boost::any(*accessAddr);
    }
    if (accessPort) {
      res["AccessPort"] = boost::any(*accessPort);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (routerId) {
      res["RouterId"] = boost::any(*routerId);
    }
    if (vpcAzoneId) {
      res["VpcAzoneId"] = boost::any(*vpcAzoneId);
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
    if (m.find("AccessAddr") != m.end() && !m["AccessAddr"].empty()) {
      accessAddr = make_shared<string>(boost::any_cast<string>(m["AccessAddr"]));
    }
    if (m.find("AccessPort") != m.end() && !m["AccessPort"].empty()) {
      accessPort = make_shared<long>(boost::any_cast<long>(m["AccessPort"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("RouterId") != m.end() && !m["RouterId"].empty()) {
      routerId = make_shared<string>(boost::any_cast<string>(m["RouterId"]));
    }
    if (m.find("VpcAzoneId") != m.end() && !m["VpcAzoneId"].empty()) {
      vpcAzoneId = make_shared<string>(boost::any_cast<string>(m["VpcAzoneId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~ListDatabaseAccessPointResponseBodyDbInstanceAccessPointList() = default;
};
class ListDatabaseAccessPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<vector<ListDatabaseAccessPointResponseBodyDbInstanceAccessPointList>> dbInstanceAccessPointList{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ListDatabaseAccessPointResponseBody() {}

  explicit ListDatabaseAccessPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dbInstanceAccessPointList) {
      vector<boost::any> temp1;
      for(auto item1:*dbInstanceAccessPointList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbInstanceAccessPointList"] = boost::any(temp1);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DbInstanceAccessPointList") != m.end() && !m["DbInstanceAccessPointList"].empty()) {
      if (typeid(vector<boost::any>) == m["DbInstanceAccessPointList"].type()) {
        vector<ListDatabaseAccessPointResponseBodyDbInstanceAccessPointList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbInstanceAccessPointList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDatabaseAccessPointResponseBodyDbInstanceAccessPointList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbInstanceAccessPointList = make_shared<vector<ListDatabaseAccessPointResponseBodyDbInstanceAccessPointList>>(expect1);
      }
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ListDatabaseAccessPointResponseBody() = default;
};
class ListDatabaseAccessPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDatabaseAccessPointResponseBody> body{};

  ListDatabaseAccessPointResponse() {}

  explicit ListDatabaseAccessPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDatabaseAccessPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatabaseAccessPointResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatabaseAccessPointResponse() = default;
};
class ModifyDatabaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbDescription{};
  shared_ptr<string> dbName{};
  shared_ptr<string> dbPassword{};
  shared_ptr<string> dbType{};
  shared_ptr<string> dbUserName{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> port{};

  ModifyDatabaseRequest() {}

  explicit ModifyDatabaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbDescription) {
      res["DbDescription"] = boost::any(*dbDescription);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbPassword) {
      res["DbPassword"] = boost::any(*dbPassword);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (dbUserName) {
      res["DbUserName"] = boost::any(*dbUserName);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbDescription") != m.end() && !m["DbDescription"].empty()) {
      dbDescription = make_shared<string>(boost::any_cast<string>(m["DbDescription"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbPassword") != m.end() && !m["DbPassword"].empty()) {
      dbPassword = make_shared<string>(boost::any_cast<string>(m["DbPassword"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("DbUserName") != m.end() && !m["DbUserName"].empty()) {
      dbUserName = make_shared<string>(boost::any_cast<string>(m["DbUserName"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~ModifyDatabaseRequest() = default;
};
class ModifyDatabaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyDatabaseResponseBody() {}

  explicit ModifyDatabaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyDatabaseResponseBody() = default;
};
class ModifyDatabaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDatabaseResponseBody> body{};

  ModifyDatabaseResponse() {}

  explicit ModifyDatabaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDatabaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDatabaseResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDatabaseResponse() = default;
};
class ModifyGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayDesc{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayName{};

  ModifyGatewayRequest() {}

  explicit ModifyGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayDesc) {
      res["GatewayDesc"] = boost::any(*gatewayDesc);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayName) {
      res["GatewayName"] = boost::any(*gatewayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayDesc") != m.end() && !m["GatewayDesc"].empty()) {
      gatewayDesc = make_shared<string>(boost::any_cast<string>(m["GatewayDesc"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayName") != m.end() && !m["GatewayName"].empty()) {
      gatewayName = make_shared<string>(boost::any_cast<string>(m["GatewayName"]));
    }
  }


  virtual ~ModifyGatewayRequest() = default;
};
class ModifyGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyGatewayResponseBody() {}

  explicit ModifyGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyGatewayResponseBody() = default;
};
class ModifyGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyGatewayResponseBody> body{};

  ModifyGatewayResponse() {}

  explicit ModifyGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyGatewayResponse() = default;
};
class RetryDatabaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dbDescription{};
  shared_ptr<string> dbName{};
  shared_ptr<string> dbPassword{};
  shared_ptr<string> dbType{};
  shared_ptr<string> dbUserName{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> host{};
  shared_ptr<long> port{};
  shared_ptr<string> regionId{};

  RetryDatabaseRequest() {}

  explicit RetryDatabaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dbDescription) {
      res["DbDescription"] = boost::any(*dbDescription);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbPassword) {
      res["DbPassword"] = boost::any(*dbPassword);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (dbUserName) {
      res["DbUserName"] = boost::any(*dbUserName);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
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
    if (m.find("DbDescription") != m.end() && !m["DbDescription"].empty()) {
      dbDescription = make_shared<string>(boost::any_cast<string>(m["DbDescription"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbPassword") != m.end() && !m["DbPassword"].empty()) {
      dbPassword = make_shared<string>(boost::any_cast<string>(m["DbPassword"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("DbUserName") != m.end() && !m["DbUserName"].empty()) {
      dbUserName = make_shared<string>(boost::any_cast<string>(m["DbUserName"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~RetryDatabaseRequest() = default;
};
class RetryDatabaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RetryDatabaseResponseBody() {}

  explicit RetryDatabaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RetryDatabaseResponseBody() = default;
};
class RetryDatabaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RetryDatabaseResponseBody> body{};

  RetryDatabaseResponse() {}

  explicit RetryDatabaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RetryDatabaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetryDatabaseResponseBody>(model1);
      }
    }
  }


  virtual ~RetryDatabaseResponse() = default;
};
class StopGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayInstanceId{};

  StopGatewayRequest() {}

  explicit StopGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayInstanceId) {
      res["GatewayInstanceId"] = boost::any(*gatewayInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayInstanceId") != m.end() && !m["GatewayInstanceId"].empty()) {
      gatewayInstanceId = make_shared<string>(boost::any_cast<string>(m["GatewayInstanceId"]));
    }
  }


  virtual ~StopGatewayRequest() = default;
};
class StopGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopGatewayResponseBody() {}

  explicit StopGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StopGatewayResponseBody() = default;
};
class StopGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopGatewayResponseBody> body{};

  StopGatewayResponse() {}

  explicit StopGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~StopGatewayResponse() = default;
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
  AddDatabaseResponse addDatabaseWithOptions(shared_ptr<AddDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDatabaseResponse addDatabase(shared_ptr<AddDatabaseRequest> request);
  AddDatabaseListResponse addDatabaseListWithOptions(shared_ptr<AddDatabaseListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDatabaseListResponse addDatabaseList(shared_ptr<AddDatabaseListRequest> request);
  CheckDGEnabledResponse checkDGEnabledWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDGEnabledResponse checkDGEnabled();
  ConnectDatabaseResponse connectDatabaseWithOptions(shared_ptr<ConnectDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConnectDatabaseResponse connectDatabase(shared_ptr<ConnectDatabaseRequest> request);
  CreateGatewayResponse createGatewayWithOptions(shared_ptr<CreateGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayResponse createGateway(shared_ptr<CreateGatewayRequest> request);
  CreateGatewayVerifyCodeResponse createGatewayVerifyCodeWithOptions(shared_ptr<CreateGatewayVerifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayVerifyCodeResponse createGatewayVerifyCode(shared_ptr<CreateGatewayVerifyCodeRequest> request);
  DeleteDatabaseResponse deleteDatabaseWithOptions(shared_ptr<DeleteDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatabaseResponse deleteDatabase(shared_ptr<DeleteDatabaseRequest> request);
  DeleteGatewayResponse deleteGatewayWithOptions(shared_ptr<DeleteGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayResponse deleteGateway(shared_ptr<DeleteGatewayRequest> request);
  DeleteGatewayInstanceResponse deleteGatewayInstanceWithOptions(shared_ptr<DeleteGatewayInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayInstanceResponse deleteGatewayInstance(shared_ptr<DeleteGatewayInstanceRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DownloadGatewayProgramResponse downloadGatewayProgramWithOptions(shared_ptr<DownloadGatewayProgramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DownloadGatewayProgramResponse downloadGatewayProgram(shared_ptr<DownloadGatewayProgramRequest> request);
  FindUserGatewayByIdResponse findUserGatewayByIdWithOptions(shared_ptr<FindUserGatewayByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FindUserGatewayByIdResponse findUserGatewayById(shared_ptr<FindUserGatewayByIdRequest> request);
  GetUserDatabasesResponse getUserDatabasesWithOptions(shared_ptr<GetUserDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserDatabasesResponse getUserDatabases(shared_ptr<GetUserDatabasesRequest> request);
  GetUserGatewayInstancesResponse getUserGatewayInstancesWithOptions(shared_ptr<GetUserGatewayInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserGatewayInstancesResponse getUserGatewayInstances(shared_ptr<GetUserGatewayInstancesRequest> request);
  GetUserGatewaysResponse getUserGatewaysWithOptions(shared_ptr<GetUserGatewaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserGatewaysResponse getUserGateways(shared_ptr<GetUserGatewaysRequest> request);
  ListDatabaseAccessPointResponse listDatabaseAccessPointWithOptions(shared_ptr<ListDatabaseAccessPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatabaseAccessPointResponse listDatabaseAccessPoint(shared_ptr<ListDatabaseAccessPointRequest> request);
  ModifyDatabaseResponse modifyDatabaseWithOptions(shared_ptr<ModifyDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDatabaseResponse modifyDatabase(shared_ptr<ModifyDatabaseRequest> request);
  ModifyGatewayResponse modifyGatewayWithOptions(shared_ptr<ModifyGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyGatewayResponse modifyGateway(shared_ptr<ModifyGatewayRequest> request);
  RetryDatabaseResponse retryDatabaseWithOptions(shared_ptr<RetryDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryDatabaseResponse retryDatabase(shared_ptr<RetryDatabaseRequest> request);
  StopGatewayResponse stopGatewayWithOptions(shared_ptr<StopGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopGatewayResponse stopGateway(shared_ptr<StopGatewayRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dms-dg20230914

#endif
