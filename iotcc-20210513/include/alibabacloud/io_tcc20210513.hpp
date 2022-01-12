// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IOTCC20210513_H_
#define ALIBABACLOUD_IOTCC20210513_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_IoTCC20210513 {
class AddCidrToConnectionPoolRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cidrs{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> connectionPoolId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  AddCidrToConnectionPoolRequest() {}

  explicit AddCidrToConnectionPoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrs) {
      res["Cidrs"] = boost::any(*cidrs);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidrs") != m.end() && !m["Cidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Cidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Cidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cidrs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddCidrToConnectionPoolRequest() = default;
};
class AddCidrToConnectionPoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddCidrToConnectionPoolResponseBody() {}

  explicit AddCidrToConnectionPoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddCidrToConnectionPoolResponseBody() = default;
};
class AddCidrToConnectionPoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddCidrToConnectionPoolResponseBody> body{};

  AddCidrToConnectionPoolResponse() {}

  explicit AddCidrToConnectionPoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddCidrToConnectionPoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddCidrToConnectionPoolResponseBody>(model1);
      }
    }
  }


  virtual ~AddCidrToConnectionPoolResponse() = default;
};
class AddIoTCloudConnectorToGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<vector<string>> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  AddIoTCloudConnectorToGroupRequest() {}

  explicit AddIoTCloudConnectorToGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
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
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IoTCloudConnectorId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IoTCloudConnectorId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ioTCloudConnectorId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddIoTCloudConnectorToGroupRequest() = default;
};
class AddIoTCloudConnectorToGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddIoTCloudConnectorToGroupResponseBody() {}

  explicit AddIoTCloudConnectorToGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddIoTCloudConnectorToGroupResponseBody() = default;
};
class AddIoTCloudConnectorToGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddIoTCloudConnectorToGroupResponseBody> body{};

  AddIoTCloudConnectorToGroupResponse() {}

  explicit AddIoTCloudConnectorToGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddIoTCloudConnectorToGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddIoTCloudConnectorToGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddIoTCloudConnectorToGroupResponse() = default;
};
class AssociateIpWithConnectionPoolRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> connectionPoolId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<vector<string>> ips{};
  shared_ptr<string> ipsFilePath{};
  shared_ptr<string> regionId{};

  AssociateIpWithConnectionPoolRequest() {}

  explicit AssociateIpWithConnectionPoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (ips) {
      res["Ips"] = boost::any(*ips);
    }
    if (ipsFilePath) {
      res["IpsFilePath"] = boost::any(*ipsFilePath);
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
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ips"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ips"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ips = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IpsFilePath") != m.end() && !m["IpsFilePath"].empty()) {
      ipsFilePath = make_shared<string>(boost::any_cast<string>(m["IpsFilePath"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AssociateIpWithConnectionPoolRequest() = default;
};
class AssociateIpWithConnectionPoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateIpWithConnectionPoolResponseBody() {}

  explicit AssociateIpWithConnectionPoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssociateIpWithConnectionPoolResponseBody() = default;
};
class AssociateIpWithConnectionPoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssociateIpWithConnectionPoolResponseBody> body{};

  AssociateIpWithConnectionPoolResponse() {}

  explicit AssociateIpWithConnectionPoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AssociateIpWithConnectionPoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateIpWithConnectionPoolResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateIpWithConnectionPoolResponse() = default;
};
class AssociateVSwitchWithIoTCloudConnectorRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> vSwitchList{};
  shared_ptr<string> vpcId{};

  AssociateVSwitchWithIoTCloudConnectorRequest() {}

  explicit AssociateVSwitchWithIoTCloudConnectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitchList) {
      res["VSwitchList"] = boost::any(*vSwitchList);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchList") != m.end() && !m["VSwitchList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~AssociateVSwitchWithIoTCloudConnectorRequest() = default;
};
class AssociateVSwitchWithIoTCloudConnectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateVSwitchWithIoTCloudConnectorResponseBody() {}

  explicit AssociateVSwitchWithIoTCloudConnectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssociateVSwitchWithIoTCloudConnectorResponseBody() = default;
};
class AssociateVSwitchWithIoTCloudConnectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssociateVSwitchWithIoTCloudConnectorResponseBody> body{};

  AssociateVSwitchWithIoTCloudConnectorResponse() {}

  explicit AssociateVSwitchWithIoTCloudConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AssociateVSwitchWithIoTCloudConnectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateVSwitchWithIoTCloudConnectorResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateVSwitchWithIoTCloudConnectorResponse() = default;
};
class CreateAuthorizationRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleDescription{};
  shared_ptr<string> authorizationRuleName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> policy{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> sourceCidrs{};

  CreateAuthorizationRuleRequest() {}

  explicit CreateAuthorizationRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleDescription) {
      res["AuthorizationRuleDescription"] = boost::any(*authorizationRuleDescription);
    }
    if (authorizationRuleName) {
      res["AuthorizationRuleName"] = boost::any(*authorizationRuleName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceCidrs) {
      res["SourceCidrs"] = boost::any(*sourceCidrs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleDescription") != m.end() && !m["AuthorizationRuleDescription"].empty()) {
      authorizationRuleDescription = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleDescription"]));
    }
    if (m.find("AuthorizationRuleName") != m.end() && !m["AuthorizationRuleName"].empty()) {
      authorizationRuleName = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceCidrs") != m.end() && !m["SourceCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceCidrs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateAuthorizationRuleRequest() = default;
};
class CreateAuthorizationRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> requestId{};

  CreateAuthorizationRuleResponseBody() {}

  explicit CreateAuthorizationRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAuthorizationRuleResponseBody() = default;
};
class CreateAuthorizationRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAuthorizationRuleResponseBody> body{};

  CreateAuthorizationRuleResponse() {}

  explicit CreateAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAuthorizationRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAuthorizationRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAuthorizationRuleResponse() = default;
};
class CreateConnectionPoolRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cidrs{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> connectionPoolDescription{};
  shared_ptr<string> connectionPoolName{};
  shared_ptr<long> count{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  CreateConnectionPoolRequest() {}

  explicit CreateConnectionPoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrs) {
      res["Cidrs"] = boost::any(*cidrs);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionPoolDescription) {
      res["ConnectionPoolDescription"] = boost::any(*connectionPoolDescription);
    }
    if (connectionPoolName) {
      res["ConnectionPoolName"] = boost::any(*connectionPoolName);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidrs") != m.end() && !m["Cidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Cidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Cidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cidrs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConnectionPoolDescription") != m.end() && !m["ConnectionPoolDescription"].empty()) {
      connectionPoolDescription = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolDescription"]));
    }
    if (m.find("ConnectionPoolName") != m.end() && !m["ConnectionPoolName"].empty()) {
      connectionPoolName = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolName"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateConnectionPoolRequest() = default;
};
class CreateConnectionPoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> connectionPoolId{};
  shared_ptr<string> requestId{};

  CreateConnectionPoolResponseBody() {}

  explicit CreateConnectionPoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateConnectionPoolResponseBody() = default;
};
class CreateConnectionPoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateConnectionPoolResponseBody> body{};

  CreateConnectionPoolResponse() {}

  explicit CreateConnectionPoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateConnectionPoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConnectionPoolResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConnectionPoolResponse() = default;
};
class CreateGroupAuthorizationRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleDescription{};
  shared_ptr<string> authorizationRuleName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<string> policy{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> sourceCidrs{};

  CreateGroupAuthorizationRuleRequest() {}

  explicit CreateGroupAuthorizationRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleDescription) {
      res["AuthorizationRuleDescription"] = boost::any(*authorizationRuleDescription);
    }
    if (authorizationRuleName) {
      res["AuthorizationRuleName"] = boost::any(*authorizationRuleName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceCidrs) {
      res["SourceCidrs"] = boost::any(*sourceCidrs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleDescription") != m.end() && !m["AuthorizationRuleDescription"].empty()) {
      authorizationRuleDescription = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleDescription"]));
    }
    if (m.find("AuthorizationRuleName") != m.end() && !m["AuthorizationRuleName"].empty()) {
      authorizationRuleName = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceCidrs") != m.end() && !m["SourceCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceCidrs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateGroupAuthorizationRuleRequest() = default;
};
class CreateGroupAuthorizationRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<string> requestId{};

  CreateGroupAuthorizationRuleResponseBody() {}

  explicit CreateGroupAuthorizationRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateGroupAuthorizationRuleResponseBody() = default;
};
class CreateGroupAuthorizationRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGroupAuthorizationRuleResponseBody> body{};

  CreateGroupAuthorizationRuleResponse() {}

  explicit CreateGroupAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGroupAuthorizationRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupAuthorizationRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupAuthorizationRuleResponse() = default;
};
class CreateIoTCloudConnectorRequest : public Darabonba::Model {
public:
  shared_ptr<string> APN{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ISP{};
  shared_ptr<string> ioTCloudConnectorDescription{};
  shared_ptr<string> ioTCloudConnectorName{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceUid{};
  shared_ptr<bool> wildcardDomainEnabled{};

  CreateIoTCloudConnectorRequest() {}

  explicit CreateIoTCloudConnectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (APN) {
      res["APN"] = boost::any(*APN);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (ioTCloudConnectorDescription) {
      res["IoTCloudConnectorDescription"] = boost::any(*ioTCloudConnectorDescription);
    }
    if (ioTCloudConnectorName) {
      res["IoTCloudConnectorName"] = boost::any(*ioTCloudConnectorName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceUid) {
      res["ResourceUid"] = boost::any(*resourceUid);
    }
    if (wildcardDomainEnabled) {
      res["WildcardDomainEnabled"] = boost::any(*wildcardDomainEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("APN") != m.end() && !m["APN"].empty()) {
      APN = make_shared<string>(boost::any_cast<string>(m["APN"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("IoTCloudConnectorDescription") != m.end() && !m["IoTCloudConnectorDescription"].empty()) {
      ioTCloudConnectorDescription = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorDescription"]));
    }
    if (m.find("IoTCloudConnectorName") != m.end() && !m["IoTCloudConnectorName"].empty()) {
      ioTCloudConnectorName = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceUid") != m.end() && !m["ResourceUid"].empty()) {
      resourceUid = make_shared<long>(boost::any_cast<long>(m["ResourceUid"]));
    }
    if (m.find("WildcardDomainEnabled") != m.end() && !m["WildcardDomainEnabled"].empty()) {
      wildcardDomainEnabled = make_shared<bool>(boost::any_cast<bool>(m["WildcardDomainEnabled"]));
    }
  }


  virtual ~CreateIoTCloudConnectorRequest() = default;
};
class CreateIoTCloudConnectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> requestId{};

  CreateIoTCloudConnectorResponseBody() {}

  explicit CreateIoTCloudConnectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateIoTCloudConnectorResponseBody() = default;
};
class CreateIoTCloudConnectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateIoTCloudConnectorResponseBody> body{};

  CreateIoTCloudConnectorResponse() {}

  explicit CreateIoTCloudConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateIoTCloudConnectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIoTCloudConnectorResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIoTCloudConnectorResponse() = default;
};
class CreateIoTCloudConnectorGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  CreateIoTCloudConnectorGroupRequest() {}

  explicit CreateIoTCloudConnectorGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateIoTCloudConnectorGroupRequest() = default;
};
class CreateIoTCloudConnectorGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<string> requestId{};

  CreateIoTCloudConnectorGroupResponseBody() {}

  explicit CreateIoTCloudConnectorGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateIoTCloudConnectorGroupResponseBody() = default;
};
class CreateIoTCloudConnectorGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateIoTCloudConnectorGroupResponseBody> body{};

  CreateIoTCloudConnectorGroupResponse() {}

  explicit CreateIoTCloudConnectorGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateIoTCloudConnectorGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIoTCloudConnectorGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIoTCloudConnectorGroupResponse() = default;
};
class CreateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> serviceName{};

  CreateServiceRequest() {}

  explicit CreateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceDescription) {
      res["ServiceDescription"] = boost::any(*serviceDescription);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceDescription") != m.end() && !m["ServiceDescription"].empty()) {
      serviceDescription = make_shared<string>(boost::any_cast<string>(m["ServiceDescription"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~CreateServiceRequest() = default;
};
class CreateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceId{};

  CreateServiceResponseBody() {}

  explicit CreateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~CreateServiceResponseBody() = default;
};
class CreateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceResponseBody> body{};

  CreateServiceResponse() {}

  explicit CreateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceResponse() = default;
};
class CreateServiceEntryRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceEntryDescription{};
  shared_ptr<string> serviceEntryName{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> target{};
  shared_ptr<string> targetType{};

  CreateServiceEntryRequest() {}

  explicit CreateServiceEntryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceEntryDescription) {
      res["ServiceEntryDescription"] = boost::any(*serviceEntryDescription);
    }
    if (serviceEntryName) {
      res["ServiceEntryName"] = boost::any(*serviceEntryName);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceEntryDescription") != m.end() && !m["ServiceEntryDescription"].empty()) {
      serviceEntryDescription = make_shared<string>(boost::any_cast<string>(m["ServiceEntryDescription"]));
    }
    if (m.find("ServiceEntryName") != m.end() && !m["ServiceEntryName"].empty()) {
      serviceEntryName = make_shared<string>(boost::any_cast<string>(m["ServiceEntryName"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateServiceEntryRequest() = default;
};
class CreateServiceEntryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceEntryId{};

  CreateServiceEntryResponseBody() {}

  explicit CreateServiceEntryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceEntryId) {
      res["ServiceEntryId"] = boost::any(*serviceEntryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceEntryId") != m.end() && !m["ServiceEntryId"].empty()) {
      serviceEntryId = make_shared<string>(boost::any_cast<string>(m["ServiceEntryId"]));
    }
  }


  virtual ~CreateServiceEntryResponseBody() = default;
};
class CreateServiceEntryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceEntryResponseBody> body{};

  CreateServiceEntryResponse() {}

  explicit CreateServiceEntryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceEntryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceEntryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceEntryResponse() = default;
};
class DeleteAuthorizationRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  DeleteAuthorizationRuleRequest() {}

  explicit DeleteAuthorizationRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteAuthorizationRuleRequest() = default;
};
class DeleteAuthorizationRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAuthorizationRuleResponseBody() {}

