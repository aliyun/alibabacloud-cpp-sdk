// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_POLARDBX20200202_H_
#define ALIBABACLOUD_POLARDBX20200202_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Polardbx20200202 {
class AllocateInstancePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> port{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  AllocateInstancePublicConnectionRequest() {}

  explicit AllocateInstancePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~AllocateInstancePublicConnectionRequest() = default;
};
class AllocateInstancePublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocateInstancePublicConnectionResponseBody() {}

  explicit AllocateInstancePublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AllocateInstancePublicConnectionResponseBody() = default;
};
class AllocateInstancePublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AllocateInstancePublicConnectionResponseBody> body{};

  AllocateInstancePublicConnectionResponse() {}

  explicit AllocateInstancePublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllocateInstancePublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateInstancePublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateInstancePublicConnectionResponse() = default;
};
class CancelPolarxOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scaleOutToken{};

  CancelPolarxOrderRequest() {}

  explicit CancelPolarxOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scaleOutToken) {
      res["ScaleOutToken"] = boost::any(*scaleOutToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScaleOutToken") != m.end() && !m["ScaleOutToken"].empty()) {
      scaleOutToken = make_shared<string>(boost::any_cast<string>(m["ScaleOutToken"]));
    }
  }


  virtual ~CancelPolarxOrderRequest() = default;
};
class CancelPolarxOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelPolarxOrderResponseBody() {}

  explicit CancelPolarxOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelPolarxOrderResponseBody() = default;
};
class CancelPolarxOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelPolarxOrderResponseBody> body{};

  CancelPolarxOrderResponse() {}

  explicit CancelPolarxOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelPolarxOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelPolarxOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CancelPolarxOrderResponse() = default;
};
class CheckCloudResourceAuthorizedRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> roleArn{};

  CheckCloudResourceAuthorizedRequest() {}

  explicit CheckCloudResourceAuthorizedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
  }


  virtual ~CheckCloudResourceAuthorizedRequest() = default;
};
class CheckCloudResourceAuthorizedResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> authorizationState{};
  shared_ptr<string> roleArn{};

  CheckCloudResourceAuthorizedResponseBodyData() {}

  explicit CheckCloudResourceAuthorizedResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationState) {
      res["AuthorizationState"] = boost::any(*authorizationState);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationState") != m.end() && !m["AuthorizationState"].empty()) {
      authorizationState = make_shared<string>(boost::any_cast<string>(m["AuthorizationState"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
  }


  virtual ~CheckCloudResourceAuthorizedResponseBodyData() = default;
};
class CheckCloudResourceAuthorizedResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckCloudResourceAuthorizedResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CheckCloudResourceAuthorizedResponseBody() {}

  explicit CheckCloudResourceAuthorizedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CheckCloudResourceAuthorizedResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckCloudResourceAuthorizedResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckCloudResourceAuthorizedResponseBody() = default;
};
class CheckCloudResourceAuthorizedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckCloudResourceAuthorizedResponseBody> body{};

  CheckCloudResourceAuthorizedResponse() {}

  explicit CheckCloudResourceAuthorizedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckCloudResourceAuthorizedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckCloudResourceAuthorizedResponseBody>(model1);
      }
    }
  }


  virtual ~CheckCloudResourceAuthorizedResponse() = default;
};
class CreateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityAccountName{};
  shared_ptr<string> securityAccountPassword{};

  CreateAccountRequest() {}

  explicit CreateAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityAccountName) {
      res["SecurityAccountName"] = boost::any(*securityAccountName);
    }
    if (securityAccountPassword) {
      res["SecurityAccountPassword"] = boost::any(*securityAccountPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityAccountName") != m.end() && !m["SecurityAccountName"].empty()) {
      securityAccountName = make_shared<string>(boost::any_cast<string>(m["SecurityAccountName"]));
    }
    if (m.find("SecurityAccountPassword") != m.end() && !m["SecurityAccountPassword"].empty()) {
      securityAccountPassword = make_shared<string>(boost::any_cast<string>(m["SecurityAccountPassword"]));
    }
  }


  virtual ~CreateAccountRequest() = default;
};
class CreateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAccountResponseBody() {}

  explicit CreateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateAccountResponseBody() = default;
};
class CreateAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAccountResponseBody> body{};

  CreateAccountResponse() {}

  explicit CreateAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccountResponse() = default;
};
class CreateBackupRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  CreateBackupRequest() {}

  explicit CreateBackupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateBackupRequest() = default;
};
class CreateBackupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> backupSetId{};

  CreateBackupResponseBodyData() {}

  explicit CreateBackupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<long>(boost::any_cast<long>(m["BackupSetId"]));
    }
  }


  virtual ~CreateBackupResponseBodyData() = default;
};
class CreateBackupResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CreateBackupResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateBackupResponseBody() {}

  explicit CreateBackupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<CreateBackupResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateBackupResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<CreateBackupResponseBodyData>>(expect1);
      }
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


  virtual ~CreateBackupResponseBody() = default;
};
class CreateBackupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateBackupResponseBody> body{};

  CreateBackupResponse() {}

  explicit CreateBackupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBackupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBackupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBackupResponse() = default;
};
class CreateDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> charset{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> dbDescription{};
  shared_ptr<string> dbName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityAccountName{};
  shared_ptr<string> securityAccountPassword{};

  CreateDBRequest() {}

