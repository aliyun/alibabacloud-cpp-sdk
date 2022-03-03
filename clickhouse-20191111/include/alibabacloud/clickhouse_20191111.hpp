// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLICKHOUSE20191111_H_
#define ALIBABACLOUD_CLICKHOUSE20191111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Clickhouse20191111 {
class AllocateClusterPublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  AllocateClusterPublicConnectionRequest() {}

  explicit AllocateClusterPublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~AllocateClusterPublicConnectionRequest() = default;
};
class AllocateClusterPublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocateClusterPublicConnectionResponseBody() {}

  explicit AllocateClusterPublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AllocateClusterPublicConnectionResponseBody() = default;
};
class AllocateClusterPublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AllocateClusterPublicConnectionResponseBody> body{};

  AllocateClusterPublicConnectionResponse() {}

  explicit AllocateClusterPublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllocateClusterPublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateClusterPublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateClusterPublicConnectionResponse() = default;
};
class CheckClickhouseToRDSRequest : public Darabonba::Model {
public:
  shared_ptr<string> ckPassword{};
  shared_ptr<string> ckUserName{};
  shared_ptr<long> clickhousePort{};
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> rdsId{};
  shared_ptr<string> rdsPassword{};
  shared_ptr<long> rdsPort{};
  shared_ptr<string> rdsUserName{};
  shared_ptr<string> rdsVpcId{};
  shared_ptr<string> rdsVpcUrl{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CheckClickhouseToRDSRequest() {}

  explicit CheckClickhouseToRDSRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ckPassword) {
      res["CkPassword"] = boost::any(*ckPassword);
    }
    if (ckUserName) {
      res["CkUserName"] = boost::any(*ckUserName);
    }
    if (clickhousePort) {
      res["ClickhousePort"] = boost::any(*clickhousePort);
    }
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (rdsId) {
      res["RdsId"] = boost::any(*rdsId);
    }
    if (rdsPassword) {
      res["RdsPassword"] = boost::any(*rdsPassword);
    }
    if (rdsPort) {
      res["RdsPort"] = boost::any(*rdsPort);
    }
    if (rdsUserName) {
      res["RdsUserName"] = boost::any(*rdsUserName);
    }
    if (rdsVpcId) {
      res["RdsVpcId"] = boost::any(*rdsVpcId);
    }
    if (rdsVpcUrl) {
      res["RdsVpcUrl"] = boost::any(*rdsVpcUrl);
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
    if (m.find("CkPassword") != m.end() && !m["CkPassword"].empty()) {
      ckPassword = make_shared<string>(boost::any_cast<string>(m["CkPassword"]));
    }
    if (m.find("CkUserName") != m.end() && !m["CkUserName"].empty()) {
      ckUserName = make_shared<string>(boost::any_cast<string>(m["CkUserName"]));
    }
    if (m.find("ClickhousePort") != m.end() && !m["ClickhousePort"].empty()) {
      clickhousePort = make_shared<long>(boost::any_cast<long>(m["ClickhousePort"]));
    }
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RdsId") != m.end() && !m["RdsId"].empty()) {
      rdsId = make_shared<string>(boost::any_cast<string>(m["RdsId"]));
    }
    if (m.find("RdsPassword") != m.end() && !m["RdsPassword"].empty()) {
      rdsPassword = make_shared<string>(boost::any_cast<string>(m["RdsPassword"]));
    }
    if (m.find("RdsPort") != m.end() && !m["RdsPort"].empty()) {
      rdsPort = make_shared<long>(boost::any_cast<long>(m["RdsPort"]));
    }
    if (m.find("RdsUserName") != m.end() && !m["RdsUserName"].empty()) {
      rdsUserName = make_shared<string>(boost::any_cast<string>(m["RdsUserName"]));
    }
    if (m.find("RdsVpcId") != m.end() && !m["RdsVpcId"].empty()) {
      rdsVpcId = make_shared<string>(boost::any_cast<string>(m["RdsVpcId"]));
    }
    if (m.find("RdsVpcUrl") != m.end() && !m["RdsVpcUrl"].empty()) {
      rdsVpcUrl = make_shared<string>(boost::any_cast<string>(m["RdsVpcUrl"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CheckClickhouseToRDSRequest() = default;
};
class CheckClickhouseToRDSResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  CheckClickhouseToRDSResponseBody() {}

  explicit CheckClickhouseToRDSResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~CheckClickhouseToRDSResponseBody() = default;
};
class CheckClickhouseToRDSResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckClickhouseToRDSResponseBody> body{};

  CheckClickhouseToRDSResponse() {}

  explicit CheckClickhouseToRDSResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckClickhouseToRDSResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckClickhouseToRDSResponseBody>(model1);
      }
    }
  }


  virtual ~CheckClickhouseToRDSResponse() = default;
};
class CheckHealthRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CheckHealthRequest() {}

  explicit CheckHealthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
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
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
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


  virtual ~CheckHealthRequest() = default;
};
class CheckHealthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> info{};
  shared_ptr<bool> isHealthy{};
  shared_ptr<string> requestId{};

  CheckHealthResponseBody() {}

  explicit CheckHealthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (info) {
      res["Info"] = boost::any(*info);
    }
    if (isHealthy) {
      res["IsHealthy"] = boost::any(*isHealthy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Info") != m.end() && !m["Info"].empty()) {
      info = make_shared<string>(boost::any_cast<string>(m["Info"]));
    }
    if (m.find("IsHealthy") != m.end() && !m["IsHealthy"].empty()) {
      isHealthy = make_shared<bool>(boost::any_cast<bool>(m["IsHealthy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckHealthResponseBody() = default;
};
class CheckHealthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckHealthResponseBody> body{};

  CheckHealthResponse() {}

  explicit CheckHealthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckHealthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckHealthResponseBody>(model1);
      }
    }
  }


  virtual ~CheckHealthResponse() = default;
};
class CheckMonitorAlertRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CheckMonitorAlertRequest() {}

  explicit CheckMonitorAlertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~CheckMonitorAlertRequest() = default;
};
class CheckMonitorAlertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> parameter{};
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};

  CheckMonitorAlertResponseBody() {}

  explicit CheckMonitorAlertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameter) {
      res["Parameter"] = boost::any(*parameter);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameter") != m.end() && !m["Parameter"].empty()) {
      parameter = make_shared<string>(boost::any_cast<string>(m["Parameter"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~CheckMonitorAlertResponseBody() = default;
};
class CheckMonitorAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckMonitorAlertResponseBody> body{};

  CheckMonitorAlertResponse() {}

  explicit CheckMonitorAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckMonitorAlertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckMonitorAlertResponseBody>(model1);
      }
    }
  }


  virtual ~CheckMonitorAlertResponse() = default;
};
class CheckScaleOutBalancedRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CheckScaleOutBalancedRequest() {}

  explicit CheckScaleOutBalancedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
  }


  virtual ~CheckScaleOutBalancedRequest() = default;
};
class CheckScaleOutBalancedResponseBodyTableDetailsTableDetail : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<string> database{};
  shared_ptr<long> detail{};
  shared_ptr<string> tableName{};

  CheckScaleOutBalancedResponseBodyTableDetailsTableDetail() {}

  explicit CheckScaleOutBalancedResponseBodyTableDetailsTableDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["Cluster"] = boost::any(*cluster);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["Cluster"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<long>(boost::any_cast<long>(m["Detail"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~CheckScaleOutBalancedResponseBodyTableDetailsTableDetail() = default;
};
class CheckScaleOutBalancedResponseBodyTableDetails : public Darabonba::Model {
public:
  shared_ptr<vector<CheckScaleOutBalancedResponseBodyTableDetailsTableDetail>> tableDetail{};

  CheckScaleOutBalancedResponseBodyTableDetails() {}

  explicit CheckScaleOutBalancedResponseBodyTableDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableDetail) {
      vector<boost::any> temp1;
      for(auto item1:*tableDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableDetail") != m.end() && !m["TableDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["TableDetail"].type()) {
        vector<CheckScaleOutBalancedResponseBodyTableDetailsTableDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckScaleOutBalancedResponseBodyTableDetailsTableDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableDetail = make_shared<vector<CheckScaleOutBalancedResponseBodyTableDetailsTableDetail>>(expect1);
      }
    }
  }


  virtual ~CheckScaleOutBalancedResponseBodyTableDetails() = default;
};
class CheckScaleOutBalancedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> checkCode{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<CheckScaleOutBalancedResponseBodyTableDetails> tableDetails{};
  shared_ptr<string> timeDuration{};
  shared_ptr<long> totalCount{};

  CheckScaleOutBalancedResponseBody() {}

  explicit CheckScaleOutBalancedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkCode) {
      res["CheckCode"] = boost::any(*checkCode);
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
    if (tableDetails) {
      res["TableDetails"] = tableDetails ? boost::any(tableDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeDuration) {
      res["TimeDuration"] = boost::any(*timeDuration);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckCode") != m.end() && !m["CheckCode"].empty()) {
      checkCode = make_shared<string>(boost::any_cast<string>(m["CheckCode"]));
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
    if (m.find("TableDetails") != m.end() && !m["TableDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableDetails"].type()) {
        CheckScaleOutBalancedResponseBodyTableDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableDetails"]));
        tableDetails = make_shared<CheckScaleOutBalancedResponseBodyTableDetails>(model1);
      }
    }
    if (m.find("TimeDuration") != m.end() && !m["TimeDuration"].empty()) {
      timeDuration = make_shared<string>(boost::any_cast<string>(m["TimeDuration"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CheckScaleOutBalancedResponseBody() = default;
};
class CheckScaleOutBalancedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckScaleOutBalancedResponseBody> body{};

  CheckScaleOutBalancedResponse() {}

  explicit CheckScaleOutBalancedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckScaleOutBalancedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckScaleOutBalancedResponseBody>(model1);
      }
    }
  }


  virtual ~CheckScaleOutBalancedResponse() = default;
};
class CheckServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CheckServiceLinkedRoleRequest() {}

  explicit CheckServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~CheckServiceLinkedRoleRequest() = default;
};
class CheckServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> hasServiceLinkedRole{};
  shared_ptr<string> requestId{};

  CheckServiceLinkedRoleResponseBody() {}

  explicit CheckServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasServiceLinkedRole) {
      res["HasServiceLinkedRole"] = boost::any(*hasServiceLinkedRole);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasServiceLinkedRole") != m.end() && !m["HasServiceLinkedRole"].empty()) {
      hasServiceLinkedRole = make_shared<bool>(boost::any_cast<bool>(m["HasServiceLinkedRole"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckServiceLinkedRoleResponseBody() = default;
};
class CheckServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckServiceLinkedRoleResponseBody> body{};

  CheckServiceLinkedRoleResponse() {}

  explicit CheckServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CheckServiceLinkedRoleResponse() = default;
};
class CheckVersionTransferRequest : public Darabonba::Model {
public:
  shared_ptr<bool> checkAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sourceAccount{};
  shared_ptr<string> sourcePassword{};
  shared_ptr<string> targetAccount{};
  shared_ptr<string> targetDbClusterId{};
  shared_ptr<string> targetPassword{};

  CheckVersionTransferRequest() {}

  explicit CheckVersionTransferRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkAccount) {
      res["CheckAccount"] = boost::any(*checkAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (sourceAccount) {
      res["SourceAccount"] = boost::any(*sourceAccount);
    }
    if (sourcePassword) {
      res["SourcePassword"] = boost::any(*sourcePassword);
    }
    if (targetAccount) {
      res["TargetAccount"] = boost::any(*targetAccount);
    }
    if (targetDbClusterId) {
      res["TargetDbClusterId"] = boost::any(*targetDbClusterId);
    }
    if (targetPassword) {
      res["TargetPassword"] = boost::any(*targetPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckAccount") != m.end() && !m["CheckAccount"].empty()) {
      checkAccount = make_shared<bool>(boost::any_cast<bool>(m["CheckAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("SourceAccount") != m.end() && !m["SourceAccount"].empty()) {
      sourceAccount = make_shared<string>(boost::any_cast<string>(m["SourceAccount"]));
    }
    if (m.find("SourcePassword") != m.end() && !m["SourcePassword"].empty()) {
      sourcePassword = make_shared<string>(boost::any_cast<string>(m["SourcePassword"]));
    }
    if (m.find("TargetAccount") != m.end() && !m["TargetAccount"].empty()) {
      targetAccount = make_shared<string>(boost::any_cast<string>(m["TargetAccount"]));
    }
    if (m.find("TargetDbClusterId") != m.end() && !m["TargetDbClusterId"].empty()) {
      targetDbClusterId = make_shared<string>(boost::any_cast<string>(m["TargetDbClusterId"]));
    }
    if (m.find("TargetPassword") != m.end() && !m["TargetPassword"].empty()) {
      targetPassword = make_shared<string>(boost::any_cast<string>(m["TargetPassword"]));
    }
  }


  virtual ~CheckVersionTransferRequest() = default;
};
class CheckVersionTransferResponseBodyCheckAccess : public Darabonba::Model {
public:
  shared_ptr<long> errCode{};
  shared_ptr<string> errMessage{};

  CheckVersionTransferResponseBodyCheckAccess() {}

  explicit CheckVersionTransferResponseBodyCheckAccess(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<long>(boost::any_cast<long>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
  }


  virtual ~CheckVersionTransferResponseBodyCheckAccess() = default;
};
class CheckVersionTransferResponseBodyCheckCode : public Darabonba::Model {
public:
  shared_ptr<long> errCode{};
  shared_ptr<string> errMessage{};

  CheckVersionTransferResponseBodyCheckCode() {}

  explicit CheckVersionTransferResponseBodyCheckCode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<long>(boost::any_cast<long>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
  }


  virtual ~CheckVersionTransferResponseBodyCheckCode() = default;
};
class CheckVersionTransferResponseBodyCheckStatus : public Darabonba::Model {
public:
  shared_ptr<long> errCode{};
  shared_ptr<string> errMessage{};

  CheckVersionTransferResponseBodyCheckStatus() {}

  explicit CheckVersionTransferResponseBodyCheckStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<long>(boost::any_cast<long>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
  }


  virtual ~CheckVersionTransferResponseBodyCheckStatus() = default;
};
class CheckVersionTransferResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckVersionTransferResponseBodyCheckAccess> checkAccess{};
  shared_ptr<bool> checkCategory{};
  shared_ptr<CheckVersionTransferResponseBodyCheckCode> checkCode{};
  shared_ptr<bool> checkConnection{};
  shared_ptr<CheckVersionTransferResponseBodyCheckStatus> checkStatus{};
  shared_ptr<bool> checkStorage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> timeDuration{};
  shared_ptr<long> totalCount{};

  CheckVersionTransferResponseBody() {}

  explicit CheckVersionTransferResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkAccess) {
      res["CheckAccess"] = checkAccess ? boost::any(checkAccess->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkCategory) {
      res["CheckCategory"] = boost::any(*checkCategory);
    }
    if (checkCode) {
      res["CheckCode"] = checkCode ? boost::any(checkCode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkConnection) {
      res["CheckConnection"] = boost::any(*checkConnection);
    }
    if (checkStatus) {
      res["CheckStatus"] = checkStatus ? boost::any(checkStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStorage) {
      res["CheckStorage"] = boost::any(*checkStorage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeDuration) {
      res["TimeDuration"] = boost::any(*timeDuration);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckAccess") != m.end() && !m["CheckAccess"].empty()) {
      if (typeid(map<string, boost::any>) == m["CheckAccess"].type()) {
        CheckVersionTransferResponseBodyCheckAccess model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CheckAccess"]));
        checkAccess = make_shared<CheckVersionTransferResponseBodyCheckAccess>(model1);
      }
    }
    if (m.find("CheckCategory") != m.end() && !m["CheckCategory"].empty()) {
      checkCategory = make_shared<bool>(boost::any_cast<bool>(m["CheckCategory"]));
    }
    if (m.find("CheckCode") != m.end() && !m["CheckCode"].empty()) {
      if (typeid(map<string, boost::any>) == m["CheckCode"].type()) {
        CheckVersionTransferResponseBodyCheckCode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CheckCode"]));
        checkCode = make_shared<CheckVersionTransferResponseBodyCheckCode>(model1);
      }
    }
    if (m.find("CheckConnection") != m.end() && !m["CheckConnection"].empty()) {
      checkConnection = make_shared<bool>(boost::any_cast<bool>(m["CheckConnection"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["CheckStatus"].type()) {
        CheckVersionTransferResponseBodyCheckStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CheckStatus"]));
        checkStatus = make_shared<CheckVersionTransferResponseBodyCheckStatus>(model1);
      }
    }
    if (m.find("CheckStorage") != m.end() && !m["CheckStorage"].empty()) {
      checkStorage = make_shared<bool>(boost::any_cast<bool>(m["CheckStorage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TimeDuration") != m.end() && !m["TimeDuration"].empty()) {
      timeDuration = make_shared<string>(boost::any_cast<string>(m["TimeDuration"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CheckVersionTransferResponseBody() = default;
};
class CheckVersionTransferResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckVersionTransferResponseBody> body{};

  CheckVersionTransferResponse() {}

  explicit CheckVersionTransferResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckVersionTransferResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckVersionTransferResponseBody>(model1);
      }
    }
  }


  virtual ~CheckVersionTransferResponse() = default;
};
class CreateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

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
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~CreateAccountRequest() = default;
};
class CreateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class CreateAccountAndAuthorityRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> allowDatabases{};
  shared_ptr<string> allowDictionaries{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> ddlAuthority{};
  shared_ptr<string> dmlAuthority{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> totalDatabases{};
  shared_ptr<string> totalDictionaries{};

  CreateAccountAndAuthorityRequest() {}

  explicit CreateAccountAndAuthorityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (allowDatabases) {
      res["AllowDatabases"] = boost::any(*allowDatabases);
    }
    if (allowDictionaries) {
      res["AllowDictionaries"] = boost::any(*allowDictionaries);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ddlAuthority) {
      res["DdlAuthority"] = boost::any(*ddlAuthority);
    }
    if (dmlAuthority) {
      res["DmlAuthority"] = boost::any(*dmlAuthority);
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
    if (totalDatabases) {
      res["TotalDatabases"] = boost::any(*totalDatabases);
    }
    if (totalDictionaries) {
      res["TotalDictionaries"] = boost::any(*totalDictionaries);
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
    if (m.find("AllowDatabases") != m.end() && !m["AllowDatabases"].empty()) {
      allowDatabases = make_shared<string>(boost::any_cast<string>(m["AllowDatabases"]));
    }
    if (m.find("AllowDictionaries") != m.end() && !m["AllowDictionaries"].empty()) {
      allowDictionaries = make_shared<string>(boost::any_cast<string>(m["AllowDictionaries"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DdlAuthority") != m.end() && !m["DdlAuthority"].empty()) {
      ddlAuthority = make_shared<bool>(boost::any_cast<bool>(m["DdlAuthority"]));
    }
    if (m.find("DmlAuthority") != m.end() && !m["DmlAuthority"].empty()) {
      dmlAuthority = make_shared<string>(boost::any_cast<string>(m["DmlAuthority"]));
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
    if (m.find("TotalDatabases") != m.end() && !m["TotalDatabases"].empty()) {
      totalDatabases = make_shared<string>(boost::any_cast<string>(m["TotalDatabases"]));
    }
    if (m.find("TotalDictionaries") != m.end() && !m["TotalDictionaries"].empty()) {
      totalDictionaries = make_shared<string>(boost::any_cast<string>(m["TotalDictionaries"]));
    }
  }


  virtual ~CreateAccountAndAuthorityRequest() = default;
};
class CreateAccountAndAuthorityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateAccountAndAuthorityResponseBody() {}

  explicit CreateAccountAndAuthorityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAccountAndAuthorityResponseBody() = default;
};
class CreateAccountAndAuthorityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAccountAndAuthorityResponseBody> body{};

  CreateAccountAndAuthorityResponse() {}

  explicit CreateAccountAndAuthorityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccountAndAuthorityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccountAndAuthorityResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccountAndAuthorityResponse() = default;
};
class CreateBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupRetentionPeriod{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateBackupPolicyRequest() {}

  explicit CreateBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
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
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["BackupRetentionPeriod"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateBackupPolicyRequest() = default;
};
class CreateBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateBackupPolicyResponseBody() {}

  explicit CreateBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateBackupPolicyResponseBody() = default;
};
class CreateBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateBackupPolicyResponseBody> body{};

  CreateBackupPolicyResponse() {}

  explicit CreateBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBackupPolicyResponse() = default;
};
class CreateDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBClusterCategory{};
  shared_ptr<string> DBClusterClass{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterNetworkType{};
  shared_ptr<string> DBClusterVersion{};
  shared_ptr<string> DBNodeGroupCount{};
  shared_ptr<string> DBNodeStorage{};
  shared_ptr<string> dbNodeStorageType{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> encryptionType{};
  shared_ptr<bool> openMonitor{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> usedTime{};
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
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBClusterCategory) {
      res["DBClusterCategory"] = boost::any(*DBClusterCategory);
    }
    if (DBClusterClass) {
      res["DBClusterClass"] = boost::any(*DBClusterClass);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterNetworkType) {
      res["DBClusterNetworkType"] = boost::any(*DBClusterNetworkType);
    }
    if (DBClusterVersion) {
      res["DBClusterVersion"] = boost::any(*DBClusterVersion);
    }
    if (DBNodeGroupCount) {
      res["DBNodeGroupCount"] = boost::any(*DBNodeGroupCount);
    }
    if (DBNodeStorage) {
      res["DBNodeStorage"] = boost::any(*DBNodeStorage);
    }
    if (dbNodeStorageType) {
      res["DbNodeStorageType"] = boost::any(*dbNodeStorageType);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (encryptionType) {
      res["EncryptionType"] = boost::any(*encryptionType);
    }
    if (openMonitor) {
      res["OpenMonitor"] = boost::any(*openMonitor);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBClusterCategory") != m.end() && !m["DBClusterCategory"].empty()) {
      DBClusterCategory = make_shared<string>(boost::any_cast<string>(m["DBClusterCategory"]));
    }
    if (m.find("DBClusterClass") != m.end() && !m["DBClusterClass"].empty()) {
      DBClusterClass = make_shared<string>(boost::any_cast<string>(m["DBClusterClass"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterNetworkType") != m.end() && !m["DBClusterNetworkType"].empty()) {
      DBClusterNetworkType = make_shared<string>(boost::any_cast<string>(m["DBClusterNetworkType"]));
    }
    if (m.find("DBClusterVersion") != m.end() && !m["DBClusterVersion"].empty()) {
      DBClusterVersion = make_shared<string>(boost::any_cast<string>(m["DBClusterVersion"]));
    }
    if (m.find("DBNodeGroupCount") != m.end() && !m["DBNodeGroupCount"].empty()) {
      DBNodeGroupCount = make_shared<string>(boost::any_cast<string>(m["DBNodeGroupCount"]));
    }
    if (m.find("DBNodeStorage") != m.end() && !m["DBNodeStorage"].empty()) {
      DBNodeStorage = make_shared<string>(boost::any_cast<string>(m["DBNodeStorage"]));
    }
    if (m.find("DbNodeStorageType") != m.end() && !m["DbNodeStorageType"].empty()) {
      dbNodeStorageType = make_shared<string>(boost::any_cast<string>(m["DbNodeStorageType"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("EncryptionType") != m.end() && !m["EncryptionType"].empty()) {
      encryptionType = make_shared<string>(boost::any_cast<string>(m["EncryptionType"]));
    }
    if (m.find("OpenMonitor") != m.end() && !m["OpenMonitor"].empty()) {
      openMonitor = make_shared<bool>(boost::any_cast<bool>(m["OpenMonitor"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
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
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<string>(boost::any_cast<string>(m["UsedTime"]));
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
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateDBInstanceResponseBody() {}

  explicit CreateDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
class CreateMonitorDataReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateMonitorDataReportRequest() {}

  explicit CreateMonitorDataReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~CreateMonitorDataReportRequest() = default;
};
class CreateMonitorDataReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateMonitorDataReportResponseBody() {}

  explicit CreateMonitorDataReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateMonitorDataReportResponseBody() = default;
};
class CreateMonitorDataReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateMonitorDataReportResponseBody> body{};

  CreateMonitorDataReportResponse() {}

  explicit CreateMonitorDataReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMonitorDataReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMonitorDataReportResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMonitorDataReportResponse() = default;
};
class CreateOSSStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateOSSStorageRequest() {}

  explicit CreateOSSStorageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~CreateOSSStorageRequest() = default;
};
class CreateOSSStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateOSSStorageResponseBody() {}

  explicit CreateOSSStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateOSSStorageResponseBody() = default;
};
class CreateOSSStorageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateOSSStorageResponseBody> body{};

  CreateOSSStorageResponse() {}

  explicit CreateOSSStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOSSStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOSSStorageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOSSStorageResponse() = default;
};
class CreatePortsForClickHouseRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> portType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreatePortsForClickHouseRequest() {}

  explicit CreatePortsForClickHouseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (portType) {
      res["PortType"] = boost::any(*portType);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PortType") != m.end() && !m["PortType"].empty()) {
      portType = make_shared<string>(boost::any_cast<string>(m["PortType"]));
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


  virtual ~CreatePortsForClickHouseRequest() = default;
};
class CreatePortsForClickHouseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreatePortsForClickHouseResponseBody() {}

  explicit CreatePortsForClickHouseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatePortsForClickHouseResponseBody() = default;
};
class CreatePortsForClickHouseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePortsForClickHouseResponseBody> body{};

  CreatePortsForClickHouseResponse() {}

  explicit CreatePortsForClickHouseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePortsForClickHouseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePortsForClickHouseResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePortsForClickHouseResponse() = default;
};
class CreateRDSToClickhouseDbRequest : public Darabonba::Model {
public:
  shared_ptr<string> ckPassword{};
  shared_ptr<string> ckUserName{};
  shared_ptr<long> clickhousePort{};
  shared_ptr<string> dbClusterId{};
  shared_ptr<long> limitUpper{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> rdsId{};
  shared_ptr<string> rdsPassword{};
  shared_ptr<long> rdsPort{};
  shared_ptr<string> rdsUserName{};
  shared_ptr<string> rdsVpcId{};
  shared_ptr<string> rdsVpcUrl{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<bool> skipUnsupported{};
  shared_ptr<string> synDbTables{};

  CreateRDSToClickhouseDbRequest() {}

  explicit CreateRDSToClickhouseDbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ckPassword) {
      res["CkPassword"] = boost::any(*ckPassword);
    }
    if (ckUserName) {
      res["CkUserName"] = boost::any(*ckUserName);
    }
    if (clickhousePort) {
      res["ClickhousePort"] = boost::any(*clickhousePort);
    }
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
    }
    if (limitUpper) {
      res["LimitUpper"] = boost::any(*limitUpper);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (rdsId) {
      res["RdsId"] = boost::any(*rdsId);
    }
    if (rdsPassword) {
      res["RdsPassword"] = boost::any(*rdsPassword);
    }
    if (rdsPort) {
      res["RdsPort"] = boost::any(*rdsPort);
    }
    if (rdsUserName) {
      res["RdsUserName"] = boost::any(*rdsUserName);
    }
    if (rdsVpcId) {
      res["RdsVpcId"] = boost::any(*rdsVpcId);
    }
    if (rdsVpcUrl) {
      res["RdsVpcUrl"] = boost::any(*rdsVpcUrl);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (skipUnsupported) {
      res["SkipUnsupported"] = boost::any(*skipUnsupported);
    }
    if (synDbTables) {
      res["SynDbTables"] = boost::any(*synDbTables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CkPassword") != m.end() && !m["CkPassword"].empty()) {
      ckPassword = make_shared<string>(boost::any_cast<string>(m["CkPassword"]));
    }
    if (m.find("CkUserName") != m.end() && !m["CkUserName"].empty()) {
      ckUserName = make_shared<string>(boost::any_cast<string>(m["CkUserName"]));
    }
    if (m.find("ClickhousePort") != m.end() && !m["ClickhousePort"].empty()) {
      clickhousePort = make_shared<long>(boost::any_cast<long>(m["ClickhousePort"]));
    }
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
    }
    if (m.find("LimitUpper") != m.end() && !m["LimitUpper"].empty()) {
      limitUpper = make_shared<long>(boost::any_cast<long>(m["LimitUpper"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RdsId") != m.end() && !m["RdsId"].empty()) {
      rdsId = make_shared<string>(boost::any_cast<string>(m["RdsId"]));
    }
    if (m.find("RdsPassword") != m.end() && !m["RdsPassword"].empty()) {
      rdsPassword = make_shared<string>(boost::any_cast<string>(m["RdsPassword"]));
    }
    if (m.find("RdsPort") != m.end() && !m["RdsPort"].empty()) {
      rdsPort = make_shared<long>(boost::any_cast<long>(m["RdsPort"]));
    }
    if (m.find("RdsUserName") != m.end() && !m["RdsUserName"].empty()) {
      rdsUserName = make_shared<string>(boost::any_cast<string>(m["RdsUserName"]));
    }
    if (m.find("RdsVpcId") != m.end() && !m["RdsVpcId"].empty()) {
      rdsVpcId = make_shared<string>(boost::any_cast<string>(m["RdsVpcId"]));
    }
    if (m.find("RdsVpcUrl") != m.end() && !m["RdsVpcUrl"].empty()) {
      rdsVpcUrl = make_shared<string>(boost::any_cast<string>(m["RdsVpcUrl"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SkipUnsupported") != m.end() && !m["SkipUnsupported"].empty()) {
      skipUnsupported = make_shared<bool>(boost::any_cast<bool>(m["SkipUnsupported"]));
    }
    if (m.find("SynDbTables") != m.end() && !m["SynDbTables"].empty()) {
      synDbTables = make_shared<string>(boost::any_cast<string>(m["SynDbTables"]));
    }
  }


  virtual ~CreateRDSToClickhouseDbRequest() = default;
};
class CreateRDSToClickhouseDbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<vector<string>> repeatedDbs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};

  CreateRDSToClickhouseDbResponseBody() {}

  explicit CreateRDSToClickhouseDbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (repeatedDbs) {
      res["RepeatedDbs"] = boost::any(*repeatedDbs);
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
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RepeatedDbs") != m.end() && !m["RepeatedDbs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatedDbs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatedDbs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repeatedDbs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~CreateRDSToClickhouseDbResponseBody() = default;
};
class CreateRDSToClickhouseDbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRDSToClickhouseDbResponseBody> body{};

  CreateRDSToClickhouseDbResponse() {}

  explicit CreateRDSToClickhouseDbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRDSToClickhouseDbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRDSToClickhouseDbResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRDSToClickhouseDbResponse() = default;
};
class CreateServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateServiceLinkedRoleRequest() {}

  explicit CreateServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~CreateServiceLinkedRoleRequest() = default;
};
class CreateServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateServiceLinkedRoleResponseBody() {}

  explicit CreateServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceLinkedRoleResponseBody() = default;
};
class CreateServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceLinkedRoleResponseBody> body{};

  CreateServiceLinkedRoleResponse() {}

  explicit CreateServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceLinkedRoleResponse() = default;
};
class DeleteAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

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
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
class DeleteDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDBClusterRequest() {}

  explicit DeleteDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~DeleteDBClusterRequest() = default;
};
class DeleteDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDBClusterResponseBody() {}

  explicit DeleteDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDBClusterResponseBody() = default;
};
class DeleteDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDBClusterResponseBody> body{};

  DeleteDBClusterResponse() {}

  explicit DeleteDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBClusterResponse() = default;
};
class DeleteLorneTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskId{};

  DeleteLorneTaskRequest() {}

  explicit DeleteLorneTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteLorneTaskRequest() = default;
};
class DeleteLorneTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLorneTaskResponseBody() {}

  explicit DeleteLorneTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLorneTaskResponseBody() = default;
};
class DeleteLorneTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteLorneTaskResponseBody> body{};

  DeleteLorneTaskResponse() {}

  explicit DeleteLorneTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLorneTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLorneTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLorneTaskResponse() = default;
};
class DeleteSyndbRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> synDb{};

  DeleteSyndbRequest() {}

  explicit DeleteSyndbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
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
    if (synDb) {
      res["SynDb"] = boost::any(*synDb);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
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
    if (m.find("SynDb") != m.end() && !m["SynDb"].empty()) {
      synDb = make_shared<string>(boost::any_cast<string>(m["SynDb"]));
    }
  }


  virtual ~DeleteSyndbRequest() = default;
};
class DeleteSyndbResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  DeleteSyndbResponseBody() {}

  explicit DeleteSyndbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~DeleteSyndbResponseBody() = default;
};
class DeleteSyndbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSyndbResponseBody> body{};

  DeleteSyndbResponse() {}

  explicit DeleteSyndbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSyndbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSyndbResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSyndbResponse() = default;
};
class DescribeAccountAuthorityRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeAccountAuthorityRequest() {}

  explicit DescribeAccountAuthorityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~DescribeAccountAuthorityRequest() = default;
};
class DescribeAccountAuthorityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<vector<string>> allowDatabases{};
  shared_ptr<vector<string>> allowDictionaries{};
  shared_ptr<bool> ddlAuthority{};
  shared_ptr<string> dmlAuthority{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> totalDatabases{};
  shared_ptr<vector<string>> totalDictionaries{};

  DescribeAccountAuthorityResponseBody() {}

  explicit DescribeAccountAuthorityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (allowDatabases) {
      res["AllowDatabases"] = boost::any(*allowDatabases);
    }
    if (allowDictionaries) {
      res["AllowDictionaries"] = boost::any(*allowDictionaries);
    }
    if (ddlAuthority) {
      res["DdlAuthority"] = boost::any(*ddlAuthority);
    }
    if (dmlAuthority) {
      res["DmlAuthority"] = boost::any(*dmlAuthority);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalDatabases) {
      res["TotalDatabases"] = boost::any(*totalDatabases);
    }
    if (totalDictionaries) {
      res["TotalDictionaries"] = boost::any(*totalDictionaries);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AllowDatabases") != m.end() && !m["AllowDatabases"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AllowDatabases"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowDatabases"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      allowDatabases = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AllowDictionaries") != m.end() && !m["AllowDictionaries"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AllowDictionaries"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowDictionaries"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      allowDictionaries = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DdlAuthority") != m.end() && !m["DdlAuthority"].empty()) {
      ddlAuthority = make_shared<bool>(boost::any_cast<bool>(m["DdlAuthority"]));
    }
    if (m.find("DmlAuthority") != m.end() && !m["DmlAuthority"].empty()) {
      dmlAuthority = make_shared<string>(boost::any_cast<string>(m["DmlAuthority"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalDatabases") != m.end() && !m["TotalDatabases"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TotalDatabases"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TotalDatabases"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      totalDatabases = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TotalDictionaries") != m.end() && !m["TotalDictionaries"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TotalDictionaries"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TotalDictionaries"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      totalDictionaries = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAccountAuthorityResponseBody() = default;
};
class DescribeAccountAuthorityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccountAuthorityResponseBody> body{};

  DescribeAccountAuthorityResponse() {}

  explicit DescribeAccountAuthorityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountAuthorityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountAuthorityResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountAuthorityResponse() = default;
};
class DescribeAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeAccountsRequest() {}

  explicit DescribeAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeAccountsRequest() = default;
};
class DescribeAccountsResponseBodyAccountsAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountStatus{};
  shared_ptr<string> accountType{};

  DescribeAccountsResponseBodyAccountsAccount() {}

  explicit DescribeAccountsResponseBodyAccountsAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
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
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
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
  shared_ptr<DescribeAccountsResponseBodyAccounts> accounts{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAccountsResponseBody() {}

  explicit DescribeAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      res["Accounts"] = accounts ? boost::any(accounts->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Accounts"].type()) {
        DescribeAccountsResponseBodyAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Accounts"]));
        accounts = make_shared<DescribeAccountsResponseBodyAccounts>(model1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
class DescribeAllDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeAllDataSourceRequest() {}

  explicit DescribeAllDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeAllDataSourceRequest() = default;
};
class DescribeAllDataSourceResponseBodyColumnsColumn : public Darabonba::Model {
public:
  shared_ptr<bool> autoIncrementColumn{};
  shared_ptr<string> columnName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> primaryKey{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> type{};

  DescribeAllDataSourceResponseBodyColumnsColumn() {}

  explicit DescribeAllDataSourceResponseBodyColumnsColumn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoIncrementColumn) {
      res["AutoIncrementColumn"] = boost::any(*autoIncrementColumn);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (primaryKey) {
      res["PrimaryKey"] = boost::any(*primaryKey);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoIncrementColumn") != m.end() && !m["AutoIncrementColumn"].empty()) {
      autoIncrementColumn = make_shared<bool>(boost::any_cast<bool>(m["AutoIncrementColumn"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PrimaryKey") != m.end() && !m["PrimaryKey"].empty()) {
      primaryKey = make_shared<bool>(boost::any_cast<bool>(m["PrimaryKey"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeAllDataSourceResponseBodyColumnsColumn() = default;
};
class DescribeAllDataSourceResponseBodyColumns : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDataSourceResponseBodyColumnsColumn>> column{};

  DescribeAllDataSourceResponseBodyColumns() {}

  explicit DescribeAllDataSourceResponseBodyColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      vector<boost::any> temp1;
      for(auto item1:*column){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Column"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      if (typeid(vector<boost::any>) == m["Column"].type()) {
        vector<DescribeAllDataSourceResponseBodyColumnsColumn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Column"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDataSourceResponseBodyColumnsColumn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        column = make_shared<vector<DescribeAllDataSourceResponseBodyColumnsColumn>>(expect1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponseBodyColumns() = default;
};
class DescribeAllDataSourceResponseBodySchemasSchema : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};

  DescribeAllDataSourceResponseBodySchemasSchema() {}

  explicit DescribeAllDataSourceResponseBodySchemasSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeAllDataSourceResponseBodySchemasSchema() = default;
};
class DescribeAllDataSourceResponseBodySchemas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDataSourceResponseBodySchemasSchema>> schema{};

  DescribeAllDataSourceResponseBodySchemas() {}

  explicit DescribeAllDataSourceResponseBodySchemas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schema) {
      vector<boost::any> temp1;
      for(auto item1:*schema){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schema"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      if (typeid(vector<boost::any>) == m["Schema"].type()) {
        vector<DescribeAllDataSourceResponseBodySchemasSchema> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schema"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDataSourceResponseBodySchemasSchema model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schema = make_shared<vector<DescribeAllDataSourceResponseBodySchemasSchema>>(expect1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponseBodySchemas() = default;
};
class DescribeAllDataSourceResponseBodyTablesTable : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeAllDataSourceResponseBodyTablesTable() {}

  explicit DescribeAllDataSourceResponseBodyTablesTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeAllDataSourceResponseBodyTablesTable() = default;
};
class DescribeAllDataSourceResponseBodyTables : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDataSourceResponseBodyTablesTable>> table{};

  DescribeAllDataSourceResponseBodyTables() {}

  explicit DescribeAllDataSourceResponseBodyTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      vector<boost::any> temp1;
      for(auto item1:*table){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Table"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<DescribeAllDataSourceResponseBodyTablesTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDataSourceResponseBodyTablesTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<DescribeAllDataSourceResponseBodyTablesTable>>(expect1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponseBodyTables() = default;
};
class DescribeAllDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAllDataSourceResponseBodyColumns> columns{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAllDataSourceResponseBodySchemas> schemas{};
  shared_ptr<DescribeAllDataSourceResponseBodyTables> tables{};

  DescribeAllDataSourceResponseBody() {}

  explicit DescribeAllDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      res["Columns"] = columns ? boost::any(columns->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (schemas) {
      res["Schemas"] = schemas ? boost::any(schemas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tables) {
      res["Tables"] = tables ? boost::any(tables->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(map<string, boost::any>) == m["Columns"].type()) {
        DescribeAllDataSourceResponseBodyColumns model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Columns"]));
        columns = make_shared<DescribeAllDataSourceResponseBodyColumns>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Schemas") != m.end() && !m["Schemas"].empty()) {
      if (typeid(map<string, boost::any>) == m["Schemas"].type()) {
        DescribeAllDataSourceResponseBodySchemas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Schemas"]));
        schemas = make_shared<DescribeAllDataSourceResponseBodySchemas>(model1);
      }
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tables"].type()) {
        DescribeAllDataSourceResponseBodyTables model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tables"]));
        tables = make_shared<DescribeAllDataSourceResponseBodyTables>(model1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponseBody() = default;
};
class DescribeAllDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAllDataSourceResponseBody> body{};

  DescribeAllDataSourceResponse() {}

  explicit DescribeAllDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAllDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAllDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponse() = default;
};
class DescribeAllDataSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeAllDataSourcesRequest() {}

  explicit DescribeAllDataSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeAllDataSourcesRequest() = default;
};
class DescribeAllDataSourcesResponseBodyColumnsColumn : public Darabonba::Model {
public:
  shared_ptr<bool> autoIncrementColumn{};
  shared_ptr<string> columnName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> primaryKey{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> type{};

  DescribeAllDataSourcesResponseBodyColumnsColumn() {}

  explicit DescribeAllDataSourcesResponseBodyColumnsColumn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoIncrementColumn) {
      res["AutoIncrementColumn"] = boost::any(*autoIncrementColumn);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (primaryKey) {
      res["PrimaryKey"] = boost::any(*primaryKey);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoIncrementColumn") != m.end() && !m["AutoIncrementColumn"].empty()) {
      autoIncrementColumn = make_shared<bool>(boost::any_cast<bool>(m["AutoIncrementColumn"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PrimaryKey") != m.end() && !m["PrimaryKey"].empty()) {
      primaryKey = make_shared<bool>(boost::any_cast<bool>(m["PrimaryKey"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeAllDataSourcesResponseBodyColumnsColumn() = default;
};
class DescribeAllDataSourcesResponseBodyColumns : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDataSourcesResponseBodyColumnsColumn>> column{};

  DescribeAllDataSourcesResponseBodyColumns() {}

  explicit DescribeAllDataSourcesResponseBodyColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      vector<boost::any> temp1;
      for(auto item1:*column){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Column"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      if (typeid(vector<boost::any>) == m["Column"].type()) {
        vector<DescribeAllDataSourcesResponseBodyColumnsColumn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Column"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDataSourcesResponseBodyColumnsColumn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        column = make_shared<vector<DescribeAllDataSourcesResponseBodyColumnsColumn>>(expect1);
      }
    }
  }


  virtual ~DescribeAllDataSourcesResponseBodyColumns() = default;
};
class DescribeAllDataSourcesResponseBodySchemasSchema : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};

  DescribeAllDataSourcesResponseBodySchemasSchema() {}

  explicit DescribeAllDataSourcesResponseBodySchemasSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeAllDataSourcesResponseBodySchemasSchema() = default;
};
class DescribeAllDataSourcesResponseBodySchemas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDataSourcesResponseBodySchemasSchema>> schema{};

  DescribeAllDataSourcesResponseBodySchemas() {}

  explicit DescribeAllDataSourcesResponseBodySchemas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schema) {
      vector<boost::any> temp1;
      for(auto item1:*schema){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schema"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      if (typeid(vector<boost::any>) == m["Schema"].type()) {
        vector<DescribeAllDataSourcesResponseBodySchemasSchema> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schema"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDataSourcesResponseBodySchemasSchema model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schema = make_shared<vector<DescribeAllDataSourcesResponseBodySchemasSchema>>(expect1);
      }
    }
  }


  virtual ~DescribeAllDataSourcesResponseBodySchemas() = default;
};
class DescribeAllDataSourcesResponseBodyTablesTable : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeAllDataSourcesResponseBodyTablesTable() {}

  explicit DescribeAllDataSourcesResponseBodyTablesTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeAllDataSourcesResponseBodyTablesTable() = default;
};
class DescribeAllDataSourcesResponseBodyTables : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDataSourcesResponseBodyTablesTable>> table{};

  DescribeAllDataSourcesResponseBodyTables() {}

  explicit DescribeAllDataSourcesResponseBodyTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      vector<boost::any> temp1;
      for(auto item1:*table){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Table"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<DescribeAllDataSourcesResponseBodyTablesTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDataSourcesResponseBodyTablesTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<DescribeAllDataSourcesResponseBodyTablesTable>>(expect1);
      }
    }
  }


  virtual ~DescribeAllDataSourcesResponseBodyTables() = default;
};
class DescribeAllDataSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAllDataSourcesResponseBodyColumns> columns{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAllDataSourcesResponseBodySchemas> schemas{};
  shared_ptr<DescribeAllDataSourcesResponseBodyTables> tables{};

  DescribeAllDataSourcesResponseBody() {}

  explicit DescribeAllDataSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      res["Columns"] = columns ? boost::any(columns->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (schemas) {
      res["Schemas"] = schemas ? boost::any(schemas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tables) {
      res["Tables"] = tables ? boost::any(tables->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(map<string, boost::any>) == m["Columns"].type()) {
        DescribeAllDataSourcesResponseBodyColumns model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Columns"]));
        columns = make_shared<DescribeAllDataSourcesResponseBodyColumns>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Schemas") != m.end() && !m["Schemas"].empty()) {
      if (typeid(map<string, boost::any>) == m["Schemas"].type()) {
        DescribeAllDataSourcesResponseBodySchemas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Schemas"]));
        schemas = make_shared<DescribeAllDataSourcesResponseBodySchemas>(model1);
      }
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tables"].type()) {
        DescribeAllDataSourcesResponseBodyTables model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tables"]));
        tables = make_shared<DescribeAllDataSourcesResponseBodyTables>(model1);
      }
    }
  }


  virtual ~DescribeAllDataSourcesResponseBody() = default;
};
class DescribeAllDataSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAllDataSourcesResponseBody> body{};

  DescribeAllDataSourcesResponse() {}

  explicit DescribeAllDataSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAllDataSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAllDataSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAllDataSourcesResponse() = default;
};
class DescribeAvailableResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DescribeAvailableResourceRequest() {}

  explicit DescribeAvailableResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
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
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
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
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeAvailableResourceRequest() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutorNodeCount : public Darabonba::Model {
public:
  shared_ptr<string> maxCount{};
  shared_ptr<string> minCount{};
  shared_ptr<string> step{};

  DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutorNodeCount() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutorNodeCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (minCount) {
      res["MinCount"] = boost::any(*minCount);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<string>(boost::any_cast<string>(m["MaxCount"]));
    }
    if (m.find("MinCount") != m.end() && !m["MinCount"].empty()) {
      minCount = make_shared<string>(boost::any_cast<string>(m["MinCount"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<string>(boost::any_cast<string>(m["Step"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutorNodeCount() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutor : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutorNodeCount> nodeCount{};

  DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutor() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeCount) {
      res["NodeCount"] = nodeCount ? boost::any(nodeCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeCount"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutorNodeCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeCount"]));
        nodeCount = make_shared<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutorNodeCount>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutor() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutor>> supportedExecutor{};

  DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorList() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedExecutor) {
      vector<boost::any> temp1;
      for(auto item1:*supportedExecutor){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedExecutor"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedExecutor") != m.end() && !m["SupportedExecutor"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedExecutor"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutor> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedExecutor"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutor model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedExecutor = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutor>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorList() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountNodeCount : public Darabonba::Model {
public:
  shared_ptr<string> maxCount{};
  shared_ptr<string> minCount{};
  shared_ptr<string> step{};

  DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountNodeCount() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountNodeCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (minCount) {
      res["MinCount"] = boost::any(*minCount);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<string>(boost::any_cast<string>(m["MaxCount"]));
    }
    if (m.find("MinCount") != m.end() && !m["MinCount"].empty()) {
      minCount = make_shared<string>(boost::any_cast<string>(m["MinCount"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<string>(boost::any_cast<string>(m["Step"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountNodeCount() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountStorageSize : public Darabonba::Model {
public:
  shared_ptr<vector<string>> storageSize{};

  DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountStorageSize() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountStorageSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StorageSize"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StorageSize"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      storageSize = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountStorageSize() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCount : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountNodeCount> nodeCount{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountStorageSize> storageSize{};

  DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCount() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeCount) {
      res["NodeCount"] = nodeCount ? boost::any(nodeCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageSize) {
      res["StorageSize"] = storageSize ? boost::any(storageSize->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeCount"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountNodeCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeCount"]));
        nodeCount = make_shared<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountNodeCount>(model1);
      }
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      if (typeid(map<string, boost::any>) == m["StorageSize"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountStorageSize model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StorageSize"]));
        storageSize = make_shared<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCountStorageSize>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCount() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCount>> supportedNodeCount{};

  DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountList() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedNodeCount) {
      vector<boost::any> temp1;
      for(auto item1:*supportedNodeCount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedNodeCount"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedNodeCount") != m.end() && !m["SupportedNodeCount"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedNodeCount"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedNodeCount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedNodeCount = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCount>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountList() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClass : public Darabonba::Model {
public:
  shared_ptr<string> instanceClass{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorList> supportedExecutorList{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountList> supportedNodeCountList{};
  shared_ptr<string> tips{};

  DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClass() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClass(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (supportedExecutorList) {
      res["SupportedExecutorList"] = supportedExecutorList ? boost::any(supportedExecutorList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (supportedNodeCountList) {
      res["SupportedNodeCountList"] = supportedNodeCountList ? boost::any(supportedNodeCountList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("SupportedExecutorList") != m.end() && !m["SupportedExecutorList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedExecutorList"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedExecutorList"]));
        supportedExecutorList = make_shared<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedExecutorList>(model1);
      }
    }
    if (m.find("SupportedNodeCountList") != m.end() && !m["SupportedNodeCountList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedNodeCountList"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedNodeCountList"]));
        supportedNodeCountList = make_shared<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountList>(model1);
      }
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClass() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClass>> supportedInstanceClass{};

  DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassList() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedInstanceClass) {
      vector<boost::any> temp1;
      for(auto item1:*supportedInstanceClass){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedInstanceClass"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedInstanceClass") != m.end() && !m["SupportedInstanceClass"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedInstanceClass"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClass> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedInstanceClass"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClass model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedInstanceClass = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassListSupportedInstanceClass>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassList() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerial : public Darabonba::Model {
public:
  shared_ptr<string> serial{};
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassList> supportedInstanceClassList{};

  DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerial() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serial) {
      res["Serial"] = boost::any(*serial);
    }
    if (supportedInstanceClassList) {
      res["SupportedInstanceClassList"] = supportedInstanceClassList ? boost::any(supportedInstanceClassList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Serial") != m.end() && !m["Serial"].empty()) {
      serial = make_shared<string>(boost::any_cast<string>(m["Serial"]));
    }
    if (m.find("SupportedInstanceClassList") != m.end() && !m["SupportedInstanceClassList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedInstanceClassList"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedInstanceClassList"]));
        supportedInstanceClassList = make_shared<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerialSupportedInstanceClassList>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerial() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerial>> supportedSerial{};

  DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialList() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedSerial) {
      vector<boost::any> temp1;
      for(auto item1:*supportedSerial){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedSerial"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedSerial") != m.end() && !m["SupportedSerial"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedSerial"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerial> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedSerial"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerial model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedSerial = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialListSupportedSerial>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialList() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZone : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialList> supportedSerialList{};
  shared_ptr<string> zoneId{};

  DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZone() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedSerialList) {
      res["SupportedSerialList"] = supportedSerialList ? boost::any(supportedSerialList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedSerialList") != m.end() && !m["SupportedSerialList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedSerialList"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedSerialList"]));
        supportedSerialList = make_shared<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZoneSupportedSerialList>(model1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZone() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZone>> availableZone{};

  DescribeAvailableResourceResponseBodyAvailableZoneList() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableZone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableZone = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZoneListAvailableZone>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneList() = default;
};
class DescribeAvailableResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZoneList> availableZoneList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};

  DescribeAvailableResourceResponseBody() {}

  explicit DescribeAvailableResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZoneList) {
      res["AvailableZoneList"] = availableZoneList ? boost::any(availableZoneList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZoneList") != m.end() && !m["AvailableZoneList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableZoneList"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZoneList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableZoneList"]));
        availableZoneList = make_shared<DescribeAvailableResourceResponseBodyAvailableZoneList>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> switch_{};

  DescribeBackupPolicyResponseBody() {}

  explicit DescribeBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (switch_) {
      res["Switch"] = boost::any(*switch_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Switch") != m.end() && !m["Switch"].empty()) {
      switch_ = make_shared<string>(boost::any_cast<string>(m["Switch"]));
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
  shared_ptr<string> backupId{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  DescribeBackupsRequest() {}

  explicit DescribeBackupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeBackupsRequest() = default;
};
class DescribeBackupsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> backupEndTime{};
  shared_ptr<string> backupId{};
  shared_ptr<string> backupMethod{};
  shared_ptr<string> backupSetInfo{};
  shared_ptr<long> backupSize{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> backupType{};
  shared_ptr<string> DBClusterId{};

  DescribeBackupsResponseBodyItems() {}

  explicit DescribeBackupsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupEndTime) {
      res["BackupEndTime"] = boost::any(*backupEndTime);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupSetInfo) {
      res["BackupSetInfo"] = boost::any(*backupSetInfo);
    }
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupEndTime") != m.end() && !m["BackupEndTime"].empty()) {
      backupEndTime = make_shared<string>(boost::any_cast<string>(m["BackupEndTime"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupSetInfo") != m.end() && !m["BackupSetInfo"].empty()) {
      backupSetInfo = make_shared<string>(boost::any_cast<string>(m["BackupSetInfo"]));
    }
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<long>(boost::any_cast<long>(m["BackupSize"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeBackupsResponseBodyItems() = default;
};
class DescribeBackupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupsResponseBodyItems>> items{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  DescribeBackupsResponseBody() {}

  explicit DescribeBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeBackupsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeBackupsResponseBodyItems>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
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
class DescribeColumnsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeColumnsRequest() {}

  explicit DescribeColumnsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeColumnsRequest() = default;
};
class DescribeColumnsResponseBodyItemsColumn : public Darabonba::Model {
public:
  shared_ptr<bool> autoIncrementColumn{};
  shared_ptr<string> columnName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> primaryKey{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> type{};

  DescribeColumnsResponseBodyItemsColumn() {}

  explicit DescribeColumnsResponseBodyItemsColumn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoIncrementColumn) {
      res["AutoIncrementColumn"] = boost::any(*autoIncrementColumn);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (primaryKey) {
      res["PrimaryKey"] = boost::any(*primaryKey);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoIncrementColumn") != m.end() && !m["AutoIncrementColumn"].empty()) {
      autoIncrementColumn = make_shared<bool>(boost::any_cast<bool>(m["AutoIncrementColumn"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PrimaryKey") != m.end() && !m["PrimaryKey"].empty()) {
      primaryKey = make_shared<bool>(boost::any_cast<bool>(m["PrimaryKey"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeColumnsResponseBodyItemsColumn() = default;
};
class DescribeColumnsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeColumnsResponseBodyItemsColumn>> column{};

  DescribeColumnsResponseBodyItems() {}

  explicit DescribeColumnsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      vector<boost::any> temp1;
      for(auto item1:*column){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Column"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      if (typeid(vector<boost::any>) == m["Column"].type()) {
        vector<DescribeColumnsResponseBodyItemsColumn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Column"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeColumnsResponseBodyItemsColumn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        column = make_shared<vector<DescribeColumnsResponseBodyItemsColumn>>(expect1);
      }
    }
  }


  virtual ~DescribeColumnsResponseBodyItems() = default;
};
class DescribeColumnsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeColumnsResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeColumnsResponseBody() {}

  explicit DescribeColumnsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeColumnsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeColumnsResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeColumnsResponseBody() = default;
};
class DescribeColumnsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeColumnsResponseBody> body{};

  DescribeColumnsResponse() {}

  explicit DescribeColumnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeColumnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeColumnsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeColumnsResponse() = default;
};
class DescribeDBClusterAccessWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterAccessWhiteListRequest() {}

  explicit DescribeDBClusterAccessWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~DescribeDBClusterAccessWhiteListRequest() = default;
};
class DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterIPArrayAttribute{};
  shared_ptr<string> DBClusterIPArrayName{};
  shared_ptr<string> securityIPList{};

  DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray() {}

  explicit DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterIPArrayAttribute) {
      res["DBClusterIPArrayAttribute"] = boost::any(*DBClusterIPArrayAttribute);
    }
    if (DBClusterIPArrayName) {
      res["DBClusterIPArrayName"] = boost::any(*DBClusterIPArrayName);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterIPArrayAttribute") != m.end() && !m["DBClusterIPArrayAttribute"].empty()) {
      DBClusterIPArrayAttribute = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayAttribute"]));
    }
    if (m.find("DBClusterIPArrayName") != m.end() && !m["DBClusterIPArrayName"].empty()) {
      DBClusterIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayName"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
  }


  virtual ~DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray() = default;
};
class DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray>> IPArray{};

  DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList() {}

  explicit DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IPArray) {
      vector<boost::any> temp1;
      for(auto item1:*IPArray){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IPArray"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IPArray") != m.end() && !m["IPArray"].empty()) {
      if (typeid(vector<boost::any>) == m["IPArray"].type()) {
        vector<DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IPArray"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        IPArray = make_shared<vector<DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteListIPArray>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList() = default;
};
class DescribeDBClusterAccessWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList> DBClusterAccessWhiteList{};
  shared_ptr<string> requestId{};

  DescribeDBClusterAccessWhiteListResponseBody() {}

  explicit DescribeDBClusterAccessWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterAccessWhiteList) {
      res["DBClusterAccessWhiteList"] = DBClusterAccessWhiteList ? boost::any(DBClusterAccessWhiteList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterAccessWhiteList") != m.end() && !m["DBClusterAccessWhiteList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBClusterAccessWhiteList"].type()) {
        DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBClusterAccessWhiteList"]));
        DBClusterAccessWhiteList = make_shared<DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterAccessWhiteListResponseBody() = default;
};
class DescribeDBClusterAccessWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterAccessWhiteListResponseBody> body{};

  DescribeDBClusterAccessWhiteListResponse() {}

  explicit DescribeDBClusterAccessWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterAccessWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterAccessWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterAccessWhiteListResponse() = default;
};
class DescribeDBClusterAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterAttributeRequest() {}

  explicit DescribeDBClusterAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~DescribeDBClusterAttributeRequest() = default;
};
class DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus : public Darabonba::Model {
public:
  shared_ptr<string> progress{};
  shared_ptr<string> ratio{};

  DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus() {}

  explicit DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (ratio) {
      res["Ratio"] = boost::any(*ratio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Ratio") != m.end() && !m["Ratio"].empty()) {
      ratio = make_shared<string>(boost::any_cast<string>(m["Ratio"]));
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus() = default;
};
class DescribeDBClusterAttributeResponseBodyDBClusterTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBClusterAttributeResponseBodyDBClusterTagsTag() {}

  explicit DescribeDBClusterAttributeResponseBodyDBClusterTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBClusterAttributeResponseBodyDBClusterTagsTag() = default;
};
class DescribeDBClusterAttributeResponseBodyDBClusterTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterAttributeResponseBodyDBClusterTagsTag>> tag{};

  DescribeDBClusterAttributeResponseBodyDBClusterTags() {}

  explicit DescribeDBClusterAttributeResponseBodyDBClusterTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeDBClusterAttributeResponseBodyDBClusterTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAttributeResponseBodyDBClusterTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBClusterAttributeResponseBodyDBClusterTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBodyDBClusterTags() = default;
};
class DescribeDBClusterAttributeResponseBodyDBCluster : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> bid{};
  shared_ptr<string> category{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> controlVersion{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterNetworkType{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> DBClusterType{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<long> DBNodeCount{};
  shared_ptr<long> DBNodeStorage{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> encryptionType{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> isExpired{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> maintainTime{};
  shared_ptr<string> payType{};
  shared_ptr<long> port{};
  shared_ptr<string> publicConnectionString{};
  shared_ptr<string> publicIpAddr{};
  shared_ptr<string> publicPort{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus> scaleOutStatus{};
  shared_ptr<string> storageType{};
  shared_ptr<long> supportBackup{};
  shared_ptr<bool> supportHttpsPort{};
  shared_ptr<bool> supportMysqlPort{};
  shared_ptr<DescribeDBClusterAttributeResponseBodyDBClusterTags> tags{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcCloudInstanceId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcIpAddr{};
  shared_ptr<string> zoneId{};

  DescribeDBClusterAttributeResponseBodyDBCluster() {}

  explicit DescribeDBClusterAttributeResponseBodyDBCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (controlVersion) {
      res["ControlVersion"] = boost::any(*controlVersion);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBClusterNetworkType) {
      res["DBClusterNetworkType"] = boost::any(*DBClusterNetworkType);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (DBClusterType) {
      res["DBClusterType"] = boost::any(*DBClusterType);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeCount) {
      res["DBNodeCount"] = boost::any(*DBNodeCount);
    }
    if (DBNodeStorage) {
      res["DBNodeStorage"] = boost::any(*DBNodeStorage);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (encryptionType) {
      res["EncryptionType"] = boost::any(*encryptionType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (isExpired) {
      res["IsExpired"] = boost::any(*isExpired);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (maintainTime) {
      res["MaintainTime"] = boost::any(*maintainTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (publicConnectionString) {
      res["PublicConnectionString"] = boost::any(*publicConnectionString);
    }
    if (publicIpAddr) {
      res["PublicIpAddr"] = boost::any(*publicIpAddr);
    }
    if (publicPort) {
      res["PublicPort"] = boost::any(*publicPort);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scaleOutStatus) {
      res["ScaleOutStatus"] = scaleOutStatus ? boost::any(scaleOutStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (supportBackup) {
      res["SupportBackup"] = boost::any(*supportBackup);
    }
    if (supportHttpsPort) {
      res["SupportHttpsPort"] = boost::any(*supportHttpsPort);
    }
    if (supportMysqlPort) {
      res["SupportMysqlPort"] = boost::any(*supportMysqlPort);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcCloudInstanceId) {
      res["VpcCloudInstanceId"] = boost::any(*vpcCloudInstanceId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcIpAddr) {
      res["VpcIpAddr"] = boost::any(*vpcIpAddr);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("ControlVersion") != m.end() && !m["ControlVersion"].empty()) {
      controlVersion = make_shared<string>(boost::any_cast<string>(m["ControlVersion"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBClusterNetworkType") != m.end() && !m["DBClusterNetworkType"].empty()) {
      DBClusterNetworkType = make_shared<string>(boost::any_cast<string>(m["DBClusterNetworkType"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("DBClusterType") != m.end() && !m["DBClusterType"].empty()) {
      DBClusterType = make_shared<string>(boost::any_cast<string>(m["DBClusterType"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeCount") != m.end() && !m["DBNodeCount"].empty()) {
      DBNodeCount = make_shared<long>(boost::any_cast<long>(m["DBNodeCount"]));
    }
    if (m.find("DBNodeStorage") != m.end() && !m["DBNodeStorage"].empty()) {
      DBNodeStorage = make_shared<long>(boost::any_cast<long>(m["DBNodeStorage"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("EncryptionType") != m.end() && !m["EncryptionType"].empty()) {
      encryptionType = make_shared<string>(boost::any_cast<string>(m["EncryptionType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("IsExpired") != m.end() && !m["IsExpired"].empty()) {
      isExpired = make_shared<string>(boost::any_cast<string>(m["IsExpired"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("MaintainTime") != m.end() && !m["MaintainTime"].empty()) {
      maintainTime = make_shared<string>(boost::any_cast<string>(m["MaintainTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("PublicConnectionString") != m.end() && !m["PublicConnectionString"].empty()) {
      publicConnectionString = make_shared<string>(boost::any_cast<string>(m["PublicConnectionString"]));
    }
    if (m.find("PublicIpAddr") != m.end() && !m["PublicIpAddr"].empty()) {
      publicIpAddr = make_shared<string>(boost::any_cast<string>(m["PublicIpAddr"]));
    }
    if (m.find("PublicPort") != m.end() && !m["PublicPort"].empty()) {
      publicPort = make_shared<string>(boost::any_cast<string>(m["PublicPort"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScaleOutStatus") != m.end() && !m["ScaleOutStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScaleOutStatus"].type()) {
        DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScaleOutStatus"]));
        scaleOutStatus = make_shared<DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus>(model1);
      }
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("SupportBackup") != m.end() && !m["SupportBackup"].empty()) {
      supportBackup = make_shared<long>(boost::any_cast<long>(m["SupportBackup"]));
    }
    if (m.find("SupportHttpsPort") != m.end() && !m["SupportHttpsPort"].empty()) {
      supportHttpsPort = make_shared<bool>(boost::any_cast<bool>(m["SupportHttpsPort"]));
    }
    if (m.find("SupportMysqlPort") != m.end() && !m["SupportMysqlPort"].empty()) {
      supportMysqlPort = make_shared<bool>(boost::any_cast<bool>(m["SupportMysqlPort"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBClusterAttributeResponseBodyDBClusterTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBClusterAttributeResponseBodyDBClusterTags>(model1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcCloudInstanceId") != m.end() && !m["VpcCloudInstanceId"].empty()) {
      vpcCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcCloudInstanceId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcIpAddr") != m.end() && !m["VpcIpAddr"].empty()) {
      vpcIpAddr = make_shared<string>(boost::any_cast<string>(m["VpcIpAddr"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBodyDBCluster() = default;
};
class DescribeDBClusterAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBClusterAttributeResponseBodyDBCluster> DBCluster{};
  shared_ptr<string> requestId{};

  DescribeDBClusterAttributeResponseBody() {}

  explicit DescribeDBClusterAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBCluster) {
      res["DBCluster"] = DBCluster ? boost::any(DBCluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBCluster") != m.end() && !m["DBCluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBCluster"].type()) {
        DescribeDBClusterAttributeResponseBodyDBCluster model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBCluster"]));
        DBCluster = make_shared<DescribeDBClusterAttributeResponseBodyDBCluster>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBody() = default;
};
class DescribeDBClusterAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterAttributeResponseBody> body{};

  DescribeDBClusterAttributeResponse() {}

  explicit DescribeDBClusterAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterAttributeResponse() = default;
};
class DescribeDBClusterConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterConfigRequest() {}

  explicit DescribeDBClusterConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~DescribeDBClusterConfigRequest() = default;
};
class DescribeDBClusterConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> requestId{};

  DescribeDBClusterConfigResponseBody() {}

  explicit DescribeDBClusterConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterConfigResponseBody() = default;
};
class DescribeDBClusterConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterConfigResponseBody> body{};

  DescribeDBClusterConfigResponse() {}

  explicit DescribeDBClusterConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterConfigResponse() = default;
};
class DescribeDBClusterNetInfoItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBClusterNetInfoItemsRequest() {}

  explicit DescribeDBClusterNetInfoItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~DescribeDBClusterNetInfoItemsRequest() = default;
};
class DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> httpPort{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> jdbcPort{};
  shared_ptr<string> netType{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem() {}

  explicit DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (httpPort) {
      res["HttpPort"] = boost::any(*httpPort);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (jdbcPort) {
      res["JdbcPort"] = boost::any(*jdbcPort);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("HttpPort") != m.end() && !m["HttpPort"].empty()) {
      httpPort = make_shared<string>(boost::any_cast<string>(m["HttpPort"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("JdbcPort") != m.end() && !m["JdbcPort"].empty()) {
      jdbcPort = make_shared<string>(boost::any_cast<string>(m["JdbcPort"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem() = default;
};
class DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem>> netInfoItem{};

  DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems() {}

  explicit DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetInfoItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        netInfoItem = make_shared<vector<DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems() = default;
};
class DescribeDBClusterNetInfoItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterNetworkType{};
  shared_ptr<DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems> netInfoItems{};
  shared_ptr<string> requestId{};

  DescribeDBClusterNetInfoItemsResponseBody() {}

  explicit DescribeDBClusterNetInfoItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterNetworkType) {
      res["ClusterNetworkType"] = boost::any(*clusterNetworkType);
    }
    if (netInfoItems) {
      res["NetInfoItems"] = netInfoItems ? boost::any(netInfoItems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterNetworkType") != m.end() && !m["ClusterNetworkType"].empty()) {
      clusterNetworkType = make_shared<string>(boost::any_cast<string>(m["ClusterNetworkType"]));
    }
    if (m.find("NetInfoItems") != m.end() && !m["NetInfoItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetInfoItems"].type()) {
        DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetInfoItems"]));
        netInfoItems = make_shared<DescribeDBClusterNetInfoItemsResponseBodyNetInfoItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterNetInfoItemsResponseBody() = default;
};
class DescribeDBClusterNetInfoItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterNetInfoItemsResponseBody> body{};

  DescribeDBClusterNetInfoItemsResponse() {}

  explicit DescribeDBClusterNetInfoItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterNetInfoItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterNetInfoItemsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterNetInfoItemsResponse() = default;
};
class DescribeDBClusterPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  DescribeDBClusterPerformanceRequest() {}

  explicit DescribeDBClusterPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceRequest() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues : public Darabonba::Model {
public:
  shared_ptr<vector<string>> point{};

  DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (point) {
      res["Point"] = boost::any(*point);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Point") != m.end() && !m["Point"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Point"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Point"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      point = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformancesSeries : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues>> values{};

  DescribeDBClusterPerformanceResponseBodyPerformancesSeries() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformancesSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformancesSeries() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformances : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformancesSeries>> series{};
  shared_ptr<string> unit{};

  DescribeDBClusterPerformanceResponseBodyPerformances() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (series) {
      vector<boost::any> temp1;
      for(auto item1:*series){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Series"] = boost::any(temp1);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformancesSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformancesSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformancesSeries>>(expect1);
      }
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformances() = default;
};
class DescribeDBClusterPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformances>> performances{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDBClusterPerformanceResponseBody() {}

  explicit DescribeDBClusterPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (performances) {
      vector<boost::any> temp1;
      for(auto item1:*performances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Performances"] = boost::any(temp1);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Performances") != m.end() && !m["Performances"].empty()) {
      if (typeid(vector<boost::any>) == m["Performances"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Performances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performances = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBody() = default;
};
class DescribeDBClusterPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterPerformanceResponseBody> body{};

  DescribeDBClusterPerformanceResponse() {}

  explicit DescribeDBClusterPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponse() = default;
};
class DescribeDBClustersRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBClustersRequestTag() {}

  explicit DescribeDBClustersRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBClustersRequestTag() = default;
};
class DescribeDBClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> controlVersion{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterIds{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<DescribeDBClustersRequestTag>> tag{};

  DescribeDBClustersRequest() {}

  explicit DescribeDBClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlVersion) {
      res["ControlVersion"] = boost::any(*controlVersion);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterIds) {
      res["DBClusterIds"] = boost::any(*DBClusterIds);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
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
    if (m.find("ControlVersion") != m.end() && !m["ControlVersion"].empty()) {
      controlVersion = make_shared<string>(boost::any_cast<string>(m["ControlVersion"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterIds") != m.end() && !m["DBClusterIds"].empty()) {
      DBClusterIds = make_shared<string>(boost::any_cast<string>(m["DBClusterIds"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBClustersRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBClustersRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersRequest() = default;
};
class DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus : public Darabonba::Model {
public:
  shared_ptr<string> progress{};
  shared_ptr<string> ratio{};

  DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus() {}

  explicit DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (ratio) {
      res["Ratio"] = boost::any(*ratio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Ratio") != m.end() && !m["Ratio"].empty()) {
      ratio = make_shared<string>(boost::any_cast<string>(m["Ratio"]));
    }
  }


  virtual ~DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus() = default;
};
class DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag() {}

  explicit DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag() = default;
};
class DescribeDBClustersResponseBodyDBClustersDBClusterTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag>> tag{};

  DescribeDBClustersResponseBodyDBClustersDBClusterTags() {}

  explicit DescribeDBClustersResponseBodyDBClustersDBClusterTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBClustersResponseBodyDBClustersDBClusterTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersResponseBodyDBClustersDBClusterTags() = default;
};
class DescribeDBClustersResponseBodyDBClustersDBCluster : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> bid{};
  shared_ptr<string> category{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> controlVersion{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterNetworkType{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<long> DBNodeCount{};
  shared_ptr<long> DBNodeStorage{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> isExpired{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> payType{};
  shared_ptr<long> port{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus> scaleOutStatus{};
  shared_ptr<string> storageType{};
  shared_ptr<DescribeDBClustersResponseBodyDBClustersDBClusterTags> tags{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcCloudInstanceId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeDBClustersResponseBodyDBClustersDBCluster() {}

  explicit DescribeDBClustersResponseBodyDBClustersDBCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (controlVersion) {
      res["ControlVersion"] = boost::any(*controlVersion);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBClusterNetworkType) {
      res["DBClusterNetworkType"] = boost::any(*DBClusterNetworkType);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeCount) {
      res["DBNodeCount"] = boost::any(*DBNodeCount);
    }
    if (DBNodeStorage) {
      res["DBNodeStorage"] = boost::any(*DBNodeStorage);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (isExpired) {
      res["IsExpired"] = boost::any(*isExpired);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scaleOutStatus) {
      res["ScaleOutStatus"] = scaleOutStatus ? boost::any(scaleOutStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcCloudInstanceId) {
      res["VpcCloudInstanceId"] = boost::any(*vpcCloudInstanceId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("ControlVersion") != m.end() && !m["ControlVersion"].empty()) {
      controlVersion = make_shared<string>(boost::any_cast<string>(m["ControlVersion"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBClusterNetworkType") != m.end() && !m["DBClusterNetworkType"].empty()) {
      DBClusterNetworkType = make_shared<string>(boost::any_cast<string>(m["DBClusterNetworkType"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeCount") != m.end() && !m["DBNodeCount"].empty()) {
      DBNodeCount = make_shared<long>(boost::any_cast<long>(m["DBNodeCount"]));
    }
    if (m.find("DBNodeStorage") != m.end() && !m["DBNodeStorage"].empty()) {
      DBNodeStorage = make_shared<long>(boost::any_cast<long>(m["DBNodeStorage"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("IsExpired") != m.end() && !m["IsExpired"].empty()) {
      isExpired = make_shared<string>(boost::any_cast<string>(m["IsExpired"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScaleOutStatus") != m.end() && !m["ScaleOutStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScaleOutStatus"].type()) {
        DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScaleOutStatus"]));
        scaleOutStatus = make_shared<DescribeDBClustersResponseBodyDBClustersDBClusterScaleOutStatus>(model1);
      }
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBClustersResponseBodyDBClustersDBClusterTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBClustersResponseBodyDBClustersDBClusterTags>(model1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcCloudInstanceId") != m.end() && !m["VpcCloudInstanceId"].empty()) {
      vpcCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcCloudInstanceId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBClustersResponseBodyDBClustersDBCluster() = default;
};
class DescribeDBClustersResponseBodyDBClusters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClustersResponseBodyDBClustersDBCluster>> DBCluster{};

  DescribeDBClustersResponseBodyDBClusters() {}

  explicit DescribeDBClustersResponseBodyDBClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBCluster) {
      vector<boost::any> temp1;
      for(auto item1:*DBCluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBCluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBCluster") != m.end() && !m["DBCluster"].empty()) {
      if (typeid(vector<boost::any>) == m["DBCluster"].type()) {
        vector<DescribeDBClustersResponseBodyDBClustersDBCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBCluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersResponseBodyDBClustersDBCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBCluster = make_shared<vector<DescribeDBClustersResponseBodyDBClustersDBCluster>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersResponseBodyDBClusters() = default;
};
class DescribeDBClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBClustersResponseBodyDBClusters> DBClusters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDBClustersResponseBody() {}

  explicit DescribeDBClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusters) {
      res["DBClusters"] = DBClusters ? boost::any(DBClusters->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusters") != m.end() && !m["DBClusters"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBClusters"].type()) {
        DescribeDBClustersResponseBodyDBClusters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBClusters"]));
        DBClusters = make_shared<DescribeDBClustersResponseBodyDBClusters>(model1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDBClustersResponseBody() = default;
};
class DescribeDBClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClustersResponseBody> body{};

  DescribeDBClustersResponse() {}

  explicit DescribeDBClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClustersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClustersResponse() = default;
};
class DescribeDBConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBConfigRequest() {}

  explicit DescribeDBConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~DescribeDBConfigRequest() = default;
};
class DescribeDBConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> requestId{};

  DescribeDBConfigResponseBody() {}

  explicit DescribeDBConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBConfigResponseBody() = default;
};
class DescribeDBConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBConfigResponseBody> body{};

  DescribeDBConfigResponse() {}

  explicit DescribeDBConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBConfigResponse() = default;
};
class DescribeLogHubAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> deliverName{};
  shared_ptr<string> logStoreName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskId{};

  DescribeLogHubAttributeRequest() {}

  explicit DescribeLogHubAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (deliverName) {
      res["DeliverName"] = boost::any(*deliverName);
    }
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DeliverName") != m.end() && !m["DeliverName"].empty()) {
      deliverName = make_shared<string>(boost::any_cast<string>(m["DeliverName"]));
    }
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeLogHubAttributeRequest() = default;
};
class DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore : public Darabonba::Model {
public:
  shared_ptr<string> fieldKey{};
  shared_ptr<string> logKey{};
  shared_ptr<string> type{};

  DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore() {}

  explicit DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldKey) {
      res["FieldKey"] = boost::any(*fieldKey);
    }
    if (logKey) {
      res["LogKey"] = boost::any(*logKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldKey") != m.end() && !m["FieldKey"].empty()) {
      fieldKey = make_shared<string>(boost::any_cast<string>(m["FieldKey"]));
    }
    if (m.find("LogKey") != m.end() && !m["LogKey"].empty()) {
      logKey = make_shared<string>(boost::any_cast<string>(m["LogKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore() = default;
};
class DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore>> logHubStore{};

  DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores() {}

  explicit DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logHubStore) {
      vector<boost::any> temp1;
      for(auto item1:*logHubStore){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogHubStore"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogHubStore") != m.end() && !m["LogHubStore"].empty()) {
      if (typeid(vector<boost::any>) == m["LogHubStore"].type()) {
        vector<DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogHubStore"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logHubStore = make_shared<vector<DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStoresLogHubStore>>(expect1);
      }
    }
  }


  virtual ~DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores() = default;
};
class DescribeLogHubAttributeResponseBodyLoghubInfo : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBType{};
  shared_ptr<string> deliverName{};
  shared_ptr<string> deliverTime{};
  shared_ptr<string> description{};
  shared_ptr<string> domainUrl{};
  shared_ptr<string> filterDirtyData{};
  shared_ptr<string> id{};
  shared_ptr<DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores> logHubStores{};
  shared_ptr<string> logStoreName{};
  shared_ptr<string> password{};
  shared_ptr<string> projectName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> userName{};
  shared_ptr<string> zoneId{};

  DescribeLogHubAttributeResponseBodyLoghubInfo() {}

  explicit DescribeLogHubAttributeResponseBodyLoghubInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (deliverName) {
      res["DeliverName"] = boost::any(*deliverName);
    }
    if (deliverTime) {
      res["DeliverTime"] = boost::any(*deliverTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainUrl) {
      res["DomainUrl"] = boost::any(*domainUrl);
    }
    if (filterDirtyData) {
      res["FilterDirtyData"] = boost::any(*filterDirtyData);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (logHubStores) {
      res["LogHubStores"] = logHubStores ? boost::any(logHubStores->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DeliverName") != m.end() && !m["DeliverName"].empty()) {
      deliverName = make_shared<string>(boost::any_cast<string>(m["DeliverName"]));
    }
    if (m.find("DeliverTime") != m.end() && !m["DeliverTime"].empty()) {
      deliverTime = make_shared<string>(boost::any_cast<string>(m["DeliverTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainUrl") != m.end() && !m["DomainUrl"].empty()) {
      domainUrl = make_shared<string>(boost::any_cast<string>(m["DomainUrl"]));
    }
    if (m.find("FilterDirtyData") != m.end() && !m["FilterDirtyData"].empty()) {
      filterDirtyData = make_shared<string>(boost::any_cast<string>(m["FilterDirtyData"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LogHubStores") != m.end() && !m["LogHubStores"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogHubStores"].type()) {
        DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogHubStores"]));
        logHubStores = make_shared<DescribeLogHubAttributeResponseBodyLoghubInfoLogHubStores>(model1);
      }
    }
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeLogHubAttributeResponseBodyLoghubInfo() = default;
};
class DescribeLogHubAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeLogHubAttributeResponseBodyLoghubInfo> loghubInfo{};
  shared_ptr<string> requestId{};

  DescribeLogHubAttributeResponseBody() {}

  explicit DescribeLogHubAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loghubInfo) {
      res["LoghubInfo"] = loghubInfo ? boost::any(loghubInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoghubInfo") != m.end() && !m["LoghubInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoghubInfo"].type()) {
        DescribeLogHubAttributeResponseBodyLoghubInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoghubInfo"]));
        loghubInfo = make_shared<DescribeLogHubAttributeResponseBodyLoghubInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeLogHubAttributeResponseBody() = default;
};
class DescribeLogHubAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLogHubAttributeResponseBody> body{};

  DescribeLogHubAttributeResponse() {}

  explicit DescribeLogHubAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogHubAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogHubAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogHubAttributeResponse() = default;
};
class DescribeLogStoreKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> logStoreName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeLogStoreKeysRequest() {}

  explicit DescribeLogStoreKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
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
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
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


  virtual ~DescribeLogStoreKeysRequest() = default;
};
class DescribeLogStoreKeysResponseBodyLogStoreKeys : public Darabonba::Model {
public:
  shared_ptr<vector<string>> logStoreKey{};

  DescribeLogStoreKeysResponseBodyLogStoreKeys() {}

  explicit DescribeLogStoreKeysResponseBodyLogStoreKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logStoreKey) {
      res["LogStoreKey"] = boost::any(*logStoreKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogStoreKey") != m.end() && !m["LogStoreKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LogStoreKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LogStoreKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logStoreKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeLogStoreKeysResponseBodyLogStoreKeys() = default;
};
class DescribeLogStoreKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeLogStoreKeysResponseBodyLogStoreKeys> logStoreKeys{};
  shared_ptr<string> requestId{};

  DescribeLogStoreKeysResponseBody() {}

  explicit DescribeLogStoreKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logStoreKeys) {
      res["LogStoreKeys"] = logStoreKeys ? boost::any(logStoreKeys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogStoreKeys") != m.end() && !m["LogStoreKeys"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogStoreKeys"].type()) {
        DescribeLogStoreKeysResponseBodyLogStoreKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogStoreKeys"]));
        logStoreKeys = make_shared<DescribeLogStoreKeysResponseBodyLogStoreKeys>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeLogStoreKeysResponseBody() = default;
};
class DescribeLogStoreKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLogStoreKeysResponseBody> body{};

  DescribeLogStoreKeysResponse() {}

  explicit DescribeLogStoreKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogStoreKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogStoreKeysResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogStoreKeysResponse() = default;
};
class DescribeLoghubDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> exportName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeLoghubDetailRequest() {}

  explicit DescribeLoghubDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportName) {
      res["ExportName"] = boost::any(*exportName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
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
    if (m.find("ExportName") != m.end() && !m["ExportName"].empty()) {
      exportName = make_shared<string>(boost::any_cast<string>(m["ExportName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
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


  virtual ~DescribeLoghubDetailRequest() = default;
};
class DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore : public Darabonba::Model {
public:
  shared_ptr<string> fieldKey{};
  shared_ptr<string> logKey{};
  shared_ptr<string> type{};

  DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore() {}

  explicit DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldKey) {
      res["FieldKey"] = boost::any(*fieldKey);
    }
    if (logKey) {
      res["LogKey"] = boost::any(*logKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldKey") != m.end() && !m["FieldKey"].empty()) {
      fieldKey = make_shared<string>(boost::any_cast<string>(m["FieldKey"]));
    }
    if (m.find("LogKey") != m.end() && !m["LogKey"].empty()) {
      logKey = make_shared<string>(boost::any_cast<string>(m["LogKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore() = default;
};
class DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore>> logHubStore{};

  DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores() {}

  explicit DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logHubStore) {
      vector<boost::any> temp1;
      for(auto item1:*logHubStore){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogHubStore"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogHubStore") != m.end() && !m["LogHubStore"].empty()) {
      if (typeid(vector<boost::any>) == m["LogHubStore"].type()) {
        vector<DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogHubStore"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logHubStore = make_shared<vector<DescribeLoghubDetailResponseBodyLoghubInfoLogHubStoresLogHubStore>>(expect1);
      }
    }
  }


  virtual ~DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores() = default;
};
class DescribeLoghubDetailResponseBodyLoghubInfo : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> accessSecret{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBType{};
  shared_ptr<string> deliverName{};
  shared_ptr<string> deliverTime{};
  shared_ptr<string> description{};
  shared_ptr<string> domainUrl{};
  shared_ptr<bool> filterDirtyData{};
  shared_ptr<DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores> logHubStores{};
  shared_ptr<string> logStoreName{};
  shared_ptr<string> password{};
  shared_ptr<string> projectName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> userName{};
  shared_ptr<string> zoneId{};

  DescribeLoghubDetailResponseBodyLoghubInfo() {}

  explicit DescribeLoghubDetailResponseBodyLoghubInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (accessSecret) {
      res["AccessSecret"] = boost::any(*accessSecret);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (deliverName) {
      res["DeliverName"] = boost::any(*deliverName);
    }
    if (deliverTime) {
      res["DeliverTime"] = boost::any(*deliverTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainUrl) {
      res["DomainUrl"] = boost::any(*domainUrl);
    }
    if (filterDirtyData) {
      res["FilterDirtyData"] = boost::any(*filterDirtyData);
    }
    if (logHubStores) {
      res["LogHubStores"] = logHubStores ? boost::any(logHubStores->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("AccessSecret") != m.end() && !m["AccessSecret"].empty()) {
      accessSecret = make_shared<string>(boost::any_cast<string>(m["AccessSecret"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DeliverName") != m.end() && !m["DeliverName"].empty()) {
      deliverName = make_shared<string>(boost::any_cast<string>(m["DeliverName"]));
    }
    if (m.find("DeliverTime") != m.end() && !m["DeliverTime"].empty()) {
      deliverTime = make_shared<string>(boost::any_cast<string>(m["DeliverTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainUrl") != m.end() && !m["DomainUrl"].empty()) {
      domainUrl = make_shared<string>(boost::any_cast<string>(m["DomainUrl"]));
    }
    if (m.find("FilterDirtyData") != m.end() && !m["FilterDirtyData"].empty()) {
      filterDirtyData = make_shared<bool>(boost::any_cast<bool>(m["FilterDirtyData"]));
    }
    if (m.find("LogHubStores") != m.end() && !m["LogHubStores"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogHubStores"].type()) {
        DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogHubStores"]));
        logHubStores = make_shared<DescribeLoghubDetailResponseBodyLoghubInfoLogHubStores>(model1);
      }
    }
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeLoghubDetailResponseBodyLoghubInfo() = default;
};
class DescribeLoghubDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeLoghubDetailResponseBodyLoghubInfo> loghubInfo{};
  shared_ptr<string> requestId{};

  DescribeLoghubDetailResponseBody() {}

  explicit DescribeLoghubDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loghubInfo) {
      res["LoghubInfo"] = loghubInfo ? boost::any(loghubInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoghubInfo") != m.end() && !m["LoghubInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoghubInfo"].type()) {
        DescribeLoghubDetailResponseBodyLoghubInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoghubInfo"]));
        loghubInfo = make_shared<DescribeLoghubDetailResponseBodyLoghubInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeLoghubDetailResponseBody() = default;
};
class DescribeLoghubDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLoghubDetailResponseBody> body{};

  DescribeLoghubDetailResponse() {}

  explicit DescribeLoghubDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLoghubDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLoghubDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLoghubDetailResponse() = default;
};
class DescribeLorneLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskId{};

  DescribeLorneLogRequest() {}

  explicit DescribeLorneLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeLorneLogRequest() = default;
};
class DescribeLorneLogResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> count{};
  shared_ptr<string> endTime{};
  shared_ptr<string> message{};
  shared_ptr<string> startTime{};

  DescribeLorneLogResponseBodyData() {}

  explicit DescribeLorneLogResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeLorneLogResponseBodyData() = default;
};
class DescribeLorneLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLorneLogResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeLorneLogResponseBody() {}

  explicit DescribeLorneLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeLorneLogResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLorneLogResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeLorneLogResponseBodyData>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeLorneLogResponseBody() = default;
};
class DescribeLorneLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLorneLogResponseBody> body{};

  DescribeLorneLogResponse() {}

  explicit DescribeLorneLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLorneLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLorneLogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLorneLogResponse() = default;
};
class DescribeLorneTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeLorneTasksRequest() {}

  explicit DescribeLorneTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
  }


  virtual ~DescribeLorneTasksRequest() = default;
};
class DescribeLorneTasksResponseBodyTaskDetails : public Darabonba::Model {
public:
  shared_ptr<string> checkpoint{};
  shared_ptr<string> columnMapper{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> sinkInstance{};
  shared_ptr<string> sinkRegion{};
  shared_ptr<string> sinkSchema{};
  shared_ptr<string> sinkTable{};
  shared_ptr<string> sinkType{};
  shared_ptr<string> sinkUser{};
  shared_ptr<string> sinkVpcId{};
  shared_ptr<string> sourceProject{};
  shared_ptr<string> sourceRegion{};
  shared_ptr<string> sourceTopic{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> state{};
  shared_ptr<string> strict{};

  DescribeLorneTasksResponseBodyTaskDetails() {}

  explicit DescribeLorneTasksResponseBodyTaskDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkpoint) {
      res["Checkpoint"] = boost::any(*checkpoint);
    }
    if (columnMapper) {
      res["ColumnMapper"] = boost::any(*columnMapper);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sinkInstance) {
      res["SinkInstance"] = boost::any(*sinkInstance);
    }
    if (sinkRegion) {
      res["SinkRegion"] = boost::any(*sinkRegion);
    }
    if (sinkSchema) {
      res["SinkSchema"] = boost::any(*sinkSchema);
    }
    if (sinkTable) {
      res["SinkTable"] = boost::any(*sinkTable);
    }
    if (sinkType) {
      res["SinkType"] = boost::any(*sinkType);
    }
    if (sinkUser) {
      res["SinkUser"] = boost::any(*sinkUser);
    }
    if (sinkVpcId) {
      res["SinkVpcId"] = boost::any(*sinkVpcId);
    }
    if (sourceProject) {
      res["SourceProject"] = boost::any(*sourceProject);
    }
    if (sourceRegion) {
      res["SourceRegion"] = boost::any(*sourceRegion);
    }
    if (sourceTopic) {
      res["SourceTopic"] = boost::any(*sourceTopic);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (strict) {
      res["Strict"] = boost::any(*strict);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Checkpoint") != m.end() && !m["Checkpoint"].empty()) {
      checkpoint = make_shared<string>(boost::any_cast<string>(m["Checkpoint"]));
    }
    if (m.find("ColumnMapper") != m.end() && !m["ColumnMapper"].empty()) {
      columnMapper = make_shared<string>(boost::any_cast<string>(m["ColumnMapper"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SinkInstance") != m.end() && !m["SinkInstance"].empty()) {
      sinkInstance = make_shared<string>(boost::any_cast<string>(m["SinkInstance"]));
    }
    if (m.find("SinkRegion") != m.end() && !m["SinkRegion"].empty()) {
      sinkRegion = make_shared<string>(boost::any_cast<string>(m["SinkRegion"]));
    }
    if (m.find("SinkSchema") != m.end() && !m["SinkSchema"].empty()) {
      sinkSchema = make_shared<string>(boost::any_cast<string>(m["SinkSchema"]));
    }
    if (m.find("SinkTable") != m.end() && !m["SinkTable"].empty()) {
      sinkTable = make_shared<string>(boost::any_cast<string>(m["SinkTable"]));
    }
    if (m.find("SinkType") != m.end() && !m["SinkType"].empty()) {
      sinkType = make_shared<string>(boost::any_cast<string>(m["SinkType"]));
    }
    if (m.find("SinkUser") != m.end() && !m["SinkUser"].empty()) {
      sinkUser = make_shared<string>(boost::any_cast<string>(m["SinkUser"]));
    }
    if (m.find("SinkVpcId") != m.end() && !m["SinkVpcId"].empty()) {
      sinkVpcId = make_shared<string>(boost::any_cast<string>(m["SinkVpcId"]));
    }
    if (m.find("SourceProject") != m.end() && !m["SourceProject"].empty()) {
      sourceProject = make_shared<string>(boost::any_cast<string>(m["SourceProject"]));
    }
    if (m.find("SourceRegion") != m.end() && !m["SourceRegion"].empty()) {
      sourceRegion = make_shared<string>(boost::any_cast<string>(m["SourceRegion"]));
    }
    if (m.find("SourceTopic") != m.end() && !m["SourceTopic"].empty()) {
      sourceTopic = make_shared<string>(boost::any_cast<string>(m["SourceTopic"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Strict") != m.end() && !m["Strict"].empty()) {
      strict = make_shared<string>(boost::any_cast<string>(m["Strict"]));
    }
  }


  virtual ~DescribeLorneTasksResponseBodyTaskDetails() = default;
};
class DescribeLorneTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeLorneTasksResponseBodyTaskDetails>> taskDetails{};
  shared_ptr<long> totalCount{};

  DescribeLorneTasksResponseBody() {}

  explicit DescribeLorneTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskDetails) {
      vector<boost::any> temp1;
      for(auto item1:*taskDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskDetails"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskDetails") != m.end() && !m["TaskDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskDetails"].type()) {
        vector<DescribeLorneTasksResponseBodyTaskDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLorneTasksResponseBodyTaskDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskDetails = make_shared<vector<DescribeLorneTasksResponseBodyTaskDetails>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeLorneTasksResponseBody() = default;
};
class DescribeLorneTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLorneTasksResponseBody> body{};

  DescribeLorneTasksResponse() {}

  explicit DescribeLorneTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLorneTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLorneTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLorneTasksResponse() = default;
};
class DescribeLorneTasksMCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> metricName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskId{};

  DescribeLorneTasksMCountRequest() {}

  explicit DescribeLorneTasksMCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeLorneTasksMCountRequest() = default;
};
class DescribeLorneTasksMCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<double> data{};
  shared_ptr<string> requestId{};

  DescribeLorneTasksMCountResponseBody() {}

  explicit DescribeLorneTasksMCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<double>(boost::any_cast<double>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeLorneTasksMCountResponseBody() = default;
};
class DescribeLorneTasksMCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLorneTasksMCountResponseBody> body{};

  DescribeLorneTasksMCountResponse() {}

  explicit DescribeLorneTasksMCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLorneTasksMCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLorneTasksMCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLorneTasksMCountResponse() = default;
};
class DescribeLorneTasksMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> metricName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskId{};

  DescribeLorneTasksMetricsRequest() {}

  explicit DescribeLorneTasksMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeLorneTasksMetricsRequest() = default;
};
class DescribeLorneTasksMetricsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> columns{};
  shared_ptr<string> name{};
  shared_ptr<string> taskId{};
  shared_ptr<vector<string>> values{};

  DescribeLorneTasksMetricsResponseBodyData() {}

  explicit DescribeLorneTasksMetricsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      res["Columns"] = boost::any(*columns);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Columns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      columns = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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


  virtual ~DescribeLorneTasksMetricsResponseBodyData() = default;
};
class DescribeLorneTasksMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeLorneTasksMetricsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeLorneTasksMetricsResponseBody() {}

  explicit DescribeLorneTasksMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLorneTasksMetricsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeLorneTasksMetricsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeLorneTasksMetricsResponseBody() = default;
};
class DescribeLorneTasksMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLorneTasksMetricsResponseBody> body{};

  DescribeLorneTasksMetricsResponse() {}

  explicit DescribeLorneTasksMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLorneTasksMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLorneTasksMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLorneTasksMetricsResponse() = default;
};
class DescribeOSSStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeOSSStorageRequest() {}

  explicit DescribeOSSStorageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~DescribeOSSStorageRequest() = default;
};
class DescribeOSSStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> coldStorage{};
  shared_ptr<string> policy{};
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};
  shared_ptr<string> storageUsage{};

  DescribeOSSStorageResponseBody() {}

  explicit DescribeOSSStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coldStorage) {
      res["ColdStorage"] = boost::any(*coldStorage);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (storageUsage) {
      res["StorageUsage"] = boost::any(*storageUsage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColdStorage") != m.end() && !m["ColdStorage"].empty()) {
      coldStorage = make_shared<bool>(boost::any_cast<bool>(m["ColdStorage"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("StorageUsage") != m.end() && !m["StorageUsage"].empty()) {
      storageUsage = make_shared<string>(boost::any_cast<string>(m["StorageUsage"]));
    }
  }


  virtual ~DescribeOSSStorageResponseBody() = default;
};
class DescribeOSSStorageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeOSSStorageResponseBody> body{};

  DescribeOSSStorageResponse() {}

  explicit DescribeOSSStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOSSStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOSSStorageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOSSStorageResponse() = default;
};
class DescribeProcessListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> initialQueryId{};
  shared_ptr<string> initialUser{};
  shared_ptr<string> keyword{};
  shared_ptr<string> order{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> queryDurationMs{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeProcessListRequest() {}

  explicit DescribeProcessListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (initialQueryId) {
      res["InitialQueryId"] = boost::any(*initialQueryId);
    }
    if (initialUser) {
      res["InitialUser"] = boost::any(*initialUser);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (order) {
      res["Order"] = boost::any(*order);
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
    if (queryDurationMs) {
      res["QueryDurationMs"] = boost::any(*queryDurationMs);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("InitialQueryId") != m.end() && !m["InitialQueryId"].empty()) {
      initialQueryId = make_shared<string>(boost::any_cast<string>(m["InitialQueryId"]));
    }
    if (m.find("InitialUser") != m.end() && !m["InitialUser"].empty()) {
      initialUser = make_shared<string>(boost::any_cast<string>(m["InitialUser"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
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
    if (m.find("QueryDurationMs") != m.end() && !m["QueryDurationMs"].empty()) {
      queryDurationMs = make_shared<long>(boost::any_cast<long>(m["QueryDurationMs"]));
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


  virtual ~DescribeProcessListRequest() = default;
};
class DescribeProcessListResponseBodyProcessListDataResultSet : public Darabonba::Model {
public:
  shared_ptr<string> initialAddress{};
  shared_ptr<string> initialQueryId{};
  shared_ptr<string> initialUser{};
  shared_ptr<string> query{};
  shared_ptr<string> queryDurationMs{};
  shared_ptr<string> queryStartTime{};

  DescribeProcessListResponseBodyProcessListDataResultSet() {}

  explicit DescribeProcessListResponseBodyProcessListDataResultSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (initialAddress) {
      res["InitialAddress"] = boost::any(*initialAddress);
    }
    if (initialQueryId) {
      res["InitialQueryId"] = boost::any(*initialQueryId);
    }
    if (initialUser) {
      res["InitialUser"] = boost::any(*initialUser);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (queryDurationMs) {
      res["QueryDurationMs"] = boost::any(*queryDurationMs);
    }
    if (queryStartTime) {
      res["QueryStartTime"] = boost::any(*queryStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InitialAddress") != m.end() && !m["InitialAddress"].empty()) {
      initialAddress = make_shared<string>(boost::any_cast<string>(m["InitialAddress"]));
    }
    if (m.find("InitialQueryId") != m.end() && !m["InitialQueryId"].empty()) {
      initialQueryId = make_shared<string>(boost::any_cast<string>(m["InitialQueryId"]));
    }
    if (m.find("InitialUser") != m.end() && !m["InitialUser"].empty()) {
      initialUser = make_shared<string>(boost::any_cast<string>(m["InitialUser"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("QueryDurationMs") != m.end() && !m["QueryDurationMs"].empty()) {
      queryDurationMs = make_shared<string>(boost::any_cast<string>(m["QueryDurationMs"]));
    }
    if (m.find("QueryStartTime") != m.end() && !m["QueryStartTime"].empty()) {
      queryStartTime = make_shared<string>(boost::any_cast<string>(m["QueryStartTime"]));
    }
  }


  virtual ~DescribeProcessListResponseBodyProcessListDataResultSet() = default;
};
class DescribeProcessListResponseBodyProcessListData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProcessListResponseBodyProcessListDataResultSet>> resultSet{};

  DescribeProcessListResponseBodyProcessListData() {}

  explicit DescribeProcessListResponseBodyProcessListData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultSet) {
      vector<boost::any> temp1;
      for(auto item1:*resultSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultSet"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultSet") != m.end() && !m["ResultSet"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultSet"].type()) {
        vector<DescribeProcessListResponseBodyProcessListDataResultSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProcessListResponseBodyProcessListDataResultSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultSet = make_shared<vector<DescribeProcessListResponseBodyProcessListDataResultSet>>(expect1);
      }
    }
  }


  virtual ~DescribeProcessListResponseBodyProcessListData() = default;
};
class DescribeProcessListResponseBodyProcessListStatistics : public Darabonba::Model {
public:
  shared_ptr<long> bytesRead{};
  shared_ptr<double> elapsedTime{};
  shared_ptr<long> rowsRead{};

  DescribeProcessListResponseBodyProcessListStatistics() {}

  explicit DescribeProcessListResponseBodyProcessListStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bytesRead) {
      res["BytesRead"] = boost::any(*bytesRead);
    }
    if (elapsedTime) {
      res["ElapsedTime"] = boost::any(*elapsedTime);
    }
    if (rowsRead) {
      res["RowsRead"] = boost::any(*rowsRead);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BytesRead") != m.end() && !m["BytesRead"].empty()) {
      bytesRead = make_shared<long>(boost::any_cast<long>(m["BytesRead"]));
    }
    if (m.find("ElapsedTime") != m.end() && !m["ElapsedTime"].empty()) {
      elapsedTime = make_shared<double>(boost::any_cast<double>(m["ElapsedTime"]));
    }
    if (m.find("RowsRead") != m.end() && !m["RowsRead"].empty()) {
      rowsRead = make_shared<long>(boost::any_cast<long>(m["RowsRead"]));
    }
  }


  virtual ~DescribeProcessListResponseBodyProcessListStatistics() = default;
};
class DescribeProcessListResponseBodyProcessListTableSchemaResultSet : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DescribeProcessListResponseBodyProcessListTableSchemaResultSet() {}

  explicit DescribeProcessListResponseBodyProcessListTableSchemaResultSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeProcessListResponseBodyProcessListTableSchemaResultSet() = default;
};
class DescribeProcessListResponseBodyProcessListTableSchema : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProcessListResponseBodyProcessListTableSchemaResultSet>> resultSet{};

  DescribeProcessListResponseBodyProcessListTableSchema() {}

  explicit DescribeProcessListResponseBodyProcessListTableSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultSet) {
      vector<boost::any> temp1;
      for(auto item1:*resultSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultSet"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultSet") != m.end() && !m["ResultSet"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultSet"].type()) {
        vector<DescribeProcessListResponseBodyProcessListTableSchemaResultSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProcessListResponseBodyProcessListTableSchemaResultSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultSet = make_shared<vector<DescribeProcessListResponseBodyProcessListTableSchemaResultSet>>(expect1);
      }
    }
  }


  virtual ~DescribeProcessListResponseBodyProcessListTableSchema() = default;
};
class DescribeProcessListResponseBodyProcessList : public Darabonba::Model {
public:
  shared_ptr<DescribeProcessListResponseBodyProcessListData> data{};
  shared_ptr<string> rows{};
  shared_ptr<string> rowsBeforeLimitAtLeast{};
  shared_ptr<DescribeProcessListResponseBodyProcessListStatistics> statistics{};
  shared_ptr<DescribeProcessListResponseBodyProcessListTableSchema> tableSchema{};

  DescribeProcessListResponseBodyProcessList() {}

  explicit DescribeProcessListResponseBodyProcessList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (rowsBeforeLimitAtLeast) {
      res["RowsBeforeLimitAtLeast"] = boost::any(*rowsBeforeLimitAtLeast);
    }
    if (statistics) {
      res["Statistics"] = statistics ? boost::any(statistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableSchema) {
      res["TableSchema"] = tableSchema ? boost::any(tableSchema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeProcessListResponseBodyProcessListData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeProcessListResponseBodyProcessListData>(model1);
      }
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
    if (m.find("RowsBeforeLimitAtLeast") != m.end() && !m["RowsBeforeLimitAtLeast"].empty()) {
      rowsBeforeLimitAtLeast = make_shared<string>(boost::any_cast<string>(m["RowsBeforeLimitAtLeast"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["Statistics"].type()) {
        DescribeProcessListResponseBodyProcessListStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Statistics"]));
        statistics = make_shared<DescribeProcessListResponseBodyProcessListStatistics>(model1);
      }
    }
    if (m.find("TableSchema") != m.end() && !m["TableSchema"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableSchema"].type()) {
        DescribeProcessListResponseBodyProcessListTableSchema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableSchema"]));
        tableSchema = make_shared<DescribeProcessListResponseBodyProcessListTableSchema>(model1);
      }
    }
  }


  virtual ~DescribeProcessListResponseBodyProcessList() = default;
};
class DescribeProcessListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeProcessListResponseBodyProcessList> processList{};
  shared_ptr<string> requestId{};

  DescribeProcessListResponseBody() {}

  explicit DescribeProcessListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (processList) {
      res["ProcessList"] = processList ? boost::any(processList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProcessList") != m.end() && !m["ProcessList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProcessList"].type()) {
        DescribeProcessListResponseBodyProcessList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProcessList"]));
        processList = make_shared<DescribeProcessListResponseBodyProcessList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeProcessListResponseBody() = default;
};
class DescribeProcessListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProcessListResponseBody> body{};

  DescribeProcessListResponse() {}

  explicit DescribeProcessListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProcessListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProcessListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProcessListResponse() = default;
};
class DescribeRDSTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> rdsId{};
  shared_ptr<string> rdsPassword{};
  shared_ptr<long> rdsPort{};
  shared_ptr<string> rdsUserName{};
  shared_ptr<string> rdsVpcUrl{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schema{};

  DescribeRDSTablesRequest() {}

  explicit DescribeRDSTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (rdsId) {
      res["RdsId"] = boost::any(*rdsId);
    }
    if (rdsPassword) {
      res["RdsPassword"] = boost::any(*rdsPassword);
    }
    if (rdsPort) {
      res["RdsPort"] = boost::any(*rdsPort);
    }
    if (rdsUserName) {
      res["RdsUserName"] = boost::any(*rdsUserName);
    }
    if (rdsVpcUrl) {
      res["RdsVpcUrl"] = boost::any(*rdsVpcUrl);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RdsId") != m.end() && !m["RdsId"].empty()) {
      rdsId = make_shared<string>(boost::any_cast<string>(m["RdsId"]));
    }
    if (m.find("RdsPassword") != m.end() && !m["RdsPassword"].empty()) {
      rdsPassword = make_shared<string>(boost::any_cast<string>(m["RdsPassword"]));
    }
    if (m.find("RdsPort") != m.end() && !m["RdsPort"].empty()) {
      rdsPort = make_shared<long>(boost::any_cast<long>(m["RdsPort"]));
    }
    if (m.find("RdsUserName") != m.end() && !m["RdsUserName"].empty()) {
      rdsUserName = make_shared<string>(boost::any_cast<string>(m["RdsUserName"]));
    }
    if (m.find("RdsVpcUrl") != m.end() && !m["RdsVpcUrl"].empty()) {
      rdsVpcUrl = make_shared<string>(boost::any_cast<string>(m["RdsVpcUrl"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
  }


  virtual ~DescribeRDSTablesRequest() = default;
};
class DescribeRDSTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> tables{};

  DescribeRDSTablesResponseBody() {}

  explicit DescribeRDSTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tables) {
      res["Tables"] = boost::any(*tables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tables"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tables = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRDSTablesResponseBody() = default;
};
class DescribeRDSTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRDSTablesResponseBody> body{};

  DescribeRDSTablesResponse() {}

  explicit DescribeRDSTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRDSTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRDSTablesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRDSTablesResponse() = default;
};
class DescribeRDSVpcRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> rdsId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeRDSVpcRequest() {}

  explicit DescribeRDSVpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (rdsId) {
      res["RdsId"] = boost::any(*rdsId);
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
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RdsId") != m.end() && !m["RdsId"].empty()) {
      rdsId = make_shared<string>(boost::any_cast<string>(m["RdsId"]));
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


  virtual ~DescribeRDSVpcRequest() = default;
};
class DescribeRDSVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> vpcId{};

  DescribeRDSVpcResponseBody() {}

  explicit DescribeRDSVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeRDSVpcResponseBody() = default;
};
class DescribeRDSVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRDSVpcResponseBody> body{};

  DescribeRDSVpcResponse() {}

  explicit DescribeRDSVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRDSVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRDSVpcResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRDSVpcResponse() = default;
};
class DescribeRDSschemasRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> rdsId{};
  shared_ptr<string> rdsPassword{};
  shared_ptr<long> rdsPort{};
  shared_ptr<string> rdsUserName{};
  shared_ptr<string> rdsVpcUrl{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeRDSschemasRequest() {}

  explicit DescribeRDSschemasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (rdsId) {
      res["RdsId"] = boost::any(*rdsId);
    }
    if (rdsPassword) {
      res["RdsPassword"] = boost::any(*rdsPassword);
    }
    if (rdsPort) {
      res["RdsPort"] = boost::any(*rdsPort);
    }
    if (rdsUserName) {
      res["RdsUserName"] = boost::any(*rdsUserName);
    }
    if (rdsVpcUrl) {
      res["RdsVpcUrl"] = boost::any(*rdsVpcUrl);
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
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RdsId") != m.end() && !m["RdsId"].empty()) {
      rdsId = make_shared<string>(boost::any_cast<string>(m["RdsId"]));
    }
    if (m.find("RdsPassword") != m.end() && !m["RdsPassword"].empty()) {
      rdsPassword = make_shared<string>(boost::any_cast<string>(m["RdsPassword"]));
    }
    if (m.find("RdsPort") != m.end() && !m["RdsPort"].empty()) {
      rdsPort = make_shared<long>(boost::any_cast<long>(m["RdsPort"]));
    }
    if (m.find("RdsUserName") != m.end() && !m["RdsUserName"].empty()) {
      rdsUserName = make_shared<string>(boost::any_cast<string>(m["RdsUserName"]));
    }
    if (m.find("RdsVpcUrl") != m.end() && !m["RdsVpcUrl"].empty()) {
      rdsVpcUrl = make_shared<string>(boost::any_cast<string>(m["RdsVpcUrl"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeRDSschemasRequest() = default;
};
class DescribeRDSschemasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> schemas{};

  DescribeRDSschemasResponseBody() {}

  explicit DescribeRDSschemasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (schemas) {
      res["Schemas"] = boost::any(*schemas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Schemas") != m.end() && !m["Schemas"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Schemas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Schemas"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      schemas = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRDSschemasResponseBody() = default;
};
class DescribeRDSschemasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRDSschemasResponseBody> body{};

  DescribeRDSschemasResponse() {}

  explicit DescribeRDSschemasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRDSschemasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRDSschemasResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRDSschemasResponse() = default;
};
class DescribeRdsVSwitchsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeRdsVSwitchsRequest() {}

  explicit DescribeRdsVSwitchsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRdsVSwitchsRequest() = default;
};
class DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> bid{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> izNo{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchName{};

  DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch() {}

  explicit DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (izNo) {
      res["IzNo"] = boost::any(*izNo);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchName) {
      res["VSwitchName"] = boost::any(*vSwitchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("IzNo") != m.end() && !m["IzNo"].empty()) {
      izNo = make_shared<string>(boost::any_cast<string>(m["IzNo"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchName") != m.end() && !m["VSwitchName"].empty()) {
      vSwitchName = make_shared<string>(boost::any_cast<string>(m["VSwitchName"]));
    }
  }


  virtual ~DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch() = default;
};
class DescribeRdsVSwitchsResponseBodyVSwitches : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch>> vSwitch{};

  DescribeRdsVSwitchsResponseBodyVSwitches() {}

  explicit DescribeRdsVSwitchsResponseBodyVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitch"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitch = make_shared<vector<DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch>>(expect1);
      }
    }
  }


  virtual ~DescribeRdsVSwitchsResponseBodyVSwitches() = default;
};
class DescribeRdsVSwitchsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRdsVSwitchsResponseBodyVSwitches> vSwitches{};

  DescribeRdsVSwitchsResponseBody() {}

  explicit DescribeRdsVSwitchsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vSwitches) {
      res["VSwitches"] = vSwitches ? boost::any(vSwitches->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(map<string, boost::any>) == m["VSwitches"].type()) {
        DescribeRdsVSwitchsResponseBodyVSwitches model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VSwitches"]));
        vSwitches = make_shared<DescribeRdsVSwitchsResponseBodyVSwitches>(model1);
      }
    }
  }


  virtual ~DescribeRdsVSwitchsResponseBody() = default;
};
class DescribeRdsVSwitchsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRdsVSwitchsResponseBody> body{};

  DescribeRdsVSwitchsResponse() {}

  explicit DescribeRdsVSwitchsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRdsVSwitchsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdsVSwitchsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdsVSwitchsResponse() = default;
};
class DescribeRdsVpcsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> zoneId{};

  DescribeRdsVpcsRequest() {}

  explicit DescribeRdsVpcsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRdsVpcsRequest() = default;
};
class DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs : public Darabonba::Model {
public:
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> izNo{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchName{};

  DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs() {}

  explicit DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (izNo) {
      res["IzNo"] = boost::any(*izNo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchName) {
      res["VSwitchName"] = boost::any(*vSwitchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("IzNo") != m.end() && !m["IzNo"].empty()) {
      izNo = make_shared<string>(boost::any_cast<string>(m["IzNo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchName") != m.end() && !m["VSwitchName"].empty()) {
      vSwitchName = make_shared<string>(boost::any_cast<string>(m["VSwitchName"]));
    }
  }


  virtual ~DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs() = default;
};
class DescribeRdsVpcsResponseBodyVpcsVpc : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> bid{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs>> vSwitchs{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeRdsVpcsResponseBodyVpcsVpc() {}

  explicit DescribeRdsVpcsResponseBodyVpcsVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitchs) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitchs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitchs"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchs") != m.end() && !m["VSwitchs"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitchs"].type()) {
        vector<DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitchs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitchs = make_shared<vector<DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeRdsVpcsResponseBodyVpcsVpc() = default;
};
class DescribeRdsVpcsResponseBodyVpcs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRdsVpcsResponseBodyVpcsVpc>> vpc{};

  DescribeRdsVpcsResponseBodyVpcs() {}

  explicit DescribeRdsVpcsResponseBodyVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpc) {
      vector<boost::any> temp1;
      for(auto item1:*vpc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vpc"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vpc") != m.end() && !m["Vpc"].empty()) {
      if (typeid(vector<boost::any>) == m["Vpc"].type()) {
        vector<DescribeRdsVpcsResponseBodyVpcsVpc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vpc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdsVpcsResponseBodyVpcsVpc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpc = make_shared<vector<DescribeRdsVpcsResponseBodyVpcsVpc>>(expect1);
      }
    }
  }


  virtual ~DescribeRdsVpcsResponseBodyVpcs() = default;
};
class DescribeRdsVpcsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRdsVpcsResponseBodyVpcs> vpcs{};

  DescribeRdsVpcsResponseBody() {}

  explicit DescribeRdsVpcsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vpcs) {
      res["Vpcs"] = vpcs ? boost::any(vpcs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Vpcs") != m.end() && !m["Vpcs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vpcs"].type()) {
        DescribeRdsVpcsResponseBodyVpcs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vpcs"]));
        vpcs = make_shared<DescribeRdsVpcsResponseBodyVpcs>(model1);
      }
    }
  }


  virtual ~DescribeRdsVpcsResponseBody() = default;
};
class DescribeRdsVpcsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRdsVpcsResponseBody> body{};

  DescribeRdsVpcsResponse() {}

  explicit DescribeRdsVpcsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRdsVpcsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdsVpcsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdsVpcsResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~DescribeRegionsRequest() = default;
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
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
class DescribeSchemasRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeSchemasRequest() {}

  explicit DescribeSchemasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeSchemasRequest() = default;
};
class DescribeSchemasResponseBodyItemsSchema : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};

  DescribeSchemasResponseBodyItemsSchema() {}

  explicit DescribeSchemasResponseBodyItemsSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeSchemasResponseBodyItemsSchema() = default;
};
class DescribeSchemasResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSchemasResponseBodyItemsSchema>> schema{};

  DescribeSchemasResponseBodyItems() {}

  explicit DescribeSchemasResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schema) {
      vector<boost::any> temp1;
      for(auto item1:*schema){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schema"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      if (typeid(vector<boost::any>) == m["Schema"].type()) {
        vector<DescribeSchemasResponseBodyItemsSchema> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schema"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSchemasResponseBodyItemsSchema model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schema = make_shared<vector<DescribeSchemasResponseBodyItemsSchema>>(expect1);
      }
    }
  }


  virtual ~DescribeSchemasResponseBodyItems() = default;
};
class DescribeSchemasResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSchemasResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeSchemasResponseBody() {}

  explicit DescribeSchemasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeSchemasResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeSchemasResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSchemasResponseBody() = default;
};
class DescribeSchemasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSchemasResponseBody> body{};

  DescribeSchemasResponse() {}

  explicit DescribeSchemasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSchemasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSchemasResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSchemasResponse() = default;
};
class DescribeSlowLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> queryDurationMs{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  DescribeSlowLogRecordsRequest() {}

  explicit DescribeSlowLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (queryDurationMs) {
      res["QueryDurationMs"] = boost::any(*queryDurationMs);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("QueryDurationMs") != m.end() && !m["QueryDurationMs"].empty()) {
      queryDurationMs = make_shared<long>(boost::any_cast<long>(m["QueryDurationMs"]));
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
  }


  virtual ~DescribeSlowLogRecordsRequest() = default;
};
class DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet : public Darabonba::Model {
public:
  shared_ptr<string> initialAddress{};
  shared_ptr<string> initialQueryId{};
  shared_ptr<string> initialUser{};
  shared_ptr<string> memoryUsage{};
  shared_ptr<string> query{};
  shared_ptr<string> queryDurationMs{};
  shared_ptr<string> queryStartTime{};
  shared_ptr<string> readBytes{};
  shared_ptr<string> readRows{};
  shared_ptr<string> resultBytes{};
  shared_ptr<string> type{};

  DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet() {}

  explicit DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (initialAddress) {
      res["InitialAddress"] = boost::any(*initialAddress);
    }
    if (initialQueryId) {
      res["InitialQueryId"] = boost::any(*initialQueryId);
    }
    if (initialUser) {
      res["InitialUser"] = boost::any(*initialUser);
    }
    if (memoryUsage) {
      res["MemoryUsage"] = boost::any(*memoryUsage);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (queryDurationMs) {
      res["QueryDurationMs"] = boost::any(*queryDurationMs);
    }
    if (queryStartTime) {
      res["QueryStartTime"] = boost::any(*queryStartTime);
    }
    if (readBytes) {
      res["ReadBytes"] = boost::any(*readBytes);
    }
    if (readRows) {
      res["ReadRows"] = boost::any(*readRows);
    }
    if (resultBytes) {
      res["ResultBytes"] = boost::any(*resultBytes);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InitialAddress") != m.end() && !m["InitialAddress"].empty()) {
      initialAddress = make_shared<string>(boost::any_cast<string>(m["InitialAddress"]));
    }
    if (m.find("InitialQueryId") != m.end() && !m["InitialQueryId"].empty()) {
      initialQueryId = make_shared<string>(boost::any_cast<string>(m["InitialQueryId"]));
    }
    if (m.find("InitialUser") != m.end() && !m["InitialUser"].empty()) {
      initialUser = make_shared<string>(boost::any_cast<string>(m["InitialUser"]));
    }
    if (m.find("MemoryUsage") != m.end() && !m["MemoryUsage"].empty()) {
      memoryUsage = make_shared<string>(boost::any_cast<string>(m["MemoryUsage"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("QueryDurationMs") != m.end() && !m["QueryDurationMs"].empty()) {
      queryDurationMs = make_shared<string>(boost::any_cast<string>(m["QueryDurationMs"]));
    }
    if (m.find("QueryStartTime") != m.end() && !m["QueryStartTime"].empty()) {
      queryStartTime = make_shared<string>(boost::any_cast<string>(m["QueryStartTime"]));
    }
    if (m.find("ReadBytes") != m.end() && !m["ReadBytes"].empty()) {
      readBytes = make_shared<string>(boost::any_cast<string>(m["ReadBytes"]));
    }
    if (m.find("ReadRows") != m.end() && !m["ReadRows"].empty()) {
      readRows = make_shared<string>(boost::any_cast<string>(m["ReadRows"]));
    }
    if (m.find("ResultBytes") != m.end() && !m["ResultBytes"].empty()) {
      resultBytes = make_shared<string>(boost::any_cast<string>(m["ResultBytes"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet() = default;
};
class DescribeSlowLogRecordsResponseBodySlowLogRecordsData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet>> resultSet{};

  DescribeSlowLogRecordsResponseBodySlowLogRecordsData() {}

  explicit DescribeSlowLogRecordsResponseBodySlowLogRecordsData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultSet) {
      vector<boost::any> temp1;
      for(auto item1:*resultSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultSet"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultSet") != m.end() && !m["ResultSet"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultSet"].type()) {
        vector<DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultSet = make_shared<vector<DescribeSlowLogRecordsResponseBodySlowLogRecordsDataResultSet>>(expect1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodySlowLogRecordsData() = default;
};
class DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics : public Darabonba::Model {
public:
  shared_ptr<long> bytesRead{};
  shared_ptr<double> elapsedTime{};
  shared_ptr<long> rowsRead{};

  DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics() {}

  explicit DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bytesRead) {
      res["BytesRead"] = boost::any(*bytesRead);
    }
    if (elapsedTime) {
      res["ElapsedTime"] = boost::any(*elapsedTime);
    }
    if (rowsRead) {
      res["RowsRead"] = boost::any(*rowsRead);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BytesRead") != m.end() && !m["BytesRead"].empty()) {
      bytesRead = make_shared<long>(boost::any_cast<long>(m["BytesRead"]));
    }
    if (m.find("ElapsedTime") != m.end() && !m["ElapsedTime"].empty()) {
      elapsedTime = make_shared<double>(boost::any_cast<double>(m["ElapsedTime"]));
    }
    if (m.find("RowsRead") != m.end() && !m["RowsRead"].empty()) {
      rowsRead = make_shared<long>(boost::any_cast<long>(m["RowsRead"]));
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics() = default;
};
class DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchemaResultSet : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchemaResultSet() {}

  explicit DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchemaResultSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchemaResultSet() = default;
};
class DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchemaResultSet>> resultSet{};

  DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema() {}

  explicit DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultSet) {
      vector<boost::any> temp1;
      for(auto item1:*resultSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultSet"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultSet") != m.end() && !m["ResultSet"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultSet"].type()) {
        vector<DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchemaResultSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchemaResultSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultSet = make_shared<vector<DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchemaResultSet>>(expect1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema() = default;
};
class DescribeSlowLogRecordsResponseBodySlowLogRecords : public Darabonba::Model {
public:
  shared_ptr<DescribeSlowLogRecordsResponseBodySlowLogRecordsData> data{};
  shared_ptr<string> rows{};
  shared_ptr<string> rowsBeforeLimitAtLeast{};
  shared_ptr<DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics> statistics{};
  shared_ptr<DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema> tableSchema{};

  DescribeSlowLogRecordsResponseBodySlowLogRecords() {}

  explicit DescribeSlowLogRecordsResponseBodySlowLogRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (rowsBeforeLimitAtLeast) {
      res["RowsBeforeLimitAtLeast"] = boost::any(*rowsBeforeLimitAtLeast);
    }
    if (statistics) {
      res["Statistics"] = statistics ? boost::any(statistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableSchema) {
      res["TableSchema"] = tableSchema ? boost::any(tableSchema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeSlowLogRecordsResponseBodySlowLogRecordsData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeSlowLogRecordsResponseBodySlowLogRecordsData>(model1);
      }
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
    if (m.find("RowsBeforeLimitAtLeast") != m.end() && !m["RowsBeforeLimitAtLeast"].empty()) {
      rowsBeforeLimitAtLeast = make_shared<string>(boost::any_cast<string>(m["RowsBeforeLimitAtLeast"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["Statistics"].type()) {
        DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Statistics"]));
        statistics = make_shared<DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics>(model1);
      }
    }
    if (m.find("TableSchema") != m.end() && !m["TableSchema"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableSchema"].type()) {
        DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableSchema"]));
        tableSchema = make_shared<DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodySlowLogRecords() = default;
};
class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSlowLogRecordsResponseBodySlowLogRecords> slowLogRecords{};

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
    if (slowLogRecords) {
      res["SlowLogRecords"] = slowLogRecords ? boost::any(slowLogRecords->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlowLogRecords") != m.end() && !m["SlowLogRecords"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlowLogRecords"].type()) {
        DescribeSlowLogRecordsResponseBodySlowLogRecords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlowLogRecords"]));
        slowLogRecords = make_shared<DescribeSlowLogRecordsResponseBodySlowLogRecords>(model1);
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
class DescribeSlowLogTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> queryDurationMs{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  DescribeSlowLogTrendRequest() {}

  explicit DescribeSlowLogTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (queryDurationMs) {
      res["QueryDurationMs"] = boost::any(*queryDurationMs);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("QueryDurationMs") != m.end() && !m["QueryDurationMs"].empty()) {
      queryDurationMs = make_shared<long>(boost::any_cast<long>(m["QueryDurationMs"]));
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
  }


  virtual ~DescribeSlowLogTrendRequest() = default;
};
class DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet : public Darabonba::Model {
public:
  shared_ptr<string> avgQueryDurationMs{};
  shared_ptr<string> count{};
  shared_ptr<string> maxQueryDurationMs{};
  shared_ptr<string> minQueryDurationMs{};
  shared_ptr<string> queryStartTime{};

  DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet() {}

  explicit DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgQueryDurationMs) {
      res["AvgQueryDurationMs"] = boost::any(*avgQueryDurationMs);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (maxQueryDurationMs) {
      res["MaxQueryDurationMs"] = boost::any(*maxQueryDurationMs);
    }
    if (minQueryDurationMs) {
      res["MinQueryDurationMs"] = boost::any(*minQueryDurationMs);
    }
    if (queryStartTime) {
      res["QueryStartTime"] = boost::any(*queryStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgQueryDurationMs") != m.end() && !m["AvgQueryDurationMs"].empty()) {
      avgQueryDurationMs = make_shared<string>(boost::any_cast<string>(m["AvgQueryDurationMs"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("MaxQueryDurationMs") != m.end() && !m["MaxQueryDurationMs"].empty()) {
      maxQueryDurationMs = make_shared<string>(boost::any_cast<string>(m["MaxQueryDurationMs"]));
    }
    if (m.find("MinQueryDurationMs") != m.end() && !m["MinQueryDurationMs"].empty()) {
      minQueryDurationMs = make_shared<string>(boost::any_cast<string>(m["MinQueryDurationMs"]));
    }
    if (m.find("QueryStartTime") != m.end() && !m["QueryStartTime"].empty()) {
      queryStartTime = make_shared<string>(boost::any_cast<string>(m["QueryStartTime"]));
    }
  }


  virtual ~DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet() = default;
};
class DescribeSlowLogTrendResponseBodySlowLogTrendData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet>> resultSet{};

  DescribeSlowLogTrendResponseBodySlowLogTrendData() {}

  explicit DescribeSlowLogTrendResponseBodySlowLogTrendData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultSet) {
      vector<boost::any> temp1;
      for(auto item1:*resultSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultSet"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultSet") != m.end() && !m["ResultSet"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultSet"].type()) {
        vector<DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultSet = make_shared<vector<DescribeSlowLogTrendResponseBodySlowLogTrendDataResultSet>>(expect1);
      }
    }
  }


  virtual ~DescribeSlowLogTrendResponseBodySlowLogTrendData() = default;
};
class DescribeSlowLogTrendResponseBodySlowLogTrendStatistics : public Darabonba::Model {
public:
  shared_ptr<long> bytesRead{};
  shared_ptr<double> elapsedTime{};
  shared_ptr<long> rowsRead{};

  DescribeSlowLogTrendResponseBodySlowLogTrendStatistics() {}

  explicit DescribeSlowLogTrendResponseBodySlowLogTrendStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bytesRead) {
      res["BytesRead"] = boost::any(*bytesRead);
    }
    if (elapsedTime) {
      res["ElapsedTime"] = boost::any(*elapsedTime);
    }
    if (rowsRead) {
      res["RowsRead"] = boost::any(*rowsRead);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BytesRead") != m.end() && !m["BytesRead"].empty()) {
      bytesRead = make_shared<long>(boost::any_cast<long>(m["BytesRead"]));
    }
    if (m.find("ElapsedTime") != m.end() && !m["ElapsedTime"].empty()) {
      elapsedTime = make_shared<double>(boost::any_cast<double>(m["ElapsedTime"]));
    }
    if (m.find("RowsRead") != m.end() && !m["RowsRead"].empty()) {
      rowsRead = make_shared<long>(boost::any_cast<long>(m["RowsRead"]));
    }
  }


  virtual ~DescribeSlowLogTrendResponseBodySlowLogTrendStatistics() = default;
};
class DescribeSlowLogTrendResponseBodySlowLogTrendTableSchemaResultSet : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DescribeSlowLogTrendResponseBodySlowLogTrendTableSchemaResultSet() {}

  explicit DescribeSlowLogTrendResponseBodySlowLogTrendTableSchemaResultSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeSlowLogTrendResponseBodySlowLogTrendTableSchemaResultSet() = default;
};
class DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowLogTrendResponseBodySlowLogTrendTableSchemaResultSet>> resultSet{};

  DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema() {}

  explicit DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultSet) {
      vector<boost::any> temp1;
      for(auto item1:*resultSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultSet"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultSet") != m.end() && !m["ResultSet"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultSet"].type()) {
        vector<DescribeSlowLogTrendResponseBodySlowLogTrendTableSchemaResultSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowLogTrendResponseBodySlowLogTrendTableSchemaResultSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultSet = make_shared<vector<DescribeSlowLogTrendResponseBodySlowLogTrendTableSchemaResultSet>>(expect1);
      }
    }
  }


  virtual ~DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema() = default;
};
class DescribeSlowLogTrendResponseBodySlowLogTrend : public Darabonba::Model {
public:
  shared_ptr<DescribeSlowLogTrendResponseBodySlowLogTrendData> data{};
  shared_ptr<string> rows{};
  shared_ptr<string> rowsBeforeLimitAtLeast{};
  shared_ptr<DescribeSlowLogTrendResponseBodySlowLogTrendStatistics> statistics{};
  shared_ptr<DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema> tableSchema{};

  DescribeSlowLogTrendResponseBodySlowLogTrend() {}

  explicit DescribeSlowLogTrendResponseBodySlowLogTrend(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (rowsBeforeLimitAtLeast) {
      res["RowsBeforeLimitAtLeast"] = boost::any(*rowsBeforeLimitAtLeast);
    }
    if (statistics) {
      res["Statistics"] = statistics ? boost::any(statistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableSchema) {
      res["TableSchema"] = tableSchema ? boost::any(tableSchema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeSlowLogTrendResponseBodySlowLogTrendData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeSlowLogTrendResponseBodySlowLogTrendData>(model1);
      }
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
    if (m.find("RowsBeforeLimitAtLeast") != m.end() && !m["RowsBeforeLimitAtLeast"].empty()) {
      rowsBeforeLimitAtLeast = make_shared<string>(boost::any_cast<string>(m["RowsBeforeLimitAtLeast"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["Statistics"].type()) {
        DescribeSlowLogTrendResponseBodySlowLogTrendStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Statistics"]));
        statistics = make_shared<DescribeSlowLogTrendResponseBodySlowLogTrendStatistics>(model1);
      }
    }
    if (m.find("TableSchema") != m.end() && !m["TableSchema"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableSchema"].type()) {
        DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableSchema"]));
        tableSchema = make_shared<DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogTrendResponseBodySlowLogTrend() = default;
};
class DescribeSlowLogTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSlowLogTrendResponseBodySlowLogTrend> slowLogTrend{};

  DescribeSlowLogTrendResponseBody() {}

  explicit DescribeSlowLogTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slowLogTrend) {
      res["SlowLogTrend"] = slowLogTrend ? boost::any(slowLogTrend->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlowLogTrend") != m.end() && !m["SlowLogTrend"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlowLogTrend"].type()) {
        DescribeSlowLogTrendResponseBodySlowLogTrend model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlowLogTrend"]));
        slowLogTrend = make_shared<DescribeSlowLogTrendResponseBodySlowLogTrend>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogTrendResponseBody() = default;
};
class DescribeSlowLogTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSlowLogTrendResponseBody> body{};

  DescribeSlowLogTrendResponse() {}

  explicit DescribeSlowLogTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlowLogTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlowLogTrendResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogTrendResponse() = default;
};
class DescribeSynDbTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> synDb{};

  DescribeSynDbTablesRequest() {}

  explicit DescribeSynDbTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
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
    if (synDb) {
      res["SynDb"] = boost::any(*synDb);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
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
    if (m.find("SynDb") != m.end() && !m["SynDb"].empty()) {
      synDb = make_shared<string>(boost::any_cast<string>(m["SynDb"]));
    }
  }


  virtual ~DescribeSynDbTablesRequest() = default;
};
class DescribeSynDbTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> tables{};

  DescribeSynDbTablesResponseBody() {}

  explicit DescribeSynDbTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tables) {
      res["Tables"] = boost::any(*tables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tables"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tables = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSynDbTablesResponseBody() = default;
};
class DescribeSynDbTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSynDbTablesResponseBody> body{};

  DescribeSynDbTablesResponse() {}

  explicit DescribeSynDbTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSynDbTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSynDbTablesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSynDbTablesResponse() = default;
};
class DescribeSynDbsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeSynDbsRequest() {}

  explicit DescribeSynDbsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
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
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
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


  virtual ~DescribeSynDbsRequest() = default;
};
class DescribeSynDbsResponseBodySynDbs : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> rdsId{};
  shared_ptr<string> rdsPassword{};
  shared_ptr<string> rdsUserName{};
  shared_ptr<string> rdsVpcUrl{};
  shared_ptr<string> synDb{};
  shared_ptr<bool> synStatus{};

  DescribeSynDbsResponseBodySynDbs() {}

  explicit DescribeSynDbsResponseBodySynDbs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (rdsId) {
      res["RdsId"] = boost::any(*rdsId);
    }
    if (rdsPassword) {
      res["RdsPassword"] = boost::any(*rdsPassword);
    }
    if (rdsUserName) {
      res["RdsUserName"] = boost::any(*rdsUserName);
    }
    if (rdsVpcUrl) {
      res["RdsVpcUrl"] = boost::any(*rdsVpcUrl);
    }
    if (synDb) {
      res["SynDb"] = boost::any(*synDb);
    }
    if (synStatus) {
      res["SynStatus"] = boost::any(*synStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RdsId") != m.end() && !m["RdsId"].empty()) {
      rdsId = make_shared<string>(boost::any_cast<string>(m["RdsId"]));
    }
    if (m.find("RdsPassword") != m.end() && !m["RdsPassword"].empty()) {
      rdsPassword = make_shared<string>(boost::any_cast<string>(m["RdsPassword"]));
    }
    if (m.find("RdsUserName") != m.end() && !m["RdsUserName"].empty()) {
      rdsUserName = make_shared<string>(boost::any_cast<string>(m["RdsUserName"]));
    }
    if (m.find("RdsVpcUrl") != m.end() && !m["RdsVpcUrl"].empty()) {
      rdsVpcUrl = make_shared<string>(boost::any_cast<string>(m["RdsVpcUrl"]));
    }
    if (m.find("SynDb") != m.end() && !m["SynDb"].empty()) {
      synDb = make_shared<string>(boost::any_cast<string>(m["SynDb"]));
    }
    if (m.find("SynStatus") != m.end() && !m["SynStatus"].empty()) {
      synStatus = make_shared<bool>(boost::any_cast<bool>(m["SynStatus"]));
    }
  }


  virtual ~DescribeSynDbsResponseBodySynDbs() = default;
};
class DescribeSynDbsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSynDbsResponseBodySynDbs>> synDbs{};

  DescribeSynDbsResponseBody() {}

  explicit DescribeSynDbsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (synDbs) {
      vector<boost::any> temp1;
      for(auto item1:*synDbs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SynDbs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SynDbs") != m.end() && !m["SynDbs"].empty()) {
      if (typeid(vector<boost::any>) == m["SynDbs"].type()) {
        vector<DescribeSynDbsResponseBodySynDbs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SynDbs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSynDbsResponseBodySynDbs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        synDbs = make_shared<vector<DescribeSynDbsResponseBodySynDbs>>(expect1);
      }
    }
  }


  virtual ~DescribeSynDbsResponseBody() = default;
};
class DescribeSynDbsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSynDbsResponseBody> body{};

  DescribeSynDbsResponse() {}

  explicit DescribeSynDbsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSynDbsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSynDbsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSynDbsResponse() = default;
};
class DescribeTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeTablesRequest() {}

  explicit DescribeTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeTablesRequest() = default;
};
class DescribeTablesResponseBodyItemsTable : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeTablesResponseBodyItemsTable() {}

  explicit DescribeTablesResponseBodyItemsTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeTablesResponseBodyItemsTable() = default;
};
class DescribeTablesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTablesResponseBodyItemsTable>> table{};

  DescribeTablesResponseBodyItems() {}

  explicit DescribeTablesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      vector<boost::any> temp1;
      for(auto item1:*table){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Table"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<DescribeTablesResponseBodyItemsTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTablesResponseBodyItemsTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<DescribeTablesResponseBodyItemsTable>>(expect1);
      }
    }
  }


  virtual ~DescribeTablesResponseBodyItems() = default;
};
class DescribeTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeTablesResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeTablesResponseBody() {}

  explicit DescribeTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeTablesResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeTablesResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeTablesResponseBody() = default;
};
class DescribeTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTablesResponseBody> body{};

  DescribeTablesResponse() {}

  explicit DescribeTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTablesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTablesResponse() = default;
};
class DescribeTransferHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeTransferHistoryRequest() {}

  explicit DescribeTransferHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~DescribeTransferHistoryRequest() = default;
};
class DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail : public Darabonba::Model {
public:
  shared_ptr<string> progress{};
  shared_ptr<string> sourceDBCluster{};
  shared_ptr<string> status{};
  shared_ptr<string> targetDBCluster{};

  DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail() {}

  explicit DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (sourceDBCluster) {
      res["SourceDBCluster"] = boost::any(*sourceDBCluster);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetDBCluster) {
      res["TargetDBCluster"] = boost::any(*targetDBCluster);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("SourceDBCluster") != m.end() && !m["SourceDBCluster"].empty()) {
      sourceDBCluster = make_shared<string>(boost::any_cast<string>(m["SourceDBCluster"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetDBCluster") != m.end() && !m["TargetDBCluster"].empty()) {
      targetDBCluster = make_shared<string>(boost::any_cast<string>(m["TargetDBCluster"]));
    }
  }


  virtual ~DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail() = default;
};
class DescribeTransferHistoryResponseBodyHistoryDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail>> historyDetail{};

  DescribeTransferHistoryResponseBodyHistoryDetails() {}

  explicit DescribeTransferHistoryResponseBodyHistoryDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historyDetail) {
      vector<boost::any> temp1;
      for(auto item1:*historyDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HistoryDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HistoryDetail") != m.end() && !m["HistoryDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["HistoryDetail"].type()) {
        vector<DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HistoryDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        historyDetail = make_shared<vector<DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeTransferHistoryResponseBodyHistoryDetails() = default;
};
class DescribeTransferHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeTransferHistoryResponseBodyHistoryDetails> historyDetails{};
  shared_ptr<string> requestId{};

  DescribeTransferHistoryResponseBody() {}

  explicit DescribeTransferHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historyDetails) {
      res["HistoryDetails"] = historyDetails ? boost::any(historyDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HistoryDetails") != m.end() && !m["HistoryDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["HistoryDetails"].type()) {
        DescribeTransferHistoryResponseBodyHistoryDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HistoryDetails"]));
        historyDetails = make_shared<DescribeTransferHistoryResponseBodyHistoryDetails>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeTransferHistoryResponseBody() = default;
};
class DescribeTransferHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTransferHistoryResponseBody> body{};

  DescribeTransferHistoryResponse() {}

  explicit DescribeTransferHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTransferHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTransferHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTransferHistoryResponse() = default;
};
class KillProcessRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> initialQueryId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  KillProcessRequest() {}

  explicit KillProcessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (initialQueryId) {
      res["InitialQueryId"] = boost::any(*initialQueryId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("InitialQueryId") != m.end() && !m["InitialQueryId"].empty()) {
      initialQueryId = make_shared<string>(boost::any_cast<string>(m["InitialQueryId"]));
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


  virtual ~KillProcessRequest() = default;
};
class KillProcessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  KillProcessResponseBody() {}

  explicit KillProcessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~KillProcessResponseBody() = default;
};
class KillProcessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<KillProcessResponseBody> body{};

  KillProcessResponse() {}

  explicit KillProcessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        KillProcessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KillProcessResponseBody>(model1);
      }
    }
  }


  virtual ~KillProcessResponse() = default;
};
class ModifyAccountAuthorityRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> allowDatabases{};
  shared_ptr<string> allowDictionaries{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> ddlAuthority{};
  shared_ptr<string> dmlAuthority{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> totalDatabases{};
  shared_ptr<string> totalDictionaries{};

  ModifyAccountAuthorityRequest() {}

  explicit ModifyAccountAuthorityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (allowDatabases) {
      res["AllowDatabases"] = boost::any(*allowDatabases);
    }
    if (allowDictionaries) {
      res["AllowDictionaries"] = boost::any(*allowDictionaries);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ddlAuthority) {
      res["DdlAuthority"] = boost::any(*ddlAuthority);
    }
    if (dmlAuthority) {
      res["DmlAuthority"] = boost::any(*dmlAuthority);
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
    if (totalDatabases) {
      res["TotalDatabases"] = boost::any(*totalDatabases);
    }
    if (totalDictionaries) {
      res["TotalDictionaries"] = boost::any(*totalDictionaries);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AllowDatabases") != m.end() && !m["AllowDatabases"].empty()) {
      allowDatabases = make_shared<string>(boost::any_cast<string>(m["AllowDatabases"]));
    }
    if (m.find("AllowDictionaries") != m.end() && !m["AllowDictionaries"].empty()) {
      allowDictionaries = make_shared<string>(boost::any_cast<string>(m["AllowDictionaries"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DdlAuthority") != m.end() && !m["DdlAuthority"].empty()) {
      ddlAuthority = make_shared<bool>(boost::any_cast<bool>(m["DdlAuthority"]));
    }
    if (m.find("DmlAuthority") != m.end() && !m["DmlAuthority"].empty()) {
      dmlAuthority = make_shared<string>(boost::any_cast<string>(m["DmlAuthority"]));
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
    if (m.find("TotalDatabases") != m.end() && !m["TotalDatabases"].empty()) {
      totalDatabases = make_shared<string>(boost::any_cast<string>(m["TotalDatabases"]));
    }
    if (m.find("TotalDictionaries") != m.end() && !m["TotalDictionaries"].empty()) {
      totalDictionaries = make_shared<string>(boost::any_cast<string>(m["TotalDictionaries"]));
    }
  }


  virtual ~ModifyAccountAuthorityRequest() = default;
};
class ModifyAccountAuthorityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccountAuthorityResponseBody() {}

  explicit ModifyAccountAuthorityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAccountAuthorityResponseBody() = default;
};
class ModifyAccountAuthorityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyAccountAuthorityResponseBody> body{};

  ModifyAccountAuthorityResponse() {}

  explicit ModifyAccountAuthorityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAccountAuthorityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccountAuthorityResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccountAuthorityResponse() = default;
};
class ModifyAccountDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

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
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
class ModifyBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupRetentionPeriod{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyBackupPolicyRequest() {}

  explicit ModifyBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
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
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["BackupRetentionPeriod"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
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
class ModifyClickHouseClusterServerGRPCRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyClickHouseClusterServerGRPCRequest() {}

  explicit ModifyClickHouseClusterServerGRPCRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
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
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
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


  virtual ~ModifyClickHouseClusterServerGRPCRequest() = default;
};
class ModifyClickHouseClusterServerGRPCResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyClickHouseClusterServerGRPCResponseBody() {}

  explicit ModifyClickHouseClusterServerGRPCResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyClickHouseClusterServerGRPCResponseBody() = default;
};
class ModifyClickHouseClusterServerGRPCResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyClickHouseClusterServerGRPCResponseBody> body{};

  ModifyClickHouseClusterServerGRPCResponse() {}

  explicit ModifyClickHouseClusterServerGRPCResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyClickHouseClusterServerGRPCResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClickHouseClusterServerGRPCResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClickHouseClusterServerGRPCResponse() = default;
};
class ModifyDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterClass{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBNodeGroupCount{};
  shared_ptr<string> DBNodeStorage{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBClusterRequest() {}

  explicit ModifyDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterClass) {
      res["DBClusterClass"] = boost::any(*DBClusterClass);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBNodeGroupCount) {
      res["DBNodeGroupCount"] = boost::any(*DBNodeGroupCount);
    }
    if (DBNodeStorage) {
      res["DBNodeStorage"] = boost::any(*DBNodeStorage);
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
    if (m.find("DBClusterClass") != m.end() && !m["DBClusterClass"].empty()) {
      DBClusterClass = make_shared<string>(boost::any_cast<string>(m["DBClusterClass"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBNodeGroupCount") != m.end() && !m["DBNodeGroupCount"].empty()) {
      DBNodeGroupCount = make_shared<string>(boost::any_cast<string>(m["DBNodeGroupCount"]));
    }
    if (m.find("DBNodeStorage") != m.end() && !m["DBNodeStorage"].empty()) {
      DBNodeStorage = make_shared<string>(boost::any_cast<string>(m["DBNodeStorage"]));
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


  virtual ~ModifyDBClusterRequest() = default;
};
class ModifyDBClusterResponseBodyDBCluster : public Darabonba::Model {
public:
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> orderId{};

  ModifyDBClusterResponseBodyDBCluster() {}

  explicit ModifyDBClusterResponseBodyDBCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbClusterId) {
      res["dbClusterId"] = boost::any(*dbClusterId);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dbClusterId") != m.end() && !m["dbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["dbClusterId"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
  }


  virtual ~ModifyDBClusterResponseBodyDBCluster() = default;
};
class ModifyDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<ModifyDBClusterResponseBodyDBCluster> DBCluster{};
  shared_ptr<string> requestId{};

  ModifyDBClusterResponseBody() {}

  explicit ModifyDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBCluster) {
      res["DBCluster"] = DBCluster ? boost::any(DBCluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBCluster") != m.end() && !m["DBCluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBCluster"].type()) {
        ModifyDBClusterResponseBodyDBCluster model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBCluster"]));
        DBCluster = make_shared<ModifyDBClusterResponseBodyDBCluster>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterResponseBody() = default;
};
class ModifyDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterResponseBody> body{};

  ModifyDBClusterResponse() {}

  explicit ModifyDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterResponse() = default;
};
class ModifyDBClusterAccessWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterIPArrayAttribute{};
  shared_ptr<string> DBClusterIPArrayName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> modifyMode{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityIps{};

  ModifyDBClusterAccessWhiteListRequest() {}

  explicit ModifyDBClusterAccessWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterIPArrayAttribute) {
      res["DBClusterIPArrayAttribute"] = boost::any(*DBClusterIPArrayAttribute);
    }
    if (DBClusterIPArrayName) {
      res["DBClusterIPArrayName"] = boost::any(*DBClusterIPArrayName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (modifyMode) {
      res["ModifyMode"] = boost::any(*modifyMode);
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
    if (securityIps) {
      res["SecurityIps"] = boost::any(*securityIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterIPArrayAttribute") != m.end() && !m["DBClusterIPArrayAttribute"].empty()) {
      DBClusterIPArrayAttribute = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayAttribute"]));
    }
    if (m.find("DBClusterIPArrayName") != m.end() && !m["DBClusterIPArrayName"].empty()) {
      DBClusterIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ModifyMode") != m.end() && !m["ModifyMode"].empty()) {
      modifyMode = make_shared<string>(boost::any_cast<string>(m["ModifyMode"]));
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
    if (m.find("SecurityIps") != m.end() && !m["SecurityIps"].empty()) {
      securityIps = make_shared<string>(boost::any_cast<string>(m["SecurityIps"]));
    }
  }


  virtual ~ModifyDBClusterAccessWhiteListRequest() = default;
};
class ModifyDBClusterAccessWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterAccessWhiteListResponseBody() {}

  explicit ModifyDBClusterAccessWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBClusterAccessWhiteListResponseBody() = default;
};
class ModifyDBClusterAccessWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterAccessWhiteListResponseBody> body{};

  ModifyDBClusterAccessWhiteListResponse() {}

  explicit ModifyDBClusterAccessWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBClusterAccessWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterAccessWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterAccessWhiteListResponse() = default;
};
class ModifyDBClusterConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> userConfig{};

  ModifyDBClusterConfigRequest() {}

  explicit ModifyDBClusterConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (userConfig) {
      res["UserConfig"] = boost::any(*userConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("UserConfig") != m.end() && !m["UserConfig"].empty()) {
      userConfig = make_shared<string>(boost::any_cast<string>(m["UserConfig"]));
    }
  }


  virtual ~ModifyDBClusterConfigRequest() = default;
};
class ModifyDBClusterConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterConfigResponseBody() {}

  explicit ModifyDBClusterConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBClusterConfigResponseBody() = default;
};
class ModifyDBClusterConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterConfigResponseBody> body{};

  ModifyDBClusterConfigResponse() {}

  explicit ModifyDBClusterConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBClusterConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterConfigResponse() = default;
};
class ModifyDBClusterDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBClusterDescriptionRequest() {}

  explicit ModifyDBClusterDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~ModifyDBClusterDescriptionRequest() = default;
};
class ModifyDBClusterDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterDescriptionResponseBody() {}

  explicit ModifyDBClusterDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBClusterDescriptionResponseBody() = default;
};
class ModifyDBClusterDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterDescriptionResponseBody> body{};

  ModifyDBClusterDescriptionResponse() {}

  explicit ModifyDBClusterDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBClusterDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterDescriptionResponse() = default;
};
class ModifyDBClusterMaintainTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> maintainTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBClusterMaintainTimeRequest() {}

  explicit ModifyDBClusterMaintainTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (maintainTime) {
      res["MaintainTime"] = boost::any(*maintainTime);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("MaintainTime") != m.end() && !m["MaintainTime"].empty()) {
      maintainTime = make_shared<string>(boost::any_cast<string>(m["MaintainTime"]));
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


  virtual ~ModifyDBClusterMaintainTimeRequest() = default;
};
class ModifyDBClusterMaintainTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterMaintainTimeResponseBody() {}

  explicit ModifyDBClusterMaintainTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBClusterMaintainTimeResponseBody() = default;
};
class ModifyDBClusterMaintainTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterMaintainTimeResponseBody> body{};

  ModifyDBClusterMaintainTimeResponse() {}

  explicit ModifyDBClusterMaintainTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBClusterMaintainTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterMaintainTimeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterMaintainTimeResponse() = default;
};
class ModifyDBConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBConfigRequest() {}

  explicit ModifyDBConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~ModifyDBConfigRequest() = default;
};
class ModifyDBConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBConfigResponseBody() {}

  explicit ModifyDBConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBConfigResponseBody() = default;
};
class ModifyDBConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBConfigResponseBody> body{};

  ModifyDBConfigResponse() {}

  explicit ModifyDBConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBConfigResponse() = default;
};
class ModifyRDSToClickhouseDbRequest : public Darabonba::Model {
public:
  shared_ptr<string> ckPassword{};
  shared_ptr<string> ckUserName{};
  shared_ptr<long> clickhousePort{};
  shared_ptr<string> dbClusterId{};
  shared_ptr<long> limitUpper{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> rdsId{};
  shared_ptr<string> rdsPassword{};
  shared_ptr<long> rdsPort{};
  shared_ptr<string> rdsSynDb{};
  shared_ptr<string> rdsSynTables{};
  shared_ptr<string> rdsUserName{};
  shared_ptr<string> rdsVpcId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<bool> skipUnsupported{};

  ModifyRDSToClickhouseDbRequest() {}

  explicit ModifyRDSToClickhouseDbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ckPassword) {
      res["CkPassword"] = boost::any(*ckPassword);
    }
    if (ckUserName) {
      res["CkUserName"] = boost::any(*ckUserName);
    }
    if (clickhousePort) {
      res["ClickhousePort"] = boost::any(*clickhousePort);
    }
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
    }
    if (limitUpper) {
      res["LimitUpper"] = boost::any(*limitUpper);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (rdsId) {
      res["RdsId"] = boost::any(*rdsId);
    }
    if (rdsPassword) {
      res["RdsPassword"] = boost::any(*rdsPassword);
    }
    if (rdsPort) {
      res["RdsPort"] = boost::any(*rdsPort);
    }
    if (rdsSynDb) {
      res["RdsSynDb"] = boost::any(*rdsSynDb);
    }
    if (rdsSynTables) {
      res["RdsSynTables"] = boost::any(*rdsSynTables);
    }
    if (rdsUserName) {
      res["RdsUserName"] = boost::any(*rdsUserName);
    }
    if (rdsVpcId) {
      res["RdsVpcId"] = boost::any(*rdsVpcId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (skipUnsupported) {
      res["SkipUnsupported"] = boost::any(*skipUnsupported);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CkPassword") != m.end() && !m["CkPassword"].empty()) {
      ckPassword = make_shared<string>(boost::any_cast<string>(m["CkPassword"]));
    }
    if (m.find("CkUserName") != m.end() && !m["CkUserName"].empty()) {
      ckUserName = make_shared<string>(boost::any_cast<string>(m["CkUserName"]));
    }
    if (m.find("ClickhousePort") != m.end() && !m["ClickhousePort"].empty()) {
      clickhousePort = make_shared<long>(boost::any_cast<long>(m["ClickhousePort"]));
    }
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
    }
    if (m.find("LimitUpper") != m.end() && !m["LimitUpper"].empty()) {
      limitUpper = make_shared<long>(boost::any_cast<long>(m["LimitUpper"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RdsId") != m.end() && !m["RdsId"].empty()) {
      rdsId = make_shared<string>(boost::any_cast<string>(m["RdsId"]));
    }
    if (m.find("RdsPassword") != m.end() && !m["RdsPassword"].empty()) {
      rdsPassword = make_shared<string>(boost::any_cast<string>(m["RdsPassword"]));
    }
    if (m.find("RdsPort") != m.end() && !m["RdsPort"].empty()) {
      rdsPort = make_shared<long>(boost::any_cast<long>(m["RdsPort"]));
    }
    if (m.find("RdsSynDb") != m.end() && !m["RdsSynDb"].empty()) {
      rdsSynDb = make_shared<string>(boost::any_cast<string>(m["RdsSynDb"]));
    }
    if (m.find("RdsSynTables") != m.end() && !m["RdsSynTables"].empty()) {
      rdsSynTables = make_shared<string>(boost::any_cast<string>(m["RdsSynTables"]));
    }
    if (m.find("RdsUserName") != m.end() && !m["RdsUserName"].empty()) {
      rdsUserName = make_shared<string>(boost::any_cast<string>(m["RdsUserName"]));
    }
    if (m.find("RdsVpcId") != m.end() && !m["RdsVpcId"].empty()) {
      rdsVpcId = make_shared<string>(boost::any_cast<string>(m["RdsVpcId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SkipUnsupported") != m.end() && !m["SkipUnsupported"].empty()) {
      skipUnsupported = make_shared<bool>(boost::any_cast<bool>(m["SkipUnsupported"]));
    }
  }


  virtual ~ModifyRDSToClickhouseDbRequest() = default;
};
class ModifyRDSToClickhouseDbResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};

  ModifyRDSToClickhouseDbResponseBody() {}

  explicit ModifyRDSToClickhouseDbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ModifyRDSToClickhouseDbResponseBody() = default;
};
class ModifyRDSToClickhouseDbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyRDSToClickhouseDbResponseBody> body{};

  ModifyRDSToClickhouseDbResponse() {}

  explicit ModifyRDSToClickhouseDbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyRDSToClickhouseDbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRDSToClickhouseDbResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRDSToClickhouseDbResponse() = default;
};
class OperateLogHubRequestLogHubStores : public Darabonba::Model {
public:
  shared_ptr<string> fieldKey{};
  shared_ptr<string> logKey{};
  shared_ptr<string> type{};

  OperateLogHubRequestLogHubStores() {}

  explicit OperateLogHubRequestLogHubStores(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldKey) {
      res["FieldKey"] = boost::any(*fieldKey);
    }
    if (logKey) {
      res["LogKey"] = boost::any(*logKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldKey") != m.end() && !m["FieldKey"].empty()) {
      fieldKey = make_shared<string>(boost::any_cast<string>(m["FieldKey"]));
    }
    if (m.find("LogKey") != m.end() && !m["LogKey"].empty()) {
      logKey = make_shared<string>(boost::any_cast<string>(m["LogKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~OperateLogHubRequestLogHubStores() = default;
};
class OperateLogHubRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> accessSecret{};
  shared_ptr<bool> create{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> deliverName{};
  shared_ptr<string> deliverTime{};
  shared_ptr<string> description{};
  shared_ptr<string> domainUrl{};
  shared_ptr<bool> filterDirtyData{};
  shared_ptr<vector<OperateLogHubRequestLogHubStores>> logHubStores{};
  shared_ptr<string> logStoreName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> password{};
  shared_ptr<string> projectName{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> taskId{};
  shared_ptr<bool> useLorne{};
  shared_ptr<string> userName{};

  OperateLogHubRequest() {}

  explicit OperateLogHubRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (accessSecret) {
      res["AccessSecret"] = boost::any(*accessSecret);
    }
    if (create) {
      res["Create"] = boost::any(*create);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (deliverName) {
      res["DeliverName"] = boost::any(*deliverName);
    }
    if (deliverTime) {
      res["DeliverTime"] = boost::any(*deliverTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainUrl) {
      res["DomainUrl"] = boost::any(*domainUrl);
    }
    if (filterDirtyData) {
      res["FilterDirtyData"] = boost::any(*filterDirtyData);
    }
    if (logHubStores) {
      vector<boost::any> temp1;
      for(auto item1:*logHubStores){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogHubStores"] = boost::any(temp1);
    }
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (useLorne) {
      res["UseLorne"] = boost::any(*useLorne);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("AccessSecret") != m.end() && !m["AccessSecret"].empty()) {
      accessSecret = make_shared<string>(boost::any_cast<string>(m["AccessSecret"]));
    }
    if (m.find("Create") != m.end() && !m["Create"].empty()) {
      create = make_shared<bool>(boost::any_cast<bool>(m["Create"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DeliverName") != m.end() && !m["DeliverName"].empty()) {
      deliverName = make_shared<string>(boost::any_cast<string>(m["DeliverName"]));
    }
    if (m.find("DeliverTime") != m.end() && !m["DeliverTime"].empty()) {
      deliverTime = make_shared<string>(boost::any_cast<string>(m["DeliverTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainUrl") != m.end() && !m["DomainUrl"].empty()) {
      domainUrl = make_shared<string>(boost::any_cast<string>(m["DomainUrl"]));
    }
    if (m.find("FilterDirtyData") != m.end() && !m["FilterDirtyData"].empty()) {
      filterDirtyData = make_shared<bool>(boost::any_cast<bool>(m["FilterDirtyData"]));
    }
    if (m.find("LogHubStores") != m.end() && !m["LogHubStores"].empty()) {
      if (typeid(vector<boost::any>) == m["LogHubStores"].type()) {
        vector<OperateLogHubRequestLogHubStores> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogHubStores"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OperateLogHubRequestLogHubStores model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logHubStores = make_shared<vector<OperateLogHubRequestLogHubStores>>(expect1);
      }
    }
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("UseLorne") != m.end() && !m["UseLorne"].empty()) {
      useLorne = make_shared<bool>(boost::any_cast<bool>(m["UseLorne"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~OperateLogHubRequest() = default;
};
class OperateLogHubResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OperateLogHubResponseBody() {}

  explicit OperateLogHubResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OperateLogHubResponseBody() = default;
};
class OperateLogHubResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OperateLogHubResponseBody> body{};

  OperateLogHubResponse() {}

  explicit OperateLogHubResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateLogHubResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateLogHubResponseBody>(model1);
      }
    }
  }


  virtual ~OperateLogHubResponse() = default;
};
class OperateLorneTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> lorneStatus{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskId{};

  OperateLorneTaskStatusRequest() {}

  explicit OperateLorneTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (lorneStatus) {
      res["LorneStatus"] = boost::any(*lorneStatus);
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("LorneStatus") != m.end() && !m["LorneStatus"].empty()) {
      lorneStatus = make_shared<string>(boost::any_cast<string>(m["LorneStatus"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~OperateLorneTaskStatusRequest() = default;
};
class OperateLorneTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OperateLorneTaskStatusResponseBody() {}

  explicit OperateLorneTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OperateLorneTaskStatusResponseBody() = default;
};
class OperateLorneTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OperateLorneTaskStatusResponseBody> body{};

  OperateLorneTaskStatusResponse() {}

  explicit OperateLorneTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateLorneTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateLorneTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~OperateLorneTaskStatusResponse() = default;
};
class ReleaseClusterPublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ReleaseClusterPublicConnectionRequest() {}

  explicit ReleaseClusterPublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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


  virtual ~ReleaseClusterPublicConnectionRequest() = default;
};
class ReleaseClusterPublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseClusterPublicConnectionResponseBody() {}

  explicit ReleaseClusterPublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseClusterPublicConnectionResponseBody() = default;
};
class ReleaseClusterPublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReleaseClusterPublicConnectionResponseBody> body{};

  ReleaseClusterPublicConnectionResponse() {}

  explicit ReleaseClusterPublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseClusterPublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseClusterPublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseClusterPublicConnectionResponse() = default;
};
class ResetAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ResetAccountPasswordRequest() {}

  explicit ResetAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  RestartInstanceRequest() {}

  explicit RestartInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
  }


  virtual ~RestartInstanceRequest() = default;
};
class RestartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class SearchRDSTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> rdsId{};
  shared_ptr<string> rdsPassword{};
  shared_ptr<long> rdsPort{};
  shared_ptr<string> rdsUserName{};
  shared_ptr<string> rdsVpcUrl{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tableName{};

  SearchRDSTablesRequest() {}

  explicit SearchRDSTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (rdsId) {
      res["RdsId"] = boost::any(*rdsId);
    }
    if (rdsPassword) {
      res["RdsPassword"] = boost::any(*rdsPassword);
    }
    if (rdsPort) {
      res["RdsPort"] = boost::any(*rdsPort);
    }
    if (rdsUserName) {
      res["RdsUserName"] = boost::any(*rdsUserName);
    }
    if (rdsVpcUrl) {
      res["RdsVpcUrl"] = boost::any(*rdsVpcUrl);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RdsId") != m.end() && !m["RdsId"].empty()) {
      rdsId = make_shared<string>(boost::any_cast<string>(m["RdsId"]));
    }
    if (m.find("RdsPassword") != m.end() && !m["RdsPassword"].empty()) {
      rdsPassword = make_shared<string>(boost::any_cast<string>(m["RdsPassword"]));
    }
    if (m.find("RdsPort") != m.end() && !m["RdsPort"].empty()) {
      rdsPort = make_shared<long>(boost::any_cast<long>(m["RdsPort"]));
    }
    if (m.find("RdsUserName") != m.end() && !m["RdsUserName"].empty()) {
      rdsUserName = make_shared<string>(boost::any_cast<string>(m["RdsUserName"]));
    }
    if (m.find("RdsVpcUrl") != m.end() && !m["RdsVpcUrl"].empty()) {
      rdsVpcUrl = make_shared<string>(boost::any_cast<string>(m["RdsVpcUrl"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~SearchRDSTablesRequest() = default;
};
class SearchRDSTablesResponseBodySchemas : public Darabonba::Model {
public:
  shared_ptr<string> dbName{};
  shared_ptr<vector<string>> tables{};

  SearchRDSTablesResponseBodySchemas() {}

  explicit SearchRDSTablesResponseBodySchemas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (tables) {
      res["Tables"] = boost::any(*tables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tables"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tables = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchRDSTablesResponseBodySchemas() = default;
};
class SearchRDSTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<SearchRDSTablesResponseBodySchemas>> schemas{};

  SearchRDSTablesResponseBody() {}

  explicit SearchRDSTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (schemas) {
      vector<boost::any> temp1;
      for(auto item1:*schemas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schemas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Schemas") != m.end() && !m["Schemas"].empty()) {
      if (typeid(vector<boost::any>) == m["Schemas"].type()) {
        vector<SearchRDSTablesResponseBodySchemas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schemas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchRDSTablesResponseBodySchemas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schemas = make_shared<vector<SearchRDSTablesResponseBodySchemas>>(expect1);
      }
    }
  }


  virtual ~SearchRDSTablesResponseBody() = default;
};
class SearchRDSTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchRDSTablesResponseBody> body{};

  SearchRDSTablesResponse() {}

  explicit SearchRDSTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchRDSTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchRDSTablesResponseBody>(model1);
      }
    }
  }


  virtual ~SearchRDSTablesResponse() = default;
};
class TransferVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sourceAccount{};
  shared_ptr<string> sourcePassword{};
  shared_ptr<string> targetAccount{};
  shared_ptr<string> targetDbClusterId{};
  shared_ptr<string> targetPassword{};

  TransferVersionRequest() {}

  explicit TransferVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (sourceAccount) {
      res["SourceAccount"] = boost::any(*sourceAccount);
    }
    if (sourcePassword) {
      res["SourcePassword"] = boost::any(*sourcePassword);
    }
    if (targetAccount) {
      res["TargetAccount"] = boost::any(*targetAccount);
    }
    if (targetDbClusterId) {
      res["TargetDbClusterId"] = boost::any(*targetDbClusterId);
    }
    if (targetPassword) {
      res["TargetPassword"] = boost::any(*targetPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("SourceAccount") != m.end() && !m["SourceAccount"].empty()) {
      sourceAccount = make_shared<string>(boost::any_cast<string>(m["SourceAccount"]));
    }
    if (m.find("SourcePassword") != m.end() && !m["SourcePassword"].empty()) {
      sourcePassword = make_shared<string>(boost::any_cast<string>(m["SourcePassword"]));
    }
    if (m.find("TargetAccount") != m.end() && !m["TargetAccount"].empty()) {
      targetAccount = make_shared<string>(boost::any_cast<string>(m["TargetAccount"]));
    }
    if (m.find("TargetDbClusterId") != m.end() && !m["TargetDbClusterId"].empty()) {
      targetDbClusterId = make_shared<string>(boost::any_cast<string>(m["TargetDbClusterId"]));
    }
    if (m.find("TargetPassword") != m.end() && !m["TargetPassword"].empty()) {
      targetPassword = make_shared<string>(boost::any_cast<string>(m["TargetPassword"]));
    }
  }


  virtual ~TransferVersionRequest() = default;
};
class TransferVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> DBInstanceID{};
  shared_ptr<long> DBInstanceName{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> taskId{};

  TransferVersionResponseBody() {}

  explicit TransferVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceID) {
      res["DBInstanceID"] = boost::any(*DBInstanceID);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
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
    if (m.find("DBInstanceID") != m.end() && !m["DBInstanceID"].empty()) {
      DBInstanceID = make_shared<long>(boost::any_cast<long>(m["DBInstanceID"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<long>(boost::any_cast<long>(m["DBInstanceName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<bool>(boost::any_cast<bool>(m["TaskId"]));
    }
  }


  virtual ~TransferVersionResponseBody() = default;
};
class TransferVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TransferVersionResponseBody> body{};

  TransferVersionResponse() {}

  explicit TransferVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TransferVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferVersionResponseBody>(model1);
      }
    }
  }


  virtual ~TransferVersionResponse() = default;
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
  AllocateClusterPublicConnectionResponse allocateClusterPublicConnectionWithOptions(shared_ptr<AllocateClusterPublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateClusterPublicConnectionResponse allocateClusterPublicConnection(shared_ptr<AllocateClusterPublicConnectionRequest> request);
  CheckClickhouseToRDSResponse checkClickhouseToRDSWithOptions(shared_ptr<CheckClickhouseToRDSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckClickhouseToRDSResponse checkClickhouseToRDS(shared_ptr<CheckClickhouseToRDSRequest> request);
  CheckHealthResponse checkHealthWithOptions(shared_ptr<CheckHealthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckHealthResponse checkHealth(shared_ptr<CheckHealthRequest> request);
  CheckMonitorAlertResponse checkMonitorAlertWithOptions(shared_ptr<CheckMonitorAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckMonitorAlertResponse checkMonitorAlert(shared_ptr<CheckMonitorAlertRequest> request);
  CheckScaleOutBalancedResponse checkScaleOutBalancedWithOptions(shared_ptr<CheckScaleOutBalancedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckScaleOutBalancedResponse checkScaleOutBalanced(shared_ptr<CheckScaleOutBalancedRequest> request);
  CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(shared_ptr<CheckServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckServiceLinkedRoleResponse checkServiceLinkedRole(shared_ptr<CheckServiceLinkedRoleRequest> request);
  CheckVersionTransferResponse checkVersionTransferWithOptions(shared_ptr<CheckVersionTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckVersionTransferResponse checkVersionTransfer(shared_ptr<CheckVersionTransferRequest> request);
  CreateAccountResponse createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountResponse createAccount(shared_ptr<CreateAccountRequest> request);
  CreateAccountAndAuthorityResponse createAccountAndAuthorityWithOptions(shared_ptr<CreateAccountAndAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountAndAuthorityResponse createAccountAndAuthority(shared_ptr<CreateAccountAndAuthorityRequest> request);
  CreateBackupPolicyResponse createBackupPolicyWithOptions(shared_ptr<CreateBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBackupPolicyResponse createBackupPolicy(shared_ptr<CreateBackupPolicyRequest> request);
  CreateDBInstanceResponse createDBInstanceWithOptions(shared_ptr<CreateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBInstanceResponse createDBInstance(shared_ptr<CreateDBInstanceRequest> request);
  CreateMonitorDataReportResponse createMonitorDataReportWithOptions(shared_ptr<CreateMonitorDataReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMonitorDataReportResponse createMonitorDataReport(shared_ptr<CreateMonitorDataReportRequest> request);
  CreateOSSStorageResponse createOSSStorageWithOptions(shared_ptr<CreateOSSStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOSSStorageResponse createOSSStorage(shared_ptr<CreateOSSStorageRequest> request);
  CreatePortsForClickHouseResponse createPortsForClickHouseWithOptions(shared_ptr<CreatePortsForClickHouseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePortsForClickHouseResponse createPortsForClickHouse(shared_ptr<CreatePortsForClickHouseRequest> request);
  CreateRDSToClickhouseDbResponse createRDSToClickhouseDbWithOptions(shared_ptr<CreateRDSToClickhouseDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRDSToClickhouseDbResponse createRDSToClickhouseDb(shared_ptr<CreateRDSToClickhouseDbRequest> request);
  CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceLinkedRoleResponse createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteDBClusterResponse deleteDBClusterWithOptions(shared_ptr<DeleteDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBClusterResponse deleteDBCluster(shared_ptr<DeleteDBClusterRequest> request);
  DeleteLorneTaskResponse deleteLorneTaskWithOptions(shared_ptr<DeleteLorneTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLorneTaskResponse deleteLorneTask(shared_ptr<DeleteLorneTaskRequest> request);
  DeleteSyndbResponse deleteSyndbWithOptions(shared_ptr<DeleteSyndbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSyndbResponse deleteSyndb(shared_ptr<DeleteSyndbRequest> request);
  DescribeAccountAuthorityResponse describeAccountAuthorityWithOptions(shared_ptr<DescribeAccountAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountAuthorityResponse describeAccountAuthority(shared_ptr<DescribeAccountAuthorityRequest> request);
  DescribeAccountsResponse describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountsResponse describeAccounts(shared_ptr<DescribeAccountsRequest> request);
  DescribeAllDataSourceResponse describeAllDataSourceWithOptions(shared_ptr<DescribeAllDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAllDataSourceResponse describeAllDataSource(shared_ptr<DescribeAllDataSourceRequest> request);
  DescribeAllDataSourcesResponse describeAllDataSourcesWithOptions(shared_ptr<DescribeAllDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAllDataSourcesResponse describeAllDataSources(shared_ptr<DescribeAllDataSourcesRequest> request);
  DescribeAvailableResourceResponse describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableResourceResponse describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeBackupsResponse describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupsResponse describeBackups(shared_ptr<DescribeBackupsRequest> request);
  DescribeColumnsResponse describeColumnsWithOptions(shared_ptr<DescribeColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeColumnsResponse describeColumns(shared_ptr<DescribeColumnsRequest> request);
  DescribeDBClusterAccessWhiteListResponse describeDBClusterAccessWhiteListWithOptions(shared_ptr<DescribeDBClusterAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterAccessWhiteListResponse describeDBClusterAccessWhiteList(shared_ptr<DescribeDBClusterAccessWhiteListRequest> request);
  DescribeDBClusterAttributeResponse describeDBClusterAttributeWithOptions(shared_ptr<DescribeDBClusterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterAttributeResponse describeDBClusterAttribute(shared_ptr<DescribeDBClusterAttributeRequest> request);
  DescribeDBClusterConfigResponse describeDBClusterConfigWithOptions(shared_ptr<DescribeDBClusterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterConfigResponse describeDBClusterConfig(shared_ptr<DescribeDBClusterConfigRequest> request);
  DescribeDBClusterNetInfoItemsResponse describeDBClusterNetInfoItemsWithOptions(shared_ptr<DescribeDBClusterNetInfoItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterNetInfoItemsResponse describeDBClusterNetInfoItems(shared_ptr<DescribeDBClusterNetInfoItemsRequest> request);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(shared_ptr<DescribeDBClusterPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformance(shared_ptr<DescribeDBClusterPerformanceRequest> request);
  DescribeDBClustersResponse describeDBClustersWithOptions(shared_ptr<DescribeDBClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClustersResponse describeDBClusters(shared_ptr<DescribeDBClustersRequest> request);
  DescribeDBConfigResponse describeDBConfigWithOptions(shared_ptr<DescribeDBConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBConfigResponse describeDBConfig(shared_ptr<DescribeDBConfigRequest> request);
  DescribeLogHubAttributeResponse describeLogHubAttributeWithOptions(shared_ptr<DescribeLogHubAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogHubAttributeResponse describeLogHubAttribute(shared_ptr<DescribeLogHubAttributeRequest> request);
  DescribeLogStoreKeysResponse describeLogStoreKeysWithOptions(shared_ptr<DescribeLogStoreKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogStoreKeysResponse describeLogStoreKeys(shared_ptr<DescribeLogStoreKeysRequest> request);
  DescribeLoghubDetailResponse describeLoghubDetailWithOptions(shared_ptr<DescribeLoghubDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLoghubDetailResponse describeLoghubDetail(shared_ptr<DescribeLoghubDetailRequest> request);
  DescribeLorneLogResponse describeLorneLogWithOptions(shared_ptr<DescribeLorneLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLorneLogResponse describeLorneLog(shared_ptr<DescribeLorneLogRequest> request);
  DescribeLorneTasksResponse describeLorneTasksWithOptions(shared_ptr<DescribeLorneTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLorneTasksResponse describeLorneTasks(shared_ptr<DescribeLorneTasksRequest> request);
  DescribeLorneTasksMCountResponse describeLorneTasksMCountWithOptions(shared_ptr<DescribeLorneTasksMCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLorneTasksMCountResponse describeLorneTasksMCount(shared_ptr<DescribeLorneTasksMCountRequest> request);
  DescribeLorneTasksMetricsResponse describeLorneTasksMetricsWithOptions(shared_ptr<DescribeLorneTasksMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLorneTasksMetricsResponse describeLorneTasksMetrics(shared_ptr<DescribeLorneTasksMetricsRequest> request);
  DescribeOSSStorageResponse describeOSSStorageWithOptions(shared_ptr<DescribeOSSStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOSSStorageResponse describeOSSStorage(shared_ptr<DescribeOSSStorageRequest> request);
  DescribeProcessListResponse describeProcessListWithOptions(shared_ptr<DescribeProcessListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProcessListResponse describeProcessList(shared_ptr<DescribeProcessListRequest> request);
  DescribeRDSTablesResponse describeRDSTablesWithOptions(shared_ptr<DescribeRDSTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRDSTablesResponse describeRDSTables(shared_ptr<DescribeRDSTablesRequest> request);
  DescribeRDSVpcResponse describeRDSVpcWithOptions(shared_ptr<DescribeRDSVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRDSVpcResponse describeRDSVpc(shared_ptr<DescribeRDSVpcRequest> request);
  DescribeRDSschemasResponse describeRDSschemasWithOptions(shared_ptr<DescribeRDSschemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRDSschemasResponse describeRDSschemas(shared_ptr<DescribeRDSschemasRequest> request);
  DescribeRdsVSwitchsResponse describeRdsVSwitchsWithOptions(shared_ptr<DescribeRdsVSwitchsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdsVSwitchsResponse describeRdsVSwitchs(shared_ptr<DescribeRdsVSwitchsRequest> request);
  DescribeRdsVpcsResponse describeRdsVpcsWithOptions(shared_ptr<DescribeRdsVpcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdsVpcsResponse describeRdsVpcs(shared_ptr<DescribeRdsVpcsRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSchemasResponse describeSchemasWithOptions(shared_ptr<DescribeSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSchemasResponse describeSchemas(shared_ptr<DescribeSchemasRequest> request);
  DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowLogRecordsResponse describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request);
  DescribeSlowLogTrendResponse describeSlowLogTrendWithOptions(shared_ptr<DescribeSlowLogTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowLogTrendResponse describeSlowLogTrend(shared_ptr<DescribeSlowLogTrendRequest> request);
  DescribeSynDbTablesResponse describeSynDbTablesWithOptions(shared_ptr<DescribeSynDbTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSynDbTablesResponse describeSynDbTables(shared_ptr<DescribeSynDbTablesRequest> request);
  DescribeSynDbsResponse describeSynDbsWithOptions(shared_ptr<DescribeSynDbsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSynDbsResponse describeSynDbs(shared_ptr<DescribeSynDbsRequest> request);
  DescribeTablesResponse describeTablesWithOptions(shared_ptr<DescribeTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTablesResponse describeTables(shared_ptr<DescribeTablesRequest> request);
  DescribeTransferHistoryResponse describeTransferHistoryWithOptions(shared_ptr<DescribeTransferHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTransferHistoryResponse describeTransferHistory(shared_ptr<DescribeTransferHistoryRequest> request);
  KillProcessResponse killProcessWithOptions(shared_ptr<KillProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KillProcessResponse killProcess(shared_ptr<KillProcessRequest> request);
  ModifyAccountAuthorityResponse modifyAccountAuthorityWithOptions(shared_ptr<ModifyAccountAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountAuthorityResponse modifyAccountAuthority(shared_ptr<ModifyAccountAuthorityRequest> request);
  ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountDescriptionResponse modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request);
  ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupPolicyResponse modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request);
  ModifyClickHouseClusterServerGRPCResponse modifyClickHouseClusterServerGRPCWithOptions(shared_ptr<ModifyClickHouseClusterServerGRPCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClickHouseClusterServerGRPCResponse modifyClickHouseClusterServerGRPC(shared_ptr<ModifyClickHouseClusterServerGRPCRequest> request);
  ModifyDBClusterResponse modifyDBClusterWithOptions(shared_ptr<ModifyDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterResponse modifyDBCluster(shared_ptr<ModifyDBClusterRequest> request);
  ModifyDBClusterAccessWhiteListResponse modifyDBClusterAccessWhiteListWithOptions(shared_ptr<ModifyDBClusterAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterAccessWhiteListResponse modifyDBClusterAccessWhiteList(shared_ptr<ModifyDBClusterAccessWhiteListRequest> request);
  ModifyDBClusterConfigResponse modifyDBClusterConfigWithOptions(shared_ptr<ModifyDBClusterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterConfigResponse modifyDBClusterConfig(shared_ptr<ModifyDBClusterConfigRequest> request);
  ModifyDBClusterDescriptionResponse modifyDBClusterDescriptionWithOptions(shared_ptr<ModifyDBClusterDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterDescriptionResponse modifyDBClusterDescription(shared_ptr<ModifyDBClusterDescriptionRequest> request);
  ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTimeWithOptions(shared_ptr<ModifyDBClusterMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTime(shared_ptr<ModifyDBClusterMaintainTimeRequest> request);
  ModifyDBConfigResponse modifyDBConfigWithOptions(shared_ptr<ModifyDBConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBConfigResponse modifyDBConfig(shared_ptr<ModifyDBConfigRequest> request);
  ModifyRDSToClickhouseDbResponse modifyRDSToClickhouseDbWithOptions(shared_ptr<ModifyRDSToClickhouseDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRDSToClickhouseDbResponse modifyRDSToClickhouseDb(shared_ptr<ModifyRDSToClickhouseDbRequest> request);
  OperateLogHubResponse operateLogHubWithOptions(shared_ptr<OperateLogHubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateLogHubResponse operateLogHub(shared_ptr<OperateLogHubRequest> request);
  OperateLorneTaskStatusResponse operateLorneTaskStatusWithOptions(shared_ptr<OperateLorneTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateLorneTaskStatusResponse operateLorneTaskStatus(shared_ptr<OperateLorneTaskStatusRequest> request);
  ReleaseClusterPublicConnectionResponse releaseClusterPublicConnectionWithOptions(shared_ptr<ReleaseClusterPublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseClusterPublicConnectionResponse releaseClusterPublicConnection(shared_ptr<ReleaseClusterPublicConnectionRequest> request);
  ResetAccountPasswordResponse resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAccountPasswordResponse resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request);
  RestartInstanceResponse restartInstanceWithOptions(shared_ptr<RestartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartInstanceResponse restartInstance(shared_ptr<RestartInstanceRequest> request);
  SearchRDSTablesResponse searchRDSTablesWithOptions(shared_ptr<SearchRDSTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchRDSTablesResponse searchRDSTables(shared_ptr<SearchRDSTablesRequest> request);
  TransferVersionResponse transferVersionWithOptions(shared_ptr<TransferVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferVersionResponse transferVersion(shared_ptr<TransferVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Clickhouse20191111

#endif
