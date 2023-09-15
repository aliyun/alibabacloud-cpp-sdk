// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EAIS20190624_H_
#define ALIBABACLOUD_EAIS20190624_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eais20190624 {
class AttachEaiRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInstanceId{};
  shared_ptr<string> elasticAcceleratedInstanceId{};
  shared_ptr<string> regionId{};

  AttachEaiRequest() {}

  explicit AttachEaiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInstanceId) {
      res["ClientInstanceId"] = boost::any(*clientInstanceId);
    }
    if (elasticAcceleratedInstanceId) {
      res["ElasticAcceleratedInstanceId"] = boost::any(*elasticAcceleratedInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInstanceId") != m.end() && !m["ClientInstanceId"].empty()) {
      clientInstanceId = make_shared<string>(boost::any_cast<string>(m["ClientInstanceId"]));
    }
    if (m.find("ElasticAcceleratedInstanceId") != m.end() && !m["ElasticAcceleratedInstanceId"].empty()) {
      elasticAcceleratedInstanceId = make_shared<string>(boost::any_cast<string>(m["ElasticAcceleratedInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AttachEaiRequest() = default;
};
class AttachEaiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clientInstanceId{};
  shared_ptr<string> elasticAcceleratedInstanceId{};
  shared_ptr<string> requestId{};

  AttachEaiResponseBody() {}

  explicit AttachEaiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInstanceId) {
      res["ClientInstanceId"] = boost::any(*clientInstanceId);
    }
    if (elasticAcceleratedInstanceId) {
      res["ElasticAcceleratedInstanceId"] = boost::any(*elasticAcceleratedInstanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInstanceId") != m.end() && !m["ClientInstanceId"].empty()) {
      clientInstanceId = make_shared<string>(boost::any_cast<string>(m["ClientInstanceId"]));
    }
    if (m.find("ElasticAcceleratedInstanceId") != m.end() && !m["ElasticAcceleratedInstanceId"].empty()) {
      elasticAcceleratedInstanceId = make_shared<string>(boost::any_cast<string>(m["ElasticAcceleratedInstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachEaiResponseBody() = default;
};
class AttachEaiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachEaiResponseBody> body{};

  AttachEaiResponse() {}

  explicit AttachEaiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachEaiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachEaiResponseBody>(model1);
      }
    }
  }


  virtual ~AttachEaiResponse() = default;
};
class AttachEaisEiRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInstanceId{};
  shared_ptr<string> eiInstanceId{};
  shared_ptr<string> eiInstanceType{};
  shared_ptr<string> regionId{};

  AttachEaisEiRequest() {}

  explicit AttachEaisEiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInstanceId) {
      res["ClientInstanceId"] = boost::any(*clientInstanceId);
    }
    if (eiInstanceId) {
      res["EiInstanceId"] = boost::any(*eiInstanceId);
    }
    if (eiInstanceType) {
      res["EiInstanceType"] = boost::any(*eiInstanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInstanceId") != m.end() && !m["ClientInstanceId"].empty()) {
      clientInstanceId = make_shared<string>(boost::any_cast<string>(m["ClientInstanceId"]));
    }
    if (m.find("EiInstanceId") != m.end() && !m["EiInstanceId"].empty()) {
      eiInstanceId = make_shared<string>(boost::any_cast<string>(m["EiInstanceId"]));
    }
    if (m.find("EiInstanceType") != m.end() && !m["EiInstanceType"].empty()) {
      eiInstanceType = make_shared<string>(boost::any_cast<string>(m["EiInstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AttachEaisEiRequest() = default;
};
class AttachEaisEiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clientInstanceId{};
  shared_ptr<string> eiInstanceId{};
  shared_ptr<string> requestId{};

  AttachEaisEiResponseBody() {}

  explicit AttachEaisEiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInstanceId) {
      res["ClientInstanceId"] = boost::any(*clientInstanceId);
    }
    if (eiInstanceId) {
      res["EiInstanceId"] = boost::any(*eiInstanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInstanceId") != m.end() && !m["ClientInstanceId"].empty()) {
      clientInstanceId = make_shared<string>(boost::any_cast<string>(m["ClientInstanceId"]));
    }
    if (m.find("EiInstanceId") != m.end() && !m["EiInstanceId"].empty()) {
      eiInstanceId = make_shared<string>(boost::any_cast<string>(m["EiInstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachEaisEiResponseBody() = default;
};
class AttachEaisEiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachEaisEiResponseBody> body{};

  AttachEaisEiResponse() {}

  explicit AttachEaisEiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachEaisEiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachEaisEiResponseBody>(model1);
      }
    }
  }


  virtual ~AttachEaisEiResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceRegionId{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
  }


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangeResourceGroupResponseBody() {}

  explicit ChangeResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeResourceGroupResponseBody() = default;
};
class ChangeResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeResourceGroupResponseBody> body{};

  ChangeResourceGroupResponse() {}

  explicit ChangeResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class CreateEaiRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> image{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};

  CreateEaiRequest() {}

  explicit CreateEaiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateEaiRequest() = default;
};
class CreateEaiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> elasticAcceleratedInstanceId{};
  shared_ptr<string> requestId{};

  CreateEaiResponseBody() {}

  explicit CreateEaiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticAcceleratedInstanceId) {
      res["ElasticAcceleratedInstanceId"] = boost::any(*elasticAcceleratedInstanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticAcceleratedInstanceId") != m.end() && !m["ElasticAcceleratedInstanceId"].empty()) {
      elasticAcceleratedInstanceId = make_shared<string>(boost::any_cast<string>(m["ElasticAcceleratedInstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateEaiResponseBody() = default;
};
class CreateEaiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEaiResponseBody> body{};

  CreateEaiResponse() {}

  explicit CreateEaiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEaiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEaiResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEaiResponse() = default;
};
class CreateEaiAllRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientImageId{};
  shared_ptr<string> clientInstanceName{};
  shared_ptr<string> clientInstanceType{};
  shared_ptr<long> clientInternetMaxBandwidthIn{};
  shared_ptr<long> clientInternetMaxBandwidthOut{};
  shared_ptr<string> clientPassword{};
  shared_ptr<string> clientSecurityGroupId{};
  shared_ptr<string> clientSystemDiskCategory{};
  shared_ptr<long> clientSystemDiskSize{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clientVSwitchId{};
  shared_ptr<string> clientZoneId{};
  shared_ptr<string> eaiInstanceType{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  CreateEaiAllRequest() {}

  explicit CreateEaiAllRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientImageId) {
      res["ClientImageId"] = boost::any(*clientImageId);
    }
    if (clientInstanceName) {
      res["ClientInstanceName"] = boost::any(*clientInstanceName);
    }
    if (clientInstanceType) {
      res["ClientInstanceType"] = boost::any(*clientInstanceType);
    }
    if (clientInternetMaxBandwidthIn) {
      res["ClientInternetMaxBandwidthIn"] = boost::any(*clientInternetMaxBandwidthIn);
    }
    if (clientInternetMaxBandwidthOut) {
      res["ClientInternetMaxBandwidthOut"] = boost::any(*clientInternetMaxBandwidthOut);
    }
    if (clientPassword) {
      res["ClientPassword"] = boost::any(*clientPassword);
    }
    if (clientSecurityGroupId) {
      res["ClientSecurityGroupId"] = boost::any(*clientSecurityGroupId);
    }
    if (clientSystemDiskCategory) {
      res["ClientSystemDiskCategory"] = boost::any(*clientSystemDiskCategory);
    }
    if (clientSystemDiskSize) {
      res["ClientSystemDiskSize"] = boost::any(*clientSystemDiskSize);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clientVSwitchId) {
      res["ClientVSwitchId"] = boost::any(*clientVSwitchId);
    }
    if (clientZoneId) {
      res["ClientZoneId"] = boost::any(*clientZoneId);
    }
    if (eaiInstanceType) {
      res["EaiInstanceType"] = boost::any(*eaiInstanceType);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
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
    if (m.find("ClientImageId") != m.end() && !m["ClientImageId"].empty()) {
      clientImageId = make_shared<string>(boost::any_cast<string>(m["ClientImageId"]));
    }
    if (m.find("ClientInstanceName") != m.end() && !m["ClientInstanceName"].empty()) {
      clientInstanceName = make_shared<string>(boost::any_cast<string>(m["ClientInstanceName"]));
    }
    if (m.find("ClientInstanceType") != m.end() && !m["ClientInstanceType"].empty()) {
      clientInstanceType = make_shared<string>(boost::any_cast<string>(m["ClientInstanceType"]));
    }
    if (m.find("ClientInternetMaxBandwidthIn") != m.end() && !m["ClientInternetMaxBandwidthIn"].empty()) {
      clientInternetMaxBandwidthIn = make_shared<long>(boost::any_cast<long>(m["ClientInternetMaxBandwidthIn"]));
    }
    if (m.find("ClientInternetMaxBandwidthOut") != m.end() && !m["ClientInternetMaxBandwidthOut"].empty()) {
      clientInternetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["ClientInternetMaxBandwidthOut"]));
    }
    if (m.find("ClientPassword") != m.end() && !m["ClientPassword"].empty()) {
      clientPassword = make_shared<string>(boost::any_cast<string>(m["ClientPassword"]));
    }
    if (m.find("ClientSecurityGroupId") != m.end() && !m["ClientSecurityGroupId"].empty()) {
      clientSecurityGroupId = make_shared<string>(boost::any_cast<string>(m["ClientSecurityGroupId"]));
    }
    if (m.find("ClientSystemDiskCategory") != m.end() && !m["ClientSystemDiskCategory"].empty()) {
      clientSystemDiskCategory = make_shared<string>(boost::any_cast<string>(m["ClientSystemDiskCategory"]));
    }
    if (m.find("ClientSystemDiskSize") != m.end() && !m["ClientSystemDiskSize"].empty()) {
      clientSystemDiskSize = make_shared<long>(boost::any_cast<long>(m["ClientSystemDiskSize"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClientVSwitchId") != m.end() && !m["ClientVSwitchId"].empty()) {
      clientVSwitchId = make_shared<string>(boost::any_cast<string>(m["ClientVSwitchId"]));
    }
    if (m.find("ClientZoneId") != m.end() && !m["ClientZoneId"].empty()) {
      clientZoneId = make_shared<string>(boost::any_cast<string>(m["ClientZoneId"]));
    }
    if (m.find("EaiInstanceType") != m.end() && !m["EaiInstanceType"].empty()) {
      eaiInstanceType = make_shared<string>(boost::any_cast<string>(m["EaiInstanceType"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CreateEaiAllRequest() = default;
};
class CreateEaiAllResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clientInstanceId{};
  shared_ptr<string> elasticAcceleratedInstanceId{};
  shared_ptr<string> requestId{};

  CreateEaiAllResponseBody() {}

  explicit CreateEaiAllResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInstanceId) {
      res["ClientInstanceId"] = boost::any(*clientInstanceId);
    }
    if (elasticAcceleratedInstanceId) {
      res["ElasticAcceleratedInstanceId"] = boost::any(*elasticAcceleratedInstanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInstanceId") != m.end() && !m["ClientInstanceId"].empty()) {
      clientInstanceId = make_shared<string>(boost::any_cast<string>(m["ClientInstanceId"]));
    }
    if (m.find("ElasticAcceleratedInstanceId") != m.end() && !m["ElasticAcceleratedInstanceId"].empty()) {
      elasticAcceleratedInstanceId = make_shared<string>(boost::any_cast<string>(m["ElasticAcceleratedInstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateEaiAllResponseBody() = default;
};
class CreateEaiAllResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEaiAllResponseBody> body{};

  CreateEaiAllResponse() {}

  explicit CreateEaiAllResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEaiAllResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEaiAllResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEaiAllResponse() = default;
};
class CreateEaiEciRequestEciContainer : public Darabonba::Model {
public:
  shared_ptr<string> arg{};
  shared_ptr<string> command{};
  shared_ptr<string> image{};
  shared_ptr<string> name{};
  shared_ptr<string> volumes{};

  CreateEaiEciRequestEciContainer() {}

  explicit CreateEaiEciRequestEciContainer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arg) {
      res["Arg"] = boost::any(*arg);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (volumes) {
      res["Volumes"] = boost::any(*volumes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arg") != m.end() && !m["Arg"].empty()) {
      arg = make_shared<string>(boost::any_cast<string>(m["Arg"]));
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Volumes") != m.end() && !m["Volumes"].empty()) {
      volumes = make_shared<string>(boost::any_cast<string>(m["Volumes"]));
    }
  }


  virtual ~CreateEaiEciRequestEciContainer() = default;
};
class CreateEaiEciRequestEci : public Darabonba::Model {
public:
  shared_ptr<CreateEaiEciRequestEciContainer> container{};
  shared_ptr<string> eipId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> volume{};

  CreateEaiEciRequestEci() {}

  explicit CreateEaiEciRequestEci(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (container) {
      res["Container"] = container ? boost::any(container->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (eipId) {
      res["EipId"] = boost::any(*eipId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Container") != m.end() && !m["Container"].empty()) {
      if (typeid(map<string, boost::any>) == m["Container"].type()) {
        CreateEaiEciRequestEciContainer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Container"]));
        container = make_shared<CreateEaiEciRequestEciContainer>(model1);
      }
    }
    if (m.find("EipId") != m.end() && !m["EipId"].empty()) {
      eipId = make_shared<string>(boost::any_cast<string>(m["EipId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<string>(boost::any_cast<string>(m["Volume"]));
    }
  }


  virtual ~CreateEaiEciRequestEci() = default;
};
class CreateEaiEciRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> eaisName{};
  shared_ptr<string> eaisType{};
  shared_ptr<CreateEaiEciRequestEci> eci{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};

  CreateEaiEciRequest() {}

  explicit CreateEaiEciRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (eaisName) {
      res["EaisName"] = boost::any(*eaisName);
    }
    if (eaisType) {
      res["EaisType"] = boost::any(*eaisType);
    }
    if (eci) {
      res["Eci"] = eci ? boost::any(eci->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EaisName") != m.end() && !m["EaisName"].empty()) {
      eaisName = make_shared<string>(boost::any_cast<string>(m["EaisName"]));
    }
    if (m.find("EaisType") != m.end() && !m["EaisType"].empty()) {
      eaisType = make_shared<string>(boost::any_cast<string>(m["EaisType"]));
    }
    if (m.find("Eci") != m.end() && !m["Eci"].empty()) {
      if (typeid(map<string, boost::any>) == m["Eci"].type()) {
        CreateEaiEciRequestEci model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Eci"]));
        eci = make_shared<CreateEaiEciRequestEci>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateEaiEciRequest() = default;
};
class CreateEaiEciShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> eaisName{};
  shared_ptr<string> eaisType{};
  shared_ptr<string> eciShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};

  CreateEaiEciShrinkRequest() {}

  explicit CreateEaiEciShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (eaisName) {
      res["EaisName"] = boost::any(*eaisName);
    }
    if (eaisType) {
      res["EaisType"] = boost::any(*eaisType);
    }
    if (eciShrink) {
      res["Eci"] = boost::any(*eciShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EaisName") != m.end() && !m["EaisName"].empty()) {
      eaisName = make_shared<string>(boost::any_cast<string>(m["EaisName"]));
    }
    if (m.find("EaisType") != m.end() && !m["EaisType"].empty()) {
      eaisType = make_shared<string>(boost::any_cast<string>(m["EaisType"]));
    }
    if (m.find("Eci") != m.end() && !m["Eci"].empty()) {
      eciShrink = make_shared<string>(boost::any_cast<string>(m["Eci"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateEaiEciShrinkRequest() = default;
};
class CreateEaiEciResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clientInstanceId{};
  shared_ptr<string> elasticAcceleratedInstanceId{};
  shared_ptr<string> requestId{};

  CreateEaiEciResponseBody() {}

  explicit CreateEaiEciResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInstanceId) {
      res["ClientInstanceId"] = boost::any(*clientInstanceId);
    }
    if (elasticAcceleratedInstanceId) {
      res["ElasticAcceleratedInstanceId"] = boost::any(*elasticAcceleratedInstanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInstanceId") != m.end() && !m["ClientInstanceId"].empty()) {
      clientInstanceId = make_shared<string>(boost::any_cast<string>(m["ClientInstanceId"]));
    }
    if (m.find("ElasticAcceleratedInstanceId") != m.end() && !m["ElasticAcceleratedInstanceId"].empty()) {
      elasticAcceleratedInstanceId = make_shared<string>(boost::any_cast<string>(m["ElasticAcceleratedInstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateEaiEciResponseBody() = default;
};
class CreateEaiEciResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEaiEciResponseBody> body{};

  CreateEaiEciResponse() {}

  explicit CreateEaiEciResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEaiEciResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEaiEciResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEaiEciResponse() = default;
};
class CreateEaiEcsRequestEcs : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> internetMaxBandwidthIn{};
  shared_ptr<string> internetMaxBandwidthOut{};
  shared_ptr<string> name{};
  shared_ptr<string> password{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<string> type{};
  shared_ptr<string> zoneId{};

  CreateEaiEcsRequestEcs() {}

  explicit CreateEaiEcsRequestEcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (internetMaxBandwidthIn) {
      res["InternetMaxBandwidthIn"] = boost::any(*internetMaxBandwidthIn);
    }
    if (internetMaxBandwidthOut) {
      res["InternetMaxBandwidthOut"] = boost::any(*internetMaxBandwidthOut);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InternetMaxBandwidthIn") != m.end() && !m["InternetMaxBandwidthIn"].empty()) {
      internetMaxBandwidthIn = make_shared<string>(boost::any_cast<string>(m["InternetMaxBandwidthIn"]));
    }
    if (m.find("InternetMaxBandwidthOut") != m.end() && !m["InternetMaxBandwidthOut"].empty()) {
      internetMaxBandwidthOut = make_shared<string>(boost::any_cast<string>(m["InternetMaxBandwidthOut"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateEaiEcsRequestEcs() = default;
};
class CreateEaiEcsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> eaisName{};
  shared_ptr<string> eaisType{};
  shared_ptr<CreateEaiEcsRequestEcs> ecs{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};

  CreateEaiEcsRequest() {}

  explicit CreateEaiEcsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (eaisName) {
      res["EaisName"] = boost::any(*eaisName);
    }
    if (eaisType) {
      res["EaisType"] = boost::any(*eaisType);
    }
    if (ecs) {
      res["Ecs"] = ecs ? boost::any(ecs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EaisName") != m.end() && !m["EaisName"].empty()) {
      eaisName = make_shared<string>(boost::any_cast<string>(m["EaisName"]));
    }
    if (m.find("EaisType") != m.end() && !m["EaisType"].empty()) {
      eaisType = make_shared<string>(boost::any_cast<string>(m["EaisType"]));
    }
    if (m.find("Ecs") != m.end() && !m["Ecs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Ecs"].type()) {
        CreateEaiEcsRequestEcs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Ecs"]));
        ecs = make_shared<CreateEaiEcsRequestEcs>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateEaiEcsRequest() = default;
};
class CreateEaiEcsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> eaisName{};
  shared_ptr<string> eaisType{};
  shared_ptr<string> ecsShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};

  CreateEaiEcsShrinkRequest() {}

  explicit CreateEaiEcsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (eaisName) {
      res["EaisName"] = boost::any(*eaisName);
    }
    if (eaisType) {
      res["EaisType"] = boost::any(*eaisType);
    }
    if (ecsShrink) {
      res["Ecs"] = boost::any(*ecsShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EaisName") != m.end() && !m["EaisName"].empty()) {
      eaisName = make_shared<string>(boost::any_cast<string>(m["EaisName"]));
    }
    if (m.find("EaisType") != m.end() && !m["EaisType"].empty()) {
      eaisType = make_shared<string>(boost::any_cast<string>(m["EaisType"]));
    }
    if (m.find("Ecs") != m.end() && !m["Ecs"].empty()) {
      ecsShrink = make_shared<string>(boost::any_cast<string>(m["Ecs"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateEaiEcsShrinkRequest() = default;
};
class CreateEaiEcsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clientInstanceId{};
  shared_ptr<string> elasticAcceleratedInstanceId{};
  shared_ptr<string> requestId{};

  CreateEaiEcsResponseBody() {}

  explicit CreateEaiEcsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInstanceId) {
      res["ClientInstanceId"] = boost::any(*clientInstanceId);
    }
    if (elasticAcceleratedInstanceId) {
      res["ElasticAcceleratedInstanceId"] = boost::any(*elasticAcceleratedInstanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInstanceId") != m.end() && !m["ClientInstanceId"].empty()) {
      clientInstanceId = make_shared<string>(boost::any_cast<string>(m["ClientInstanceId"]));
    }
    if (m.find("ElasticAcceleratedInstanceId") != m.end() && !m["ElasticAcceleratedInstanceId"].empty()) {
      elasticAcceleratedInstanceId = make_shared<string>(boost::any_cast<string>(m["ElasticAcceleratedInstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateEaiEcsResponseBody() = default;
};
class CreateEaiEcsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEaiEcsResponseBody> body{};

  CreateEaiEcsResponse() {}

  explicit CreateEaiEcsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEaiEcsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEaiEcsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEaiEcsResponse() = default;
};
class CreateEaiJupyterRequestEnvironmentVar : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateEaiJupyterRequestEnvironmentVar() {}

  explicit CreateEaiJupyterRequestEnvironmentVar(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateEaiJupyterRequestEnvironmentVar() = default;
};
class CreateEaiJupyterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> eaisName{};
  shared_ptr<string> eaisType{};
  shared_ptr<vector<CreateEaiJupyterRequestEnvironmentVar>> environmentVar{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};

  CreateEaiJupyterRequest() {}

  explicit CreateEaiJupyterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (eaisName) {
      res["EaisName"] = boost::any(*eaisName);
    }
    if (eaisType) {
      res["EaisType"] = boost::any(*eaisType);
    }
    if (environmentVar) {
      vector<boost::any> temp1;
      for(auto item1:*environmentVar){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EnvironmentVar"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EaisName") != m.end() && !m["EaisName"].empty()) {
      eaisName = make_shared<string>(boost::any_cast<string>(m["EaisName"]));
    }
    if (m.find("EaisType") != m.end() && !m["EaisType"].empty()) {
      eaisType = make_shared<string>(boost::any_cast<string>(m["EaisType"]));
    }
    if (m.find("EnvironmentVar") != m.end() && !m["EnvironmentVar"].empty()) {
      if (typeid(vector<boost::any>) == m["EnvironmentVar"].type()) {
        vector<CreateEaiJupyterRequestEnvironmentVar> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EnvironmentVar"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEaiJupyterRequestEnvironmentVar model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environmentVar = make_shared<vector<CreateEaiJupyterRequestEnvironmentVar>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateEaiJupyterRequest() = default;
};
class CreateEaiJupyterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> eaisName{};
  shared_ptr<string> eaisType{};
  shared_ptr<string> environmentVarShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};

  CreateEaiJupyterShrinkRequest() {}

  explicit CreateEaiJupyterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (eaisName) {
      res["EaisName"] = boost::any(*eaisName);
    }
    if (eaisType) {
      res["EaisType"] = boost::any(*eaisType);
    }
    if (environmentVarShrink) {
      res["EnvironmentVar"] = boost::any(*environmentVarShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EaisName") != m.end() && !m["EaisName"].empty()) {
      eaisName = make_shared<string>(boost::any_cast<string>(m["EaisName"]));
    }
    if (m.find("EaisType") != m.end() && !m["EaisType"].empty()) {
      eaisType = make_shared<string>(boost::any_cast<string>(m["EaisType"]));
    }
    if (m.find("EnvironmentVar") != m.end() && !m["EnvironmentVar"].empty()) {
      environmentVarShrink = make_shared<string>(boost::any_cast<string>(m["EnvironmentVar"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateEaiJupyterShrinkRequest() = default;
};
class CreateEaiJupyterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> elasticAcceleratedInstanceId{};
  shared_ptr<string> requestId{};

  CreateEaiJupyterResponseBody() {}

  explicit CreateEaiJupyterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticAcceleratedInstanceId) {
      res["ElasticAcceleratedInstanceId"] = boost::any(*elasticAcceleratedInstanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticAcceleratedInstanceId") != m.end() && !m["ElasticAcceleratedInstanceId"].empty()) {
      elasticAcceleratedInstanceId = make_shared<string>(boost::any_cast<string>(m["ElasticAcceleratedInstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateEaiJupyterResponseBody() = default;
};
class CreateEaiJupyterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEaiJupyterResponseBody> body{};

  CreateEaiJupyterResponse() {}

  explicit CreateEaiJupyterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEaiJupyterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEaiJupyterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEaiJupyterResponse() = default;
};
class CreateEaisEiRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};

  CreateEaisEiRequest() {}

  explicit CreateEaisEiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateEaisEiRequest() = default;
};
class CreateEaisEiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eiInstanceId{};
  shared_ptr<string> requestId{};

  CreateEaisEiResponseBody() {}

  explicit CreateEaisEiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eiInstanceId) {
      res["EiInstanceId"] = boost::any(*eiInstanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EiInstanceId") != m.end() && !m["EiInstanceId"].empty()) {
      eiInstanceId = make_shared<string>(boost::any_cast<string>(m["EiInstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateEaisEiResponseBody() = default;
};
class CreateEaisEiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEaisEiResponseBody> body{};

  CreateEaisEiResponse() {}

  explicit CreateEaisEiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEaisEiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEaisEiResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEaisEiResponse() = default;
};
class DeleteEaiRequest : public Darabonba::Model {
public:
  shared_ptr<string> elasticAcceleratedInstanceId{};
  shared_ptr<bool> force{};
  shared_ptr<string> regionId{};

  DeleteEaiRequest() {}

  explicit DeleteEaiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticAcceleratedInstanceId) {
      res["ElasticAcceleratedInstanceId"] = boost::any(*elasticAcceleratedInstanceId);
    }
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticAcceleratedInstanceId") != m.end() && !m["ElasticAcceleratedInstanceId"].empty()) {
      elasticAcceleratedInstanceId = make_shared<string>(boost::any_cast<string>(m["ElasticAcceleratedInstanceId"]));
    }
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteEaiRequest() = default;
};
class DeleteEaiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEaiResponseBody() {}

  explicit DeleteEaiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteEaiResponseBody() = default;
};
class DeleteEaiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEaiResponseBody> body{};

  DeleteEaiResponse() {}

  explicit DeleteEaiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEaiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEaiResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEaiResponse() = default;
};
class DeleteEaiAllRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInstanceId{};
  shared_ptr<string> elasticAcceleratedInstanceId{};
  shared_ptr<string> regionId{};

  DeleteEaiAllRequest() {}

  explicit DeleteEaiAllRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInstanceId) {
      res["ClientInstanceId"] = boost::any(*clientInstanceId);
    }
    if (elasticAcceleratedInstanceId) {
      res["ElasticAcceleratedInstanceId"] = boost::any(*elasticAcceleratedInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInstanceId") != m.end() && !m["ClientInstanceId"].empty()) {
      clientInstanceId = make_shared<string>(boost::any_cast<string>(m["ClientInstanceId"]));
    }
    if (m.find("ElasticAcceleratedInstanceId") != m.end() && !m["ElasticAcceleratedInstanceId"].empty()) {
      elasticAcceleratedInstanceId = make_shared<string>(boost::any_cast<string>(m["ElasticAcceleratedInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteEaiAllRequest() = default;
};
class DeleteEaiAllResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEaiAllResponseBody() {}

  explicit DeleteEaiAllResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteEaiAllResponseBody() = default;
};
class DeleteEaiAllResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEaiAllResponseBody> body{};

  DeleteEaiAllResponse() {}

  explicit DeleteEaiAllResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEaiAllResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEaiAllResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEaiAllResponse() = default;
};
class DeleteEaisEiRequest : public Darabonba::Model {
public:
  shared_ptr<string> eiInstanceId{};
  shared_ptr<bool> force{};
  shared_ptr<string> regionId{};

  DeleteEaisEiRequest() {}

  explicit DeleteEaisEiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eiInstanceId) {
      res["EiInstanceId"] = boost::any(*eiInstanceId);
    }
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EiInstanceId") != m.end() && !m["EiInstanceId"].empty()) {
      eiInstanceId = make_shared<string>(boost::any_cast<string>(m["EiInstanceId"]));
    }
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteEaisEiRequest() = default;
};
class DeleteEaisEiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEaisEiResponseBody() {}

  explicit DeleteEaisEiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteEaisEiResponseBody() = default;
};
class DeleteEaisEiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEaisEiResponseBody> body{};

  DeleteEaisEiResponse() {}

  explicit DeleteEaisEiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEaisEiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEaisEiResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEaisEiResponse() = default;
};
class DescribeEaisRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeEaisRequestTag() {}

  explicit DescribeEaisRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeEaisRequestTag() = default;
};
class DescribeEaisRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientInstanceId{};
  shared_ptr<string> elasticAcceleratedInstanceIds{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeEaisRequestTag>> tag{};

  DescribeEaisRequest() {}

  explicit DescribeEaisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInstanceId) {
      res["ClientInstanceId"] = boost::any(*clientInstanceId);
    }
    if (elasticAcceleratedInstanceIds) {
      res["ElasticAcceleratedInstanceIds"] = boost::any(*elasticAcceleratedInstanceIds);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
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
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("ClientInstanceId") != m.end() && !m["ClientInstanceId"].empty()) {
      clientInstanceId = make_shared<string>(boost::any_cast<string>(m["ClientInstanceId"]));
    }
    if (m.find("ElasticAcceleratedInstanceIds") != m.end() && !m["ElasticAcceleratedInstanceIds"].empty()) {
      elasticAcceleratedInstanceIds = make_shared<string>(boost::any_cast<string>(m["ElasticAcceleratedInstanceIds"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeEaisRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEaisRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeEaisRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeEaisRequest() = default;
};
class DescribeEaisResponseBodyInstancesInstanceTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeEaisResponseBodyInstancesInstanceTagsTag() {}

  explicit DescribeEaisResponseBodyInstancesInstanceTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~DescribeEaisResponseBodyInstancesInstanceTagsTag() = default;
};
class DescribeEaisResponseBodyInstancesInstanceTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEaisResponseBodyInstancesInstanceTagsTag>> tag{};

  DescribeEaisResponseBodyInstancesInstanceTags() {}

  explicit DescribeEaisResponseBodyInstancesInstanceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeEaisResponseBodyInstancesInstanceTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEaisResponseBodyInstancesInstanceTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeEaisResponseBodyInstancesInstanceTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeEaisResponseBodyInstancesInstanceTags() = default;
};
class DescribeEaisResponseBodyInstancesInstance : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> clientInstanceId{};
  shared_ptr<string> clientInstanceName{};
  shared_ptr<string> clientInstanceType{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> description{};
  shared_ptr<string> elasticAcceleratedInstanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> jupyterUrl{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<DescribeEaisResponseBodyInstancesInstanceTags> tags{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  DescribeEaisResponseBodyInstancesInstance() {}

  explicit DescribeEaisResponseBodyInstancesInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (clientInstanceId) {
      res["ClientInstanceId"] = boost::any(*clientInstanceId);
    }
    if (clientInstanceName) {
      res["ClientInstanceName"] = boost::any(*clientInstanceName);
    }
    if (clientInstanceType) {
      res["ClientInstanceType"] = boost::any(*clientInstanceType);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (elasticAcceleratedInstanceId) {
      res["ElasticAcceleratedInstanceId"] = boost::any(*elasticAcceleratedInstanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (jupyterUrl) {
      res["JupyterUrl"] = boost::any(*jupyterUrl);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ClientInstanceId") != m.end() && !m["ClientInstanceId"].empty()) {
      clientInstanceId = make_shared<string>(boost::any_cast<string>(m["ClientInstanceId"]));
    }
    if (m.find("ClientInstanceName") != m.end() && !m["ClientInstanceName"].empty()) {
      clientInstanceName = make_shared<string>(boost::any_cast<string>(m["ClientInstanceName"]));
    }
    if (m.find("ClientInstanceType") != m.end() && !m["ClientInstanceType"].empty()) {
      clientInstanceType = make_shared<string>(boost::any_cast<string>(m["ClientInstanceType"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ElasticAcceleratedInstanceId") != m.end() && !m["ElasticAcceleratedInstanceId"].empty()) {
      elasticAcceleratedInstanceId = make_shared<string>(boost::any_cast<string>(m["ElasticAcceleratedInstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("JupyterUrl") != m.end() && !m["JupyterUrl"].empty()) {
      jupyterUrl = make_shared<string>(boost::any_cast<string>(m["JupyterUrl"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeEaisResponseBodyInstancesInstanceTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeEaisResponseBodyInstancesInstanceTags>(model1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeEaisResponseBodyInstancesInstance() = default;
};
class DescribeEaisResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEaisResponseBodyInstancesInstance>> instance{};

  DescribeEaisResponseBodyInstances() {}

  explicit DescribeEaisResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<DescribeEaisResponseBodyInstancesInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEaisResponseBodyInstancesInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<DescribeEaisResponseBodyInstancesInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeEaisResponseBodyInstances() = default;
};
class DescribeEaisResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeEaisResponseBodyInstances> instances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeEaisResponseBody() {}

  explicit DescribeEaisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      res["Instances"] = instances ? boost::any(instances->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instances"].type()) {
        DescribeEaisResponseBodyInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instances"]));
        instances = make_shared<DescribeEaisResponseBodyInstances>(model1);
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


  virtual ~DescribeEaisResponseBody() = default;
};
class DescribeEaisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEaisResponseBody> body{};

  DescribeEaisResponse() {}

  explicit DescribeEaisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEaisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEaisResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEaisResponse() = default;
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
class DetachEaiRequest : public Darabonba::Model {
public:
  shared_ptr<string> elasticAcceleratedInstanceId{};
  shared_ptr<string> regionId{};

  DetachEaiRequest() {}

  explicit DetachEaiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticAcceleratedInstanceId) {
      res["ElasticAcceleratedInstanceId"] = boost::any(*elasticAcceleratedInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticAcceleratedInstanceId") != m.end() && !m["ElasticAcceleratedInstanceId"].empty()) {
      elasticAcceleratedInstanceId = make_shared<string>(boost::any_cast<string>(m["ElasticAcceleratedInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DetachEaiRequest() = default;
};
class DetachEaiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachEaiResponseBody() {}

  explicit DetachEaiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachEaiResponseBody() = default;
};
class DetachEaiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachEaiResponseBody> body{};

  DetachEaiResponse() {}

  explicit DetachEaiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachEaiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachEaiResponseBody>(model1);
      }
    }
  }


  virtual ~DetachEaiResponse() = default;
};
class DetachEaisEiRequest : public Darabonba::Model {
public:
  shared_ptr<string> eiInstanceId{};
  shared_ptr<string> regionId{};

  DetachEaisEiRequest() {}

  explicit DetachEaisEiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eiInstanceId) {
      res["EiInstanceId"] = boost::any(*eiInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EiInstanceId") != m.end() && !m["EiInstanceId"].empty()) {
      eiInstanceId = make_shared<string>(boost::any_cast<string>(m["EiInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DetachEaisEiRequest() = default;
};
class DetachEaisEiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachEaisEiResponseBody() {}

  explicit DetachEaisEiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachEaisEiResponseBody() = default;
};
class DetachEaisEiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachEaisEiResponseBody> body{};

  DetachEaisEiResponse() {}

  explicit DetachEaisEiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachEaisEiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachEaisEiResponseBody>(model1);
      }
    }
  }


  virtual ~DetachEaisEiResponse() = default;
};
class GetInstanceMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> metricType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeStep{};

  GetInstanceMetricsRequest() {}

  explicit GetInstanceMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeStep) {
      res["TimeStep"] = boost::any(*timeStep);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeStep") != m.end() && !m["TimeStep"].empty()) {
      timeStep = make_shared<string>(boost::any_cast<string>(m["TimeStep"]));
    }
  }


  virtual ~GetInstanceMetricsRequest() = default;
};
class GetInstanceMetricsResponseBodyPodMetricsMetrics : public Darabonba::Model {
public:
  shared_ptr<string> time{};
  shared_ptr<string> value{};

  GetInstanceMetricsResponseBodyPodMetricsMetrics() {}

  explicit GetInstanceMetricsResponseBodyPodMetricsMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetInstanceMetricsResponseBodyPodMetricsMetrics() = default;
};
class GetInstanceMetricsResponseBodyPodMetrics : public Darabonba::Model {
public:
  shared_ptr<vector<GetInstanceMetricsResponseBodyPodMetricsMetrics>> metrics{};
  shared_ptr<string> podId{};

  GetInstanceMetricsResponseBodyPodMetrics() {}

  explicit GetInstanceMetricsResponseBodyPodMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (podId) {
      res["PodId"] = boost::any(*podId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<GetInstanceMetricsResponseBodyPodMetricsMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceMetricsResponseBodyPodMetricsMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<GetInstanceMetricsResponseBodyPodMetricsMetrics>>(expect1);
      }
    }
    if (m.find("PodId") != m.end() && !m["PodId"].empty()) {
      podId = make_shared<string>(boost::any_cast<string>(m["PodId"]));
    }
  }


  virtual ~GetInstanceMetricsResponseBodyPodMetrics() = default;
};
class GetInstanceMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<GetInstanceMetricsResponseBodyPodMetrics>> podMetrics{};
  shared_ptr<string> requestId{};

  GetInstanceMetricsResponseBody() {}

  explicit GetInstanceMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (podMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*podMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PodMetrics"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PodMetrics") != m.end() && !m["PodMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["PodMetrics"].type()) {
        vector<GetInstanceMetricsResponseBodyPodMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PodMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceMetricsResponseBodyPodMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        podMetrics = make_shared<vector<GetInstanceMetricsResponseBodyPodMetrics>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetInstanceMetricsResponseBody() = default;
};
class GetInstanceMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceMetricsResponseBody> body{};

  GetInstanceMetricsResponse() {}

  explicit GetInstanceMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceMetricsResponse() = default;
};
class StartEaisEiRequest : public Darabonba::Model {
public:
  shared_ptr<string> eiInstanceId{};
  shared_ptr<string> regionId{};

  StartEaisEiRequest() {}

  explicit StartEaisEiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eiInstanceId) {
      res["EiInstanceId"] = boost::any(*eiInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EiInstanceId") != m.end() && !m["EiInstanceId"].empty()) {
      eiInstanceId = make_shared<string>(boost::any_cast<string>(m["EiInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StartEaisEiRequest() = default;
};
class StartEaisEiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartEaisEiResponseBody() {}

  explicit StartEaisEiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartEaisEiResponseBody() = default;
};
class StartEaisEiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartEaisEiResponseBody> body{};

  StartEaisEiResponse() {}

  explicit StartEaisEiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartEaisEiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartEaisEiResponseBody>(model1);
      }
    }
  }


  virtual ~StartEaisEiResponse() = default;
};
class StopEaisEiRequest : public Darabonba::Model {
public:
  shared_ptr<string> eiInstanceId{};
  shared_ptr<string> regionId{};

  StopEaisEiRequest() {}

  explicit StopEaisEiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eiInstanceId) {
      res["EiInstanceId"] = boost::any(*eiInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EiInstanceId") != m.end() && !m["EiInstanceId"].empty()) {
      eiInstanceId = make_shared<string>(boost::any_cast<string>(m["EiInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StopEaisEiRequest() = default;
};
class StopEaisEiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopEaisEiResponseBody() {}

  explicit StopEaisEiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopEaisEiResponseBody() = default;
};
class StopEaisEiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopEaisEiResponseBody> body{};

  StopEaisEiResponse() {}

  explicit StopEaisEiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopEaisEiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopEaisEiResponseBody>(model1);
      }
    }
  }


  virtual ~StopEaisEiResponse() = default;
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
  AttachEaiResponse attachEaiWithOptions(shared_ptr<AttachEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachEaiResponse attachEai(shared_ptr<AttachEaiRequest> request);
  AttachEaisEiResponse attachEaisEiWithOptions(shared_ptr<AttachEaisEiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachEaisEiResponse attachEaisEi(shared_ptr<AttachEaisEiRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CreateEaiResponse createEaiWithOptions(shared_ptr<CreateEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEaiResponse createEai(shared_ptr<CreateEaiRequest> request);
  CreateEaiAllResponse createEaiAllWithOptions(shared_ptr<CreateEaiAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEaiAllResponse createEaiAll(shared_ptr<CreateEaiAllRequest> request);
  CreateEaiEciResponse createEaiEciWithOptions(shared_ptr<CreateEaiEciRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEaiEciResponse createEaiEci(shared_ptr<CreateEaiEciRequest> request);
  CreateEaiEcsResponse createEaiEcsWithOptions(shared_ptr<CreateEaiEcsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEaiEcsResponse createEaiEcs(shared_ptr<CreateEaiEcsRequest> request);
  CreateEaiJupyterResponse createEaiJupyterWithOptions(shared_ptr<CreateEaiJupyterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEaiJupyterResponse createEaiJupyter(shared_ptr<CreateEaiJupyterRequest> request);
  CreateEaisEiResponse createEaisEiWithOptions(shared_ptr<CreateEaisEiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEaisEiResponse createEaisEi(shared_ptr<CreateEaisEiRequest> request);
  DeleteEaiResponse deleteEaiWithOptions(shared_ptr<DeleteEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEaiResponse deleteEai(shared_ptr<DeleteEaiRequest> request);
  DeleteEaiAllResponse deleteEaiAllWithOptions(shared_ptr<DeleteEaiAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEaiAllResponse deleteEaiAll(shared_ptr<DeleteEaiAllRequest> request);
  DeleteEaisEiResponse deleteEaisEiWithOptions(shared_ptr<DeleteEaisEiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEaisEiResponse deleteEaisEi(shared_ptr<DeleteEaisEiRequest> request);
  DescribeEaisResponse describeEaisWithOptions(shared_ptr<DescribeEaisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEaisResponse describeEais(shared_ptr<DescribeEaisRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DetachEaiResponse detachEaiWithOptions(shared_ptr<DetachEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachEaiResponse detachEai(shared_ptr<DetachEaiRequest> request);
  DetachEaisEiResponse detachEaisEiWithOptions(shared_ptr<DetachEaisEiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachEaisEiResponse detachEaisEi(shared_ptr<DetachEaisEiRequest> request);
  GetInstanceMetricsResponse getInstanceMetricsWithOptions(shared_ptr<GetInstanceMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceMetricsResponse getInstanceMetrics(shared_ptr<GetInstanceMetricsRequest> request);
  StartEaisEiResponse startEaisEiWithOptions(shared_ptr<StartEaisEiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartEaisEiResponse startEaisEi(shared_ptr<StartEaisEiRequest> request);
  StopEaisEiResponse stopEaisEiWithOptions(shared_ptr<StopEaisEiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopEaisEiResponse stopEaisEi(shared_ptr<StopEaisEiRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eais20190624

#endif