  explicit DeleteAuthorizationRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAuthorizationRuleResponseBody() = default;
};
class DeleteAuthorizationRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAuthorizationRuleResponseBody> body{};

  DeleteAuthorizationRuleResponse() {}

  explicit DeleteAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAuthorizationRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAuthorizationRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAuthorizationRuleResponse() = default;
};
class DeleteConnectionPoolRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> connectionPoolId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  DeleteConnectionPoolRequest() {}

  explicit DeleteConnectionPoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
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
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteConnectionPoolRequest() = default;
};
class DeleteConnectionPoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteConnectionPoolResponseBody() {}

  explicit DeleteConnectionPoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteConnectionPoolResponseBody() = default;
};
class DeleteConnectionPoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteConnectionPoolResponseBody> body{};

  DeleteConnectionPoolResponse() {}

  explicit DeleteConnectionPoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteConnectionPoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConnectionPoolResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConnectionPoolResponse() = default;
};
class DeleteGroupAuthorizationRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<string> regionId{};

  DeleteGroupAuthorizationRuleRequest() {}

  explicit DeleteGroupAuthorizationRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteGroupAuthorizationRuleRequest() = default;
};
class DeleteGroupAuthorizationRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGroupAuthorizationRuleResponseBody() {}

  explicit DeleteGroupAuthorizationRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGroupAuthorizationRuleResponseBody() = default;
};
class DeleteGroupAuthorizationRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGroupAuthorizationRuleResponseBody> body{};

  DeleteGroupAuthorizationRuleResponse() {}

  explicit DeleteGroupAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGroupAuthorizationRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupAuthorizationRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupAuthorizationRuleResponse() = default;
};
class DeleteIoTCloudConnectorRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  DeleteIoTCloudConnectorRequest() {}

  explicit DeleteIoTCloudConnectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
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
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteIoTCloudConnectorRequest() = default;
};
class DeleteIoTCloudConnectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIoTCloudConnectorResponseBody() {}

  explicit DeleteIoTCloudConnectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIoTCloudConnectorResponseBody() = default;
};
class DeleteIoTCloudConnectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteIoTCloudConnectorResponseBody> body{};

  DeleteIoTCloudConnectorResponse() {}

  explicit DeleteIoTCloudConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIoTCloudConnectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIoTCloudConnectorResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIoTCloudConnectorResponse() = default;
};
class DeleteIoTCloudConnectorGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<string> regionId{};

  DeleteIoTCloudConnectorGroupRequest() {}

  explicit DeleteIoTCloudConnectorGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
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
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteIoTCloudConnectorGroupRequest() = default;
};
class DeleteIoTCloudConnectorGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIoTCloudConnectorGroupResponseBody() {}

  explicit DeleteIoTCloudConnectorGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIoTCloudConnectorGroupResponseBody() = default;
};
class DeleteIoTCloudConnectorGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteIoTCloudConnectorGroupResponseBody> body{};

  DeleteIoTCloudConnectorGroupResponse() {}

  explicit DeleteIoTCloudConnectorGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIoTCloudConnectorGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIoTCloudConnectorGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIoTCloudConnectorGroupResponse() = default;
};
class DeleteServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};

  DeleteServiceRequest() {}

  explicit DeleteServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~DeleteServiceRequest() = default;
};
class DeleteServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServiceResponseBody() {}

  explicit DeleteServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServiceResponseBody() = default;
};
class DeleteServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteServiceResponseBody> body{};

  DeleteServiceResponse() {}

  explicit DeleteServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceResponse() = default;
};
class DeleteServiceEntryRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceEntryId{};
  shared_ptr<string> serviceId{};

  DeleteServiceEntryRequest() {}

  explicit DeleteServiceEntryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceEntryId) {
      res["ServiceEntryId"] = boost::any(*serviceEntryId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceEntryId") != m.end() && !m["ServiceEntryId"].empty()) {
      serviceEntryId = make_shared<string>(boost::any_cast<string>(m["ServiceEntryId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~DeleteServiceEntryRequest() = default;
};
class DeleteServiceEntryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServiceEntryResponseBody() {}

  explicit DeleteServiceEntryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServiceEntryResponseBody() = default;
};
class DeleteServiceEntryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteServiceEntryResponseBody> body{};

  DeleteServiceEntryResponse() {}

  explicit DeleteServiceEntryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceEntryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceEntryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceEntryResponse() = default;
};
class DisableIoTCloudConnectorAccessLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  DisableIoTCloudConnectorAccessLogRequest() {}

  explicit DisableIoTCloudConnectorAccessLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
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
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DisableIoTCloudConnectorAccessLogRequest() = default;
};
class DisableIoTCloudConnectorAccessLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableIoTCloudConnectorAccessLogResponseBody() {}

  explicit DisableIoTCloudConnectorAccessLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableIoTCloudConnectorAccessLogResponseBody() = default;
};
class DisableIoTCloudConnectorAccessLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableIoTCloudConnectorAccessLogResponseBody> body{};

  DisableIoTCloudConnectorAccessLogResponse() {}

  explicit DisableIoTCloudConnectorAccessLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableIoTCloudConnectorAccessLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableIoTCloudConnectorAccessLogResponseBody>(model1);
      }
    }
  }


  virtual ~DisableIoTCloudConnectorAccessLogResponse() = default;
};
class DissociateIpFromConnectionPoolRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> connectionPoolId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<vector<string>> ips{};
  shared_ptr<string> ipsFilePath{};
  shared_ptr<string> regionId{};

  DissociateIpFromConnectionPoolRequest() {}

  explicit DissociateIpFromConnectionPoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (ips) {
      res["Ips"] = boost::any(*ips);
    }
    if (ipsFilePath) {
      res["IpsFilePath"] = boost::any(*ipsFilePath);
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
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ips"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ips"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ips = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IpsFilePath") != m.end() && !m["IpsFilePath"].empty()) {
      ipsFilePath = make_shared<string>(boost::any_cast<string>(m["IpsFilePath"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DissociateIpFromConnectionPoolRequest() = default;
};
class DissociateIpFromConnectionPoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DissociateIpFromConnectionPoolResponseBody() {}

  explicit DissociateIpFromConnectionPoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DissociateIpFromConnectionPoolResponseBody() = default;
};
class DissociateIpFromConnectionPoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DissociateIpFromConnectionPoolResponseBody> body{};

  DissociateIpFromConnectionPoolResponse() {}

  explicit DissociateIpFromConnectionPoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DissociateIpFromConnectionPoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DissociateIpFromConnectionPoolResponseBody>(model1);
      }
    }
  }


  virtual ~DissociateIpFromConnectionPoolResponse() = default;
};
class DissociateVSwitchFromIoTCloudConnectorRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  DissociateVSwitchFromIoTCloudConnectorRequest() {}

  explicit DissociateVSwitchFromIoTCloudConnectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
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
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DissociateVSwitchFromIoTCloudConnectorRequest() = default;
};
class DissociateVSwitchFromIoTCloudConnectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DissociateVSwitchFromIoTCloudConnectorResponseBody() {}

  explicit DissociateVSwitchFromIoTCloudConnectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DissociateVSwitchFromIoTCloudConnectorResponseBody() = default;
};
class DissociateVSwitchFromIoTCloudConnectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DissociateVSwitchFromIoTCloudConnectorResponseBody> body{};

  DissociateVSwitchFromIoTCloudConnectorResponse() {}

  explicit DissociateVSwitchFromIoTCloudConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DissociateVSwitchFromIoTCloudConnectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DissociateVSwitchFromIoTCloudConnectorResponseBody>(model1);
      }
    }
  }


  virtual ~DissociateVSwitchFromIoTCloudConnectorResponse() = default;
};
class EnableIoTCloudConnectorAccessLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessLogSlsLogStore{};
  shared_ptr<string> accessLogSlsProject{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  EnableIoTCloudConnectorAccessLogRequest() {}

  explicit EnableIoTCloudConnectorAccessLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLogSlsLogStore) {
      res["AccessLogSlsLogStore"] = boost::any(*accessLogSlsLogStore);
    }
    if (accessLogSlsProject) {
      res["AccessLogSlsProject"] = boost::any(*accessLogSlsProject);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLogSlsLogStore") != m.end() && !m["AccessLogSlsLogStore"].empty()) {
      accessLogSlsLogStore = make_shared<string>(boost::any_cast<string>(m["AccessLogSlsLogStore"]));
    }
    if (m.find("AccessLogSlsProject") != m.end() && !m["AccessLogSlsProject"].empty()) {
      accessLogSlsProject = make_shared<string>(boost::any_cast<string>(m["AccessLogSlsProject"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~EnableIoTCloudConnectorAccessLogRequest() = default;
};
class EnableIoTCloudConnectorAccessLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableIoTCloudConnectorAccessLogResponseBody() {}

  explicit EnableIoTCloudConnectorAccessLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableIoTCloudConnectorAccessLogResponseBody() = default;
};
class EnableIoTCloudConnectorAccessLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableIoTCloudConnectorAccessLogResponseBody> body{};

  EnableIoTCloudConnectorAccessLogResponse() {}

  explicit EnableIoTCloudConnectorAccessLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableIoTCloudConnectorAccessLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableIoTCloudConnectorAccessLogResponseBody>(model1);
      }
    }
  }


  virtual ~EnableIoTCloudConnectorAccessLogResponse() = default;
};
class GetConnectionPoolIpOperationResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionPoolId{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> queryRequestId{};
  shared_ptr<string> regionId{};