  explicit CreateDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (charset) {
      res["Charset"] = boost::any(*charset);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (dbDescription) {
      res["DbDescription"] = boost::any(*dbDescription);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityAccountName) {
      res["SecurityAccountName"] = boost::any(*securityAccountName);
    }
    if (securityAccountPassword) {
      res["SecurityAccountPassword"] = boost::any(*securityAccountPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("Charset") != m.end() && !m["Charset"].empty()) {
      charset = make_shared<string>(boost::any_cast<string>(m["Charset"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DbDescription") != m.end() && !m["DbDescription"].empty()) {
      dbDescription = make_shared<string>(boost::any_cast<string>(m["DbDescription"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityAccountName") != m.end() && !m["SecurityAccountName"].empty()) {
      securityAccountName = make_shared<string>(boost::any_cast<string>(m["SecurityAccountName"]));
    }
    if (m.find("SecurityAccountPassword") != m.end() && !m["SecurityAccountPassword"].empty()) {
      securityAccountPassword = make_shared<string>(boost::any_cast<string>(m["SecurityAccountPassword"]));
    }
  }


  virtual ~CreateDBRequest() = default;
};
class CreateDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDBResponseBody() {}

  explicit CreateDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateDBResponseBody() = default;
};
class CreateDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDBResponseBody> body{};

  CreateDBResponse() {}

  explicit CreateDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBResponse() = default;
};
class CreateDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<long> DBNodeCount{};
  shared_ptr<string> engineVersion{};
  shared_ptr<bool> isReadDBInstance{};
  shared_ptr<string> networkType{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> primaryDBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> usedTime{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateDBInstanceRequest() {}

  explicit CreateDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeCount) {
      res["DBNodeCount"] = boost::any(*DBNodeCount);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (isReadDBInstance) {
      res["IsReadDBInstance"] = boost::any(*isReadDBInstance);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (primaryDBInstanceName) {
      res["PrimaryDBInstanceName"] = boost::any(*primaryDBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeCount") != m.end() && !m["DBNodeCount"].empty()) {
      DBNodeCount = make_shared<long>(boost::any_cast<long>(m["DBNodeCount"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("IsReadDBInstance") != m.end() && !m["IsReadDBInstance"].empty()) {
      isReadDBInstance = make_shared<bool>(boost::any_cast<bool>(m["IsReadDBInstance"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("PrimaryDBInstanceName") != m.end() && !m["PrimaryDBInstanceName"].empty()) {
      primaryDBInstanceName = make_shared<string>(boost::any_cast<string>(m["PrimaryDBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDBInstanceRequest() = default;
};
class CreateDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateDBInstanceResponseBody() {}

  explicit CreateDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDBInstanceResponseBody() = default;
};
class CreateDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDBInstanceResponseBody> body{};

  CreateDBInstanceResponse() {}

  explicit CreateDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBInstanceResponse() = default;
};
class CreatePolarxInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<long> duration{};
  shared_ptr<string> instanceSeries{};
  shared_ptr<bool> isAutoRenew{};
  shared_ptr<string> masterInstId{};
  shared_ptr<long> mySQLVersion{};
  shared_ptr<string> payType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<long> quantity{};
  shared_ptr<string> regionId{};
  shared_ptr<string> specification{};
  shared_ptr<string> type{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};
  shared_ptr<bool> isHa{};

  CreatePolarxInstanceRequest() {}

  explicit CreatePolarxInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceSeries) {
      res["InstanceSeries"] = boost::any(*instanceSeries);
    }
    if (isAutoRenew) {
      res["IsAutoRenew"] = boost::any(*isAutoRenew);
    }
    if (masterInstId) {
      res["MasterInstId"] = boost::any(*masterInstId);
    }
    if (mySQLVersion) {
      res["MySQLVersion"] = boost::any(*mySQLVersion);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (specification) {
      res["Specification"] = boost::any(*specification);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (isHa) {
      res["isHa"] = boost::any(*isHa);
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
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceSeries") != m.end() && !m["InstanceSeries"].empty()) {
      instanceSeries = make_shared<string>(boost::any_cast<string>(m["InstanceSeries"]));
    }
    if (m.find("IsAutoRenew") != m.end() && !m["IsAutoRenew"].empty()) {
      isAutoRenew = make_shared<bool>(boost::any_cast<bool>(m["IsAutoRenew"]));
    }
    if (m.find("MasterInstId") != m.end() && !m["MasterInstId"].empty()) {
      masterInstId = make_shared<string>(boost::any_cast<string>(m["MasterInstId"]));
    }
    if (m.find("MySQLVersion") != m.end() && !m["MySQLVersion"].empty()) {
      mySQLVersion = make_shared<long>(boost::any_cast<long>(m["MySQLVersion"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      specification = make_shared<string>(boost::any_cast<string>(m["Specification"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("isHa") != m.end() && !m["isHa"].empty()) {
      isHa = make_shared<bool>(boost::any_cast<bool>(m["isHa"]));
    }
  }


  virtual ~CreatePolarxInstanceRequest() = default;
};
class CreatePolarxInstanceResponseBodyDataDrdsInstanceIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> drdsInstanceIdList{};

  CreatePolarxInstanceResponseBodyDataDrdsInstanceIdList() {}

  explicit CreatePolarxInstanceResponseBodyDataDrdsInstanceIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceIdList) {
      res["drdsInstanceIdList"] = boost::any(*drdsInstanceIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("drdsInstanceIdList") != m.end() && !m["drdsInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["drdsInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["drdsInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      drdsInstanceIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreatePolarxInstanceResponseBodyDataDrdsInstanceIdList() = default;
};
class CreatePolarxInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<CreatePolarxInstanceResponseBodyDataDrdsInstanceIdList> drdsInstanceIdList{};
  shared_ptr<long> orderId{};

  CreatePolarxInstanceResponseBodyData() {}

  explicit CreatePolarxInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drdsInstanceIdList) {
      res["DrdsInstanceIdList"] = drdsInstanceIdList ? boost::any(drdsInstanceIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DrdsInstanceIdList") != m.end() && !m["DrdsInstanceIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DrdsInstanceIdList"].type()) {
        CreatePolarxInstanceResponseBodyDataDrdsInstanceIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DrdsInstanceIdList"]));
        drdsInstanceIdList = make_shared<CreatePolarxInstanceResponseBodyDataDrdsInstanceIdList>(model1);
      }
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CreatePolarxInstanceResponseBodyData() = default;
};
class CreatePolarxInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePolarxInstanceResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreatePolarxInstanceResponseBody() {}

  explicit CreatePolarxInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreatePolarxInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreatePolarxInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreatePolarxInstanceResponseBody() = default;
};
class CreatePolarxInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePolarxInstanceResponseBody> body{};

  CreatePolarxInstanceResponse() {}

  explicit CreatePolarxInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePolarxInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolarxInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolarxInstanceResponse() = default;
};
class CreatePolarxOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> nodeCount{};
  shared_ptr<string> regionId{};

  CreatePolarxOrderRequest() {}

  explicit CreatePolarxOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<string>(boost::any_cast<string>(m["NodeCount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreatePolarxOrderRequest() = default;
};
class CreatePolarxOrderResponseBodyOrderResultList : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<long> orderId{};

  CreatePolarxOrderResponseBodyOrderResultList() {}

  explicit CreatePolarxOrderResponseBodyOrderResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CreatePolarxOrderResponseBodyOrderResultList() = default;
};
class CreatePolarxOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CreatePolarxOrderResponseBodyOrderResultList>> orderResultList{};
  shared_ptr<string> requestId{};

  CreatePolarxOrderResponseBody() {}

  explicit CreatePolarxOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderResultList) {
      vector<boost::any> temp1;
      for(auto item1:*orderResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrderResultList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderResultList") != m.end() && !m["OrderResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["OrderResultList"].type()) {
        vector<CreatePolarxOrderResponseBodyOrderResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrderResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePolarxOrderResponseBodyOrderResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderResultList = make_shared<vector<CreatePolarxOrderResponseBodyOrderResultList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePolarxOrderResponseBody() = default;
};
class CreatePolarxOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePolarxOrderResponseBody> body{};

  CreatePolarxOrderResponse() {}

  explicit CreatePolarxOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePolarxOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolarxOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolarxOrderResponse() = default;
};
class CreateSuperAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  CreateSuperAccountRequest() {}

  explicit CreateSuperAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateSuperAccountRequest() = default;
};
class CreateSuperAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateSuperAccountResponseBody() {}

  explicit CreateSuperAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateSuperAccountResponseBody() = default;
};
class CreateSuperAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSuperAccountResponseBody> body{};

  CreateSuperAccountResponse() {}

  explicit CreateSuperAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSuperAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSuperAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSuperAccountResponse() = default;
};
class DeleteAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityAccountName{};
  shared_ptr<string> securityAccountPassword{};

  DeleteAccountRequest() {}

  explicit DeleteAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityAccountName) {
      res["SecurityAccountName"] = boost::any(*securityAccountName);
    }
    if (securityAccountPassword) {
      res["SecurityAccountPassword"] = boost::any(*securityAccountPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityAccountName") != m.end() && !m["SecurityAccountName"].empty()) {
      securityAccountName = make_shared<string>(boost::any_cast<string>(m["SecurityAccountName"]));
    }
    if (m.find("SecurityAccountPassword") != m.end() && !m["SecurityAccountPassword"].empty()) {
      securityAccountPassword = make_shared<string>(boost::any_cast<string>(m["SecurityAccountPassword"]));
    }
  }


  virtual ~DeleteAccountRequest() = default;
};
class DeleteAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAccountResponseBody() {}

  explicit DeleteAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteAccountResponseBody() = default;
};
class DeleteAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAccountResponseBody> body{};

  DeleteAccountResponse() {}

  explicit DeleteAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccountResponse() = default;
};
class DeleteDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> dbName{};
  shared_ptr<string> regionId{};

  DeleteDBRequest() {}

  explicit DeleteDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteDBRequest() = default;
};
class DeleteDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDBResponseBody() {}

  explicit DeleteDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDBResponseBody() = default;
};
class DeleteDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDBResponseBody> body{};

  DeleteDBResponse() {}

  explicit DeleteDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBResponse() = default;
};
class DeleteDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DeleteDBInstanceRequest() {}

  explicit DeleteDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteDBInstanceRequest() = default;
};
class DeleteDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDBInstanceResponseBody() {}

  explicit DeleteDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDBInstanceResponseBody() = default;
};
class DeleteDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDBInstanceResponseBody> body{};

  DeleteDBInstanceResponse() {}

  explicit DeleteDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBInstanceResponse() = default;
};
class DescribeAccountListRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountType{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeAccountListRequest() {}

  explicit DescribeAccountListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAccountListRequest() = default;
};
class DescribeAccountListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> accountType{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBName{};
  shared_ptr<string> gmtCreated{};

  DescribeAccountListResponseBodyData() {}

  explicit DescribeAccountListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
  }


  virtual ~DescribeAccountListResponseBodyData() = default;
};
class DescribeAccountListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccountListResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAccountListResponseBody() {}

  explicit DescribeAccountListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAccountListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAccountListResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeAccountListResponseBody() = default;
};
class DescribeAccountListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccountListResponseBody> body{};

  DescribeAccountListResponse() {}

  explicit DescribeAccountListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountListResponse() = default;
};
class DescribeBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> backupPeriod{};
  shared_ptr<string> backupPlanBegin{};
  shared_ptr<long> backupSetRetention{};
  shared_ptr<string> backupType{};
  shared_ptr<string> backupWay{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<long> forceCleanOnHighSpaceUsage{};
  shared_ptr<long> isEnabled{};
  shared_ptr<long> localLogRetention{};
  shared_ptr<long> logLocalRetentionSpace{};
  shared_ptr<long> removeLogRetention{};

  DescribeBackupPolicyResponseBodyData() {}

  explicit DescribeBackupPolicyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPeriod) {
      res["BackupPeriod"] = boost::any(*backupPeriod);
    }
    if (backupPlanBegin) {
      res["BackupPlanBegin"] = boost::any(*backupPlanBegin);
    }
    if (backupSetRetention) {
      res["BackupSetRetention"] = boost::any(*backupSetRetention);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupWay) {
      res["BackupWay"] = boost::any(*backupWay);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (forceCleanOnHighSpaceUsage) {
      res["ForceCleanOnHighSpaceUsage"] = boost::any(*forceCleanOnHighSpaceUsage);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (localLogRetention) {
      res["LocalLogRetention"] = boost::any(*localLogRetention);
    }
    if (logLocalRetentionSpace) {
      res["LogLocalRetentionSpace"] = boost::any(*logLocalRetentionSpace);
    }
    if (removeLogRetention) {
      res["RemoveLogRetention"] = boost::any(*removeLogRetention);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPeriod") != m.end() && !m["BackupPeriod"].empty()) {
      backupPeriod = make_shared<string>(boost::any_cast<string>(m["BackupPeriod"]));
    }
    if (m.find("BackupPlanBegin") != m.end() && !m["BackupPlanBegin"].empty()) {
      backupPlanBegin = make_shared<string>(boost::any_cast<string>(m["BackupPlanBegin"]));
    }
    if (m.find("BackupSetRetention") != m.end() && !m["BackupSetRetention"].empty()) {
      backupSetRetention = make_shared<long>(boost::any_cast<long>(m["BackupSetRetention"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupWay") != m.end() && !m["BackupWay"].empty()) {
      backupWay = make_shared<string>(boost::any_cast<string>(m["BackupWay"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("ForceCleanOnHighSpaceUsage") != m.end() && !m["ForceCleanOnHighSpaceUsage"].empty()) {
      forceCleanOnHighSpaceUsage = make_shared<long>(boost::any_cast<long>(m["ForceCleanOnHighSpaceUsage"]));
    }
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<long>(boost::any_cast<long>(m["IsEnabled"]));
    }
    if (m.find("LocalLogRetention") != m.end() && !m["LocalLogRetention"].empty()) {
      localLogRetention = make_shared<long>(boost::any_cast<long>(m["LocalLogRetention"]));
    }
    if (m.find("LogLocalRetentionSpace") != m.end() && !m["LogLocalRetentionSpace"].empty()) {
      logLocalRetentionSpace = make_shared<long>(boost::any_cast<long>(m["LogLocalRetentionSpace"]));
    }
    if (m.find("RemoveLogRetention") != m.end() && !m["RemoveLogRetention"].empty()) {
      removeLogRetention = make_shared<long>(boost::any_cast<long>(m["RemoveLogRetention"]));
    }
  }


  virtual ~DescribeBackupPolicyResponseBodyData() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupPolicyResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeBackupPolicyResponseBody() {}

  explicit DescribeBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeBackupPolicyResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupPolicyResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeBackupPolicyResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeBackupPolicyResponseBody() = default;
};
class DescribeBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupPolicyResponseBody> body{};

  DescribeBackupPolicyResponse() {}

  explicit DescribeBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupPolicyResponse() = default;
};
class DescribeBackupSetListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};

  DescribeBackupSetListRequest() {}

  explicit DescribeBackupSetListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeBackupSetListRequest() = default;
};
class DescribeBackupSetListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> backupModel{};
  shared_ptr<long> backupSetId{};
  shared_ptr<long> backupSetSize{};
  shared_ptr<long> backupType{};
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<long> status{};

  DescribeBackupSetListResponseBodyData() {}

  explicit DescribeBackupSetListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupModel) {
      res["BackupModel"] = boost::any(*backupModel);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (backupSetSize) {
      res["BackupSetSize"] = boost::any(*backupSetSize);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupModel") != m.end() && !m["BackupModel"].empty()) {
      backupModel = make_shared<long>(boost::any_cast<long>(m["BackupModel"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<long>(boost::any_cast<long>(m["BackupSetId"]));
    }
    if (m.find("BackupSetSize") != m.end() && !m["BackupSetSize"].empty()) {
      backupSetSize = make_shared<long>(boost::any_cast<long>(m["BackupSetSize"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<long>(boost::any_cast<long>(m["BackupType"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeBackupSetListResponseBodyData() = default;
};
class DescribeBackupSetListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupSetListResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeBackupSetListResponseBody() {}

  explicit DescribeBackupSetListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeBackupSetListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupSetListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeBackupSetListResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeBackupSetListResponseBody() = default;
};
class DescribeBackupSetListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupSetListResponseBody> body{};

  DescribeBackupSetListResponse() {}

  explicit DescribeBackupSetListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupSetListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupSetListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupSetListResponse() = default;
};
class DescribeBinaryLogListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  DescribeBinaryLogListRequest() {}

  explicit DescribeBinaryLogListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeBinaryLogListRequest() = default;
};
class DescribeBinaryLogListResponseBodyLogList : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> downloadLink{};
  shared_ptr<string> endTime{};
  shared_ptr<string> fileName{};
  shared_ptr<long> id{};
  shared_ptr<long> logSize{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<long> purgeStatus{};
  shared_ptr<string> uploadHost{};
  shared_ptr<long> uploadStatus{};

  DescribeBinaryLogListResponseBodyLogList() {}

  explicit DescribeBinaryLogListResponseBodyLogList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (downloadLink) {
      res["DownloadLink"] = boost::any(*downloadLink);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (logSize) {
      res["LogSize"] = boost::any(*logSize);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (purgeStatus) {
      res["PurgeStatus"] = boost::any(*purgeStatus);
    }
    if (uploadHost) {
      res["UploadHost"] = boost::any(*uploadHost);
    }
    if (uploadStatus) {
      res["UploadStatus"] = boost::any(*uploadStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DownloadLink") != m.end() && !m["DownloadLink"].empty()) {
      downloadLink = make_shared<string>(boost::any_cast<string>(m["DownloadLink"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LogSize") != m.end() && !m["LogSize"].empty()) {
      logSize = make_shared<long>(boost::any_cast<long>(m["LogSize"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PurgeStatus") != m.end() && !m["PurgeStatus"].empty()) {
      purgeStatus = make_shared<long>(boost::any_cast<long>(m["PurgeStatus"]));
    }
    if (m.find("UploadHost") != m.end() && !m["UploadHost"].empty()) {
      uploadHost = make_shared<string>(boost::any_cast<string>(m["UploadHost"]));
    }
    if (m.find("UploadStatus") != m.end() && !m["UploadStatus"].empty()) {
      uploadStatus = make_shared<long>(boost::any_cast<long>(m["UploadStatus"]));
    }
  }


  virtual ~DescribeBinaryLogListResponseBodyLogList() = default;
};
class DescribeBinaryLogListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBinaryLogListResponseBodyLogList>> logList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNumber{};

  DescribeBinaryLogListResponseBody() {}

  explicit DescribeBinaryLogListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logList) {
      vector<boost::any> temp1;
      for(auto item1:*logList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogList") != m.end() && !m["LogList"].empty()) {
      if (typeid(vector<boost::any>) == m["LogList"].type()) {
        vector<DescribeBinaryLogListResponseBodyLogList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBinaryLogListResponseBodyLogList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logList = make_shared<vector<DescribeBinaryLogListResponseBodyLogList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
  }


  virtual ~DescribeBinaryLogListResponseBody() = default;
};
class DescribeBinaryLogListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBinaryLogListResponseBody> body{};

  DescribeBinaryLogListResponse() {}

  explicit DescribeBinaryLogListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBinaryLogListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBinaryLogListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBinaryLogListResponse() = default;
};
class DescribeCharacterSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeCharacterSetRequest() {}

  explicit DescribeCharacterSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeCharacterSetRequest() = default;
};
class DescribeCharacterSetResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> characterSet{};
  shared_ptr<string> engine{};

  DescribeCharacterSetResponseBodyData() {}

  explicit DescribeCharacterSetResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (characterSet) {
      res["CharacterSet"] = boost::any(*characterSet);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CharacterSet") != m.end() && !m["CharacterSet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CharacterSet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CharacterSet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      characterSet = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
  }


  virtual ~DescribeCharacterSetResponseBodyData() = default;
};
class DescribeCharacterSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCharacterSetResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCharacterSetResponseBody() {}

  explicit DescribeCharacterSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeCharacterSetResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCharacterSetResponseBodyData>(model1);
      }
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


  virtual ~DescribeCharacterSetResponseBody() = default;
};
class DescribeCharacterSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCharacterSetResponseBody> body{};

  DescribeCharacterSetResponse() {}

  explicit DescribeCharacterSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCharacterSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCharacterSetResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCharacterSetResponse() = default;
};
class DescribeDBInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeDBInstanceAttributeRequest() {}

  explicit DescribeDBInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeRequest() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> port{};
  shared_ptr<string> type{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};

  DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes : public Darabonba::Model {
public:
  shared_ptr<string> computeNodeId{};
  shared_ptr<string> dataNodeId{};
  shared_ptr<string> id{};
  shared_ptr<string> nodeClass{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeNodeId) {
      res["ComputeNodeId"] = boost::any(*computeNodeId);
    }
    if (dataNodeId) {
      res["DataNodeId"] = boost::any(*dataNodeId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComputeNodeId") != m.end() && !m["ComputeNodeId"].empty()) {
      computeNodeId = make_shared<string>(boost::any_cast<string>(m["ComputeNodeId"]));
    }
    if (m.find("DataNodeId") != m.end() && !m["DataNodeId"].empty()) {
      dataNodeId = make_shared<string>(boost::any_cast<string>(m["DataNodeId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstance : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs>> connAddrs{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBInstanceType{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<long> DBNodeCount{};
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes>> DBNodes{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> expired{};
  shared_ptr<string> id{};
  shared_ptr<long> kindCode{};
  shared_ptr<string> latestMinorVersion{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> minorVersion{};
  shared_ptr<string> network{};
  shared_ptr<string> payType{};
  shared_ptr<string> port{};
  shared_ptr<vector<string>> readDBInstances{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> rightsSeparationEnabled{};
  shared_ptr<string> rightsSeparationStatus{};
  shared_ptr<string> status{};
  shared_ptr<long> storageUsed{};
  shared_ptr<string> type{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstanceAttributeResponseBodyDBInstance() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (connAddrs) {
      vector<boost::any> temp1;
      for(auto item1:*connAddrs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnAddrs"] = boost::any(temp1);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBInstanceType) {
      res["DBInstanceType"] = boost::any(*DBInstanceType);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeCount) {
      res["DBNodeCount"] = boost::any(*DBNodeCount);
    }
    if (DBNodes) {
      vector<boost::any> temp1;
      for(auto item1:*DBNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBNodes"] = boost::any(temp1);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (kindCode) {
      res["KindCode"] = boost::any(*kindCode);
    }
    if (latestMinorVersion) {
      res["LatestMinorVersion"] = boost::any(*latestMinorVersion);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (readDBInstances) {
      res["ReadDBInstances"] = boost::any(*readDBInstances);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (rightsSeparationEnabled) {
      res["RightsSeparationEnabled"] = boost::any(*rightsSeparationEnabled);
    }
    if (rightsSeparationStatus) {
      res["RightsSeparationStatus"] = boost::any(*rightsSeparationStatus);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ConnAddrs") != m.end() && !m["ConnAddrs"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnAddrs"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnAddrs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connAddrs = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs>>(expect1);
      }
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBInstanceType") != m.end() && !m["DBInstanceType"].empty()) {
      DBInstanceType = make_shared<string>(boost::any_cast<string>(m["DBInstanceType"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeCount") != m.end() && !m["DBNodeCount"].empty()) {
      DBNodeCount = make_shared<long>(boost::any_cast<long>(m["DBNodeCount"]));
    }
    if (m.find("DBNodes") != m.end() && !m["DBNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["DBNodes"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBNodes = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes>>(expect1);
      }
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("KindCode") != m.end() && !m["KindCode"].empty()) {
      kindCode = make_shared<long>(boost::any_cast<long>(m["KindCode"]));
    }
    if (m.find("LatestMinorVersion") != m.end() && !m["LatestMinorVersion"].empty()) {
      latestMinorVersion = make_shared<string>(boost::any_cast<string>(m["LatestMinorVersion"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ReadDBInstances") != m.end() && !m["ReadDBInstances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReadDBInstances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReadDBInstances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      readDBInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RightsSeparationEnabled") != m.end() && !m["RightsSeparationEnabled"].empty()) {
      rightsSeparationEnabled = make_shared<bool>(boost::any_cast<bool>(m["RightsSeparationEnabled"]));
    }
    if (m.find("RightsSeparationStatus") != m.end() && !m["RightsSeparationStatus"].empty()) {
      rightsSeparationStatus = make_shared<string>(boost::any_cast<string>(m["RightsSeparationStatus"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<long>(boost::any_cast<long>(m["StorageUsed"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstance() = default;
};
class DescribeDBInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceAttributeResponseBodyDBInstance> DBInstance{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceAttributeResponseBody() {}

  explicit DescribeDBInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstance) {
      res["DBInstance"] = DBInstance ? boost::any(DBInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstance") != m.end() && !m["DBInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBInstance"].type()) {
        DescribeDBInstanceAttributeResponseBodyDBInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBInstance"]));
        DBInstance = make_shared<DescribeDBInstanceAttributeResponseBodyDBInstance>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBody() = default;
};
class DescribeDBInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceAttributeResponseBody> body{};

  DescribeDBInstanceAttributeResponse() {}

  explicit DescribeDBInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponse() = default;
};
class DescribeDBInstanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeDBInstanceConfigRequest() {}

  explicit DescribeDBInstanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBInstanceConfigRequest() = default;
};
class DescribeDBInstanceConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<string> configValue{};
  shared_ptr<string> dbInstanceName{};

  DescribeDBInstanceConfigResponseBodyData() {}

  explicit DescribeDBInstanceConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (configValue) {
      res["ConfigValue"] = boost::any(*configValue);
    }
    if (dbInstanceName) {
      res["DbInstanceName"] = boost::any(*dbInstanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("ConfigValue") != m.end() && !m["ConfigValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["ConfigValue"]));
    }
    if (m.find("DbInstanceName") != m.end() && !m["DbInstanceName"].empty()) {
      dbInstanceName = make_shared<string>(boost::any_cast<string>(m["DbInstanceName"]));
    }
  }


  virtual ~DescribeDBInstanceConfigResponseBodyData() = default;
};
class DescribeDBInstanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceConfigResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceConfigResponseBody() {}

  explicit DescribeDBInstanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDBInstanceConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDBInstanceConfigResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceConfigResponseBody() = default;
};
class DescribeDBInstanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceConfigResponseBody> body{};

  DescribeDBInstanceConfigResponse() {}

  explicit DescribeDBInstanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceConfigResponse() = default;
};
class DescribeDBInstanceSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeDBInstanceSSLRequest() {}

  explicit DescribeDBInstanceSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBInstanceSSLRequest() = default;
};
class DescribeDBInstanceSSLResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> certCommonName{};
  shared_ptr<bool> SSLEnabled{};
  shared_ptr<string> SSLExpiredTime{};

  DescribeDBInstanceSSLResponseBodyData() {}

  explicit DescribeDBInstanceSSLResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certCommonName) {
      res["CertCommonName"] = boost::any(*certCommonName);
    }
    if (SSLEnabled) {
      res["SSLEnabled"] = boost::any(*SSLEnabled);
    }
    if (SSLExpiredTime) {
      res["SSLExpiredTime"] = boost::any(*SSLExpiredTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertCommonName") != m.end() && !m["CertCommonName"].empty()) {
      certCommonName = make_shared<string>(boost::any_cast<string>(m["CertCommonName"]));
    }
    if (m.find("SSLEnabled") != m.end() && !m["SSLEnabled"].empty()) {
      SSLEnabled = make_shared<bool>(boost::any_cast<bool>(m["SSLEnabled"]));
    }
    if (m.find("SSLExpiredTime") != m.end() && !m["SSLExpiredTime"].empty()) {
      SSLExpiredTime = make_shared<string>(boost::any_cast<string>(m["SSLExpiredTime"]));
    }
  }


  virtual ~DescribeDBInstanceSSLResponseBodyData() = default;
};
class DescribeDBInstanceSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceSSLResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceSSLResponseBody() {}

  explicit DescribeDBInstanceSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDBInstanceSSLResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDBInstanceSSLResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceSSLResponseBody() = default;
};
class DescribeDBInstanceSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceSSLResponseBody> body{};

  DescribeDBInstanceSSLResponse() {}

  explicit DescribeDBInstanceSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceSSLResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceSSLResponse() = default;
};
class DescribeDBInstanceTDERequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeDBInstanceTDERequest() {}

  explicit DescribeDBInstanceTDERequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBInstanceTDERequest() = default;
};
class DescribeDBInstanceTDEResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> TDEStatus{};

  DescribeDBInstanceTDEResponseBodyData() {}

  explicit DescribeDBInstanceTDEResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (TDEStatus) {
      res["TDEStatus"] = boost::any(*TDEStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TDEStatus") != m.end() && !m["TDEStatus"].empty()) {
      TDEStatus = make_shared<string>(boost::any_cast<string>(m["TDEStatus"]));
    }
  }


  virtual ~DescribeDBInstanceTDEResponseBodyData() = default;
};
class DescribeDBInstanceTDEResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceTDEResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceTDEResponseBody() {}

  explicit DescribeDBInstanceTDEResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDBInstanceTDEResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDBInstanceTDEResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceTDEResponseBody() = default;
};
class DescribeDBInstanceTDEResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceTDEResponseBody> body{};

  DescribeDBInstanceTDEResponse() {}

  explicit DescribeDBInstanceTDEResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceTDEResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceTDEResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceTDEResponse() = default;
};
class DescribeDBInstanceTopologyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeDBInstanceTopologyRequest() {}

  explicit DescribeDBInstanceTopologyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBInstanceTopologyRequest() = default;
};
class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<long> DBInstanceNetType{};
  shared_ptr<string> port{};

  DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp() {}

  explicit DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (DBInstanceNetType) {
      res["DBInstanceNetType"] = boost::any(*DBInstanceNetType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("DBInstanceNetType") != m.end() && !m["DBInstanceNetType"].empty()) {
      DBInstanceNetType = make_shared<long>(boost::any_cast<long>(m["DBInstanceNetType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp() = default;
};
class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems : public Darabonba::Model {
public:
  shared_ptr<string> characterType{};
  shared_ptr<vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp>> connectionIp{};
  shared_ptr<long> DBInstanceConnType{};
  shared_ptr<string> DBInstanceCreateTime{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<long> DBInstanceStatus{};
  shared_ptr<string> DBInstanceStatusDescription{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<long> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<long> maxConnections{};
  shared_ptr<long> maxIops{};

  DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems() {}

  explicit DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (connectionIp) {
      vector<boost::any> temp1;
      for(auto item1:*connectionIp){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectionIp"] = boost::any(temp1);
    }
    if (DBInstanceConnType) {
      res["DBInstanceConnType"] = boost::any(*DBInstanceConnType);
    }
    if (DBInstanceCreateTime) {
      res["DBInstanceCreateTime"] = boost::any(*DBInstanceCreateTime);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (DBInstanceStatusDescription) {
      res["DBInstanceStatusDescription"] = boost::any(*DBInstanceStatusDescription);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (maxIops) {
      res["MaxIops"] = boost::any(*maxIops);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("ConnectionIp") != m.end() && !m["ConnectionIp"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectionIp"].type()) {
        vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectionIp"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectionIp = make_shared<vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp>>(expect1);
      }
    }
    if (m.find("DBInstanceConnType") != m.end() && !m["DBInstanceConnType"].empty()) {
      DBInstanceConnType = make_shared<long>(boost::any_cast<long>(m["DBInstanceConnType"]));
    }
    if (m.find("DBInstanceCreateTime") != m.end() && !m["DBInstanceCreateTime"].empty()) {
      DBInstanceCreateTime = make_shared<string>(boost::any_cast<string>(m["DBInstanceCreateTime"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<long>(boost::any_cast<long>(m["DBInstanceStatus"]));
    }
    if (m.find("DBInstanceStatusDescription") != m.end() && !m["DBInstanceStatusDescription"].empty()) {
      DBInstanceStatusDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatusDescription"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<long>(boost::any_cast<long>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("MaxIops") != m.end() && !m["MaxIops"].empty()) {
      maxIops = make_shared<long>(boost::any_cast<long>(m["MaxIops"]));
    }
  }


  virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems() = default;
};
class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceConnType{};
  shared_ptr<string> DBInstanceCreateTime{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<long> DBInstanceStatus{};
  shared_ptr<string> DBInstanceStatusDescription{};
  shared_ptr<long> DBInstanceStorage{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems>> items{};
  shared_ptr<long> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};

  DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology() {}

  explicit DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceConnType) {
      res["DBInstanceConnType"] = boost::any(*DBInstanceConnType);
    }
    if (DBInstanceCreateTime) {
      res["DBInstanceCreateTime"] = boost::any(*DBInstanceCreateTime);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (DBInstanceStatusDescription) {
      res["DBInstanceStatusDescription"] = boost::any(*DBInstanceStatusDescription);
    }
    if (DBInstanceStorage) {
      res["DBInstanceStorage"] = boost::any(*DBInstanceStorage);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceConnType") != m.end() && !m["DBInstanceConnType"].empty()) {
      DBInstanceConnType = make_shared<string>(boost::any_cast<string>(m["DBInstanceConnType"]));
    }
    if (m.find("DBInstanceCreateTime") != m.end() && !m["DBInstanceCreateTime"].empty()) {
      DBInstanceCreateTime = make_shared<string>(boost::any_cast<string>(m["DBInstanceCreateTime"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<long>(boost::any_cast<long>(m["DBInstanceStatus"]));
    }
    if (m.find("DBInstanceStatusDescription") != m.end() && !m["DBInstanceStatusDescription"].empty()) {
      DBInstanceStatusDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatusDescription"]));
    }
    if (m.find("DBInstanceStorage") != m.end() && !m["DBInstanceStorage"].empty()) {
      DBInstanceStorage = make_shared<long>(boost::any_cast<long>(m["DBInstanceStorage"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems>>(expect1);
      }
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<long>(boost::any_cast<long>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
  }


  virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology() = default;
};
class DescribeDBInstanceTopologyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology> logicInstanceTopology{};

  DescribeDBInstanceTopologyResponseBodyData() {}

  explicit DescribeDBInstanceTopologyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicInstanceTopology) {
      res["LogicInstanceTopology"] = logicInstanceTopology ? boost::any(logicInstanceTopology->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicInstanceTopology") != m.end() && !m["LogicInstanceTopology"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogicInstanceTopology"].type()) {
        DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogicInstanceTopology"]));
        logicInstanceTopology = make_shared<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceTopologyResponseBodyData() = default;
};
class DescribeDBInstanceTopologyResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceTopologyResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceTopologyResponseBody() {}

  explicit DescribeDBInstanceTopologyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDBInstanceTopologyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDBInstanceTopologyResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceTopologyResponseBody() = default;
};
class DescribeDBInstanceTopologyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceTopologyResponseBody> body{};

  DescribeDBInstanceTopologyResponse() {}

  explicit DescribeDBInstanceTopologyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceTopologyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceTopologyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceTopologyResponse() = default;
};
class DescribeDBInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  DescribeDBInstancesRequest() {}

  explicit DescribeDBInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DescribeDBInstancesRequest() = default;
};
class DescribeDBInstancesResponseBodyDBInstancesNodes : public Darabonba::Model {
public:
  shared_ptr<string> classCode{};
  shared_ptr<string> id{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstancesResponseBodyDBInstancesNodes() {}

  explicit DescribeDBInstancesResponseBodyDBInstancesNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classCode) {
      res["ClassCode"] = boost::any(*classCode);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassCode") != m.end() && !m["ClassCode"].empty()) {
      classCode = make_shared<string>(boost::any_cast<string>(m["ClassCode"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBodyDBInstancesNodes() = default;
};
class DescribeDBInstancesResponseBodyDBInstances : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireTime{};
  shared_ptr<bool> expired{};
  shared_ptr<string> id{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> minorVersion{};
  shared_ptr<string> network{};
  shared_ptr<string> nodeClass{};
  shared_ptr<long> nodeCount{};
  shared_ptr<vector<DescribeDBInstancesResponseBodyDBInstancesNodes>> nodes{};
  shared_ptr<string> payType{};
  shared_ptr<vector<string>> readDBInstances{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<long> storageUsed{};
  shared_ptr<string> type{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstancesResponseBodyDBInstances() {}

  explicit DescribeDBInstancesResponseBodyDBInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (readDBInstances) {
      res["ReadDBInstances"] = boost::any(*readDBInstances);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<bool>(boost::any_cast<bool>(m["Expired"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeDBInstancesResponseBodyDBInstancesNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyDBInstancesNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeDBInstancesResponseBodyDBInstancesNodes>>(expect1);
      }
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("ReadDBInstances") != m.end() && !m["ReadDBInstances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReadDBInstances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReadDBInstances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      readDBInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<long>(boost::any_cast<long>(m["StorageUsed"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBodyDBInstances() = default;
};
class DescribeDBInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancesResponseBodyDBInstances>> DBInstances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNumber{};

  DescribeDBInstancesResponseBody() {}

  explicit DescribeDBInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstances) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstances"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstances") != m.end() && !m["DBInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstances"].type()) {
        vector<DescribeDBInstancesResponseBodyDBInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyDBInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstances = make_shared<vector<DescribeDBInstancesResponseBodyDBInstances>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBody() = default;
};
class DescribeDBInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstancesResponseBody> body{};

  DescribeDBInstancesResponse() {}

  explicit DescribeDBInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponse() = default;
};
class DescribeDBNodePerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> characterType{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBNodeIds{};
  shared_ptr<string> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  DescribeDBNodePerformanceRequest() {}

  explicit DescribeDBNodePerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBNodeIds) {
      res["DBNodeIds"] = boost::any(*DBNodeIds);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
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
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBNodeIds") != m.end() && !m["DBNodeIds"].empty()) {
      DBNodeIds = make_shared<string>(boost::any_cast<string>(m["DBNodeIds"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBNodePerformanceRequest() = default;
};
class DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue : public Darabonba::Model {
public:
  shared_ptr<long> timestamp{};
  shared_ptr<string> value{};

  DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue() {}

  explicit DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue() = default;
};
class DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>> performanceItemValue{};

  DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints() {}

  explicit DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceItemValue) {
      vector<boost::any> temp1;
      for(auto item1:*performanceItemValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceItemValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceItemValue") != m.end() && !m["PerformanceItemValue"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceItemValue"].type()) {
        vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceItemValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceItemValue = make_shared<vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>>(expect1);
      }
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default;
};
class DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem : public Darabonba::Model {
public:
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> measurement{};
  shared_ptr<string> metricName{};
  shared_ptr<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints> points{};

  DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem() {}

  explicit DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (measurement) {
      res["Measurement"] = boost::any(*measurement);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (points) {
      res["Points"] = points ? boost::any(points->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("Measurement") != m.end() && !m["Measurement"].empty()) {
      measurement = make_shared<string>(boost::any_cast<string>(m["Measurement"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      if (typeid(map<string, boost::any>) == m["Points"].type()) {
        DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Points"]));
        points = make_shared<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints>(model1);
      }
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem() = default;
};
class DescribeDBNodePerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem>> performanceItem{};

  DescribeDBNodePerformanceResponseBodyPerformanceKeys() {}

  explicit DescribeDBNodePerformanceResponseBodyPerformanceKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceItem) {
      vector<boost::any> temp1;
      for(auto item1:*performanceItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceItem") != m.end() && !m["PerformanceItem"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceItem"].type()) {
        vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceItem = make_shared<vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem>>(expect1);
      }
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeys() = default;
};
class DescribeDBNodePerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeDBNodePerformanceResponseBodyPerformanceKeys> performanceKeys{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDBNodePerformanceResponseBody() {}

  explicit DescribeDBNodePerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (performanceKeys) {
      res["PerformanceKeys"] = performanceKeys ? boost::any(performanceKeys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PerformanceKeys") != m.end() && !m["PerformanceKeys"].empty()) {
      if (typeid(map<string, boost::any>) == m["PerformanceKeys"].type()) {
        DescribeDBNodePerformanceResponseBodyPerformanceKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PerformanceKeys"]));
        performanceKeys = make_shared<DescribeDBNodePerformanceResponseBodyPerformanceKeys>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBody() = default;
};
class DescribeDBNodePerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBNodePerformanceResponseBody> body{};

  DescribeDBNodePerformanceResponse() {}

  explicit DescribeDBNodePerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBNodePerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBNodePerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBNodePerformanceResponse() = default;
};
class DescribeDbListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBName{};
  shared_ptr<string> regionId{};

  DescribeDbListRequest() {}

  explicit DescribeDbListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDbListRequest() = default;
};
class DescribeDbListResponseBodyDataAccounts : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilege{};

  DescribeDbListResponseBodyDataAccounts() {}

  explicit DescribeDbListResponseBodyDataAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
  }


  virtual ~DescribeDbListResponseBodyDataAccounts() = default;
};
class DescribeDbListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDbListResponseBodyDataAccounts>> accounts{};
  shared_ptr<string> characterSetName{};
  shared_ptr<string> DBDescription{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBName{};

  DescribeDbListResponseBodyData() {}

  explicit DescribeDbListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      vector<boost::any> temp1;
      for(auto item1:*accounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Accounts"] = boost::any(temp1);
    }
    if (characterSetName) {
      res["CharacterSetName"] = boost::any(*characterSetName);
    }
    if (DBDescription) {
      res["DBDescription"] = boost::any(*DBDescription);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(vector<boost::any>) == m["Accounts"].type()) {
        vector<DescribeDbListResponseBodyDataAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Accounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDbListResponseBodyDataAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accounts = make_shared<vector<DescribeDbListResponseBodyDataAccounts>>(expect1);
      }
    }
    if (m.find("CharacterSetName") != m.end() && !m["CharacterSetName"].empty()) {
      characterSetName = make_shared<string>(boost::any_cast<string>(m["CharacterSetName"]));
    }
    if (m.find("DBDescription") != m.end() && !m["DBDescription"].empty()) {
      DBDescription = make_shared<string>(boost::any_cast<string>(m["DBDescription"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
  }


  virtual ~DescribeDbListResponseBodyData() = default;
};
class DescribeDbListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDbListResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDbListResponseBody() {}

  explicit DescribeDbListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeDbListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDbListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeDbListResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeDbListResponseBody() = default;
};
class DescribeDbListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDbListResponseBody> body{};

  DescribeDbListResponse() {}

  explicit DescribeDbListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDbListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDbListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDbListResponse() = default;
};
class DescribeDistributeTableListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> dbName{};
  shared_ptr<string> regionId{};

  DescribeDistributeTableListRequest() {}

  explicit DescribeDistributeTableListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDistributeTableListRequest() = default;
};
class DescribeDistributeTableListResponseBodyDataTables : public Darabonba::Model {
public:
  shared_ptr<string> dbKey{};
  shared_ptr<string> tableName{};
  shared_ptr<string> tableType{};
  shared_ptr<string> tbKey{};

  DescribeDistributeTableListResponseBodyDataTables() {}

  explicit DescribeDistributeTableListResponseBodyDataTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbKey) {
      res["DbKey"] = boost::any(*dbKey);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableType) {
      res["TableType"] = boost::any(*tableType);
    }
    if (tbKey) {
      res["TbKey"] = boost::any(*tbKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbKey") != m.end() && !m["DbKey"].empty()) {
      dbKey = make_shared<string>(boost::any_cast<string>(m["DbKey"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableType") != m.end() && !m["TableType"].empty()) {
      tableType = make_shared<string>(boost::any_cast<string>(m["TableType"]));
    }
    if (m.find("TbKey") != m.end() && !m["TbKey"].empty()) {
      tbKey = make_shared<string>(boost::any_cast<string>(m["TbKey"]));
    }
  }


  virtual ~DescribeDistributeTableListResponseBodyDataTables() = default;
};
class DescribeDistributeTableListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDistributeTableListResponseBodyDataTables>> tables{};

  DescribeDistributeTableListResponseBodyData() {}

  explicit DescribeDistributeTableListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<DescribeDistributeTableListResponseBodyDataTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDistributeTableListResponseBodyDataTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<DescribeDistributeTableListResponseBodyDataTables>>(expect1);
      }
    }
  }


  virtual ~DescribeDistributeTableListResponseBodyData() = default;
};
class DescribeDistributeTableListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDistributeTableListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDistributeTableListResponseBody() {}

  explicit DescribeDistributeTableListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDistributeTableListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDistributeTableListResponseBodyData>(model1);
      }
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


  virtual ~DescribeDistributeTableListResponseBody() = default;
};
class DescribeDistributeTableListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDistributeTableListResponseBody> body{};

  DescribeDistributeTableListResponse() {}

  explicit DescribeDistributeTableListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDistributeTableListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDistributeTableListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDistributeTableListResponse() = default;
};
class DescribeParameterTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> paramLevel{};
  shared_ptr<string> regionId{};

  DescribeParameterTemplatesRequest() {}

  explicit DescribeParameterTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (paramLevel) {
      res["ParamLevel"] = boost::any(*paramLevel);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ParamLevel") != m.end() && !m["ParamLevel"].empty()) {
      paramLevel = make_shared<string>(boost::any_cast<string>(m["ParamLevel"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeParameterTemplatesRequest() = default;
};
class DescribeParameterTemplatesResponseBodyDataParameters : public Darabonba::Model {
public:
  shared_ptr<string> checkingCode{};
  shared_ptr<long> dynamic{};
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};
  shared_ptr<long> revisable{};

  DescribeParameterTemplatesResponseBodyDataParameters() {}

  explicit DescribeParameterTemplatesResponseBodyDataParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkingCode) {
      res["CheckingCode"] = boost::any(*checkingCode);
    }
    if (dynamic) {
      res["Dynamic"] = boost::any(*dynamic);
    }
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    if (revisable) {
      res["Revisable"] = boost::any(*revisable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckingCode") != m.end() && !m["CheckingCode"].empty()) {
      checkingCode = make_shared<string>(boost::any_cast<string>(m["CheckingCode"]));
    }
    if (m.find("Dynamic") != m.end() && !m["Dynamic"].empty()) {
      dynamic = make_shared<long>(boost::any_cast<long>(m["Dynamic"]));
    }
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
    if (m.find("Revisable") != m.end() && !m["Revisable"].empty()) {
      revisable = make_shared<long>(boost::any_cast<long>(m["Revisable"]));
    }
  }


  virtual ~DescribeParameterTemplatesResponseBodyDataParameters() = default;
};
class DescribeParameterTemplatesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<long> parameterCount{};
  shared_ptr<vector<DescribeParameterTemplatesResponseBodyDataParameters>> parameters{};

  DescribeParameterTemplatesResponseBodyData() {}

  explicit DescribeParameterTemplatesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (parameterCount) {
      res["ParameterCount"] = boost::any(*parameterCount);
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
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ParameterCount") != m.end() && !m["ParameterCount"].empty()) {
      parameterCount = make_shared<long>(boost::any_cast<long>(m["ParameterCount"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<DescribeParameterTemplatesResponseBodyDataParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParameterTemplatesResponseBodyDataParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<DescribeParameterTemplatesResponseBodyDataParameters>>(expect1);
      }
    }
  }


  virtual ~DescribeParameterTemplatesResponseBodyData() = default;
};
class DescribeParameterTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeParameterTemplatesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeParameterTemplatesResponseBody() {}

  explicit DescribeParameterTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeParameterTemplatesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeParameterTemplatesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeParameterTemplatesResponseBody() = default;
};
class DescribeParameterTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeParameterTemplatesResponseBody> body{};

  DescribeParameterTemplatesResponse() {}

  explicit DescribeParameterTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeParameterTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParameterTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParameterTemplatesResponse() = default;
};
class DescribeParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> paramLevel{};
  shared_ptr<string> regionId{};

  DescribeParametersRequest() {}

  explicit DescribeParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (paramLevel) {
      res["ParamLevel"] = boost::any(*paramLevel);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ParamLevel") != m.end() && !m["ParamLevel"].empty()) {
      paramLevel = make_shared<string>(boost::any_cast<string>(m["ParamLevel"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeParametersRequest() = default;
};
class DescribeParametersResponseBodyDataConfigParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  DescribeParametersResponseBodyDataConfigParameters() {}

  explicit DescribeParametersResponseBodyDataConfigParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~DescribeParametersResponseBodyDataConfigParameters() = default;
};
class DescribeParametersResponseBodyDataRunningParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  DescribeParametersResponseBodyDataRunningParameters() {}

  explicit DescribeParametersResponseBodyDataRunningParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~DescribeParametersResponseBodyDataRunningParameters() = default;
};
class DescribeParametersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParametersResponseBodyDataConfigParameters>> configParameters{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<vector<DescribeParametersResponseBodyDataRunningParameters>> runningParameters{};

  DescribeParametersResponseBodyData() {}

  explicit DescribeParametersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configParameters) {
      vector<boost::any> temp1;
      for(auto item1:*configParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigParameters"] = boost::any(temp1);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (runningParameters) {
      vector<boost::any> temp1;
      for(auto item1:*runningParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RunningParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigParameters") != m.end() && !m["ConfigParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigParameters"].type()) {
        vector<DescribeParametersResponseBodyDataConfigParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParametersResponseBodyDataConfigParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configParameters = make_shared<vector<DescribeParametersResponseBodyDataConfigParameters>>(expect1);
      }
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("RunningParameters") != m.end() && !m["RunningParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["RunningParameters"].type()) {
        vector<DescribeParametersResponseBodyDataRunningParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RunningParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParametersResponseBodyDataRunningParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runningParameters = make_shared<vector<DescribeParametersResponseBodyDataRunningParameters>>(expect1);
      }
    }
  }


  virtual ~DescribeParametersResponseBodyData() = default;
};
class DescribeParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeParametersResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeParametersResponseBody() {}

  explicit DescribeParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeParametersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeParametersResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeParametersResponseBody() = default;
};
class DescribeParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeParametersResponseBody> body{};

  DescribeParametersResponse() {}

  explicit DescribeParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParametersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParametersResponse() = default;
};
class DescribePolarxDataNodesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  DescribePolarxDataNodesRequest() {}

  explicit DescribePolarxDataNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DescribePolarxDataNodesRequest() = default;
};
class DescribePolarxDataNodesResponseBodyDBInstanceDataNodes : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceName{};

  DescribePolarxDataNodesResponseBodyDBInstanceDataNodes() {}

  explicit DescribePolarxDataNodesResponseBodyDBInstanceDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
  }


  virtual ~DescribePolarxDataNodesResponseBodyDBInstanceDataNodes() = default;
};
class DescribePolarxDataNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePolarxDataNodesResponseBodyDBInstanceDataNodes>> DBInstanceDataNodes{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNumber{};

  DescribePolarxDataNodesResponseBody() {}

  explicit DescribePolarxDataNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceDataNodes) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceDataNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceDataNodes"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceDataNodes") != m.end() && !m["DBInstanceDataNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceDataNodes"].type()) {
        vector<DescribePolarxDataNodesResponseBodyDBInstanceDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceDataNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolarxDataNodesResponseBodyDBInstanceDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceDataNodes = make_shared<vector<DescribePolarxDataNodesResponseBodyDBInstanceDataNodes>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
  }


  virtual ~DescribePolarxDataNodesResponseBody() = default;
};
class DescribePolarxDataNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePolarxDataNodesResponseBody> body{};

  DescribePolarxDataNodesResponse() {}

  explicit DescribePolarxDataNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePolarxDataNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolarxDataNodesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolarxDataNodesResponse() = default;
};
class DescribePolarxDbInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<string> drdsInstanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribePolarxDbInstancesRequest() {}

  explicit DescribePolarxDbInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (drdsInstanceId) {
      res["DrdsInstanceId"] = boost::any(*drdsInstanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DrdsInstanceId") != m.end() && !m["DrdsInstanceId"].empty()) {
      drdsInstanceId = make_shared<string>(boost::any_cast<string>(m["DrdsInstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribePolarxDbInstancesRequest() = default;
};
class DescribePolarxDbInstancesResponseBodyDbInstancesDbInstance : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> network{};
  shared_ptr<string> nodeClass{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDesc{};
  shared_ptr<long> storageUsed{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> lockReason{};

  DescribePolarxDbInstancesResponseBodyDbInstancesDbInstance() {}

  explicit DescribePolarxDbInstancesResponseBodyDbInstancesDbInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDesc) {
      res["StatusDesc"] = boost::any(*statusDesc);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (lockReason) {
      res["lockReason"] = boost::any(*lockReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDesc") != m.end() && !m["StatusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["StatusDesc"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<long>(boost::any_cast<long>(m["StorageUsed"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("lockReason") != m.end() && !m["lockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["lockReason"]));
    }
  }


  virtual ~DescribePolarxDbInstancesResponseBodyDbInstancesDbInstance() = default;
};
class DescribePolarxDbInstancesResponseBodyDbInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePolarxDbInstancesResponseBodyDbInstancesDbInstance>> dbInstance{};

  DescribePolarxDbInstancesResponseBodyDbInstances() {}

  explicit DescribePolarxDbInstancesResponseBodyDbInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribePolarxDbInstancesResponseBodyDbInstancesDbInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolarxDbInstancesResponseBodyDbInstancesDbInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbInstance = make_shared<vector<DescribePolarxDbInstancesResponseBodyDbInstancesDbInstance>>(expect1);
      }
    }
  }


  virtual ~DescribePolarxDbInstancesResponseBodyDbInstances() = default;
};
class DescribePolarxDbInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePolarxDbInstancesResponseBodyDbInstances> dbInstances{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> total{};

  DescribePolarxDbInstancesResponseBody() {}

  explicit DescribePolarxDbInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbInstances) {
      res["DbInstances"] = dbInstances ? boost::any(dbInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbInstances") != m.end() && !m["DbInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbInstances"].type()) {
        DescribePolarxDbInstancesResponseBodyDbInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbInstances"]));
        dbInstances = make_shared<DescribePolarxDbInstancesResponseBodyDbInstances>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["Total"]));
    }
  }


  virtual ~DescribePolarxDbInstancesResponseBody() = default;
};
class DescribePolarxDbInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePolarxDbInstancesResponseBody> body{};

  DescribePolarxDbInstancesResponse() {}

  explicit DescribePolarxDbInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePolarxDbInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolarxDbInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolarxDbInstancesResponse() = default;
};
class DescribePolarxPgInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  DescribePolarxPgInstancesRequest() {}

  explicit DescribePolarxPgInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribePolarxPgInstancesRequest() = default;
};
class DescribePolarxPgInstancesResponseBodyDBInstances : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireTime{};
  shared_ptr<bool> expired{};
  shared_ptr<string> id{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> network{};
  shared_ptr<string> nodeClass{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<long> storageUsed{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> zoneId{};

  DescribePolarxPgInstancesResponseBodyDBInstances() {}

  explicit DescribePolarxPgInstancesResponseBodyDBInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<bool>(boost::any_cast<bool>(m["Expired"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<long>(boost::any_cast<long>(m["StorageUsed"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribePolarxPgInstancesResponseBodyDBInstances() = default;
};
class DescribePolarxPgInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePolarxPgInstancesResponseBodyDBInstances>> DBInstances{};
  shared_ptr<string> expireDate{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};

  DescribePolarxPgInstancesResponseBody() {}

  explicit DescribePolarxPgInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstances) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstances"] = boost::any(temp1);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstances") != m.end() && !m["DBInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstances"].type()) {
        vector<DescribePolarxPgInstancesResponseBodyDBInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolarxPgInstancesResponseBodyDBInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstances = make_shared<vector<DescribePolarxPgInstancesResponseBodyDBInstances>>(expect1);
      }
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePolarxPgInstancesResponseBody() = default;
};
class DescribePolarxPgInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePolarxPgInstancesResponseBody> body{};

  DescribePolarxPgInstancesResponse() {}

  explicit DescribePolarxPgInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePolarxPgInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolarxPgInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolarxPgInstancesResponse() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZonesZone : public Darabonba::Model {
public:
  shared_ptr<bool> vpcEnabled{};
  shared_ptr<string> zoneId{};

  DescribeRegionsResponseBodyRegionsRegionZonesZone() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcEnabled) {
      res["VpcEnabled"] = boost::any(*vpcEnabled);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcEnabled") != m.end() && !m["VpcEnabled"].empty()) {
      vpcEnabled = make_shared<bool>(boost::any_cast<bool>(m["VpcEnabled"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionZonesZone() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegionZonesZone>> zone{};

  DescribeRegionsResponseBodyRegionsRegionZones() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zone) {
      vector<boost::any> temp1;
      for(auto item1:*zone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      if (typeid(vector<boost::any>) == m["Zone"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegionZonesZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegionZonesZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<DescribeRegionsResponseBodyRegionsRegionZonesZone>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionZones() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<bool> supportPolarx10{};
  shared_ptr<bool> supportPolarx20{};
  shared_ptr<DescribeRegionsResponseBodyRegionsRegionZones> zones{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (supportPolarx10) {
      res["SupportPolarx10"] = boost::any(*supportPolarx10);
    }
    if (supportPolarx20) {
      res["SupportPolarx20"] = boost::any(*supportPolarx20);
    }
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SupportPolarx10") != m.end() && !m["SupportPolarx10"].empty()) {
      supportPolarx10 = make_shared<bool>(boost::any_cast<bool>(m["SupportPolarx10"]));
    }
    if (m.find("SupportPolarx20") != m.end() && !m["SupportPolarx20"].empty()) {
      supportPolarx20 = make_shared<bool>(boost::any_cast<bool>(m["SupportPolarx20"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeRegionsResponseBodyRegionsRegionZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeRegionsResponseBodyRegionsRegionZones>(model1);
      }
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
  shared_ptr<long> code{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> message{};
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
class DescribeScaleOutMigrateTaskListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeScaleOutMigrateTaskListRequest() {}

  explicit DescribeScaleOutMigrateTaskListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeScaleOutMigrateTaskListRequest() = default;
};
class DescribeScaleOutMigrateTaskListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> progress{};
  shared_ptr<string> requestId{};

  DescribeScaleOutMigrateTaskListResponseBody() {}

  explicit DescribeScaleOutMigrateTaskListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeScaleOutMigrateTaskListResponseBody() = default;
};
class DescribeScaleOutMigrateTaskListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScaleOutMigrateTaskListResponseBody> body{};

  DescribeScaleOutMigrateTaskListResponse() {}

  explicit DescribeScaleOutMigrateTaskListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScaleOutMigrateTaskListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScaleOutMigrateTaskListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScaleOutMigrateTaskListResponse() = default;
};
class DescribeSecurityIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeSecurityIpsRequest() {}

  explicit DescribeSecurityIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeSecurityIpsRequest() = default;
};
class DescribeSecurityIpsResponseBodyDataGroupItems : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> securityIPList{};

  DescribeSecurityIpsResponseBodyDataGroupItems() {}

  explicit DescribeSecurityIpsResponseBodyDataGroupItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
  }


  virtual ~DescribeSecurityIpsResponseBodyDataGroupItems() = default;
};
class DescribeSecurityIpsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<vector<DescribeSecurityIpsResponseBodyDataGroupItems>> groupItems{};

  DescribeSecurityIpsResponseBodyData() {}

  explicit DescribeSecurityIpsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (groupItems) {
      vector<boost::any> temp1;
      for(auto item1:*groupItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("GroupItems") != m.end() && !m["GroupItems"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupItems"].type()) {
        vector<DescribeSecurityIpsResponseBodyDataGroupItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSecurityIpsResponseBodyDataGroupItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupItems = make_shared<vector<DescribeSecurityIpsResponseBodyDataGroupItems>>(expect1);
      }
    }
  }


  virtual ~DescribeSecurityIpsResponseBodyData() = default;
};
class DescribeSecurityIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSecurityIpsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeSecurityIpsResponseBody() {}

  explicit DescribeSecurityIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeSecurityIpsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeSecurityIpsResponseBodyData>(model1);
      }
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


  virtual ~DescribeSecurityIpsResponseBody() = default;
};
class DescribeSecurityIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSecurityIpsResponseBody> body{};

  DescribeSecurityIpsResponse() {}

  explicit DescribeSecurityIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSecurityIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecurityIpsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecurityIpsResponse() = default;
};
class DescribeTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskAction{};

  DescribeTasksRequest() {}

  explicit DescribeTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
  }


  virtual ~DescribeTasksRequest() = default;
};
class DescribeTasksResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<string> DBName{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> progress{};
  shared_ptr<string> progressInfo{};
  shared_ptr<string> scaleOutToken{};
  shared_ptr<string> status{};
  shared_ptr<string> taskAction{};
  shared_ptr<string> taskErrorCode{};
  shared_ptr<string> taskErrorMessage{};
  shared_ptr<string> taskId{};

  DescribeTasksResponseBodyItems() {}

  explicit DescribeTasksResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (progressInfo) {
      res["ProgressInfo"] = boost::any(*progressInfo);
    }
    if (scaleOutToken) {
      res["ScaleOutToken"] = boost::any(*scaleOutToken);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    if (taskErrorCode) {
      res["TaskErrorCode"] = boost::any(*taskErrorCode);
    }
    if (taskErrorMessage) {
      res["TaskErrorMessage"] = boost::any(*taskErrorMessage);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("ProgressInfo") != m.end() && !m["ProgressInfo"].empty()) {
      progressInfo = make_shared<string>(boost::any_cast<string>(m["ProgressInfo"]));
    }
    if (m.find("ScaleOutToken") != m.end() && !m["ScaleOutToken"].empty()) {
      scaleOutToken = make_shared<string>(boost::any_cast<string>(m["ScaleOutToken"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
    if (m.find("TaskErrorCode") != m.end() && !m["TaskErrorCode"].empty()) {
      taskErrorCode = make_shared<string>(boost::any_cast<string>(m["TaskErrorCode"]));
    }
    if (m.find("TaskErrorMessage") != m.end() && !m["TaskErrorMessage"].empty()) {
      taskErrorMessage = make_shared<string>(boost::any_cast<string>(m["TaskErrorMessage"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeTasksResponseBodyItems() = default;
};
class DescribeTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTasksResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeTasksResponseBody() {}

  explicit DescribeTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeTasksResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTasksResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeTasksResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeTasksResponseBody() = default;
};
class DescribeTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTasksResponseBody> body{};

  DescribeTasksResponse() {}

  explicit DescribeTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTasksResponse() = default;
};
class DescribeUserEncryptionKeyListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeUserEncryptionKeyListRequest() {}

  explicit DescribeUserEncryptionKeyListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeUserEncryptionKeyListRequest() = default;
};
class DescribeUserEncryptionKeyListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keyIds{};

  DescribeUserEncryptionKeyListResponseBodyData() {}

  explicit DescribeUserEncryptionKeyListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyIds) {
      res["KeyIds"] = boost::any(*keyIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyIds") != m.end() && !m["KeyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keyIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponseBodyData() = default;
};
class DescribeUserEncryptionKeyListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeUserEncryptionKeyListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeUserEncryptionKeyListResponseBody() {}

  explicit DescribeUserEncryptionKeyListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeUserEncryptionKeyListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeUserEncryptionKeyListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponseBody() = default;
};
class DescribeUserEncryptionKeyListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUserEncryptionKeyListResponseBody> body{};

  DescribeUserEncryptionKeyListResponse() {}

  explicit DescribeUserEncryptionKeyListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserEncryptionKeyListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserEncryptionKeyListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponse() = default;
};
class GetPolarxCommodityRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> orderType{};
  shared_ptr<string> regionId{};

  GetPolarxCommodityRequest() {}

  explicit GetPolarxCommodityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetPolarxCommodityRequest() = default;
};
class GetPolarxCommodityResponseBodyComponentList : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<vector<string>> values{};

  GetPolarxCommodityResponseBodyComponentList() {}

  explicit GetPolarxCommodityResponseBodyComponentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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


  virtual ~GetPolarxCommodityResponseBodyComponentList() = default;
};
class GetPolarxCommodityResponseBodyDBInstanceConnAddrs : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> port{};
  shared_ptr<string> type{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};

  GetPolarxCommodityResponseBodyDBInstanceConnAddrs() {}

  explicit GetPolarxCommodityResponseBodyDBInstanceConnAddrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~GetPolarxCommodityResponseBodyDBInstanceConnAddrs() = default;
};
class GetPolarxCommodityResponseBodyDBInstanceDBNodes : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> nodeClass{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  GetPolarxCommodityResponseBodyDBInstanceDBNodes() {}

  explicit GetPolarxCommodityResponseBodyDBInstanceDBNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetPolarxCommodityResponseBodyDBInstanceDBNodes() = default;
};
class GetPolarxCommodityResponseBodyDBInstance : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<vector<GetPolarxCommodityResponseBodyDBInstanceConnAddrs>> connAddrs{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBInstanceType{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<long> DBNodeCount{};
  shared_ptr<vector<GetPolarxCommodityResponseBodyDBInstanceDBNodes>> DBNodes{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> expired{};
  shared_ptr<string> id{};
  shared_ptr<string> latestMinorVersion{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> minorVersion{};
  shared_ptr<string> network{};
  shared_ptr<string> payType{};
  shared_ptr<string> port{};
  shared_ptr<vector<string>> readDBInstances{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<long> storageUsed{};
  shared_ptr<string> type{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  GetPolarxCommodityResponseBodyDBInstance() {}

  explicit GetPolarxCommodityResponseBodyDBInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (connAddrs) {
      vector<boost::any> temp1;
      for(auto item1:*connAddrs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnAddrs"] = boost::any(temp1);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBInstanceType) {
      res["DBInstanceType"] = boost::any(*DBInstanceType);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeCount) {
      res["DBNodeCount"] = boost::any(*DBNodeCount);
    }
    if (DBNodes) {
      vector<boost::any> temp1;
      for(auto item1:*DBNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBNodes"] = boost::any(temp1);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (latestMinorVersion) {
      res["LatestMinorVersion"] = boost::any(*latestMinorVersion);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (readDBInstances) {
      res["ReadDBInstances"] = boost::any(*readDBInstances);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ConnAddrs") != m.end() && !m["ConnAddrs"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnAddrs"].type()) {
        vector<GetPolarxCommodityResponseBodyDBInstanceConnAddrs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnAddrs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPolarxCommodityResponseBodyDBInstanceConnAddrs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connAddrs = make_shared<vector<GetPolarxCommodityResponseBodyDBInstanceConnAddrs>>(expect1);
      }
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBInstanceType") != m.end() && !m["DBInstanceType"].empty()) {
      DBInstanceType = make_shared<string>(boost::any_cast<string>(m["DBInstanceType"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeCount") != m.end() && !m["DBNodeCount"].empty()) {
      DBNodeCount = make_shared<long>(boost::any_cast<long>(m["DBNodeCount"]));
    }
    if (m.find("DBNodes") != m.end() && !m["DBNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["DBNodes"].type()) {
        vector<GetPolarxCommodityResponseBodyDBInstanceDBNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPolarxCommodityResponseBodyDBInstanceDBNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBNodes = make_shared<vector<GetPolarxCommodityResponseBodyDBInstanceDBNodes>>(expect1);
      }
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LatestMinorVersion") != m.end() && !m["LatestMinorVersion"].empty()) {
      latestMinorVersion = make_shared<string>(boost::any_cast<string>(m["LatestMinorVersion"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ReadDBInstances") != m.end() && !m["ReadDBInstances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReadDBInstances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReadDBInstances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      readDBInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<long>(boost::any_cast<long>(m["StorageUsed"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetPolarxCommodityResponseBodyDBInstance() = default;
};
class GetPolarxCommodityResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetPolarxCommodityResponseBodyComponentList>> componentList{};
  shared_ptr<GetPolarxCommodityResponseBodyDBInstance> DBInstance{};
  shared_ptr<string> requestId{};

  GetPolarxCommodityResponseBody() {}

  explicit GetPolarxCommodityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentList) {
      vector<boost::any> temp1;
      for(auto item1:*componentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComponentList"] = boost::any(temp1);
    }
    if (DBInstance) {
      res["DBInstance"] = DBInstance ? boost::any(DBInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentList") != m.end() && !m["ComponentList"].empty()) {
      if (typeid(vector<boost::any>) == m["ComponentList"].type()) {
        vector<GetPolarxCommodityResponseBodyComponentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComponentList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPolarxCommodityResponseBodyComponentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        componentList = make_shared<vector<GetPolarxCommodityResponseBodyComponentList>>(expect1);
      }
    }
    if (m.find("DBInstance") != m.end() && !m["DBInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBInstance"].type()) {
        GetPolarxCommodityResponseBodyDBInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBInstance"]));
        DBInstance = make_shared<GetPolarxCommodityResponseBodyDBInstance>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPolarxCommodityResponseBody() = default;
};
class GetPolarxCommodityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPolarxCommodityResponseBody> body{};

  GetPolarxCommodityResponse() {}

  explicit GetPolarxCommodityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPolarxCommodityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPolarxCommodityResponseBody>(model1);
      }
    }
  }


  virtual ~GetPolarxCommodityResponse() = default;
};
class ModifyAccountDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  ModifyAccountDescriptionRequest() {}

  explicit ModifyAccountDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyAccountDescriptionRequest() = default;
};
class ModifyAccountDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyAccountDescriptionResponseBody() {}

  explicit ModifyAccountDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyAccountDescriptionResponseBody() = default;
};
class ModifyAccountDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyAccountDescriptionResponseBody> body{};

  ModifyAccountDescriptionResponse() {}

  explicit ModifyAccountDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAccountDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccountDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccountDescriptionResponse() = default;
};
class ModifyDBInstanceClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> targetDBInstanceClass{};

  ModifyDBInstanceClassRequest() {}

  explicit ModifyDBInstanceClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (targetDBInstanceClass) {
      res["TargetDBInstanceClass"] = boost::any(*targetDBInstanceClass);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TargetDBInstanceClass") != m.end() && !m["TargetDBInstanceClass"].empty()) {
      targetDBInstanceClass = make_shared<string>(boost::any_cast<string>(m["TargetDBInstanceClass"]));
    }
  }


  virtual ~ModifyDBInstanceClassRequest() = default;
};
class ModifyDBInstanceClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ModifyDBInstanceClassResponseBody() {}

  explicit ModifyDBInstanceClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceClassResponseBody() = default;
};
class ModifyDBInstanceClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBInstanceClassResponseBody> body{};

  ModifyDBInstanceClassResponse() {}

  explicit ModifyDBInstanceClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceClassResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceClassResponse() = default;
};
class ModifyDBInstanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<string> configValue{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  ModifyDBInstanceConfigRequest() {}

  explicit ModifyDBInstanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (configValue) {
      res["ConfigValue"] = boost::any(*configValue);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("ConfigValue") != m.end() && !m["ConfigValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["ConfigValue"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyDBInstanceConfigRequest() = default;
};
class ModifyDBInstanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceConfigResponseBody() {}

  explicit ModifyDBInstanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceConfigResponseBody() = default;
};
class ModifyDBInstanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBInstanceConfigResponseBody> body{};

  ModifyDBInstanceConfigResponse() {}

  explicit ModifyDBInstanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceConfigResponse() = default;
};
class ModifyDBInstanceDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  ModifyDBInstanceDescriptionRequest() {}

  explicit ModifyDBInstanceDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyDBInstanceDescriptionRequest() = default;
};
class ModifyDBInstanceDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceDescriptionResponseBody() {}

  explicit ModifyDBInstanceDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceDescriptionResponseBody() = default;
};
class ModifyDBInstanceDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBInstanceDescriptionResponseBody> body{};

  ModifyDBInstanceDescriptionResponse() {}

  explicit ModifyDBInstanceDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceDescriptionResponse() = default;
};
class ModifyDatabaseDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> dbDescription{};
  shared_ptr<string> dbName{};
  shared_ptr<string> regionId{};

  ModifyDatabaseDescriptionRequest() {}

  explicit ModifyDatabaseDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (dbDescription) {
      res["DbDescription"] = boost::any(*dbDescription);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DbDescription") != m.end() && !m["DbDescription"].empty()) {
      dbDescription = make_shared<string>(boost::any_cast<string>(m["DbDescription"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyDatabaseDescriptionRequest() = default;
};
class ModifyDatabaseDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyDatabaseDescriptionResponseBody() {}

  explicit ModifyDatabaseDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyDatabaseDescriptionResponseBody() = default;
};
class ModifyDatabaseDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDatabaseDescriptionResponseBody> body{};

  ModifyDatabaseDescriptionResponse() {}

  explicit ModifyDatabaseDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDatabaseDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDatabaseDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDatabaseDescriptionResponse() = default;
};
class ModifyParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> paramLevel{};
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};

  ModifyParameterRequest() {}

  explicit ModifyParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (paramLevel) {
      res["ParamLevel"] = boost::any(*paramLevel);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ParamLevel") != m.end() && !m["ParamLevel"].empty()) {
      paramLevel = make_shared<string>(boost::any_cast<string>(m["ParamLevel"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyParameterRequest() = default;
};
class ModifyParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyParameterResponseBody() {}

  explicit ModifyParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyParameterResponseBody() = default;
};
class ModifyParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyParameterResponseBody> body{};

  ModifyParameterResponse() {}

  explicit ModifyParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyParameterResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyParameterResponse() = default;
};
class ModifySecurityIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> modifyMode{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityIPList{};

  ModifySecurityIpsRequest() {}

  explicit ModifySecurityIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (modifyMode) {
      res["ModifyMode"] = boost::any(*modifyMode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ModifyMode") != m.end() && !m["ModifyMode"].empty()) {
      modifyMode = make_shared<string>(boost::any_cast<string>(m["ModifyMode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
  }


  virtual ~ModifySecurityIpsRequest() = default;
};
class ModifySecurityIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifySecurityIpsResponseBody() {}

  explicit ModifySecurityIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifySecurityIpsResponseBody() = default;
};
class ModifySecurityIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifySecurityIpsResponseBody> body{};

  ModifySecurityIpsResponse() {}

  explicit ModifySecurityIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySecurityIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySecurityIpsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySecurityIpsResponse() = default;
};
class ReleaseInstancePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentConnectionString{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ReleaseInstancePublicConnectionRequest() {}

  explicit ReleaseInstancePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentConnectionString) {
      res["CurrentConnectionString"] = boost::any(*currentConnectionString);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentConnectionString") != m.end() && !m["CurrentConnectionString"].empty()) {
      currentConnectionString = make_shared<string>(boost::any_cast<string>(m["CurrentConnectionString"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ReleaseInstancePublicConnectionRequest() = default;
};
class ReleaseInstancePublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseInstancePublicConnectionResponseBody() {}

  explicit ReleaseInstancePublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseInstancePublicConnectionResponseBody() = default;
};
class ReleaseInstancePublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReleaseInstancePublicConnectionResponseBody> body{};

  ReleaseInstancePublicConnectionResponse() {}

  explicit ReleaseInstancePublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseInstancePublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseInstancePublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseInstancePublicConnectionResponse() = default;
};
class RestartDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  RestartDBInstanceRequest() {}

  explicit RestartDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~RestartDBInstanceRequest() = default;
};
class RestartDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestartDBInstanceResponseBody() {}

  explicit RestartDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RestartDBInstanceResponseBody() = default;
};
class RestartDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestartDBInstanceResponseBody> body{};

  RestartDBInstanceResponse() {}

  explicit RestartDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestartDBInstanceResponse() = default;
};
class UpdateBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPeriod{};
  shared_ptr<string> backupPlanBegin{};
  shared_ptr<long> backupSetRetention{};
  shared_ptr<string> backupType{};
  shared_ptr<string> backupWay{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<long> forceCleanOnHighSpaceUsage{};
  shared_ptr<long> isEnabled{};
  shared_ptr<long> localLogRetention{};
  shared_ptr<long> logLocalRetentionSpace{};
  shared_ptr<string> regionId{};
  shared_ptr<long> removeLogRetention{};

  UpdateBackupPolicyRequest() {}

  explicit UpdateBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPeriod) {
      res["BackupPeriod"] = boost::any(*backupPeriod);
    }
    if (backupPlanBegin) {
      res["BackupPlanBegin"] = boost::any(*backupPlanBegin);
    }
    if (backupSetRetention) {
      res["BackupSetRetention"] = boost::any(*backupSetRetention);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupWay) {
      res["BackupWay"] = boost::any(*backupWay);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (forceCleanOnHighSpaceUsage) {
      res["ForceCleanOnHighSpaceUsage"] = boost::any(*forceCleanOnHighSpaceUsage);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (localLogRetention) {
      res["LocalLogRetention"] = boost::any(*localLogRetention);
    }
    if (logLocalRetentionSpace) {
      res["LogLocalRetentionSpace"] = boost::any(*logLocalRetentionSpace);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (removeLogRetention) {
      res["RemoveLogRetention"] = boost::any(*removeLogRetention);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPeriod") != m.end() && !m["BackupPeriod"].empty()) {
      backupPeriod = make_shared<string>(boost::any_cast<string>(m["BackupPeriod"]));
    }
    if (m.find("BackupPlanBegin") != m.end() && !m["BackupPlanBegin"].empty()) {
      backupPlanBegin = make_shared<string>(boost::any_cast<string>(m["BackupPlanBegin"]));
    }
    if (m.find("BackupSetRetention") != m.end() && !m["BackupSetRetention"].empty()) {
      backupSetRetention = make_shared<long>(boost::any_cast<long>(m["BackupSetRetention"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupWay") != m.end() && !m["BackupWay"].empty()) {
      backupWay = make_shared<string>(boost::any_cast<string>(m["BackupWay"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("ForceCleanOnHighSpaceUsage") != m.end() && !m["ForceCleanOnHighSpaceUsage"].empty()) {
      forceCleanOnHighSpaceUsage = make_shared<long>(boost::any_cast<long>(m["ForceCleanOnHighSpaceUsage"]));
    }
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<long>(boost::any_cast<long>(m["IsEnabled"]));
    }
    if (m.find("LocalLogRetention") != m.end() && !m["LocalLogRetention"].empty()) {
      localLogRetention = make_shared<long>(boost::any_cast<long>(m["LocalLogRetention"]));
    }
    if (m.find("LogLocalRetentionSpace") != m.end() && !m["LogLocalRetentionSpace"].empty()) {
      logLocalRetentionSpace = make_shared<long>(boost::any_cast<long>(m["LogLocalRetentionSpace"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RemoveLogRetention") != m.end() && !m["RemoveLogRetention"].empty()) {
      removeLogRetention = make_shared<long>(boost::any_cast<long>(m["RemoveLogRetention"]));
    }
  }


  virtual ~UpdateBackupPolicyRequest() = default;
};
class UpdateBackupPolicyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> backupPeriod{};
  shared_ptr<string> backupPlanBegin{};
  shared_ptr<long> backupSetRetention{};
  shared_ptr<string> backupType{};
  shared_ptr<string> backupWay{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<long> forceCleanOnHighSpaceUsage{};
  shared_ptr<long> isEnabled{};
  shared_ptr<long> localLogRetention{};
  shared_ptr<long> logLocalRetentionSpace{};
  shared_ptr<long> removeLogRetention{};

  UpdateBackupPolicyResponseBodyData() {}

  explicit UpdateBackupPolicyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPeriod) {
      res["BackupPeriod"] = boost::any(*backupPeriod);
    }
    if (backupPlanBegin) {
      res["BackupPlanBegin"] = boost::any(*backupPlanBegin);
    }
    if (backupSetRetention) {
      res["BackupSetRetention"] = boost::any(*backupSetRetention);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupWay) {
      res["BackupWay"] = boost::any(*backupWay);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (forceCleanOnHighSpaceUsage) {
      res["ForceCleanOnHighSpaceUsage"] = boost::any(*forceCleanOnHighSpaceUsage);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (localLogRetention) {
      res["LocalLogRetention"] = boost::any(*localLogRetention);
    }
    if (logLocalRetentionSpace) {
      res["LogLocalRetentionSpace"] = boost::any(*logLocalRetentionSpace);
    }
    if (removeLogRetention) {
      res["RemoveLogRetention"] = boost::any(*removeLogRetention);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPeriod") != m.end() && !m["BackupPeriod"].empty()) {
      backupPeriod = make_shared<string>(boost::any_cast<string>(m["BackupPeriod"]));
    }
    if (m.find("BackupPlanBegin") != m.end() && !m["BackupPlanBegin"].empty()) {
      backupPlanBegin = make_shared<string>(boost::any_cast<string>(m["BackupPlanBegin"]));
    }
    if (m.find("BackupSetRetention") != m.end() && !m["BackupSetRetention"].empty()) {
      backupSetRetention = make_shared<long>(boost::any_cast<long>(m["BackupSetRetention"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupWay") != m.end() && !m["BackupWay"].empty()) {
      backupWay = make_shared<string>(boost::any_cast<string>(m["BackupWay"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("ForceCleanOnHighSpaceUsage") != m.end() && !m["ForceCleanOnHighSpaceUsage"].empty()) {
      forceCleanOnHighSpaceUsage = make_shared<long>(boost::any_cast<long>(m["ForceCleanOnHighSpaceUsage"]));
    }
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<long>(boost::any_cast<long>(m["IsEnabled"]));
    }
    if (m.find("LocalLogRetention") != m.end() && !m["LocalLogRetention"].empty()) {
      localLogRetention = make_shared<long>(boost::any_cast<long>(m["LocalLogRetention"]));
    }
    if (m.find("LogLocalRetentionSpace") != m.end() && !m["LogLocalRetentionSpace"].empty()) {
      logLocalRetentionSpace = make_shared<long>(boost::any_cast<long>(m["LogLocalRetentionSpace"]));
    }
    if (m.find("RemoveLogRetention") != m.end() && !m["RemoveLogRetention"].empty()) {
      removeLogRetention = make_shared<long>(boost::any_cast<long>(m["RemoveLogRetention"]));
    }
  }


  virtual ~UpdateBackupPolicyResponseBodyData() = default;
};
class UpdateBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateBackupPolicyResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateBackupPolicyResponseBody() {}

  explicit UpdateBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<UpdateBackupPolicyResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateBackupPolicyResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<UpdateBackupPolicyResponseBodyData>>(expect1);
      }
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


  virtual ~UpdateBackupPolicyResponseBody() = default;
};
class UpdateBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateBackupPolicyResponseBody> body{};

  UpdateBackupPolicyResponse() {}

  explicit UpdateBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBackupPolicyResponse() = default;
};
class UpdateDBInstanceSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> certCommonName{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<bool> enableSSL{};
  shared_ptr<string> regionId{};

  UpdateDBInstanceSSLRequest() {}

  explicit UpdateDBInstanceSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certCommonName) {
      res["CertCommonName"] = boost::any(*certCommonName);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (enableSSL) {
      res["EnableSSL"] = boost::any(*enableSSL);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertCommonName") != m.end() && !m["CertCommonName"].empty()) {
      certCommonName = make_shared<string>(boost::any_cast<string>(m["CertCommonName"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("EnableSSL") != m.end() && !m["EnableSSL"].empty()) {
      enableSSL = make_shared<bool>(boost::any_cast<bool>(m["EnableSSL"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateDBInstanceSSLRequest() = default;
};
class UpdateDBInstanceSSLResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};

  UpdateDBInstanceSSLResponseBodyData() {}

  explicit UpdateDBInstanceSSLResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~UpdateDBInstanceSSLResponseBodyData() = default;
};
class UpdateDBInstanceSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateDBInstanceSSLResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateDBInstanceSSLResponseBody() {}

  explicit UpdateDBInstanceSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateDBInstanceSSLResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateDBInstanceSSLResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDBInstanceSSLResponseBody() = default;
};
class UpdateDBInstanceSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateDBInstanceSSLResponseBody> body{};

  UpdateDBInstanceSSLResponse() {}

  explicit UpdateDBInstanceSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDBInstanceSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDBInstanceSSLResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDBInstanceSSLResponse() = default;
};
class UpdateDBInstanceTDERequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> regionId{};
  shared_ptr<string> roleArn{};
  shared_ptr<long> TDEStatus{};

  UpdateDBInstanceTDERequest() {}

  explicit UpdateDBInstanceTDERequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (TDEStatus) {
      res["TDEStatus"] = boost::any(*TDEStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("TDEStatus") != m.end() && !m["TDEStatus"].empty()) {
      TDEStatus = make_shared<long>(boost::any_cast<long>(m["TDEStatus"]));
    }
  }


  virtual ~UpdateDBInstanceTDERequest() = default;
};
class UpdateDBInstanceTDEResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  UpdateDBInstanceTDEResponseBodyData() {}

  explicit UpdateDBInstanceTDEResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpdateDBInstanceTDEResponseBodyData() = default;
};
class UpdateDBInstanceTDEResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateDBInstanceTDEResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateDBInstanceTDEResponseBody() {}

  explicit UpdateDBInstanceTDEResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateDBInstanceTDEResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateDBInstanceTDEResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDBInstanceTDEResponseBody() = default;
};
class UpdateDBInstanceTDEResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateDBInstanceTDEResponseBody> body{};

  UpdateDBInstanceTDEResponse() {}

  explicit UpdateDBInstanceTDEResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDBInstanceTDEResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDBInstanceTDEResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDBInstanceTDEResponse() = default;
};
class UpdatePolarDBXInstanceNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> dbInstanceNodeCount{};
  shared_ptr<string> regionId{};

  UpdatePolarDBXInstanceNodeRequest() {}

  explicit UpdatePolarDBXInstanceNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (dbInstanceNodeCount) {
      res["DbInstanceNodeCount"] = boost::any(*dbInstanceNodeCount);
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
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DbInstanceNodeCount") != m.end() && !m["DbInstanceNodeCount"].empty()) {
      dbInstanceNodeCount = make_shared<string>(boost::any_cast<string>(m["DbInstanceNodeCount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdatePolarDBXInstanceNodeRequest() = default;
};
class UpdatePolarDBXInstanceNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  UpdatePolarDBXInstanceNodeResponseBody() {}

  explicit UpdatePolarDBXInstanceNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdatePolarDBXInstanceNodeResponseBody() = default;
};
class UpdatePolarDBXInstanceNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdatePolarDBXInstanceNodeResponseBody> body{};

  UpdatePolarDBXInstanceNodeResponse() {}

  explicit UpdatePolarDBXInstanceNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePolarDBXInstanceNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePolarDBXInstanceNodeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePolarDBXInstanceNodeResponse() = default;
};
class UpgradeDBInstanceKernelVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> switchTime{};
  shared_ptr<string> upgradeTime{};

  UpgradeDBInstanceKernelVersionRequest() {}

  explicit UpgradeDBInstanceKernelVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    if (upgradeTime) {
      res["UpgradeTime"] = boost::any(*upgradeTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
    if (m.find("UpgradeTime") != m.end() && !m["UpgradeTime"].empty()) {
      upgradeTime = make_shared<string>(boost::any_cast<string>(m["UpgradeTime"]));
    }
  }


  virtual ~UpgradeDBInstanceKernelVersionRequest() = default;
};
class UpgradeDBInstanceKernelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> targetMinorVersion{};
  shared_ptr<string> taskId{};

  UpgradeDBInstanceKernelVersionResponseBody() {}

  explicit UpgradeDBInstanceKernelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (targetMinorVersion) {
      res["TargetMinorVersion"] = boost::any(*targetMinorVersion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TargetMinorVersion") != m.end() && !m["TargetMinorVersion"].empty()) {
      targetMinorVersion = make_shared<string>(boost::any_cast<string>(m["TargetMinorVersion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpgradeDBInstanceKernelVersionResponseBody() = default;
};
class UpgradeDBInstanceKernelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeDBInstanceKernelVersionResponseBody> body{};

  UpgradeDBInstanceKernelVersionResponse() {}

  explicit UpgradeDBInstanceKernelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeDBInstanceKernelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeDBInstanceKernelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeDBInstanceKernelVersionResponse() = default;
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
  AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(shared_ptr<AllocateInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(shared_ptr<AllocateInstancePublicConnectionRequest> request);
  CancelPolarxOrderResponse cancelPolarxOrderWithOptions(shared_ptr<CancelPolarxOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelPolarxOrderResponse cancelPolarxOrder(shared_ptr<CancelPolarxOrderRequest> request);
  CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorizedWithOptions(shared_ptr<CheckCloudResourceAuthorizedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorized(shared_ptr<CheckCloudResourceAuthorizedRequest> request);
  CreateAccountResponse createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountResponse createAccount(shared_ptr<CreateAccountRequest> request);
  CreateBackupResponse createBackupWithOptions(shared_ptr<CreateBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBackupResponse createBackup(shared_ptr<CreateBackupRequest> request);
  CreateDBResponse createDBWithOptions(shared_ptr<CreateDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBResponse createDB(shared_ptr<CreateDBRequest> request);
  CreateDBInstanceResponse createDBInstanceWithOptions(shared_ptr<CreateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBInstanceResponse createDBInstance(shared_ptr<CreateDBInstanceRequest> request);
  CreatePolarxInstanceResponse createPolarxInstanceWithOptions(shared_ptr<CreatePolarxInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolarxInstanceResponse createPolarxInstance(shared_ptr<CreatePolarxInstanceRequest> request);
  CreatePolarxOrderResponse createPolarxOrderWithOptions(shared_ptr<CreatePolarxOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolarxOrderResponse createPolarxOrder(shared_ptr<CreatePolarxOrderRequest> request);
  CreateSuperAccountResponse createSuperAccountWithOptions(shared_ptr<CreateSuperAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSuperAccountResponse createSuperAccount(shared_ptr<CreateSuperAccountRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteDBResponse deleteDBWithOptions(shared_ptr<DeleteDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBResponse deleteDB(shared_ptr<DeleteDBRequest> request);
  DeleteDBInstanceResponse deleteDBInstanceWithOptions(shared_ptr<DeleteDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBInstanceResponse deleteDBInstance(shared_ptr<DeleteDBInstanceRequest> request);
  DescribeAccountListResponse describeAccountListWithOptions(shared_ptr<DescribeAccountListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountListResponse describeAccountList(shared_ptr<DescribeAccountListRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeBackupSetListResponse describeBackupSetListWithOptions(shared_ptr<DescribeBackupSetListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupSetListResponse describeBackupSetList(shared_ptr<DescribeBackupSetListRequest> request);
  DescribeBinaryLogListResponse describeBinaryLogListWithOptions(shared_ptr<DescribeBinaryLogListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBinaryLogListResponse describeBinaryLogList(shared_ptr<DescribeBinaryLogListRequest> request);
  DescribeCharacterSetResponse describeCharacterSetWithOptions(shared_ptr<DescribeCharacterSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCharacterSetResponse describeCharacterSet(shared_ptr<DescribeCharacterSetRequest> request);
  DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(shared_ptr<DescribeDBInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(shared_ptr<DescribeDBInstanceAttributeRequest> request);
  DescribeDBInstanceConfigResponse describeDBInstanceConfigWithOptions(shared_ptr<DescribeDBInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceConfigResponse describeDBInstanceConfig(shared_ptr<DescribeDBInstanceConfigRequest> request);
  DescribeDBInstanceSSLResponse describeDBInstanceSSLWithOptions(shared_ptr<DescribeDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceSSLResponse describeDBInstanceSSL(shared_ptr<DescribeDBInstanceSSLRequest> request);
  DescribeDBInstanceTDEResponse describeDBInstanceTDEWithOptions(shared_ptr<DescribeDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceTDEResponse describeDBInstanceTDE(shared_ptr<DescribeDBInstanceTDERequest> request);
  DescribeDBInstanceTopologyResponse describeDBInstanceTopologyWithOptions(shared_ptr<DescribeDBInstanceTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceTopologyResponse describeDBInstanceTopology(shared_ptr<DescribeDBInstanceTopologyRequest> request);
  DescribeDBInstancesResponse describeDBInstancesWithOptions(shared_ptr<DescribeDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstancesResponse describeDBInstances(shared_ptr<DescribeDBInstancesRequest> request);
  DescribeDBNodePerformanceResponse describeDBNodePerformanceWithOptions(shared_ptr<DescribeDBNodePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBNodePerformanceResponse describeDBNodePerformance(shared_ptr<DescribeDBNodePerformanceRequest> request);
  DescribeDbListResponse describeDbListWithOptions(shared_ptr<DescribeDbListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDbListResponse describeDbList(shared_ptr<DescribeDbListRequest> request);
  DescribeDistributeTableListResponse describeDistributeTableListWithOptions(shared_ptr<DescribeDistributeTableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDistributeTableListResponse describeDistributeTableList(shared_ptr<DescribeDistributeTableListRequest> request);
  DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(shared_ptr<DescribeParameterTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParameterTemplatesResponse describeParameterTemplates(shared_ptr<DescribeParameterTemplatesRequest> request);
  DescribeParametersResponse describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParametersResponse describeParameters(shared_ptr<DescribeParametersRequest> request);
  DescribePolarxDataNodesResponse describePolarxDataNodesWithOptions(shared_ptr<DescribePolarxDataNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolarxDataNodesResponse describePolarxDataNodes(shared_ptr<DescribePolarxDataNodesRequest> request);
  DescribePolarxDbInstancesResponse describePolarxDbInstancesWithOptions(shared_ptr<DescribePolarxDbInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolarxDbInstancesResponse describePolarxDbInstances(shared_ptr<DescribePolarxDbInstancesRequest> request);
  DescribePolarxPgInstancesResponse describePolarxPgInstancesWithOptions(shared_ptr<DescribePolarxPgInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolarxPgInstancesResponse describePolarxPgInstances(shared_ptr<DescribePolarxPgInstancesRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DescribeScaleOutMigrateTaskListResponse describeScaleOutMigrateTaskListWithOptions(shared_ptr<DescribeScaleOutMigrateTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScaleOutMigrateTaskListResponse describeScaleOutMigrateTaskList(shared_ptr<DescribeScaleOutMigrateTaskListRequest> request);
  DescribeSecurityIpsResponse describeSecurityIpsWithOptions(shared_ptr<DescribeSecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecurityIpsResponse describeSecurityIps(shared_ptr<DescribeSecurityIpsRequest> request);
  DescribeTasksResponse describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTasksResponse describeTasks(shared_ptr<DescribeTasksRequest> request);
  DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyListWithOptions(shared_ptr<DescribeUserEncryptionKeyListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyList(shared_ptr<DescribeUserEncryptionKeyListRequest> request);
  GetPolarxCommodityResponse getPolarxCommodityWithOptions(shared_ptr<GetPolarxCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolarxCommodityResponse getPolarxCommodity(shared_ptr<GetPolarxCommodityRequest> request);
  ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountDescriptionResponse modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request);
  ModifyDBInstanceClassResponse modifyDBInstanceClassWithOptions(shared_ptr<ModifyDBInstanceClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceClassResponse modifyDBInstanceClass(shared_ptr<ModifyDBInstanceClassRequest> request);
  ModifyDBInstanceConfigResponse modifyDBInstanceConfigWithOptions(shared_ptr<ModifyDBInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceConfigResponse modifyDBInstanceConfig(shared_ptr<ModifyDBInstanceConfigRequest> request);
  ModifyDBInstanceDescriptionResponse modifyDBInstanceDescriptionWithOptions(shared_ptr<ModifyDBInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceDescriptionResponse modifyDBInstanceDescription(shared_ptr<ModifyDBInstanceDescriptionRequest> request);
  ModifyDatabaseDescriptionResponse modifyDatabaseDescriptionWithOptions(shared_ptr<ModifyDatabaseDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDatabaseDescriptionResponse modifyDatabaseDescription(shared_ptr<ModifyDatabaseDescriptionRequest> request);
  ModifyParameterResponse modifyParameterWithOptions(shared_ptr<ModifyParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyParameterResponse modifyParameter(shared_ptr<ModifyParameterRequest> request);
  ModifySecurityIpsResponse modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecurityIpsResponse modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request);
  ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(shared_ptr<ReleaseInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(shared_ptr<ReleaseInstancePublicConnectionRequest> request);
  RestartDBInstanceResponse restartDBInstanceWithOptions(shared_ptr<RestartDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartDBInstanceResponse restartDBInstance(shared_ptr<RestartDBInstanceRequest> request);
  UpdateBackupPolicyResponse updateBackupPolicyWithOptions(shared_ptr<UpdateBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBackupPolicyResponse updateBackupPolicy(shared_ptr<UpdateBackupPolicyRequest> request);
  UpdateDBInstanceSSLResponse updateDBInstanceSSLWithOptions(shared_ptr<UpdateDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDBInstanceSSLResponse updateDBInstanceSSL(shared_ptr<UpdateDBInstanceSSLRequest> request);
  UpdateDBInstanceTDEResponse updateDBInstanceTDEWithOptions(shared_ptr<UpdateDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDBInstanceTDEResponse updateDBInstanceTDE(shared_ptr<UpdateDBInstanceTDERequest> request);
  UpdatePolarDBXInstanceNodeResponse updatePolarDBXInstanceNodeWithOptions(shared_ptr<UpdatePolarDBXInstanceNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePolarDBXInstanceNodeResponse updatePolarDBXInstanceNode(shared_ptr<UpdatePolarDBXInstanceNodeRequest> request);
  UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersionWithOptions(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersion(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Polardbx20200202

#endif
