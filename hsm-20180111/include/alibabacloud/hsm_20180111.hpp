// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_HSM20180111_H_
#define ALIBABACLOUD_HSM20180111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Hsm20180111 {
class ActiveClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  ActiveClusterRequest() {}

  explicit ActiveClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~ActiveClusterRequest() = default;
};
class ActiveClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ActiveClusterResponseBody() {}

  explicit ActiveClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ActiveClusterResponseBody() = default;
};
class ActiveClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ActiveClusterResponseBody> body{};

  ActiveClusterResponse() {}

  explicit ActiveClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActiveClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActiveClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ActiveClusterResponse() = default;
};
class AddInstancesToClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<map<string, boost::any>> hsmInstanceIds{};

  AddInstancesToClusterRequest() {}

  explicit AddInstancesToClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hsmInstanceIds) {
      res["HsmInstanceIds"] = boost::any(*hsmInstanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HsmInstanceIds") != m.end() && !m["HsmInstanceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["HsmInstanceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      hsmInstanceIds = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~AddInstancesToClusterRequest() = default;
};
class AddInstancesToClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> hsmInstanceIdsShrink{};

  AddInstancesToClusterShrinkRequest() {}

  explicit AddInstancesToClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hsmInstanceIdsShrink) {
      res["HsmInstanceIds"] = boost::any(*hsmInstanceIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HsmInstanceIds") != m.end() && !m["HsmInstanceIds"].empty()) {
      hsmInstanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["HsmInstanceIds"]));
    }
  }


  virtual ~AddInstancesToClusterShrinkRequest() = default;
};
class AddInstancesToClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddInstancesToClusterResponseBody() {}

  explicit AddInstancesToClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddInstancesToClusterResponseBody() = default;
};
class AddInstancesToClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddInstancesToClusterResponseBody> body{};

  AddInstancesToClusterResponse() {}

  explicit AddInstancesToClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddInstancesToClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddInstancesToClusterResponseBody>(model1);
      }
    }
  }


  virtual ~AddInstancesToClusterResponse() = default;
};
class ConfigAuditLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditAction{};
  shared_ptr<string> configOssBucket{};
  shared_ptr<string> regionNo{};

  ConfigAuditLogRequest() {}

  explicit ConfigAuditLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditAction) {
      res["AuditAction"] = boost::any(*auditAction);
    }
    if (configOssBucket) {
      res["ConfigOssBucket"] = boost::any(*configOssBucket);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditAction") != m.end() && !m["AuditAction"].empty()) {
      auditAction = make_shared<string>(boost::any_cast<string>(m["AuditAction"]));
    }
    if (m.find("ConfigOssBucket") != m.end() && !m["ConfigOssBucket"].empty()) {
      configOssBucket = make_shared<string>(boost::any_cast<string>(m["ConfigOssBucket"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
  }


  virtual ~ConfigAuditLogRequest() = default;
};
class ConfigAuditLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigAuditLogResponseBody() {}

  explicit ConfigAuditLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigAuditLogResponseBody() = default;
};
class ConfigAuditLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigAuditLogResponseBody> body{};

  ConfigAuditLogResponse() {}

  explicit ConfigAuditLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigAuditLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigAuditLogResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigAuditLogResponse() = default;
};
class ConfigClusterMasterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceId{};

  ConfigClusterMasterRequest() {}

  explicit ConfigClusterMasterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ConfigClusterMasterRequest() = default;
};
class ConfigClusterMasterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigClusterMasterResponseBody() {}

  explicit ConfigClusterMasterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigClusterMasterResponseBody() = default;
};
class ConfigClusterMasterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigClusterMasterResponseBody> body{};

  ConfigClusterMasterResponse() {}

  explicit ConfigClusterMasterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigClusterMasterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigClusterMasterResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigClusterMasterResponse() = default;
};
class ConfigNetworkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<string> lang{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  ConfigNetworkRequest() {}

  explicit ConfigNetworkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ConfigNetworkRequest() = default;
};
class ConfigNetworkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigNetworkResponseBody() {}

  explicit ConfigNetworkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigNetworkResponseBody() = default;
};
class ConfigNetworkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigNetworkResponseBody> body{};

  ConfigNetworkResponse() {}

  explicit ConfigNetworkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigNetworkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigNetworkResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigNetworkResponse() = default;
};
class ConfigNewClusterWithInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ifTrial{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vsmType{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  ConfigNewClusterWithInstanceRequest() {}

