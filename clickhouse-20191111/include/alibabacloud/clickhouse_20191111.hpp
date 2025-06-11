// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLICKHOUSE20191111_H_
#define ALIBABACLOUD_CLICKHOUSE20191111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
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
  shared_ptr<long> statusCode{};
  shared_ptr<AllocateClusterPublicConnectionResponseBody> body{};

  AllocateClusterPublicConnectionResponse() {}

  explicit AllocateClusterPublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<CheckClickhouseToRDSResponseBody> body{};

  CheckClickhouseToRDSResponse() {}

  explicit CheckClickhouseToRDSResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckClickhouseToRDSResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckClickhouseToRDSResponseBody>(model1);
      }
    }
  }


  virtual ~CheckClickhouseToRDSResponse() = default;
};
class CheckModifyConfigNeedRestartRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> DBClusterId{};

  CheckModifyConfigNeedRestartRequest() {}

  explicit CheckModifyConfigNeedRestartRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~CheckModifyConfigNeedRestartRequest() = default;
};
class CheckModifyConfigNeedRestartResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> needRestart{};
  shared_ptr<string> requestId{};

  CheckModifyConfigNeedRestartResponseBody() {}

  explicit CheckModifyConfigNeedRestartResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needRestart) {
      res["NeedRestart"] = boost::any(*needRestart);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedRestart") != m.end() && !m["NeedRestart"].empty()) {
      needRestart = make_shared<bool>(boost::any_cast<bool>(m["NeedRestart"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckModifyConfigNeedRestartResponseBody() = default;
};
class CheckModifyConfigNeedRestartResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckModifyConfigNeedRestartResponseBody> body{};

  CheckModifyConfigNeedRestartResponse() {}

  explicit CheckModifyConfigNeedRestartResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckModifyConfigNeedRestartResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckModifyConfigNeedRestartResponseBody>(model1);
      }
    }
  }


  virtual ~CheckModifyConfigNeedRestartResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<CheckMonitorAlertResponseBody> body{};

  CheckMonitorAlertResponse() {}

  explicit CheckMonitorAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<CheckScaleOutBalancedResponseBody> body{};

  CheckScaleOutBalancedResponse() {}

  explicit CheckScaleOutBalancedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<CheckServiceLinkedRoleResponseBody> body{};

  CheckServiceLinkedRoleResponse() {}

  explicit CheckServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CheckServiceLinkedRoleResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccountResponseBody> body{};

  CreateAccountResponse() {}

  explicit CreateAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccountAndAuthorityResponseBody> body{};

  CreateAccountAndAuthorityResponse() {}

  explicit CreateAccountAndAuthorityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> regionId{};
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBackupPolicyResponseBody> body{};

  CreateBackupPolicyResponse() {}

  explicit CreateBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> backupSetID{};
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
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sourceDBClusterId{};
  shared_ptr<string> usedTime{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchBak{};
  shared_ptr<string> vSwitchBak2{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zondIdBak2{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneIdBak{};

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
    if (backupSetID) {
      res["BackupSetID"] = boost::any(*backupSetID);
    }
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sourceDBClusterId) {
      res["SourceDBClusterId"] = boost::any(*sourceDBClusterId);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchBak) {
      res["VSwitchBak"] = boost::any(*vSwitchBak);
    }
    if (vSwitchBak2) {
      res["VSwitchBak2"] = boost::any(*vSwitchBak2);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zondIdBak2) {
      res["ZondIdBak2"] = boost::any(*zondIdBak2);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneIdBak) {
      res["ZoneIdBak"] = boost::any(*zoneIdBak);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BackupSetID") != m.end() && !m["BackupSetID"].empty()) {
      backupSetID = make_shared<string>(boost::any_cast<string>(m["BackupSetID"]));
    }
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SourceDBClusterId") != m.end() && !m["SourceDBClusterId"].empty()) {
      sourceDBClusterId = make_shared<string>(boost::any_cast<string>(m["SourceDBClusterId"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<string>(boost::any_cast<string>(m["UsedTime"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchBak") != m.end() && !m["VSwitchBak"].empty()) {
      vSwitchBak = make_shared<string>(boost::any_cast<string>(m["VSwitchBak"]));
    }
    if (m.find("VSwitchBak2") != m.end() && !m["VSwitchBak2"].empty()) {
      vSwitchBak2 = make_shared<string>(boost::any_cast<string>(m["VSwitchBak2"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZondIdBak2") != m.end() && !m["ZondIdBak2"].empty()) {
      zondIdBak2 = make_shared<string>(boost::any_cast<string>(m["ZondIdBak2"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneIdBak") != m.end() && !m["ZoneIdBak"].empty()) {
      zoneIdBak = make_shared<string>(boost::any_cast<string>(m["ZoneIdBak"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDBInstanceResponseBody> body{};

  CreateDBInstanceResponse() {}

  explicit CreateDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMonitorDataReportResponseBody> body{};

  CreateMonitorDataReportResponse() {}

  explicit CreateMonitorDataReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateOSSStorageResponseBody> body{};

  CreateOSSStorageResponse() {}

  explicit CreateOSSStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePortsForClickHouseResponseBody> body{};

  CreatePortsForClickHouseResponse() {}

  explicit CreatePortsForClickHouseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRDSToClickhouseDbResponseBody> body{};

  CreateRDSToClickhouseDbResponse() {}

  explicit CreateRDSToClickhouseDbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRDSToClickhouseDbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRDSToClickhouseDbResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRDSToClickhouseDbResponse() = default;
};
class CreateSQLAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> accountType{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateSQLAccountRequest() {}

  explicit CreateSQLAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
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
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
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


  virtual ~CreateSQLAccountRequest() = default;
};
class CreateSQLAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateSQLAccountResponseBody() {}

  explicit CreateSQLAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateSQLAccountResponseBody() = default;
};
class CreateSQLAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSQLAccountResponseBody> body{};

  CreateSQLAccountResponse() {}

  explicit CreateSQLAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSQLAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSQLAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSQLAccountResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceLinkedRoleResponseBody> body{};

  CreateServiceLinkedRoleResponse() {}

  explicit CreateServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccountResponseBody> body{};

  DeleteAccountResponse() {}

  explicit DeleteAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDBClusterResponseBody> body{};

  DeleteDBClusterResponse() {}

  explicit DeleteDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBClusterResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSyndbResponseBody> body{};

  DeleteSyndbResponse() {}

  explicit DeleteSyndbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountAuthorityResponseBody> body{};

  DescribeAccountAuthorityResponse() {}

  explicit DescribeAccountAuthorityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> configType{};

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
    if (configType) {
      res["ConfigType"] = boost::any(*configType);
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
    if (m.find("ConfigType") != m.end() && !m["ConfigType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["ConfigType"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountsResponseBody> body{};

  DescribeAccountsResponse() {}

  explicit DescribeAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAllDataSourceResponseBody> body{};

  DescribeAllDataSourceResponse() {}

  explicit DescribeAllDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAllDataSourcesResponseBody> body{};

  DescribeAllDataSourcesResponse() {}

  explicit DescribeAllDataSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAllDataSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAllDataSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAllDataSourcesResponse() = default;
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
  shared_ptr<string> backupSize{};
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
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
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
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<string>(boost::any_cast<string>(m["BackupSize"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupPolicyResponseBody> body{};

  DescribeBackupPolicyResponse() {}

  explicit DescribeBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> expireDate{};

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
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
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
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupsResponseBody> body{};

  DescribeBackupsResponse() {}

  explicit DescribeBackupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeColumnsResponseBody> body{};

  DescribeColumnsResponse() {}

  explicit DescribeColumnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeColumnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeColumnsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeColumnsResponse() = default;
};
class DescribeConfigHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  DescribeConfigHistoryRequest() {}

  explicit DescribeConfigHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeConfigHistoryRequest() = default;
};
class DescribeConfigHistoryResponseBodyConfigHistoryItems : public Darabonba::Model {
public:
  shared_ptr<string> changeId{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> reason{};
  shared_ptr<bool> success{};
  shared_ptr<string> time{};

  DescribeConfigHistoryResponseBodyConfigHistoryItems() {}

  explicit DescribeConfigHistoryResponseBodyConfigHistoryItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~DescribeConfigHistoryResponseBodyConfigHistoryItems() = default;
};
class DescribeConfigHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeConfigHistoryResponseBodyConfigHistoryItems>> configHistoryItems{};
  shared_ptr<string> requestId{};

  DescribeConfigHistoryResponseBody() {}

  explicit DescribeConfigHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configHistoryItems) {
      vector<boost::any> temp1;
      for(auto item1:*configHistoryItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigHistoryItems"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigHistoryItems") != m.end() && !m["ConfigHistoryItems"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigHistoryItems"].type()) {
        vector<DescribeConfigHistoryResponseBodyConfigHistoryItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigHistoryItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigHistoryResponseBodyConfigHistoryItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configHistoryItems = make_shared<vector<DescribeConfigHistoryResponseBodyConfigHistoryItems>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeConfigHistoryResponseBody() = default;
};
class DescribeConfigHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeConfigHistoryResponseBody> body{};

  DescribeConfigHistoryResponse() {}

  explicit DescribeConfigHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConfigHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConfigHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConfigHistoryResponse() = default;
};
class DescribeConfigVersionDifferenceRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeId{};
  shared_ptr<string> DBClusterId{};

  DescribeConfigVersionDifferenceRequest() {}

  explicit DescribeConfigVersionDifferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeId) {
      res["ChangeId"] = boost::any(*changeId);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeId") != m.end() && !m["ChangeId"].empty()) {
      changeId = make_shared<string>(boost::any_cast<string>(m["ChangeId"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeConfigVersionDifferenceRequest() = default;
};
class DescribeConfigVersionDifferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> newConfigXML{};
  shared_ptr<string> oldConfigXML{};
  shared_ptr<string> requestId{};

  DescribeConfigVersionDifferenceResponseBody() {}

  explicit DescribeConfigVersionDifferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newConfigXML) {
      res["NewConfigXML"] = boost::any(*newConfigXML);
    }
    if (oldConfigXML) {
      res["OldConfigXML"] = boost::any(*oldConfigXML);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewConfigXML") != m.end() && !m["NewConfigXML"].empty()) {
      newConfigXML = make_shared<string>(boost::any_cast<string>(m["NewConfigXML"]));
    }
    if (m.find("OldConfigXML") != m.end() && !m["OldConfigXML"].empty()) {
      oldConfigXML = make_shared<string>(boost::any_cast<string>(m["OldConfigXML"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeConfigVersionDifferenceResponseBody() = default;
};
class DescribeConfigVersionDifferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeConfigVersionDifferenceResponseBody> body{};

  DescribeConfigVersionDifferenceResponse() {}

  explicit DescribeConfigVersionDifferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConfigVersionDifferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConfigVersionDifferenceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConfigVersionDifferenceResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterAccessWhiteListResponseBody> body{};

  DescribeDBClusterAccessWhiteListResponse() {}

  explicit DescribeDBClusterAccessWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<bool> appointmentElectZookeeperDisableWrite{};
  shared_ptr<string> appointmentElectZookeeperTime{};
  shared_ptr<string> appointmentRestartNodeList{};
  shared_ptr<string> appointmentRestartNodeTime{};
  shared_ptr<string> appointmentRestartTime{};
  shared_ptr<map<string, boost::any>> availableUpgradeMajorVersion{};
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
  shared_ptr<string> engineLatestMinorVersion{};
  shared_ptr<string> engineMinorVersion{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> extStorageSize{};
  shared_ptr<string> extStorageType{};
  shared_ptr<string> isExpired{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<bool> maintainAutoType{};
  shared_ptr<string> maintainTime{};
  shared_ptr<string> payType{};
  shared_ptr<long> port{};
  shared_ptr<string> publicConnectionString{};
  shared_ptr<string> publicIpAddr{};
  shared_ptr<string> publicPort{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<DescribeDBClusterAttributeResponseBodyDBClusterScaleOutStatus> scaleOutStatus{};
  shared_ptr<string> storageType{};
  shared_ptr<long> supportBackup{};
  shared_ptr<bool> supportHttpsPort{};
  shared_ptr<bool> supportMysqlPort{};
  shared_ptr<long> supportOss{};
  shared_ptr<DescribeDBClusterAttributeResponseBodyDBClusterTags> tags{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcCloudInstanceId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcIpAddr{};
  shared_ptr<string> zoneId{};
  shared_ptr<map<string, boost::any>> zoneIdVswitchMap{};
  shared_ptr<string> zookeeperClass{};

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
    if (appointmentElectZookeeperDisableWrite) {
      res["AppointmentElectZookeeperDisableWrite"] = boost::any(*appointmentElectZookeeperDisableWrite);
    }
    if (appointmentElectZookeeperTime) {
      res["AppointmentElectZookeeperTime"] = boost::any(*appointmentElectZookeeperTime);
    }
    if (appointmentRestartNodeList) {
      res["AppointmentRestartNodeList"] = boost::any(*appointmentRestartNodeList);
    }
    if (appointmentRestartNodeTime) {
      res["AppointmentRestartNodeTime"] = boost::any(*appointmentRestartNodeTime);
    }
    if (appointmentRestartTime) {
      res["AppointmentRestartTime"] = boost::any(*appointmentRestartTime);
    }
    if (availableUpgradeMajorVersion) {
      res["AvailableUpgradeMajorVersion"] = boost::any(*availableUpgradeMajorVersion);
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
    if (engineLatestMinorVersion) {
      res["EngineLatestMinorVersion"] = boost::any(*engineLatestMinorVersion);
    }
    if (engineMinorVersion) {
      res["EngineMinorVersion"] = boost::any(*engineMinorVersion);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (extStorageSize) {
      res["ExtStorageSize"] = boost::any(*extStorageSize);
    }
    if (extStorageType) {
      res["ExtStorageType"] = boost::any(*extStorageType);
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
    if (maintainAutoType) {
      res["MaintainAutoType"] = boost::any(*maintainAutoType);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (supportOss) {
      res["SupportOss"] = boost::any(*supportOss);
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
    if (zoneIdVswitchMap) {
      res["ZoneIdVswitchMap"] = boost::any(*zoneIdVswitchMap);
    }
    if (zookeeperClass) {
      res["ZookeeperClass"] = boost::any(*zookeeperClass);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("AppointmentElectZookeeperDisableWrite") != m.end() && !m["AppointmentElectZookeeperDisableWrite"].empty()) {
      appointmentElectZookeeperDisableWrite = make_shared<bool>(boost::any_cast<bool>(m["AppointmentElectZookeeperDisableWrite"]));
    }
    if (m.find("AppointmentElectZookeeperTime") != m.end() && !m["AppointmentElectZookeeperTime"].empty()) {
      appointmentElectZookeeperTime = make_shared<string>(boost::any_cast<string>(m["AppointmentElectZookeeperTime"]));
    }
    if (m.find("AppointmentRestartNodeList") != m.end() && !m["AppointmentRestartNodeList"].empty()) {
      appointmentRestartNodeList = make_shared<string>(boost::any_cast<string>(m["AppointmentRestartNodeList"]));
    }
    if (m.find("AppointmentRestartNodeTime") != m.end() && !m["AppointmentRestartNodeTime"].empty()) {
      appointmentRestartNodeTime = make_shared<string>(boost::any_cast<string>(m["AppointmentRestartNodeTime"]));
    }
    if (m.find("AppointmentRestartTime") != m.end() && !m["AppointmentRestartTime"].empty()) {
      appointmentRestartTime = make_shared<string>(boost::any_cast<string>(m["AppointmentRestartTime"]));
    }
    if (m.find("AvailableUpgradeMajorVersion") != m.end() && !m["AvailableUpgradeMajorVersion"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AvailableUpgradeMajorVersion"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      availableUpgradeMajorVersion = make_shared<map<string, boost::any>>(toMap1);
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
    if (m.find("EngineLatestMinorVersion") != m.end() && !m["EngineLatestMinorVersion"].empty()) {
      engineLatestMinorVersion = make_shared<string>(boost::any_cast<string>(m["EngineLatestMinorVersion"]));
    }
    if (m.find("EngineMinorVersion") != m.end() && !m["EngineMinorVersion"].empty()) {
      engineMinorVersion = make_shared<string>(boost::any_cast<string>(m["EngineMinorVersion"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ExtStorageSize") != m.end() && !m["ExtStorageSize"].empty()) {
      extStorageSize = make_shared<long>(boost::any_cast<long>(m["ExtStorageSize"]));
    }
    if (m.find("ExtStorageType") != m.end() && !m["ExtStorageType"].empty()) {
      extStorageType = make_shared<string>(boost::any_cast<string>(m["ExtStorageType"]));
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
    if (m.find("MaintainAutoType") != m.end() && !m["MaintainAutoType"].empty()) {
      maintainAutoType = make_shared<bool>(boost::any_cast<bool>(m["MaintainAutoType"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
    if (m.find("SupportOss") != m.end() && !m["SupportOss"].empty()) {
      supportOss = make_shared<long>(boost::any_cast<long>(m["SupportOss"]));
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
    if (m.find("ZoneIdVswitchMap") != m.end() && !m["ZoneIdVswitchMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ZoneIdVswitchMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      zoneIdVswitchMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ZookeeperClass") != m.end() && !m["ZookeeperClass"].empty()) {
      zookeeperClass = make_shared<string>(boost::any_cast<string>(m["ZookeeperClass"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterAttributeResponseBody> body{};

  DescribeDBClusterAttributeResponse() {}

  explicit DescribeDBClusterAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterConfigResponseBody> body{};

  DescribeDBClusterConfigResponse() {}

  explicit DescribeDBClusterConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterConfigResponse() = default;
};
class DescribeDBClusterConfigInXMLRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  DescribeDBClusterConfigInXMLRequest() {}

  explicit DescribeDBClusterConfigInXMLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBClusterConfigInXMLRequest() = default;
};
class DescribeDBClusterConfigInXMLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> requestId{};

  DescribeDBClusterConfigInXMLResponseBody() {}

  explicit DescribeDBClusterConfigInXMLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBClusterConfigInXMLResponseBody() = default;
};
class DescribeDBClusterConfigInXMLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterConfigInXMLResponseBody> body{};

  DescribeDBClusterConfigInXMLResponse() {}

  explicit DescribeDBClusterConfigInXMLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterConfigInXMLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterConfigInXMLResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterConfigInXMLResponse() = default;
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
  shared_ptr<string> httpsPort{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> jdbcPort{};
  shared_ptr<string> mySQLPort{};
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
    if (httpsPort) {
      res["HttpsPort"] = boost::any(*httpsPort);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (jdbcPort) {
      res["JdbcPort"] = boost::any(*jdbcPort);
    }
    if (mySQLPort) {
      res["MySQLPort"] = boost::any(*mySQLPort);
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
    if (m.find("HttpsPort") != m.end() && !m["HttpsPort"].empty()) {
      httpsPort = make_shared<string>(boost::any_cast<string>(m["HttpsPort"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("JdbcPort") != m.end() && !m["JdbcPort"].empty()) {
      jdbcPort = make_shared<string>(boost::any_cast<string>(m["JdbcPort"]));
    }
    if (m.find("MySQLPort") != m.end() && !m["MySQLPort"].empty()) {
      mySQLPort = make_shared<string>(boost::any_cast<string>(m["MySQLPort"]));
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
  shared_ptr<bool> enableSLB{};
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
    if (enableSLB) {
      res["EnableSLB"] = boost::any(*enableSLB);
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
    if (m.find("EnableSLB") != m.end() && !m["EnableSLB"].empty()) {
      enableSLB = make_shared<bool>(boost::any_cast<bool>(m["EnableSLB"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterNetInfoItemsResponseBody> body{};

  DescribeDBClusterNetInfoItemsResponse() {}

  explicit DescribeDBClusterNetInfoItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterPerformanceResponseBody> body{};

  DescribeDBClusterPerformanceResponse() {}

  explicit DescribeDBClusterPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterIds{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
  shared_ptr<string> dbVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> extStorageSize{};
  shared_ptr<string> extStorageType{};
  shared_ptr<string> isExpired{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> payType{};
  shared_ptr<long> port{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scaleOutDisableWriteWindows{};
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
    if (dbVersion) {
      res["DbVersion"] = boost::any(*dbVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (extStorageSize) {
      res["ExtStorageSize"] = boost::any(*extStorageSize);
    }
    if (extStorageType) {
      res["ExtStorageType"] = boost::any(*extStorageType);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scaleOutDisableWriteWindows) {
      res["ScaleOutDisableWriteWindows"] = boost::any(*scaleOutDisableWriteWindows);
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
    if (m.find("DbVersion") != m.end() && !m["DbVersion"].empty()) {
      dbVersion = make_shared<string>(boost::any_cast<string>(m["DbVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ExtStorageSize") != m.end() && !m["ExtStorageSize"].empty()) {
      extStorageSize = make_shared<long>(boost::any_cast<long>(m["ExtStorageSize"]));
    }
    if (m.find("ExtStorageType") != m.end() && !m["ExtStorageType"].empty()) {
      extStorageType = make_shared<string>(boost::any_cast<string>(m["ExtStorageType"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ScaleOutDisableWriteWindows") != m.end() && !m["ScaleOutDisableWriteWindows"].empty()) {
      scaleOutDisableWriteWindows = make_shared<string>(boost::any_cast<string>(m["ScaleOutDisableWriteWindows"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClustersResponseBody> body{};

  DescribeDBClustersResponse() {}

  explicit DescribeDBClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBConfigResponseBody> body{};

  DescribeDBConfigResponse() {}

  explicit DescribeDBConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBConfigResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOSSStorageResponseBody> body{};

  DescribeOSSStorageResponse() {}

  explicit DescribeOSSStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeProcessListResponseBody> body{};

  DescribeProcessListResponse() {}

  explicit DescribeProcessListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProcessListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProcessListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProcessListResponse() = default;
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
class DescribeSchemasRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSchemasResponseBody> body{};

  DescribeSchemasResponse() {}

  explicit DescribeSchemasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlowLogRecordsResponseBody> body{};

  DescribeSlowLogRecordsResponse() {}

  explicit DescribeSlowLogRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlowLogRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlowLogRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSynDbTablesResponseBody> body{};

  DescribeSynDbTablesResponse() {}

  explicit DescribeSynDbTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
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
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
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


  virtual ~DescribeSynDbsRequest() = default;
};
class DescribeSynDbsResponseBodySynDbs : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> rdsId{};
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
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSynDbsResponseBodySynDbs>> synDbs{};
  shared_ptr<long> totalCount{};

  DescribeSynDbsResponseBody() {}

  explicit DescribeSynDbsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (synDbs) {
      vector<boost::any> temp1;
      for(auto item1:*synDbs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SynDbs"] = boost::any(temp1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSynDbsResponseBody() = default;
};
class DescribeSynDbsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSynDbsResponseBody> body{};

  DescribeSynDbsResponse() {}

  explicit DescribeSynDbsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTablesResponseBody> body{};

  DescribeTablesResponse() {}

  explicit DescribeTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> bytesPerMinute{};
  shared_ptr<string> disableWriteWindows{};
  shared_ptr<double> partsPerMinute{};
  shared_ptr<string> progress{};
  shared_ptr<string> sourceControlVersion{};
  shared_ptr<string> sourceDBCluster{};
  shared_ptr<string> status{};
  shared_ptr<string> subJob{};
  shared_ptr<string> subJobStatus{};
  shared_ptr<string> targetControlVersion{};
  shared_ptr<string> targetDBCluster{};
  shared_ptr<long> unsyncedBytes{};
  shared_ptr<long> unsyncedParts{};

  DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail() {}

  explicit DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bytesPerMinute) {
      res["BytesPerMinute"] = boost::any(*bytesPerMinute);
    }
    if (disableWriteWindows) {
      res["DisableWriteWindows"] = boost::any(*disableWriteWindows);
    }
    if (partsPerMinute) {
      res["PartsPerMinute"] = boost::any(*partsPerMinute);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (sourceControlVersion) {
      res["SourceControlVersion"] = boost::any(*sourceControlVersion);
    }
    if (sourceDBCluster) {
      res["SourceDBCluster"] = boost::any(*sourceDBCluster);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subJob) {
      res["SubJob"] = boost::any(*subJob);
    }
    if (subJobStatus) {
      res["SubJobStatus"] = boost::any(*subJobStatus);
    }
    if (targetControlVersion) {
      res["TargetControlVersion"] = boost::any(*targetControlVersion);
    }
    if (targetDBCluster) {
      res["TargetDBCluster"] = boost::any(*targetDBCluster);
    }
    if (unsyncedBytes) {
      res["UnsyncedBytes"] = boost::any(*unsyncedBytes);
    }
    if (unsyncedParts) {
      res["UnsyncedParts"] = boost::any(*unsyncedParts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BytesPerMinute") != m.end() && !m["BytesPerMinute"].empty()) {
      bytesPerMinute = make_shared<long>(boost::any_cast<long>(m["BytesPerMinute"]));
    }
    if (m.find("DisableWriteWindows") != m.end() && !m["DisableWriteWindows"].empty()) {
      disableWriteWindows = make_shared<string>(boost::any_cast<string>(m["DisableWriteWindows"]));
    }
    if (m.find("PartsPerMinute") != m.end() && !m["PartsPerMinute"].empty()) {
      partsPerMinute = make_shared<double>(boost::any_cast<double>(m["PartsPerMinute"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("SourceControlVersion") != m.end() && !m["SourceControlVersion"].empty()) {
      sourceControlVersion = make_shared<string>(boost::any_cast<string>(m["SourceControlVersion"]));
    }
    if (m.find("SourceDBCluster") != m.end() && !m["SourceDBCluster"].empty()) {
      sourceDBCluster = make_shared<string>(boost::any_cast<string>(m["SourceDBCluster"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubJob") != m.end() && !m["SubJob"].empty()) {
      subJob = make_shared<string>(boost::any_cast<string>(m["SubJob"]));
    }
    if (m.find("SubJobStatus") != m.end() && !m["SubJobStatus"].empty()) {
      subJobStatus = make_shared<string>(boost::any_cast<string>(m["SubJobStatus"]));
    }
    if (m.find("TargetControlVersion") != m.end() && !m["TargetControlVersion"].empty()) {
      targetControlVersion = make_shared<string>(boost::any_cast<string>(m["TargetControlVersion"]));
    }
    if (m.find("TargetDBCluster") != m.end() && !m["TargetDBCluster"].empty()) {
      targetDBCluster = make_shared<string>(boost::any_cast<string>(m["TargetDBCluster"]));
    }
    if (m.find("UnsyncedBytes") != m.end() && !m["UnsyncedBytes"].empty()) {
      unsyncedBytes = make_shared<long>(boost::any_cast<long>(m["UnsyncedBytes"]));
    }
    if (m.find("UnsyncedParts") != m.end() && !m["UnsyncedParts"].empty()) {
      unsyncedParts = make_shared<long>(boost::any_cast<long>(m["UnsyncedParts"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTransferHistoryResponseBody> body{};

  DescribeTransferHistoryResponse() {}

  explicit DescribeTransferHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<KillProcessResponseBody> body{};

  KillProcessResponse() {}

  explicit KillProcessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAccountAuthorityResponseBody> body{};

  ModifyAccountAuthorityResponse() {}

  explicit ModifyAccountAuthorityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAccountDescriptionResponseBody> body{};

  ModifyAccountDescriptionResponse() {}

  explicit ModifyAccountDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyBackupPolicyResponseBody> body{};

  ModifyBackupPolicyResponse() {}

  explicit ModifyBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupPolicyResponse() = default;
};
class ModifyDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterClass{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBNodeGroupCount{};
  shared_ptr<string> DBNodeStorage{};
  shared_ptr<string> dbNodeStorageType{};
  shared_ptr<string> disableWriteWindows{};
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
    if (dbNodeStorageType) {
      res["DbNodeStorageType"] = boost::any(*dbNodeStorageType);
    }
    if (disableWriteWindows) {
      res["DisableWriteWindows"] = boost::any(*disableWriteWindows);
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
    if (m.find("DbNodeStorageType") != m.end() && !m["DbNodeStorageType"].empty()) {
      dbNodeStorageType = make_shared<string>(boost::any_cast<string>(m["DbNodeStorageType"]));
    }
    if (m.find("DisableWriteWindows") != m.end() && !m["DisableWriteWindows"].empty()) {
      disableWriteWindows = make_shared<string>(boost::any_cast<string>(m["DisableWriteWindows"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBClusterResponseBody> body{};

  ModifyDBClusterResponse() {}

  explicit ModifyDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBClusterAccessWhiteListResponseBody> body{};

  ModifyDBClusterAccessWhiteListResponse() {}

  explicit ModifyDBClusterAccessWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> reason{};
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
    if (reason) {
      res["Reason"] = boost::any(*reason);
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
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBClusterConfigResponseBody> body{};

  ModifyDBClusterConfigResponse() {}

  explicit ModifyDBClusterConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBClusterConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterConfigResponse() = default;
};
class ModifyDBClusterConfigInXMLRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> reason{};
  shared_ptr<string> regionId{};

  ModifyDBClusterConfigInXMLRequest() {}

  explicit ModifyDBClusterConfigInXMLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyDBClusterConfigInXMLRequest() = default;
};
class ModifyDBClusterConfigInXMLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterConfigInXMLResponseBody() {}

  explicit ModifyDBClusterConfigInXMLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBClusterConfigInXMLResponseBody() = default;
};
class ModifyDBClusterConfigInXMLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBClusterConfigInXMLResponseBody> body{};

  ModifyDBClusterConfigInXMLResponse() {}

  explicit ModifyDBClusterConfigInXMLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBClusterConfigInXMLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterConfigInXMLResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterConfigInXMLResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBClusterDescriptionResponseBody> body{};

  ModifyDBClusterDescriptionResponse() {}

  explicit ModifyDBClusterDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBClusterMaintainTimeResponseBody> body{};

  ModifyDBClusterMaintainTimeResponse() {}

  explicit ModifyDBClusterMaintainTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBConfigResponseBody> body{};

  ModifyDBConfigResponse() {}

  explicit ModifyDBConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBConfigResponse() = default;
};
class ModifyMinorVersionGreadeTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> maintainAutoType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyMinorVersionGreadeTypeRequest() {}

  explicit ModifyMinorVersionGreadeTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (maintainAutoType) {
      res["MaintainAutoType"] = boost::any(*maintainAutoType);
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
    if (m.find("MaintainAutoType") != m.end() && !m["MaintainAutoType"].empty()) {
      maintainAutoType = make_shared<bool>(boost::any_cast<bool>(m["MaintainAutoType"]));
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


  virtual ~ModifyMinorVersionGreadeTypeRequest() = default;
};
class ModifyMinorVersionGreadeTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyMinorVersionGreadeTypeResponseBody() {}

  explicit ModifyMinorVersionGreadeTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyMinorVersionGreadeTypeResponseBody() = default;
};
class ModifyMinorVersionGreadeTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMinorVersionGreadeTypeResponseBody> body{};

  ModifyMinorVersionGreadeTypeResponse() {}

  explicit ModifyMinorVersionGreadeTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyMinorVersionGreadeTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMinorVersionGreadeTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMinorVersionGreadeTypeResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyRDSToClickhouseDbResponseBody> body{};

  ModifyRDSToClickhouseDbResponse() {}

  explicit ModifyRDSToClickhouseDbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyRDSToClickhouseDbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRDSToClickhouseDbResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRDSToClickhouseDbResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseClusterPublicConnectionResponseBody> body{};

  ReleaseClusterPublicConnectionResponse() {}

  explicit ReleaseClusterPublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ResetAccountPasswordResponseBody> body{};

  ResetAccountPasswordResponse() {}

  explicit ResetAccountPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> restartTime{};

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
    if (restartTime) {
      res["RestartTime"] = boost::any(*restartTime);
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
    if (m.find("RestartTime") != m.end() && !m["RestartTime"].empty()) {
      restartTime = make_shared<string>(boost::any_cast<string>(m["RestartTime"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<RestartInstanceResponseBody> body{};

  RestartInstanceResponse() {}

  explicit RestartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestartInstanceResponse() = default;
};
class TransferVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> disableWriteWindows{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sourceAccount{};
  shared_ptr<string> sourceClusterName{};
  shared_ptr<string> sourcePassword{};
  shared_ptr<string> sourceShards{};
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
    if (disableWriteWindows) {
      res["DisableWriteWindows"] = boost::any(*disableWriteWindows);
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
    if (sourceClusterName) {
      res["SourceClusterName"] = boost::any(*sourceClusterName);
    }
    if (sourcePassword) {
      res["SourcePassword"] = boost::any(*sourcePassword);
    }
    if (sourceShards) {
      res["SourceShards"] = boost::any(*sourceShards);
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
    if (m.find("DisableWriteWindows") != m.end() && !m["DisableWriteWindows"].empty()) {
      disableWriteWindows = make_shared<string>(boost::any_cast<string>(m["DisableWriteWindows"]));
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
    if (m.find("SourceClusterName") != m.end() && !m["SourceClusterName"].empty()) {
      sourceClusterName = make_shared<string>(boost::any_cast<string>(m["SourceClusterName"]));
    }
    if (m.find("SourcePassword") != m.end() && !m["SourcePassword"].empty()) {
      sourcePassword = make_shared<string>(boost::any_cast<string>(m["SourcePassword"]));
    }
    if (m.find("SourceShards") != m.end() && !m["SourceShards"].empty()) {
      sourceShards = make_shared<string>(boost::any_cast<string>(m["SourceShards"]));
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
  shared_ptr<string> requestId{};

  TransferVersionResponseBody() {}

  explicit TransferVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TransferVersionResponseBody() = default;
};
class TransferVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TransferVersionResponseBody> body{};

  TransferVersionResponse() {}

  explicit TransferVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TransferVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferVersionResponseBody>(model1);
      }
    }
  }


  virtual ~TransferVersionResponse() = default;
};
class UpgradeMinorVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<bool> upgradeImmediately{};
  shared_ptr<string> upgradeTime{};
  shared_ptr<string> upgradeVersion{};

  UpgradeMinorVersionRequest() {}

  explicit UpgradeMinorVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (upgradeImmediately) {
      res["UpgradeImmediately"] = boost::any(*upgradeImmediately);
    }
    if (upgradeTime) {
      res["UpgradeTime"] = boost::any(*upgradeTime);
    }
    if (upgradeVersion) {
      res["UpgradeVersion"] = boost::any(*upgradeVersion);
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
    if (m.find("UpgradeImmediately") != m.end() && !m["UpgradeImmediately"].empty()) {
      upgradeImmediately = make_shared<bool>(boost::any_cast<bool>(m["UpgradeImmediately"]));
    }
    if (m.find("UpgradeTime") != m.end() && !m["UpgradeTime"].empty()) {
      upgradeTime = make_shared<string>(boost::any_cast<string>(m["UpgradeTime"]));
    }
    if (m.find("UpgradeVersion") != m.end() && !m["UpgradeVersion"].empty()) {
      upgradeVersion = make_shared<string>(boost::any_cast<string>(m["UpgradeVersion"]));
    }
  }


  virtual ~UpgradeMinorVersionRequest() = default;
};
class UpgradeMinorVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeMinorVersionResponseBody() {}

  explicit UpgradeMinorVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeMinorVersionResponseBody() = default;
};
class UpgradeMinorVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeMinorVersionResponseBody> body{};

  UpgradeMinorVersionResponse() {}

  explicit UpgradeMinorVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeMinorVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeMinorVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeMinorVersionResponse() = default;
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
  CheckModifyConfigNeedRestartResponse checkModifyConfigNeedRestartWithOptions(shared_ptr<CheckModifyConfigNeedRestartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckModifyConfigNeedRestartResponse checkModifyConfigNeedRestart(shared_ptr<CheckModifyConfigNeedRestartRequest> request);
  CheckMonitorAlertResponse checkMonitorAlertWithOptions(shared_ptr<CheckMonitorAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckMonitorAlertResponse checkMonitorAlert(shared_ptr<CheckMonitorAlertRequest> request);
  CheckScaleOutBalancedResponse checkScaleOutBalancedWithOptions(shared_ptr<CheckScaleOutBalancedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckScaleOutBalancedResponse checkScaleOutBalanced(shared_ptr<CheckScaleOutBalancedRequest> request);
  CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(shared_ptr<CheckServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckServiceLinkedRoleResponse checkServiceLinkedRole(shared_ptr<CheckServiceLinkedRoleRequest> request);
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
  CreateSQLAccountResponse createSQLAccountWithOptions(shared_ptr<CreateSQLAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSQLAccountResponse createSQLAccount(shared_ptr<CreateSQLAccountRequest> request);
  CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceLinkedRoleResponse createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteDBClusterResponse deleteDBClusterWithOptions(shared_ptr<DeleteDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBClusterResponse deleteDBCluster(shared_ptr<DeleteDBClusterRequest> request);
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
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeBackupsResponse describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupsResponse describeBackups(shared_ptr<DescribeBackupsRequest> request);
  DescribeColumnsResponse describeColumnsWithOptions(shared_ptr<DescribeColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeColumnsResponse describeColumns(shared_ptr<DescribeColumnsRequest> request);
  DescribeConfigHistoryResponse describeConfigHistoryWithOptions(shared_ptr<DescribeConfigHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConfigHistoryResponse describeConfigHistory(shared_ptr<DescribeConfigHistoryRequest> request);
  DescribeConfigVersionDifferenceResponse describeConfigVersionDifferenceWithOptions(shared_ptr<DescribeConfigVersionDifferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConfigVersionDifferenceResponse describeConfigVersionDifference(shared_ptr<DescribeConfigVersionDifferenceRequest> request);
  DescribeDBClusterAccessWhiteListResponse describeDBClusterAccessWhiteListWithOptions(shared_ptr<DescribeDBClusterAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterAccessWhiteListResponse describeDBClusterAccessWhiteList(shared_ptr<DescribeDBClusterAccessWhiteListRequest> request);
  DescribeDBClusterAttributeResponse describeDBClusterAttributeWithOptions(shared_ptr<DescribeDBClusterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterAttributeResponse describeDBClusterAttribute(shared_ptr<DescribeDBClusterAttributeRequest> request);
  DescribeDBClusterConfigResponse describeDBClusterConfigWithOptions(shared_ptr<DescribeDBClusterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterConfigResponse describeDBClusterConfig(shared_ptr<DescribeDBClusterConfigRequest> request);
  DescribeDBClusterConfigInXMLResponse describeDBClusterConfigInXMLWithOptions(shared_ptr<DescribeDBClusterConfigInXMLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterConfigInXMLResponse describeDBClusterConfigInXML(shared_ptr<DescribeDBClusterConfigInXMLRequest> request);
  DescribeDBClusterNetInfoItemsResponse describeDBClusterNetInfoItemsWithOptions(shared_ptr<DescribeDBClusterNetInfoItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterNetInfoItemsResponse describeDBClusterNetInfoItems(shared_ptr<DescribeDBClusterNetInfoItemsRequest> request);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(shared_ptr<DescribeDBClusterPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformance(shared_ptr<DescribeDBClusterPerformanceRequest> request);
  DescribeDBClustersResponse describeDBClustersWithOptions(shared_ptr<DescribeDBClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClustersResponse describeDBClusters(shared_ptr<DescribeDBClustersRequest> request);
  DescribeDBConfigResponse describeDBConfigWithOptions(shared_ptr<DescribeDBConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBConfigResponse describeDBConfig(shared_ptr<DescribeDBConfigRequest> request);
  DescribeOSSStorageResponse describeOSSStorageWithOptions(shared_ptr<DescribeOSSStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOSSStorageResponse describeOSSStorage(shared_ptr<DescribeOSSStorageRequest> request);
  DescribeProcessListResponse describeProcessListWithOptions(shared_ptr<DescribeProcessListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProcessListResponse describeProcessList(shared_ptr<DescribeProcessListRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSchemasResponse describeSchemasWithOptions(shared_ptr<DescribeSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSchemasResponse describeSchemas(shared_ptr<DescribeSchemasRequest> request);
  DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowLogRecordsResponse describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request);
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
  ModifyDBClusterResponse modifyDBClusterWithOptions(shared_ptr<ModifyDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterResponse modifyDBCluster(shared_ptr<ModifyDBClusterRequest> request);
  ModifyDBClusterAccessWhiteListResponse modifyDBClusterAccessWhiteListWithOptions(shared_ptr<ModifyDBClusterAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterAccessWhiteListResponse modifyDBClusterAccessWhiteList(shared_ptr<ModifyDBClusterAccessWhiteListRequest> request);
  ModifyDBClusterConfigResponse modifyDBClusterConfigWithOptions(shared_ptr<ModifyDBClusterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterConfigResponse modifyDBClusterConfig(shared_ptr<ModifyDBClusterConfigRequest> request);
  ModifyDBClusterConfigInXMLResponse modifyDBClusterConfigInXMLWithOptions(shared_ptr<ModifyDBClusterConfigInXMLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterConfigInXMLResponse modifyDBClusterConfigInXML(shared_ptr<ModifyDBClusterConfigInXMLRequest> request);
  ModifyDBClusterDescriptionResponse modifyDBClusterDescriptionWithOptions(shared_ptr<ModifyDBClusterDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterDescriptionResponse modifyDBClusterDescription(shared_ptr<ModifyDBClusterDescriptionRequest> request);
  ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTimeWithOptions(shared_ptr<ModifyDBClusterMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTime(shared_ptr<ModifyDBClusterMaintainTimeRequest> request);
  ModifyDBConfigResponse modifyDBConfigWithOptions(shared_ptr<ModifyDBConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBConfigResponse modifyDBConfig(shared_ptr<ModifyDBConfigRequest> request);
  ModifyMinorVersionGreadeTypeResponse modifyMinorVersionGreadeTypeWithOptions(shared_ptr<ModifyMinorVersionGreadeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMinorVersionGreadeTypeResponse modifyMinorVersionGreadeType(shared_ptr<ModifyMinorVersionGreadeTypeRequest> request);
  ModifyRDSToClickhouseDbResponse modifyRDSToClickhouseDbWithOptions(shared_ptr<ModifyRDSToClickhouseDbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRDSToClickhouseDbResponse modifyRDSToClickhouseDb(shared_ptr<ModifyRDSToClickhouseDbRequest> request);
  ReleaseClusterPublicConnectionResponse releaseClusterPublicConnectionWithOptions(shared_ptr<ReleaseClusterPublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseClusterPublicConnectionResponse releaseClusterPublicConnection(shared_ptr<ReleaseClusterPublicConnectionRequest> request);
  ResetAccountPasswordResponse resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAccountPasswordResponse resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request);
  RestartInstanceResponse restartInstanceWithOptions(shared_ptr<RestartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartInstanceResponse restartInstance(shared_ptr<RestartInstanceRequest> request);
  TransferVersionResponse transferVersionWithOptions(shared_ptr<TransferVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferVersionResponse transferVersion(shared_ptr<TransferVersionRequest> request);
  UpgradeMinorVersionResponse upgradeMinorVersionWithOptions(shared_ptr<UpgradeMinorVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeMinorVersionResponse upgradeMinorVersion(shared_ptr<UpgradeMinorVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Clickhouse20191111

#endif
