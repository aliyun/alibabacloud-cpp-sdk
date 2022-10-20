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
class CreateEaiRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};
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
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
class CreateEaiJupyterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> eaisType{};
  shared_ptr<string> regionId{};
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
    if (eaisType) {
      res["EaisType"] = boost::any(*eaisType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("EaisType") != m.end() && !m["EaisType"].empty()) {
      eaisType = make_shared<string>(boost::any_cast<string>(m["EaisType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
class DescribeEaisRequest : public Darabonba::Model {
public:
  shared_ptr<string> elasticAcceleratedInstanceIds{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  DescribeEaisRequest() {}

  explicit DescribeEaisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
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
  shared_ptr<string> securityGroupId{};
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
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
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
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
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
  CreateEaiResponse createEaiWithOptions(shared_ptr<CreateEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEaiResponse createEai(shared_ptr<CreateEaiRequest> request);
  CreateEaiAllResponse createEaiAllWithOptions(shared_ptr<CreateEaiAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEaiAllResponse createEaiAll(shared_ptr<CreateEaiAllRequest> request);
  CreateEaiJupyterResponse createEaiJupyterWithOptions(shared_ptr<CreateEaiJupyterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEaiJupyterResponse createEaiJupyter(shared_ptr<CreateEaiJupyterRequest> request);
  DeleteEaiResponse deleteEaiWithOptions(shared_ptr<DeleteEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEaiResponse deleteEai(shared_ptr<DeleteEaiRequest> request);
  DeleteEaiAllResponse deleteEaiAllWithOptions(shared_ptr<DeleteEaiAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEaiAllResponse deleteEaiAll(shared_ptr<DeleteEaiAllRequest> request);
  DescribeEaisResponse describeEaisWithOptions(shared_ptr<DescribeEaisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEaisResponse describeEais(shared_ptr<DescribeEaisRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DetachEaiResponse detachEaiWithOptions(shared_ptr<DetachEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachEaiResponse detachEai(shared_ptr<DetachEaiRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eais20190624

#endif
