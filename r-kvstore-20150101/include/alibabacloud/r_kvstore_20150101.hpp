// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_R-KVSTORE20150101_H_
#define ALIBABACLOUD_R-KVSTORE20150101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_R-kvstore20150101 {
class AddShardingNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> shardCount{};
  shared_ptr<string> shardClass{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> businessInfo{};

  AddShardingNodeRequest() {}

  explicit AddShardingNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (shardCount) {
      res["ShardCount"] = boost::any(*shardCount);
    }
    if (shardClass) {
      res["ShardClass"] = boost::any(*shardClass);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ShardCount") != m.end() && !m["ShardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["ShardCount"]));
    }
    if (m.find("ShardClass") != m.end() && !m["ShardClass"].empty()) {
      shardClass = make_shared<string>(boost::any_cast<string>(m["ShardClass"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
  }


  virtual ~AddShardingNodeRequest() = default;
};
class AddShardingNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> orderId{};
  shared_ptr<vector<string>> nodeIds{};

  AddShardingNodeResponseBody() {}

  explicit AddShardingNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("NodeIds") != m.end() && !m["NodeIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddShardingNodeResponseBody() = default;
};
class AddShardingNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddShardingNodeResponseBody> body{};

  AddShardingNodeResponse() {}

  explicit AddShardingNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddShardingNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddShardingNodeResponseBody>(model1);
      }
    }
  }


  virtual ~AddShardingNodeResponse() = default;
};
class AllocateDirectConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> port{};

  AllocateDirectConnectionRequest() {}

  explicit AllocateDirectConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~AllocateDirectConnectionRequest() = default;
};
class AllocateDirectConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocateDirectConnectionResponseBody() {}

  explicit AllocateDirectConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AllocateDirectConnectionResponseBody() = default;
};
class AllocateDirectConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AllocateDirectConnectionResponseBody> body{};

  AllocateDirectConnectionResponse() {}

  explicit AllocateDirectConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllocateDirectConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateDirectConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateDirectConnectionResponse() = default;
};
class AllocateInstancePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> port{};

  AllocateInstancePublicConnectionRequest() {}

  explicit AllocateInstancePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
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
class CreateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountType{};

  CreateAccountRequest() {}

  explicit CreateAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
  }


  virtual ~CreateAccountRequest() = default;
};
class CreateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> acountName{};

  CreateAccountResponseBody() {}

  explicit CreateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (acountName) {
      res["AcountName"] = boost::any(*acountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AcountName") != m.end() && !m["AcountName"].empty()) {
      acountName = make_shared<string>(boost::any_cast<string>(m["AcountName"]));
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
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  CreateBackupRequest() {}

  explicit CreateBackupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateBackupRequest() = default;
};
class CreateBackupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> backupJobID{};

  CreateBackupResponseBody() {}

  explicit CreateBackupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backupJobID) {
      res["BackupJobID"] = boost::any(*backupJobID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackupJobID") != m.end() && !m["BackupJobID"].empty()) {
      backupJobID = make_shared<string>(boost::any_cast<string>(m["BackupJobID"]));
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
class CreateCacheAnalysisTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  CreateCacheAnalysisTaskRequest() {}

  explicit CreateCacheAnalysisTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateCacheAnalysisTaskRequest() = default;
};
class CreateCacheAnalysisTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateCacheAnalysisTaskResponseBody() {}

  explicit CreateCacheAnalysisTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateCacheAnalysisTaskResponseBody() = default;
};
class CreateCacheAnalysisTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCacheAnalysisTaskResponseBody> body{};

  CreateCacheAnalysisTaskResponse() {}

  explicit CreateCacheAnalysisTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCacheAnalysisTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCacheAnalysisTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCacheAnalysisTaskResponse() = default;
};
class CreateGlobalDistributeCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> seedSubInstanceId{};

  CreateGlobalDistributeCacheRequest() {}

  explicit CreateGlobalDistributeCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (seedSubInstanceId) {
      res["SeedSubInstanceId"] = boost::any(*seedSubInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("SeedSubInstanceId") != m.end() && !m["SeedSubInstanceId"].empty()) {
      seedSubInstanceId = make_shared<string>(boost::any_cast<string>(m["SeedSubInstanceId"]));
    }
  }


  virtual ~CreateGlobalDistributeCacheRequest() = default;
};
class CreateGlobalDistributeCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> globalInstanceId{};

  CreateGlobalDistributeCacheResponseBody() {}

  explicit CreateGlobalDistributeCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (globalInstanceId) {
      res["GlobalInstanceId"] = boost::any(*globalInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("GlobalInstanceId") != m.end() && !m["GlobalInstanceId"].empty()) {
      globalInstanceId = make_shared<string>(boost::any_cast<string>(m["GlobalInstanceId"]));
    }
  }


  virtual ~CreateGlobalDistributeCacheResponseBody() = default;
};
class CreateGlobalDistributeCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGlobalDistributeCacheResponseBody> body{};

  CreateGlobalDistributeCacheResponse() {}

  explicit CreateGlobalDistributeCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGlobalDistributeCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGlobalDistributeCacheResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGlobalDistributeCacheResponse() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> token{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> password{};
  shared_ptr<long> capacity{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> config{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> networkType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> period{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> srcDBInstanceId{};
  shared_ptr<string> backupId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> autoUseCoupon{};
  shared_ptr<string> autoRenew{};
  shared_ptr<string> autoRenewPeriod{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> restoreTime{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> globalInstanceId{};
  shared_ptr<bool> globalInstance{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (srcDBInstanceId) {
      res["SrcDBInstanceId"] = boost::any(*srcDBInstanceId);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (autoUseCoupon) {
      res["AutoUseCoupon"] = boost::any(*autoUseCoupon);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["AutoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (globalInstanceId) {
      res["GlobalInstanceId"] = boost::any(*globalInstanceId);
    }
    if (globalInstance) {
      res["GlobalInstance"] = boost::any(*globalInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("SrcDBInstanceId") != m.end() && !m["SrcDBInstanceId"].empty()) {
      srcDBInstanceId = make_shared<string>(boost::any_cast<string>(m["SrcDBInstanceId"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("AutoUseCoupon") != m.end() && !m["AutoUseCoupon"].empty()) {
      autoUseCoupon = make_shared<string>(boost::any_cast<string>(m["AutoUseCoupon"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewPeriod") != m.end() && !m["AutoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<string>(boost::any_cast<string>(m["AutoRenewPeriod"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("GlobalInstanceId") != m.end() && !m["GlobalInstanceId"].empty()) {
      globalInstanceId = make_shared<string>(boost::any_cast<string>(m["GlobalInstanceId"]));
    }
    if (m.find("GlobalInstance") != m.end() && !m["GlobalInstance"].empty()) {
      globalInstance = make_shared<bool>(boost::any_cast<bool>(m["GlobalInstance"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> connectionDomain{};
  shared_ptr<long> port{};
  shared_ptr<string> userName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<long> capacity{};
  shared_ptr<long> QPS{};
  shared_ptr<long> bandwidth{};
  shared_ptr<long> connections{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> config{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> endTime{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> networkType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> privateIpAddr{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (connectionDomain) {
      res["ConnectionDomain"] = boost::any(*connectionDomain);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (QPS) {
      res["QPS"] = boost::any(*QPS);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (connections) {
      res["Connections"] = boost::any(*connections);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (privateIpAddr) {
      res["PrivateIpAddr"] = boost::any(*privateIpAddr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ConnectionDomain") != m.end() && !m["ConnectionDomain"].empty()) {
      connectionDomain = make_shared<string>(boost::any_cast<string>(m["ConnectionDomain"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("QPS") != m.end() && !m["QPS"].empty()) {
      QPS = make_shared<long>(boost::any_cast<long>(m["QPS"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      connections = make_shared<long>(boost::any_cast<long>(m["Connections"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("PrivateIpAddr") != m.end() && !m["PrivateIpAddr"].empty()) {
      privateIpAddr = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddr"]));
    }
  }


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateTairInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> password{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<long> period{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> srcDBInstanceId{};
  shared_ptr<string> backupId{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> autoUseCoupon{};
  shared_ptr<string> autoRenew{};
  shared_ptr<string> autoRenewPeriod{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> storageType{};
  shared_ptr<long> storage{};
  shared_ptr<string> shardType{};
  shared_ptr<long> shardCount{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> instanceType{};

  CreateTairInstanceRequest() {}

  explicit CreateTairInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (srcDBInstanceId) {
      res["SrcDBInstanceId"] = boost::any(*srcDBInstanceId);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (autoUseCoupon) {
      res["AutoUseCoupon"] = boost::any(*autoUseCoupon);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["AutoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (storage) {
      res["Storage"] = boost::any(*storage);
    }
    if (shardType) {
      res["ShardType"] = boost::any(*shardType);
    }
    if (shardCount) {
      res["ShardCount"] = boost::any(*shardCount);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("SrcDBInstanceId") != m.end() && !m["SrcDBInstanceId"].empty()) {
      srcDBInstanceId = make_shared<string>(boost::any_cast<string>(m["SrcDBInstanceId"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("AutoUseCoupon") != m.end() && !m["AutoUseCoupon"].empty()) {
      autoUseCoupon = make_shared<string>(boost::any_cast<string>(m["AutoUseCoupon"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewPeriod") != m.end() && !m["AutoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<string>(boost::any_cast<string>(m["AutoRenewPeriod"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      storage = make_shared<long>(boost::any_cast<long>(m["Storage"]));
    }
    if (m.find("ShardType") != m.end() && !m["ShardType"].empty()) {
      shardType = make_shared<string>(boost::any_cast<string>(m["ShardType"]));
    }
    if (m.find("ShardCount") != m.end() && !m["ShardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["ShardCount"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~CreateTairInstanceRequest() = default;
};
class CreateTairInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> connectionDomain{};
  shared_ptr<long> port{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<long> QPS{};
  shared_ptr<long> bandwidth{};
  shared_ptr<long> connections{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> config{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> taskId{};

  CreateTairInstanceResponseBody() {}

  explicit CreateTairInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (connectionDomain) {
      res["ConnectionDomain"] = boost::any(*connectionDomain);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (QPS) {
      res["QPS"] = boost::any(*QPS);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (connections) {
      res["Connections"] = boost::any(*connections);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ConnectionDomain") != m.end() && !m["ConnectionDomain"].empty()) {
      connectionDomain = make_shared<string>(boost::any_cast<string>(m["ConnectionDomain"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("QPS") != m.end() && !m["QPS"].empty()) {
      QPS = make_shared<long>(boost::any_cast<long>(m["QPS"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      connections = make_shared<long>(boost::any_cast<long>(m["Connections"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateTairInstanceResponseBody() = default;
};
class CreateTairInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTairInstanceResponseBody> body{};

  CreateTairInstanceResponse() {}

  explicit CreateTairInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTairInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTairInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTairInstanceResponse() = default;
};
class CreateUserClusterHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> hostClass{};
  shared_ptr<long> orderNum{};
  shared_ptr<long> orderPeriod{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> agentId{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> engine{};
  shared_ptr<string> zoneId{};

  CreateUserClusterHostRequest() {}

  explicit CreateUserClusterHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (hostClass) {
      res["HostClass"] = boost::any(*hostClass);
    }
    if (orderNum) {
      res["OrderNum"] = boost::any(*orderNum);
    }
    if (orderPeriod) {
      res["OrderPeriod"] = boost::any(*orderPeriod);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("HostClass") != m.end() && !m["HostClass"].empty()) {
      hostClass = make_shared<string>(boost::any_cast<string>(m["HostClass"]));
    }
    if (m.find("OrderNum") != m.end() && !m["OrderNum"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["OrderNum"]));
    }
    if (m.find("OrderPeriod") != m.end() && !m["OrderPeriod"].empty()) {
      orderPeriod = make_shared<long>(boost::any_cast<long>(m["OrderPeriod"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateUserClusterHostRequest() = default;
};
class CreateUserClusterHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> hostId{};

  CreateUserClusterHostResponseBody() {}

  explicit CreateUserClusterHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
  }


  virtual ~CreateUserClusterHostResponseBody() = default;
};
class CreateUserClusterHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateUserClusterHostResponseBody> body{};

  CreateUserClusterHostResponse() {}

  explicit CreateUserClusterHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserClusterHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserClusterHostResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserClusterHostResponse() = default;
};
class DeleteAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  DeleteAccountRequest() {}

  explicit DeleteAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DeleteAccountRequest() = default;
};
class DeleteAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccountResponseBody() {}

  explicit DeleteAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class DeleteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> globalInstanceId{};

  DeleteInstanceRequest() {}

  explicit DeleteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (globalInstanceId) {
      res["GlobalInstanceId"] = boost::any(*globalInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("GlobalInstanceId") != m.end() && !m["GlobalInstanceId"].empty()) {
      globalInstanceId = make_shared<string>(boost::any_cast<string>(m["GlobalInstanceId"]));
    }
  }


  virtual ~DeleteInstanceRequest() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteShardingNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeId{};

  DeleteShardingNodeRequest() {}

  explicit DeleteShardingNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~DeleteShardingNodeRequest() = default;
};
class DeleteShardingNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteShardingNodeResponseBody() {}

  explicit DeleteShardingNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteShardingNodeResponseBody() = default;
};
class DeleteShardingNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteShardingNodeResponseBody> body{};

  DeleteShardingNodeResponse() {}

  explicit DeleteShardingNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteShardingNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteShardingNodeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteShardingNodeResponse() = default;
};
class DeleteUserClusterHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostId{};
  shared_ptr<string> engine{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> clusterId{};

  DeleteUserClusterHostRequest() {}

  explicit DeleteUserClusterHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DeleteUserClusterHostRequest() = default;
};
class DeleteUserClusterHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserClusterHostResponseBody() {}

  explicit DeleteUserClusterHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserClusterHostResponseBody() = default;
};
class DeleteUserClusterHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteUserClusterHostResponseBody> body{};

  DeleteUserClusterHostResponse() {}

  explicit DeleteUserClusterHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserClusterHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserClusterHostResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserClusterHostResponse() = default;
};
class DescribeAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};

  DescribeAccountsRequest() {}

  explicit DescribeAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DescribeAccountsRequest() = default;
};
class DescribeAccountsResponseBodyAccountsAccountDatabasePrivilegesDatabasePrivilege : public Darabonba::Model {
public:
  shared_ptr<string> accountPrivilege{};

  DescribeAccountsResponseBodyAccountsAccountDatabasePrivilegesDatabasePrivilege() {}

  explicit DescribeAccountsResponseBodyAccountsAccountDatabasePrivilegesDatabasePrivilege(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
  }


  virtual ~DescribeAccountsResponseBodyAccountsAccountDatabasePrivilegesDatabasePrivilege() = default;
};
class DescribeAccountsResponseBodyAccountsAccountDatabasePrivileges : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccountsResponseBodyAccountsAccountDatabasePrivilegesDatabasePrivilege>> databasePrivilege{};

  DescribeAccountsResponseBodyAccountsAccountDatabasePrivileges() {}

  explicit DescribeAccountsResponseBodyAccountsAccountDatabasePrivileges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databasePrivilege) {
      vector<boost::any> temp1;
      for(auto item1:*databasePrivilege){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatabasePrivilege"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabasePrivilege") != m.end() && !m["DatabasePrivilege"].empty()) {
      if (typeid(vector<boost::any>) == m["DatabasePrivilege"].type()) {
        vector<DescribeAccountsResponseBodyAccountsAccountDatabasePrivilegesDatabasePrivilege> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatabasePrivilege"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountsResponseBodyAccountsAccountDatabasePrivilegesDatabasePrivilege model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        databasePrivilege = make_shared<vector<DescribeAccountsResponseBodyAccountsAccountDatabasePrivilegesDatabasePrivilege>>(expect1);
      }
    }
  }


  virtual ~DescribeAccountsResponseBodyAccountsAccountDatabasePrivileges() = default;
};
class DescribeAccountsResponseBodyAccountsAccount : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountStatus{};
  shared_ptr<string> accountType{};
  shared_ptr<string> accountDescription{};
  shared_ptr<DescribeAccountsResponseBodyAccountsAccountDatabasePrivileges> databasePrivileges{};

  DescribeAccountsResponseBodyAccountsAccount() {}

  explicit DescribeAccountsResponseBodyAccountsAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (databasePrivileges) {
      res["DatabasePrivileges"] = databasePrivileges ? boost::any(databasePrivileges->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("DatabasePrivileges") != m.end() && !m["DatabasePrivileges"].empty()) {
      if (typeid(map<string, boost::any>) == m["DatabasePrivileges"].type()) {
        DescribeAccountsResponseBodyAccountsAccountDatabasePrivileges model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DatabasePrivileges"]));
        databasePrivileges = make_shared<DescribeAccountsResponseBodyAccountsAccountDatabasePrivileges>(model1);
      }
    }
  }


  virtual ~DescribeAccountsResponseBodyAccountsAccount() = default;
};
class DescribeAccountsResponseBodyAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccountsResponseBodyAccountsAccount>> account{};

  DescribeAccountsResponseBodyAccounts() {}

  explicit DescribeAccountsResponseBodyAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      vector<boost::any> temp1;
      for(auto item1:*account){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Account"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(vector<boost::any>) == m["Account"].type()) {
        vector<DescribeAccountsResponseBodyAccountsAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Account"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountsResponseBodyAccountsAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        account = make_shared<vector<DescribeAccountsResponseBodyAccountsAccount>>(expect1);
      }
    }
  }


  virtual ~DescribeAccountsResponseBodyAccounts() = default;
};
class DescribeAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAccountsResponseBodyAccounts> accounts{};

  DescribeAccountsResponseBody() {}

  explicit DescribeAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (accounts) {
      res["Accounts"] = accounts ? boost::any(accounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Accounts"].type()) {
        DescribeAccountsResponseBodyAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Accounts"]));
        accounts = make_shared<DescribeAccountsResponseBodyAccounts>(model1);
      }
    }
  }


  virtual ~DescribeAccountsResponseBody() = default;
};
class DescribeAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccountsResponseBody> body{};

  DescribeAccountsResponse() {}

  explicit DescribeAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountsResponse() = default;
};
class DescribeActiveOperationTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> region{};
  shared_ptr<string> taskType{};
  shared_ptr<long> isHistory{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeActiveOperationTaskRequest() {}

  explicit DescribeActiveOperationTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (isHistory) {
      res["IsHistory"] = boost::any(*isHistory);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("IsHistory") != m.end() && !m["IsHistory"].empty()) {
      isHistory = make_shared<long>(boost::any_cast<long>(m["IsHistory"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeActiveOperationTaskRequest() = default;
};
class DescribeActiveOperationTaskResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> insName{};
  shared_ptr<string> dbType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> switchTime{};
  shared_ptr<string> deadline{};
  shared_ptr<long> status{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> prepareInterval{};
  shared_ptr<string> taskType{};
  shared_ptr<string> region{};

  DescribeActiveOperationTaskResponseBodyItems() {}

  explicit DescribeActiveOperationTaskResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (insName) {
      res["InsName"] = boost::any(*insName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    if (deadline) {
      res["Deadline"] = boost::any(*deadline);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (prepareInterval) {
      res["PrepareInterval"] = boost::any(*prepareInterval);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InsName") != m.end() && !m["InsName"].empty()) {
      insName = make_shared<string>(boost::any_cast<string>(m["InsName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
    if (m.find("Deadline") != m.end() && !m["Deadline"].empty()) {
      deadline = make_shared<string>(boost::any_cast<string>(m["Deadline"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PrepareInterval") != m.end() && !m["PrepareInterval"].empty()) {
      prepareInterval = make_shared<string>(boost::any_cast<string>(m["PrepareInterval"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DescribeActiveOperationTaskResponseBodyItems() = default;
};
class DescribeActiveOperationTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<DescribeActiveOperationTaskResponseBodyItems>> items{};

  DescribeActiveOperationTaskResponseBody() {}

  explicit DescribeActiveOperationTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeActiveOperationTaskResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeActiveOperationTaskResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeActiveOperationTaskResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeActiveOperationTaskResponseBody() = default;
};
class DescribeActiveOperationTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeActiveOperationTaskResponseBody> body{};

  DescribeActiveOperationTaskResponse() {}

  explicit DescribeActiveOperationTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeActiveOperationTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeActiveOperationTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeActiveOperationTaskResponse() = default;
};
class DescribeAuditRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> queryKeywords{};
  shared_ptr<string> hostAddress{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeAuditRecordsRequest() {}

  explicit DescribeAuditRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (queryKeywords) {
      res["QueryKeywords"] = boost::any(*queryKeywords);
    }
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("QueryKeywords") != m.end() && !m["QueryKeywords"].empty()) {
      queryKeywords = make_shared<string>(boost::any_cast<string>(m["QueryKeywords"]));
    }
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeAuditRecordsRequest() = default;
};
class DescribeAuditRecordsResponseBodyItemsSQL : public Darabonba::Model {
public:
  shared_ptr<string> hostAddress{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> SQLText{};
  shared_ptr<string> SQLType{};
  shared_ptr<string> totalExecutionTimes{};
  shared_ptr<string> executeTime{};
  shared_ptr<string> accountName{};

  DescribeAuditRecordsResponseBodyItemsSQL() {}

  explicit DescribeAuditRecordsResponseBodyItemsSQL(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (SQLType) {
      res["SQLType"] = boost::any(*SQLType);
    }
    if (totalExecutionTimes) {
      res["TotalExecutionTimes"] = boost::any(*totalExecutionTimes);
    }
    if (executeTime) {
      res["ExecuteTime"] = boost::any(*executeTime);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("SQLType") != m.end() && !m["SQLType"].empty()) {
      SQLType = make_shared<string>(boost::any_cast<string>(m["SQLType"]));
    }
    if (m.find("TotalExecutionTimes") != m.end() && !m["TotalExecutionTimes"].empty()) {
      totalExecutionTimes = make_shared<string>(boost::any_cast<string>(m["TotalExecutionTimes"]));
    }
    if (m.find("ExecuteTime") != m.end() && !m["ExecuteTime"].empty()) {
      executeTime = make_shared<string>(boost::any_cast<string>(m["ExecuteTime"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DescribeAuditRecordsResponseBodyItemsSQL() = default;
};
class DescribeAuditRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAuditRecordsResponseBodyItemsSQL>> SQL{};

  DescribeAuditRecordsResponseBodyItems() {}

  explicit DescribeAuditRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SQL) {
      vector<boost::any> temp1;
      for(auto item1:*SQL){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SQL"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SQL") != m.end() && !m["SQL"].empty()) {
      if (typeid(vector<boost::any>) == m["SQL"].type()) {
        vector<DescribeAuditRecordsResponseBodyItemsSQL> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SQL"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAuditRecordsResponseBodyItemsSQL model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        SQL = make_shared<vector<DescribeAuditRecordsResponseBodyItemsSQL>>(expect1);
      }
    }
  }


  virtual ~DescribeAuditRecordsResponseBodyItems() = default;
};
class DescribeAuditRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalRecordCount{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeAuditRecordsResponseBodyItems> items{};

  DescribeAuditRecordsResponseBody() {}

  explicit DescribeAuditRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeAuditRecordsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeAuditRecordsResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeAuditRecordsResponseBody() = default;
};
class DescribeAuditRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAuditRecordsResponseBody> body{};

  DescribeAuditRecordsResponse() {}

  explicit DescribeAuditRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAuditRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditRecordsResponse() = default;
};
class DescribeAvailableResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> orderType{};
  shared_ptr<string> engine{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> productType{};

  DescribeAvailableResourceRequest() {}

  explicit DescribeAvailableResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~DescribeAvailableResourceRequest() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource : public Darabonba::Model {
public:
  shared_ptr<string> instanceClass{};
  shared_ptr<string> instanceClassRemark{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (instanceClassRemark) {
      res["InstanceClassRemark"] = boost::any(*instanceClassRemark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("InstanceClassRemark") != m.end() && !m["InstanceClassRemark"].empty()) {
      instanceClassRemark = make_shared<string>(boost::any_cast<string>(m["InstanceClassRemark"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource>> availableResource{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResources() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableResource) {
      vector<boost::any> temp1;
      for(auto item1:*availableResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableResource") != m.end() && !m["AvailableResource"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableResource"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableResource = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResources() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeType : public Darabonba::Model {
public:
  shared_ptr<string> supportedNodeType{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResources> availableResources{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeType() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedNodeType) {
      res["SupportedNodeType"] = boost::any(*supportedNodeType);
    }
    if (availableResources) {
      res["AvailableResources"] = availableResources ? boost::any(availableResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedNodeType") != m.end() && !m["SupportedNodeType"].empty()) {
      supportedNodeType = make_shared<string>(boost::any_cast<string>(m["SupportedNodeType"]));
    }
    if (m.find("AvailableResources") != m.end() && !m["AvailableResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableResources"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableResources"]));
        availableResources = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeTypeAvailableResources>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeType() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeType>> supportedNodeType{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypes() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedNodeType) {
      vector<boost::any> temp1;
      for(auto item1:*supportedNodeType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedNodeType"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedNodeType") != m.end() && !m["SupportedNodeType"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedNodeType"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedNodeType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedNodeType = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypesSupportedNodeType>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypes() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumber : public Darabonba::Model {
public:
  shared_ptr<string> shardNumber{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypes> supportedNodeTypes{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumber() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumber(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shardNumber) {
      res["ShardNumber"] = boost::any(*shardNumber);
    }
    if (supportedNodeTypes) {
      res["SupportedNodeTypes"] = supportedNodeTypes ? boost::any(supportedNodeTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShardNumber") != m.end() && !m["ShardNumber"].empty()) {
      shardNumber = make_shared<string>(boost::any_cast<string>(m["ShardNumber"]));
    }
    if (m.find("SupportedNodeTypes") != m.end() && !m["SupportedNodeTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedNodeTypes"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedNodeTypes"]));
        supportedNodeTypes = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumberSupportedNodeTypes>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumber() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbers : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumber>> supportedShardNumber{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbers() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedShardNumber) {
      vector<boost::any> temp1;
      for(auto item1:*supportedShardNumber){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedShardNumber"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedShardNumber") != m.end() && !m["SupportedShardNumber"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedShardNumber"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumber> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedShardNumber"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumber model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedShardNumber = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbersSupportedShardNumber>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbers() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureType : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbers> supportedShardNumbers{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureType() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
    }
    if (supportedShardNumbers) {
      res["SupportedShardNumbers"] = supportedShardNumbers ? boost::any(supportedShardNumbers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Architecture") != m.end() && !m["Architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["Architecture"]));
    }
    if (m.find("SupportedShardNumbers") != m.end() && !m["SupportedShardNumbers"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedShardNumbers"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedShardNumbers"]));
        supportedShardNumbers = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureTypeSupportedShardNumbers>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureType() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureType>> supportedArchitectureType{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypes() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedArchitectureType) {
      vector<boost::any> temp1;
      for(auto item1:*supportedArchitectureType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedArchitectureType"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedArchitectureType") != m.end() && !m["SupportedArchitectureType"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedArchitectureType"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedArchitectureType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedArchitectureType = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypesSupportedArchitectureType>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypes() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersion : public Darabonba::Model {
public:
  shared_ptr<string> version{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypes> supportedArchitectureTypes{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersion() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (supportedArchitectureTypes) {
      res["SupportedArchitectureTypes"] = supportedArchitectureTypes ? boost::any(supportedArchitectureTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("SupportedArchitectureTypes") != m.end() && !m["SupportedArchitectureTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedArchitectureTypes"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedArchitectureTypes"]));
        supportedArchitectureTypes = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersionSupportedArchitectureTypes>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersion() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersion>> supportedEngineVersion{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersions() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedEngineVersion) {
      vector<boost::any> temp1;
      for(auto item1:*supportedEngineVersion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedEngineVersion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedEngineVersion") != m.end() && !m["SupportedEngineVersion"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedEngineVersion"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedEngineVersion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedEngineVersion = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersionsSupportedEngineVersion>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersions() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesType : public Darabonba::Model {
public:
  shared_ptr<string> seriesType{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersions> supportedEngineVersions{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesType() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (seriesType) {
      res["SeriesType"] = boost::any(*seriesType);
    }
    if (supportedEngineVersions) {
      res["SupportedEngineVersions"] = supportedEngineVersions ? boost::any(supportedEngineVersions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SeriesType") != m.end() && !m["SeriesType"].empty()) {
      seriesType = make_shared<string>(boost::any_cast<string>(m["SeriesType"]));
    }
    if (m.find("SupportedEngineVersions") != m.end() && !m["SupportedEngineVersions"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedEngineVersions"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedEngineVersions"]));
        supportedEngineVersions = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesTypeSupportedEngineVersions>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesType() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesType>> supportedSeriesType{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypes() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedSeriesType) {
      vector<boost::any> temp1;
      for(auto item1:*supportedSeriesType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedSeriesType"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedSeriesType") != m.end() && !m["SupportedSeriesType"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedSeriesType"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedSeriesType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedSeriesType = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypesSupportedSeriesType>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypes() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionType : public Darabonba::Model {
public:
  shared_ptr<string> editionType{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypes> supportedSeriesTypes{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionType() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (editionType) {
      res["EditionType"] = boost::any(*editionType);
    }
    if (supportedSeriesTypes) {
      res["SupportedSeriesTypes"] = supportedSeriesTypes ? boost::any(supportedSeriesTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EditionType") != m.end() && !m["EditionType"].empty()) {
      editionType = make_shared<string>(boost::any_cast<string>(m["EditionType"]));
    }
    if (m.find("SupportedSeriesTypes") != m.end() && !m["SupportedSeriesTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedSeriesTypes"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedSeriesTypes"]));
        supportedSeriesTypes = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionTypeSupportedSeriesTypes>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionType() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionType>> supportedEditionType{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypes() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedEditionType) {
      vector<boost::any> temp1;
      for(auto item1:*supportedEditionType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedEditionType"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedEditionType") != m.end() && !m["SupportedEditionType"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedEditionType"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedEditionType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedEditionType = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypesSupportedEditionType>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypes() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypes> supportedEditionTypes{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (supportedEditionTypes) {
      res["SupportedEditionTypes"] = supportedEditionTypes ? boost::any(supportedEditionTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("SupportedEditionTypes") != m.end() && !m["SupportedEditionTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedEditionTypes"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedEditionTypes"]));
        supportedEditionTypes = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngineSupportedEditionTypes>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine>> supportedEngine{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedEngine) {
      vector<boost::any> temp1;
      for(auto item1:*supportedEngine){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedEngine"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedEngine") != m.end() && !m["SupportedEngine"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedEngine"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedEngine"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedEngine = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEnginesSupportedEngine>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneName{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines> supportedEngines{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    if (supportedEngines) {
      res["SupportedEngines"] = supportedEngines ? boost::any(supportedEngines->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
    if (m.find("SupportedEngines") != m.end() && !m["SupportedEngines"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedEngines"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedEngines"]));
        supportedEngines = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneSupportedEngines>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone>> availableZone{};

  DescribeAvailableResourceResponseBodyAvailableZones() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZone) {
      vector<boost::any> temp1;
      for(auto item1:*availableZone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableZone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZone") != m.end() && !m["AvailableZone"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableZone"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableZone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableZone = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZones() = default;
};
class DescribeAvailableResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZones> availableZones{};

  DescribeAvailableResourceResponseBody() {}

  explicit DescribeAvailableResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (availableZones) {
      res["AvailableZones"] = availableZones ? boost::any(availableZones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AvailableZones") != m.end() && !m["AvailableZones"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableZones"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableZones"]));
        availableZones = make_shared<DescribeAvailableResourceResponseBodyAvailableZones>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBody() = default;
};
class DescribeAvailableResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAvailableResourceResponseBody> body{};

  DescribeAvailableResourceResponse() {}

  explicit DescribeAvailableResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAvailableResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponse() = default;
};
class DescribeBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> backupRetentionPeriod{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredNextBackupTime{};
  shared_ptr<long> enableBackupLog{};

  DescribeBackupPolicyResponseBody() {}

  explicit DescribeBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredNextBackupTime) {
      res["PreferredNextBackupTime"] = boost::any(*preferredNextBackupTime);
    }
    if (enableBackupLog) {
      res["EnableBackupLog"] = boost::any(*enableBackupLog);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["BackupRetentionPeriod"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredNextBackupTime") != m.end() && !m["PreferredNextBackupTime"].empty()) {
      preferredNextBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredNextBackupTime"]));
    }
    if (m.find("EnableBackupLog") != m.end() && !m["EnableBackupLog"].empty()) {
      enableBackupLog = make_shared<long>(boost::any_cast<long>(m["EnableBackupLog"]));
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
class DescribeBackupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> backupId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> needAof{};

  DescribeBackupsRequest() {}

  explicit DescribeBackupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (needAof) {
      res["NeedAof"] = boost::any(*needAof);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<long>(boost::any_cast<long>(m["BackupId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("NeedAof") != m.end() && !m["NeedAof"].empty()) {
      needAof = make_shared<string>(boost::any_cast<string>(m["NeedAof"]));
    }
  }


  virtual ~DescribeBackupsRequest() = default;
};
class DescribeBackupsResponseBodyBackupsBackup : public Darabonba::Model {
public:
  shared_ptr<long> backupId{};
  shared_ptr<string> backupDBNames{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupEndTime{};
  shared_ptr<string> backupType{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupMethod{};
  shared_ptr<string> backupDownloadURL{};
  shared_ptr<long> backupSize{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> nodeInstanceId{};
  shared_ptr<string> backupIntranetDownloadURL{};

  DescribeBackupsResponseBodyBackupsBackup() {}

  explicit DescribeBackupsResponseBodyBackupsBackup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupDBNames) {
      res["BackupDBNames"] = boost::any(*backupDBNames);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupEndTime) {
      res["BackupEndTime"] = boost::any(*backupEndTime);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupDownloadURL) {
      res["BackupDownloadURL"] = boost::any(*backupDownloadURL);
    }
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (nodeInstanceId) {
      res["NodeInstanceId"] = boost::any(*nodeInstanceId);
    }
    if (backupIntranetDownloadURL) {
      res["BackupIntranetDownloadURL"] = boost::any(*backupIntranetDownloadURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<long>(boost::any_cast<long>(m["BackupId"]));
    }
    if (m.find("BackupDBNames") != m.end() && !m["BackupDBNames"].empty()) {
      backupDBNames = make_shared<string>(boost::any_cast<string>(m["BackupDBNames"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupEndTime") != m.end() && !m["BackupEndTime"].empty()) {
      backupEndTime = make_shared<string>(boost::any_cast<string>(m["BackupEndTime"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupDownloadURL") != m.end() && !m["BackupDownloadURL"].empty()) {
      backupDownloadURL = make_shared<string>(boost::any_cast<string>(m["BackupDownloadURL"]));
    }
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<long>(boost::any_cast<long>(m["BackupSize"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("NodeInstanceId") != m.end() && !m["NodeInstanceId"].empty()) {
      nodeInstanceId = make_shared<string>(boost::any_cast<string>(m["NodeInstanceId"]));
    }
    if (m.find("BackupIntranetDownloadURL") != m.end() && !m["BackupIntranetDownloadURL"].empty()) {
      backupIntranetDownloadURL = make_shared<string>(boost::any_cast<string>(m["BackupIntranetDownloadURL"]));
    }
  }


  virtual ~DescribeBackupsResponseBodyBackupsBackup() = default;
};
class DescribeBackupsResponseBodyBackups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupsResponseBodyBackupsBackup>> backup{};

  DescribeBackupsResponseBodyBackups() {}

  explicit DescribeBackupsResponseBodyBackups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backup) {
      vector<boost::any> temp1;
      for(auto item1:*backup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backup") != m.end() && !m["Backup"].empty()) {
      if (typeid(vector<boost::any>) == m["Backup"].type()) {
        vector<DescribeBackupsResponseBodyBackupsBackup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupsResponseBodyBackupsBackup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backup = make_shared<vector<DescribeBackupsResponseBodyBackupsBackup>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupsResponseBodyBackups() = default;
};
class DescribeBackupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeBackupsResponseBodyBackups> backups{};

  DescribeBackupsResponseBody() {}

  explicit DescribeBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (backups) {
      res["Backups"] = backups ? boost::any(backups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Backups") != m.end() && !m["Backups"].empty()) {
      if (typeid(map<string, boost::any>) == m["Backups"].type()) {
        DescribeBackupsResponseBodyBackups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Backups"]));
        backups = make_shared<DescribeBackupsResponseBodyBackups>(model1);
      }
    }
  }


  virtual ~DescribeBackupsResponseBody() = default;
};
class DescribeBackupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupsResponseBody> body{};

  DescribeBackupsResponse() {}

  explicit DescribeBackupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupsResponse() = default;
};
class DescribeBackupTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> backupJobId{};
  shared_ptr<string> jobMode{};

  DescribeBackupTasksRequest() {}

  explicit DescribeBackupTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (backupJobId) {
      res["BackupJobId"] = boost::any(*backupJobId);
    }
    if (jobMode) {
      res["JobMode"] = boost::any(*jobMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("BackupJobId") != m.end() && !m["BackupJobId"].empty()) {
      backupJobId = make_shared<string>(boost::any_cast<string>(m["BackupJobId"]));
    }
    if (m.find("JobMode") != m.end() && !m["JobMode"].empty()) {
      jobMode = make_shared<string>(boost::any_cast<string>(m["JobMode"]));
    }
  }


  virtual ~DescribeBackupTasksRequest() = default;
};
class DescribeBackupTasksResponseBodyBackupJobs : public Darabonba::Model {
public:
  shared_ptr<long> backupJobID{};
  shared_ptr<string> backupProgressStatus{};
  shared_ptr<string> jobMode{};
  shared_ptr<string> process{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskAction{};

  DescribeBackupTasksResponseBodyBackupJobs() {}

  explicit DescribeBackupTasksResponseBodyBackupJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupJobID) {
      res["BackupJobID"] = boost::any(*backupJobID);
    }
    if (backupProgressStatus) {
      res["BackupProgressStatus"] = boost::any(*backupProgressStatus);
    }
    if (jobMode) {
      res["JobMode"] = boost::any(*jobMode);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupJobID") != m.end() && !m["BackupJobID"].empty()) {
      backupJobID = make_shared<long>(boost::any_cast<long>(m["BackupJobID"]));
    }
    if (m.find("BackupProgressStatus") != m.end() && !m["BackupProgressStatus"].empty()) {
      backupProgressStatus = make_shared<string>(boost::any_cast<string>(m["BackupProgressStatus"]));
    }
    if (m.find("JobMode") != m.end() && !m["JobMode"].empty()) {
      jobMode = make_shared<string>(boost::any_cast<string>(m["JobMode"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<string>(boost::any_cast<string>(m["Process"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
  }


  virtual ~DescribeBackupTasksResponseBodyBackupJobs() = default;
};
class DescribeBackupTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<DescribeBackupTasksResponseBodyBackupJobs>> backupJobs{};

  DescribeBackupTasksResponseBody() {}

  explicit DescribeBackupTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (backupJobs) {
      vector<boost::any> temp1;
      for(auto item1:*backupJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackupJobs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("BackupJobs") != m.end() && !m["BackupJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["BackupJobs"].type()) {
        vector<DescribeBackupTasksResponseBodyBackupJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackupJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupTasksResponseBodyBackupJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backupJobs = make_shared<vector<DescribeBackupTasksResponseBodyBackupJobs>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupTasksResponseBody() = default;
};
class DescribeBackupTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupTasksResponseBody> body{};

  DescribeBackupTasksResponse() {}

  explicit DescribeBackupTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupTasksResponse() = default;
};
class DescribeCacheAnalysisReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> date{};
  shared_ptr<string> analysisType{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumbers{};
  shared_ptr<string> nodeId{};

  DescribeCacheAnalysisReportRequest() {}

  explicit DescribeCacheAnalysisReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (analysisType) {
      res["AnalysisType"] = boost::any(*analysisType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumbers) {
      res["PageNumbers"] = boost::any(*pageNumbers);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("AnalysisType") != m.end() && !m["AnalysisType"].empty()) {
      analysisType = make_shared<string>(boost::any_cast<string>(m["AnalysisType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumbers") != m.end() && !m["PageNumbers"].empty()) {
      pageNumbers = make_shared<long>(boost::any_cast<long>(m["PageNumbers"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~DescribeCacheAnalysisReportRequest() = default;
};
class DescribeCacheAnalysisReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<vector<map<string, string>>> hotKeys{};
  shared_ptr<vector<map<string, string>>> bigKeys{};

  DescribeCacheAnalysisReportResponseBody() {}

  explicit DescribeCacheAnalysisReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (hotKeys) {
      res["HotKeys"] = boost::any(*hotKeys);
    }
    if (bigKeys) {
      res["BigKeys"] = boost::any(*bigKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("HotKeys") != m.end() && !m["HotKeys"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["HotKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HotKeys"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      hotKeys = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("BigKeys") != m.end() && !m["BigKeys"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["BigKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BigKeys"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      bigKeys = make_shared<vector<map<string, string>>>(toVec1);
    }
  }


  virtual ~DescribeCacheAnalysisReportResponseBody() = default;
};
class DescribeCacheAnalysisReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCacheAnalysisReportResponseBody> body{};

  DescribeCacheAnalysisReportResponse() {}

  explicit DescribeCacheAnalysisReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCacheAnalysisReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCacheAnalysisReportResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCacheAnalysisReportResponse() = default;
};
class DescribeCacheAnalysisReportListRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> days{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumbers{};
  shared_ptr<string> nodeId{};

  DescribeCacheAnalysisReportListRequest() {}

  explicit DescribeCacheAnalysisReportListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (days) {
      res["Days"] = boost::any(*days);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumbers) {
      res["PageNumbers"] = boost::any(*pageNumbers);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Days") != m.end() && !m["Days"].empty()) {
      days = make_shared<long>(boost::any_cast<long>(m["Days"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumbers") != m.end() && !m["PageNumbers"].empty()) {
      pageNumbers = make_shared<long>(boost::any_cast<long>(m["PageNumbers"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~DescribeCacheAnalysisReportListRequest() = default;
};
class DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasksTask : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasksTask() {}

  explicit DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasksTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasksTask() = default;
};
class DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasksTask>> task{};

  DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasks() {}

  explicit DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (task) {
      vector<boost::any> temp1;
      for(auto item1:*task){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Task"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(vector<boost::any>) == m["Task"].type()) {
        vector<DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasksTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Task"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasksTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        task = make_shared<vector<DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasksTask>>(expect1);
      }
    }
  }


  virtual ~DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasks() = default;
};
class DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTask : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasks> tasks{};

  DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTask() {}

  explicit DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (tasks) {
      res["Tasks"] = tasks ? boost::any(tasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tasks"].type()) {
        DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tasks"]));
        tasks = make_shared<DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTaskTasks>(model1);
      }
    }
  }


  virtual ~DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTask() = default;
};
class DescribeCacheAnalysisReportListResponseBodyDailyTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTask>> dailyTask{};

  DescribeCacheAnalysisReportListResponseBodyDailyTasks() {}

  explicit DescribeCacheAnalysisReportListResponseBodyDailyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dailyTask) {
      vector<boost::any> temp1;
      for(auto item1:*dailyTask){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DailyTask"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DailyTask") != m.end() && !m["DailyTask"].empty()) {
      if (typeid(vector<boost::any>) == m["DailyTask"].type()) {
        vector<DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DailyTask"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dailyTask = make_shared<vector<DescribeCacheAnalysisReportListResponseBodyDailyTasksDailyTask>>(expect1);
      }
    }
  }


  virtual ~DescribeCacheAnalysisReportListResponseBodyDailyTasks() = default;
};
class DescribeCacheAnalysisReportListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<DescribeCacheAnalysisReportListResponseBodyDailyTasks> dailyTasks{};

  DescribeCacheAnalysisReportListResponseBody() {}

  explicit DescribeCacheAnalysisReportListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dailyTasks) {
      res["DailyTasks"] = dailyTasks ? boost::any(dailyTasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DailyTasks") != m.end() && !m["DailyTasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["DailyTasks"].type()) {
        DescribeCacheAnalysisReportListResponseBodyDailyTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DailyTasks"]));
        dailyTasks = make_shared<DescribeCacheAnalysisReportListResponseBodyDailyTasks>(model1);
      }
    }
  }


  virtual ~DescribeCacheAnalysisReportListResponseBody() = default;
};
class DescribeCacheAnalysisReportListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCacheAnalysisReportListResponseBody> body{};

  DescribeCacheAnalysisReportListResponse() {}

  explicit DescribeCacheAnalysisReportListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCacheAnalysisReportListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCacheAnalysisReportListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCacheAnalysisReportListResponse() = default;
};
class DescribeClusterMemberInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  DescribeClusterMemberInfoRequest() {}

  explicit DescribeClusterMemberInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeClusterMemberInfoRequest() = default;
};
class DescribeClusterMemberInfoResponseBodyClusterChildren : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> bizType{};
  shared_ptr<long> replicaSize{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<long> diskSizeMB{};
  shared_ptr<string> classCode{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<long> binlogRetentionDays{};
  shared_ptr<string> userId{};
  shared_ptr<string> service{};
  shared_ptr<long> capacity{};
  shared_ptr<long> bandWidth{};
  shared_ptr<long> connections{};
  shared_ptr<long> currentBandWidth{};

  DescribeClusterMemberInfoResponseBodyClusterChildren() {}

  explicit DescribeClusterMemberInfoResponseBodyClusterChildren(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (replicaSize) {
      res["ReplicaSize"] = boost::any(*replicaSize);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (diskSizeMB) {
      res["DiskSizeMB"] = boost::any(*diskSizeMB);
    }
    if (classCode) {
      res["ClassCode"] = boost::any(*classCode);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (binlogRetentionDays) {
      res["BinlogRetentionDays"] = boost::any(*binlogRetentionDays);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (bandWidth) {
      res["BandWidth"] = boost::any(*bandWidth);
    }
    if (connections) {
      res["Connections"] = boost::any(*connections);
    }
    if (currentBandWidth) {
      res["CurrentBandWidth"] = boost::any(*currentBandWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("ReplicaSize") != m.end() && !m["ReplicaSize"].empty()) {
      replicaSize = make_shared<long>(boost::any_cast<long>(m["ReplicaSize"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("DiskSizeMB") != m.end() && !m["DiskSizeMB"].empty()) {
      diskSizeMB = make_shared<long>(boost::any_cast<long>(m["DiskSizeMB"]));
    }
    if (m.find("ClassCode") != m.end() && !m["ClassCode"].empty()) {
      classCode = make_shared<string>(boost::any_cast<string>(m["ClassCode"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("BinlogRetentionDays") != m.end() && !m["BinlogRetentionDays"].empty()) {
      binlogRetentionDays = make_shared<long>(boost::any_cast<long>(m["BinlogRetentionDays"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("BandWidth") != m.end() && !m["BandWidth"].empty()) {
      bandWidth = make_shared<long>(boost::any_cast<long>(m["BandWidth"]));
    }
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      connections = make_shared<long>(boost::any_cast<long>(m["Connections"]));
    }
    if (m.find("CurrentBandWidth") != m.end() && !m["CurrentBandWidth"].empty()) {
      currentBandWidth = make_shared<long>(boost::any_cast<long>(m["CurrentBandWidth"]));
    }
  }


  virtual ~DescribeClusterMemberInfoResponseBodyClusterChildren() = default;
};
class DescribeClusterMemberInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeClusterMemberInfoResponseBodyClusterChildren>> clusterChildren{};

  DescribeClusterMemberInfoResponseBody() {}

  explicit DescribeClusterMemberInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (clusterChildren) {
      vector<boost::any> temp1;
      for(auto item1:*clusterChildren){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClusterChildren"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ClusterChildren") != m.end() && !m["ClusterChildren"].empty()) {
      if (typeid(vector<boost::any>) == m["ClusterChildren"].type()) {
        vector<DescribeClusterMemberInfoResponseBodyClusterChildren> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClusterChildren"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterMemberInfoResponseBodyClusterChildren model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterChildren = make_shared<vector<DescribeClusterMemberInfoResponseBodyClusterChildren>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterMemberInfoResponseBody() = default;
};
class DescribeClusterMemberInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterMemberInfoResponseBody> body{};

  DescribeClusterMemberInfoResponse() {}

  explicit DescribeClusterMemberInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterMemberInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterMemberInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterMemberInfoResponse() = default;
};
class DescribeDBInstanceNetInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  DescribeDBInstanceNetInfoRequest() {}

  explicit DescribeDBInstanceNetInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoRequest() = default;
};
class DescribeDBInstanceNetInfoResponseBodyNetInfoItemsInstanceNetInfo : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> port{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> DBInstanceNetType{};
  shared_ptr<string> VPCInstanceId{};
  shared_ptr<string> IPType{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> upgradeable{};
  shared_ptr<long> directConnection{};

  DescribeDBInstanceNetInfoResponseBodyNetInfoItemsInstanceNetInfo() {}

  explicit DescribeDBInstanceNetInfoResponseBodyNetInfoItemsInstanceNetInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (DBInstanceNetType) {
      res["DBInstanceNetType"] = boost::any(*DBInstanceNetType);
    }
    if (VPCInstanceId) {
      res["VPCInstanceId"] = boost::any(*VPCInstanceId);
    }
    if (IPType) {
      res["IPType"] = boost::any(*IPType);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (upgradeable) {
      res["Upgradeable"] = boost::any(*upgradeable);
    }
    if (directConnection) {
      res["DirectConnection"] = boost::any(*directConnection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("DBInstanceNetType") != m.end() && !m["DBInstanceNetType"].empty()) {
      DBInstanceNetType = make_shared<string>(boost::any_cast<string>(m["DBInstanceNetType"]));
    }
    if (m.find("VPCInstanceId") != m.end() && !m["VPCInstanceId"].empty()) {
      VPCInstanceId = make_shared<string>(boost::any_cast<string>(m["VPCInstanceId"]));
    }
    if (m.find("IPType") != m.end() && !m["IPType"].empty()) {
      IPType = make_shared<string>(boost::any_cast<string>(m["IPType"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Upgradeable") != m.end() && !m["Upgradeable"].empty()) {
      upgradeable = make_shared<string>(boost::any_cast<string>(m["Upgradeable"]));
    }
    if (m.find("DirectConnection") != m.end() && !m["DirectConnection"].empty()) {
      directConnection = make_shared<long>(boost::any_cast<long>(m["DirectConnection"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBodyNetInfoItemsInstanceNetInfo() = default;
};
class DescribeDBInstanceNetInfoResponseBodyNetInfoItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceNetInfoResponseBodyNetInfoItemsInstanceNetInfo>> instanceNetInfo{};

  DescribeDBInstanceNetInfoResponseBodyNetInfoItems() {}

  explicit DescribeDBInstanceNetInfoResponseBodyNetInfoItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceNetInfo) {
      vector<boost::any> temp1;
      for(auto item1:*instanceNetInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceNetInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceNetInfo") != m.end() && !m["InstanceNetInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceNetInfo"].type()) {
        vector<DescribeDBInstanceNetInfoResponseBodyNetInfoItemsInstanceNetInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceNetInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceNetInfoResponseBodyNetInfoItemsInstanceNetInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceNetInfo = make_shared<vector<DescribeDBInstanceNetInfoResponseBodyNetInfoItemsInstanceNetInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBodyNetInfoItems() = default;
};
class DescribeDBInstanceNetInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<DescribeDBInstanceNetInfoResponseBodyNetInfoItems> netInfoItems{};

  DescribeDBInstanceNetInfoResponseBody() {}

  explicit DescribeDBInstanceNetInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (netInfoItems) {
      res["NetInfoItems"] = netInfoItems ? boost::any(netInfoItems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("NetInfoItems") != m.end() && !m["NetInfoItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetInfoItems"].type()) {
        DescribeDBInstanceNetInfoResponseBodyNetInfoItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetInfoItems"]));
        netInfoItems = make_shared<DescribeDBInstanceNetInfoResponseBodyNetInfoItems>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBody() = default;
};
class DescribeDBInstanceNetInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceNetInfoResponseBody> body{};

  DescribeDBInstanceNetInfoResponse() {}

  explicit DescribeDBInstanceNetInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceNetInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceNetInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponse() = default;
};
class DescribeDedicatedClusterInstanceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceStatus{};
  shared_ptr<string> instanceNetType{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> dedicatedHostName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeDedicatedClusterInstanceListRequest() {}

  explicit DescribeDedicatedClusterInstanceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceNetType) {
      res["InstanceNetType"] = boost::any(*instanceNetType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dedicatedHostName) {
      res["DedicatedHostName"] = boost::any(*dedicatedHostName);
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
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<long>(boost::any_cast<long>(m["InstanceStatus"]));
    }
    if (m.find("InstanceNetType") != m.end() && !m["InstanceNetType"].empty()) {
      instanceNetType = make_shared<string>(boost::any_cast<string>(m["InstanceNetType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DedicatedHostName") != m.end() && !m["DedicatedHostName"].empty()) {
      dedicatedHostName = make_shared<string>(boost::any_cast<string>(m["DedicatedHostName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeDedicatedClusterInstanceListRequest() = default;
};
class DescribeDedicatedClusterInstanceListResponseBodyInstancesInstanceNodeList : public Darabonba::Model {
public:
  shared_ptr<string> nodeIp{};
  shared_ptr<string> dedicatedHostName{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> port{};
  shared_ptr<string> role{};
  shared_ptr<long> nodeId{};

  DescribeDedicatedClusterInstanceListResponseBodyInstancesInstanceNodeList() {}

  explicit DescribeDedicatedClusterInstanceListResponseBodyInstancesInstanceNodeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeIp) {
      res["NodeIp"] = boost::any(*nodeIp);
    }
    if (dedicatedHostName) {
      res["DedicatedHostName"] = boost::any(*dedicatedHostName);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeIp") != m.end() && !m["NodeIp"].empty()) {
      nodeIp = make_shared<string>(boost::any_cast<string>(m["NodeIp"]));
    }
    if (m.find("DedicatedHostName") != m.end() && !m["DedicatedHostName"].empty()) {
      dedicatedHostName = make_shared<string>(boost::any_cast<string>(m["DedicatedHostName"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
  }


  virtual ~DescribeDedicatedClusterInstanceListResponseBodyInstancesInstanceNodeList() = default;
};
class DescribeDedicatedClusterInstanceListResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<long> characterType{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> connectionDomain{};
  shared_ptr<string> createTime{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> storageType{};
  shared_ptr<vector<DescribeDedicatedClusterInstanceListResponseBodyInstancesInstanceNodeList>> instanceNodeList{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> bandWidth{};
  shared_ptr<long> currentBandWidth{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> engine{};
  shared_ptr<long> shardCount{};
  shared_ptr<string> customId{};
  shared_ptr<string> clusterId{};

  DescribeDedicatedClusterInstanceListResponseBodyInstances() {}

  explicit DescribeDedicatedClusterInstanceListResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (connectionDomain) {
      res["ConnectionDomain"] = boost::any(*connectionDomain);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (instanceNodeList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceNodeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceNodeList"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (bandWidth) {
      res["BandWidth"] = boost::any(*bandWidth);
    }
    if (currentBandWidth) {
      res["CurrentBandWidth"] = boost::any(*currentBandWidth);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (shardCount) {
      res["ShardCount"] = boost::any(*shardCount);
    }
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<long>(boost::any_cast<long>(m["CharacterType"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("ConnectionDomain") != m.end() && !m["ConnectionDomain"].empty()) {
      connectionDomain = make_shared<string>(boost::any_cast<string>(m["ConnectionDomain"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("InstanceNodeList") != m.end() && !m["InstanceNodeList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceNodeList"].type()) {
        vector<DescribeDedicatedClusterInstanceListResponseBodyInstancesInstanceNodeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceNodeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedClusterInstanceListResponseBodyInstancesInstanceNodeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceNodeList = make_shared<vector<DescribeDedicatedClusterInstanceListResponseBodyInstancesInstanceNodeList>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("BandWidth") != m.end() && !m["BandWidth"].empty()) {
      bandWidth = make_shared<long>(boost::any_cast<long>(m["BandWidth"]));
    }
    if (m.find("CurrentBandWidth") != m.end() && !m["CurrentBandWidth"].empty()) {
      currentBandWidth = make_shared<long>(boost::any_cast<long>(m["CurrentBandWidth"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ShardCount") != m.end() && !m["ShardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["ShardCount"]));
    }
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeDedicatedClusterInstanceListResponseBodyInstances() = default;
};
class DescribeDedicatedClusterInstanceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDedicatedClusterInstanceListResponseBodyInstances>> instances{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};

  DescribeDedicatedClusterInstanceListResponseBody() {}

  explicit DescribeDedicatedClusterInstanceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeDedicatedClusterInstanceListResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedClusterInstanceListResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeDedicatedClusterInstanceListResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeDedicatedClusterInstanceListResponseBody() = default;
};
class DescribeDedicatedClusterInstanceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDedicatedClusterInstanceListResponseBody> body{};

  DescribeDedicatedClusterInstanceListResponse() {}

  explicit DescribeDedicatedClusterInstanceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDedicatedClusterInstanceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedClusterInstanceListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedClusterInstanceListResponse() = default;
};
class DescribeEngineVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  DescribeEngineVersionRequest() {}

  explicit DescribeEngineVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeEngineVersionRequest() = default;
};
class DescribeEngineVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> engine{};
  shared_ptr<bool> isLatestVersion{};
  shared_ptr<string> minorVersion{};
  shared_ptr<bool> enableUpgradeMinorVersion{};
  shared_ptr<string> majorVersion{};
  shared_ptr<bool> enableUpgradeMajorVersion{};

  DescribeEngineVersionResponseBody() {}

  explicit DescribeEngineVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (isLatestVersion) {
      res["IsLatestVersion"] = boost::any(*isLatestVersion);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (enableUpgradeMinorVersion) {
      res["EnableUpgradeMinorVersion"] = boost::any(*enableUpgradeMinorVersion);
    }
    if (majorVersion) {
      res["MajorVersion"] = boost::any(*majorVersion);
    }
    if (enableUpgradeMajorVersion) {
      res["EnableUpgradeMajorVersion"] = boost::any(*enableUpgradeMajorVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("IsLatestVersion") != m.end() && !m["IsLatestVersion"].empty()) {
      isLatestVersion = make_shared<bool>(boost::any_cast<bool>(m["IsLatestVersion"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("EnableUpgradeMinorVersion") != m.end() && !m["EnableUpgradeMinorVersion"].empty()) {
      enableUpgradeMinorVersion = make_shared<bool>(boost::any_cast<bool>(m["EnableUpgradeMinorVersion"]));
    }
    if (m.find("MajorVersion") != m.end() && !m["MajorVersion"].empty()) {
      majorVersion = make_shared<string>(boost::any_cast<string>(m["MajorVersion"]));
    }
    if (m.find("EnableUpgradeMajorVersion") != m.end() && !m["EnableUpgradeMajorVersion"].empty()) {
      enableUpgradeMajorVersion = make_shared<bool>(boost::any_cast<bool>(m["EnableUpgradeMajorVersion"]));
    }
  }


  virtual ~DescribeEngineVersionResponseBody() = default;
};
class DescribeEngineVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeEngineVersionResponseBody> body{};

  DescribeEngineVersionResponse() {}

  explicit DescribeEngineVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEngineVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEngineVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEngineVersionResponse() = default;
};
class DescribeGlobalDistributeCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> globalInstanceId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> subInstanceId{};

  DescribeGlobalDistributeCacheRequest() {}

  explicit DescribeGlobalDistributeCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (globalInstanceId) {
      res["GlobalInstanceId"] = boost::any(*globalInstanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (subInstanceId) {
      res["SubInstanceId"] = boost::any(*subInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("GlobalInstanceId") != m.end() && !m["GlobalInstanceId"].empty()) {
      globalInstanceId = make_shared<string>(boost::any_cast<string>(m["GlobalInstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("SubInstanceId") != m.end() && !m["SubInstanceId"].empty()) {
      subInstanceId = make_shared<string>(boost::any_cast<string>(m["SubInstanceId"]));
    }
  }


  virtual ~DescribeGlobalDistributeCacheRequest() = default;
};
class DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCachesSubInstances : public Darabonba::Model {
public:
  shared_ptr<string> globalInstanceId{};
  shared_ptr<string> instanceID{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> instanceClass{};

  DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCachesSubInstances() {}

  explicit DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCachesSubInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (globalInstanceId) {
      res["GlobalInstanceId"] = boost::any(*globalInstanceId);
    }
    if (instanceID) {
      res["InstanceID"] = boost::any(*instanceID);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GlobalInstanceId") != m.end() && !m["GlobalInstanceId"].empty()) {
      globalInstanceId = make_shared<string>(boost::any_cast<string>(m["GlobalInstanceId"]));
    }
    if (m.find("InstanceID") != m.end() && !m["InstanceID"].empty()) {
      instanceID = make_shared<string>(boost::any_cast<string>(m["InstanceID"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
  }


  virtual ~DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCachesSubInstances() = default;
};
class DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCaches : public Darabonba::Model {
public:
  shared_ptr<string> globalInstanceId{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCachesSubInstances>> subInstances{};

  DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCaches() {}

  explicit DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCaches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (globalInstanceId) {
      res["GlobalInstanceId"] = boost::any(*globalInstanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subInstances) {
      vector<boost::any> temp1;
      for(auto item1:*subInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubInstances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GlobalInstanceId") != m.end() && !m["GlobalInstanceId"].empty()) {
      globalInstanceId = make_shared<string>(boost::any_cast<string>(m["GlobalInstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubInstances") != m.end() && !m["SubInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["SubInstances"].type()) {
        vector<DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCachesSubInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCachesSubInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subInstances = make_shared<vector<DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCachesSubInstances>>(expect1);
      }
    }
  }


  virtual ~DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCaches() = default;
};
class DescribeGlobalDistributeCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCaches>> globalDistributeCaches{};

  DescribeGlobalDistributeCacheResponseBody() {}

  explicit DescribeGlobalDistributeCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (globalDistributeCaches) {
      vector<boost::any> temp1;
      for(auto item1:*globalDistributeCaches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GlobalDistributeCaches"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("GlobalDistributeCaches") != m.end() && !m["GlobalDistributeCaches"].empty()) {
      if (typeid(vector<boost::any>) == m["GlobalDistributeCaches"].type()) {
        vector<DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCaches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GlobalDistributeCaches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCaches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        globalDistributeCaches = make_shared<vector<DescribeGlobalDistributeCacheResponseBodyGlobalDistributeCaches>>(expect1);
      }
    }
  }


  virtual ~DescribeGlobalDistributeCacheResponseBody() = default;
};
class DescribeGlobalDistributeCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGlobalDistributeCacheResponseBody> body{};

  DescribeGlobalDistributeCacheResponse() {}

  explicit DescribeGlobalDistributeCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGlobalDistributeCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGlobalDistributeCacheResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGlobalDistributeCacheResponse() = default;
};
class DescribeHistoryMonitorValuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> intervalForHistory{};
  shared_ptr<string> monitorKeys{};
  shared_ptr<string> nodeId{};

  DescribeHistoryMonitorValuesRequest() {}

  explicit DescribeHistoryMonitorValuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (intervalForHistory) {
      res["IntervalForHistory"] = boost::any(*intervalForHistory);
    }
    if (monitorKeys) {
      res["MonitorKeys"] = boost::any(*monitorKeys);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("IntervalForHistory") != m.end() && !m["IntervalForHistory"].empty()) {
      intervalForHistory = make_shared<string>(boost::any_cast<string>(m["IntervalForHistory"]));
    }
    if (m.find("MonitorKeys") != m.end() && !m["MonitorKeys"].empty()) {
      monitorKeys = make_shared<string>(boost::any_cast<string>(m["MonitorKeys"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~DescribeHistoryMonitorValuesRequest() = default;
};
class DescribeHistoryMonitorValuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> monitorHistory{};

  DescribeHistoryMonitorValuesResponseBody() {}

  explicit DescribeHistoryMonitorValuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (monitorHistory) {
      res["MonitorHistory"] = boost::any(*monitorHistory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MonitorHistory") != m.end() && !m["MonitorHistory"].empty()) {
      monitorHistory = make_shared<string>(boost::any_cast<string>(m["MonitorHistory"]));
    }
  }


  virtual ~DescribeHistoryMonitorValuesResponseBody() = default;
};
class DescribeHistoryMonitorValuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeHistoryMonitorValuesResponseBody> body{};

  DescribeHistoryMonitorValuesResponse() {}

  explicit DescribeHistoryMonitorValuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHistoryMonitorValuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHistoryMonitorValuesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHistoryMonitorValuesResponse() = default;
};
class DescribeInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  DescribeInstanceAttributeRequest() {}

  explicit DescribeInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeInstanceAttributeRequest() = default;
};
class DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTagsTag() {}

  explicit DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTagsTag() = default;
};
class DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTagsTag>> tag{};

  DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTags() {}

  explicit DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTags() = default;
};
class DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttribute : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> connectionDomain{};
  shared_ptr<long> port{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<long> capacity{};
  shared_ptr<string> instanceClass{};
  shared_ptr<long> QPS{};
  shared_ptr<long> bandwidth{};
  shared_ptr<long> connections{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> config{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> networkType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> privateIp{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> hasRenewChangeOrder{};
  shared_ptr<bool> isRds{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> availabilityValue{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> architectureType{};
  shared_ptr<string> packageType{};
  shared_ptr<string> replicaId{};
  shared_ptr<string> vpcAuthMode{};
  shared_ptr<string> auditLogRetention{};
  shared_ptr<string> replicationMode{};
  shared_ptr<string> vpcCloudInstanceId{};
  shared_ptr<bool> instanceReleaseProtection{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> shardCount{};
  shared_ptr<string> globalInstanceId{};
  shared_ptr<DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTags> tags{};

  DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttribute() {}

  explicit DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (connectionDomain) {
      res["ConnectionDomain"] = boost::any(*connectionDomain);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (QPS) {
      res["QPS"] = boost::any(*QPS);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (connections) {
      res["Connections"] = boost::any(*connections);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (privateIp) {
      res["PrivateIp"] = boost::any(*privateIp);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hasRenewChangeOrder) {
      res["HasRenewChangeOrder"] = boost::any(*hasRenewChangeOrder);
    }
    if (isRds) {
      res["IsRds"] = boost::any(*isRds);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (availabilityValue) {
      res["AvailabilityValue"] = boost::any(*availabilityValue);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (architectureType) {
      res["ArchitectureType"] = boost::any(*architectureType);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (replicaId) {
      res["ReplicaId"] = boost::any(*replicaId);
    }
    if (vpcAuthMode) {
      res["VpcAuthMode"] = boost::any(*vpcAuthMode);
    }
    if (auditLogRetention) {
      res["AuditLogRetention"] = boost::any(*auditLogRetention);
    }
    if (replicationMode) {
      res["ReplicationMode"] = boost::any(*replicationMode);
    }
    if (vpcCloudInstanceId) {
      res["VpcCloudInstanceId"] = boost::any(*vpcCloudInstanceId);
    }
    if (instanceReleaseProtection) {
      res["InstanceReleaseProtection"] = boost::any(*instanceReleaseProtection);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shardCount) {
      res["ShardCount"] = boost::any(*shardCount);
    }
    if (globalInstanceId) {
      res["GlobalInstanceId"] = boost::any(*globalInstanceId);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ConnectionDomain") != m.end() && !m["ConnectionDomain"].empty()) {
      connectionDomain = make_shared<string>(boost::any_cast<string>(m["ConnectionDomain"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("QPS") != m.end() && !m["QPS"].empty()) {
      QPS = make_shared<long>(boost::any_cast<long>(m["QPS"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      connections = make_shared<long>(boost::any_cast<long>(m["Connections"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("PrivateIp") != m.end() && !m["PrivateIp"].empty()) {
      privateIp = make_shared<string>(boost::any_cast<string>(m["PrivateIp"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("HasRenewChangeOrder") != m.end() && !m["HasRenewChangeOrder"].empty()) {
      hasRenewChangeOrder = make_shared<string>(boost::any_cast<string>(m["HasRenewChangeOrder"]));
    }
    if (m.find("IsRds") != m.end() && !m["IsRds"].empty()) {
      isRds = make_shared<bool>(boost::any_cast<bool>(m["IsRds"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("AvailabilityValue") != m.end() && !m["AvailabilityValue"].empty()) {
      availabilityValue = make_shared<string>(boost::any_cast<string>(m["AvailabilityValue"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("ArchitectureType") != m.end() && !m["ArchitectureType"].empty()) {
      architectureType = make_shared<string>(boost::any_cast<string>(m["ArchitectureType"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("ReplicaId") != m.end() && !m["ReplicaId"].empty()) {
      replicaId = make_shared<string>(boost::any_cast<string>(m["ReplicaId"]));
    }
    if (m.find("VpcAuthMode") != m.end() && !m["VpcAuthMode"].empty()) {
      vpcAuthMode = make_shared<string>(boost::any_cast<string>(m["VpcAuthMode"]));
    }
    if (m.find("AuditLogRetention") != m.end() && !m["AuditLogRetention"].empty()) {
      auditLogRetention = make_shared<string>(boost::any_cast<string>(m["AuditLogRetention"]));
    }
    if (m.find("ReplicationMode") != m.end() && !m["ReplicationMode"].empty()) {
      replicationMode = make_shared<string>(boost::any_cast<string>(m["ReplicationMode"]));
    }
    if (m.find("VpcCloudInstanceId") != m.end() && !m["VpcCloudInstanceId"].empty()) {
      vpcCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcCloudInstanceId"]));
    }
    if (m.find("InstanceReleaseProtection") != m.end() && !m["InstanceReleaseProtection"].empty()) {
      instanceReleaseProtection = make_shared<bool>(boost::any_cast<bool>(m["InstanceReleaseProtection"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShardCount") != m.end() && !m["ShardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["ShardCount"]));
    }
    if (m.find("GlobalInstanceId") != m.end() && !m["GlobalInstanceId"].empty()) {
      globalInstanceId = make_shared<string>(boost::any_cast<string>(m["GlobalInstanceId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttributeTags>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttribute() = default;
};
class DescribeInstanceAttributeResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttribute>> DBInstanceAttribute{};

  DescribeInstanceAttributeResponseBodyInstances() {}

  explicit DescribeInstanceAttributeResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceAttribute") != m.end() && !m["DBInstanceAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceAttribute"].type()) {
        vector<DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceAttribute = make_shared<vector<DescribeInstanceAttributeResponseBodyInstancesDBInstanceAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceAttributeResponseBodyInstances() = default;
};
class DescribeInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInstanceAttributeResponseBodyInstances> instances{};

  DescribeInstanceAttributeResponseBody() {}

  explicit DescribeInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instances) {
      res["Instances"] = instances ? boost::any(instances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instances"].type()) {
        DescribeInstanceAttributeResponseBodyInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instances"]));
        instances = make_shared<DescribeInstanceAttributeResponseBodyInstances>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAttributeResponseBody() = default;
};
class DescribeInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceAttributeResponseBody> body{};

  DescribeInstanceAttributeResponse() {}

  explicit DescribeInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAttributeResponse() = default;
};
class DescribeInstanceAutoRenewalAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> ownerAccount{};

  DescribeInstanceAutoRenewalAttributeRequest() {}

  explicit DescribeInstanceAutoRenewalAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DescribeInstanceAutoRenewalAttributeRequest() = default;
};
class DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> duration{};
  shared_ptr<string> autoRenew{};

  DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem() {}

  explicit DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
  }


  virtual ~DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem() = default;
};
class DescribeInstanceAutoRenewalAttributeResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem>> item{};

  DescribeInstanceAutoRenewalAttributeResponseBodyItems() {}

  explicit DescribeInstanceAutoRenewalAttributeResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceAutoRenewalAttributeResponseBodyItems() = default;
};
class DescribeInstanceAutoRenewalAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> totalRecordCount{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<DescribeInstanceAutoRenewalAttributeResponseBodyItems> items{};

  DescribeInstanceAutoRenewalAttributeResponseBody() {}

  explicit DescribeInstanceAutoRenewalAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeInstanceAutoRenewalAttributeResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeInstanceAutoRenewalAttributeResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAutoRenewalAttributeResponseBody() = default;
};
class DescribeInstanceAutoRenewalAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceAutoRenewalAttributeResponseBody> body{};

  DescribeInstanceAutoRenewalAttributeResponse() {}

  explicit DescribeInstanceAutoRenewalAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceAutoRenewalAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceAutoRenewalAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAutoRenewalAttributeResponse() = default;
};
class DescribeInstanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  DescribeInstanceConfigRequest() {}

  explicit DescribeInstanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeInstanceConfigRequest() = default;
};
class DescribeInstanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> config{};

  DescribeInstanceConfigResponseBody() {}

  explicit DescribeInstanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
  }


  virtual ~DescribeInstanceConfigResponseBody() = default;
};
class DescribeInstanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceConfigResponseBody> body{};

  DescribeInstanceConfigResponse() {}

  explicit DescribeInstanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceConfigResponse() = default;
};
class DescribeInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstancesRequestTag() {}

  explicit DescribeInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstancesRequestTag() = default;
};
class DescribeInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceIds{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> networkType{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> searchKey{};
  shared_ptr<string> architectureType{};
  shared_ptr<string> expired{};
  shared_ptr<string> zoneId{};
  shared_ptr<vector<DescribeInstancesRequestTag>> tag{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> globalInstance{};
  shared_ptr<string> editionType{};

  DescribeInstancesRequest() {}

  explicit DescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (architectureType) {
      res["ArchitectureType"] = boost::any(*architectureType);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (globalInstance) {
      res["GlobalInstance"] = boost::any(*globalInstance);
    }
    if (editionType) {
      res["EditionType"] = boost::any(*editionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("ArchitectureType") != m.end() && !m["ArchitectureType"].empty()) {
      architectureType = make_shared<string>(boost::any_cast<string>(m["ArchitectureType"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeInstancesRequestTag>>(expect1);
      }
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("GlobalInstance") != m.end() && !m["GlobalInstance"].empty()) {
      globalInstance = make_shared<bool>(boost::any_cast<bool>(m["GlobalInstance"]));
    }
    if (m.find("EditionType") != m.end() && !m["EditionType"].empty()) {
      editionType = make_shared<string>(boost::any_cast<string>(m["EditionType"]));
    }
  }


  virtual ~DescribeInstancesRequest() = default;
};
class DescribeInstancesResponseBodyInstancesKVStoreInstanceTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstancesResponseBodyInstancesKVStoreInstanceTagsTag() {}

  explicit DescribeInstancesResponseBodyInstancesKVStoreInstanceTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstancesResponseBodyInstancesKVStoreInstanceTagsTag() = default;
};
class DescribeInstancesResponseBodyInstancesKVStoreInstanceTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstancesResponseBodyInstancesKVStoreInstanceTagsTag>> tag{};

  DescribeInstancesResponseBodyInstancesKVStoreInstanceTags() {}

  explicit DescribeInstancesResponseBodyInstancesKVStoreInstanceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeInstancesResponseBodyInstancesKVStoreInstanceTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstancesKVStoreInstanceTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeInstancesResponseBodyInstancesKVStoreInstanceTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesKVStoreInstanceTags() = default;
};
class DescribeInstancesResponseBodyInstancesKVStoreInstance : public Darabonba::Model {
public:
  shared_ptr<string> replacateId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> searchKey{};
  shared_ptr<string> connectionDomain{};
  shared_ptr<long> port{};
  shared_ptr<string> userName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<long> capacity{};
  shared_ptr<string> instanceClass{};
  shared_ptr<long> QPS{};
  shared_ptr<long> bandwidth{};
  shared_ptr<long> connections{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> config{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> networkType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> privateIp{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> hasRenewChangeOrder{};
  shared_ptr<bool> isRds{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> architectureType{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> packageType{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> destroyTime{};
  shared_ptr<string> connectionMode{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> shardCount{};
  shared_ptr<DescribeInstancesResponseBodyInstancesKVStoreInstanceTags> tags{};

  DescribeInstancesResponseBodyInstancesKVStoreInstance() {}

  explicit DescribeInstancesResponseBodyInstancesKVStoreInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (replacateId) {
      res["ReplacateId"] = boost::any(*replacateId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (connectionDomain) {
      res["ConnectionDomain"] = boost::any(*connectionDomain);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (QPS) {
      res["QPS"] = boost::any(*QPS);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (connections) {
      res["Connections"] = boost::any(*connections);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (privateIp) {
      res["PrivateIp"] = boost::any(*privateIp);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hasRenewChangeOrder) {
      res["HasRenewChangeOrder"] = boost::any(*hasRenewChangeOrder);
    }
    if (isRds) {
      res["IsRds"] = boost::any(*isRds);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (architectureType) {
      res["ArchitectureType"] = boost::any(*architectureType);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (destroyTime) {
      res["DestroyTime"] = boost::any(*destroyTime);
    }
    if (connectionMode) {
      res["ConnectionMode"] = boost::any(*connectionMode);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shardCount) {
      res["ShardCount"] = boost::any(*shardCount);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReplacateId") != m.end() && !m["ReplacateId"].empty()) {
      replacateId = make_shared<string>(boost::any_cast<string>(m["ReplacateId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("ConnectionDomain") != m.end() && !m["ConnectionDomain"].empty()) {
      connectionDomain = make_shared<string>(boost::any_cast<string>(m["ConnectionDomain"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("QPS") != m.end() && !m["QPS"].empty()) {
      QPS = make_shared<long>(boost::any_cast<long>(m["QPS"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      connections = make_shared<long>(boost::any_cast<long>(m["Connections"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("PrivateIp") != m.end() && !m["PrivateIp"].empty()) {
      privateIp = make_shared<string>(boost::any_cast<string>(m["PrivateIp"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("HasRenewChangeOrder") != m.end() && !m["HasRenewChangeOrder"].empty()) {
      hasRenewChangeOrder = make_shared<bool>(boost::any_cast<bool>(m["HasRenewChangeOrder"]));
    }
    if (m.find("IsRds") != m.end() && !m["IsRds"].empty()) {
      isRds = make_shared<bool>(boost::any_cast<bool>(m["IsRds"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("ArchitectureType") != m.end() && !m["ArchitectureType"].empty()) {
      architectureType = make_shared<string>(boost::any_cast<string>(m["ArchitectureType"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("DestroyTime") != m.end() && !m["DestroyTime"].empty()) {
      destroyTime = make_shared<string>(boost::any_cast<string>(m["DestroyTime"]));
    }
    if (m.find("ConnectionMode") != m.end() && !m["ConnectionMode"].empty()) {
      connectionMode = make_shared<string>(boost::any_cast<string>(m["ConnectionMode"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShardCount") != m.end() && !m["ShardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["ShardCount"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeInstancesResponseBodyInstancesKVStoreInstanceTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeInstancesResponseBodyInstancesKVStoreInstanceTags>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponseBodyInstancesKVStoreInstance() = default;
};
class DescribeInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstancesResponseBodyInstancesKVStoreInstance>> KVStoreInstance{};

  DescribeInstancesResponseBodyInstances() {}

  explicit DescribeInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (KVStoreInstance) {
      vector<boost::any> temp1;
      for(auto item1:*KVStoreInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KVStoreInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KVStoreInstance") != m.end() && !m["KVStoreInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["KVStoreInstance"].type()) {
        vector<DescribeInstancesResponseBodyInstancesKVStoreInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KVStoreInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstancesKVStoreInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        KVStoreInstance = make_shared<vector<DescribeInstancesResponseBodyInstancesKVStoreInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesResponseBodyInstances() = default;
};
class DescribeInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeInstancesResponseBodyInstances> instances{};

  DescribeInstancesResponseBody() {}

  explicit DescribeInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (instances) {
      res["Instances"] = instances ? boost::any(instances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instances"].type()) {
        DescribeInstancesResponseBodyInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instances"]));
        instances = make_shared<DescribeInstancesResponseBodyInstances>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponseBody() = default;
};
class DescribeInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstancesResponseBody> body{};

  DescribeInstancesResponse() {}

  explicit DescribeInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponse() = default;
};
class DescribeInstanceSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  DescribeInstanceSSLRequest() {}

  explicit DescribeInstanceSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeInstanceSSLRequest() = default;
};
class DescribeInstanceSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> SSLEnabled{};
  shared_ptr<string> certCommonName{};
  shared_ptr<string> SSLExpiredTime{};

  DescribeInstanceSSLResponseBody() {}

  explicit DescribeInstanceSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (SSLEnabled) {
      res["SSLEnabled"] = boost::any(*SSLEnabled);
    }
    if (certCommonName) {
      res["CertCommonName"] = boost::any(*certCommonName);
    }
    if (SSLExpiredTime) {
      res["SSLExpiredTime"] = boost::any(*SSLExpiredTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SSLEnabled") != m.end() && !m["SSLEnabled"].empty()) {
      SSLEnabled = make_shared<string>(boost::any_cast<string>(m["SSLEnabled"]));
    }
    if (m.find("CertCommonName") != m.end() && !m["CertCommonName"].empty()) {
      certCommonName = make_shared<string>(boost::any_cast<string>(m["CertCommonName"]));
    }
    if (m.find("SSLExpiredTime") != m.end() && !m["SSLExpiredTime"].empty()) {
      SSLExpiredTime = make_shared<string>(boost::any_cast<string>(m["SSLExpiredTime"]));
    }
  }


  virtual ~DescribeInstanceSSLResponseBody() = default;
};
class DescribeInstanceSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInstanceSSLResponseBody> body{};

  DescribeInstanceSSLResponse() {}

  explicit DescribeInstanceSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceSSLResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceSSLResponse() = default;
};
class DescribeIntranetAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceGroupId{};

  DescribeIntranetAttributeRequest() {}

  explicit DescribeIntranetAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeIntranetAttributeRequest() = default;
};
class DescribeIntranetAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> intranetBandwidth{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> bandwidthExpireTime{};

  DescribeIntranetAttributeResponseBody() {}

  explicit DescribeIntranetAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (intranetBandwidth) {
      res["IntranetBandwidth"] = boost::any(*intranetBandwidth);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (bandwidthExpireTime) {
      res["BandwidthExpireTime"] = boost::any(*bandwidthExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IntranetBandwidth") != m.end() && !m["IntranetBandwidth"].empty()) {
      intranetBandwidth = make_shared<long>(boost::any_cast<long>(m["IntranetBandwidth"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("BandwidthExpireTime") != m.end() && !m["BandwidthExpireTime"].empty()) {
      bandwidthExpireTime = make_shared<string>(boost::any_cast<string>(m["BandwidthExpireTime"]));
    }
  }


  virtual ~DescribeIntranetAttributeResponseBody() = default;
};
class DescribeIntranetAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeIntranetAttributeResponseBody> body{};

  DescribeIntranetAttributeResponse() {}

  explicit DescribeIntranetAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIntranetAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIntranetAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIntranetAttributeResponse() = default;
};
class DescribeLogicInstanceTopologyRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  DescribeLogicInstanceTopologyRequest() {}

  explicit DescribeLogicInstanceTopologyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeLogicInstanceTopologyRequest() = default;
};
class DescribeLogicInstanceTopologyResponseBodyRedisProxyListNodeInfo : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<string> connection{};
  shared_ptr<string> bandwidth{};
  shared_ptr<string> capacity{};
  shared_ptr<string> nodeType{};

  DescribeLogicInstanceTopologyResponseBodyRedisProxyListNodeInfo() {}

  explicit DescribeLogicInstanceTopologyResponseBodyRedisProxyListNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (connection) {
      res["Connection"] = boost::any(*connection);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("Connection") != m.end() && !m["Connection"].empty()) {
      connection = make_shared<string>(boost::any_cast<string>(m["Connection"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<string>(boost::any_cast<string>(m["Bandwidth"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<string>(boost::any_cast<string>(m["Capacity"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~DescribeLogicInstanceTopologyResponseBodyRedisProxyListNodeInfo() = default;
};
class DescribeLogicInstanceTopologyResponseBodyRedisProxyList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLogicInstanceTopologyResponseBodyRedisProxyListNodeInfo>> nodeInfo{};

  DescribeLogicInstanceTopologyResponseBodyRedisProxyList() {}

  explicit DescribeLogicInstanceTopologyResponseBodyRedisProxyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInfo"].type()) {
        vector<DescribeLogicInstanceTopologyResponseBodyRedisProxyListNodeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLogicInstanceTopologyResponseBodyRedisProxyListNodeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInfo = make_shared<vector<DescribeLogicInstanceTopologyResponseBodyRedisProxyListNodeInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeLogicInstanceTopologyResponseBodyRedisProxyList() = default;
};
class DescribeLogicInstanceTopologyResponseBodyRedisShardListNodeInfo : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<string> connection{};
  shared_ptr<string> bandwidth{};
  shared_ptr<string> capacity{};
  shared_ptr<string> nodeType{};

  DescribeLogicInstanceTopologyResponseBodyRedisShardListNodeInfo() {}

  explicit DescribeLogicInstanceTopologyResponseBodyRedisShardListNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (connection) {
      res["Connection"] = boost::any(*connection);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("Connection") != m.end() && !m["Connection"].empty()) {
      connection = make_shared<string>(boost::any_cast<string>(m["Connection"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<string>(boost::any_cast<string>(m["Bandwidth"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<string>(boost::any_cast<string>(m["Capacity"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~DescribeLogicInstanceTopologyResponseBodyRedisShardListNodeInfo() = default;
};
class DescribeLogicInstanceTopologyResponseBodyRedisShardList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLogicInstanceTopologyResponseBodyRedisShardListNodeInfo>> nodeInfo{};

  DescribeLogicInstanceTopologyResponseBodyRedisShardList() {}

  explicit DescribeLogicInstanceTopologyResponseBodyRedisShardList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInfo"].type()) {
        vector<DescribeLogicInstanceTopologyResponseBodyRedisShardListNodeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLogicInstanceTopologyResponseBodyRedisShardListNodeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInfo = make_shared<vector<DescribeLogicInstanceTopologyResponseBodyRedisShardListNodeInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeLogicInstanceTopologyResponseBodyRedisShardList() = default;
};
class DescribeLogicInstanceTopologyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<DescribeLogicInstanceTopologyResponseBodyRedisProxyList> redisProxyList{};
  shared_ptr<DescribeLogicInstanceTopologyResponseBodyRedisShardList> redisShardList{};

  DescribeLogicInstanceTopologyResponseBody() {}

  explicit DescribeLogicInstanceTopologyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (redisProxyList) {
      res["RedisProxyList"] = redisProxyList ? boost::any(redisProxyList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (redisShardList) {
      res["RedisShardList"] = redisShardList ? boost::any(redisShardList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RedisProxyList") != m.end() && !m["RedisProxyList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedisProxyList"].type()) {
        DescribeLogicInstanceTopologyResponseBodyRedisProxyList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedisProxyList"]));
        redisProxyList = make_shared<DescribeLogicInstanceTopologyResponseBodyRedisProxyList>(model1);
      }
    }
    if (m.find("RedisShardList") != m.end() && !m["RedisShardList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedisShardList"].type()) {
        DescribeLogicInstanceTopologyResponseBodyRedisShardList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedisShardList"]));
        redisShardList = make_shared<DescribeLogicInstanceTopologyResponseBodyRedisShardList>(model1);
      }
    }
  }


  virtual ~DescribeLogicInstanceTopologyResponseBody() = default;
};
class DescribeLogicInstanceTopologyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLogicInstanceTopologyResponseBody> body{};

  DescribeLogicInstanceTopologyResponse() {}

  explicit DescribeLogicInstanceTopologyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogicInstanceTopologyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogicInstanceTopologyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogicInstanceTopologyResponse() = default;
};
class DescribeMonitorItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};

  DescribeMonitorItemsRequest() {}

  explicit DescribeMonitorItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DescribeMonitorItemsRequest() = default;
};
class DescribeMonitorItemsResponseBodyMonitorItemsKVStoreMonitorItem : public Darabonba::Model {
public:
  shared_ptr<string> monitorKey{};
  shared_ptr<string> unit{};

  DescribeMonitorItemsResponseBodyMonitorItemsKVStoreMonitorItem() {}

  explicit DescribeMonitorItemsResponseBodyMonitorItemsKVStoreMonitorItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (monitorKey) {
      res["MonitorKey"] = boost::any(*monitorKey);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MonitorKey") != m.end() && !m["MonitorKey"].empty()) {
      monitorKey = make_shared<string>(boost::any_cast<string>(m["MonitorKey"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~DescribeMonitorItemsResponseBodyMonitorItemsKVStoreMonitorItem() = default;
};
class DescribeMonitorItemsResponseBodyMonitorItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMonitorItemsResponseBodyMonitorItemsKVStoreMonitorItem>> KVStoreMonitorItem{};

  DescribeMonitorItemsResponseBodyMonitorItems() {}

  explicit DescribeMonitorItemsResponseBodyMonitorItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (KVStoreMonitorItem) {
      vector<boost::any> temp1;
      for(auto item1:*KVStoreMonitorItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KVStoreMonitorItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KVStoreMonitorItem") != m.end() && !m["KVStoreMonitorItem"].empty()) {
      if (typeid(vector<boost::any>) == m["KVStoreMonitorItem"].type()) {
        vector<DescribeMonitorItemsResponseBodyMonitorItemsKVStoreMonitorItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KVStoreMonitorItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMonitorItemsResponseBodyMonitorItemsKVStoreMonitorItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        KVStoreMonitorItem = make_shared<vector<DescribeMonitorItemsResponseBodyMonitorItemsKVStoreMonitorItem>>(expect1);
      }
    }
  }


  virtual ~DescribeMonitorItemsResponseBodyMonitorItems() = default;
};
class DescribeMonitorItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeMonitorItemsResponseBodyMonitorItems> monitorItems{};

  DescribeMonitorItemsResponseBody() {}

  explicit DescribeMonitorItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (monitorItems) {
      res["MonitorItems"] = monitorItems ? boost::any(monitorItems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MonitorItems") != m.end() && !m["MonitorItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["MonitorItems"].type()) {
        DescribeMonitorItemsResponseBodyMonitorItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MonitorItems"]));
        monitorItems = make_shared<DescribeMonitorItemsResponseBodyMonitorItems>(model1);
      }
    }
  }


  virtual ~DescribeMonitorItemsResponseBody() = default;
};
class DescribeMonitorItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMonitorItemsResponseBody> body{};

  DescribeMonitorItemsResponse() {}

  explicit DescribeMonitorItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMonitorItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMonitorItemsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMonitorItemsResponse() = default;
};
class DescribeParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeId{};

  DescribeParametersRequest() {}

  explicit DescribeParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~DescribeParametersRequest() = default;
};
class DescribeParametersResponseBodyConfigParametersParameter : public Darabonba::Model {
public:
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};
  shared_ptr<bool> modifiableStatus{};
  shared_ptr<bool> forceRestart{};
  shared_ptr<string> checkingCode{};
  shared_ptr<string> parameterDescription{};

  DescribeParametersResponseBodyConfigParametersParameter() {}

  explicit DescribeParametersResponseBodyConfigParametersParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    if (modifiableStatus) {
      res["ModifiableStatus"] = boost::any(*modifiableStatus);
    }
    if (forceRestart) {
      res["ForceRestart"] = boost::any(*forceRestart);
    }
    if (checkingCode) {
      res["CheckingCode"] = boost::any(*checkingCode);
    }
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
    if (m.find("ModifiableStatus") != m.end() && !m["ModifiableStatus"].empty()) {
      modifiableStatus = make_shared<bool>(boost::any_cast<bool>(m["ModifiableStatus"]));
    }
    if (m.find("ForceRestart") != m.end() && !m["ForceRestart"].empty()) {
      forceRestart = make_shared<bool>(boost::any_cast<bool>(m["ForceRestart"]));
    }
    if (m.find("CheckingCode") != m.end() && !m["CheckingCode"].empty()) {
      checkingCode = make_shared<string>(boost::any_cast<string>(m["CheckingCode"]));
    }
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
  }


  virtual ~DescribeParametersResponseBodyConfigParametersParameter() = default;
};
class DescribeParametersResponseBodyConfigParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParametersResponseBodyConfigParametersParameter>> parameter{};

  DescribeParametersResponseBodyConfigParameters() {}

  explicit DescribeParametersResponseBodyConfigParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameter) {
      vector<boost::any> temp1;
      for(auto item1:*parameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameter") != m.end() && !m["Parameter"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameter"].type()) {
        vector<DescribeParametersResponseBodyConfigParametersParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParametersResponseBodyConfigParametersParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameter = make_shared<vector<DescribeParametersResponseBodyConfigParametersParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeParametersResponseBodyConfigParameters() = default;
};
class DescribeParametersResponseBodyRunningParametersParameter : public Darabonba::Model {
public:
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};
  shared_ptr<string> modifiableStatus{};
  shared_ptr<string> forceRestart{};
  shared_ptr<string> checkingCode{};
  shared_ptr<string> parameterDescription{};

  DescribeParametersResponseBodyRunningParametersParameter() {}

  explicit DescribeParametersResponseBodyRunningParametersParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    if (modifiableStatus) {
      res["ModifiableStatus"] = boost::any(*modifiableStatus);
    }
    if (forceRestart) {
      res["ForceRestart"] = boost::any(*forceRestart);
    }
    if (checkingCode) {
      res["CheckingCode"] = boost::any(*checkingCode);
    }
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
    if (m.find("ModifiableStatus") != m.end() && !m["ModifiableStatus"].empty()) {
      modifiableStatus = make_shared<string>(boost::any_cast<string>(m["ModifiableStatus"]));
    }
    if (m.find("ForceRestart") != m.end() && !m["ForceRestart"].empty()) {
      forceRestart = make_shared<string>(boost::any_cast<string>(m["ForceRestart"]));
    }
    if (m.find("CheckingCode") != m.end() && !m["CheckingCode"].empty()) {
      checkingCode = make_shared<string>(boost::any_cast<string>(m["CheckingCode"]));
    }
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
  }


  virtual ~DescribeParametersResponseBodyRunningParametersParameter() = default;
};
class DescribeParametersResponseBodyRunningParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParametersResponseBodyRunningParametersParameter>> parameter{};

  DescribeParametersResponseBodyRunningParameters() {}

  explicit DescribeParametersResponseBodyRunningParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameter) {
      vector<boost::any> temp1;
      for(auto item1:*parameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameter") != m.end() && !m["Parameter"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameter"].type()) {
        vector<DescribeParametersResponseBodyRunningParametersParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParametersResponseBodyRunningParametersParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameter = make_shared<vector<DescribeParametersResponseBodyRunningParametersParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeParametersResponseBodyRunningParameters() = default;
};
class DescribeParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<DescribeParametersResponseBodyConfigParameters> configParameters{};
  shared_ptr<DescribeParametersResponseBodyRunningParameters> runningParameters{};

  DescribeParametersResponseBody() {}

  explicit DescribeParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (configParameters) {
      res["ConfigParameters"] = configParameters ? boost::any(configParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (runningParameters) {
      res["RunningParameters"] = runningParameters ? boost::any(runningParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ConfigParameters") != m.end() && !m["ConfigParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigParameters"].type()) {
        DescribeParametersResponseBodyConfigParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigParameters"]));
        configParameters = make_shared<DescribeParametersResponseBodyConfigParameters>(model1);
      }
    }
    if (m.find("RunningParameters") != m.end() && !m["RunningParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunningParameters"].type()) {
        DescribeParametersResponseBodyRunningParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunningParameters"]));
        runningParameters = make_shared<DescribeParametersResponseBodyRunningParameters>(model1);
      }
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
class DescribeParameterTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> characterType{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> resourceGroupId{};

  DescribeParameterTemplatesRequest() {}

  explicit DescribeParameterTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeParameterTemplatesRequest() = default;
};
class DescribeParameterTemplatesResponseBodyParametersTemplateRecord : public Darabonba::Model {
public:
  shared_ptr<string> checkingCode{};
  shared_ptr<bool> forceModify{};
  shared_ptr<bool> forceRestart{};
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  DescribeParameterTemplatesResponseBodyParametersTemplateRecord() {}

  explicit DescribeParameterTemplatesResponseBodyParametersTemplateRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkingCode) {
      res["CheckingCode"] = boost::any(*checkingCode);
    }
    if (forceModify) {
      res["ForceModify"] = boost::any(*forceModify);
    }
    if (forceRestart) {
      res["ForceRestart"] = boost::any(*forceRestart);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckingCode") != m.end() && !m["CheckingCode"].empty()) {
      checkingCode = make_shared<string>(boost::any_cast<string>(m["CheckingCode"]));
    }
    if (m.find("ForceModify") != m.end() && !m["ForceModify"].empty()) {
      forceModify = make_shared<bool>(boost::any_cast<bool>(m["ForceModify"]));
    }
    if (m.find("ForceRestart") != m.end() && !m["ForceRestart"].empty()) {
      forceRestart = make_shared<bool>(boost::any_cast<bool>(m["ForceRestart"]));
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
  }


  virtual ~DescribeParameterTemplatesResponseBodyParametersTemplateRecord() = default;
};
class DescribeParameterTemplatesResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParameterTemplatesResponseBodyParametersTemplateRecord>> templateRecord{};

  DescribeParameterTemplatesResponseBodyParameters() {}

  explicit DescribeParameterTemplatesResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateRecord) {
      vector<boost::any> temp1;
      for(auto item1:*templateRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplateRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateRecord") != m.end() && !m["TemplateRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplateRecord"].type()) {
        vector<DescribeParameterTemplatesResponseBodyParametersTemplateRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplateRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParameterTemplatesResponseBodyParametersTemplateRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templateRecord = make_shared<vector<DescribeParameterTemplatesResponseBodyParametersTemplateRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeParameterTemplatesResponseBodyParameters() = default;
};
class DescribeParameterTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> parameterCount{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeParameterTemplatesResponseBodyParameters> parameters{};

  DescribeParameterTemplatesResponseBody() {}

  explicit DescribeParameterTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (parameters) {
      res["Parameters"] = parameters ? boost::any(parameters->toMap()) : boost::any(map<string,boost::any>({}));
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
      parameterCount = make_shared<string>(boost::any_cast<string>(m["ParameterCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["Parameters"].type()) {
        DescribeParameterTemplatesResponseBodyParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameters"]));
        parameters = make_shared<DescribeParameterTemplatesResponseBodyParameters>(model1);
      }
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
class DescribePriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<long> capacity{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> orderType{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> nodeType{};
  shared_ptr<long> period{};
  shared_ptr<long> quantity{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instances{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> couponNo{};
  shared_ptr<bool> forceUpgrade{};
  shared_ptr<string> orderParamOut{};

  DescribePriceRequest() {}

  explicit DescribePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instances) {
      res["Instances"] = boost::any(*instances);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (forceUpgrade) {
      res["ForceUpgrade"] = boost::any(*forceUpgrade);
    }
    if (orderParamOut) {
      res["OrderParamOut"] = boost::any(*orderParamOut);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      instances = make_shared<string>(boost::any_cast<string>(m["Instances"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("ForceUpgrade") != m.end() && !m["ForceUpgrade"].empty()) {
      forceUpgrade = make_shared<bool>(boost::any_cast<bool>(m["ForceUpgrade"]));
    }
    if (m.find("OrderParamOut") != m.end() && !m["OrderParamOut"].empty()) {
      orderParamOut = make_shared<string>(boost::any_cast<string>(m["OrderParamOut"]));
    }
  }


  virtual ~DescribePriceRequest() = default;
};
class DescribePriceResponseBodyRulesRule : public Darabonba::Model {
public:
  shared_ptr<long> ruleDescId{};
  shared_ptr<string> name{};
  shared_ptr<string> title{};

  DescribePriceResponseBodyRulesRule() {}

  explicit DescribePriceResponseBodyRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleDescId) {
      res["RuleDescId"] = boost::any(*ruleDescId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleDescId") != m.end() && !m["RuleDescId"].empty()) {
      ruleDescId = make_shared<long>(boost::any_cast<long>(m["RuleDescId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribePriceResponseBodyRulesRule() = default;
};
class DescribePriceResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePriceResponseBodyRulesRule>> rule{};

  DescribePriceResponseBodyRules() {}

  explicit DescribePriceResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<DescribePriceResponseBodyRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceResponseBodyRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<DescribePriceResponseBodyRulesRule>>(expect1);
      }
    }
  }


  virtual ~DescribePriceResponseBodyRules() = default;
};
class DescribePriceResponseBodySubOrdersSubOrderRuleIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ruleId{};

  DescribePriceResponseBodySubOrdersSubOrderRuleIds() {}

  explicit DescribePriceResponseBodySubOrdersSubOrderRuleIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RuleId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RuleId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ruleId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePriceResponseBodySubOrdersSubOrderRuleIds() = default;
};
class DescribePriceResponseBodySubOrdersSubOrder : public Darabonba::Model {
public:
  shared_ptr<string> originalAmount{};
  shared_ptr<string> tradeAmount{};
  shared_ptr<string> discountAmount{};
  shared_ptr<string> instanceId{};
  shared_ptr<DescribePriceResponseBodySubOrdersSubOrderRuleIds> ruleIds{};

  DescribePriceResponseBodySubOrdersSubOrder() {}

  explicit DescribePriceResponseBodySubOrdersSubOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleIds) {
      res["RuleIds"] = ruleIds ? boost::any(ruleIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<string>(boost::any_cast<string>(m["OriginalAmount"]));
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<string>(boost::any_cast<string>(m["TradeAmount"]));
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<string>(boost::any_cast<string>(m["DiscountAmount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleIds"].type()) {
        DescribePriceResponseBodySubOrdersSubOrderRuleIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleIds"]));
        ruleIds = make_shared<DescribePriceResponseBodySubOrdersSubOrderRuleIds>(model1);
      }
    }
  }


  virtual ~DescribePriceResponseBodySubOrdersSubOrder() = default;
};
class DescribePriceResponseBodySubOrders : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePriceResponseBodySubOrdersSubOrder>> subOrder{};

  DescribePriceResponseBodySubOrders() {}

  explicit DescribePriceResponseBodySubOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subOrder) {
      vector<boost::any> temp1;
      for(auto item1:*subOrder){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubOrder"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubOrder") != m.end() && !m["SubOrder"].empty()) {
      if (typeid(vector<boost::any>) == m["SubOrder"].type()) {
        vector<DescribePriceResponseBodySubOrdersSubOrder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubOrder"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceResponseBodySubOrdersSubOrder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subOrder = make_shared<vector<DescribePriceResponseBodySubOrdersSubOrder>>(expect1);
      }
    }
  }


  virtual ~DescribePriceResponseBodySubOrders() = default;
};
class DescribePriceResponseBodyOrderRuleIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ruleId{};

  DescribePriceResponseBodyOrderRuleIds() {}

  explicit DescribePriceResponseBodyOrderRuleIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RuleId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RuleId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ruleId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePriceResponseBodyOrderRuleIds() = default;
};
class DescribePriceResponseBodyOrderCouponsCoupon : public Darabonba::Model {
public:
  shared_ptr<string> couponNo{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> isSelected{};

  DescribePriceResponseBodyOrderCouponsCoupon() {}

  explicit DescribePriceResponseBodyOrderCouponsCoupon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (isSelected) {
      res["IsSelected"] = boost::any(*isSelected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IsSelected") != m.end() && !m["IsSelected"].empty()) {
      isSelected = make_shared<string>(boost::any_cast<string>(m["IsSelected"]));
    }
  }


  virtual ~DescribePriceResponseBodyOrderCouponsCoupon() = default;
};
class DescribePriceResponseBodyOrderCoupons : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePriceResponseBodyOrderCouponsCoupon>> coupon{};

  DescribePriceResponseBodyOrderCoupons() {}

  explicit DescribePriceResponseBodyOrderCoupons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coupon) {
      vector<boost::any> temp1;
      for(auto item1:*coupon){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Coupon"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coupon") != m.end() && !m["Coupon"].empty()) {
      if (typeid(vector<boost::any>) == m["Coupon"].type()) {
        vector<DescribePriceResponseBodyOrderCouponsCoupon> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Coupon"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceResponseBodyOrderCouponsCoupon model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        coupon = make_shared<vector<DescribePriceResponseBodyOrderCouponsCoupon>>(expect1);
      }
    }
  }


  virtual ~DescribePriceResponseBodyOrderCoupons() = default;
};
class DescribePriceResponseBodyOrder : public Darabonba::Model {
public:
  shared_ptr<string> originalAmount{};
  shared_ptr<string> tradeAmount{};
  shared_ptr<string> discountAmount{};
  shared_ptr<string> currency{};
  shared_ptr<DescribePriceResponseBodyOrderRuleIds> ruleIds{};
  shared_ptr<DescribePriceResponseBodyOrderCoupons> coupons{};

  DescribePriceResponseBodyOrder() {}

  explicit DescribePriceResponseBodyOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (ruleIds) {
      res["RuleIds"] = ruleIds ? boost::any(ruleIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (coupons) {
      res["Coupons"] = coupons ? boost::any(coupons->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<string>(boost::any_cast<string>(m["OriginalAmount"]));
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<string>(boost::any_cast<string>(m["TradeAmount"]));
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<string>(boost::any_cast<string>(m["DiscountAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleIds"].type()) {
        DescribePriceResponseBodyOrderRuleIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleIds"]));
        ruleIds = make_shared<DescribePriceResponseBodyOrderRuleIds>(model1);
      }
    }
    if (m.find("Coupons") != m.end() && !m["Coupons"].empty()) {
      if (typeid(map<string, boost::any>) == m["Coupons"].type()) {
        DescribePriceResponseBodyOrderCoupons model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Coupons"]));
        coupons = make_shared<DescribePriceResponseBodyOrderCoupons>(model1);
      }
    }
  }


  virtual ~DescribePriceResponseBodyOrder() = default;
};
class DescribePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> orderParams{};
  shared_ptr<DescribePriceResponseBodyRules> rules{};
  shared_ptr<DescribePriceResponseBodySubOrders> subOrders{};
  shared_ptr<DescribePriceResponseBodyOrder> order{};

  DescribePriceResponseBody() {}

  explicit DescribePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderParams) {
      res["OrderParams"] = boost::any(*orderParams);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subOrders) {
      res["SubOrders"] = subOrders ? boost::any(subOrders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (order) {
      res["Order"] = order ? boost::any(order->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderParams") != m.end() && !m["OrderParams"].empty()) {
      orderParams = make_shared<string>(boost::any_cast<string>(m["OrderParams"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        DescribePriceResponseBodyRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<DescribePriceResponseBodyRules>(model1);
      }
    }
    if (m.find("SubOrders") != m.end() && !m["SubOrders"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubOrders"].type()) {
        DescribePriceResponseBodySubOrders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubOrders"]));
        subOrders = make_shared<DescribePriceResponseBodySubOrders>(model1);
      }
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      if (typeid(map<string, boost::any>) == m["Order"].type()) {
        DescribePriceResponseBodyOrder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Order"]));
        order = make_shared<DescribePriceResponseBodyOrder>(model1);
      }
    }
  }


  virtual ~DescribePriceResponseBody() = default;
};
class DescribePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePriceResponseBody> body{};

  DescribePriceResponse() {}

  explicit DescribePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePriceResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> acceptLanguage{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionIdsKVStoreRegionZoneIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> zoneId{};

  DescribeRegionsResponseBodyRegionIdsKVStoreRegionZoneIdList() {}

  explicit DescribeRegionsResponseBodyRegionIdsKVStoreRegionZoneIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ZoneId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ZoneId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zoneId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionIdsKVStoreRegionZoneIdList() = default;
};
class DescribeRegionsResponseBodyRegionIdsKVStoreRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneIds{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<DescribeRegionsResponseBodyRegionIdsKVStoreRegionZoneIdList> zoneIdList{};

  DescribeRegionsResponseBodyRegionIdsKVStoreRegion() {}

  explicit DescribeRegionsResponseBodyRegionIdsKVStoreRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneIds) {
      res["ZoneIds"] = boost::any(*zoneIds);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (zoneIdList) {
      res["ZoneIdList"] = zoneIdList ? boost::any(zoneIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneIds") != m.end() && !m["ZoneIds"].empty()) {
      zoneIds = make_shared<string>(boost::any_cast<string>(m["ZoneIds"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("ZoneIdList") != m.end() && !m["ZoneIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZoneIdList"].type()) {
        DescribeRegionsResponseBodyRegionIdsKVStoreRegionZoneIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZoneIdList"]));
        zoneIdList = make_shared<DescribeRegionsResponseBodyRegionIdsKVStoreRegionZoneIdList>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionIdsKVStoreRegion() = default;
};
class DescribeRegionsResponseBodyRegionIds : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionIdsKVStoreRegion>> KVStoreRegion{};

  DescribeRegionsResponseBodyRegionIds() {}

  explicit DescribeRegionsResponseBodyRegionIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (KVStoreRegion) {
      vector<boost::any> temp1;
      for(auto item1:*KVStoreRegion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KVStoreRegion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KVStoreRegion") != m.end() && !m["KVStoreRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["KVStoreRegion"].type()) {
        vector<DescribeRegionsResponseBodyRegionIdsKVStoreRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KVStoreRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionIdsKVStoreRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        KVStoreRegion = make_shared<vector<DescribeRegionsResponseBodyRegionIdsKVStoreRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionIds() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRegionsResponseBodyRegionIds> regionIds{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (regionIds) {
      res["RegionIds"] = regionIds ? boost::any(regionIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegionIds"].type()) {
        DescribeRegionsResponseBodyRegionIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegionIds"]));
        regionIds = make_shared<DescribeRegionsResponseBodyRegionIds>(model1);
      }
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
class DescribeRoleZoneInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> queryType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeRoleZoneInfoRequest() {}

  explicit DescribeRoleZoneInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
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
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<long>(boost::any_cast<long>(m["QueryType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeRoleZoneInfoRequest() = default;
};
class DescribeRoleZoneInfoResponseBodyNodeNodeInfo : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> role{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> custinsId{};
  shared_ptr<long> insType{};
  shared_ptr<string> insName{};
  shared_ptr<long> isLatestVersion{};
  shared_ptr<string> currentMinorVersion{};
  shared_ptr<long> currentBandWidth{};
  shared_ptr<long> defaultBandWidth{};
  shared_ptr<bool> isOpenBandWidthService{};

  DescribeRoleZoneInfoResponseBodyNodeNodeInfo() {}

  explicit DescribeRoleZoneInfoResponseBodyNodeNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (custinsId) {
      res["CustinsId"] = boost::any(*custinsId);
    }
    if (insType) {
      res["InsType"] = boost::any(*insType);
    }
    if (insName) {
      res["InsName"] = boost::any(*insName);
    }
    if (isLatestVersion) {
      res["IsLatestVersion"] = boost::any(*isLatestVersion);
    }
    if (currentMinorVersion) {
      res["CurrentMinorVersion"] = boost::any(*currentMinorVersion);
    }
    if (currentBandWidth) {
      res["CurrentBandWidth"] = boost::any(*currentBandWidth);
    }
    if (defaultBandWidth) {
      res["DefaultBandWidth"] = boost::any(*defaultBandWidth);
    }
    if (isOpenBandWidthService) {
      res["IsOpenBandWidthService"] = boost::any(*isOpenBandWidthService);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("CustinsId") != m.end() && !m["CustinsId"].empty()) {
      custinsId = make_shared<string>(boost::any_cast<string>(m["CustinsId"]));
    }
    if (m.find("InsType") != m.end() && !m["InsType"].empty()) {
      insType = make_shared<long>(boost::any_cast<long>(m["InsType"]));
    }
    if (m.find("InsName") != m.end() && !m["InsName"].empty()) {
      insName = make_shared<string>(boost::any_cast<string>(m["InsName"]));
    }
    if (m.find("IsLatestVersion") != m.end() && !m["IsLatestVersion"].empty()) {
      isLatestVersion = make_shared<long>(boost::any_cast<long>(m["IsLatestVersion"]));
    }
    if (m.find("CurrentMinorVersion") != m.end() && !m["CurrentMinorVersion"].empty()) {
      currentMinorVersion = make_shared<string>(boost::any_cast<string>(m["CurrentMinorVersion"]));
    }
    if (m.find("CurrentBandWidth") != m.end() && !m["CurrentBandWidth"].empty()) {
      currentBandWidth = make_shared<long>(boost::any_cast<long>(m["CurrentBandWidth"]));
    }
    if (m.find("DefaultBandWidth") != m.end() && !m["DefaultBandWidth"].empty()) {
      defaultBandWidth = make_shared<long>(boost::any_cast<long>(m["DefaultBandWidth"]));
    }
    if (m.find("IsOpenBandWidthService") != m.end() && !m["IsOpenBandWidthService"].empty()) {
      isOpenBandWidthService = make_shared<bool>(boost::any_cast<bool>(m["IsOpenBandWidthService"]));
    }
  }


  virtual ~DescribeRoleZoneInfoResponseBodyNodeNodeInfo() = default;
};
class DescribeRoleZoneInfoResponseBodyNode : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRoleZoneInfoResponseBodyNodeNodeInfo>> nodeInfo{};

  DescribeRoleZoneInfoResponseBodyNode() {}

  explicit DescribeRoleZoneInfoResponseBodyNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInfo"].type()) {
        vector<DescribeRoleZoneInfoResponseBodyNodeNodeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRoleZoneInfoResponseBodyNodeNodeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInfo = make_shared<vector<DescribeRoleZoneInfoResponseBodyNodeNodeInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeRoleZoneInfoResponseBodyNode() = default;
};
class DescribeRoleZoneInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeRoleZoneInfoResponseBodyNode> node{};

  DescribeRoleZoneInfoResponseBody() {}

  explicit DescribeRoleZoneInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (node) {
      res["Node"] = node ? boost::any(node->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(map<string, boost::any>) == m["Node"].type()) {
        DescribeRoleZoneInfoResponseBodyNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Node"]));
        node = make_shared<DescribeRoleZoneInfoResponseBodyNode>(model1);
      }
    }
  }


  virtual ~DescribeRoleZoneInfoResponseBody() = default;
};
class DescribeRoleZoneInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRoleZoneInfoResponseBody> body{};

  DescribeRoleZoneInfoResponse() {}

  explicit DescribeRoleZoneInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRoleZoneInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRoleZoneInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRoleZoneInfoResponse() = default;
};
class DescribeRunningLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> DBName{};
  shared_ptr<string> roleType{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> characterType{};
  shared_ptr<string> queryKeyword{};
  shared_ptr<string> orderType{};

  DescribeRunningLogRecordsRequest() {}

  explicit DescribeRunningLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (queryKeyword) {
      res["QueryKeyword"] = boost::any(*queryKeyword);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("QueryKeyword") != m.end() && !m["QueryKeyword"].empty()) {
      queryKeyword = make_shared<string>(boost::any_cast<string>(m["QueryKeyword"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
  }


  virtual ~DescribeRunningLogRecordsRequest() = default;
};
class DescribeRunningLogRecordsResponseBodyItemsLogRecords : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> content{};
  shared_ptr<string> instanceId{};

  DescribeRunningLogRecordsResponseBodyItemsLogRecords() {}

  explicit DescribeRunningLogRecordsResponseBodyItemsLogRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeRunningLogRecordsResponseBodyItemsLogRecords() = default;
};
class DescribeRunningLogRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRunningLogRecordsResponseBodyItemsLogRecords>> logRecords{};

  DescribeRunningLogRecordsResponseBodyItems() {}

  explicit DescribeRunningLogRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logRecords) {
      vector<boost::any> temp1;
      for(auto item1:*logRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogRecords"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogRecords") != m.end() && !m["LogRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["LogRecords"].type()) {
        vector<DescribeRunningLogRecordsResponseBodyItemsLogRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRunningLogRecordsResponseBodyItemsLogRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logRecords = make_shared<vector<DescribeRunningLogRecordsResponseBodyItemsLogRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeRunningLogRecordsResponseBodyItems() = default;
};
class DescribeRunningLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> engine{};
  shared_ptr<long> totalRecordCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<DescribeRunningLogRecordsResponseBodyItems> items{};

  DescribeRunningLogRecordsResponseBody() {}

  explicit DescribeRunningLogRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeRunningLogRecordsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeRunningLogRecordsResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeRunningLogRecordsResponseBody() = default;
};
class DescribeRunningLogRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRunningLogRecordsResponseBody> body{};

  DescribeRunningLogRecordsResponse() {}

  explicit DescribeRunningLogRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRunningLogRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRunningLogRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRunningLogRecordsResponse() = default;
};
class DescribeSecurityGroupConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  DescribeSecurityGroupConfigurationRequest() {}

  explicit DescribeSecurityGroupConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeSecurityGroupConfigurationRequest() = default;
};
class DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> netType{};

  DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation() {}

  explicit DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
  }


  virtual ~DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation() = default;
};
class DescribeSecurityGroupConfigurationResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation>> ecsSecurityGroupRelation{};

  DescribeSecurityGroupConfigurationResponseBodyItems() {}

  explicit DescribeSecurityGroupConfigurationResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsSecurityGroupRelation) {
      vector<boost::any> temp1;
      for(auto item1:*ecsSecurityGroupRelation){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsSecurityGroupRelation"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsSecurityGroupRelation") != m.end() && !m["EcsSecurityGroupRelation"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsSecurityGroupRelation"].type()) {
        vector<DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsSecurityGroupRelation"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsSecurityGroupRelation = make_shared<vector<DescribeSecurityGroupConfigurationResponseBodyItemsEcsSecurityGroupRelation>>(expect1);
      }
    }
  }


  virtual ~DescribeSecurityGroupConfigurationResponseBodyItems() = default;
};
class DescribeSecurityGroupConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSecurityGroupConfigurationResponseBodyItems> items{};

  DescribeSecurityGroupConfigurationResponseBody() {}

  explicit DescribeSecurityGroupConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeSecurityGroupConfigurationResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeSecurityGroupConfigurationResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeSecurityGroupConfigurationResponseBody() = default;
};
class DescribeSecurityGroupConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSecurityGroupConfigurationResponseBody> body{};

  DescribeSecurityGroupConfigurationResponse() {}

  explicit DescribeSecurityGroupConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSecurityGroupConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecurityGroupConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecurityGroupConfigurationResponse() = default;
};
class DescribeSecurityIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  DescribeSecurityIpsRequest() {}

  explicit DescribeSecurityIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeSecurityIpsRequest() = default;
};
class DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup : public Darabonba::Model {
public:
  shared_ptr<string> securityIpGroupName{};
  shared_ptr<string> securityIpGroupAttribute{};
  shared_ptr<string> securityIpList{};

  DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup() {}

  explicit DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityIpGroupName) {
      res["SecurityIpGroupName"] = boost::any(*securityIpGroupName);
    }
    if (securityIpGroupAttribute) {
      res["SecurityIpGroupAttribute"] = boost::any(*securityIpGroupAttribute);
    }
    if (securityIpList) {
      res["SecurityIpList"] = boost::any(*securityIpList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityIpGroupName") != m.end() && !m["SecurityIpGroupName"].empty()) {
      securityIpGroupName = make_shared<string>(boost::any_cast<string>(m["SecurityIpGroupName"]));
    }
    if (m.find("SecurityIpGroupAttribute") != m.end() && !m["SecurityIpGroupAttribute"].empty()) {
      securityIpGroupAttribute = make_shared<string>(boost::any_cast<string>(m["SecurityIpGroupAttribute"]));
    }
    if (m.find("SecurityIpList") != m.end() && !m["SecurityIpList"].empty()) {
      securityIpList = make_shared<string>(boost::any_cast<string>(m["SecurityIpList"]));
    }
  }


  virtual ~DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup() = default;
};
class DescribeSecurityIpsResponseBodySecurityIpGroups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup>> securityIpGroup{};

  DescribeSecurityIpsResponseBodySecurityIpGroups() {}

  explicit DescribeSecurityIpsResponseBodySecurityIpGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityIpGroup) {
      vector<boost::any> temp1;
      for(auto item1:*securityIpGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityIpGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityIpGroup") != m.end() && !m["SecurityIpGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityIpGroup"].type()) {
        vector<DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityIpGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityIpGroup = make_shared<vector<DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup>>(expect1);
      }
    }
  }


  virtual ~DescribeSecurityIpsResponseBodySecurityIpGroups() = default;
};
class DescribeSecurityIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSecurityIpsResponseBodySecurityIpGroups> securityIpGroups{};

  DescribeSecurityIpsResponseBody() {}

  explicit DescribeSecurityIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityIpGroups) {
      res["SecurityIpGroups"] = securityIpGroups ? boost::any(securityIpGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityIpGroups") != m.end() && !m["SecurityIpGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityIpGroups"].type()) {
        DescribeSecurityIpsResponseBodySecurityIpGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityIpGroups"]));
        securityIpGroups = make_shared<DescribeSecurityIpsResponseBodySecurityIpGroups>(model1);
      }
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
class DescribeSlowLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> DBName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> slowLogRecordType{};
  shared_ptr<string> queryKeyword{};
  shared_ptr<string> orderType{};
  shared_ptr<string> orderBy{};

  DescribeSlowLogRecordsRequest() {}

  explicit DescribeSlowLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (slowLogRecordType) {
      res["SlowLogRecordType"] = boost::any(*slowLogRecordType);
    }
    if (queryKeyword) {
      res["QueryKeyword"] = boost::any(*queryKeyword);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("SlowLogRecordType") != m.end() && !m["SlowLogRecordType"].empty()) {
      slowLogRecordType = make_shared<string>(boost::any_cast<string>(m["SlowLogRecordType"]));
    }
    if (m.find("QueryKeyword") != m.end() && !m["QueryKeyword"].empty()) {
      queryKeyword = make_shared<string>(boost::any_cast<string>(m["QueryKeyword"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
  }


  virtual ~DescribeSlowLogRecordsRequest() = default;
};
class DescribeSlowLogRecordsResponseBodyItemsLogRecords : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> DBName{};
  shared_ptr<string> dataBaseName{};
  shared_ptr<string> command{};
  shared_ptr<long> elapsedTime{};
  shared_ptr<string> executeTime{};
  shared_ptr<string> account{};
  shared_ptr<string> accountName{};

  DescribeSlowLogRecordsResponseBodyItemsLogRecords() {}

  explicit DescribeSlowLogRecordsResponseBodyItemsLogRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (dataBaseName) {
      res["DataBaseName"] = boost::any(*dataBaseName);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (elapsedTime) {
      res["ElapsedTime"] = boost::any(*elapsedTime);
    }
    if (executeTime) {
      res["ExecuteTime"] = boost::any(*executeTime);
    }
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("DataBaseName") != m.end() && !m["DataBaseName"].empty()) {
      dataBaseName = make_shared<string>(boost::any_cast<string>(m["DataBaseName"]));
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("ElapsedTime") != m.end() && !m["ElapsedTime"].empty()) {
      elapsedTime = make_shared<long>(boost::any_cast<long>(m["ElapsedTime"]));
    }
    if (m.find("ExecuteTime") != m.end() && !m["ExecuteTime"].empty()) {
      executeTime = make_shared<string>(boost::any_cast<string>(m["ExecuteTime"]));
    }
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodyItemsLogRecords() = default;
};
class DescribeSlowLogRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowLogRecordsResponseBodyItemsLogRecords>> logRecords{};

  DescribeSlowLogRecordsResponseBodyItems() {}

  explicit DescribeSlowLogRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logRecords) {
      vector<boost::any> temp1;
      for(auto item1:*logRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogRecords"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogRecords") != m.end() && !m["LogRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["LogRecords"].type()) {
        vector<DescribeSlowLogRecordsResponseBodyItemsLogRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowLogRecordsResponseBodyItemsLogRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logRecords = make_shared<vector<DescribeSlowLogRecordsResponseBodyItemsLogRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodyItems() = default;
};
class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> engine{};
  shared_ptr<long> totalRecordCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<DescribeSlowLogRecordsResponseBodyItems> items{};

  DescribeSlowLogRecordsResponseBody() {}

  explicit DescribeSlowLogRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeSlowLogRecordsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeSlowLogRecordsResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBody() = default;
};
class DescribeSlowLogRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSlowLogRecordsResponseBody> body{};

  DescribeSlowLogRecordsResponse() {}

  explicit DescribeSlowLogRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlowLogRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlowLogRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponse() = default;
};
class DescribeTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> status{};

  DescribeTasksRequest() {}

  explicit DescribeTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
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
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeTasksRequest() = default;
};
class DescribeTasksResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> taskAction{};
  shared_ptr<string> status{};
  shared_ptr<double> progress{};
  shared_ptr<string> beginTime{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> stepsInfo{};
  shared_ptr<long> remain{};
  shared_ptr<string> stepProgressInfo{};
  shared_ptr<string> currentStepName{};

  DescribeTasksResponseBodyItems() {}

  explicit DescribeTasksResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (stepsInfo) {
      res["StepsInfo"] = boost::any(*stepsInfo);
    }
    if (remain) {
      res["Remain"] = boost::any(*remain);
    }
    if (stepProgressInfo) {
      res["StepProgressInfo"] = boost::any(*stepProgressInfo);
    }
    if (currentStepName) {
      res["CurrentStepName"] = boost::any(*currentStepName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<double>(boost::any_cast<double>(m["Progress"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("StepsInfo") != m.end() && !m["StepsInfo"].empty()) {
      stepsInfo = make_shared<string>(boost::any_cast<string>(m["StepsInfo"]));
    }
    if (m.find("Remain") != m.end() && !m["Remain"].empty()) {
      remain = make_shared<long>(boost::any_cast<long>(m["Remain"]));
    }
    if (m.find("StepProgressInfo") != m.end() && !m["StepProgressInfo"].empty()) {
      stepProgressInfo = make_shared<string>(boost::any_cast<string>(m["StepProgressInfo"]));
    }
    if (m.find("CurrentStepName") != m.end() && !m["CurrentStepName"].empty()) {
      currentStepName = make_shared<string>(boost::any_cast<string>(m["CurrentStepName"]));
    }
  }


  virtual ~DescribeTasksResponseBodyItems() = default;
};
class DescribeTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalRecordCount{};
  shared_ptr<vector<DescribeTasksResponseBodyItems>> items{};

  DescribeTasksResponseBody() {}

  explicit DescribeTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
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
class DescribeUserClusterHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<long> maxRecordsPerPage{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> engine{};
  shared_ptr<string> clusterId{};

  DescribeUserClusterHostRequest() {}

  explicit DescribeUserClusterHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (maxRecordsPerPage) {
      res["MaxRecordsPerPage"] = boost::any(*maxRecordsPerPage);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("MaxRecordsPerPage") != m.end() && !m["MaxRecordsPerPage"].empty()) {
      maxRecordsPerPage = make_shared<long>(boost::any_cast<long>(m["MaxRecordsPerPage"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeUserClusterHostRequest() = default;
};
class DescribeUserClusterHostResponseBodyHostItems : public Darabonba::Model {
public:
  shared_ptr<string> hostIP{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> hostStatus{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> hostName{};
  shared_ptr<string> hostStorage{};
  shared_ptr<string> instanceNumber{};
  shared_ptr<string> hostId{};
  shared_ptr<string> hostClass{};
  shared_ptr<string> regionId{};
  shared_ptr<string> allocationStatus{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> hostCpu{};
  shared_ptr<string> engine{};
  shared_ptr<string> hostMem{};
  shared_ptr<long> id{};
  shared_ptr<string> clusterId{};

  DescribeUserClusterHostResponseBodyHostItems() {}

  explicit DescribeUserClusterHostResponseBodyHostItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostIP) {
      res["HostIP"] = boost::any(*hostIP);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (hostStatus) {
      res["HostStatus"] = boost::any(*hostStatus);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (hostStorage) {
      res["HostStorage"] = boost::any(*hostStorage);
    }
    if (instanceNumber) {
      res["InstanceNumber"] = boost::any(*instanceNumber);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (hostClass) {
      res["HostClass"] = boost::any(*hostClass);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (allocationStatus) {
      res["AllocationStatus"] = boost::any(*allocationStatus);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (hostCpu) {
      res["HostCpu"] = boost::any(*hostCpu);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (hostMem) {
      res["HostMem"] = boost::any(*hostMem);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostIP") != m.end() && !m["HostIP"].empty()) {
      hostIP = make_shared<string>(boost::any_cast<string>(m["HostIP"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("HostStatus") != m.end() && !m["HostStatus"].empty()) {
      hostStatus = make_shared<string>(boost::any_cast<string>(m["HostStatus"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("HostStorage") != m.end() && !m["HostStorage"].empty()) {
      hostStorage = make_shared<string>(boost::any_cast<string>(m["HostStorage"]));
    }
    if (m.find("InstanceNumber") != m.end() && !m["InstanceNumber"].empty()) {
      instanceNumber = make_shared<string>(boost::any_cast<string>(m["InstanceNumber"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("HostClass") != m.end() && !m["HostClass"].empty()) {
      hostClass = make_shared<string>(boost::any_cast<string>(m["HostClass"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AllocationStatus") != m.end() && !m["AllocationStatus"].empty()) {
      allocationStatus = make_shared<string>(boost::any_cast<string>(m["AllocationStatus"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("HostCpu") != m.end() && !m["HostCpu"].empty()) {
      hostCpu = make_shared<string>(boost::any_cast<string>(m["HostCpu"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("HostMem") != m.end() && !m["HostMem"].empty()) {
      hostMem = make_shared<string>(boost::any_cast<string>(m["HostMem"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeUserClusterHostResponseBodyHostItems() = default;
};
class DescribeUserClusterHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxRecordsPerPage{};
  shared_ptr<vector<DescribeUserClusterHostResponseBodyHostItems>> hostItems{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> totalRecords{};
  shared_ptr<long> itemNumbers{};

  DescribeUserClusterHostResponseBody() {}

  explicit DescribeUserClusterHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRecordsPerPage) {
      res["MaxRecordsPerPage"] = boost::any(*maxRecordsPerPage);
    }
    if (hostItems) {
      vector<boost::any> temp1;
      for(auto item1:*hostItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostItems"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (totalRecords) {
      res["TotalRecords"] = boost::any(*totalRecords);
    }
    if (itemNumbers) {
      res["ItemNumbers"] = boost::any(*itemNumbers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxRecordsPerPage") != m.end() && !m["MaxRecordsPerPage"].empty()) {
      maxRecordsPerPage = make_shared<string>(boost::any_cast<string>(m["MaxRecordsPerPage"]));
    }
    if (m.find("HostItems") != m.end() && !m["HostItems"].empty()) {
      if (typeid(vector<boost::any>) == m["HostItems"].type()) {
        vector<DescribeUserClusterHostResponseBodyHostItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserClusterHostResponseBodyHostItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostItems = make_shared<vector<DescribeUserClusterHostResponseBodyHostItems>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("TotalRecords") != m.end() && !m["TotalRecords"].empty()) {
      totalRecords = make_shared<long>(boost::any_cast<long>(m["TotalRecords"]));
    }
    if (m.find("ItemNumbers") != m.end() && !m["ItemNumbers"].empty()) {
      itemNumbers = make_shared<long>(boost::any_cast<long>(m["ItemNumbers"]));
    }
  }


  virtual ~DescribeUserClusterHostResponseBody() = default;
};
class DescribeUserClusterHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUserClusterHostResponseBody> body{};

  DescribeUserClusterHostResponse() {}

  explicit DescribeUserClusterHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserClusterHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserClusterHostResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserClusterHostResponse() = default;
};
class DescribeUserClusterHostInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<long> maxRecordsPerPage{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> engine{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceIds{};
  shared_ptr<string> instanceStatus{};

  DescribeUserClusterHostInstanceRequest() {}

  explicit DescribeUserClusterHostInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (maxRecordsPerPage) {
      res["MaxRecordsPerPage"] = boost::any(*maxRecordsPerPage);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("MaxRecordsPerPage") != m.end() && !m["MaxRecordsPerPage"].empty()) {
      maxRecordsPerPage = make_shared<long>(boost::any_cast<long>(m["MaxRecordsPerPage"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
  }


  virtual ~DescribeUserClusterHostInstanceRequest() = default;
};
class DescribeUserClusterHostInstanceResponseBodyInstancesItemsInstanceInfo : public Darabonba::Model {
public:
  shared_ptr<string> instanceClass{};
  shared_ptr<string> createTime{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> engine{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<string> clusterId{};

  DescribeUserClusterHostInstanceResponseBodyInstancesItemsInstanceInfo() {}

  explicit DescribeUserClusterHostInstanceResponseBodyInstancesItemsInstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeUserClusterHostInstanceResponseBodyInstancesItemsInstanceInfo() = default;
};
class DescribeUserClusterHostInstanceResponseBodyInstancesItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUserClusterHostInstanceResponseBodyInstancesItemsInstanceInfo>> instanceInfo{};

  DescribeUserClusterHostInstanceResponseBodyInstancesItems() {}

  explicit DescribeUserClusterHostInstanceResponseBodyInstancesItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*instanceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceInfo") != m.end() && !m["InstanceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceInfo"].type()) {
        vector<DescribeUserClusterHostInstanceResponseBodyInstancesItemsInstanceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserClusterHostInstanceResponseBodyInstancesItemsInstanceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceInfo = make_shared<vector<DescribeUserClusterHostInstanceResponseBodyInstancesItemsInstanceInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeUserClusterHostInstanceResponseBodyInstancesItems() = default;
};
class DescribeUserClusterHostInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxRecordsPerPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeUserClusterHostInstanceResponseBodyInstancesItems> instancesItems{};
  shared_ptr<long> totalRecords{};
  shared_ptr<long> itemNumbers{};

  DescribeUserClusterHostInstanceResponseBody() {}

  explicit DescribeUserClusterHostInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRecordsPerPage) {
      res["MaxRecordsPerPage"] = boost::any(*maxRecordsPerPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (instancesItems) {
      res["InstancesItems"] = instancesItems ? boost::any(instancesItems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalRecords) {
      res["TotalRecords"] = boost::any(*totalRecords);
    }
    if (itemNumbers) {
      res["ItemNumbers"] = boost::any(*itemNumbers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxRecordsPerPage") != m.end() && !m["MaxRecordsPerPage"].empty()) {
      maxRecordsPerPage = make_shared<long>(boost::any_cast<long>(m["MaxRecordsPerPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("InstancesItems") != m.end() && !m["InstancesItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstancesItems"].type()) {
        DescribeUserClusterHostInstanceResponseBodyInstancesItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstancesItems"]));
        instancesItems = make_shared<DescribeUserClusterHostInstanceResponseBodyInstancesItems>(model1);
      }
    }
    if (m.find("TotalRecords") != m.end() && !m["TotalRecords"].empty()) {
      totalRecords = make_shared<long>(boost::any_cast<long>(m["TotalRecords"]));
    }
    if (m.find("ItemNumbers") != m.end() && !m["ItemNumbers"].empty()) {
      itemNumbers = make_shared<long>(boost::any_cast<long>(m["ItemNumbers"]));
    }
  }


  virtual ~DescribeUserClusterHostInstanceResponseBody() = default;
};
class DescribeUserClusterHostInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUserClusterHostInstanceResponseBody> body{};

  DescribeUserClusterHostInstanceResponse() {}

  explicit DescribeUserClusterHostInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserClusterHostInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserClusterHostInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserClusterHostInstanceResponse() = default;
};
class DescribeZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> acceptLanguage{};

  DescribeZonesRequest() {}

  explicit DescribeZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeZonesRequest() = default;
};
class DescribeZonesResponseBodyZonesKVStoreZone : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneName{};
  shared_ptr<bool> switchNetwork{};
  shared_ptr<bool> isRds{};
  shared_ptr<bool> disabled{};

  DescribeZonesResponseBodyZonesKVStoreZone() {}

  explicit DescribeZonesResponseBodyZonesKVStoreZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    if (switchNetwork) {
      res["SwitchNetwork"] = boost::any(*switchNetwork);
    }
    if (isRds) {
      res["IsRds"] = boost::any(*isRds);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
    if (m.find("SwitchNetwork") != m.end() && !m["SwitchNetwork"].empty()) {
      switchNetwork = make_shared<bool>(boost::any_cast<bool>(m["SwitchNetwork"]));
    }
    if (m.find("IsRds") != m.end() && !m["IsRds"].empty()) {
      isRds = make_shared<bool>(boost::any_cast<bool>(m["IsRds"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
  }


  virtual ~DescribeZonesResponseBodyZonesKVStoreZone() = default;
};
class DescribeZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZonesResponseBodyZonesKVStoreZone>> KVStoreZone{};

  DescribeZonesResponseBodyZones() {}

  explicit DescribeZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (KVStoreZone) {
      vector<boost::any> temp1;
      for(auto item1:*KVStoreZone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KVStoreZone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KVStoreZone") != m.end() && !m["KVStoreZone"].empty()) {
      if (typeid(vector<boost::any>) == m["KVStoreZone"].type()) {
        vector<DescribeZonesResponseBodyZonesKVStoreZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KVStoreZone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZonesKVStoreZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        KVStoreZone = make_shared<vector<DescribeZonesResponseBodyZonesKVStoreZone>>(expect1);
      }
    }
  }


  virtual ~DescribeZonesResponseBodyZones() = default;
};
class DescribeZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeZonesResponseBodyZones> zones{};

  DescribeZonesResponseBody() {}

  explicit DescribeZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeZonesResponseBodyZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeZonesResponseBodyZones>(model1);
      }
    }
  }


  virtual ~DescribeZonesResponseBody() = default;
};
class DescribeZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeZonesResponseBody> body{};

  DescribeZonesResponse() {}

  explicit DescribeZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeZonesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeZonesResponse() = default;
};
class EnableAdditionalBandwidthRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> couponNo{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> bandwidth{};
  shared_ptr<string> orderTimeLength{};
  shared_ptr<string> sourceBiz{};

  EnableAdditionalBandwidthRequest() {}

  explicit EnableAdditionalBandwidthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (orderTimeLength) {
      res["OrderTimeLength"] = boost::any(*orderTimeLength);
    }
    if (sourceBiz) {
      res["SourceBiz"] = boost::any(*sourceBiz);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<string>(boost::any_cast<string>(m["Bandwidth"]));
    }
    if (m.find("OrderTimeLength") != m.end() && !m["OrderTimeLength"].empty()) {
      orderTimeLength = make_shared<string>(boost::any_cast<string>(m["OrderTimeLength"]));
    }
    if (m.find("SourceBiz") != m.end() && !m["SourceBiz"].empty()) {
      sourceBiz = make_shared<string>(boost::any_cast<string>(m["SourceBiz"]));
    }
  }


  virtual ~EnableAdditionalBandwidthRequest() = default;
};
class EnableAdditionalBandwidthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> orderId{};

  EnableAdditionalBandwidthResponseBody() {}

  explicit EnableAdditionalBandwidthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~EnableAdditionalBandwidthResponseBody() = default;
};
class EnableAdditionalBandwidthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableAdditionalBandwidthResponseBody> body{};

  EnableAdditionalBandwidthResponse() {}

  explicit EnableAdditionalBandwidthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableAdditionalBandwidthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableAdditionalBandwidthResponseBody>(model1);
      }
    }
  }


  virtual ~EnableAdditionalBandwidthResponse() = default;
};
class FlushExpireKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> effectiveTime{};

  FlushExpireKeysRequest() {}

  explicit FlushExpireKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
  }


  virtual ~FlushExpireKeysRequest() = default;
};
class FlushExpireKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskId{};

  FlushExpireKeysResponseBody() {}

  explicit FlushExpireKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~FlushExpireKeysResponseBody() = default;
};
class FlushExpireKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FlushExpireKeysResponseBody> body{};

  FlushExpireKeysResponse() {}

  explicit FlushExpireKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FlushExpireKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FlushExpireKeysResponseBody>(model1);
      }
    }
  }


  virtual ~FlushExpireKeysResponse() = default;
};
class FlushInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  FlushInstanceRequest() {}

  explicit FlushInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~FlushInstanceRequest() = default;
};
class FlushInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  FlushInstanceResponseBody() {}

  explicit FlushInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FlushInstanceResponseBody() = default;
};
class FlushInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FlushInstanceResponseBody> body{};

  FlushInstanceResponse() {}

  explicit FlushInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FlushInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FlushInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~FlushInstanceResponse() = default;
};
class GrantAccountPrivilegeRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilege{};

  GrantAccountPrivilegeRequest() {}

  explicit GrantAccountPrivilegeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
  }


  virtual ~GrantAccountPrivilegeRequest() = default;
};
class GrantAccountPrivilegeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GrantAccountPrivilegeResponseBody() {}

  explicit GrantAccountPrivilegeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GrantAccountPrivilegeResponseBody() = default;
};
class GrantAccountPrivilegeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GrantAccountPrivilegeResponseBody> body{};

  GrantAccountPrivilegeResponse() {}

  explicit GrantAccountPrivilegeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GrantAccountPrivilegeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantAccountPrivilegeResponseBody>(model1);
      }
    }
  }


  virtual ~GrantAccountPrivilegeResponse() = default;
};
class InitializeKvstorePermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};

  InitializeKvstorePermissionRequest() {}

  explicit InitializeKvstorePermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~InitializeKvstorePermissionRequest() = default;
};
class InitializeKvstorePermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InitializeKvstorePermissionResponseBody() {}

  explicit InitializeKvstorePermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InitializeKvstorePermissionResponseBody() = default;
};
class InitializeKvstorePermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InitializeKvstorePermissionResponseBody> body{};

  InitializeKvstorePermissionResponse() {}

  explicit InitializeKvstorePermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitializeKvstorePermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitializeKvstorePermissionResponseBody>(model1);
      }
    }
  }


  virtual ~InitializeKvstorePermissionResponse() = default;
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};
  shared_ptr<string> nextToken{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceId{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<string> nextToken{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class MigrateToOtherZoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> effectiveTime{};

  MigrateToOtherZoneRequest() {}

  explicit MigrateToOtherZoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
  }


  virtual ~MigrateToOtherZoneRequest() = default;
};
class MigrateToOtherZoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MigrateToOtherZoneResponseBody() {}

  explicit MigrateToOtherZoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MigrateToOtherZoneResponseBody() = default;
};
class MigrateToOtherZoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MigrateToOtherZoneResponseBody> body{};

  MigrateToOtherZoneResponse() {}

  explicit MigrateToOtherZoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MigrateToOtherZoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MigrateToOtherZoneResponseBody>(model1);
      }
    }
  }


  virtual ~MigrateToOtherZoneResponse() = default;
};
class ModifyAccountDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountDescription{};

  ModifyAccountDescriptionRequest() {}

  explicit ModifyAccountDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
  }


  virtual ~ModifyAccountDescriptionRequest() = default;
};
class ModifyAccountDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccountDescriptionResponseBody() {}

  explicit ModifyAccountDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class ModifyAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> oldAccountPassword{};
  shared_ptr<string> newAccountPassword{};

  ModifyAccountPasswordRequest() {}

  explicit ModifyAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (oldAccountPassword) {
      res["OldAccountPassword"] = boost::any(*oldAccountPassword);
    }
    if (newAccountPassword) {
      res["NewAccountPassword"] = boost::any(*newAccountPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("OldAccountPassword") != m.end() && !m["OldAccountPassword"].empty()) {
      oldAccountPassword = make_shared<string>(boost::any_cast<string>(m["OldAccountPassword"]));
    }
    if (m.find("NewAccountPassword") != m.end() && !m["NewAccountPassword"].empty()) {
      newAccountPassword = make_shared<string>(boost::any_cast<string>(m["NewAccountPassword"]));
    }
  }


  virtual ~ModifyAccountPasswordRequest() = default;
};
class ModifyAccountPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccountPasswordResponseBody() {}

  explicit ModifyAccountPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAccountPasswordResponseBody() = default;
};
class ModifyAccountPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyAccountPasswordResponseBody> body{};

  ModifyAccountPasswordResponse() {}

  explicit ModifyAccountPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAccountPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccountPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccountPasswordResponse() = default;
};
class ModifyActiveOperationTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> ids{};
  shared_ptr<string> switchTime{};

  ModifyActiveOperationTaskRequest() {}

  explicit ModifyActiveOperationTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
  }


  virtual ~ModifyActiveOperationTaskRequest() = default;
};
class ModifyActiveOperationTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ids{};

  ModifyActiveOperationTaskResponseBody() {}

  explicit ModifyActiveOperationTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
  }


  virtual ~ModifyActiveOperationTaskResponseBody() = default;
};
class ModifyActiveOperationTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyActiveOperationTaskResponseBody> body{};

  ModifyActiveOperationTaskResponse() {}

  explicit ModifyActiveOperationTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyActiveOperationTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyActiveOperationTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyActiveOperationTaskResponse() = default;
};
class ModifyAuditLogConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> retention{};
  shared_ptr<bool> dbAudit{};

  ModifyAuditLogConfigRequest() {}

  explicit ModifyAuditLogConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (dbAudit) {
      res["DbAudit"] = boost::any(*dbAudit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("DbAudit") != m.end() && !m["DbAudit"].empty()) {
      dbAudit = make_shared<bool>(boost::any_cast<bool>(m["DbAudit"]));
    }
  }


  virtual ~ModifyAuditLogConfigRequest() = default;
};
class ModifyAuditLogConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAuditLogConfigResponseBody() {}

  explicit ModifyAuditLogConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAuditLogConfigResponseBody() = default;
};
class ModifyAuditLogConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyAuditLogConfigResponseBody> body{};

  ModifyAuditLogConfigResponse() {}

  explicit ModifyAuditLogConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAuditLogConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAuditLogConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAuditLogConfigResponse() = default;
};
class ModifyBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<long> enableBackupLog{};

  ModifyBackupPolicyRequest() {}

  explicit ModifyBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (enableBackupLog) {
      res["EnableBackupLog"] = boost::any(*enableBackupLog);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("EnableBackupLog") != m.end() && !m["EnableBackupLog"].empty()) {
      enableBackupLog = make_shared<long>(boost::any_cast<long>(m["EnableBackupLog"]));
    }
  }


  virtual ~ModifyBackupPolicyRequest() = default;
};
class ModifyBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyBackupPolicyResponseBody() {}

  explicit ModifyBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyBackupPolicyResponseBody() = default;
};
class ModifyBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyBackupPolicyResponseBody> body{};

  ModifyBackupPolicyResponse() {}

  explicit ModifyBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupPolicyResponse() = default;
};
class ModifyDBInstanceConnectionStringRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> newConnectionString{};
  shared_ptr<string> currentConnectionString{};
  shared_ptr<string> port{};
  shared_ptr<string> IPType{};

  ModifyDBInstanceConnectionStringRequest() {}

  explicit ModifyDBInstanceConnectionStringRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (newConnectionString) {
      res["NewConnectionString"] = boost::any(*newConnectionString);
    }
    if (currentConnectionString) {
      res["CurrentConnectionString"] = boost::any(*currentConnectionString);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (IPType) {
      res["IPType"] = boost::any(*IPType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NewConnectionString") != m.end() && !m["NewConnectionString"].empty()) {
      newConnectionString = make_shared<string>(boost::any_cast<string>(m["NewConnectionString"]));
    }
    if (m.find("CurrentConnectionString") != m.end() && !m["CurrentConnectionString"].empty()) {
      currentConnectionString = make_shared<string>(boost::any_cast<string>(m["CurrentConnectionString"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("IPType") != m.end() && !m["IPType"].empty()) {
      IPType = make_shared<string>(boost::any_cast<string>(m["IPType"]));
    }
  }


  virtual ~ModifyDBInstanceConnectionStringRequest() = default;
};
class ModifyDBInstanceConnectionStringResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceConnectionStringResponseBody() {}

  explicit ModifyDBInstanceConnectionStringResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceConnectionStringResponseBody() = default;
};
class ModifyDBInstanceConnectionStringResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBInstanceConnectionStringResponseBody> body{};

  ModifyDBInstanceConnectionStringResponse() {}

  explicit ModifyDBInstanceConnectionStringResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceConnectionStringResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceConnectionStringResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceConnectionStringResponse() = default;
};
class ModifyInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> newPassword{};
  shared_ptr<bool> instanceReleaseProtection{};

  ModifyInstanceAttributeRequest() {}

  explicit ModifyInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (newPassword) {
      res["NewPassword"] = boost::any(*newPassword);
    }
    if (instanceReleaseProtection) {
      res["InstanceReleaseProtection"] = boost::any(*instanceReleaseProtection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("NewPassword") != m.end() && !m["NewPassword"].empty()) {
      newPassword = make_shared<string>(boost::any_cast<string>(m["NewPassword"]));
    }
    if (m.find("InstanceReleaseProtection") != m.end() && !m["InstanceReleaseProtection"].empty()) {
      instanceReleaseProtection = make_shared<bool>(boost::any_cast<bool>(m["InstanceReleaseProtection"]));
    }
  }


  virtual ~ModifyInstanceAttributeRequest() = default;
};
class ModifyInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceAttributeResponseBody() {}

  explicit ModifyInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceAttributeResponseBody() = default;
};
class ModifyInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceAttributeResponseBody> body{};

  ModifyInstanceAttributeResponse() {}

  explicit ModifyInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceAttributeResponse() = default;
};
class ModifyInstanceAutoRenewalAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> duration{};
  shared_ptr<string> autoRenew{};

  ModifyInstanceAutoRenewalAttributeRequest() {}

  explicit ModifyInstanceAutoRenewalAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
  }


  virtual ~ModifyInstanceAutoRenewalAttributeRequest() = default;
};
class ModifyInstanceAutoRenewalAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceAutoRenewalAttributeResponseBody() {}

  explicit ModifyInstanceAutoRenewalAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceAutoRenewalAttributeResponseBody() = default;
};
class ModifyInstanceAutoRenewalAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceAutoRenewalAttributeResponseBody> body{};

  ModifyInstanceAutoRenewalAttributeResponse() {}

  explicit ModifyInstanceAutoRenewalAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceAutoRenewalAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceAutoRenewalAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceAutoRenewalAttributeResponse() = default;
};
class ModifyInstanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> config{};

  ModifyInstanceConfigRequest() {}

  explicit ModifyInstanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
  }


  virtual ~ModifyInstanceConfigRequest() = default;
};
class ModifyInstanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceConfigResponseBody() {}

  explicit ModifyInstanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceConfigResponseBody() = default;
};
class ModifyInstanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceConfigResponseBody> body{};

  ModifyInstanceConfigResponse() {}

  explicit ModifyInstanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceConfigResponse() = default;
};
class ModifyInstanceMaintainTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> maintainEndTime{};

  ModifyInstanceMaintainTimeRequest() {}

  explicit ModifyInstanceMaintainTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
  }


  virtual ~ModifyInstanceMaintainTimeRequest() = default;
};
class ModifyInstanceMaintainTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceMaintainTimeResponseBody() {}

  explicit ModifyInstanceMaintainTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceMaintainTimeResponseBody() = default;
};
class ModifyInstanceMaintainTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceMaintainTimeResponseBody> body{};

  ModifyInstanceMaintainTimeResponse() {}

  explicit ModifyInstanceMaintainTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceMaintainTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceMaintainTimeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceMaintainTimeResponse() = default;
};
class ModifyInstanceMajorVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> majorVersion{};
  shared_ptr<string> effectiveTime{};

  ModifyInstanceMajorVersionRequest() {}

  explicit ModifyInstanceMajorVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (majorVersion) {
      res["MajorVersion"] = boost::any(*majorVersion);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MajorVersion") != m.end() && !m["MajorVersion"].empty()) {
      majorVersion = make_shared<string>(boost::any_cast<string>(m["MajorVersion"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
  }


  virtual ~ModifyInstanceMajorVersionRequest() = default;
};
class ModifyInstanceMajorVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceMajorVersionResponseBody() {}

  explicit ModifyInstanceMajorVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceMajorVersionResponseBody() = default;
};
class ModifyInstanceMajorVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceMajorVersionResponseBody> body{};

  ModifyInstanceMajorVersionResponse() {}

  explicit ModifyInstanceMajorVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceMajorVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceMajorVersionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceMajorVersionResponse() = default;
};
class ModifyInstanceMinorVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> minorversion{};
  shared_ptr<string> effectiveTime{};

  ModifyInstanceMinorVersionRequest() {}

  explicit ModifyInstanceMinorVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (minorversion) {
      res["Minorversion"] = boost::any(*minorversion);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Minorversion") != m.end() && !m["Minorversion"].empty()) {
      minorversion = make_shared<string>(boost::any_cast<string>(m["Minorversion"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
  }


  virtual ~ModifyInstanceMinorVersionRequest() = default;
};
class ModifyInstanceMinorVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceMinorVersionResponseBody() {}

  explicit ModifyInstanceMinorVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceMinorVersionResponseBody() = default;
};
class ModifyInstanceMinorVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceMinorVersionResponseBody> body{};

  ModifyInstanceMinorVersionResponse() {}

  explicit ModifyInstanceMinorVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceMinorVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceMinorVersionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceMinorVersionResponse() = default;
};
class ModifyInstanceNetExpireTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> connectionString{};
  shared_ptr<long> classicExpiredDays{};

  ModifyInstanceNetExpireTimeRequest() {}

  explicit ModifyInstanceNetExpireTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (classicExpiredDays) {
      res["ClassicExpiredDays"] = boost::any(*classicExpiredDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("ClassicExpiredDays") != m.end() && !m["ClassicExpiredDays"].empty()) {
      classicExpiredDays = make_shared<long>(boost::any_cast<long>(m["ClassicExpiredDays"]));
    }
  }


  virtual ~ModifyInstanceNetExpireTimeRequest() = default;
};
class ModifyInstanceNetExpireTimeResponseBodyNetInfoItemsNetInfoItem : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceNetType{};
  shared_ptr<string> port{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> IPAddress{};

  ModifyInstanceNetExpireTimeResponseBodyNetInfoItemsNetInfoItem() {}

  explicit ModifyInstanceNetExpireTimeResponseBodyNetInfoItemsNetInfoItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceNetType) {
      res["DBInstanceNetType"] = boost::any(*DBInstanceNetType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceNetType") != m.end() && !m["DBInstanceNetType"].empty()) {
      DBInstanceNetType = make_shared<string>(boost::any_cast<string>(m["DBInstanceNetType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
  }


  virtual ~ModifyInstanceNetExpireTimeResponseBodyNetInfoItemsNetInfoItem() = default;
};
class ModifyInstanceNetExpireTimeResponseBodyNetInfoItems : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyInstanceNetExpireTimeResponseBodyNetInfoItemsNetInfoItem>> netInfoItem{};

  ModifyInstanceNetExpireTimeResponseBodyNetInfoItems() {}

  explicit ModifyInstanceNetExpireTimeResponseBodyNetInfoItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (netInfoItem) {
      vector<boost::any> temp1;
      for(auto item1:*netInfoItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetInfoItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetInfoItem") != m.end() && !m["NetInfoItem"].empty()) {
      if (typeid(vector<boost::any>) == m["NetInfoItem"].type()) {
        vector<ModifyInstanceNetExpireTimeResponseBodyNetInfoItemsNetInfoItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetInfoItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyInstanceNetExpireTimeResponseBodyNetInfoItemsNetInfoItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        netInfoItem = make_shared<vector<ModifyInstanceNetExpireTimeResponseBodyNetInfoItemsNetInfoItem>>(expect1);
      }
    }
  }


  virtual ~ModifyInstanceNetExpireTimeResponseBodyNetInfoItems() = default;
};
class ModifyInstanceNetExpireTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<ModifyInstanceNetExpireTimeResponseBodyNetInfoItems> netInfoItems{};

  ModifyInstanceNetExpireTimeResponseBody() {}

  explicit ModifyInstanceNetExpireTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (netInfoItems) {
      res["NetInfoItems"] = netInfoItems ? boost::any(netInfoItems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NetInfoItems") != m.end() && !m["NetInfoItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetInfoItems"].type()) {
        ModifyInstanceNetExpireTimeResponseBodyNetInfoItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetInfoItems"]));
        netInfoItems = make_shared<ModifyInstanceNetExpireTimeResponseBodyNetInfoItems>(model1);
      }
    }
  }


  virtual ~ModifyInstanceNetExpireTimeResponseBody() = default;
};
class ModifyInstanceNetExpireTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceNetExpireTimeResponseBody> body{};

  ModifyInstanceNetExpireTimeResponse() {}

  explicit ModifyInstanceNetExpireTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceNetExpireTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceNetExpireTimeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceNetExpireTimeResponse() = default;
};
class ModifyInstanceSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> couponNo{};
  shared_ptr<bool> forceUpgrade{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> orderType{};
  shared_ptr<string> majorVersion{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> sourceBiz{};

  ModifyInstanceSpecRequest() {}

  explicit ModifyInstanceSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (forceUpgrade) {
      res["ForceUpgrade"] = boost::any(*forceUpgrade);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (majorVersion) {
      res["MajorVersion"] = boost::any(*majorVersion);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (sourceBiz) {
      res["SourceBiz"] = boost::any(*sourceBiz);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("ForceUpgrade") != m.end() && !m["ForceUpgrade"].empty()) {
      forceUpgrade = make_shared<bool>(boost::any_cast<bool>(m["ForceUpgrade"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("MajorVersion") != m.end() && !m["MajorVersion"].empty()) {
      majorVersion = make_shared<string>(boost::any_cast<string>(m["MajorVersion"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("SourceBiz") != m.end() && !m["SourceBiz"].empty()) {
      sourceBiz = make_shared<string>(boost::any_cast<string>(m["SourceBiz"]));
    }
  }


  virtual ~ModifyInstanceSpecRequest() = default;
};
class ModifyInstanceSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> orderId{};

  ModifyInstanceSpecResponseBody() {}

  explicit ModifyInstanceSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~ModifyInstanceSpecResponseBody() = default;
};
class ModifyInstanceSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceSpecResponseBody> body{};

  ModifyInstanceSpecResponse() {}

  explicit ModifyInstanceSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceSpecResponse() = default;
};
class ModifyInstanceSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> SSLEnabled{};

  ModifyInstanceSSLRequest() {}

  explicit ModifyInstanceSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (SSLEnabled) {
      res["SSLEnabled"] = boost::any(*SSLEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SSLEnabled") != m.end() && !m["SSLEnabled"].empty()) {
      SSLEnabled = make_shared<string>(boost::any_cast<string>(m["SSLEnabled"]));
    }
  }


  virtual ~ModifyInstanceSSLRequest() = default;
};
class ModifyInstanceSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskId{};

  ModifyInstanceSSLResponseBody() {}

  explicit ModifyInstanceSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ModifyInstanceSSLResponseBody() = default;
};
class ModifyInstanceSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceSSLResponseBody> body{};

  ModifyInstanceSSLResponse() {}

  explicit ModifyInstanceSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceSSLResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceSSLResponse() = default;
};
class ModifyInstanceVpcAuthModeRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> vpcAuthMode{};

  ModifyInstanceVpcAuthModeRequest() {}

  explicit ModifyInstanceVpcAuthModeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (vpcAuthMode) {
      res["VpcAuthMode"] = boost::any(*vpcAuthMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("VpcAuthMode") != m.end() && !m["VpcAuthMode"].empty()) {
      vpcAuthMode = make_shared<string>(boost::any_cast<string>(m["VpcAuthMode"]));
    }
  }


  virtual ~ModifyInstanceVpcAuthModeRequest() = default;
};
class ModifyInstanceVpcAuthModeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceVpcAuthModeResponseBody() {}

  explicit ModifyInstanceVpcAuthModeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceVpcAuthModeResponseBody() = default;
};
class ModifyInstanceVpcAuthModeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyInstanceVpcAuthModeResponseBody> body{};

  ModifyInstanceVpcAuthModeResponse() {}

  explicit ModifyInstanceVpcAuthModeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceVpcAuthModeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceVpcAuthModeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceVpcAuthModeResponse() = default;
};
class ModifyIntranetAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> bandWidth{};
  shared_ptr<string> nodeId{};

  ModifyIntranetAttributeRequest() {}

  explicit ModifyIntranetAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (bandWidth) {
      res["BandWidth"] = boost::any(*bandWidth);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("BandWidth") != m.end() && !m["BandWidth"].empty()) {
      bandWidth = make_shared<long>(boost::any_cast<long>(m["BandWidth"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~ModifyIntranetAttributeRequest() = default;
};
class ModifyIntranetAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyIntranetAttributeResponseBody() {}

  explicit ModifyIntranetAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyIntranetAttributeResponseBody() = default;
};
class ModifyIntranetAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyIntranetAttributeResponseBody> body{};

  ModifyIntranetAttributeResponse() {}

  explicit ModifyIntranetAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyIntranetAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyIntranetAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyIntranetAttributeResponse() = default;
};
class ModifyNodeSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> couponNo{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> orderType{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> switchTimeMode{};

  ModifyNodeSpecRequest() {}

  explicit ModifyNodeSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (switchTimeMode) {
      res["SwitchTimeMode"] = boost::any(*switchTimeMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("SwitchTimeMode") != m.end() && !m["SwitchTimeMode"].empty()) {
      switchTimeMode = make_shared<string>(boost::any_cast<string>(m["SwitchTimeMode"]));
    }
  }


  virtual ~ModifyNodeSpecRequest() = default;
};
class ModifyNodeSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> orderId{};

  ModifyNodeSpecResponseBody() {}

  explicit ModifyNodeSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~ModifyNodeSpecResponseBody() = default;
};
class ModifyNodeSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyNodeSpecResponseBody> body{};

  ModifyNodeSpecResponse() {}

  explicit ModifyNodeSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyNodeSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNodeSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNodeSpecResponse() = default;
};
class ModifyResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> regionId{};

  ModifyResourceGroupRequest() {}

  explicit ModifyResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyResourceGroupRequest() = default;
};
class ModifyResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyResourceGroupResponseBody() {}

  explicit ModifyResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyResourceGroupResponseBody() = default;
};
class ModifyResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyResourceGroupResponseBody> body{};

  ModifyResourceGroupResponse() {}

  explicit ModifyResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyResourceGroupResponse() = default;
};
class ModifySecurityGroupConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> securityGroupId{};

  ModifySecurityGroupConfigurationRequest() {}

  explicit ModifySecurityGroupConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
  }


  virtual ~ModifySecurityGroupConfigurationRequest() = default;
};
class ModifySecurityGroupConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySecurityGroupConfigurationResponseBody() {}

  explicit ModifySecurityGroupConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySecurityGroupConfigurationResponseBody() = default;
};
class ModifySecurityGroupConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifySecurityGroupConfigurationResponseBody> body{};

  ModifySecurityGroupConfigurationResponse() {}

  explicit ModifySecurityGroupConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySecurityGroupConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySecurityGroupConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySecurityGroupConfigurationResponse() = default;
};
class ModifySecurityIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> securityIps{};
  shared_ptr<string> securityIpGroupName{};
  shared_ptr<string> securityIpGroupAttribute{};
  shared_ptr<string> modifyMode{};

  ModifySecurityIpsRequest() {}

  explicit ModifySecurityIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (securityIps) {
      res["SecurityIps"] = boost::any(*securityIps);
    }
    if (securityIpGroupName) {
      res["SecurityIpGroupName"] = boost::any(*securityIpGroupName);
    }
    if (securityIpGroupAttribute) {
      res["SecurityIpGroupAttribute"] = boost::any(*securityIpGroupAttribute);
    }
    if (modifyMode) {
      res["ModifyMode"] = boost::any(*modifyMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SecurityIps") != m.end() && !m["SecurityIps"].empty()) {
      securityIps = make_shared<string>(boost::any_cast<string>(m["SecurityIps"]));
    }
    if (m.find("SecurityIpGroupName") != m.end() && !m["SecurityIpGroupName"].empty()) {
      securityIpGroupName = make_shared<string>(boost::any_cast<string>(m["SecurityIpGroupName"]));
    }
    if (m.find("SecurityIpGroupAttribute") != m.end() && !m["SecurityIpGroupAttribute"].empty()) {
      securityIpGroupAttribute = make_shared<string>(boost::any_cast<string>(m["SecurityIpGroupAttribute"]));
    }
    if (m.find("ModifyMode") != m.end() && !m["ModifyMode"].empty()) {
      modifyMode = make_shared<string>(boost::any_cast<string>(m["ModifyMode"]));
    }
  }


  virtual ~ModifySecurityIpsRequest() = default;
};
class ModifySecurityIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySecurityIpsResponseBody() {}

  explicit ModifySecurityIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class ModifyUserClusterHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> hostId{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> allocationStatus{};
  shared_ptr<string> engine{};
  shared_ptr<string> zoneId{};

  ModifyUserClusterHostRequest() {}

  explicit ModifyUserClusterHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (allocationStatus) {
      res["AllocationStatus"] = boost::any(*allocationStatus);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("AllocationStatus") != m.end() && !m["AllocationStatus"].empty()) {
      allocationStatus = make_shared<long>(boost::any_cast<long>(m["AllocationStatus"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ModifyUserClusterHostRequest() = default;
};
class ModifyUserClusterHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUserClusterHostResponseBody() {}

  explicit ModifyUserClusterHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUserClusterHostResponseBody() = default;
};
class ModifyUserClusterHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyUserClusterHostResponseBody> body{};

  ModifyUserClusterHostResponse() {}

  explicit ModifyUserClusterHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyUserClusterHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUserClusterHostResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUserClusterHostResponse() = default;
};
class ReleaseDirectConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  ReleaseDirectConnectionRequest() {}

  explicit ReleaseDirectConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ReleaseDirectConnectionRequest() = default;
};
class ReleaseDirectConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseDirectConnectionResponseBody() {}

  explicit ReleaseDirectConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseDirectConnectionResponseBody() = default;
};
class ReleaseDirectConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReleaseDirectConnectionResponseBody> body{};

  ReleaseDirectConnectionResponse() {}

  explicit ReleaseDirectConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseDirectConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseDirectConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseDirectConnectionResponse() = default;
};
class ReleaseInstancePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> currentConnectionString{};

  ReleaseInstancePublicConnectionRequest() {}

  explicit ReleaseInstancePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (currentConnectionString) {
      res["CurrentConnectionString"] = boost::any(*currentConnectionString);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CurrentConnectionString") != m.end() && !m["CurrentConnectionString"].empty()) {
      currentConnectionString = make_shared<string>(boost::any_cast<string>(m["CurrentConnectionString"]));
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
class RenewInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> capacity{};
  shared_ptr<string> instanceClass{};
  shared_ptr<long> period{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> fromApp{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> couponNo{};

  RenewInstanceRequest() {}

  explicit RenewInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (fromApp) {
      res["FromApp"] = boost::any(*fromApp);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<string>(boost::any_cast<string>(m["Capacity"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("FromApp") != m.end() && !m["FromApp"].empty()) {
      fromApp = make_shared<string>(boost::any_cast<string>(m["FromApp"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
  }


  virtual ~RenewInstanceRequest() = default;
};
class RenewInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> endTime{};

  RenewInstanceResponseBody() {}

  explicit RenewInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~RenewInstanceResponseBody() = default;
};
class RenewInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RenewInstanceResponseBody> body{};

  RenewInstanceResponse() {}

  explicit RenewInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RenewInstanceResponse() = default;
};
class ReplaceUserClusterHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> hostId{};
  shared_ptr<string> engine{};
  shared_ptr<string> zoneId{};

  ReplaceUserClusterHostRequest() {}

  explicit ReplaceUserClusterHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hostId) {
      res["HostId"] = boost::any(*hostId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HostId") != m.end() && !m["HostId"].empty()) {
      hostId = make_shared<string>(boost::any_cast<string>(m["HostId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ReplaceUserClusterHostRequest() = default;
};
class ReplaceUserClusterHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> newHostId{};

  ReplaceUserClusterHostResponseBody() {}

  explicit ReplaceUserClusterHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (newHostId) {
      res["NewHostId"] = boost::any(*newHostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("NewHostId") != m.end() && !m["NewHostId"].empty()) {
      newHostId = make_shared<string>(boost::any_cast<string>(m["NewHostId"]));
    }
  }


  virtual ~ReplaceUserClusterHostResponseBody() = default;
};
class ReplaceUserClusterHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReplaceUserClusterHostResponseBody> body{};

  ReplaceUserClusterHostResponse() {}

  explicit ReplaceUserClusterHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReplaceUserClusterHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReplaceUserClusterHostResponseBody>(model1);
      }
    }
  }


  virtual ~ReplaceUserClusterHostResponse() = default;
};
class ResetAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};

  ResetAccountPasswordRequest() {}

  explicit ResetAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
  }


  virtual ~ResetAccountPasswordRequest() = default;
};
class ResetAccountPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetAccountPasswordResponseBody() {}

  explicit ResetAccountPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetAccountPasswordResponseBody() = default;
};
class ResetAccountPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResetAccountPasswordResponseBody> body{};

  ResetAccountPasswordResponse() {}

  explicit ResetAccountPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetAccountPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetAccountPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ResetAccountPasswordResponse() = default;
};
class RestartInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<bool> upgradeMinorVersion{};

  RestartInstanceRequest() {}

  explicit RestartInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (upgradeMinorVersion) {
      res["UpgradeMinorVersion"] = boost::any(*upgradeMinorVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("UpgradeMinorVersion") != m.end() && !m["UpgradeMinorVersion"].empty()) {
      upgradeMinorVersion = make_shared<bool>(boost::any_cast<bool>(m["UpgradeMinorVersion"]));
    }
  }


  virtual ~RestartInstanceRequest() = default;
};
class RestartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskId{};

  RestartInstanceResponseBody() {}

  explicit RestartInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~RestartInstanceResponseBody() = default;
};
class RestartInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestartInstanceResponseBody> body{};

  RestartInstanceResponse() {}

  explicit RestartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestartInstanceResponse() = default;
};
class RestoreInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> backupId{};

  RestoreInstanceRequest() {}

  explicit RestoreInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
  }


  virtual ~RestoreInstanceRequest() = default;
};
class RestoreInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestoreInstanceResponseBody() {}

  explicit RestoreInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RestoreInstanceResponseBody() = default;
};
class RestoreInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestoreInstanceResponseBody> body{};

  RestoreInstanceResponse() {}

  explicit RestoreInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestoreInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestoreInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestoreInstanceResponse() = default;
};
class SwitchInstanceHARequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> switchMode{};
  shared_ptr<string> switchType{};

  SwitchInstanceHARequest() {}

  explicit SwitchInstanceHARequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (switchMode) {
      res["SwitchMode"] = boost::any(*switchMode);
    }
    if (switchType) {
      res["SwitchType"] = boost::any(*switchType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("SwitchMode") != m.end() && !m["SwitchMode"].empty()) {
      switchMode = make_shared<long>(boost::any_cast<long>(m["SwitchMode"]));
    }
    if (m.find("SwitchType") != m.end() && !m["SwitchType"].empty()) {
      switchType = make_shared<string>(boost::any_cast<string>(m["SwitchType"]));
    }
  }


  virtual ~SwitchInstanceHARequest() = default;
};
class SwitchInstanceHAResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SwitchInstanceHAResponseBody() {}

  explicit SwitchInstanceHAResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SwitchInstanceHAResponseBody() = default;
};
class SwitchInstanceHAResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SwitchInstanceHAResponseBody> body{};

  SwitchInstanceHAResponse() {}

  explicit SwitchInstanceHAResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchInstanceHAResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchInstanceHAResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchInstanceHAResponse() = default;
};
class SwitchNetworkRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> targetNetworkType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> retainClassic{};
  shared_ptr<string> classicExpiredDays{};

  SwitchNetworkRequest() {}

  explicit SwitchNetworkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (targetNetworkType) {
      res["TargetNetworkType"] = boost::any(*targetNetworkType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (retainClassic) {
      res["RetainClassic"] = boost::any(*retainClassic);
    }
    if (classicExpiredDays) {
      res["ClassicExpiredDays"] = boost::any(*classicExpiredDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("TargetNetworkType") != m.end() && !m["TargetNetworkType"].empty()) {
      targetNetworkType = make_shared<string>(boost::any_cast<string>(m["TargetNetworkType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RetainClassic") != m.end() && !m["RetainClassic"].empty()) {
      retainClassic = make_shared<string>(boost::any_cast<string>(m["RetainClassic"]));
    }
    if (m.find("ClassicExpiredDays") != m.end() && !m["ClassicExpiredDays"].empty()) {
      classicExpiredDays = make_shared<string>(boost::any_cast<string>(m["ClassicExpiredDays"]));
    }
  }


  virtual ~SwitchNetworkRequest() = default;
};
class SwitchNetworkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  SwitchNetworkResponseBody() {}

  explicit SwitchNetworkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~SwitchNetworkResponseBody() = default;
};
class SwitchNetworkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SwitchNetworkResponseBody> body{};

  SwitchNetworkResponse() {}

  explicit SwitchNetworkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchNetworkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchNetworkResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchNetworkResponse() = default;
};
class SyncDtsStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};

  SyncDtsStatusRequest() {}

  explicit SyncDtsStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~SyncDtsStatusRequest() = default;
};
class SyncDtsStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SyncDtsStatusResponseBody() {}

  explicit SyncDtsStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SyncDtsStatusResponseBody() = default;
};
class SyncDtsStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SyncDtsStatusResponseBody> body{};

  SyncDtsStatusResponse() {}

  explicit SyncDtsStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncDtsStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncDtsStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SyncDtsStatusResponse() = default;
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class TransformToPrePaidRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> period{};
  shared_ptr<bool> autoPay{};

  TransformToPrePaidRequest() {}

  explicit TransformToPrePaidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
  }


  virtual ~TransformToPrePaidRequest() = default;
};
class TransformToPrePaidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> endTime{};

  TransformToPrePaidResponseBody() {}

  explicit TransformToPrePaidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~TransformToPrePaidResponseBody() = default;
};
class TransformToPrePaidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TransformToPrePaidResponseBody> body{};

  TransformToPrePaidResponse() {}

  explicit TransformToPrePaidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TransformToPrePaidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransformToPrePaidResponseBody>(model1);
      }
    }
  }


  virtual ~TransformToPrePaidResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> tagKey{};
  shared_ptr<bool> all{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (all) {
      res["All"] = boost::any(*all);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
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
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
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
  AddShardingNodeResponse addShardingNodeWithOptions(shared_ptr<AddShardingNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddShardingNodeResponse addShardingNode(shared_ptr<AddShardingNodeRequest> request);
  AllocateDirectConnectionResponse allocateDirectConnectionWithOptions(shared_ptr<AllocateDirectConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateDirectConnectionResponse allocateDirectConnection(shared_ptr<AllocateDirectConnectionRequest> request);
  AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(shared_ptr<AllocateInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(shared_ptr<AllocateInstancePublicConnectionRequest> request);
  CreateAccountResponse createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountResponse createAccount(shared_ptr<CreateAccountRequest> request);
  CreateBackupResponse createBackupWithOptions(shared_ptr<CreateBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBackupResponse createBackup(shared_ptr<CreateBackupRequest> request);
  CreateCacheAnalysisTaskResponse createCacheAnalysisTaskWithOptions(shared_ptr<CreateCacheAnalysisTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCacheAnalysisTaskResponse createCacheAnalysisTask(shared_ptr<CreateCacheAnalysisTaskRequest> request);
  CreateGlobalDistributeCacheResponse createGlobalDistributeCacheWithOptions(shared_ptr<CreateGlobalDistributeCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGlobalDistributeCacheResponse createGlobalDistributeCache(shared_ptr<CreateGlobalDistributeCacheRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateTairInstanceResponse createTairInstanceWithOptions(shared_ptr<CreateTairInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTairInstanceResponse createTairInstance(shared_ptr<CreateTairInstanceRequest> request);
  CreateUserClusterHostResponse createUserClusterHostWithOptions(shared_ptr<CreateUserClusterHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserClusterHostResponse createUserClusterHost(shared_ptr<CreateUserClusterHostRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<DeleteInstanceRequest> request);
  DeleteShardingNodeResponse deleteShardingNodeWithOptions(shared_ptr<DeleteShardingNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteShardingNodeResponse deleteShardingNode(shared_ptr<DeleteShardingNodeRequest> request);
  DeleteUserClusterHostResponse deleteUserClusterHostWithOptions(shared_ptr<DeleteUserClusterHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserClusterHostResponse deleteUserClusterHost(shared_ptr<DeleteUserClusterHostRequest> request);
  DescribeAccountsResponse describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountsResponse describeAccounts(shared_ptr<DescribeAccountsRequest> request);
  DescribeActiveOperationTaskResponse describeActiveOperationTaskWithOptions(shared_ptr<DescribeActiveOperationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeActiveOperationTaskResponse describeActiveOperationTask(shared_ptr<DescribeActiveOperationTaskRequest> request);
  DescribeAuditRecordsResponse describeAuditRecordsWithOptions(shared_ptr<DescribeAuditRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditRecordsResponse describeAuditRecords(shared_ptr<DescribeAuditRecordsRequest> request);
  DescribeAvailableResourceResponse describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableResourceResponse describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeBackupsResponse describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupsResponse describeBackups(shared_ptr<DescribeBackupsRequest> request);
  DescribeBackupTasksResponse describeBackupTasksWithOptions(shared_ptr<DescribeBackupTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupTasksResponse describeBackupTasks(shared_ptr<DescribeBackupTasksRequest> request);
  DescribeCacheAnalysisReportResponse describeCacheAnalysisReportWithOptions(shared_ptr<DescribeCacheAnalysisReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCacheAnalysisReportResponse describeCacheAnalysisReport(shared_ptr<DescribeCacheAnalysisReportRequest> request);
  DescribeCacheAnalysisReportListResponse describeCacheAnalysisReportListWithOptions(shared_ptr<DescribeCacheAnalysisReportListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCacheAnalysisReportListResponse describeCacheAnalysisReportList(shared_ptr<DescribeCacheAnalysisReportListRequest> request);
  DescribeClusterMemberInfoResponse describeClusterMemberInfoWithOptions(shared_ptr<DescribeClusterMemberInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterMemberInfoResponse describeClusterMemberInfo(shared_ptr<DescribeClusterMemberInfoRequest> request);
  DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfoWithOptions(shared_ptr<DescribeDBInstanceNetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfo(shared_ptr<DescribeDBInstanceNetInfoRequest> request);
  DescribeDedicatedClusterInstanceListResponse describeDedicatedClusterInstanceListWithOptions(shared_ptr<DescribeDedicatedClusterInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedClusterInstanceListResponse describeDedicatedClusterInstanceList(shared_ptr<DescribeDedicatedClusterInstanceListRequest> request);
  DescribeEngineVersionResponse describeEngineVersionWithOptions(shared_ptr<DescribeEngineVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEngineVersionResponse describeEngineVersion(shared_ptr<DescribeEngineVersionRequest> request);
  DescribeGlobalDistributeCacheResponse describeGlobalDistributeCacheWithOptions(shared_ptr<DescribeGlobalDistributeCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGlobalDistributeCacheResponse describeGlobalDistributeCache(shared_ptr<DescribeGlobalDistributeCacheRequest> request);
  DescribeHistoryMonitorValuesResponse describeHistoryMonitorValuesWithOptions(shared_ptr<DescribeHistoryMonitorValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHistoryMonitorValuesResponse describeHistoryMonitorValues(shared_ptr<DescribeHistoryMonitorValuesRequest> request);
  DescribeInstanceAttributeResponse describeInstanceAttributeWithOptions(shared_ptr<DescribeInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceAttributeResponse describeInstanceAttribute(shared_ptr<DescribeInstanceAttributeRequest> request);
  DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttributeWithOptions(shared_ptr<DescribeInstanceAutoRenewalAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttribute(shared_ptr<DescribeInstanceAutoRenewalAttributeRequest> request);
  DescribeInstanceConfigResponse describeInstanceConfigWithOptions(shared_ptr<DescribeInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceConfigResponse describeInstanceConfig(shared_ptr<DescribeInstanceConfigRequest> request);
  DescribeInstancesResponse describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstancesResponse describeInstances(shared_ptr<DescribeInstancesRequest> request);
  DescribeInstanceSSLResponse describeInstanceSSLWithOptions(shared_ptr<DescribeInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceSSLResponse describeInstanceSSL(shared_ptr<DescribeInstanceSSLRequest> request);
  DescribeIntranetAttributeResponse describeIntranetAttributeWithOptions(shared_ptr<DescribeIntranetAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIntranetAttributeResponse describeIntranetAttribute(shared_ptr<DescribeIntranetAttributeRequest> request);
  DescribeLogicInstanceTopologyResponse describeLogicInstanceTopologyWithOptions(shared_ptr<DescribeLogicInstanceTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogicInstanceTopologyResponse describeLogicInstanceTopology(shared_ptr<DescribeLogicInstanceTopologyRequest> request);
  DescribeMonitorItemsResponse describeMonitorItemsWithOptions(shared_ptr<DescribeMonitorItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMonitorItemsResponse describeMonitorItems(shared_ptr<DescribeMonitorItemsRequest> request);
  DescribeParametersResponse describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParametersResponse describeParameters(shared_ptr<DescribeParametersRequest> request);
  DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(shared_ptr<DescribeParameterTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParameterTemplatesResponse describeParameterTemplates(shared_ptr<DescribeParameterTemplatesRequest> request);
  DescribePriceResponse describePriceWithOptions(shared_ptr<DescribePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePriceResponse describePrice(shared_ptr<DescribePriceRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeRoleZoneInfoResponse describeRoleZoneInfoWithOptions(shared_ptr<DescribeRoleZoneInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRoleZoneInfoResponse describeRoleZoneInfo(shared_ptr<DescribeRoleZoneInfoRequest> request);
  DescribeRunningLogRecordsResponse describeRunningLogRecordsWithOptions(shared_ptr<DescribeRunningLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRunningLogRecordsResponse describeRunningLogRecords(shared_ptr<DescribeRunningLogRecordsRequest> request);
  DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfigurationWithOptions(shared_ptr<DescribeSecurityGroupConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfiguration(shared_ptr<DescribeSecurityGroupConfigurationRequest> request);
  DescribeSecurityIpsResponse describeSecurityIpsWithOptions(shared_ptr<DescribeSecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecurityIpsResponse describeSecurityIps(shared_ptr<DescribeSecurityIpsRequest> request);
  DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowLogRecordsResponse describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request);
  DescribeTasksResponse describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTasksResponse describeTasks(shared_ptr<DescribeTasksRequest> request);
  DescribeUserClusterHostResponse describeUserClusterHostWithOptions(shared_ptr<DescribeUserClusterHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserClusterHostResponse describeUserClusterHost(shared_ptr<DescribeUserClusterHostRequest> request);
  DescribeUserClusterHostInstanceResponse describeUserClusterHostInstanceWithOptions(shared_ptr<DescribeUserClusterHostInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserClusterHostInstanceResponse describeUserClusterHostInstance(shared_ptr<DescribeUserClusterHostInstanceRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  EnableAdditionalBandwidthResponse enableAdditionalBandwidthWithOptions(shared_ptr<EnableAdditionalBandwidthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAdditionalBandwidthResponse enableAdditionalBandwidth(shared_ptr<EnableAdditionalBandwidthRequest> request);
  FlushExpireKeysResponse flushExpireKeysWithOptions(shared_ptr<FlushExpireKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FlushExpireKeysResponse flushExpireKeys(shared_ptr<FlushExpireKeysRequest> request);
  FlushInstanceResponse flushInstanceWithOptions(shared_ptr<FlushInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FlushInstanceResponse flushInstance(shared_ptr<FlushInstanceRequest> request);
  GrantAccountPrivilegeResponse grantAccountPrivilegeWithOptions(shared_ptr<GrantAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantAccountPrivilegeResponse grantAccountPrivilege(shared_ptr<GrantAccountPrivilegeRequest> request);
  InitializeKvstorePermissionResponse initializeKvstorePermissionWithOptions(shared_ptr<InitializeKvstorePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitializeKvstorePermissionResponse initializeKvstorePermission(shared_ptr<InitializeKvstorePermissionRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  MigrateToOtherZoneResponse migrateToOtherZoneWithOptions(shared_ptr<MigrateToOtherZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MigrateToOtherZoneResponse migrateToOtherZone(shared_ptr<MigrateToOtherZoneRequest> request);
  ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountDescriptionResponse modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request);
  ModifyAccountPasswordResponse modifyAccountPasswordWithOptions(shared_ptr<ModifyAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountPasswordResponse modifyAccountPassword(shared_ptr<ModifyAccountPasswordRequest> request);
  ModifyActiveOperationTaskResponse modifyActiveOperationTaskWithOptions(shared_ptr<ModifyActiveOperationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyActiveOperationTaskResponse modifyActiveOperationTask(shared_ptr<ModifyActiveOperationTaskRequest> request);
  ModifyAuditLogConfigResponse modifyAuditLogConfigWithOptions(shared_ptr<ModifyAuditLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAuditLogConfigResponse modifyAuditLogConfig(shared_ptr<ModifyAuditLogConfigRequest> request);
  ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupPolicyResponse modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request);
  ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(shared_ptr<ModifyDBInstanceConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(shared_ptr<ModifyDBInstanceConnectionStringRequest> request);
  ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(shared_ptr<ModifyInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceAttributeResponse modifyInstanceAttribute(shared_ptr<ModifyInstanceAttributeRequest> request);
  ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttributeWithOptions(shared_ptr<ModifyInstanceAutoRenewalAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttribute(shared_ptr<ModifyInstanceAutoRenewalAttributeRequest> request);
  ModifyInstanceConfigResponse modifyInstanceConfigWithOptions(shared_ptr<ModifyInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceConfigResponse modifyInstanceConfig(shared_ptr<ModifyInstanceConfigRequest> request);
  ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTimeWithOptions(shared_ptr<ModifyInstanceMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTime(shared_ptr<ModifyInstanceMaintainTimeRequest> request);
  ModifyInstanceMajorVersionResponse modifyInstanceMajorVersionWithOptions(shared_ptr<ModifyInstanceMajorVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceMajorVersionResponse modifyInstanceMajorVersion(shared_ptr<ModifyInstanceMajorVersionRequest> request);
  ModifyInstanceMinorVersionResponse modifyInstanceMinorVersionWithOptions(shared_ptr<ModifyInstanceMinorVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceMinorVersionResponse modifyInstanceMinorVersion(shared_ptr<ModifyInstanceMinorVersionRequest> request);
  ModifyInstanceNetExpireTimeResponse modifyInstanceNetExpireTimeWithOptions(shared_ptr<ModifyInstanceNetExpireTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceNetExpireTimeResponse modifyInstanceNetExpireTime(shared_ptr<ModifyInstanceNetExpireTimeRequest> request);
  ModifyInstanceSpecResponse modifyInstanceSpecWithOptions(shared_ptr<ModifyInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceSpecResponse modifyInstanceSpec(shared_ptr<ModifyInstanceSpecRequest> request);
  ModifyInstanceSSLResponse modifyInstanceSSLWithOptions(shared_ptr<ModifyInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceSSLResponse modifyInstanceSSL(shared_ptr<ModifyInstanceSSLRequest> request);
  ModifyInstanceVpcAuthModeResponse modifyInstanceVpcAuthModeWithOptions(shared_ptr<ModifyInstanceVpcAuthModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceVpcAuthModeResponse modifyInstanceVpcAuthMode(shared_ptr<ModifyInstanceVpcAuthModeRequest> request);
  ModifyIntranetAttributeResponse modifyIntranetAttributeWithOptions(shared_ptr<ModifyIntranetAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyIntranetAttributeResponse modifyIntranetAttribute(shared_ptr<ModifyIntranetAttributeRequest> request);
  ModifyNodeSpecResponse modifyNodeSpecWithOptions(shared_ptr<ModifyNodeSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNodeSpecResponse modifyNodeSpec(shared_ptr<ModifyNodeSpecRequest> request);
  ModifyResourceGroupResponse modifyResourceGroupWithOptions(shared_ptr<ModifyResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyResourceGroupResponse modifyResourceGroup(shared_ptr<ModifyResourceGroupRequest> request);
  ModifySecurityGroupConfigurationResponse modifySecurityGroupConfigurationWithOptions(shared_ptr<ModifySecurityGroupConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecurityGroupConfigurationResponse modifySecurityGroupConfiguration(shared_ptr<ModifySecurityGroupConfigurationRequest> request);
  ModifySecurityIpsResponse modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecurityIpsResponse modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request);
  ModifyUserClusterHostResponse modifyUserClusterHostWithOptions(shared_ptr<ModifyUserClusterHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUserClusterHostResponse modifyUserClusterHost(shared_ptr<ModifyUserClusterHostRequest> request);
  ReleaseDirectConnectionResponse releaseDirectConnectionWithOptions(shared_ptr<ReleaseDirectConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseDirectConnectionResponse releaseDirectConnection(shared_ptr<ReleaseDirectConnectionRequest> request);
  ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(shared_ptr<ReleaseInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(shared_ptr<ReleaseInstancePublicConnectionRequest> request);
  RenewInstanceResponse renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewInstanceResponse renewInstance(shared_ptr<RenewInstanceRequest> request);
  ReplaceUserClusterHostResponse replaceUserClusterHostWithOptions(shared_ptr<ReplaceUserClusterHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplaceUserClusterHostResponse replaceUserClusterHost(shared_ptr<ReplaceUserClusterHostRequest> request);
  ResetAccountPasswordResponse resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAccountPasswordResponse resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request);
  RestartInstanceResponse restartInstanceWithOptions(shared_ptr<RestartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartInstanceResponse restartInstance(shared_ptr<RestartInstanceRequest> request);
  RestoreInstanceResponse restoreInstanceWithOptions(shared_ptr<RestoreInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestoreInstanceResponse restoreInstance(shared_ptr<RestoreInstanceRequest> request);
  SwitchInstanceHAResponse switchInstanceHAWithOptions(shared_ptr<SwitchInstanceHARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchInstanceHAResponse switchInstanceHA(shared_ptr<SwitchInstanceHARequest> request);
  SwitchNetworkResponse switchNetworkWithOptions(shared_ptr<SwitchNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchNetworkResponse switchNetwork(shared_ptr<SwitchNetworkRequest> request);
  SyncDtsStatusResponse syncDtsStatusWithOptions(shared_ptr<SyncDtsStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncDtsStatusResponse syncDtsStatus(shared_ptr<SyncDtsStatusRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  TransformToPrePaidResponse transformToPrePaidWithOptions(shared_ptr<TransformToPrePaidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransformToPrePaidResponse transformToPrePaid(shared_ptr<TransformToPrePaidRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_R-kvstore20150101

#endif