  GetConnectionPoolIpOperationResultRequest() {}

  explicit GetConnectionPoolIpOperationResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (queryRequestId) {
      res["QueryRequestId"] = boost::any(*queryRequestId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("QueryRequestId") != m.end() && !m["QueryRequestId"].empty()) {
      queryRequestId = make_shared<string>(boost::any_cast<string>(m["QueryRequestId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetConnectionPoolIpOperationResultRequest() = default;
};
class GetConnectionPoolIpOperationResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resultFilePaths{};

  GetConnectionPoolIpOperationResultResponseBody() {}

  explicit GetConnectionPoolIpOperationResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultFilePaths) {
      res["ResultFilePaths"] = boost::any(*resultFilePaths);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultFilePaths") != m.end() && !m["ResultFilePaths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResultFilePaths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResultFilePaths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultFilePaths = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetConnectionPoolIpOperationResultResponseBody() = default;
};
class GetConnectionPoolIpOperationResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetConnectionPoolIpOperationResultResponseBody> body{};

  GetConnectionPoolIpOperationResultResponse() {}

  explicit GetConnectionPoolIpOperationResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetConnectionPoolIpOperationResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConnectionPoolIpOperationResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetConnectionPoolIpOperationResultResponse() = default;
};
class GetIoTCloudConnectorAccessLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  GetIoTCloudConnectorAccessLogRequest() {}

  explicit GetIoTCloudConnectorAccessLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
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
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetIoTCloudConnectorAccessLogRequest() = default;
};
class GetIoTCloudConnectorAccessLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessLogSlsLogStore{};
  shared_ptr<string> accessLogSlsProject{};
  shared_ptr<string> accessLogStatus{};
  shared_ptr<string> requestId{};

  GetIoTCloudConnectorAccessLogResponseBody() {}

  explicit GetIoTCloudConnectorAccessLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLogSlsLogStore) {
      res["AccessLogSlsLogStore"] = boost::any(*accessLogSlsLogStore);
    }
    if (accessLogSlsProject) {
      res["AccessLogSlsProject"] = boost::any(*accessLogSlsProject);
    }
    if (accessLogStatus) {
      res["AccessLogStatus"] = boost::any(*accessLogStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLogSlsLogStore") != m.end() && !m["AccessLogSlsLogStore"].empty()) {
      accessLogSlsLogStore = make_shared<string>(boost::any_cast<string>(m["AccessLogSlsLogStore"]));
    }
    if (m.find("AccessLogSlsProject") != m.end() && !m["AccessLogSlsProject"].empty()) {
      accessLogSlsProject = make_shared<string>(boost::any_cast<string>(m["AccessLogSlsProject"]));
    }
    if (m.find("AccessLogStatus") != m.end() && !m["AccessLogStatus"].empty()) {
      accessLogStatus = make_shared<string>(boost::any_cast<string>(m["AccessLogStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetIoTCloudConnectorAccessLogResponseBody() = default;
};
class GetIoTCloudConnectorAccessLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetIoTCloudConnectorAccessLogResponseBody> body{};

  GetIoTCloudConnectorAccessLogResponse() {}

  explicit GetIoTCloudConnectorAccessLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetIoTCloudConnectorAccessLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIoTCloudConnectorAccessLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetIoTCloudConnectorAccessLogResponse() = default;
};
class GetStsInfoAndOssPathRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> connectionPoolId{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileName{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  GetStsInfoAndOssPathRequest() {}

  explicit GetStsInfoAndOssPathRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
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
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetStsInfoAndOssPathRequest() = default;
};
class GetStsInfoAndOssPathResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> expiration{};
  shared_ptr<string> ossPath{};
  shared_ptr<string> requestId{};
  shared_ptr<string> securityToken{};

  GetStsInfoAndOssPathResponseBody() {}

  explicit GetStsInfoAndOssPathResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (ossPath) {
      res["OssPath"] = boost::any(*ossPath);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("OssPath") != m.end() && !m["OssPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["OssPath"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetStsInfoAndOssPathResponseBody() = default;
};
class GetStsInfoAndOssPathResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStsInfoAndOssPathResponseBody> body{};

  GetStsInfoAndOssPathResponse() {}

  explicit GetStsInfoAndOssPathResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetStsInfoAndOssPathResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStsInfoAndOssPathResponseBody>(model1);
      }
    }
  }


  virtual ~GetStsInfoAndOssPathResponse() = default;
};
class GrantVirtualBorderRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualBorderRouterId{};

  GrantVirtualBorderRouterRequest() {}

  explicit GrantVirtualBorderRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualBorderRouterId) {
      res["VirtualBorderRouterId"] = boost::any(*virtualBorderRouterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualBorderRouterId") != m.end() && !m["VirtualBorderRouterId"].empty()) {
      virtualBorderRouterId = make_shared<string>(boost::any_cast<string>(m["VirtualBorderRouterId"]));
    }
  }