  explicit ConfigNewClusterWithInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ifTrial) {
      res["IfTrial"] = boost::any(*ifTrial);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vsmType) {
      res["VsmType"] = boost::any(*vsmType);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IfTrial") != m.end() && !m["IfTrial"].empty()) {
      ifTrial = make_shared<bool>(boost::any_cast<bool>(m["IfTrial"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VsmType") != m.end() && !m["VsmType"].empty()) {
      vsmType = make_shared<string>(boost::any_cast<string>(m["VsmType"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ConfigNewClusterWithInstanceRequest() = default;
};
class ConfigNewClusterWithInstanceResponseBodyClustersCertificates : public Darabonba::Model {
public:
  shared_ptr<string> clusterCertificate{};
  shared_ptr<string> clusterCsr{};
  shared_ptr<string> clusterOwnerCertificate{};

  ConfigNewClusterWithInstanceResponseBodyClustersCertificates() {}

  explicit ConfigNewClusterWithInstanceResponseBodyClustersCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterCertificate) {
      res["ClusterCertificate"] = boost::any(*clusterCertificate);
    }
    if (clusterCsr) {
      res["ClusterCsr"] = boost::any(*clusterCsr);
    }
    if (clusterOwnerCertificate) {
      res["ClusterOwnerCertificate"] = boost::any(*clusterOwnerCertificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterCertificate") != m.end() && !m["ClusterCertificate"].empty()) {
      clusterCertificate = make_shared<string>(boost::any_cast<string>(m["ClusterCertificate"]));
    }
    if (m.find("ClusterCsr") != m.end() && !m["ClusterCsr"].empty()) {
      clusterCsr = make_shared<string>(boost::any_cast<string>(m["ClusterCsr"]));
    }
    if (m.find("ClusterOwnerCertificate") != m.end() && !m["ClusterOwnerCertificate"].empty()) {
      clusterOwnerCertificate = make_shared<string>(boost::any_cast<string>(m["ClusterOwnerCertificate"]));
    }
  }


  virtual ~ConfigNewClusterWithInstanceResponseBodyClustersCertificates() = default;
};
class ConfigNewClusterWithInstanceResponseBodyClustersClusterZones : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneNo{};

  ConfigNewClusterWithInstanceResponseBodyClustersClusterZones() {}

  explicit ConfigNewClusterWithInstanceResponseBodyClustersClusterZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneNo) {
      res["ZoneNo"] = boost::any(*zoneNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneNo") != m.end() && !m["ZoneNo"].empty()) {
      zoneNo = make_shared<string>(boost::any_cast<string>(m["ZoneNo"]));
    }
  }


  virtual ~ConfigNewClusterWithInstanceResponseBodyClustersClusterZones() = default;
};
class ConfigNewClusterWithInstanceResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<ConfigNewClusterWithInstanceResponseBodyClustersCertificates> certificates{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterMaster{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterSize{};
  shared_ptr<string> clusterStatus{};
  shared_ptr<vector<ConfigNewClusterWithInstanceResponseBodyClustersClusterZones>> clusterZones{};
  shared_ptr<long> createTime{};
  shared_ptr<string> hsmDeviceType{};
  shared_ptr<vector<string>> ipWhiteList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vpcId{};

  ConfigNewClusterWithInstanceResponseBodyClusters() {}

  explicit ConfigNewClusterWithInstanceResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificates) {
      res["Certificates"] = certificates ? boost::any(certificates->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterMaster) {
      res["ClusterMaster"] = boost::any(*clusterMaster);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterSize) {
      res["ClusterSize"] = boost::any(*clusterSize);
    }
    if (clusterStatus) {
      res["ClusterStatus"] = boost::any(*clusterStatus);
    }
    if (clusterZones) {
      vector<boost::any> temp1;
      for(auto item1:*clusterZones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClusterZones"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (hsmDeviceType) {
      res["HsmDeviceType"] = boost::any(*hsmDeviceType);
    }
    if (ipWhiteList) {
      res["IpWhiteList"] = boost::any(*ipWhiteList);
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
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(map<string, boost::any>) == m["Certificates"].type()) {
        ConfigNewClusterWithInstanceResponseBodyClustersCertificates model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Certificates"]));
        certificates = make_shared<ConfigNewClusterWithInstanceResponseBodyClustersCertificates>(model1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterMaster") != m.end() && !m["ClusterMaster"].empty()) {
      clusterMaster = make_shared<string>(boost::any_cast<string>(m["ClusterMaster"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterSize") != m.end() && !m["ClusterSize"].empty()) {
      clusterSize = make_shared<string>(boost::any_cast<string>(m["ClusterSize"]));
    }
    if (m.find("ClusterStatus") != m.end() && !m["ClusterStatus"].empty()) {
      clusterStatus = make_shared<string>(boost::any_cast<string>(m["ClusterStatus"]));
    }
    if (m.find("ClusterZones") != m.end() && !m["ClusterZones"].empty()) {
      if (typeid(vector<boost::any>) == m["ClusterZones"].type()) {
        vector<ConfigNewClusterWithInstanceResponseBodyClustersClusterZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClusterZones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConfigNewClusterWithInstanceResponseBodyClustersClusterZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterZones = make_shared<vector<ConfigNewClusterWithInstanceResponseBodyClustersClusterZones>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("HsmDeviceType") != m.end() && !m["HsmDeviceType"].empty()) {
      hsmDeviceType = make_shared<string>(boost::any_cast<string>(m["HsmDeviceType"]));
    }
    if (m.find("IpWhiteList") != m.end() && !m["IpWhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpWhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpWhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ConfigNewClusterWithInstanceResponseBodyClusters() = default;
};
class ConfigNewClusterWithInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ConfigNewClusterWithInstanceResponseBodyClusters>> clusters{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ConfigNewClusterWithInstanceResponseBody() {}

  explicit ConfigNewClusterWithInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      vector<boost::any> temp1;
      for(auto item1:*clusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clusters"] = boost::any(temp1);
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
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<ConfigNewClusterWithInstanceResponseBodyClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConfigNewClusterWithInstanceResponseBodyClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<ConfigNewClusterWithInstanceResponseBodyClusters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ConfigNewClusterWithInstanceResponseBody() = default;
};
class ConfigNewClusterWithInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigNewClusterWithInstanceResponseBody> body{};

  ConfigNewClusterWithInstanceResponse() {}

  explicit ConfigNewClusterWithInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigNewClusterWithInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigNewClusterWithInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigNewClusterWithInstanceResponse() = default;
};
class ConfigWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> regionId{};
  shared_ptr<string> whiteList{};

  ConfigWhiteListRequest() {}

  explicit ConfigWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (whiteList) {
      res["WhiteList"] = boost::any(*whiteList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WhiteList") != m.end() && !m["WhiteList"].empty()) {
      whiteList = make_shared<string>(boost::any_cast<string>(m["WhiteList"]));
    }
  }


  virtual ~ConfigWhiteListRequest() = default;
};
class ConfigWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigWhiteListResponseBody() {}

  explicit ConfigWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigWhiteListResponseBody() = default;
};
class ConfigWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigWhiteListResponseBody> body{};

  ConfigWhiteListResponse() {}

  explicit ConfigWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigWhiteListResponse() = default;
};
class ConfigureClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> ipWhiteList{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};
  shared_ptr<vector<string>> zoneNos{};

  ConfigureClusterRequest() {}

  explicit ConfigureClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (ipWhiteList) {
      res["IpWhiteList"] = boost::any(*ipWhiteList);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneNos) {
      res["ZoneNos"] = boost::any(*zoneNos);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("IpWhiteList") != m.end() && !m["IpWhiteList"].empty()) {
      ipWhiteList = make_shared<string>(boost::any_cast<string>(m["IpWhiteList"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneNos") != m.end() && !m["ZoneNos"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ZoneNos"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ZoneNos"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zoneNos = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ConfigureClusterRequest() = default;
};
class ConfigureClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> ipWhiteList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vSwitchIdsShrink{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneNosShrink{};

  ConfigureClusterShrinkRequest() {}

  explicit ConfigureClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (ipWhiteList) {
      res["IpWhiteList"] = boost::any(*ipWhiteList);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitchIdsShrink) {
      res["VSwitchIds"] = boost::any(*vSwitchIdsShrink);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneNosShrink) {
      res["ZoneNos"] = boost::any(*zoneNosShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("IpWhiteList") != m.end() && !m["IpWhiteList"].empty()) {
      ipWhiteList = make_shared<string>(boost::any_cast<string>(m["IpWhiteList"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vSwitchIdsShrink = make_shared<string>(boost::any_cast<string>(m["VSwitchIds"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneNos") != m.end() && !m["ZoneNos"].empty()) {
      zoneNosShrink = make_shared<string>(boost::any_cast<string>(m["ZoneNos"]));
    }
  }


  virtual ~ConfigureClusterShrinkRequest() = default;
};
class ConfigureClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfigureClusterResponseBody() {}

  explicit ConfigureClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfigureClusterResponseBody() = default;
};
class ConfigureClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigureClusterResponseBody> body{};

  ConfigureClusterResponse() {}

  explicit ConfigureClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigureClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigureClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigureClusterResponse() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterName{};
  shared_ptr<vector<string>> hsmInstanceIds{};
  shared_ptr<string> ipWhiteList{};
  shared_ptr<string> masterInstanceId{};
  shared_ptr<string> regionId{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (hsmInstanceIds) {
      res["HsmInstanceIds"] = boost::any(*hsmInstanceIds);
    }
    if (ipWhiteList) {
      res["IpWhiteList"] = boost::any(*ipWhiteList);
    }
    if (masterInstanceId) {
      res["MasterInstanceId"] = boost::any(*masterInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("HsmInstanceIds") != m.end() && !m["HsmInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HsmInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HsmInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hsmInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IpWhiteList") != m.end() && !m["IpWhiteList"].empty()) {
      ipWhiteList = make_shared<string>(boost::any_cast<string>(m["IpWhiteList"]));
    }
    if (m.find("MasterInstanceId") != m.end() && !m["MasterInstanceId"].empty()) {
      masterInstanceId = make_shared<string>(boost::any_cast<string>(m["MasterInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterName{};
  shared_ptr<string> hsmInstanceIdsShrink{};
  shared_ptr<string> ipWhiteList{};
  shared_ptr<string> masterInstanceId{};
  shared_ptr<string> regionId{};

  CreateClusterShrinkRequest() {}

  explicit CreateClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (hsmInstanceIdsShrink) {
      res["HsmInstanceIds"] = boost::any(*hsmInstanceIdsShrink);
    }
    if (ipWhiteList) {
      res["IpWhiteList"] = boost::any(*ipWhiteList);
    }
    if (masterInstanceId) {
      res["MasterInstanceId"] = boost::any(*masterInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("HsmInstanceIds") != m.end() && !m["HsmInstanceIds"].empty()) {
      hsmInstanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["HsmInstanceIds"]));
    }
    if (m.find("IpWhiteList") != m.end() && !m["IpWhiteList"].empty()) {
      ipWhiteList = make_shared<string>(boost::any_cast<string>(m["IpWhiteList"]));
    }
    if (m.find("MasterInstanceId") != m.end() && !m["MasterInstanceId"].empty()) {
      masterInstanceId = make_shared<string>(boost::any_cast<string>(m["MasterInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateClusterShrinkRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};

  CreateClusterResponseBody() {}

  explicit CreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateClusterResponseBody() = default;
};
class CreateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateClusterResponseBody> body{};

  CreateClusterResponse() {}

  explicit CreateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClusterResponse() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> hsmDeviceType{};
  shared_ptr<string> hsmOem{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<long> quantity{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (hsmDeviceType) {
      res["HsmDeviceType"] = boost::any(*hsmDeviceType);
    }
    if (hsmOem) {
      res["HsmOem"] = boost::any(*hsmOem);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("HsmDeviceType") != m.end() && !m["HsmDeviceType"].empty()) {
      hsmDeviceType = make_shared<string>(boost::any_cast<string>(m["HsmDeviceType"]));
    }
    if (m.find("HsmOem") != m.end() && !m["HsmOem"].empty()) {
      hsmOem = make_shared<string>(boost::any_cast<string>(m["HsmOem"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> requestId{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class DeleteClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DeleteClusterRequest() {}

  explicit DeleteClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DeleteClusterRequest() = default;
};
class DeleteClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteClusterResponseBody() {}

  explicit DeleteClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClusterResponseBody() = default;
};
class DeleteClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteClusterResponseBody> body{};

  DeleteClusterResponse() {}

  explicit DeleteClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClusterResponse() = default;
};
class DescribeAuditLogRequest : public Darabonba::Model {
public:
  shared_ptr<bool> describeUserOssBucket{};
  shared_ptr<string> regionNo{};

  DescribeAuditLogRequest() {}

  explicit DescribeAuditLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (describeUserOssBucket) {
      res["DescribeUserOssBucket"] = boost::any(*describeUserOssBucket);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DescribeUserOssBucket") != m.end() && !m["DescribeUserOssBucket"].empty()) {
      describeUserOssBucket = make_shared<bool>(boost::any_cast<bool>(m["DescribeUserOssBucket"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
  }


  virtual ~DescribeAuditLogRequest() = default;
};
class DescribeAuditLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> aliuid{};
  shared_ptr<string> auditOssBucket{};
  shared_ptr<string> mgmtLogStatus{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> serviceAccessGranted{};
  shared_ptr<vector<string>> userOssBuckets{};
  shared_ptr<bool> success{};

  DescribeAuditLogResponseBody() {}

  explicit DescribeAuditLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (auditOssBucket) {
      res["AuditOssBucket"] = boost::any(*auditOssBucket);
    }
    if (mgmtLogStatus) {
      res["MgmtLogStatus"] = boost::any(*mgmtLogStatus);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceAccessGranted) {
      res["ServiceAccessGranted"] = boost::any(*serviceAccessGranted);
    }
    if (userOssBuckets) {
      res["UserOssBuckets"] = boost::any(*userOssBuckets);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("AuditOssBucket") != m.end() && !m["AuditOssBucket"].empty()) {
      auditOssBucket = make_shared<string>(boost::any_cast<string>(m["AuditOssBucket"]));
    }
    if (m.find("MgmtLogStatus") != m.end() && !m["MgmtLogStatus"].empty()) {
      mgmtLogStatus = make_shared<string>(boost::any_cast<string>(m["MgmtLogStatus"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceAccessGranted") != m.end() && !m["ServiceAccessGranted"].empty()) {
      serviceAccessGranted = make_shared<bool>(boost::any_cast<bool>(m["ServiceAccessGranted"]));
    }
    if (m.find("UserOssBuckets") != m.end() && !m["UserOssBuckets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserOssBuckets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserOssBuckets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userOssBuckets = make_shared<vector<string>>(toVec1);
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DescribeAuditLogResponseBody() = default;
};
class DescribeAuditLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAuditLogResponseBody> body{};

  DescribeAuditLogResponse() {}

  explicit DescribeAuditLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAuditLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditLogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditLogResponse() = default;
};
class DescribeClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterStatus{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  DescribeClustersRequest() {}

  explicit DescribeClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterStatus) {
      res["ClusterStatus"] = boost::any(*clusterStatus);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterStatus") != m.end() && !m["ClusterStatus"].empty()) {
      clusterStatus = make_shared<string>(boost::any_cast<string>(m["ClusterStatus"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeClustersRequest() = default;
};
class DescribeClustersResponseBodyClustersCertificates : public Darabonba::Model {
public:
  shared_ptr<string> clusterCertificate{};
  shared_ptr<string> clusterCsr{};
  shared_ptr<string> clusterOwnerCertificate{};

  DescribeClustersResponseBodyClustersCertificates() {}

  explicit DescribeClustersResponseBodyClustersCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterCertificate) {
      res["ClusterCertificate"] = boost::any(*clusterCertificate);
    }
    if (clusterCsr) {
      res["ClusterCsr"] = boost::any(*clusterCsr);
    }
    if (clusterOwnerCertificate) {
      res["ClusterOwnerCertificate"] = boost::any(*clusterOwnerCertificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterCertificate") != m.end() && !m["ClusterCertificate"].empty()) {
      clusterCertificate = make_shared<string>(boost::any_cast<string>(m["ClusterCertificate"]));
    }
    if (m.find("ClusterCsr") != m.end() && !m["ClusterCsr"].empty()) {
      clusterCsr = make_shared<string>(boost::any_cast<string>(m["ClusterCsr"]));
    }
    if (m.find("ClusterOwnerCertificate") != m.end() && !m["ClusterOwnerCertificate"].empty()) {
      clusterOwnerCertificate = make_shared<string>(boost::any_cast<string>(m["ClusterOwnerCertificate"]));
    }
  }


  virtual ~DescribeClustersResponseBodyClustersCertificates() = default;
};
class DescribeClustersResponseBodyClustersClusterZones : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneNo{};

  DescribeClustersResponseBodyClustersClusterZones() {}

  explicit DescribeClustersResponseBodyClustersClusterZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneNo) {
      res["ZoneNo"] = boost::any(*zoneNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneNo") != m.end() && !m["ZoneNo"].empty()) {
      zoneNo = make_shared<string>(boost::any_cast<string>(m["ZoneNo"]));
    }
  }


  virtual ~DescribeClustersResponseBodyClustersClusterZones() = default;
};
class DescribeClustersResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<DescribeClustersResponseBodyClustersCertificates> certificates{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterMaster{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterSize{};
  shared_ptr<string> clusterStatus{};
  shared_ptr<vector<DescribeClustersResponseBodyClustersClusterZones>> clusterZones{};
  shared_ptr<long> createTime{};
  shared_ptr<string> hsmDeviceType{};
  shared_ptr<vector<string>> ipWhiteList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vpcId{};

  DescribeClustersResponseBodyClusters() {}

  explicit DescribeClustersResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificates) {
      res["Certificates"] = certificates ? boost::any(certificates->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterMaster) {
      res["ClusterMaster"] = boost::any(*clusterMaster);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterSize) {
      res["ClusterSize"] = boost::any(*clusterSize);
    }
    if (clusterStatus) {
      res["ClusterStatus"] = boost::any(*clusterStatus);
    }
    if (clusterZones) {
      vector<boost::any> temp1;
      for(auto item1:*clusterZones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClusterZones"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (hsmDeviceType) {
      res["HsmDeviceType"] = boost::any(*hsmDeviceType);
    }
    if (ipWhiteList) {
      res["IpWhiteList"] = boost::any(*ipWhiteList);
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
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(map<string, boost::any>) == m["Certificates"].type()) {
        DescribeClustersResponseBodyClustersCertificates model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Certificates"]));
        certificates = make_shared<DescribeClustersResponseBodyClustersCertificates>(model1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterMaster") != m.end() && !m["ClusterMaster"].empty()) {
      clusterMaster = make_shared<string>(boost::any_cast<string>(m["ClusterMaster"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterSize") != m.end() && !m["ClusterSize"].empty()) {
      clusterSize = make_shared<string>(boost::any_cast<string>(m["ClusterSize"]));
    }
    if (m.find("ClusterStatus") != m.end() && !m["ClusterStatus"].empty()) {
      clusterStatus = make_shared<string>(boost::any_cast<string>(m["ClusterStatus"]));
    }
    if (m.find("ClusterZones") != m.end() && !m["ClusterZones"].empty()) {
      if (typeid(vector<boost::any>) == m["ClusterZones"].type()) {
        vector<DescribeClustersResponseBodyClustersClusterZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClusterZones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClustersResponseBodyClustersClusterZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterZones = make_shared<vector<DescribeClustersResponseBodyClustersClusterZones>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("HsmDeviceType") != m.end() && !m["HsmDeviceType"].empty()) {
      hsmDeviceType = make_shared<string>(boost::any_cast<string>(m["HsmDeviceType"]));
    }
    if (m.find("IpWhiteList") != m.end() && !m["IpWhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpWhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpWhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeClustersResponseBodyClusters() = default;
};
class DescribeClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClustersResponseBodyClusters>> clusters{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  DescribeClustersResponseBody() {}

  explicit DescribeClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      vector<boost::any> temp1;
      for(auto item1:*clusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clusters"] = boost::any(temp1);
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
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<DescribeClustersResponseBodyClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClustersResponseBodyClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<DescribeClustersResponseBodyClusters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribeClustersResponseBody() = default;
};
class DescribeClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClustersResponseBody> body{};

  DescribeClustersResponse() {}

  explicit DescribeClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClustersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClustersResponse() = default;
};
class DescribeInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> hsmStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> showInitStatus{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcIp{};

  DescribeInstancesRequest() {}

  explicit DescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (hsmStatus) {
      res["HsmStatus"] = boost::any(*hsmStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (showInitStatus) {
      res["ShowInitStatus"] = boost::any(*showInitStatus);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcIp) {
      res["VpcIp"] = boost::any(*vpcIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("HsmStatus") != m.end() && !m["HsmStatus"].empty()) {
      hsmStatus = make_shared<long>(boost::any_cast<long>(m["HsmStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShowInitStatus") != m.end() && !m["ShowInitStatus"].empty()) {
      showInitStatus = make_shared<string>(boost::any_cast<string>(m["ShowInitStatus"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcIp") != m.end() && !m["VpcIp"].empty()) {
      vpcIp = make_shared<string>(boost::any_cast<string>(m["VpcIp"]));
    }
  }


  virtual ~DescribeInstancesRequest() = default;
};
class DescribeInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> createTime{};
  shared_ptr<string> digest{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> hsmDeviceType{};
  shared_ptr<string> hsmOem{};
  shared_ptr<long> hsmStatus{};
  shared_ptr<long> initStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<bool> isMaster{};
  shared_ptr<bool> isTrial{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<vector<string>> whiteList{};
  shared_ptr<string> zoneId{};

  DescribeInstancesResponseBodyInstances() {}

  explicit DescribeInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (digest) {
      res["Digest"] = boost::any(*digest);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (hsmDeviceType) {
      res["HsmDeviceType"] = boost::any(*hsmDeviceType);
    }
    if (hsmOem) {
      res["HsmOem"] = boost::any(*hsmOem);
    }
    if (hsmStatus) {
      res["HsmStatus"] = boost::any(*hsmStatus);
    }
    if (initStatus) {
      res["InitStatus"] = boost::any(*initStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (isMaster) {
      res["IsMaster"] = boost::any(*isMaster);
    }
    if (isTrial) {
      res["IsTrial"] = boost::any(*isTrial);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (whiteList) {
      res["WhiteList"] = boost::any(*whiteList);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Digest") != m.end() && !m["Digest"].empty()) {
      digest = make_shared<string>(boost::any_cast<string>(m["Digest"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("HsmDeviceType") != m.end() && !m["HsmDeviceType"].empty()) {
      hsmDeviceType = make_shared<string>(boost::any_cast<string>(m["HsmDeviceType"]));
    }
    if (m.find("HsmOem") != m.end() && !m["HsmOem"].empty()) {
      hsmOem = make_shared<string>(boost::any_cast<string>(m["HsmOem"]));
    }
    if (m.find("HsmStatus") != m.end() && !m["HsmStatus"].empty()) {
      hsmStatus = make_shared<long>(boost::any_cast<long>(m["HsmStatus"]));
    }
    if (m.find("InitStatus") != m.end() && !m["InitStatus"].empty()) {
      initStatus = make_shared<long>(boost::any_cast<long>(m["InitStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("IsMaster") != m.end() && !m["IsMaster"].empty()) {
      isMaster = make_shared<bool>(boost::any_cast<bool>(m["IsMaster"]));
    }
    if (m.find("IsTrial") != m.end() && !m["IsTrial"].empty()) {
      isTrial = make_shared<bool>(boost::any_cast<bool>(m["IsTrial"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("WhiteList") != m.end() && !m["WhiteList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyInstances() = default;
};
class DescribeInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstancesResponseBodyInstances>> instances{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeInstancesResponseBody() {}

  explicit DescribeInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeInstancesResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeInstancesResponseBody() = default;
};
class DescribeInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstancesResponseBody> body{};

  DescribeInstancesResponse() {}

  explicit DescribeInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> lang{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsZones : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<string> localName{};
  shared_ptr<string> zoneId{};

  DescribeRegionsResponseBodyRegionsZones() {}

  explicit DescribeRegionsResponseBodyRegionsZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["Cluster"] = boost::any(*cluster);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["Cluster"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsZones() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsZones>> zones{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zones) {
      vector<boost::any> temp1;
      for(auto item1:*zones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<DescribeRegionsResponseBodyRegionsZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<DescribeRegionsResponseBodyRegionsZones>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<DescribeRegionsResponseBodyRegions>>(expect1);
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeTrialStatusRequest : public Darabonba::Model {
public:
  shared_ptr<bool> describeTrialResource{};

  DescribeTrialStatusRequest() {}

  explicit DescribeTrialStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (describeTrialResource) {
      res["DescribeTrialResource"] = boost::any(*describeTrialResource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DescribeTrialResource") != m.end() && !m["DescribeTrialResource"].empty()) {
      describeTrialResource = make_shared<bool>(boost::any_cast<bool>(m["DescribeTrialResource"]));
    }
  }


  virtual ~DescribeTrialStatusRequest() = default;
};
class DescribeTrialStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> aliuid{};
  shared_ptr<bool> ifTrialAllowed{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, map<string, boost::any>>> trialResource{};
  shared_ptr<bool> success{};

  DescribeTrialStatusResponseBody() {}

  explicit DescribeTrialStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (ifTrialAllowed) {
      res["IfTrialAllowed"] = boost::any(*ifTrialAllowed);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (trialResource) {
      res["TrialResource"] = boost::any(*trialResource);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("IfTrialAllowed") != m.end() && !m["IfTrialAllowed"].empty()) {
      ifTrialAllowed = make_shared<bool>(boost::any_cast<bool>(m["IfTrialAllowed"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TrialResource") != m.end() && !m["TrialResource"].empty()) {
      map<string, map<string, boost::any>> map1 = boost::any_cast<map<string, map<string, boost::any>>>(m["TrialResource"]);
      map<string, map<string, boost::any>> toMap1;
      for (auto item:map1) {
        map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item.second);
        map<string, boost::any> toMap2;
        for (auto item:map2) {
           toMap2[item.first] = item.second;
        }
         toMap1[item.first] = toMap2;
      }
      trialResource = make_shared<map<string, map<string, boost::any>>>(toMap1);
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DescribeTrialStatusResponseBody() = default;
};
class DescribeTrialStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTrialStatusResponseBody> body{};

  DescribeTrialStatusResponse() {}

  explicit DescribeTrialStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTrialStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTrialStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTrialStatusResponse() = default;
};
class InitializeAuditLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};

  InitializeAuditLogRequest() {}

  explicit InitializeAuditLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~InitializeAuditLogRequest() = default;
};
class InitializeAuditLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InitializeAuditLogResponseBody() {}

  explicit InitializeAuditLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InitializeAuditLogResponseBody() = default;
};
class InitializeAuditLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitializeAuditLogResponseBody> body{};

  InitializeAuditLogResponse() {}

  explicit InitializeAuditLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitializeAuditLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitializeAuditLogResponseBody>(model1);
      }
    }
  }


  virtual ~InitializeAuditLogResponse() = default;
};
class InitializeClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> issuerCertificate{};
  shared_ptr<string> signedCertificate{};

  InitializeClusterRequest() {}

  explicit InitializeClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (issuerCertificate) {
      res["IssuerCertificate"] = boost::any(*issuerCertificate);
    }
    if (signedCertificate) {
      res["SignedCertificate"] = boost::any(*signedCertificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("IssuerCertificate") != m.end() && !m["IssuerCertificate"].empty()) {
      issuerCertificate = make_shared<string>(boost::any_cast<string>(m["IssuerCertificate"]));
    }
    if (m.find("SignedCertificate") != m.end() && !m["SignedCertificate"].empty()) {
      signedCertificate = make_shared<string>(boost::any_cast<string>(m["SignedCertificate"]));
    }
  }


  virtual ~InitializeClusterRequest() = default;
};
class InitializeClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InitializeClusterResponseBody() {}

  explicit InitializeClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InitializeClusterResponseBody() = default;
};
class InitializeClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitializeClusterResponseBody> body{};

  InitializeClusterResponse() {}

  explicit InitializeClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitializeClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitializeClusterResponseBody>(model1);
      }
    }
  }


  virtual ~InitializeClusterResponse() = default;
};
class ModifyInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};

  ModifyInstanceRequest() {}

  explicit ModifyInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~ModifyInstanceRequest() = default;
};
class ModifyInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceResponseBody() {}

  explicit ModifyInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceResponseBody() = default;
};
class ModifyInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstanceResponseBody> body{};

  ModifyInstanceResponse() {}

  explicit ModifyInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceResponse() = default;
};
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~MoveResourceGroupRequest() = default;
};
class MoveResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveResourceGroupResponseBody() {}

  explicit MoveResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MoveResourceGroupResponseBody() = default;
};
class MoveResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveResourceGroupResponseBody> body{};

  MoveResourceGroupResponse() {}

  explicit MoveResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourceGroupResponse() = default;
};
class PauseInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  PauseInstanceRequest() {}

  explicit PauseInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PauseInstanceRequest() = default;
};
class PauseInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PauseInstanceResponseBody() {}

  explicit PauseInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PauseInstanceResponseBody() = default;
};
class PauseInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PauseInstanceResponseBody> body{};

  PauseInstanceResponse() {}

  explicit PauseInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PauseInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PauseInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~PauseInstanceResponse() = default;
};
class QuickInitInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  QuickInitInstanceRequest() {}

  explicit QuickInitInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QuickInitInstanceRequest() = default;
};
class QuickInitInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  QuickInitInstanceResponseBody() {}

  explicit QuickInitInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QuickInitInstanceResponseBody() = default;
};
class QuickInitInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuickInitInstanceResponseBody> body{};

  QuickInitInstanceResponse() {}

  explicit QuickInitInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuickInitInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuickInitInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~QuickInitInstanceResponse() = default;
};
class ReleaseInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceOwnerId{};

  ReleaseInstanceRequest() {}

  explicit ReleaseInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ReleaseInstanceRequest() = default;
};
class ReleaseInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseInstanceResponseBody() {}

  explicit ReleaseInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseInstanceResponseBody() = default;
};
class ReleaseInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseInstanceResponseBody> body{};

  ReleaseInstanceResponse() {}

  explicit ReleaseInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseInstanceResponse() = default;
};
class RemoveInstanceFromClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isMaster{};

  RemoveInstanceFromClusterRequest() {}

  explicit RemoveInstanceFromClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isMaster) {
      res["IsMaster"] = boost::any(*isMaster);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsMaster") != m.end() && !m["IsMaster"].empty()) {
      isMaster = make_shared<bool>(boost::any_cast<bool>(m["IsMaster"]));
    }
  }


  virtual ~RemoveInstanceFromClusterRequest() = default;
};
class RemoveInstanceFromClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveInstanceFromClusterResponseBody() {}

  explicit RemoveInstanceFromClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveInstanceFromClusterResponseBody() = default;
};
class RemoveInstanceFromClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveInstanceFromClusterResponseBody> body{};

  RemoveInstanceFromClusterResponse() {}

  explicit RemoveInstanceFromClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveInstanceFromClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveInstanceFromClusterResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveInstanceFromClusterResponse() = default;
};
class RemoveInstancesFromClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<map<string, boost::any>> hsmInstanceIds{};

  RemoveInstancesFromClusterRequest() {}

  explicit RemoveInstancesFromClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hsmInstanceIds) {
      res["HsmInstanceIds"] = boost::any(*hsmInstanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HsmInstanceIds") != m.end() && !m["HsmInstanceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["HsmInstanceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      hsmInstanceIds = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RemoveInstancesFromClusterRequest() = default;
};
class RemoveInstancesFromClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> hsmInstanceIdsShrink{};

  RemoveInstancesFromClusterShrinkRequest() {}

  explicit RemoveInstancesFromClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hsmInstanceIdsShrink) {
      res["HsmInstanceIds"] = boost::any(*hsmInstanceIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HsmInstanceIds") != m.end() && !m["HsmInstanceIds"].empty()) {
      hsmInstanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["HsmInstanceIds"]));
    }
  }


  virtual ~RemoveInstancesFromClusterShrinkRequest() = default;
};
class RemoveInstancesFromClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveInstancesFromClusterResponseBody() {}

  explicit RemoveInstancesFromClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveInstancesFromClusterResponseBody() = default;
};
class RemoveInstancesFromClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveInstancesFromClusterResponseBody> body{};

  RemoveInstancesFromClusterResponse() {}

  explicit RemoveInstancesFromClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveInstancesFromClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveInstancesFromClusterResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveInstancesFromClusterResponse() = default;
};
class RenewInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> resourceOwnerId{};

  RenewInstanceRequest() {}

  explicit RenewInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
  }


  virtual ~RenewInstanceRequest() = default;
};
class RenewInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenewInstanceResponseBody() = default;
};
class RenewInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewInstanceResponseBody> body{};

  RenewInstanceResponse() {}

  explicit RenewInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RenewInstanceResponse() = default;
};
class ResetInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ResetInstanceRequest() {}

  explicit ResetInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetInstanceRequest() = default;
};
class ResetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetInstanceResponseBody() {}

  explicit ResetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetInstanceResponseBody() = default;
};
class ResetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetInstanceResponseBody> body{};

  ResetInstanceResponse() {}

  explicit ResetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ResetInstanceResponse() = default;
};
class ResetPausedInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ResetPausedInstanceRequest() {}

  explicit ResetPausedInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetPausedInstanceRequest() = default;
};
class ResetPausedInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetPausedInstanceResponseBody() {}

  explicit ResetPausedInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetPausedInstanceResponseBody() = default;
};
class ResetPausedInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetPausedInstanceResponseBody> body{};

  ResetPausedInstanceResponse() {}

  explicit ResetPausedInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetPausedInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetPausedInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ResetPausedInstanceResponse() = default;
};
class ResumeInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ResumeInstanceRequest() {}

  explicit ResumeInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResumeInstanceRequest() = default;
};
class ResumeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResumeInstanceResponseBody() {}

  explicit ResumeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResumeInstanceResponseBody() = default;
};
class ResumeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResumeInstanceResponseBody> body{};

  ResumeInstanceResponse() {}

  explicit ResumeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeInstanceResponse() = default;
};
class SwitchClusterMasterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceId{};

  SwitchClusterMasterRequest() {}

  explicit SwitchClusterMasterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~SwitchClusterMasterRequest() = default;
};
class SwitchClusterMasterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SwitchClusterMasterResponseBody() {}

  explicit SwitchClusterMasterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SwitchClusterMasterResponseBody() = default;
};
class SwitchClusterMasterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchClusterMasterResponseBody> body{};

  SwitchClusterMasterResponse() {}

  explicit SwitchClusterMasterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchClusterMasterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchClusterMasterResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchClusterMasterResponse() = default;
};
class SyncInClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  SyncInClusterRequest() {}

  explicit SyncInClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~SyncInClusterRequest() = default;
};
class SyncInClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SyncInClusterResponseBody() {}

  explicit SyncInClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SyncInClusterResponseBody() = default;
};
class SyncInClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncInClusterResponseBody> body{};

  SyncInClusterResponse() {}

  explicit SyncInClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncInClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncInClusterResponseBody>(model1);
      }
    }
  }


  virtual ~SyncInClusterResponse() = default;
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
  ActiveClusterResponse activeClusterWithOptions(shared_ptr<ActiveClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActiveClusterResponse activeCluster(shared_ptr<ActiveClusterRequest> request);
  AddInstancesToClusterResponse addInstancesToClusterWithOptions(shared_ptr<AddInstancesToClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddInstancesToClusterResponse addInstancesToCluster(shared_ptr<AddInstancesToClusterRequest> request);
  ConfigAuditLogResponse configAuditLogWithOptions(shared_ptr<ConfigAuditLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigAuditLogResponse configAuditLog(shared_ptr<ConfigAuditLogRequest> request);
  ConfigClusterMasterResponse configClusterMasterWithOptions(shared_ptr<ConfigClusterMasterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigClusterMasterResponse configClusterMaster(shared_ptr<ConfigClusterMasterRequest> request);
  ConfigNetworkResponse configNetworkWithOptions(shared_ptr<ConfigNetworkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigNetworkResponse configNetwork(shared_ptr<ConfigNetworkRequest> request);
  ConfigNewClusterWithInstanceResponse configNewClusterWithInstanceWithOptions(shared_ptr<ConfigNewClusterWithInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigNewClusterWithInstanceResponse configNewClusterWithInstance(shared_ptr<ConfigNewClusterWithInstanceRequest> request);
  ConfigWhiteListResponse configWhiteListWithOptions(shared_ptr<ConfigWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigWhiteListResponse configWhiteList(shared_ptr<ConfigWhiteListRequest> request);
  ConfigureClusterResponse configureClusterWithOptions(shared_ptr<ConfigureClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigureClusterResponse configureCluster(shared_ptr<ConfigureClusterRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<DeleteClusterRequest> request);
  DescribeAuditLogResponse describeAuditLogWithOptions(shared_ptr<DescribeAuditLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditLogResponse describeAuditLog(shared_ptr<DescribeAuditLogRequest> request);
  DescribeClustersResponse describeClustersWithOptions(shared_ptr<DescribeClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClustersResponse describeClusters(shared_ptr<DescribeClustersRequest> request);
  DescribeInstancesResponse describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstancesResponse describeInstances(shared_ptr<DescribeInstancesRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeTrialStatusResponse describeTrialStatusWithOptions(shared_ptr<DescribeTrialStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTrialStatusResponse describeTrialStatus(shared_ptr<DescribeTrialStatusRequest> request);
  InitializeAuditLogResponse initializeAuditLogWithOptions(shared_ptr<InitializeAuditLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitializeAuditLogResponse initializeAuditLog(shared_ptr<InitializeAuditLogRequest> request);
  InitializeClusterResponse initializeClusterWithOptions(shared_ptr<InitializeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitializeClusterResponse initializeCluster(shared_ptr<InitializeClusterRequest> request);
  ModifyInstanceResponse modifyInstanceWithOptions(shared_ptr<ModifyInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceResponse modifyInstance(shared_ptr<ModifyInstanceRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  PauseInstanceResponse pauseInstanceWithOptions(shared_ptr<PauseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PauseInstanceResponse pauseInstance(shared_ptr<PauseInstanceRequest> request);
  QuickInitInstanceResponse quickInitInstanceWithOptions(shared_ptr<QuickInitInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuickInitInstanceResponse quickInitInstance(shared_ptr<QuickInitInstanceRequest> request);
  ReleaseInstanceResponse releaseInstanceWithOptions(shared_ptr<ReleaseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstanceResponse releaseInstance(shared_ptr<ReleaseInstanceRequest> request);
  RemoveInstanceFromClusterResponse removeInstanceFromClusterWithOptions(shared_ptr<RemoveInstanceFromClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveInstanceFromClusterResponse removeInstanceFromCluster(shared_ptr<RemoveInstanceFromClusterRequest> request);
  RemoveInstancesFromClusterResponse removeInstancesFromClusterWithOptions(shared_ptr<RemoveInstancesFromClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveInstancesFromClusterResponse removeInstancesFromCluster(shared_ptr<RemoveInstancesFromClusterRequest> request);
  RenewInstanceResponse renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewInstanceResponse renewInstance(shared_ptr<RenewInstanceRequest> request);
  ResetInstanceResponse resetInstanceWithOptions(shared_ptr<ResetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetInstanceResponse resetInstance(shared_ptr<ResetInstanceRequest> request);
  ResetPausedInstanceResponse resetPausedInstanceWithOptions(shared_ptr<ResetPausedInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetPausedInstanceResponse resetPausedInstance(shared_ptr<ResetPausedInstanceRequest> request);
  ResumeInstanceResponse resumeInstanceWithOptions(shared_ptr<ResumeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeInstanceResponse resumeInstance(shared_ptr<ResumeInstanceRequest> request);
  SwitchClusterMasterResponse switchClusterMasterWithOptions(shared_ptr<SwitchClusterMasterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchClusterMasterResponse switchClusterMaster(shared_ptr<SwitchClusterMasterRequest> request);
  SyncInClusterResponse syncInClusterWithOptions(shared_ptr<SyncInClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncInClusterResponse syncInCluster(shared_ptr<SyncInClusterRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Hsm20180111

#endif
