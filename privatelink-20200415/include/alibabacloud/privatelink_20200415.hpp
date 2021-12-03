// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PRIVATELINK20200415_H_
#define ALIBABACLOUD_PRIVATELINK20200415_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Privatelink20200415 {
class AddUserToVpcEndpointServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<long> userId{};

  AddUserToVpcEndpointServiceRequest() {}

  explicit AddUserToVpcEndpointServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~AddUserToVpcEndpointServiceRequest() = default;
};
class AddUserToVpcEndpointServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddUserToVpcEndpointServiceResponseBody() {}

  explicit AddUserToVpcEndpointServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUserToVpcEndpointServiceResponseBody() = default;
};
class AddUserToVpcEndpointServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddUserToVpcEndpointServiceResponseBody> body{};

  AddUserToVpcEndpointServiceResponse() {}

  explicit AddUserToVpcEndpointServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddUserToVpcEndpointServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserToVpcEndpointServiceResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserToVpcEndpointServiceResponse() = default;
};
class AddZoneToVpcEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> ip{};

  AddZoneToVpcEndpointRequest() {}

  explicit AddZoneToVpcEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (ip) {
      res["ip"] = boost::any(*ip);
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
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
  }


  virtual ~AddZoneToVpcEndpointRequest() = default;
};
class AddZoneToVpcEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddZoneToVpcEndpointResponseBody() {}

  explicit AddZoneToVpcEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddZoneToVpcEndpointResponseBody() = default;
};
class AddZoneToVpcEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddZoneToVpcEndpointResponseBody> body{};

  AddZoneToVpcEndpointResponse() {}

  explicit AddZoneToVpcEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddZoneToVpcEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddZoneToVpcEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~AddZoneToVpcEndpointResponse() = default;
};
class AttachResourceToVpcEndpointServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceId{};

  AttachResourceToVpcEndpointServiceRequest() {}

  explicit AttachResourceToVpcEndpointServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~AttachResourceToVpcEndpointServiceRequest() = default;
};
class AttachResourceToVpcEndpointServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachResourceToVpcEndpointServiceResponseBody() {}

  explicit AttachResourceToVpcEndpointServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachResourceToVpcEndpointServiceResponseBody() = default;
};
class AttachResourceToVpcEndpointServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachResourceToVpcEndpointServiceResponseBody> body{};

  AttachResourceToVpcEndpointServiceResponse() {}

  explicit AttachResourceToVpcEndpointServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachResourceToVpcEndpointServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachResourceToVpcEndpointServiceResponseBody>(model1);
      }
    }
  }


  virtual ~AttachResourceToVpcEndpointServiceResponse() = default;
};
class AttachSecurityGroupToVpcEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};

  AttachSecurityGroupToVpcEndpointRequest() {}

  explicit AttachSecurityGroupToVpcEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
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
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
  }


  virtual ~AttachSecurityGroupToVpcEndpointRequest() = default;
};
class AttachSecurityGroupToVpcEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachSecurityGroupToVpcEndpointResponseBody() {}

  explicit AttachSecurityGroupToVpcEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachSecurityGroupToVpcEndpointResponseBody() = default;
};
class AttachSecurityGroupToVpcEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachSecurityGroupToVpcEndpointResponseBody> body{};

  AttachSecurityGroupToVpcEndpointResponse() {}

  explicit AttachSecurityGroupToVpcEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachSecurityGroupToVpcEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachSecurityGroupToVpcEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~AttachSecurityGroupToVpcEndpointResponse() = default;
};
class CheckProductOpenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckProductOpenResponseBody() {}

  explicit CheckProductOpenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CheckProductOpenResponseBody() = default;
};
class CheckProductOpenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckProductOpenResponseBody> body{};

  CheckProductOpenResponse() {}

  explicit CheckProductOpenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckProductOpenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckProductOpenResponseBody>(model1);
      }
    }
  }


  virtual ~CheckProductOpenResponse() = default;
};
class CreateVpcEndpointRequestZone : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> ip{};

  CreateVpcEndpointRequestZone() {}

  explicit CreateVpcEndpointRequestZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
  }


  virtual ~CreateVpcEndpointRequestZone() = default;
};
class CreateVpcEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> endpointDescription{};
  shared_ptr<string> endpointName{};
  shared_ptr<string> endpointType{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> securityGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> vpcId{};
  shared_ptr<vector<CreateVpcEndpointRequestZone>> zone{};
  shared_ptr<long> zonePrivateIpAddressCount{};

  CreateVpcEndpointRequest() {}

  explicit CreateVpcEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endpointDescription) {
      res["EndpointDescription"] = boost::any(*endpointDescription);
    }
    if (endpointName) {
      res["EndpointName"] = boost::any(*endpointName);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zone) {
      vector<boost::any> temp1;
      for(auto item1:*zone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zone"] = boost::any(temp1);
    }
    if (zonePrivateIpAddressCount) {
      res["ZonePrivateIpAddressCount"] = boost::any(*zonePrivateIpAddressCount);
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
    if (m.find("EndpointDescription") != m.end() && !m["EndpointDescription"].empty()) {
      endpointDescription = make_shared<string>(boost::any_cast<string>(m["EndpointDescription"]));
    }
    if (m.find("EndpointName") != m.end() && !m["EndpointName"].empty()) {
      endpointName = make_shared<string>(boost::any_cast<string>(m["EndpointName"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      if (typeid(vector<boost::any>) == m["Zone"].type()) {
        vector<CreateVpcEndpointRequestZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVpcEndpointRequestZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<CreateVpcEndpointRequestZone>>(expect1);
      }
    }
    if (m.find("ZonePrivateIpAddressCount") != m.end() && !m["ZonePrivateIpAddressCount"].empty()) {
      zonePrivateIpAddressCount = make_shared<long>(boost::any_cast<long>(m["ZonePrivateIpAddressCount"]));
    }
  }


  virtual ~CreateVpcEndpointRequest() = default;
};
class CreateVpcEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> connectionStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endpointBusinessStatus{};
  shared_ptr<string> endpointDescription{};
  shared_ptr<string> endpointDomain{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointName{};
  shared_ptr<string> endpointStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> vpcId{};

  CreateVpcEndpointResponseBody() {}

  explicit CreateVpcEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endpointBusinessStatus) {
      res["EndpointBusinessStatus"] = boost::any(*endpointBusinessStatus);
    }
    if (endpointDescription) {
      res["EndpointDescription"] = boost::any(*endpointDescription);
    }
    if (endpointDomain) {
      res["EndpointDomain"] = boost::any(*endpointDomain);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointName) {
      res["EndpointName"] = boost::any(*endpointName);
    }
    if (endpointStatus) {
      res["EndpointStatus"] = boost::any(*endpointStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndpointBusinessStatus") != m.end() && !m["EndpointBusinessStatus"].empty()) {
      endpointBusinessStatus = make_shared<string>(boost::any_cast<string>(m["EndpointBusinessStatus"]));
    }
    if (m.find("EndpointDescription") != m.end() && !m["EndpointDescription"].empty()) {
      endpointDescription = make_shared<string>(boost::any_cast<string>(m["EndpointDescription"]));
    }
    if (m.find("EndpointDomain") != m.end() && !m["EndpointDomain"].empty()) {
      endpointDomain = make_shared<string>(boost::any_cast<string>(m["EndpointDomain"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointName") != m.end() && !m["EndpointName"].empty()) {
      endpointName = make_shared<string>(boost::any_cast<string>(m["EndpointName"]));
    }
    if (m.find("EndpointStatus") != m.end() && !m["EndpointStatus"].empty()) {
      endpointStatus = make_shared<string>(boost::any_cast<string>(m["EndpointStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateVpcEndpointResponseBody() = default;
};
class CreateVpcEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateVpcEndpointResponseBody> body{};

  CreateVpcEndpointResponse() {}

  explicit CreateVpcEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateVpcEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVpcEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVpcEndpointResponse() = default;
};
class CreateVpcEndpointServiceRequestResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  CreateVpcEndpointServiceRequestResource() {}

  explicit CreateVpcEndpointServiceRequestResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~CreateVpcEndpointServiceRequestResource() = default;
};
class CreateVpcEndpointServiceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoAcceptEnabled{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> payer{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<CreateVpcEndpointServiceRequestResource>> resource{};
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> serviceResourceType{};
  shared_ptr<bool> zoneAffinityEnabled{};

  CreateVpcEndpointServiceRequest() {}

  explicit CreateVpcEndpointServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoAcceptEnabled) {
      res["AutoAcceptEnabled"] = boost::any(*autoAcceptEnabled);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (payer) {
      res["Payer"] = boost::any(*payer);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      vector<boost::any> temp1;
      for(auto item1:*resource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resource"] = boost::any(temp1);
    }
    if (serviceDescription) {
      res["ServiceDescription"] = boost::any(*serviceDescription);
    }
    if (serviceResourceType) {
      res["ServiceResourceType"] = boost::any(*serviceResourceType);
    }
    if (zoneAffinityEnabled) {
      res["ZoneAffinityEnabled"] = boost::any(*zoneAffinityEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoAcceptEnabled") != m.end() && !m["AutoAcceptEnabled"].empty()) {
      autoAcceptEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoAcceptEnabled"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Payer") != m.end() && !m["Payer"].empty()) {
      payer = make_shared<string>(boost::any_cast<string>(m["Payer"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      if (typeid(vector<boost::any>) == m["Resource"].type()) {
        vector<CreateVpcEndpointServiceRequestResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVpcEndpointServiceRequestResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resource = make_shared<vector<CreateVpcEndpointServiceRequestResource>>(expect1);
      }
    }
    if (m.find("ServiceDescription") != m.end() && !m["ServiceDescription"].empty()) {
      serviceDescription = make_shared<string>(boost::any_cast<string>(m["ServiceDescription"]));
    }
    if (m.find("ServiceResourceType") != m.end() && !m["ServiceResourceType"].empty()) {
      serviceResourceType = make_shared<string>(boost::any_cast<string>(m["ServiceResourceType"]));
    }
    if (m.find("ZoneAffinityEnabled") != m.end() && !m["ZoneAffinityEnabled"].empty()) {
      zoneAffinityEnabled = make_shared<bool>(boost::any_cast<bool>(m["ZoneAffinityEnabled"]));
    }
  }


  virtual ~CreateVpcEndpointServiceRequest() = default;
};
class CreateVpcEndpointServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> autoAcceptEnabled{};
  shared_ptr<string> createTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceBusinessStatus{};
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> serviceDomain{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<bool> zoneAffinityEnabled{};

  CreateVpcEndpointServiceResponseBody() {}

  explicit CreateVpcEndpointServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoAcceptEnabled) {
      res["AutoAcceptEnabled"] = boost::any(*autoAcceptEnabled);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceBusinessStatus) {
      res["ServiceBusinessStatus"] = boost::any(*serviceBusinessStatus);
    }
    if (serviceDescription) {
      res["ServiceDescription"] = boost::any(*serviceDescription);
    }
    if (serviceDomain) {
      res["ServiceDomain"] = boost::any(*serviceDomain);
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
    if (zoneAffinityEnabled) {
      res["ZoneAffinityEnabled"] = boost::any(*zoneAffinityEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoAcceptEnabled") != m.end() && !m["AutoAcceptEnabled"].empty()) {
      autoAcceptEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoAcceptEnabled"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceBusinessStatus") != m.end() && !m["ServiceBusinessStatus"].empty()) {
      serviceBusinessStatus = make_shared<string>(boost::any_cast<string>(m["ServiceBusinessStatus"]));
    }
    if (m.find("ServiceDescription") != m.end() && !m["ServiceDescription"].empty()) {
      serviceDescription = make_shared<string>(boost::any_cast<string>(m["ServiceDescription"]));
    }
    if (m.find("ServiceDomain") != m.end() && !m["ServiceDomain"].empty()) {
      serviceDomain = make_shared<string>(boost::any_cast<string>(m["ServiceDomain"]));
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
    if (m.find("ZoneAffinityEnabled") != m.end() && !m["ZoneAffinityEnabled"].empty()) {
      zoneAffinityEnabled = make_shared<bool>(boost::any_cast<bool>(m["ZoneAffinityEnabled"]));
    }
  }


  virtual ~CreateVpcEndpointServiceResponseBody() = default;
};
class CreateVpcEndpointServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateVpcEndpointServiceResponseBody> body{};

  CreateVpcEndpointServiceResponse() {}

  explicit CreateVpcEndpointServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateVpcEndpointServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVpcEndpointServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVpcEndpointServiceResponse() = default;
};
class DeleteVpcEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> regionId{};

  DeleteVpcEndpointRequest() {}

  explicit DeleteVpcEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
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
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteVpcEndpointRequest() = default;
};
class DeleteVpcEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVpcEndpointResponseBody() {}

  explicit DeleteVpcEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVpcEndpointResponseBody() = default;
};
class DeleteVpcEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteVpcEndpointResponseBody> body{};

  DeleteVpcEndpointResponse() {}

  explicit DeleteVpcEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteVpcEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVpcEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVpcEndpointResponse() = default;
};
class DeleteVpcEndpointServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};

  DeleteVpcEndpointServiceRequest() {}

  explicit DeleteVpcEndpointServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~DeleteVpcEndpointServiceRequest() = default;
};
class DeleteVpcEndpointServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVpcEndpointServiceResponseBody() {}

  explicit DeleteVpcEndpointServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVpcEndpointServiceResponseBody() = default;
};
class DeleteVpcEndpointServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteVpcEndpointServiceResponseBody> body{};

  DeleteVpcEndpointServiceResponse() {}

  explicit DeleteVpcEndpointServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteVpcEndpointServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVpcEndpointServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVpcEndpointServiceResponse() = default;
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
class DescribeZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeZonesRequest() {}

  explicit DescribeZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeZonesRequest() = default;
};
class DescribeZonesResponseBodyZonesZone : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> zoneId{};

  DescribeZonesResponseBodyZonesZone() {}

  explicit DescribeZonesResponseBodyZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeZonesResponseBodyZonesZone() = default;
};
class DescribeZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZonesResponseBodyZonesZone>> zone{};

  DescribeZonesResponseBodyZones() {}

  explicit DescribeZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeZonesResponseBodyZonesZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZonesZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<DescribeZonesResponseBodyZonesZone>>(expect1);
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
class DetachResourceFromVpcEndpointServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceId{};

  DetachResourceFromVpcEndpointServiceRequest() {}

  explicit DetachResourceFromVpcEndpointServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~DetachResourceFromVpcEndpointServiceRequest() = default;
};
class DetachResourceFromVpcEndpointServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachResourceFromVpcEndpointServiceResponseBody() {}

  explicit DetachResourceFromVpcEndpointServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachResourceFromVpcEndpointServiceResponseBody() = default;
};
class DetachResourceFromVpcEndpointServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachResourceFromVpcEndpointServiceResponseBody> body{};

  DetachResourceFromVpcEndpointServiceResponse() {}

  explicit DetachResourceFromVpcEndpointServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachResourceFromVpcEndpointServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachResourceFromVpcEndpointServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DetachResourceFromVpcEndpointServiceResponse() = default;
};
class DetachSecurityGroupFromVpcEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};

  DetachSecurityGroupFromVpcEndpointRequest() {}

  explicit DetachSecurityGroupFromVpcEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
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
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
  }


  virtual ~DetachSecurityGroupFromVpcEndpointRequest() = default;
};
class DetachSecurityGroupFromVpcEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachSecurityGroupFromVpcEndpointResponseBody() {}

  explicit DetachSecurityGroupFromVpcEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachSecurityGroupFromVpcEndpointResponseBody() = default;
};
class DetachSecurityGroupFromVpcEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachSecurityGroupFromVpcEndpointResponseBody> body{};

  DetachSecurityGroupFromVpcEndpointResponse() {}

  explicit DetachSecurityGroupFromVpcEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachSecurityGroupFromVpcEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachSecurityGroupFromVpcEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~DetachSecurityGroupFromVpcEndpointResponse() = default;
};
class DisableVpcEndpointConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};

  DisableVpcEndpointConnectionRequest() {}

  explicit DisableVpcEndpointConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
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
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~DisableVpcEndpointConnectionRequest() = default;
};
class DisableVpcEndpointConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableVpcEndpointConnectionResponseBody() {}

  explicit DisableVpcEndpointConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableVpcEndpointConnectionResponseBody() = default;
};
class DisableVpcEndpointConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableVpcEndpointConnectionResponseBody> body{};

  DisableVpcEndpointConnectionResponse() {}

  explicit DisableVpcEndpointConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableVpcEndpointConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableVpcEndpointConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~DisableVpcEndpointConnectionResponse() = default;
};
class EnableVpcEndpointConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};

  EnableVpcEndpointConnectionRequest() {}

  explicit EnableVpcEndpointConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
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
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~EnableVpcEndpointConnectionRequest() = default;
};
class EnableVpcEndpointConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableVpcEndpointConnectionResponseBody() {}

  explicit EnableVpcEndpointConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableVpcEndpointConnectionResponseBody() = default;
};
class EnableVpcEndpointConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableVpcEndpointConnectionResponseBody> body{};

  EnableVpcEndpointConnectionResponse() {}

  explicit EnableVpcEndpointConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableVpcEndpointConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableVpcEndpointConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~EnableVpcEndpointConnectionResponse() = default;
};
class GetVpcEndpointAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<string> regionId{};

  GetVpcEndpointAttributeRequest() {}

  explicit GetVpcEndpointAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetVpcEndpointAttributeRequest() = default;
};
class GetVpcEndpointAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> connectionStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endpointBusinessStatus{};
  shared_ptr<string> endpointDescription{};
  shared_ptr<string> endpointDomain{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointName{};
  shared_ptr<string> endpointStatus{};
  shared_ptr<string> endpointType{};
  shared_ptr<string> payer{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> resourceOwner{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> vpcId{};
  shared_ptr<bool> zoneAffinityEnabled{};
  shared_ptr<long> zonePrivateIpAddressCount{};

  GetVpcEndpointAttributeResponseBody() {}

  explicit GetVpcEndpointAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endpointBusinessStatus) {
      res["EndpointBusinessStatus"] = boost::any(*endpointBusinessStatus);
    }
    if (endpointDescription) {
      res["EndpointDescription"] = boost::any(*endpointDescription);
    }
    if (endpointDomain) {
      res["EndpointDomain"] = boost::any(*endpointDomain);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointName) {
      res["EndpointName"] = boost::any(*endpointName);
    }
    if (endpointStatus) {
      res["EndpointStatus"] = boost::any(*endpointStatus);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (payer) {
      res["Payer"] = boost::any(*payer);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwner) {
      res["ResourceOwner"] = boost::any(*resourceOwner);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneAffinityEnabled) {
      res["ZoneAffinityEnabled"] = boost::any(*zoneAffinityEnabled);
    }
    if (zonePrivateIpAddressCount) {
      res["ZonePrivateIpAddressCount"] = boost::any(*zonePrivateIpAddressCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndpointBusinessStatus") != m.end() && !m["EndpointBusinessStatus"].empty()) {
      endpointBusinessStatus = make_shared<string>(boost::any_cast<string>(m["EndpointBusinessStatus"]));
    }
    if (m.find("EndpointDescription") != m.end() && !m["EndpointDescription"].empty()) {
      endpointDescription = make_shared<string>(boost::any_cast<string>(m["EndpointDescription"]));
    }
    if (m.find("EndpointDomain") != m.end() && !m["EndpointDomain"].empty()) {
      endpointDomain = make_shared<string>(boost::any_cast<string>(m["EndpointDomain"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointName") != m.end() && !m["EndpointName"].empty()) {
      endpointName = make_shared<string>(boost::any_cast<string>(m["EndpointName"]));
    }
    if (m.find("EndpointStatus") != m.end() && !m["EndpointStatus"].empty()) {
      endpointStatus = make_shared<string>(boost::any_cast<string>(m["EndpointStatus"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("Payer") != m.end() && !m["Payer"].empty()) {
      payer = make_shared<string>(boost::any_cast<string>(m["Payer"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwner") != m.end() && !m["ResourceOwner"].empty()) {
      resourceOwner = make_shared<bool>(boost::any_cast<bool>(m["ResourceOwner"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneAffinityEnabled") != m.end() && !m["ZoneAffinityEnabled"].empty()) {
      zoneAffinityEnabled = make_shared<bool>(boost::any_cast<bool>(m["ZoneAffinityEnabled"]));
    }
    if (m.find("ZonePrivateIpAddressCount") != m.end() && !m["ZonePrivateIpAddressCount"].empty()) {
      zonePrivateIpAddressCount = make_shared<long>(boost::any_cast<long>(m["ZonePrivateIpAddressCount"]));
    }
  }


  virtual ~GetVpcEndpointAttributeResponseBody() = default;
};
class GetVpcEndpointAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVpcEndpointAttributeResponseBody> body{};

  GetVpcEndpointAttributeResponse() {}

  explicit GetVpcEndpointAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetVpcEndpointAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVpcEndpointAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~GetVpcEndpointAttributeResponse() = default;
};
class GetVpcEndpointServiceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};

  GetVpcEndpointServiceAttributeRequest() {}

  explicit GetVpcEndpointServiceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~GetVpcEndpointServiceAttributeRequest() = default;
};
class GetVpcEndpointServiceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> autoAcceptEnabled{};
  shared_ptr<long> connectBandwidth{};
  shared_ptr<string> createTime{};
  shared_ptr<long> maxBandwidth{};
  shared_ptr<long> minBandwidth{};
  shared_ptr<string> payer{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceBusinessStatus{};
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> serviceDomain{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceResourceType{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> serviceType{};
  shared_ptr<bool> zoneAffinityEnabled{};
  shared_ptr<vector<string>> zones{};

  GetVpcEndpointServiceAttributeResponseBody() {}

  explicit GetVpcEndpointServiceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoAcceptEnabled) {
      res["AutoAcceptEnabled"] = boost::any(*autoAcceptEnabled);
    }
    if (connectBandwidth) {
      res["ConnectBandwidth"] = boost::any(*connectBandwidth);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (maxBandwidth) {
      res["MaxBandwidth"] = boost::any(*maxBandwidth);
    }
    if (minBandwidth) {
      res["MinBandwidth"] = boost::any(*minBandwidth);
    }
    if (payer) {
      res["Payer"] = boost::any(*payer);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceBusinessStatus) {
      res["ServiceBusinessStatus"] = boost::any(*serviceBusinessStatus);
    }
    if (serviceDescription) {
      res["ServiceDescription"] = boost::any(*serviceDescription);
    }
    if (serviceDomain) {
      res["ServiceDomain"] = boost::any(*serviceDomain);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceResourceType) {
      res["ServiceResourceType"] = boost::any(*serviceResourceType);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (zoneAffinityEnabled) {
      res["ZoneAffinityEnabled"] = boost::any(*zoneAffinityEnabled);
    }
    if (zones) {
      res["Zones"] = boost::any(*zones);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoAcceptEnabled") != m.end() && !m["AutoAcceptEnabled"].empty()) {
      autoAcceptEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoAcceptEnabled"]));
    }
    if (m.find("ConnectBandwidth") != m.end() && !m["ConnectBandwidth"].empty()) {
      connectBandwidth = make_shared<long>(boost::any_cast<long>(m["ConnectBandwidth"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MaxBandwidth") != m.end() && !m["MaxBandwidth"].empty()) {
      maxBandwidth = make_shared<long>(boost::any_cast<long>(m["MaxBandwidth"]));
    }
    if (m.find("MinBandwidth") != m.end() && !m["MinBandwidth"].empty()) {
      minBandwidth = make_shared<long>(boost::any_cast<long>(m["MinBandwidth"]));
    }
    if (m.find("Payer") != m.end() && !m["Payer"].empty()) {
      payer = make_shared<string>(boost::any_cast<string>(m["Payer"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceBusinessStatus") != m.end() && !m["ServiceBusinessStatus"].empty()) {
      serviceBusinessStatus = make_shared<string>(boost::any_cast<string>(m["ServiceBusinessStatus"]));
    }
    if (m.find("ServiceDescription") != m.end() && !m["ServiceDescription"].empty()) {
      serviceDescription = make_shared<string>(boost::any_cast<string>(m["ServiceDescription"]));
    }
    if (m.find("ServiceDomain") != m.end() && !m["ServiceDomain"].empty()) {
      serviceDomain = make_shared<string>(boost::any_cast<string>(m["ServiceDomain"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceResourceType") != m.end() && !m["ServiceResourceType"].empty()) {
      serviceResourceType = make_shared<string>(boost::any_cast<string>(m["ServiceResourceType"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ZoneAffinityEnabled") != m.end() && !m["ZoneAffinityEnabled"].empty()) {
      zoneAffinityEnabled = make_shared<bool>(boost::any_cast<bool>(m["ZoneAffinityEnabled"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Zones"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zones = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetVpcEndpointServiceAttributeResponseBody() = default;
};
class GetVpcEndpointServiceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVpcEndpointServiceAttributeResponseBody> body{};

  GetVpcEndpointServiceAttributeResponse() {}

  explicit GetVpcEndpointServiceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetVpcEndpointServiceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVpcEndpointServiceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~GetVpcEndpointServiceAttributeResponse() = default;
};
class ListVpcEndpointConnectionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionStatus{};
  shared_ptr<string> endpointId{};
  shared_ptr<long> endpointOwnerId{};
  shared_ptr<string> eniId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};

  ListVpcEndpointConnectionsRequest() {}

  explicit ListVpcEndpointConnectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointOwnerId) {
      res["EndpointOwnerId"] = boost::any(*endpointOwnerId);
    }
    if (eniId) {
      res["EniId"] = boost::any(*eniId);
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
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointOwnerId") != m.end() && !m["EndpointOwnerId"].empty()) {
      endpointOwnerId = make_shared<long>(boost::any_cast<long>(m["EndpointOwnerId"]));
    }
    if (m.find("EniId") != m.end() && !m["EniId"].empty()) {
      eniId = make_shared<string>(boost::any_cast<string>(m["EniId"]));
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
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~ListVpcEndpointConnectionsRequest() = default;
};
class ListVpcEndpointConnectionsResponseBodyConnectionsZones : public Darabonba::Model {
public:
  shared_ptr<string> eniId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneDomain{};
  shared_ptr<string> zoneId{};

  ListVpcEndpointConnectionsResponseBodyConnectionsZones() {}

  explicit ListVpcEndpointConnectionsResponseBodyConnectionsZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eniId) {
      res["EniId"] = boost::any(*eniId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneDomain) {
      res["ZoneDomain"] = boost::any(*zoneDomain);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EniId") != m.end() && !m["EniId"].empty()) {
      eniId = make_shared<string>(boost::any_cast<string>(m["EniId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneDomain") != m.end() && !m["ZoneDomain"].empty()) {
      zoneDomain = make_shared<string>(boost::any_cast<string>(m["ZoneDomain"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListVpcEndpointConnectionsResponseBodyConnectionsZones() = default;
};
class ListVpcEndpointConnectionsResponseBodyConnections : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> connectionStatus{};
  shared_ptr<string> endpointId{};
  shared_ptr<long> endpointOwnerId{};
  shared_ptr<string> endpointVpcId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<bool> resourceOwner{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<ListVpcEndpointConnectionsResponseBodyConnectionsZones>> zones{};

  ListVpcEndpointConnectionsResponseBodyConnections() {}

  explicit ListVpcEndpointConnectionsResponseBodyConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointOwnerId) {
      res["EndpointOwnerId"] = boost::any(*endpointOwnerId);
    }
    if (endpointVpcId) {
      res["EndpointVpcId"] = boost::any(*endpointVpcId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (resourceOwner) {
      res["ResourceOwner"] = boost::any(*resourceOwner);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
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
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointOwnerId") != m.end() && !m["EndpointOwnerId"].empty()) {
      endpointOwnerId = make_shared<long>(boost::any_cast<long>(m["EndpointOwnerId"]));
    }
    if (m.find("EndpointVpcId") != m.end() && !m["EndpointVpcId"].empty()) {
      endpointVpcId = make_shared<string>(boost::any_cast<string>(m["EndpointVpcId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ResourceOwner") != m.end() && !m["ResourceOwner"].empty()) {
      resourceOwner = make_shared<bool>(boost::any_cast<bool>(m["ResourceOwner"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<ListVpcEndpointConnectionsResponseBodyConnectionsZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcEndpointConnectionsResponseBodyConnectionsZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<ListVpcEndpointConnectionsResponseBodyConnectionsZones>>(expect1);
      }
    }
  }


  virtual ~ListVpcEndpointConnectionsResponseBodyConnections() = default;
};
class ListVpcEndpointConnectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListVpcEndpointConnectionsResponseBodyConnections>> connections{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListVpcEndpointConnectionsResponseBody() {}

  explicit ListVpcEndpointConnectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connections) {
      vector<boost::any> temp1;
      for(auto item1:*connections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Connections"] = boost::any(temp1);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      if (typeid(vector<boost::any>) == m["Connections"].type()) {
        vector<ListVpcEndpointConnectionsResponseBodyConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Connections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcEndpointConnectionsResponseBodyConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connections = make_shared<vector<ListVpcEndpointConnectionsResponseBodyConnections>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVpcEndpointConnectionsResponseBody() = default;
};
class ListVpcEndpointConnectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVpcEndpointConnectionsResponseBody> body{};

  ListVpcEndpointConnectionsResponse() {}

  explicit ListVpcEndpointConnectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVpcEndpointConnectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcEndpointConnectionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpcEndpointConnectionsResponse() = default;
};
class ListVpcEndpointSecurityGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListVpcEndpointSecurityGroupsRequest() {}

  explicit ListVpcEndpointSecurityGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
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
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
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


  virtual ~ListVpcEndpointSecurityGroupsRequest() = default;
};
class ListVpcEndpointSecurityGroupsResponseBodySecurityGroups : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};

  ListVpcEndpointSecurityGroupsResponseBodySecurityGroups() {}

  explicit ListVpcEndpointSecurityGroupsResponseBodySecurityGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
  }


  virtual ~ListVpcEndpointSecurityGroupsResponseBodySecurityGroups() = default;
};
class ListVpcEndpointSecurityGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListVpcEndpointSecurityGroupsResponseBodySecurityGroups>> securityGroups{};

  ListVpcEndpointSecurityGroupsResponseBody() {}

  explicit ListVpcEndpointSecurityGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (securityGroups) {
      vector<boost::any> temp1;
      for(auto item1:*securityGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityGroups") != m.end() && !m["SecurityGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityGroups"].type()) {
        vector<ListVpcEndpointSecurityGroupsResponseBodySecurityGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcEndpointSecurityGroupsResponseBodySecurityGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityGroups = make_shared<vector<ListVpcEndpointSecurityGroupsResponseBodySecurityGroups>>(expect1);
      }
    }
  }


  virtual ~ListVpcEndpointSecurityGroupsResponseBody() = default;
};
class ListVpcEndpointSecurityGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVpcEndpointSecurityGroupsResponseBody> body{};

  ListVpcEndpointSecurityGroupsResponse() {}

  explicit ListVpcEndpointSecurityGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVpcEndpointSecurityGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcEndpointSecurityGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpcEndpointSecurityGroupsResponse() = default;
};
class ListVpcEndpointServiceResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};

  ListVpcEndpointServiceResourcesRequest() {}

  explicit ListVpcEndpointServiceResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~ListVpcEndpointServiceResourcesRequest() = default;
};
class ListVpcEndpointServiceResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ListVpcEndpointServiceResourcesResponseBodyResources() {}

  explicit ListVpcEndpointServiceResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
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
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListVpcEndpointServiceResourcesResponseBodyResources() = default;
};
class ListVpcEndpointServiceResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListVpcEndpointServiceResourcesResponseBodyResources>> resources{};

  ListVpcEndpointServiceResourcesResponseBody() {}

  explicit ListVpcEndpointServiceResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<ListVpcEndpointServiceResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcEndpointServiceResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListVpcEndpointServiceResourcesResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~ListVpcEndpointServiceResourcesResponseBody() = default;
};
class ListVpcEndpointServiceResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVpcEndpointServiceResourcesResponseBody> body{};

  ListVpcEndpointServiceResourcesResponse() {}

  explicit ListVpcEndpointServiceResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVpcEndpointServiceResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcEndpointServiceResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpcEndpointServiceResourcesResponse() = default;
};
class ListVpcEndpointServiceUsersRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<long> userId{};

  ListVpcEndpointServiceUsersRequest() {}

  explicit ListVpcEndpointServiceUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~ListVpcEndpointServiceUsersRequest() = default;
};
class ListVpcEndpointServiceUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<long> userId{};

  ListVpcEndpointServiceUsersResponseBodyUsers() {}

  explicit ListVpcEndpointServiceUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~ListVpcEndpointServiceUsersResponseBodyUsers() = default;
};
class ListVpcEndpointServiceUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListVpcEndpointServiceUsersResponseBodyUsers>> users{};

  ListVpcEndpointServiceUsersResponseBody() {}

  explicit ListVpcEndpointServiceUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<ListVpcEndpointServiceUsersResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcEndpointServiceUsersResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListVpcEndpointServiceUsersResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~ListVpcEndpointServiceUsersResponseBody() = default;
};
class ListVpcEndpointServiceUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVpcEndpointServiceUsersResponseBody> body{};

  ListVpcEndpointServiceUsersResponse() {}

  explicit ListVpcEndpointServiceUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVpcEndpointServiceUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcEndpointServiceUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpcEndpointServiceUsersResponse() = default;
};
class ListVpcEndpointServicesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoAcceptEnabled{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceBusinessStatus{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceResourceType{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<bool> zoneAffinityEnabled{};

  ListVpcEndpointServicesRequest() {}

  explicit ListVpcEndpointServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoAcceptEnabled) {
      res["AutoAcceptEnabled"] = boost::any(*autoAcceptEnabled);
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
    if (serviceBusinessStatus) {
      res["ServiceBusinessStatus"] = boost::any(*serviceBusinessStatus);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceResourceType) {
      res["ServiceResourceType"] = boost::any(*serviceResourceType);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    if (zoneAffinityEnabled) {
      res["ZoneAffinityEnabled"] = boost::any(*zoneAffinityEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoAcceptEnabled") != m.end() && !m["AutoAcceptEnabled"].empty()) {
      autoAcceptEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoAcceptEnabled"]));
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
    if (m.find("ServiceBusinessStatus") != m.end() && !m["ServiceBusinessStatus"].empty()) {
      serviceBusinessStatus = make_shared<string>(boost::any_cast<string>(m["ServiceBusinessStatus"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceResourceType") != m.end() && !m["ServiceResourceType"].empty()) {
      serviceResourceType = make_shared<string>(boost::any_cast<string>(m["ServiceResourceType"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
    if (m.find("ZoneAffinityEnabled") != m.end() && !m["ZoneAffinityEnabled"].empty()) {
      zoneAffinityEnabled = make_shared<bool>(boost::any_cast<bool>(m["ZoneAffinityEnabled"]));
    }
  }


  virtual ~ListVpcEndpointServicesRequest() = default;
};
class ListVpcEndpointServicesResponseBodyServices : public Darabonba::Model {
public:
  shared_ptr<bool> autoAcceptEnabled{};
  shared_ptr<long> connectBandwidth{};
  shared_ptr<string> createTime{};
  shared_ptr<long> maxBandwidth{};
  shared_ptr<long> minBandwidth{};
  shared_ptr<string> payer{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceBusinessStatus{};
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> serviceDomain{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceResourceType{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> serviceType{};
  shared_ptr<bool> zoneAffinityEnabled{};

  ListVpcEndpointServicesResponseBodyServices() {}

  explicit ListVpcEndpointServicesResponseBodyServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoAcceptEnabled) {
      res["AutoAcceptEnabled"] = boost::any(*autoAcceptEnabled);
    }
    if (connectBandwidth) {
      res["ConnectBandwidth"] = boost::any(*connectBandwidth);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (maxBandwidth) {
      res["MaxBandwidth"] = boost::any(*maxBandwidth);
    }
    if (minBandwidth) {
      res["MinBandwidth"] = boost::any(*minBandwidth);
    }
    if (payer) {
      res["Payer"] = boost::any(*payer);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceBusinessStatus) {
      res["ServiceBusinessStatus"] = boost::any(*serviceBusinessStatus);
    }
    if (serviceDescription) {
      res["ServiceDescription"] = boost::any(*serviceDescription);
    }
    if (serviceDomain) {
      res["ServiceDomain"] = boost::any(*serviceDomain);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceResourceType) {
      res["ServiceResourceType"] = boost::any(*serviceResourceType);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (zoneAffinityEnabled) {
      res["ZoneAffinityEnabled"] = boost::any(*zoneAffinityEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoAcceptEnabled") != m.end() && !m["AutoAcceptEnabled"].empty()) {
      autoAcceptEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoAcceptEnabled"]));
    }
    if (m.find("ConnectBandwidth") != m.end() && !m["ConnectBandwidth"].empty()) {
      connectBandwidth = make_shared<long>(boost::any_cast<long>(m["ConnectBandwidth"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MaxBandwidth") != m.end() && !m["MaxBandwidth"].empty()) {
      maxBandwidth = make_shared<long>(boost::any_cast<long>(m["MaxBandwidth"]));
    }
    if (m.find("MinBandwidth") != m.end() && !m["MinBandwidth"].empty()) {
      minBandwidth = make_shared<long>(boost::any_cast<long>(m["MinBandwidth"]));
    }
    if (m.find("Payer") != m.end() && !m["Payer"].empty()) {
      payer = make_shared<string>(boost::any_cast<string>(m["Payer"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceBusinessStatus") != m.end() && !m["ServiceBusinessStatus"].empty()) {
      serviceBusinessStatus = make_shared<string>(boost::any_cast<string>(m["ServiceBusinessStatus"]));
    }
    if (m.find("ServiceDescription") != m.end() && !m["ServiceDescription"].empty()) {
      serviceDescription = make_shared<string>(boost::any_cast<string>(m["ServiceDescription"]));
    }
    if (m.find("ServiceDomain") != m.end() && !m["ServiceDomain"].empty()) {
      serviceDomain = make_shared<string>(boost::any_cast<string>(m["ServiceDomain"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceResourceType") != m.end() && !m["ServiceResourceType"].empty()) {
      serviceResourceType = make_shared<string>(boost::any_cast<string>(m["ServiceResourceType"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ZoneAffinityEnabled") != m.end() && !m["ZoneAffinityEnabled"].empty()) {
      zoneAffinityEnabled = make_shared<bool>(boost::any_cast<bool>(m["ZoneAffinityEnabled"]));
    }
  }


  virtual ~ListVpcEndpointServicesResponseBodyServices() = default;
};
class ListVpcEndpointServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListVpcEndpointServicesResponseBodyServices>> services{};

  ListVpcEndpointServicesResponseBody() {}

  explicit ListVpcEndpointServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<ListVpcEndpointServicesResponseBodyServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcEndpointServicesResponseBodyServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<ListVpcEndpointServicesResponseBodyServices>>(expect1);
      }
    }
  }


  virtual ~ListVpcEndpointServicesResponseBody() = default;
};
class ListVpcEndpointServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVpcEndpointServicesResponseBody> body{};

  ListVpcEndpointServicesResponse() {}

  explicit ListVpcEndpointServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVpcEndpointServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcEndpointServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpcEndpointServicesResponse() = default;
};
class ListVpcEndpointServicesByEndUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceType{};

  ListVpcEndpointServicesByEndUserRequest() {}

  explicit ListVpcEndpointServicesByEndUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
  }


  virtual ~ListVpcEndpointServicesByEndUserRequest() = default;
};
class ListVpcEndpointServicesByEndUserResponseBodyServices : public Darabonba::Model {
public:
  shared_ptr<string> payer{};
  shared_ptr<string> serviceDomain{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceType{};
  shared_ptr<vector<string>> zones{};

  ListVpcEndpointServicesByEndUserResponseBodyServices() {}

  explicit ListVpcEndpointServicesByEndUserResponseBodyServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payer) {
      res["Payer"] = boost::any(*payer);
    }
    if (serviceDomain) {
      res["ServiceDomain"] = boost::any(*serviceDomain);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (zones) {
      res["Zones"] = boost::any(*zones);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payer") != m.end() && !m["Payer"].empty()) {
      payer = make_shared<string>(boost::any_cast<string>(m["Payer"]));
    }
    if (m.find("ServiceDomain") != m.end() && !m["ServiceDomain"].empty()) {
      serviceDomain = make_shared<string>(boost::any_cast<string>(m["ServiceDomain"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Zones"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zones = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListVpcEndpointServicesByEndUserResponseBodyServices() = default;
};
class ListVpcEndpointServicesByEndUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListVpcEndpointServicesByEndUserResponseBodyServices>> services{};

  ListVpcEndpointServicesByEndUserResponseBody() {}

  explicit ListVpcEndpointServicesByEndUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<ListVpcEndpointServicesByEndUserResponseBodyServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcEndpointServicesByEndUserResponseBodyServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<ListVpcEndpointServicesByEndUserResponseBodyServices>>(expect1);
      }
    }
  }


  virtual ~ListVpcEndpointServicesByEndUserResponseBody() = default;
};
class ListVpcEndpointServicesByEndUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVpcEndpointServicesByEndUserResponseBody> body{};

  ListVpcEndpointServicesByEndUserResponse() {}

  explicit ListVpcEndpointServicesByEndUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVpcEndpointServicesByEndUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcEndpointServicesByEndUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpcEndpointServicesByEndUserResponse() = default;
};
class ListVpcEndpointZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListVpcEndpointZonesRequest() {}

  explicit ListVpcEndpointZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
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
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
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


  virtual ~ListVpcEndpointZonesRequest() = default;
};
class ListVpcEndpointZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<string> eniId{};
  shared_ptr<string> eniIp{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneDomain{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneStatus{};

  ListVpcEndpointZonesResponseBodyZones() {}

  explicit ListVpcEndpointZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eniId) {
      res["EniId"] = boost::any(*eniId);
    }
    if (eniIp) {
      res["EniIp"] = boost::any(*eniIp);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneDomain) {
      res["ZoneDomain"] = boost::any(*zoneDomain);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneStatus) {
      res["ZoneStatus"] = boost::any(*zoneStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EniId") != m.end() && !m["EniId"].empty()) {
      eniId = make_shared<string>(boost::any_cast<string>(m["EniId"]));
    }
    if (m.find("EniIp") != m.end() && !m["EniIp"].empty()) {
      eniIp = make_shared<string>(boost::any_cast<string>(m["EniIp"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneDomain") != m.end() && !m["ZoneDomain"].empty()) {
      zoneDomain = make_shared<string>(boost::any_cast<string>(m["ZoneDomain"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneStatus") != m.end() && !m["ZoneStatus"].empty()) {
      zoneStatus = make_shared<string>(boost::any_cast<string>(m["ZoneStatus"]));
    }
  }


  virtual ~ListVpcEndpointZonesResponseBodyZones() = default;
};
class ListVpcEndpointZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListVpcEndpointZonesResponseBodyZones>> zones{};

  ListVpcEndpointZonesResponseBody() {}

  explicit ListVpcEndpointZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<ListVpcEndpointZonesResponseBodyZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcEndpointZonesResponseBodyZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<ListVpcEndpointZonesResponseBodyZones>>(expect1);
      }
    }
  }


  virtual ~ListVpcEndpointZonesResponseBody() = default;
};
class ListVpcEndpointZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVpcEndpointZonesResponseBody> body{};

  ListVpcEndpointZonesResponse() {}

  explicit ListVpcEndpointZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVpcEndpointZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcEndpointZonesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpcEndpointZonesResponse() = default;
};
class ListVpcEndpointsRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionStatus{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointName{};
  shared_ptr<string> endpointStatus{};
  shared_ptr<string> endpointType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> vpcId{};

  ListVpcEndpointsRequest() {}

  explicit ListVpcEndpointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointName) {
      res["EndpointName"] = boost::any(*endpointName);
    }
    if (endpointStatus) {
      res["EndpointStatus"] = boost::any(*endpointStatus);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
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
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointName") != m.end() && !m["EndpointName"].empty()) {
      endpointName = make_shared<string>(boost::any_cast<string>(m["EndpointName"]));
    }
    if (m.find("EndpointStatus") != m.end() && !m["EndpointStatus"].empty()) {
      endpointStatus = make_shared<string>(boost::any_cast<string>(m["EndpointStatus"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
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
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListVpcEndpointsRequest() = default;
};
class ListVpcEndpointsResponseBodyEndpoints : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> connectionStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endpointBusinessStatus{};
  shared_ptr<string> endpointDescription{};
  shared_ptr<string> endpointDomain{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointName{};
  shared_ptr<string> endpointStatus{};
  shared_ptr<string> endpointType{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> resourceOwner{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> vpcId{};
  shared_ptr<bool> zoneAffinityEnabled{};

  ListVpcEndpointsResponseBodyEndpoints() {}

  explicit ListVpcEndpointsResponseBodyEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endpointBusinessStatus) {
      res["EndpointBusinessStatus"] = boost::any(*endpointBusinessStatus);
    }
    if (endpointDescription) {
      res["EndpointDescription"] = boost::any(*endpointDescription);
    }
    if (endpointDomain) {
      res["EndpointDomain"] = boost::any(*endpointDomain);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointName) {
      res["EndpointName"] = boost::any(*endpointName);
    }
    if (endpointStatus) {
      res["EndpointStatus"] = boost::any(*endpointStatus);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwner) {
      res["ResourceOwner"] = boost::any(*resourceOwner);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneAffinityEnabled) {
      res["ZoneAffinityEnabled"] = boost::any(*zoneAffinityEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndpointBusinessStatus") != m.end() && !m["EndpointBusinessStatus"].empty()) {
      endpointBusinessStatus = make_shared<string>(boost::any_cast<string>(m["EndpointBusinessStatus"]));
    }
    if (m.find("EndpointDescription") != m.end() && !m["EndpointDescription"].empty()) {
      endpointDescription = make_shared<string>(boost::any_cast<string>(m["EndpointDescription"]));
    }
    if (m.find("EndpointDomain") != m.end() && !m["EndpointDomain"].empty()) {
      endpointDomain = make_shared<string>(boost::any_cast<string>(m["EndpointDomain"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointName") != m.end() && !m["EndpointName"].empty()) {
      endpointName = make_shared<string>(boost::any_cast<string>(m["EndpointName"]));
    }
    if (m.find("EndpointStatus") != m.end() && !m["EndpointStatus"].empty()) {
      endpointStatus = make_shared<string>(boost::any_cast<string>(m["EndpointStatus"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwner") != m.end() && !m["ResourceOwner"].empty()) {
      resourceOwner = make_shared<bool>(boost::any_cast<bool>(m["ResourceOwner"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneAffinityEnabled") != m.end() && !m["ZoneAffinityEnabled"].empty()) {
      zoneAffinityEnabled = make_shared<bool>(boost::any_cast<bool>(m["ZoneAffinityEnabled"]));
    }
  }


  virtual ~ListVpcEndpointsResponseBodyEndpoints() = default;
};
class ListVpcEndpointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListVpcEndpointsResponseBodyEndpoints>> endpoints{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListVpcEndpointsResponseBody() {}

  explicit ListVpcEndpointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoints) {
      vector<boost::any> temp1;
      for(auto item1:*endpoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Endpoints"] = boost::any(temp1);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(vector<boost::any>) == m["Endpoints"].type()) {
        vector<ListVpcEndpointsResponseBodyEndpoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Endpoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcEndpointsResponseBodyEndpoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpoints = make_shared<vector<ListVpcEndpointsResponseBodyEndpoints>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVpcEndpointsResponseBody() = default;
};
class ListVpcEndpointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVpcEndpointsResponseBody> body{};

  ListVpcEndpointsResponse() {}

  explicit ListVpcEndpointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVpcEndpointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcEndpointsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpcEndpointsResponse() = default;
};
class OpenPrivateLinkServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};

  OpenPrivateLinkServiceRequest() {}

  explicit OpenPrivateLinkServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~OpenPrivateLinkServiceRequest() = default;
};
class OpenPrivateLinkServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenPrivateLinkServiceResponseBody() {}

  explicit OpenPrivateLinkServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenPrivateLinkServiceResponseBody() = default;
};
class OpenPrivateLinkServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OpenPrivateLinkServiceResponseBody> body{};

  OpenPrivateLinkServiceResponse() {}

  explicit OpenPrivateLinkServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OpenPrivateLinkServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenPrivateLinkServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenPrivateLinkServiceResponse() = default;
};
class RemoveUserFromVpcEndpointServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<long> userId{};

  RemoveUserFromVpcEndpointServiceRequest() {}

  explicit RemoveUserFromVpcEndpointServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~RemoveUserFromVpcEndpointServiceRequest() = default;
};
class RemoveUserFromVpcEndpointServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveUserFromVpcEndpointServiceResponseBody() {}

  explicit RemoveUserFromVpcEndpointServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveUserFromVpcEndpointServiceResponseBody() = default;
};
class RemoveUserFromVpcEndpointServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveUserFromVpcEndpointServiceResponseBody> body{};

  RemoveUserFromVpcEndpointServiceResponse() {}

  explicit RemoveUserFromVpcEndpointServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveUserFromVpcEndpointServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveUserFromVpcEndpointServiceResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveUserFromVpcEndpointServiceResponse() = default;
};
class RemoveZoneFromVpcEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  RemoveZoneFromVpcEndpointRequest() {}

  explicit RemoveZoneFromVpcEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~RemoveZoneFromVpcEndpointRequest() = default;
};
class RemoveZoneFromVpcEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveZoneFromVpcEndpointResponseBody() {}

  explicit RemoveZoneFromVpcEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveZoneFromVpcEndpointResponseBody() = default;
};
class RemoveZoneFromVpcEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveZoneFromVpcEndpointResponseBody> body{};

  RemoveZoneFromVpcEndpointResponse() {}

  explicit RemoveZoneFromVpcEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveZoneFromVpcEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveZoneFromVpcEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveZoneFromVpcEndpointResponse() = default;
};
class UpdateVpcEndpointAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> endpointDescription{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointName{};
  shared_ptr<string> regionId{};

  UpdateVpcEndpointAttributeRequest() {}

  explicit UpdateVpcEndpointAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (endpointDescription) {
      res["EndpointDescription"] = boost::any(*endpointDescription);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointName) {
      res["EndpointName"] = boost::any(*endpointName);
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
    if (m.find("EndpointDescription") != m.end() && !m["EndpointDescription"].empty()) {
      endpointDescription = make_shared<string>(boost::any_cast<string>(m["EndpointDescription"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointName") != m.end() && !m["EndpointName"].empty()) {
      endpointName = make_shared<string>(boost::any_cast<string>(m["EndpointName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateVpcEndpointAttributeRequest() = default;
};
class UpdateVpcEndpointAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateVpcEndpointAttributeResponseBody() {}

  explicit UpdateVpcEndpointAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateVpcEndpointAttributeResponseBody() = default;
};
class UpdateVpcEndpointAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateVpcEndpointAttributeResponseBody> body{};

  UpdateVpcEndpointAttributeResponse() {}

  explicit UpdateVpcEndpointAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateVpcEndpointAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVpcEndpointAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVpcEndpointAttributeResponse() = default;
};
class UpdateVpcEndpointConnectionAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};

  UpdateVpcEndpointConnectionAttributeRequest() {}

  explicit UpdateVpcEndpointConnectionAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
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
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~UpdateVpcEndpointConnectionAttributeRequest() = default;
};
class UpdateVpcEndpointConnectionAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateVpcEndpointConnectionAttributeResponseBody() {}

  explicit UpdateVpcEndpointConnectionAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateVpcEndpointConnectionAttributeResponseBody() = default;
};
class UpdateVpcEndpointConnectionAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateVpcEndpointConnectionAttributeResponseBody> body{};

  UpdateVpcEndpointConnectionAttributeResponse() {}

  explicit UpdateVpcEndpointConnectionAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateVpcEndpointConnectionAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVpcEndpointConnectionAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVpcEndpointConnectionAttributeResponse() = default;
};
class UpdateVpcEndpointServiceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoAcceptEnabled{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> connectBandwidth{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceDescription{};
  shared_ptr<string> serviceId{};
  shared_ptr<bool> zoneAffinityEnabled{};

  UpdateVpcEndpointServiceAttributeRequest() {}

  explicit UpdateVpcEndpointServiceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoAcceptEnabled) {
      res["AutoAcceptEnabled"] = boost::any(*autoAcceptEnabled);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectBandwidth) {
      res["ConnectBandwidth"] = boost::any(*connectBandwidth);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
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
    if (zoneAffinityEnabled) {
      res["ZoneAffinityEnabled"] = boost::any(*zoneAffinityEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoAcceptEnabled") != m.end() && !m["AutoAcceptEnabled"].empty()) {
      autoAcceptEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoAcceptEnabled"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConnectBandwidth") != m.end() && !m["ConnectBandwidth"].empty()) {
      connectBandwidth = make_shared<long>(boost::any_cast<long>(m["ConnectBandwidth"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
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
    if (m.find("ZoneAffinityEnabled") != m.end() && !m["ZoneAffinityEnabled"].empty()) {
      zoneAffinityEnabled = make_shared<bool>(boost::any_cast<bool>(m["ZoneAffinityEnabled"]));
    }
  }


  virtual ~UpdateVpcEndpointServiceAttributeRequest() = default;
};
class UpdateVpcEndpointServiceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateVpcEndpointServiceAttributeResponseBody() {}

  explicit UpdateVpcEndpointServiceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateVpcEndpointServiceAttributeResponseBody() = default;
};
class UpdateVpcEndpointServiceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateVpcEndpointServiceAttributeResponseBody> body{};

  UpdateVpcEndpointServiceAttributeResponse() {}

  explicit UpdateVpcEndpointServiceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateVpcEndpointServiceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVpcEndpointServiceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVpcEndpointServiceAttributeResponse() = default;
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
  AddUserToVpcEndpointServiceResponse addUserToVpcEndpointServiceWithOptions(shared_ptr<AddUserToVpcEndpointServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserToVpcEndpointServiceResponse addUserToVpcEndpointService(shared_ptr<AddUserToVpcEndpointServiceRequest> request);
  AddZoneToVpcEndpointResponse addZoneToVpcEndpointWithOptions(shared_ptr<AddZoneToVpcEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddZoneToVpcEndpointResponse addZoneToVpcEndpoint(shared_ptr<AddZoneToVpcEndpointRequest> request);
  AttachResourceToVpcEndpointServiceResponse attachResourceToVpcEndpointServiceWithOptions(shared_ptr<AttachResourceToVpcEndpointServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachResourceToVpcEndpointServiceResponse attachResourceToVpcEndpointService(shared_ptr<AttachResourceToVpcEndpointServiceRequest> request);
  AttachSecurityGroupToVpcEndpointResponse attachSecurityGroupToVpcEndpointWithOptions(shared_ptr<AttachSecurityGroupToVpcEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachSecurityGroupToVpcEndpointResponse attachSecurityGroupToVpcEndpoint(shared_ptr<AttachSecurityGroupToVpcEndpointRequest> request);
  CheckProductOpenResponse checkProductOpenWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckProductOpenResponse checkProductOpen();
  CreateVpcEndpointResponse createVpcEndpointWithOptions(shared_ptr<CreateVpcEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVpcEndpointResponse createVpcEndpoint(shared_ptr<CreateVpcEndpointRequest> request);
  CreateVpcEndpointServiceResponse createVpcEndpointServiceWithOptions(shared_ptr<CreateVpcEndpointServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVpcEndpointServiceResponse createVpcEndpointService(shared_ptr<CreateVpcEndpointServiceRequest> request);
  DeleteVpcEndpointResponse deleteVpcEndpointWithOptions(shared_ptr<DeleteVpcEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVpcEndpointResponse deleteVpcEndpoint(shared_ptr<DeleteVpcEndpointRequest> request);
  DeleteVpcEndpointServiceResponse deleteVpcEndpointServiceWithOptions(shared_ptr<DeleteVpcEndpointServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVpcEndpointServiceResponse deleteVpcEndpointService(shared_ptr<DeleteVpcEndpointServiceRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  DetachResourceFromVpcEndpointServiceResponse detachResourceFromVpcEndpointServiceWithOptions(shared_ptr<DetachResourceFromVpcEndpointServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachResourceFromVpcEndpointServiceResponse detachResourceFromVpcEndpointService(shared_ptr<DetachResourceFromVpcEndpointServiceRequest> request);
  DetachSecurityGroupFromVpcEndpointResponse detachSecurityGroupFromVpcEndpointWithOptions(shared_ptr<DetachSecurityGroupFromVpcEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachSecurityGroupFromVpcEndpointResponse detachSecurityGroupFromVpcEndpoint(shared_ptr<DetachSecurityGroupFromVpcEndpointRequest> request);
  DisableVpcEndpointConnectionResponse disableVpcEndpointConnectionWithOptions(shared_ptr<DisableVpcEndpointConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableVpcEndpointConnectionResponse disableVpcEndpointConnection(shared_ptr<DisableVpcEndpointConnectionRequest> request);
  EnableVpcEndpointConnectionResponse enableVpcEndpointConnectionWithOptions(shared_ptr<EnableVpcEndpointConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableVpcEndpointConnectionResponse enableVpcEndpointConnection(shared_ptr<EnableVpcEndpointConnectionRequest> request);
  GetVpcEndpointAttributeResponse getVpcEndpointAttributeWithOptions(shared_ptr<GetVpcEndpointAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVpcEndpointAttributeResponse getVpcEndpointAttribute(shared_ptr<GetVpcEndpointAttributeRequest> request);
  GetVpcEndpointServiceAttributeResponse getVpcEndpointServiceAttributeWithOptions(shared_ptr<GetVpcEndpointServiceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVpcEndpointServiceAttributeResponse getVpcEndpointServiceAttribute(shared_ptr<GetVpcEndpointServiceAttributeRequest> request);
  ListVpcEndpointConnectionsResponse listVpcEndpointConnectionsWithOptions(shared_ptr<ListVpcEndpointConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcEndpointConnectionsResponse listVpcEndpointConnections(shared_ptr<ListVpcEndpointConnectionsRequest> request);
  ListVpcEndpointSecurityGroupsResponse listVpcEndpointSecurityGroupsWithOptions(shared_ptr<ListVpcEndpointSecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcEndpointSecurityGroupsResponse listVpcEndpointSecurityGroups(shared_ptr<ListVpcEndpointSecurityGroupsRequest> request);
  ListVpcEndpointServiceResourcesResponse listVpcEndpointServiceResourcesWithOptions(shared_ptr<ListVpcEndpointServiceResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcEndpointServiceResourcesResponse listVpcEndpointServiceResources(shared_ptr<ListVpcEndpointServiceResourcesRequest> request);
  ListVpcEndpointServiceUsersResponse listVpcEndpointServiceUsersWithOptions(shared_ptr<ListVpcEndpointServiceUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcEndpointServiceUsersResponse listVpcEndpointServiceUsers(shared_ptr<ListVpcEndpointServiceUsersRequest> request);
  ListVpcEndpointServicesResponse listVpcEndpointServicesWithOptions(shared_ptr<ListVpcEndpointServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcEndpointServicesResponse listVpcEndpointServices(shared_ptr<ListVpcEndpointServicesRequest> request);
  ListVpcEndpointServicesByEndUserResponse listVpcEndpointServicesByEndUserWithOptions(shared_ptr<ListVpcEndpointServicesByEndUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcEndpointServicesByEndUserResponse listVpcEndpointServicesByEndUser(shared_ptr<ListVpcEndpointServicesByEndUserRequest> request);
  ListVpcEndpointZonesResponse listVpcEndpointZonesWithOptions(shared_ptr<ListVpcEndpointZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcEndpointZonesResponse listVpcEndpointZones(shared_ptr<ListVpcEndpointZonesRequest> request);
  ListVpcEndpointsResponse listVpcEndpointsWithOptions(shared_ptr<ListVpcEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcEndpointsResponse listVpcEndpoints(shared_ptr<ListVpcEndpointsRequest> request);
  OpenPrivateLinkServiceResponse openPrivateLinkServiceWithOptions(shared_ptr<OpenPrivateLinkServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenPrivateLinkServiceResponse openPrivateLinkService(shared_ptr<OpenPrivateLinkServiceRequest> request);
  RemoveUserFromVpcEndpointServiceResponse removeUserFromVpcEndpointServiceWithOptions(shared_ptr<RemoveUserFromVpcEndpointServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUserFromVpcEndpointServiceResponse removeUserFromVpcEndpointService(shared_ptr<RemoveUserFromVpcEndpointServiceRequest> request);
  RemoveZoneFromVpcEndpointResponse removeZoneFromVpcEndpointWithOptions(shared_ptr<RemoveZoneFromVpcEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveZoneFromVpcEndpointResponse removeZoneFromVpcEndpoint(shared_ptr<RemoveZoneFromVpcEndpointRequest> request);
  UpdateVpcEndpointAttributeResponse updateVpcEndpointAttributeWithOptions(shared_ptr<UpdateVpcEndpointAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVpcEndpointAttributeResponse updateVpcEndpointAttribute(shared_ptr<UpdateVpcEndpointAttributeRequest> request);
  UpdateVpcEndpointConnectionAttributeResponse updateVpcEndpointConnectionAttributeWithOptions(shared_ptr<UpdateVpcEndpointConnectionAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVpcEndpointConnectionAttributeResponse updateVpcEndpointConnectionAttribute(shared_ptr<UpdateVpcEndpointConnectionAttributeRequest> request);
  UpdateVpcEndpointServiceAttributeResponse updateVpcEndpointServiceAttributeWithOptions(shared_ptr<UpdateVpcEndpointServiceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVpcEndpointServiceAttributeResponse updateVpcEndpointServiceAttribute(shared_ptr<UpdateVpcEndpointServiceAttributeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Privatelink20200415

#endif