  virtual ~GrantVirtualBorderRouterRequest() = default;
};
class GrantVirtualBorderRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GrantVirtualBorderRouterResponseBody() {}

  explicit GrantVirtualBorderRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GrantVirtualBorderRouterResponseBody() = default;
};
class GrantVirtualBorderRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GrantVirtualBorderRouterResponseBody> body{};

  GrantVirtualBorderRouterResponse() {}

  explicit GrantVirtualBorderRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GrantVirtualBorderRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantVirtualBorderRouterResponseBody>(model1);
      }
    }
  }


  virtual ~GrantVirtualBorderRouterResponse() = default;
};
class ListAPNsRequest : public Darabonba::Model {
public:
  shared_ptr<string> APN{};
  shared_ptr<string> ISP{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListAPNsRequest() {}

  explicit ListAPNsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (APN) {
      res["APN"] = boost::any(*APN);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("APN") != m.end() && !m["APN"].empty()) {
      APN = make_shared<string>(boost::any_cast<string>(m["APN"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListAPNsRequest() = default;
};
class ListAPNsResponseBodyAPNs : public Darabonba::Model {
public:
  shared_ptr<string> APN{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> featureList{};
  shared_ptr<string> ISP{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> zoneList{};

  ListAPNsResponseBodyAPNs() {}

  explicit ListAPNsResponseBodyAPNs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (APN) {
      res["APN"] = boost::any(*APN);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (featureList) {
      res["FeatureList"] = boost::any(*featureList);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (zoneList) {
      res["ZoneList"] = boost::any(*zoneList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("APN") != m.end() && !m["APN"].empty()) {
      APN = make_shared<string>(boost::any_cast<string>(m["APN"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FeatureList") != m.end() && !m["FeatureList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FeatureList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FeatureList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      featureList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ZoneList") != m.end() && !m["ZoneList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ZoneList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ZoneList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zoneList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAPNsResponseBodyAPNs() = default;
};
class ListAPNsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAPNsResponseBodyAPNs>> APNs{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAPNsResponseBody() {}

  explicit ListAPNsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (APNs) {
      vector<boost::any> temp1;
      for(auto item1:*APNs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["APNs"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("APNs") != m.end() && !m["APNs"].empty()) {
      if (typeid(vector<boost::any>) == m["APNs"].type()) {
        vector<ListAPNsResponseBodyAPNs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["APNs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAPNsResponseBodyAPNs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        APNs = make_shared<vector<ListAPNsResponseBodyAPNs>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAPNsResponseBody() = default;
};
class ListAPNsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAPNsResponseBody> body{};

  ListAPNsResponse() {}

  explicit ListAPNsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAPNsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAPNsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAPNsResponse() = default;
};
class ListAuthorizationRulesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authorizationRuleIds{};
  shared_ptr<vector<string>> authorizationRuleName{};
  shared_ptr<vector<string>> authorizationRuleStatus{};
  shared_ptr<vector<string>> destination{};
  shared_ptr<vector<string>> destinationType{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> policy{};
  shared_ptr<string> regionId{};

  ListAuthorizationRulesRequest() {}

  explicit ListAuthorizationRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleIds) {
      res["AuthorizationRuleIds"] = boost::any(*authorizationRuleIds);
    }
    if (authorizationRuleName) {
      res["AuthorizationRuleName"] = boost::any(*authorizationRuleName);
    }
    if (authorizationRuleStatus) {
      res["AuthorizationRuleStatus"] = boost::any(*authorizationRuleStatus);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleIds") != m.end() && !m["AuthorizationRuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizationRuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizationRuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationRuleIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuthorizationRuleName") != m.end() && !m["AuthorizationRuleName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizationRuleName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizationRuleName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationRuleName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuthorizationRuleStatus") != m.end() && !m["AuthorizationRuleStatus"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizationRuleStatus"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizationRuleStatus"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationRuleStatus = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Destination"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Destination"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destination = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationType = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Policy"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Policy"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policy = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListAuthorizationRulesRequest() = default;
};
class ListAuthorizationRulesResponseBodyAuthorizationRules : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleDescription{};
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> authorizationRuleName{};
  shared_ptr<string> authorizationRuleStatus{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> policy{};
  shared_ptr<vector<string>> sourceCidrs{};

  ListAuthorizationRulesResponseBodyAuthorizationRules() {}

  explicit ListAuthorizationRulesResponseBodyAuthorizationRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleDescription) {
      res["AuthorizationRuleDescription"] = boost::any(*authorizationRuleDescription);
    }
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (authorizationRuleName) {
      res["AuthorizationRuleName"] = boost::any(*authorizationRuleName);
    }
    if (authorizationRuleStatus) {
      res["AuthorizationRuleStatus"] = boost::any(*authorizationRuleStatus);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (sourceCidrs) {
      res["SourceCidrs"] = boost::any(*sourceCidrs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleDescription") != m.end() && !m["AuthorizationRuleDescription"].empty()) {
      authorizationRuleDescription = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleDescription"]));
    }
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("AuthorizationRuleName") != m.end() && !m["AuthorizationRuleName"].empty()) {
      authorizationRuleName = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleName"]));
    }
    if (m.find("AuthorizationRuleStatus") != m.end() && !m["AuthorizationRuleStatus"].empty()) {
      authorizationRuleStatus = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleStatus"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("SourceCidrs") != m.end() && !m["SourceCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceCidrs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAuthorizationRulesResponseBodyAuthorizationRules() = default;
};
class ListAuthorizationRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAuthorizationRulesResponseBodyAuthorizationRules>> authorizationRules{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAuthorizationRulesResponseBody() {}

  explicit ListAuthorizationRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRules) {
      vector<boost::any> temp1;
      for(auto item1:*authorizationRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthorizationRules"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("AuthorizationRules") != m.end() && !m["AuthorizationRules"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthorizationRules"].type()) {
        vector<ListAuthorizationRulesResponseBodyAuthorizationRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthorizationRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAuthorizationRulesResponseBodyAuthorizationRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authorizationRules = make_shared<vector<ListAuthorizationRulesResponseBodyAuthorizationRules>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAuthorizationRulesResponseBody() = default;
};
class ListAuthorizationRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAuthorizationRulesResponseBody> body{};

  ListAuthorizationRulesResponse() {}

  explicit ListAuthorizationRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAuthorizationRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAuthorizationRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAuthorizationRulesResponse() = default;
};
class ListConnectionPoolAllIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionPoolId{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> ip{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};

  ListConnectionPoolAllIpsRequest() {}

  explicit ListConnectionPoolAllIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListConnectionPoolAllIpsRequest() = default;
};
class ListConnectionPoolAllIpsResponseBodyConnectionPoolIps : public Darabonba::Model {
public:
  shared_ptr<string> connectionPoolId{};
  shared_ptr<string> ip{};
  shared_ptr<long> ipNum{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListConnectionPoolAllIpsResponseBodyConnectionPoolIps() {}

  explicit ListConnectionPoolAllIpsResponseBodyConnectionPoolIps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (ipNum) {
      res["IpNum"] = boost::any(*ipNum);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("IpNum") != m.end() && !m["IpNum"].empty()) {
      ipNum = make_shared<long>(boost::any_cast<long>(m["IpNum"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListConnectionPoolAllIpsResponseBodyConnectionPoolIps() = default;
};
class ListConnectionPoolAllIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListConnectionPoolAllIpsResponseBodyConnectionPoolIps>> connectionPoolIps{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalIpsCount{};

  ListConnectionPoolAllIpsResponseBody() {}

  explicit ListConnectionPoolAllIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionPoolIps) {
      vector<boost::any> temp1;
      for(auto item1:*connectionPoolIps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectionPoolIps"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalIpsCount) {
      res["TotalIpsCount"] = boost::any(*totalIpsCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionPoolIps") != m.end() && !m["ConnectionPoolIps"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectionPoolIps"].type()) {
        vector<ListConnectionPoolAllIpsResponseBodyConnectionPoolIps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectionPoolIps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConnectionPoolAllIpsResponseBodyConnectionPoolIps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectionPoolIps = make_shared<vector<ListConnectionPoolAllIpsResponseBodyConnectionPoolIps>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalIpsCount") != m.end() && !m["TotalIpsCount"].empty()) {
      totalIpsCount = make_shared<long>(boost::any_cast<long>(m["TotalIpsCount"]));
    }
  }


  virtual ~ListConnectionPoolAllIpsResponseBody() = default;
};
class ListConnectionPoolAllIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListConnectionPoolAllIpsResponseBody> body{};

  ListConnectionPoolAllIpsResponse() {}

  explicit ListConnectionPoolAllIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListConnectionPoolAllIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConnectionPoolAllIpsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConnectionPoolAllIpsResponse() = default;
};
class ListConnectionPoolIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionPoolId{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> ip{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListConnectionPoolIpsRequest() {}

  explicit ListConnectionPoolIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListConnectionPoolIpsRequest() = default;
};
class ListConnectionPoolIpsResponseBodyConnectionPoolIps : public Darabonba::Model {
public:
  shared_ptr<string> connectionPoolId{};
  shared_ptr<string> ip{};
  shared_ptr<string> status{};

  ListConnectionPoolIpsResponseBodyConnectionPoolIps() {}

  explicit ListConnectionPoolIpsResponseBodyConnectionPoolIps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListConnectionPoolIpsResponseBodyConnectionPoolIps() = default;
};
class ListConnectionPoolIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListConnectionPoolIpsResponseBodyConnectionPoolIps>> connectionPoolIps{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListConnectionPoolIpsResponseBody() {}

  explicit ListConnectionPoolIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionPoolIps) {
      vector<boost::any> temp1;
      for(auto item1:*connectionPoolIps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectionPoolIps"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("ConnectionPoolIps") != m.end() && !m["ConnectionPoolIps"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectionPoolIps"].type()) {
        vector<ListConnectionPoolIpsResponseBodyConnectionPoolIps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectionPoolIps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConnectionPoolIpsResponseBodyConnectionPoolIps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectionPoolIps = make_shared<vector<ListConnectionPoolIpsResponseBodyConnectionPoolIps>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListConnectionPoolIpsResponseBody() = default;
};
class ListConnectionPoolIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListConnectionPoolIpsResponseBody> body{};

  ListConnectionPoolIpsResponse() {}

  explicit ListConnectionPoolIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListConnectionPoolIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConnectionPoolIpsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConnectionPoolIpsResponse() = default;
};
class ListConnectionPoolsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> connectionPoolIds{};
  shared_ptr<vector<string>> connectionPoolName{};
  shared_ptr<vector<string>> connectionPoolStatus{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListConnectionPoolsRequest() {}

  explicit ListConnectionPoolsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionPoolIds) {
      res["ConnectionPoolIds"] = boost::any(*connectionPoolIds);
    }
    if (connectionPoolName) {
      res["ConnectionPoolName"] = boost::any(*connectionPoolName);
    }
    if (connectionPoolStatus) {
      res["ConnectionPoolStatus"] = boost::any(*connectionPoolStatus);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionPoolIds") != m.end() && !m["ConnectionPoolIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ConnectionPoolIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ConnectionPoolIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      connectionPoolIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ConnectionPoolName") != m.end() && !m["ConnectionPoolName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ConnectionPoolName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ConnectionPoolName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      connectionPoolName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ConnectionPoolStatus") != m.end() && !m["ConnectionPoolStatus"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ConnectionPoolStatus"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ConnectionPoolStatus"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      connectionPoolStatus = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListConnectionPoolsRequest() = default;
};
class ListConnectionPoolsResponseBodyConnectionPools : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cidrs{};
  shared_ptr<string> connectionPoolDescription{};
  shared_ptr<string> connectionPoolId{};
  shared_ptr<string> connectionPoolName{};
  shared_ptr<string> connectionPoolStatus{};
  shared_ptr<string> operateResultRequestID{};

  ListConnectionPoolsResponseBodyConnectionPools() {}

  explicit ListConnectionPoolsResponseBodyConnectionPools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrs) {
      res["Cidrs"] = boost::any(*cidrs);
    }
    if (connectionPoolDescription) {
      res["ConnectionPoolDescription"] = boost::any(*connectionPoolDescription);
    }
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (connectionPoolName) {
      res["ConnectionPoolName"] = boost::any(*connectionPoolName);
    }
    if (connectionPoolStatus) {
      res["ConnectionPoolStatus"] = boost::any(*connectionPoolStatus);
    }
    if (operateResultRequestID) {
      res["OperateResultRequestID"] = boost::any(*operateResultRequestID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidrs") != m.end() && !m["Cidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Cidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Cidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cidrs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ConnectionPoolDescription") != m.end() && !m["ConnectionPoolDescription"].empty()) {
      connectionPoolDescription = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolDescription"]));
    }
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("ConnectionPoolName") != m.end() && !m["ConnectionPoolName"].empty()) {
      connectionPoolName = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolName"]));
    }
    if (m.find("ConnectionPoolStatus") != m.end() && !m["ConnectionPoolStatus"].empty()) {
      connectionPoolStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolStatus"]));
    }
    if (m.find("OperateResultRequestID") != m.end() && !m["OperateResultRequestID"].empty()) {
      operateResultRequestID = make_shared<string>(boost::any_cast<string>(m["OperateResultRequestID"]));
    }
  }


  virtual ~ListConnectionPoolsResponseBodyConnectionPools() = default;
};
class ListConnectionPoolsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListConnectionPoolsResponseBodyConnectionPools>> connectionPools{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListConnectionPoolsResponseBody() {}

  explicit ListConnectionPoolsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionPools) {
      vector<boost::any> temp1;
      for(auto item1:*connectionPools){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectionPools"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("ConnectionPools") != m.end() && !m["ConnectionPools"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectionPools"].type()) {
        vector<ListConnectionPoolsResponseBodyConnectionPools> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectionPools"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConnectionPoolsResponseBodyConnectionPools model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectionPools = make_shared<vector<ListConnectionPoolsResponseBodyConnectionPools>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListConnectionPoolsResponseBody() = default;
};
class ListConnectionPoolsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListConnectionPoolsResponseBody> body{};

  ListConnectionPoolsResponse() {}

  explicit ListConnectionPoolsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListConnectionPoolsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConnectionPoolsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConnectionPoolsResponse() = default;
};
class ListGroupAuthorizationRulesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authorizationRuleIds{};
  shared_ptr<vector<string>> authorizationRuleName{};
  shared_ptr<vector<string>> authorizationRuleStatus{};
  shared_ptr<vector<string>> destination{};
  shared_ptr<vector<string>> destinationType{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> policy{};
  shared_ptr<string> regionId{};

  ListGroupAuthorizationRulesRequest() {}

  explicit ListGroupAuthorizationRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleIds) {
      res["AuthorizationRuleIds"] = boost::any(*authorizationRuleIds);
    }
    if (authorizationRuleName) {
      res["AuthorizationRuleName"] = boost::any(*authorizationRuleName);
    }
    if (authorizationRuleStatus) {
      res["AuthorizationRuleStatus"] = boost::any(*authorizationRuleStatus);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleIds") != m.end() && !m["AuthorizationRuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizationRuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizationRuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationRuleIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuthorizationRuleName") != m.end() && !m["AuthorizationRuleName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizationRuleName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizationRuleName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationRuleName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuthorizationRuleStatus") != m.end() && !m["AuthorizationRuleStatus"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizationRuleStatus"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizationRuleStatus"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationRuleStatus = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Destination"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Destination"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destination = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationType = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Policy"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Policy"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policy = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListGroupAuthorizationRulesRequest() = default;
};
class ListGroupAuthorizationRulesResponseBodyGroupAuthorizationRules : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleDescription{};
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> authorizationRuleName{};
  shared_ptr<string> authorizationRuleStatus{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<string> policy{};
  shared_ptr<vector<string>> sourceCidrs{};

  ListGroupAuthorizationRulesResponseBodyGroupAuthorizationRules() {}

  explicit ListGroupAuthorizationRulesResponseBodyGroupAuthorizationRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleDescription) {
      res["AuthorizationRuleDescription"] = boost::any(*authorizationRuleDescription);
    }
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (authorizationRuleName) {
      res["AuthorizationRuleName"] = boost::any(*authorizationRuleName);
    }
    if (authorizationRuleStatus) {
      res["AuthorizationRuleStatus"] = boost::any(*authorizationRuleStatus);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (sourceCidrs) {
      res["SourceCidrs"] = boost::any(*sourceCidrs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleDescription") != m.end() && !m["AuthorizationRuleDescription"].empty()) {
      authorizationRuleDescription = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleDescription"]));
    }
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("AuthorizationRuleName") != m.end() && !m["AuthorizationRuleName"].empty()) {
      authorizationRuleName = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleName"]));
    }
    if (m.find("AuthorizationRuleStatus") != m.end() && !m["AuthorizationRuleStatus"].empty()) {
      authorizationRuleStatus = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleStatus"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("SourceCidrs") != m.end() && !m["SourceCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceCidrs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListGroupAuthorizationRulesResponseBodyGroupAuthorizationRules() = default;
};
class ListGroupAuthorizationRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupAuthorizationRulesResponseBodyGroupAuthorizationRules>> groupAuthorizationRules{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListGroupAuthorizationRulesResponseBody() {}

  explicit ListGroupAuthorizationRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupAuthorizationRules) {
      vector<boost::any> temp1;
      for(auto item1:*groupAuthorizationRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupAuthorizationRules"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("GroupAuthorizationRules") != m.end() && !m["GroupAuthorizationRules"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupAuthorizationRules"].type()) {
        vector<ListGroupAuthorizationRulesResponseBodyGroupAuthorizationRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupAuthorizationRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupAuthorizationRulesResponseBodyGroupAuthorizationRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupAuthorizationRules = make_shared<vector<ListGroupAuthorizationRulesResponseBodyGroupAuthorizationRules>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListGroupAuthorizationRulesResponseBody() = default;
};
class ListGroupAuthorizationRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGroupAuthorizationRulesResponseBody> body{};

  ListGroupAuthorizationRulesResponse() {}

  explicit ListGroupAuthorizationRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGroupAuthorizationRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupAuthorizationRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupAuthorizationRulesResponse() = default;
};
class ListIoTCloudConnectorAvailableZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  ListIoTCloudConnectorAvailableZonesRequest() {}

  explicit ListIoTCloudConnectorAvailableZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListIoTCloudConnectorAvailableZonesRequest() = default;
};
class ListIoTCloudConnectorAvailableZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> availableZoneList{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> requestId{};

  ListIoTCloudConnectorAvailableZonesResponseBody() {}

  explicit ListIoTCloudConnectorAvailableZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZoneList) {
      res["AvailableZoneList"] = boost::any(*availableZoneList);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZoneList") != m.end() && !m["AvailableZoneList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AvailableZoneList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AvailableZoneList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      availableZoneList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListIoTCloudConnectorAvailableZonesResponseBody() = default;
};
class ListIoTCloudConnectorAvailableZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListIoTCloudConnectorAvailableZonesResponseBody> body{};

  ListIoTCloudConnectorAvailableZonesResponse() {}

  explicit ListIoTCloudConnectorAvailableZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIoTCloudConnectorAvailableZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIoTCloudConnectorAvailableZonesResponseBody>(model1);
      }
    }
  }


  virtual ~ListIoTCloudConnectorAvailableZonesResponse() = default;
};
class ListIoTCloudConnectorGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ioTCloudConnectorGroupIds{};
  shared_ptr<vector<string>> ioTCloudConnectorGroupName{};
  shared_ptr<vector<string>> ioTCloudConnectorGroupStatus{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListIoTCloudConnectorGroupsRequest() {}

  explicit ListIoTCloudConnectorGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ioTCloudConnectorGroupIds) {
      res["IoTCloudConnectorGroupIds"] = boost::any(*ioTCloudConnectorGroupIds);
    }
    if (ioTCloudConnectorGroupName) {
      res["IoTCloudConnectorGroupName"] = boost::any(*ioTCloudConnectorGroupName);
    }
    if (ioTCloudConnectorGroupStatus) {
      res["IoTCloudConnectorGroupStatus"] = boost::any(*ioTCloudConnectorGroupStatus);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IoTCloudConnectorGroupIds") != m.end() && !m["IoTCloudConnectorGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IoTCloudConnectorGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IoTCloudConnectorGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ioTCloudConnectorGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IoTCloudConnectorGroupName") != m.end() && !m["IoTCloudConnectorGroupName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IoTCloudConnectorGroupName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IoTCloudConnectorGroupName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ioTCloudConnectorGroupName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IoTCloudConnectorGroupStatus") != m.end() && !m["IoTCloudConnectorGroupStatus"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IoTCloudConnectorGroupStatus"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IoTCloudConnectorGroupStatus"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ioTCloudConnectorGroupStatus = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListIoTCloudConnectorGroupsRequest() = default;
};
class ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroupsIoTCloudConnectors : public Darabonba::Model {
public:
  shared_ptr<string> APN{};
  shared_ptr<long> createTime{};
  shared_ptr<string> ISP{};
  shared_ptr<string> ioTCloudConnectorDescription{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> ioTCloudConnectorName{};
  shared_ptr<string> ioTCloudConnectorStatus{};

  ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroupsIoTCloudConnectors() {}

  explicit ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroupsIoTCloudConnectors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (APN) {
      res["APN"] = boost::any(*APN);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (ioTCloudConnectorDescription) {
      res["IoTCloudConnectorDescription"] = boost::any(*ioTCloudConnectorDescription);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (ioTCloudConnectorName) {
      res["IoTCloudConnectorName"] = boost::any(*ioTCloudConnectorName);
    }
    if (ioTCloudConnectorStatus) {
      res["IoTCloudConnectorStatus"] = boost::any(*ioTCloudConnectorStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("APN") != m.end() && !m["APN"].empty()) {
      APN = make_shared<string>(boost::any_cast<string>(m["APN"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("IoTCloudConnectorDescription") != m.end() && !m["IoTCloudConnectorDescription"].empty()) {
      ioTCloudConnectorDescription = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorDescription"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("IoTCloudConnectorName") != m.end() && !m["IoTCloudConnectorName"].empty()) {
      ioTCloudConnectorName = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorName"]));
    }
    if (m.find("IoTCloudConnectorStatus") != m.end() && !m["IoTCloudConnectorStatus"].empty()) {
      ioTCloudConnectorStatus = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorStatus"]));
    }
  }


  virtual ~ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroupsIoTCloudConnectors() = default;
};
class ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroups : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<string> ioTCloudConnectorGroupStatus{};
  shared_ptr<vector<ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroupsIoTCloudConnectors>> ioTCloudConnectors{};
  shared_ptr<string> name{};

  ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroups() {}

  explicit ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (ioTCloudConnectorGroupStatus) {
      res["IoTCloudConnectorGroupStatus"] = boost::any(*ioTCloudConnectorGroupStatus);
    }
    if (ioTCloudConnectors) {
      vector<boost::any> temp1;
      for(auto item1:*ioTCloudConnectors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IoTCloudConnectors"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("IoTCloudConnectorGroupStatus") != m.end() && !m["IoTCloudConnectorGroupStatus"].empty()) {
      ioTCloudConnectorGroupStatus = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupStatus"]));
    }
    if (m.find("IoTCloudConnectors") != m.end() && !m["IoTCloudConnectors"].empty()) {
      if (typeid(vector<boost::any>) == m["IoTCloudConnectors"].type()) {
        vector<ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroupsIoTCloudConnectors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IoTCloudConnectors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroupsIoTCloudConnectors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ioTCloudConnectors = make_shared<vector<ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroupsIoTCloudConnectors>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroups() = default;
};
class ListIoTCloudConnectorGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroups>> ioTCloudConnectorGroups{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListIoTCloudConnectorGroupsResponseBody() {}

  explicit ListIoTCloudConnectorGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ioTCloudConnectorGroups) {
      vector<boost::any> temp1;
      for(auto item1:*ioTCloudConnectorGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IoTCloudConnectorGroups"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("IoTCloudConnectorGroups") != m.end() && !m["IoTCloudConnectorGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["IoTCloudConnectorGroups"].type()) {
        vector<ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IoTCloudConnectorGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ioTCloudConnectorGroups = make_shared<vector<ListIoTCloudConnectorGroupsResponseBodyIoTCloudConnectorGroups>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListIoTCloudConnectorGroupsResponseBody() = default;
};
class ListIoTCloudConnectorGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListIoTCloudConnectorGroupsResponseBody> body{};

  ListIoTCloudConnectorGroupsResponse() {}

  explicit ListIoTCloudConnectorGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIoTCloudConnectorGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIoTCloudConnectorGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIoTCloudConnectorGroupsResponse() = default;
};
class ListIoTCloudConnectorsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> APN{};
  shared_ptr<vector<string>> ISP{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<vector<string>> ioTCloudConnectorIds{};
  shared_ptr<vector<string>> ioTCloudConnectorName{};
  shared_ptr<vector<string>> ioTCloudConnectorStatus{};
  shared_ptr<bool> isInGroup{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> vpcId{};

  ListIoTCloudConnectorsRequest() {}

  explicit ListIoTCloudConnectorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (APN) {
      res["APN"] = boost::any(*APN);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (ioTCloudConnectorIds) {
      res["IoTCloudConnectorIds"] = boost::any(*ioTCloudConnectorIds);
    }
    if (ioTCloudConnectorName) {
      res["IoTCloudConnectorName"] = boost::any(*ioTCloudConnectorName);
    }
    if (ioTCloudConnectorStatus) {
      res["IoTCloudConnectorStatus"] = boost::any(*ioTCloudConnectorStatus);
    }
    if (isInGroup) {
      res["IsInGroup"] = boost::any(*isInGroup);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("APN") != m.end() && !m["APN"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["APN"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["APN"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      APN = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ISP"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ISP"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ISP = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("IoTCloudConnectorIds") != m.end() && !m["IoTCloudConnectorIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IoTCloudConnectorIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IoTCloudConnectorIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ioTCloudConnectorIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IoTCloudConnectorName") != m.end() && !m["IoTCloudConnectorName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IoTCloudConnectorName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IoTCloudConnectorName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ioTCloudConnectorName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IoTCloudConnectorStatus") != m.end() && !m["IoTCloudConnectorStatus"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IoTCloudConnectorStatus"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IoTCloudConnectorStatus"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ioTCloudConnectorStatus = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IsInGroup") != m.end() && !m["IsInGroup"].empty()) {
      isInGroup = make_shared<bool>(boost::any_cast<bool>(m["IsInGroup"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VpcId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VpcId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpcId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListIoTCloudConnectorsRequest() = default;
};
class ListIoTCloudConnectorsResponseBodyIoTCloudConnectors : public Darabonba::Model {
public:
  shared_ptr<string> APN{};
  shared_ptr<long> createTime{};
  shared_ptr<string> ISP{};
  shared_ptr<string> ioTCloudConnectorBusinessStatus{};
  shared_ptr<string> ioTCloudConnectorDescription{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> ioTCloudConnectorName{};
  shared_ptr<string> ioTCloudConnectorStatus{};
  shared_ptr<long> modifyTime{};
  shared_ptr<long> rateLimit{};
  shared_ptr<vector<string>> vSwitchList{};
  shared_ptr<string> vpcId{};
  shared_ptr<bool> wildcardDomainEnabled{};

  ListIoTCloudConnectorsResponseBodyIoTCloudConnectors() {}

  explicit ListIoTCloudConnectorsResponseBodyIoTCloudConnectors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (APN) {
      res["APN"] = boost::any(*APN);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (ioTCloudConnectorBusinessStatus) {
      res["IoTCloudConnectorBusinessStatus"] = boost::any(*ioTCloudConnectorBusinessStatus);
    }
    if (ioTCloudConnectorDescription) {
      res["IoTCloudConnectorDescription"] = boost::any(*ioTCloudConnectorDescription);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (ioTCloudConnectorName) {
      res["IoTCloudConnectorName"] = boost::any(*ioTCloudConnectorName);
    }
    if (ioTCloudConnectorStatus) {
      res["IoTCloudConnectorStatus"] = boost::any(*ioTCloudConnectorStatus);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (rateLimit) {
      res["RateLimit"] = boost::any(*rateLimit);
    }
    if (vSwitchList) {
      res["VSwitchList"] = boost::any(*vSwitchList);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (wildcardDomainEnabled) {
      res["WildcardDomainEnabled"] = boost::any(*wildcardDomainEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("APN") != m.end() && !m["APN"].empty()) {
      APN = make_shared<string>(boost::any_cast<string>(m["APN"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("IoTCloudConnectorBusinessStatus") != m.end() && !m["IoTCloudConnectorBusinessStatus"].empty()) {
      ioTCloudConnectorBusinessStatus = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorBusinessStatus"]));
    }
    if (m.find("IoTCloudConnectorDescription") != m.end() && !m["IoTCloudConnectorDescription"].empty()) {
      ioTCloudConnectorDescription = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorDescription"]));
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("IoTCloudConnectorName") != m.end() && !m["IoTCloudConnectorName"].empty()) {
      ioTCloudConnectorName = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorName"]));
    }
    if (m.find("IoTCloudConnectorStatus") != m.end() && !m["IoTCloudConnectorStatus"].empty()) {
      ioTCloudConnectorStatus = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorStatus"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("RateLimit") != m.end() && !m["RateLimit"].empty()) {
      rateLimit = make_shared<long>(boost::any_cast<long>(m["RateLimit"]));
    }
    if (m.find("VSwitchList") != m.end() && !m["VSwitchList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("WildcardDomainEnabled") != m.end() && !m["WildcardDomainEnabled"].empty()) {
      wildcardDomainEnabled = make_shared<bool>(boost::any_cast<bool>(m["WildcardDomainEnabled"]));
    }
  }


  virtual ~ListIoTCloudConnectorsResponseBodyIoTCloudConnectors() = default;
};
class ListIoTCloudConnectorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListIoTCloudConnectorsResponseBodyIoTCloudConnectors>> ioTCloudConnectors{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListIoTCloudConnectorsResponseBody() {}

  explicit ListIoTCloudConnectorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ioTCloudConnectors) {
      vector<boost::any> temp1;
      for(auto item1:*ioTCloudConnectors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IoTCloudConnectors"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("IoTCloudConnectors") != m.end() && !m["IoTCloudConnectors"].empty()) {
      if (typeid(vector<boost::any>) == m["IoTCloudConnectors"].type()) {
        vector<ListIoTCloudConnectorsResponseBodyIoTCloudConnectors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IoTCloudConnectors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIoTCloudConnectorsResponseBodyIoTCloudConnectors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ioTCloudConnectors = make_shared<vector<ListIoTCloudConnectorsResponseBodyIoTCloudConnectors>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListIoTCloudConnectorsResponseBody() = default;
};
class ListIoTCloudConnectorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListIoTCloudConnectorsResponseBody> body{};

  ListIoTCloudConnectorsResponse() {}

  explicit ListIoTCloudConnectorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIoTCloudConnectorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIoTCloudConnectorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIoTCloudConnectorsResponse() = default;
};
class ListRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> regionId{};

  ListRegionsRequest() {}

  explicit ListRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListRegionsRequest() = default;
};
class ListRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  ListRegionsResponseBodyRegions() {}

  explicit ListRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListRegionsResponseBodyRegions() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<ListRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<ListRegionsResponseBodyRegions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRegionsResponseBody() = default;
};
class ListRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionsResponse() = default;
};
class ListServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceStatuses{};
  shared_ptr<vector<string>> serviceIds{};
  shared_ptr<vector<string>> serviceNames{};

  ListServiceRequest() {}

  explicit ListServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceStatuses) {
      res["ResourceStatuses"] = boost::any(*resourceStatuses);
    }
    if (serviceIds) {
      res["ServiceIds"] = boost::any(*serviceIds);
    }
    if (serviceNames) {
      res["ServiceNames"] = boost::any(*serviceNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceStatuses") != m.end() && !m["ResourceStatuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceStatuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceStatuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceStatuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceIds") != m.end() && !m["ServiceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServiceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServiceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceNames") != m.end() && !m["ServiceNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServiceNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServiceNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListServiceRequest() = default;
};
class ListServiceResponseBodyServices : public Darabonba::Model {
public:
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceStatus{};

  ListServiceResponseBodyServices() {}

  explicit ListServiceResponseBodyServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (serviceDescription) {
      res["ServiceDescription"] = boost::any(*serviceDescription);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("ServiceDescription") != m.end() && !m["ServiceDescription"].empty()) {
      serviceDescription = make_shared<string>(boost::any_cast<string>(m["ServiceDescription"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
  }


  virtual ~ListServiceResponseBodyServices() = default;
};
class ListServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceResponseBodyServices>> services{};
  shared_ptr<long> totalCount{};

  ListServiceResponseBody() {}

  explicit ListServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Services"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<ListServiceResponseBodyServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceResponseBodyServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<ListServiceResponseBodyServices>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServiceResponseBody() = default;
};
class ListServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListServiceResponseBody> body{};

  ListServiceResponse() {}

  explicit ListServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceResponse() = default;
};
class ListServiceEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> serviceEntryIds{};
  shared_ptr<vector<string>> serviceEntryName{};
  shared_ptr<vector<string>> serviceEntryStatus{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<string>> target{};
  shared_ptr<vector<string>> targetType{};

  ListServiceEntriesRequest() {}

  explicit ListServiceEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceEntryIds) {
      res["ServiceEntryIds"] = boost::any(*serviceEntryIds);
    }
    if (serviceEntryName) {
      res["ServiceEntryName"] = boost::any(*serviceEntryName);
    }
    if (serviceEntryStatus) {
      res["ServiceEntryStatus"] = boost::any(*serviceEntryStatus);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceEntryIds") != m.end() && !m["ServiceEntryIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServiceEntryIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServiceEntryIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceEntryIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceEntryName") != m.end() && !m["ServiceEntryName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServiceEntryName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServiceEntryName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceEntryName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceEntryStatus") != m.end() && !m["ServiceEntryStatus"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServiceEntryStatus"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServiceEntryStatus"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceEntryStatus = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Target"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Target"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      target = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TargetType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TargetType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targetType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListServiceEntriesRequest() = default;
};
class ListServiceEntriesResponseBodyServiceEntries : public Darabonba::Model {
public:
  shared_ptr<string> serviceEntryDescription{};
  shared_ptr<string> serviceEntryId{};
  shared_ptr<string> serviceEntryName{};
  shared_ptr<string> serviceEntryStatus{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> target{};
  shared_ptr<string> targetType{};

  ListServiceEntriesResponseBodyServiceEntries() {}

  explicit ListServiceEntriesResponseBodyServiceEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceEntryDescription) {
      res["ServiceEntryDescription"] = boost::any(*serviceEntryDescription);
    }
    if (serviceEntryId) {
      res["ServiceEntryId"] = boost::any(*serviceEntryId);
    }
    if (serviceEntryName) {
      res["ServiceEntryName"] = boost::any(*serviceEntryName);
    }
    if (serviceEntryStatus) {
      res["ServiceEntryStatus"] = boost::any(*serviceEntryStatus);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceEntryDescription") != m.end() && !m["ServiceEntryDescription"].empty()) {
      serviceEntryDescription = make_shared<string>(boost::any_cast<string>(m["ServiceEntryDescription"]));
    }
    if (m.find("ServiceEntryId") != m.end() && !m["ServiceEntryId"].empty()) {
      serviceEntryId = make_shared<string>(boost::any_cast<string>(m["ServiceEntryId"]));
    }
    if (m.find("ServiceEntryName") != m.end() && !m["ServiceEntryName"].empty()) {
      serviceEntryName = make_shared<string>(boost::any_cast<string>(m["ServiceEntryName"]));
    }
    if (m.find("ServiceEntryStatus") != m.end() && !m["ServiceEntryStatus"].empty()) {
      serviceEntryStatus = make_shared<string>(boost::any_cast<string>(m["ServiceEntryStatus"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~ListServiceEntriesResponseBodyServiceEntries() = default;
};
class ListServiceEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceEntriesResponseBodyServiceEntries>> serviceEntries{};
  shared_ptr<long> totalCount{};

  ListServiceEntriesResponseBody() {}

  explicit ListServiceEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceEntries) {
      vector<boost::any> temp1;
      for(auto item1:*serviceEntries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceEntries"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceEntries") != m.end() && !m["ServiceEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceEntries"].type()) {
        vector<ListServiceEntriesResponseBodyServiceEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceEntries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceEntriesResponseBodyServiceEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceEntries = make_shared<vector<ListServiceEntriesResponseBodyServiceEntries>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServiceEntriesResponseBody() = default;
};
class ListServiceEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListServiceEntriesResponseBody> body{};

  ListServiceEntriesResponse() {}

  explicit ListServiceEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServiceEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceEntriesResponse() = default;
};
class OpenIoTCloudConnectorServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  OpenIoTCloudConnectorServiceRequest() {}

  explicit OpenIoTCloudConnectorServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenIoTCloudConnectorServiceRequest() = default;
};
class OpenIoTCloudConnectorServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OpenIoTCloudConnectorServiceResponseBody() {}

  explicit OpenIoTCloudConnectorServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenIoTCloudConnectorServiceResponseBody() = default;
};
class OpenIoTCloudConnectorServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OpenIoTCloudConnectorServiceResponseBody> body{};

  OpenIoTCloudConnectorServiceResponse() {}

  explicit OpenIoTCloudConnectorServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OpenIoTCloudConnectorServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenIoTCloudConnectorServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenIoTCloudConnectorServiceResponse() = default;
};
class RemoveIoTCloudConnectorFromGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<vector<string>> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  RemoveIoTCloudConnectorFromGroupRequest() {}

  explicit RemoveIoTCloudConnectorFromGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
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
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IoTCloudConnectorId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IoTCloudConnectorId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ioTCloudConnectorId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~RemoveIoTCloudConnectorFromGroupRequest() = default;
};
class RemoveIoTCloudConnectorFromGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveIoTCloudConnectorFromGroupResponseBody() {}

  explicit RemoveIoTCloudConnectorFromGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveIoTCloudConnectorFromGroupResponseBody() = default;
};
class RemoveIoTCloudConnectorFromGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveIoTCloudConnectorFromGroupResponseBody> body{};

  RemoveIoTCloudConnectorFromGroupResponse() {}

  explicit RemoveIoTCloudConnectorFromGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveIoTCloudConnectorFromGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveIoTCloudConnectorFromGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveIoTCloudConnectorFromGroupResponse() = default;
};
class UpdateAuthorizationRuleAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleDescription{};
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> authorizationRuleName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> policy{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> sourceCidrs{};

  UpdateAuthorizationRuleAttributeRequest() {}

  explicit UpdateAuthorizationRuleAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleDescription) {
      res["AuthorizationRuleDescription"] = boost::any(*authorizationRuleDescription);
    }
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (authorizationRuleName) {
      res["AuthorizationRuleName"] = boost::any(*authorizationRuleName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceCidrs) {
      res["SourceCidrs"] = boost::any(*sourceCidrs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleDescription") != m.end() && !m["AuthorizationRuleDescription"].empty()) {
      authorizationRuleDescription = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleDescription"]));
    }
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("AuthorizationRuleName") != m.end() && !m["AuthorizationRuleName"].empty()) {
      authorizationRuleName = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceCidrs") != m.end() && !m["SourceCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceCidrs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateAuthorizationRuleAttributeRequest() = default;
};
class UpdateAuthorizationRuleAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAuthorizationRuleAttributeResponseBody() {}

  explicit UpdateAuthorizationRuleAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAuthorizationRuleAttributeResponseBody() = default;
};
class UpdateAuthorizationRuleAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAuthorizationRuleAttributeResponseBody> body{};

  UpdateAuthorizationRuleAttributeResponse() {}

  explicit UpdateAuthorizationRuleAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAuthorizationRuleAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAuthorizationRuleAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAuthorizationRuleAttributeResponse() = default;
};
class UpdateConnectionPoolAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> cidrs{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> connectionPoolDescription{};
  shared_ptr<string> connectionPoolId{};
  shared_ptr<string> connectionPoolName{};
  shared_ptr<long> count{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};

  UpdateConnectionPoolAttributeRequest() {}

  explicit UpdateConnectionPoolAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrs) {
      res["Cidrs"] = boost::any(*cidrs);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionPoolDescription) {
      res["ConnectionPoolDescription"] = boost::any(*connectionPoolDescription);
    }
    if (connectionPoolId) {
      res["ConnectionPoolId"] = boost::any(*connectionPoolId);
    }
    if (connectionPoolName) {
      res["ConnectionPoolName"] = boost::any(*connectionPoolName);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidrs") != m.end() && !m["Cidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Cidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Cidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cidrs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConnectionPoolDescription") != m.end() && !m["ConnectionPoolDescription"].empty()) {
      connectionPoolDescription = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolDescription"]));
    }
    if (m.find("ConnectionPoolId") != m.end() && !m["ConnectionPoolId"].empty()) {
      connectionPoolId = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolId"]));
    }
    if (m.find("ConnectionPoolName") != m.end() && !m["ConnectionPoolName"].empty()) {
      connectionPoolName = make_shared<string>(boost::any_cast<string>(m["ConnectionPoolName"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateConnectionPoolAttributeRequest() = default;
};
class UpdateConnectionPoolAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateConnectionPoolAttributeResponseBody() {}

  explicit UpdateConnectionPoolAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateConnectionPoolAttributeResponseBody() = default;
};
class UpdateConnectionPoolAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateConnectionPoolAttributeResponseBody> body{};

  UpdateConnectionPoolAttributeResponse() {}

  explicit UpdateConnectionPoolAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateConnectionPoolAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConnectionPoolAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConnectionPoolAttributeResponse() = default;
};
class UpdateGroupAuthorizationRuleAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleDescription{};
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> authorizationRuleName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<string> policy{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> sourceCidrs{};

  UpdateGroupAuthorizationRuleAttributeRequest() {}

  explicit UpdateGroupAuthorizationRuleAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleDescription) {
      res["AuthorizationRuleDescription"] = boost::any(*authorizationRuleDescription);
    }
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (authorizationRuleName) {
      res["AuthorizationRuleName"] = boost::any(*authorizationRuleName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceCidrs) {
      res["SourceCidrs"] = boost::any(*sourceCidrs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleDescription") != m.end() && !m["AuthorizationRuleDescription"].empty()) {
      authorizationRuleDescription = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleDescription"]));
    }
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("AuthorizationRuleName") != m.end() && !m["AuthorizationRuleName"].empty()) {
      authorizationRuleName = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceCidrs") != m.end() && !m["SourceCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceCidrs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateGroupAuthorizationRuleAttributeRequest() = default;
};
class UpdateGroupAuthorizationRuleAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<string> requestId{};

  UpdateGroupAuthorizationRuleAttributeResponseBody() {}

  explicit UpdateGroupAuthorizationRuleAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateGroupAuthorizationRuleAttributeResponseBody() = default;
};
class UpdateGroupAuthorizationRuleAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateGroupAuthorizationRuleAttributeResponseBody> body{};

  UpdateGroupAuthorizationRuleAttributeResponse() {}

  explicit UpdateGroupAuthorizationRuleAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGroupAuthorizationRuleAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupAuthorizationRuleAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupAuthorizationRuleAttributeResponse() = default;
};
class UpdateIoTCloudConnectorAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorDescription{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> ioTCloudConnectorName{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> wildcardDomainEnabled{};

  UpdateIoTCloudConnectorAttributeRequest() {}

  explicit UpdateIoTCloudConnectorAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorDescription) {
      res["IoTCloudConnectorDescription"] = boost::any(*ioTCloudConnectorDescription);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (ioTCloudConnectorName) {
      res["IoTCloudConnectorName"] = boost::any(*ioTCloudConnectorName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (wildcardDomainEnabled) {
      res["WildcardDomainEnabled"] = boost::any(*wildcardDomainEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorDescription") != m.end() && !m["IoTCloudConnectorDescription"].empty()) {
      ioTCloudConnectorDescription = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorDescription"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("IoTCloudConnectorName") != m.end() && !m["IoTCloudConnectorName"].empty()) {
      ioTCloudConnectorName = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WildcardDomainEnabled") != m.end() && !m["WildcardDomainEnabled"].empty()) {
      wildcardDomainEnabled = make_shared<bool>(boost::any_cast<bool>(m["WildcardDomainEnabled"]));
    }
  }


  virtual ~UpdateIoTCloudConnectorAttributeRequest() = default;
};
class UpdateIoTCloudConnectorAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};

  UpdateIoTCloudConnectorAttributeResponseBody() {}

  explicit UpdateIoTCloudConnectorAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~UpdateIoTCloudConnectorAttributeResponseBody() = default;
};
class UpdateIoTCloudConnectorAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateIoTCloudConnectorAttributeResponseBody> body{};

  UpdateIoTCloudConnectorAttributeResponse() {}

  explicit UpdateIoTCloudConnectorAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateIoTCloudConnectorAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIoTCloudConnectorAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIoTCloudConnectorAttributeResponse() = default;
};
class UpdateIoTCloudConnectorGroupAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorGroupId{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  UpdateIoTCloudConnectorGroupAttributeRequest() {}

  explicit UpdateIoTCloudConnectorGroupAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorGroupId) {
      res["IoTCloudConnectorGroupId"] = boost::any(*ioTCloudConnectorGroupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorGroupId") != m.end() && !m["IoTCloudConnectorGroupId"].empty()) {
      ioTCloudConnectorGroupId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateIoTCloudConnectorGroupAttributeRequest() = default;
};
class UpdateIoTCloudConnectorGroupAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateIoTCloudConnectorGroupAttributeResponseBody() {}

  explicit UpdateIoTCloudConnectorGroupAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateIoTCloudConnectorGroupAttributeResponseBody() = default;
};
class UpdateIoTCloudConnectorGroupAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateIoTCloudConnectorGroupAttributeResponseBody> body{};

  UpdateIoTCloudConnectorGroupAttributeResponse() {}

  explicit UpdateIoTCloudConnectorGroupAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateIoTCloudConnectorGroupAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIoTCloudConnectorGroupAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIoTCloudConnectorGroupAttributeResponse() = default;
};
class UpdateServiceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};

  UpdateServiceAttributeRequest() {}

  explicit UpdateServiceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceDescription) {
      res["ServiceDescription"] = boost::any(*serviceDescription);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceDescription") != m.end() && !m["ServiceDescription"].empty()) {
      serviceDescription = make_shared<string>(boost::any_cast<string>(m["ServiceDescription"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~UpdateServiceAttributeRequest() = default;
};
class UpdateServiceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateServiceAttributeResponseBody() {}

  explicit UpdateServiceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateServiceAttributeResponseBody() = default;
};
class UpdateServiceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateServiceAttributeResponseBody> body{};

  UpdateServiceAttributeResponse() {}

  explicit UpdateServiceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceAttributeResponse() = default;
};
class UpdateServiceEntryAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ioTCloudConnectorId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceEntryDescription{};
  shared_ptr<string> serviceEntryId{};
  shared_ptr<string> serviceEntryName{};
  shared_ptr<string> serviceId{};

  UpdateServiceEntryAttributeRequest() {}

  explicit UpdateServiceEntryAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ioTCloudConnectorId) {
      res["IoTCloudConnectorId"] = boost::any(*ioTCloudConnectorId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceEntryDescription) {
      res["ServiceEntryDescription"] = boost::any(*serviceEntryDescription);
    }
    if (serviceEntryId) {
      res["ServiceEntryId"] = boost::any(*serviceEntryId);
    }
    if (serviceEntryName) {
      res["ServiceEntryName"] = boost::any(*serviceEntryName);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IoTCloudConnectorId") != m.end() && !m["IoTCloudConnectorId"].empty()) {
      ioTCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["IoTCloudConnectorId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceEntryDescription") != m.end() && !m["ServiceEntryDescription"].empty()) {
      serviceEntryDescription = make_shared<string>(boost::any_cast<string>(m["ServiceEntryDescription"]));
    }
    if (m.find("ServiceEntryId") != m.end() && !m["ServiceEntryId"].empty()) {
      serviceEntryId = make_shared<string>(boost::any_cast<string>(m["ServiceEntryId"]));
    }
    if (m.find("ServiceEntryName") != m.end() && !m["ServiceEntryName"].empty()) {
      serviceEntryName = make_shared<string>(boost::any_cast<string>(m["ServiceEntryName"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~UpdateServiceEntryAttributeRequest() = default;
};
class UpdateServiceEntryAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateServiceEntryAttributeResponseBody() {}

  explicit UpdateServiceEntryAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateServiceEntryAttributeResponseBody() = default;
};
class UpdateServiceEntryAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateServiceEntryAttributeResponseBody> body{};

  UpdateServiceEntryAttributeResponse() {}

  explicit UpdateServiceEntryAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceEntryAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceEntryAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceEntryAttributeResponse() = default;
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
  AddCidrToConnectionPoolResponse addCidrToConnectionPoolWithOptions(shared_ptr<AddCidrToConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddCidrToConnectionPoolResponse addCidrToConnectionPool(shared_ptr<AddCidrToConnectionPoolRequest> request);
  AddIoTCloudConnectorToGroupResponse addIoTCloudConnectorToGroupWithOptions(shared_ptr<AddIoTCloudConnectorToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddIoTCloudConnectorToGroupResponse addIoTCloudConnectorToGroup(shared_ptr<AddIoTCloudConnectorToGroupRequest> request);
  AssociateIpWithConnectionPoolResponse associateIpWithConnectionPoolWithOptions(shared_ptr<AssociateIpWithConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateIpWithConnectionPoolResponse associateIpWithConnectionPool(shared_ptr<AssociateIpWithConnectionPoolRequest> request);
  AssociateVSwitchWithIoTCloudConnectorResponse associateVSwitchWithIoTCloudConnectorWithOptions(shared_ptr<AssociateVSwitchWithIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateVSwitchWithIoTCloudConnectorResponse associateVSwitchWithIoTCloudConnector(shared_ptr<AssociateVSwitchWithIoTCloudConnectorRequest> request);
  CreateAuthorizationRuleResponse createAuthorizationRuleWithOptions(shared_ptr<CreateAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAuthorizationRuleResponse createAuthorizationRule(shared_ptr<CreateAuthorizationRuleRequest> request);
  CreateConnectionPoolResponse createConnectionPoolWithOptions(shared_ptr<CreateConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConnectionPoolResponse createConnectionPool(shared_ptr<CreateConnectionPoolRequest> request);
  CreateGroupAuthorizationRuleResponse createGroupAuthorizationRuleWithOptions(shared_ptr<CreateGroupAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupAuthorizationRuleResponse createGroupAuthorizationRule(shared_ptr<CreateGroupAuthorizationRuleRequest> request);
  CreateIoTCloudConnectorResponse createIoTCloudConnectorWithOptions(shared_ptr<CreateIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIoTCloudConnectorResponse createIoTCloudConnector(shared_ptr<CreateIoTCloudConnectorRequest> request);
  CreateIoTCloudConnectorGroupResponse createIoTCloudConnectorGroupWithOptions(shared_ptr<CreateIoTCloudConnectorGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIoTCloudConnectorGroupResponse createIoTCloudConnectorGroup(shared_ptr<CreateIoTCloudConnectorGroupRequest> request);
  CreateServiceResponse createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceResponse createService(shared_ptr<CreateServiceRequest> request);
  CreateServiceEntryResponse createServiceEntryWithOptions(shared_ptr<CreateServiceEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceEntryResponse createServiceEntry(shared_ptr<CreateServiceEntryRequest> request);
  DeleteAuthorizationRuleResponse deleteAuthorizationRuleWithOptions(shared_ptr<DeleteAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAuthorizationRuleResponse deleteAuthorizationRule(shared_ptr<DeleteAuthorizationRuleRequest> request);
  DeleteConnectionPoolResponse deleteConnectionPoolWithOptions(shared_ptr<DeleteConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConnectionPoolResponse deleteConnectionPool(shared_ptr<DeleteConnectionPoolRequest> request);
  DeleteGroupAuthorizationRuleResponse deleteGroupAuthorizationRuleWithOptions(shared_ptr<DeleteGroupAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupAuthorizationRuleResponse deleteGroupAuthorizationRule(shared_ptr<DeleteGroupAuthorizationRuleRequest> request);
  DeleteIoTCloudConnectorResponse deleteIoTCloudConnectorWithOptions(shared_ptr<DeleteIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIoTCloudConnectorResponse deleteIoTCloudConnector(shared_ptr<DeleteIoTCloudConnectorRequest> request);
  DeleteIoTCloudConnectorGroupResponse deleteIoTCloudConnectorGroupWithOptions(shared_ptr<DeleteIoTCloudConnectorGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIoTCloudConnectorGroupResponse deleteIoTCloudConnectorGroup(shared_ptr<DeleteIoTCloudConnectorGroupRequest> request);
  DeleteServiceResponse deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceResponse deleteService(shared_ptr<DeleteServiceRequest> request);
  DeleteServiceEntryResponse deleteServiceEntryWithOptions(shared_ptr<DeleteServiceEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceEntryResponse deleteServiceEntry(shared_ptr<DeleteServiceEntryRequest> request);
  DisableIoTCloudConnectorAccessLogResponse disableIoTCloudConnectorAccessLogWithOptions(shared_ptr<DisableIoTCloudConnectorAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableIoTCloudConnectorAccessLogResponse disableIoTCloudConnectorAccessLog(shared_ptr<DisableIoTCloudConnectorAccessLogRequest> request);
  DissociateIpFromConnectionPoolResponse dissociateIpFromConnectionPoolWithOptions(shared_ptr<DissociateIpFromConnectionPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateIpFromConnectionPoolResponse dissociateIpFromConnectionPool(shared_ptr<DissociateIpFromConnectionPoolRequest> request);
  DissociateVSwitchFromIoTCloudConnectorResponse dissociateVSwitchFromIoTCloudConnectorWithOptions(shared_ptr<DissociateVSwitchFromIoTCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DissociateVSwitchFromIoTCloudConnectorResponse dissociateVSwitchFromIoTCloudConnector(shared_ptr<DissociateVSwitchFromIoTCloudConnectorRequest> request);
  EnableIoTCloudConnectorAccessLogResponse enableIoTCloudConnectorAccessLogWithOptions(shared_ptr<EnableIoTCloudConnectorAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableIoTCloudConnectorAccessLogResponse enableIoTCloudConnectorAccessLog(shared_ptr<EnableIoTCloudConnectorAccessLogRequest> request);
  GetConnectionPoolIpOperationResultResponse getConnectionPoolIpOperationResultWithOptions(shared_ptr<GetConnectionPoolIpOperationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConnectionPoolIpOperationResultResponse getConnectionPoolIpOperationResult(shared_ptr<GetConnectionPoolIpOperationResultRequest> request);
  GetIoTCloudConnectorAccessLogResponse getIoTCloudConnectorAccessLogWithOptions(shared_ptr<GetIoTCloudConnectorAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIoTCloudConnectorAccessLogResponse getIoTCloudConnectorAccessLog(shared_ptr<GetIoTCloudConnectorAccessLogRequest> request);
  GetStsInfoAndOssPathResponse getStsInfoAndOssPathWithOptions(shared_ptr<GetStsInfoAndOssPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStsInfoAndOssPathResponse getStsInfoAndOssPath(shared_ptr<GetStsInfoAndOssPathRequest> request);
  GrantVirtualBorderRouterResponse grantVirtualBorderRouterWithOptions(shared_ptr<GrantVirtualBorderRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantVirtualBorderRouterResponse grantVirtualBorderRouter(shared_ptr<GrantVirtualBorderRouterRequest> request);
  ListAPNsResponse listAPNsWithOptions(shared_ptr<ListAPNsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAPNsResponse listAPNs(shared_ptr<ListAPNsRequest> request);
  ListAuthorizationRulesResponse listAuthorizationRulesWithOptions(shared_ptr<ListAuthorizationRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAuthorizationRulesResponse listAuthorizationRules(shared_ptr<ListAuthorizationRulesRequest> request);
  ListConnectionPoolAllIpsResponse listConnectionPoolAllIpsWithOptions(shared_ptr<ListConnectionPoolAllIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConnectionPoolAllIpsResponse listConnectionPoolAllIps(shared_ptr<ListConnectionPoolAllIpsRequest> request);
  ListConnectionPoolIpsResponse listConnectionPoolIpsWithOptions(shared_ptr<ListConnectionPoolIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConnectionPoolIpsResponse listConnectionPoolIps(shared_ptr<ListConnectionPoolIpsRequest> request);
  ListConnectionPoolsResponse listConnectionPoolsWithOptions(shared_ptr<ListConnectionPoolsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConnectionPoolsResponse listConnectionPools(shared_ptr<ListConnectionPoolsRequest> request);
  ListGroupAuthorizationRulesResponse listGroupAuthorizationRulesWithOptions(shared_ptr<ListGroupAuthorizationRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupAuthorizationRulesResponse listGroupAuthorizationRules(shared_ptr<ListGroupAuthorizationRulesRequest> request);
  ListIoTCloudConnectorAvailableZonesResponse listIoTCloudConnectorAvailableZonesWithOptions(shared_ptr<ListIoTCloudConnectorAvailableZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIoTCloudConnectorAvailableZonesResponse listIoTCloudConnectorAvailableZones(shared_ptr<ListIoTCloudConnectorAvailableZonesRequest> request);
  ListIoTCloudConnectorGroupsResponse listIoTCloudConnectorGroupsWithOptions(shared_ptr<ListIoTCloudConnectorGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIoTCloudConnectorGroupsResponse listIoTCloudConnectorGroups(shared_ptr<ListIoTCloudConnectorGroupsRequest> request);
  ListIoTCloudConnectorsResponse listIoTCloudConnectorsWithOptions(shared_ptr<ListIoTCloudConnectorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIoTCloudConnectorsResponse listIoTCloudConnectors(shared_ptr<ListIoTCloudConnectorsRequest> request);
  ListRegionsResponse listRegionsWithOptions(shared_ptr<ListRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions(shared_ptr<ListRegionsRequest> request);
  ListServiceResponse listServiceWithOptions(shared_ptr<ListServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceResponse listService(shared_ptr<ListServiceRequest> request);
  ListServiceEntriesResponse listServiceEntriesWithOptions(shared_ptr<ListServiceEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceEntriesResponse listServiceEntries(shared_ptr<ListServiceEntriesRequest> request);
  OpenIoTCloudConnectorServiceResponse openIoTCloudConnectorServiceWithOptions(shared_ptr<OpenIoTCloudConnectorServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenIoTCloudConnectorServiceResponse openIoTCloudConnectorService(shared_ptr<OpenIoTCloudConnectorServiceRequest> request);
  RemoveIoTCloudConnectorFromGroupResponse removeIoTCloudConnectorFromGroupWithOptions(shared_ptr<RemoveIoTCloudConnectorFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveIoTCloudConnectorFromGroupResponse removeIoTCloudConnectorFromGroup(shared_ptr<RemoveIoTCloudConnectorFromGroupRequest> request);
  UpdateAuthorizationRuleAttributeResponse updateAuthorizationRuleAttributeWithOptions(shared_ptr<UpdateAuthorizationRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAuthorizationRuleAttributeResponse updateAuthorizationRuleAttribute(shared_ptr<UpdateAuthorizationRuleAttributeRequest> request);
  UpdateConnectionPoolAttributeResponse updateConnectionPoolAttributeWithOptions(shared_ptr<UpdateConnectionPoolAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConnectionPoolAttributeResponse updateConnectionPoolAttribute(shared_ptr<UpdateConnectionPoolAttributeRequest> request);
  UpdateGroupAuthorizationRuleAttributeResponse updateGroupAuthorizationRuleAttributeWithOptions(shared_ptr<UpdateGroupAuthorizationRuleAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupAuthorizationRuleAttributeResponse updateGroupAuthorizationRuleAttribute(shared_ptr<UpdateGroupAuthorizationRuleAttributeRequest> request);
  UpdateIoTCloudConnectorAttributeResponse updateIoTCloudConnectorAttributeWithOptions(shared_ptr<UpdateIoTCloudConnectorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIoTCloudConnectorAttributeResponse updateIoTCloudConnectorAttribute(shared_ptr<UpdateIoTCloudConnectorAttributeRequest> request);
  UpdateIoTCloudConnectorGroupAttributeResponse updateIoTCloudConnectorGroupAttributeWithOptions(shared_ptr<UpdateIoTCloudConnectorGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIoTCloudConnectorGroupAttributeResponse updateIoTCloudConnectorGroupAttribute(shared_ptr<UpdateIoTCloudConnectorGroupAttributeRequest> request);
  UpdateServiceAttributeResponse updateServiceAttributeWithOptions(shared_ptr<UpdateServiceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceAttributeResponse updateServiceAttribute(shared_ptr<UpdateServiceAttributeRequest> request);
  UpdateServiceEntryAttributeResponse updateServiceEntryAttributeWithOptions(shared_ptr<UpdateServiceEntryAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceEntryAttributeResponse updateServiceEntryAttribute(shared_ptr<UpdateServiceEntryAttributeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_IoTCC20210513

#endif
