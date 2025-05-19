// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EFLO20220530_H_
#define ALIBABACLOUD_EFLO20220530_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eflo20220530 {
class AssignLeniPrivateIpAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> regionId{};

  AssignLeniPrivateIpAddressRequest() {}

  explicit AssignLeniPrivateIpAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
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
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AssignLeniPrivateIpAddressRequest() = default;
};
class AssignLeniPrivateIpAddressResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> ipName{};

  AssignLeniPrivateIpAddressResponseBodyContent() {}

  explicit AssignLeniPrivateIpAddressResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
  }


  virtual ~AssignLeniPrivateIpAddressResponseBodyContent() = default;
};
class AssignLeniPrivateIpAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<AssignLeniPrivateIpAddressResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AssignLeniPrivateIpAddressResponseBody() {}

  explicit AssignLeniPrivateIpAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        AssignLeniPrivateIpAddressResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<AssignLeniPrivateIpAddressResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssignLeniPrivateIpAddressResponseBody() = default;
};
class AssignLeniPrivateIpAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssignLeniPrivateIpAddressResponseBody> body{};

  AssignLeniPrivateIpAddressResponse() {}

  explicit AssignLeniPrivateIpAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssignLeniPrivateIpAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssignLeniPrivateIpAddressResponseBody>(model1);
      }
    }
  }


  virtual ~AssignLeniPrivateIpAddressResponse() = default;
};
class AssignPrivateIpAddressRequest : public Darabonba::Model {
public:
  shared_ptr<bool> assignMac{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> skipConfig{};
  shared_ptr<string> subnetId{};

  AssignPrivateIpAddressRequest() {}

  explicit AssignPrivateIpAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assignMac) {
      res["AssignMac"] = boost::any(*assignMac);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (skipConfig) {
      res["SkipConfig"] = boost::any(*skipConfig);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssignMac") != m.end() && !m["AssignMac"].empty()) {
      assignMac = make_shared<bool>(boost::any_cast<bool>(m["AssignMac"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SkipConfig") != m.end() && !m["SkipConfig"].empty()) {
      skipConfig = make_shared<bool>(boost::any_cast<bool>(m["SkipConfig"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
  }


  virtual ~AssignPrivateIpAddressRequest() = default;
};
class AssignPrivateIpAddressResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> ipName{};
  shared_ptr<string> networkInterfaceId{};

  AssignPrivateIpAddressResponseBodyContent() {}

  explicit AssignPrivateIpAddressResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
  }


  virtual ~AssignPrivateIpAddressResponseBodyContent() = default;
};
class AssignPrivateIpAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<AssignPrivateIpAddressResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AssignPrivateIpAddressResponseBody() {}

  explicit AssignPrivateIpAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        AssignPrivateIpAddressResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<AssignPrivateIpAddressResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssignPrivateIpAddressResponseBody() = default;
};
class AssignPrivateIpAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssignPrivateIpAddressResponseBody> body{};

  AssignPrivateIpAddressResponse() {}

  explicit AssignPrivateIpAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssignPrivateIpAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssignPrivateIpAddressResponseBody>(model1);
      }
    }
  }


  virtual ~AssignPrivateIpAddressResponse() = default;
};
class AssociateVpdCidrBlockRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> secondaryCidrBlock{};
  shared_ptr<string> vpdId{};

  AssociateVpdCidrBlockRequest() {}

  explicit AssociateVpdCidrBlockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (secondaryCidrBlock) {
      res["SecondaryCidrBlock"] = boost::any(*secondaryCidrBlock);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecondaryCidrBlock") != m.end() && !m["SecondaryCidrBlock"].empty()) {
      secondaryCidrBlock = make_shared<string>(boost::any_cast<string>(m["SecondaryCidrBlock"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~AssociateVpdCidrBlockRequest() = default;
};
class AssociateVpdCidrBlockResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> vpdId{};

  AssociateVpdCidrBlockResponseBodyContent() {}

  explicit AssociateVpdCidrBlockResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~AssociateVpdCidrBlockResponseBodyContent() = default;
};
class AssociateVpdCidrBlockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<AssociateVpdCidrBlockResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AssociateVpdCidrBlockResponseBody() {}

  explicit AssociateVpdCidrBlockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        AssociateVpdCidrBlockResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<AssociateVpdCidrBlockResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssociateVpdCidrBlockResponseBody() = default;
};
class AssociateVpdCidrBlockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateVpdCidrBlockResponseBody> body{};

  AssociateVpdCidrBlockResponse() {}

  explicit AssociateVpdCidrBlockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateVpdCidrBlockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateVpdCidrBlockResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateVpdCidrBlockResponse() = default;
};
class AttachElasticNetworkInterfaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> regionId{};

  AttachElasticNetworkInterfaceRequest() {}

  explicit AttachElasticNetworkInterfaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AttachElasticNetworkInterfaceRequest() = default;
};
class AttachElasticNetworkInterfaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AttachElasticNetworkInterfaceResponseBody() {}

  explicit AttachElasticNetworkInterfaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachElasticNetworkInterfaceResponseBody() = default;
};
class AttachElasticNetworkInterfaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachElasticNetworkInterfaceResponseBody> body{};

  AttachElasticNetworkInterfaceResponse() {}

  explicit AttachElasticNetworkInterfaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachElasticNetworkInterfaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachElasticNetworkInterfaceResponseBody>(model1);
      }
    }
  }


  virtual ~AttachElasticNetworkInterfaceResponse() = default;
};
class CreateElasticNetworkInterfaceRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateElasticNetworkInterfaceRequestTag() {}

  explicit CreateElasticNetworkInterfaceRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateElasticNetworkInterfaceRequestTag() = default;
};
class CreateElasticNetworkInterfaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableJumboFrame{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<CreateElasticNetworkInterfaceRequestTag>> tag{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateElasticNetworkInterfaceRequest() {}

  explicit CreateElasticNetworkInterfaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (enableJumboFrame) {
      res["EnableJumboFrame"] = boost::any(*enableJumboFrame);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
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
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnableJumboFrame") != m.end() && !m["EnableJumboFrame"].empty()) {
      enableJumboFrame = make_shared<bool>(boost::any_cast<bool>(m["EnableJumboFrame"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateElasticNetworkInterfaceRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateElasticNetworkInterfaceRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateElasticNetworkInterfaceRequestTag>>(expect1);
      }
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


  virtual ~CreateElasticNetworkInterfaceRequest() = default;
};
class CreateElasticNetworkInterfaceResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> nodeId{};

  CreateElasticNetworkInterfaceResponseBodyContent() {}

  explicit CreateElasticNetworkInterfaceResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~CreateElasticNetworkInterfaceResponseBodyContent() = default;
};
class CreateElasticNetworkInterfaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<CreateElasticNetworkInterfaceResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateElasticNetworkInterfaceResponseBody() {}

  explicit CreateElasticNetworkInterfaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateElasticNetworkInterfaceResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateElasticNetworkInterfaceResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateElasticNetworkInterfaceResponseBody() = default;
};
class CreateElasticNetworkInterfaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateElasticNetworkInterfaceResponseBody> body{};

  CreateElasticNetworkInterfaceResponse() {}

  explicit CreateElasticNetworkInterfaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateElasticNetworkInterfaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateElasticNetworkInterfaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateElasticNetworkInterfaceResponse() = default;
};
class CreateErRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateErRequestTag() {}

  explicit CreateErRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateErRequestTag() = default;
};
class CreateErRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> erName{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<CreateErRequestTag>> tag{};

  CreateErRequest() {}

  explicit CreateErRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (erName) {
      res["ErName"] = boost::any(*erName);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErName") != m.end() && !m["ErName"].empty()) {
      erName = make_shared<string>(boost::any_cast<string>(m["ErName"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateErRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateErRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateErRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateErRequest() = default;
};
class CreateErResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> erId{};

  CreateErResponseBodyContent() {}

  explicit CreateErResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
  }


  virtual ~CreateErResponseBodyContent() = default;
};
class CreateErResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<CreateErResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateErResponseBody() {}

  explicit CreateErResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateErResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateErResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateErResponseBody() = default;
};
class CreateErResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateErResponseBody> body{};

  CreateErResponse() {}

  explicit CreateErResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateErResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateErResponseBody>(model1);
      }
    }
  }


  virtual ~CreateErResponse() = default;
};
class CreateErAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoReceiveAllRoute{};
  shared_ptr<string> erAttachmentName{};
  shared_ptr<string> erId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceTenantId{};

  CreateErAttachmentRequest() {}

  explicit CreateErAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoReceiveAllRoute) {
      res["AutoReceiveAllRoute"] = boost::any(*autoReceiveAllRoute);
    }
    if (erAttachmentName) {
      res["ErAttachmentName"] = boost::any(*erAttachmentName);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceTenantId) {
      res["ResourceTenantId"] = boost::any(*resourceTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoReceiveAllRoute") != m.end() && !m["AutoReceiveAllRoute"].empty()) {
      autoReceiveAllRoute = make_shared<bool>(boost::any_cast<bool>(m["AutoReceiveAllRoute"]));
    }
    if (m.find("ErAttachmentName") != m.end() && !m["ErAttachmentName"].empty()) {
      erAttachmentName = make_shared<string>(boost::any_cast<string>(m["ErAttachmentName"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceTenantId") != m.end() && !m["ResourceTenantId"].empty()) {
      resourceTenantId = make_shared<string>(boost::any_cast<string>(m["ResourceTenantId"]));
    }
  }


  virtual ~CreateErAttachmentRequest() = default;
};
class CreateErAttachmentResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> erAttachmentId{};

  CreateErAttachmentResponseBodyContent() {}

  explicit CreateErAttachmentResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erAttachmentId) {
      res["ErAttachmentId"] = boost::any(*erAttachmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErAttachmentId") != m.end() && !m["ErAttachmentId"].empty()) {
      erAttachmentId = make_shared<string>(boost::any_cast<string>(m["ErAttachmentId"]));
    }
  }


  virtual ~CreateErAttachmentResponseBodyContent() = default;
};
class CreateErAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<CreateErAttachmentResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateErAttachmentResponseBody() {}

  explicit CreateErAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateErAttachmentResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateErAttachmentResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateErAttachmentResponseBody() = default;
};
class CreateErAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateErAttachmentResponseBody> body{};

  CreateErAttachmentResponse() {}

  explicit CreateErAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateErAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateErAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateErAttachmentResponse() = default;
};
class CreateErRouteMapRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> erId{};
  shared_ptr<string> receptionInstanceId{};
  shared_ptr<string> receptionInstanceOwner{};
  shared_ptr<string> receptionInstanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> routeMapAction{};
  shared_ptr<long> routeMapNum{};
  shared_ptr<string> transmissionInstanceId{};
  shared_ptr<string> transmissionInstanceOwner{};
  shared_ptr<string> transmissionInstanceType{};

  CreateErRouteMapRequest() {}

  explicit CreateErRouteMapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (receptionInstanceId) {
      res["ReceptionInstanceId"] = boost::any(*receptionInstanceId);
    }
    if (receptionInstanceOwner) {
      res["ReceptionInstanceOwner"] = boost::any(*receptionInstanceOwner);
    }
    if (receptionInstanceType) {
      res["ReceptionInstanceType"] = boost::any(*receptionInstanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (routeMapAction) {
      res["RouteMapAction"] = boost::any(*routeMapAction);
    }
    if (routeMapNum) {
      res["RouteMapNum"] = boost::any(*routeMapNum);
    }
    if (transmissionInstanceId) {
      res["TransmissionInstanceId"] = boost::any(*transmissionInstanceId);
    }
    if (transmissionInstanceOwner) {
      res["TransmissionInstanceOwner"] = boost::any(*transmissionInstanceOwner);
    }
    if (transmissionInstanceType) {
      res["TransmissionInstanceType"] = boost::any(*transmissionInstanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ReceptionInstanceId") != m.end() && !m["ReceptionInstanceId"].empty()) {
      receptionInstanceId = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceId"]));
    }
    if (m.find("ReceptionInstanceOwner") != m.end() && !m["ReceptionInstanceOwner"].empty()) {
      receptionInstanceOwner = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceOwner"]));
    }
    if (m.find("ReceptionInstanceType") != m.end() && !m["ReceptionInstanceType"].empty()) {
      receptionInstanceType = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RouteMapAction") != m.end() && !m["RouteMapAction"].empty()) {
      routeMapAction = make_shared<string>(boost::any_cast<string>(m["RouteMapAction"]));
    }
    if (m.find("RouteMapNum") != m.end() && !m["RouteMapNum"].empty()) {
      routeMapNum = make_shared<long>(boost::any_cast<long>(m["RouteMapNum"]));
    }
    if (m.find("TransmissionInstanceId") != m.end() && !m["TransmissionInstanceId"].empty()) {
      transmissionInstanceId = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceId"]));
    }
    if (m.find("TransmissionInstanceOwner") != m.end() && !m["TransmissionInstanceOwner"].empty()) {
      transmissionInstanceOwner = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceOwner"]));
    }
    if (m.find("TransmissionInstanceType") != m.end() && !m["TransmissionInstanceType"].empty()) {
      transmissionInstanceType = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceType"]));
    }
  }


  virtual ~CreateErRouteMapRequest() = default;
};
class CreateErRouteMapResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> erRouteMapId{};

  CreateErRouteMapResponseBodyContent() {}

  explicit CreateErRouteMapResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erRouteMapId) {
      res["ErRouteMapId"] = boost::any(*erRouteMapId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErRouteMapId") != m.end() && !m["ErRouteMapId"].empty()) {
      erRouteMapId = make_shared<string>(boost::any_cast<string>(m["ErRouteMapId"]));
    }
  }


  virtual ~CreateErRouteMapResponseBodyContent() = default;
};
class CreateErRouteMapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<CreateErRouteMapResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateErRouteMapResponseBody() {}

  explicit CreateErRouteMapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateErRouteMapResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateErRouteMapResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateErRouteMapResponseBody() = default;
};
class CreateErRouteMapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateErRouteMapResponseBody> body{};

  CreateErRouteMapResponse() {}

  explicit CreateErRouteMapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateErRouteMapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateErRouteMapResponseBody>(model1);
      }
    }
  }


  virtual ~CreateErRouteMapResponse() = default;
};
class CreateSubnetRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateSubnetRequestTag() {}

  explicit CreateSubnetRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateSubnetRequestTag() = default;
};
class CreateSubnetRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> regionId{};
  shared_ptr<string> subnetName{};
  shared_ptr<vector<CreateSubnetRequestTag>> tag{};
  shared_ptr<string> type{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  CreateSubnetRequest() {}

  explicit CreateSubnetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subnetName) {
      res["SubnetName"] = boost::any(*subnetName);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubnetName") != m.end() && !m["SubnetName"].empty()) {
      subnetName = make_shared<string>(boost::any_cast<string>(m["SubnetName"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateSubnetRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSubnetRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateSubnetRequestTag>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateSubnetRequest() = default;
};
class CreateSubnetResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> subnetId{};

  CreateSubnetResponseBodyContent() {}

  explicit CreateSubnetResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
  }


  virtual ~CreateSubnetResponseBodyContent() = default;
};
class CreateSubnetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<CreateSubnetResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateSubnetResponseBody() {}

  explicit CreateSubnetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateSubnetResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateSubnetResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSubnetResponseBody() = default;
};
class CreateSubnetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSubnetResponseBody> body{};

  CreateSubnetResponse() {}

  explicit CreateSubnetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSubnetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSubnetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSubnetResponse() = default;
};
class CreateVccRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateVccRequestTag() {}

  explicit CreateVccRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateVccRequestTag() = default;
};
class CreateVccRequest : public Darabonba::Model {
public:
  shared_ptr<bool> accessCouldService{};
  shared_ptr<long> bandwidth{};
  shared_ptr<long> bgpAsn{};
  shared_ptr<string> bgpCidr{};
  shared_ptr<string> cenId{};
  shared_ptr<string> cenOwnerId{};
  shared_ptr<string> connectionType{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<CreateVccRequestTag>> tag{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vccName{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  CreateVccRequest() {}

  explicit CreateVccRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessCouldService) {
      res["AccessCouldService"] = boost::any(*accessCouldService);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (bgpAsn) {
      res["BgpAsn"] = boost::any(*bgpAsn);
    }
    if (bgpCidr) {
      res["BgpCidr"] = boost::any(*bgpCidr);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenOwnerId) {
      res["CenOwnerId"] = boost::any(*cenOwnerId);
    }
    if (connectionType) {
      res["ConnectionType"] = boost::any(*connectionType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vccName) {
      res["VccName"] = boost::any(*vccName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessCouldService") != m.end() && !m["AccessCouldService"].empty()) {
      accessCouldService = make_shared<bool>(boost::any_cast<bool>(m["AccessCouldService"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("BgpAsn") != m.end() && !m["BgpAsn"].empty()) {
      bgpAsn = make_shared<long>(boost::any_cast<long>(m["BgpAsn"]));
    }
    if (m.find("BgpCidr") != m.end() && !m["BgpCidr"].empty()) {
      bgpCidr = make_shared<string>(boost::any_cast<string>(m["BgpCidr"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenOwnerId") != m.end() && !m["CenOwnerId"].empty()) {
      cenOwnerId = make_shared<string>(boost::any_cast<string>(m["CenOwnerId"]));
    }
    if (m.find("ConnectionType") != m.end() && !m["ConnectionType"].empty()) {
      connectionType = make_shared<string>(boost::any_cast<string>(m["ConnectionType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateVccRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVccRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateVccRequestTag>>(expect1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VccName") != m.end() && !m["VccName"].empty()) {
      vccName = make_shared<string>(boost::any_cast<string>(m["VccName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateVccRequest() = default;
};
class CreateVccResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> vccId{};

  CreateVccResponseBodyContent() {}

  explicit CreateVccResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
  }


  virtual ~CreateVccResponseBodyContent() = default;
};
class CreateVccResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<CreateVccResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateVccResponseBody() {}

  explicit CreateVccResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateVccResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateVccResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVccResponseBody() = default;
};
class CreateVccResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVccResponseBody> body{};

  CreateVccResponse() {}

  explicit CreateVccResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVccResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVccResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVccResponse() = default;
};
class CreateVccGrantRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> erId{};
  shared_ptr<string> grantTenantId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  CreateVccGrantRuleRequest() {}

  explicit CreateVccGrantRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (grantTenantId) {
      res["GrantTenantId"] = boost::any(*grantTenantId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GrantTenantId") != m.end() && !m["GrantTenantId"].empty()) {
      grantTenantId = make_shared<string>(boost::any_cast<string>(m["GrantTenantId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateVccGrantRuleRequest() = default;
};
class CreateVccGrantRuleResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> grantRuleId{};

  CreateVccGrantRuleResponseBodyContent() {}

  explicit CreateVccGrantRuleResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (grantRuleId) {
      res["GrantRuleId"] = boost::any(*grantRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GrantRuleId") != m.end() && !m["GrantRuleId"].empty()) {
      grantRuleId = make_shared<string>(boost::any_cast<string>(m["GrantRuleId"]));
    }
  }


  virtual ~CreateVccGrantRuleResponseBodyContent() = default;
};
class CreateVccGrantRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<CreateVccGrantRuleResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateVccGrantRuleResponseBody() {}

  explicit CreateVccGrantRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateVccGrantRuleResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateVccGrantRuleResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVccGrantRuleResponseBody() = default;
};
class CreateVccGrantRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVccGrantRuleResponseBody> body{};

  CreateVccGrantRuleResponse() {}

  explicit CreateVccGrantRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVccGrantRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVccGrantRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVccGrantRuleResponse() = default;
};
class CreateVccRouteEntryRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vccId{};

  CreateVccRouteEntryRequest() {}

  explicit CreateVccRouteEntryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
  }


  virtual ~CreateVccRouteEntryRequest() = default;
};
class CreateVccRouteEntryResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> vccRouteEntryId{};

  CreateVccRouteEntryResponseBodyContent() {}

  explicit CreateVccRouteEntryResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vccRouteEntryId) {
      res["VccRouteEntryId"] = boost::any(*vccRouteEntryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VccRouteEntryId") != m.end() && !m["VccRouteEntryId"].empty()) {
      vccRouteEntryId = make_shared<string>(boost::any_cast<string>(m["VccRouteEntryId"]));
    }
  }


  virtual ~CreateVccRouteEntryResponseBodyContent() = default;
};
class CreateVccRouteEntryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<CreateVccRouteEntryResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateVccRouteEntryResponseBody() {}

  explicit CreateVccRouteEntryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateVccRouteEntryResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateVccRouteEntryResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVccRouteEntryResponseBody() = default;
};
class CreateVccRouteEntryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVccRouteEntryResponseBody> body{};

  CreateVccRouteEntryResponse() {}

  explicit CreateVccRouteEntryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVccRouteEntryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVccRouteEntryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVccRouteEntryResponse() = default;
};
class CreateVpdRequestSubnets : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> regionId{};
  shared_ptr<string> subnetName{};
  shared_ptr<string> type{};
  shared_ptr<string> zoneId{};

  CreateVpdRequestSubnets() {}

  explicit CreateVpdRequestSubnets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subnetName) {
      res["SubnetName"] = boost::any(*subnetName);
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
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubnetName") != m.end() && !m["SubnetName"].empty()) {
      subnetName = make_shared<string>(boost::any_cast<string>(m["SubnetName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateVpdRequestSubnets() = default;
};
class CreateVpdRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateVpdRequestTag() {}

  explicit CreateVpdRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateVpdRequestTag() = default;
};
class CreateVpdRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<CreateVpdRequestSubnets>> subnets{};
  shared_ptr<vector<CreateVpdRequestTag>> tag{};
  shared_ptr<string> vpdName{};

  CreateVpdRequest() {}

  explicit CreateVpdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (subnets) {
      vector<boost::any> temp1;
      for(auto item1:*subnets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Subnets"] = boost::any(temp1);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vpdName) {
      res["VpdName"] = boost::any(*vpdName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Subnets") != m.end() && !m["Subnets"].empty()) {
      if (typeid(vector<boost::any>) == m["Subnets"].type()) {
        vector<CreateVpdRequestSubnets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Subnets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVpdRequestSubnets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subnets = make_shared<vector<CreateVpdRequestSubnets>>(expect1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateVpdRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVpdRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateVpdRequestTag>>(expect1);
      }
    }
    if (m.find("VpdName") != m.end() && !m["VpdName"].empty()) {
      vpdName = make_shared<string>(boost::any_cast<string>(m["VpdName"]));
    }
  }


  virtual ~CreateVpdRequest() = default;
};
class CreateVpdResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<string>> subnetIds{};
  shared_ptr<string> vpdId{};

  CreateVpdResponseBodyContent() {}

  explicit CreateVpdResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subnetIds) {
      res["SubnetIds"] = boost::any(*subnetIds);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubnetIds") != m.end() && !m["SubnetIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubnetIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubnetIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subnetIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~CreateVpdResponseBodyContent() = default;
};
class CreateVpdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<CreateVpdResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateVpdResponseBody() {}

  explicit CreateVpdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateVpdResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateVpdResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVpdResponseBody() = default;
};
class CreateVpdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVpdResponseBody> body{};

  CreateVpdResponse() {}

  explicit CreateVpdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVpdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVpdResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVpdResponse() = default;
};
class CreateVpdGrantRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> erId{};
  shared_ptr<string> grantTenantId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  CreateVpdGrantRuleRequest() {}

  explicit CreateVpdGrantRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (grantTenantId) {
      res["GrantTenantId"] = boost::any(*grantTenantId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GrantTenantId") != m.end() && !m["GrantTenantId"].empty()) {
      grantTenantId = make_shared<string>(boost::any_cast<string>(m["GrantTenantId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateVpdGrantRuleRequest() = default;
};
class CreateVpdGrantRuleResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> grantRuleId{};

  CreateVpdGrantRuleResponseBodyContent() {}

  explicit CreateVpdGrantRuleResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (grantRuleId) {
      res["GrantRuleId"] = boost::any(*grantRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GrantRuleId") != m.end() && !m["GrantRuleId"].empty()) {
      grantRuleId = make_shared<string>(boost::any_cast<string>(m["GrantRuleId"]));
    }
  }


  virtual ~CreateVpdGrantRuleResponseBodyContent() = default;
};
class CreateVpdGrantRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<CreateVpdGrantRuleResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateVpdGrantRuleResponseBody() {}

  explicit CreateVpdGrantRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        CreateVpdGrantRuleResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<CreateVpdGrantRuleResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVpdGrantRuleResponseBody() = default;
};
class CreateVpdGrantRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVpdGrantRuleResponseBody> body{};

  CreateVpdGrantRuleResponse() {}

  explicit CreateVpdGrantRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVpdGrantRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVpdGrantRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVpdGrantRuleResponse() = default;
};
class DeleteElasticNetworkInterfaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> regionId{};

  DeleteElasticNetworkInterfaceRequest() {}

  explicit DeleteElasticNetworkInterfaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
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
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteElasticNetworkInterfaceRequest() = default;
};
class DeleteElasticNetworkInterfaceResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> nodeId{};

  DeleteElasticNetworkInterfaceResponseBodyContent() {}

  explicit DeleteElasticNetworkInterfaceResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~DeleteElasticNetworkInterfaceResponseBodyContent() = default;
};
class DeleteElasticNetworkInterfaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<DeleteElasticNetworkInterfaceResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteElasticNetworkInterfaceResponseBody() {}

  explicit DeleteElasticNetworkInterfaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        DeleteElasticNetworkInterfaceResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<DeleteElasticNetworkInterfaceResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteElasticNetworkInterfaceResponseBody() = default;
};
class DeleteElasticNetworkInterfaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteElasticNetworkInterfaceResponseBody> body{};

  DeleteElasticNetworkInterfaceResponse() {}

  explicit DeleteElasticNetworkInterfaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteElasticNetworkInterfaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteElasticNetworkInterfaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteElasticNetworkInterfaceResponse() = default;
};
class DeleteErRequest : public Darabonba::Model {
public:
  shared_ptr<string> erId{};
  shared_ptr<string> regionId{};

  DeleteErRequest() {}

  explicit DeleteErRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteErRequest() = default;
};
class DeleteErResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteErResponseBody() {}

  explicit DeleteErResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteErResponseBody() = default;
};
class DeleteErResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteErResponseBody> body{};

  DeleteErResponse() {}

  explicit DeleteErResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteErResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteErResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteErResponse() = default;
};
class DeleteErAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> erAttachmentId{};
  shared_ptr<string> erId{};
  shared_ptr<string> regionId{};

  DeleteErAttachmentRequest() {}

  explicit DeleteErAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erAttachmentId) {
      res["ErAttachmentId"] = boost::any(*erAttachmentId);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErAttachmentId") != m.end() && !m["ErAttachmentId"].empty()) {
      erAttachmentId = make_shared<string>(boost::any_cast<string>(m["ErAttachmentId"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteErAttachmentRequest() = default;
};
class DeleteErAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteErAttachmentResponseBody() {}

  explicit DeleteErAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteErAttachmentResponseBody() = default;
};
class DeleteErAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteErAttachmentResponseBody> body{};

  DeleteErAttachmentResponse() {}

  explicit DeleteErAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteErAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteErAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteErAttachmentResponse() = default;
};
class DeleteErRouteMapRequest : public Darabonba::Model {
public:
  shared_ptr<string> erId{};
  shared_ptr<vector<string>> erRouteMapIds{};
  shared_ptr<string> regionId{};

  DeleteErRouteMapRequest() {}

  explicit DeleteErRouteMapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erRouteMapIds) {
      res["ErRouteMapIds"] = boost::any(*erRouteMapIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErRouteMapIds") != m.end() && !m["ErRouteMapIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ErRouteMapIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ErRouteMapIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      erRouteMapIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteErRouteMapRequest() = default;
};
class DeleteErRouteMapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteErRouteMapResponseBody() {}

  explicit DeleteErRouteMapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteErRouteMapResponseBody() = default;
};
class DeleteErRouteMapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteErRouteMapResponseBody> body{};

  DeleteErRouteMapResponse() {}

  explicit DeleteErRouteMapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteErRouteMapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteErRouteMapResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteErRouteMapResponse() = default;
};
class DeleteSubnetRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  DeleteSubnetRequest() {}

  explicit DeleteSubnetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DeleteSubnetRequest() = default;
};
class DeleteSubnetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteSubnetResponseBody() {}

  explicit DeleteSubnetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteSubnetResponseBody() = default;
};
class DeleteSubnetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSubnetResponseBody> body{};

  DeleteSubnetResponse() {}

  explicit DeleteSubnetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSubnetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSubnetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSubnetResponse() = default;
};
class DeleteVccGrantRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> erId{};
  shared_ptr<string> grantRuleId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DeleteVccGrantRuleRequest() {}

  explicit DeleteVccGrantRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (grantRuleId) {
      res["GrantRuleId"] = boost::any(*grantRuleId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GrantRuleId") != m.end() && !m["GrantRuleId"].empty()) {
      grantRuleId = make_shared<string>(boost::any_cast<string>(m["GrantRuleId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteVccGrantRuleRequest() = default;
};
class DeleteVccGrantRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteVccGrantRuleResponseBody() {}

  explicit DeleteVccGrantRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteVccGrantRuleResponseBody() = default;
};
class DeleteVccGrantRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVccGrantRuleResponseBody> body{};

  DeleteVccGrantRuleResponse() {}

  explicit DeleteVccGrantRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVccGrantRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVccGrantRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVccGrantRuleResponse() = default;
};
class DeleteVccRouteEntryRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vccRouteEntryId{};

  DeleteVccRouteEntryRequest() {}

  explicit DeleteVccRouteEntryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vccRouteEntryId) {
      res["VccRouteEntryId"] = boost::any(*vccRouteEntryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VccRouteEntryId") != m.end() && !m["VccRouteEntryId"].empty()) {
      vccRouteEntryId = make_shared<string>(boost::any_cast<string>(m["VccRouteEntryId"]));
    }
  }


  virtual ~DeleteVccRouteEntryRequest() = default;
};
class DeleteVccRouteEntryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteVccRouteEntryResponseBody() {}

  explicit DeleteVccRouteEntryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteVccRouteEntryResponseBody() = default;
};
class DeleteVccRouteEntryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVccRouteEntryResponseBody> body{};

  DeleteVccRouteEntryResponse() {}

  explicit DeleteVccRouteEntryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVccRouteEntryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVccRouteEntryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVccRouteEntryResponse() = default;
};
class DeleteVpdRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vpdId{};

  DeleteVpdRequest() {}

  explicit DeleteVpdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~DeleteVpdRequest() = default;
};
class DeleteVpdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteVpdResponseBody() {}

  explicit DeleteVpdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteVpdResponseBody() = default;
};
class DeleteVpdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVpdResponseBody> body{};

  DeleteVpdResponse() {}

  explicit DeleteVpdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVpdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVpdResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVpdResponse() = default;
};
class DeleteVpdGrantRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> erId{};
  shared_ptr<string> grantRuleId{};
  shared_ptr<string> grantTenantId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DeleteVpdGrantRuleRequest() {}

  explicit DeleteVpdGrantRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (grantRuleId) {
      res["GrantRuleId"] = boost::any(*grantRuleId);
    }
    if (grantTenantId) {
      res["GrantTenantId"] = boost::any(*grantTenantId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GrantRuleId") != m.end() && !m["GrantRuleId"].empty()) {
      grantRuleId = make_shared<string>(boost::any_cast<string>(m["GrantRuleId"]));
    }
    if (m.find("GrantTenantId") != m.end() && !m["GrantTenantId"].empty()) {
      grantTenantId = make_shared<string>(boost::any_cast<string>(m["GrantTenantId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteVpdGrantRuleRequest() = default;
};
class DeleteVpdGrantRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteVpdGrantRuleResponseBody() {}

  explicit DeleteVpdGrantRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteVpdGrantRuleResponseBody() = default;
};
class DeleteVpdGrantRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVpdGrantRuleResponseBody> body{};

  DeleteVpdGrantRuleResponse() {}

  explicit DeleteVpdGrantRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVpdGrantRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVpdGrantRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVpdGrantRuleResponse() = default;
};
class DescribeSlrRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};

  DescribeSlrRequest() {}

  explicit DescribeSlrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeSlrRequest() = default;
};
class DescribeSlrResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<bool> hasRole{};

  DescribeSlrResponseBodyContent() {}

  explicit DescribeSlrResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasRole) {
      res["HasRole"] = boost::any(*hasRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasRole") != m.end() && !m["HasRole"].empty()) {
      hasRole = make_shared<bool>(boost::any_cast<bool>(m["HasRole"]));
    }
  }


  virtual ~DescribeSlrResponseBodyContent() = default;
};
class DescribeSlrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<DescribeSlrResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeSlrResponseBody() {}

  explicit DescribeSlrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        DescribeSlrResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<DescribeSlrResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSlrResponseBody() = default;
};
class DescribeSlrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlrResponseBody> body{};

  DescribeSlrResponse() {}

  explicit DescribeSlrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlrResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlrResponse() = default;
};
class DetachElasticNetworkInterfaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> regionId{};

  DetachElasticNetworkInterfaceRequest() {}

  explicit DetachElasticNetworkInterfaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DetachElasticNetworkInterfaceRequest() = default;
};
class DetachElasticNetworkInterfaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetachElasticNetworkInterfaceResponseBody() {}

  explicit DetachElasticNetworkInterfaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachElasticNetworkInterfaceResponseBody() = default;
};
class DetachElasticNetworkInterfaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachElasticNetworkInterfaceResponseBody> body{};

  DetachElasticNetworkInterfaceResponse() {}

  explicit DetachElasticNetworkInterfaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachElasticNetworkInterfaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachElasticNetworkInterfaceResponseBody>(model1);
      }
    }
  }


  virtual ~DetachElasticNetworkInterfaceResponse() = default;
};
class GetDestinationCidrBlockRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetDestinationCidrBlockRequest() {}

  explicit GetDestinationCidrBlockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetDestinationCidrBlockRequest() = default;
};
class GetDestinationCidrBlockResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<string>> destinationCidrBlock{};

  GetDestinationCidrBlockResponseBodyContent() {}

  explicit GetDestinationCidrBlockResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DestinationCidrBlock"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DestinationCidrBlock"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      destinationCidrBlock = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetDestinationCidrBlockResponseBodyContent() = default;
};
class GetDestinationCidrBlockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetDestinationCidrBlockResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDestinationCidrBlockResponseBody() {}

  explicit GetDestinationCidrBlockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetDestinationCidrBlockResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetDestinationCidrBlockResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDestinationCidrBlockResponseBody() = default;
};
class GetDestinationCidrBlockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDestinationCidrBlockResponseBody> body{};

  GetDestinationCidrBlockResponse() {}

  explicit GetDestinationCidrBlockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDestinationCidrBlockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDestinationCidrBlockResponseBody>(model1);
      }
    }
  }


  virtual ~GetDestinationCidrBlockResponse() = default;
};
class GetElasticNetworkInterfaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> regionId{};

  GetElasticNetworkInterfaceRequest() {}

  explicit GetElasticNetworkInterfaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetElasticNetworkInterfaceRequest() = default;
};
class GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> ipName{};
  shared_ptr<string> ipv6Address{};
  shared_ptr<string> message{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses() {}

  explicit GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (ipv6Address) {
      res["Ipv6Address"] = boost::any(*ipv6Address);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("Ipv6Address") != m.end() && !m["Ipv6Address"].empty()) {
      ipv6Address = make_shared<string>(boost::any_cast<string>(m["Ipv6Address"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses() = default;
};
class GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> ipName{};
  shared_ptr<string> message{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses() {}

  explicit GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses() = default;
};
class GetElasticNetworkInterfaceResponseBodyContentTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetElasticNetworkInterfaceResponseBodyContentTags() {}

  explicit GetElasticNetworkInterfaceResponseBodyContentTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetElasticNetworkInterfaceResponseBodyContentTags() = default;
};
class GetElasticNetworkInterfaceResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<bool> enableJumboFrame{};
  shared_ptr<string> gateway{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> ip{};
  shared_ptr<vector<GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses>> ipv6Addresses{};
  shared_ptr<string> mac{};
  shared_ptr<string> mask{};
  shared_ptr<string> message{};
  shared_ptr<string> nodeId{};
  shared_ptr<vector<GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses>> privateIpAddresses{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetElasticNetworkInterfaceResponseBodyContentTags>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  GetElasticNetworkInterfaceResponseBodyContent() {}

  explicit GetElasticNetworkInterfaceResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (enableJumboFrame) {
      res["EnableJumboFrame"] = boost::any(*enableJumboFrame);
    }
    if (gateway) {
      res["Gateway"] = boost::any(*gateway);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (ipv6Addresses) {
      vector<boost::any> temp1;
      for(auto item1:*ipv6Addresses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ipv6Addresses"] = boost::any(temp1);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (privateIpAddresses) {
      vector<boost::any> temp1;
      for(auto item1:*privateIpAddresses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PrivateIpAddresses"] = boost::any(temp1);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("EnableJumboFrame") != m.end() && !m["EnableJumboFrame"].empty()) {
      enableJumboFrame = make_shared<bool>(boost::any_cast<bool>(m["EnableJumboFrame"]));
    }
    if (m.find("Gateway") != m.end() && !m["Gateway"].empty()) {
      gateway = make_shared<string>(boost::any_cast<string>(m["Gateway"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Ipv6Addresses") != m.end() && !m["Ipv6Addresses"].empty()) {
      if (typeid(vector<boost::any>) == m["Ipv6Addresses"].type()) {
        vector<GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ipv6Addresses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipv6Addresses = make_shared<vector<GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses>>(expect1);
      }
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("PrivateIpAddresses") != m.end() && !m["PrivateIpAddresses"].empty()) {
      if (typeid(vector<boost::any>) == m["PrivateIpAddresses"].type()) {
        vector<GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PrivateIpAddresses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        privateIpAddresses = make_shared<vector<GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses>>(expect1);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetElasticNetworkInterfaceResponseBodyContentTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetElasticNetworkInterfaceResponseBodyContentTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetElasticNetworkInterfaceResponseBodyContentTags>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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


  virtual ~GetElasticNetworkInterfaceResponseBodyContent() = default;
};
class GetElasticNetworkInterfaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetElasticNetworkInterfaceResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetElasticNetworkInterfaceResponseBody() {}

  explicit GetElasticNetworkInterfaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetElasticNetworkInterfaceResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetElasticNetworkInterfaceResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetElasticNetworkInterfaceResponseBody() = default;
};
class GetElasticNetworkInterfaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetElasticNetworkInterfaceResponseBody> body{};

  GetElasticNetworkInterfaceResponse() {}

  explicit GetElasticNetworkInterfaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetElasticNetworkInterfaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetElasticNetworkInterfaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetElasticNetworkInterfaceResponse() = default;
};
class GetErRequest : public Darabonba::Model {
public:
  shared_ptr<string> erId{};
  shared_ptr<string> regionId{};

  GetErRequest() {}

  explicit GetErRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetErRequest() = default;
};
class GetErResponseBodyContentErAttachments : public Darabonba::Model {
public:
  shared_ptr<bool> across{};
  shared_ptr<bool> autoReceiveAllRoute{};
  shared_ptr<string> createTime{};
  shared_ptr<string> erAttachmentId{};
  shared_ptr<string> erAttachmentName{};
  shared_ptr<string> erId{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> message{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceTenantId{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};

  GetErResponseBodyContentErAttachments() {}

  explicit GetErResponseBodyContentErAttachments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (across) {
      res["Across"] = boost::any(*across);
    }
    if (autoReceiveAllRoute) {
      res["AutoReceiveAllRoute"] = boost::any(*autoReceiveAllRoute);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (erAttachmentId) {
      res["ErAttachmentId"] = boost::any(*erAttachmentId);
    }
    if (erAttachmentName) {
      res["ErAttachmentName"] = boost::any(*erAttachmentName);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTenantId) {
      res["ResourceTenantId"] = boost::any(*resourceTenantId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Across") != m.end() && !m["Across"].empty()) {
      across = make_shared<bool>(boost::any_cast<bool>(m["Across"]));
    }
    if (m.find("AutoReceiveAllRoute") != m.end() && !m["AutoReceiveAllRoute"].empty()) {
      autoReceiveAllRoute = make_shared<bool>(boost::any_cast<bool>(m["AutoReceiveAllRoute"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ErAttachmentId") != m.end() && !m["ErAttachmentId"].empty()) {
      erAttachmentId = make_shared<string>(boost::any_cast<string>(m["ErAttachmentId"]));
    }
    if (m.find("ErAttachmentName") != m.end() && !m["ErAttachmentName"].empty()) {
      erAttachmentName = make_shared<string>(boost::any_cast<string>(m["ErAttachmentName"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTenantId") != m.end() && !m["ResourceTenantId"].empty()) {
      resourceTenantId = make_shared<string>(boost::any_cast<string>(m["ResourceTenantId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~GetErResponseBodyContentErAttachments() = default;
};
class GetErResponseBodyContentErRouteEntrys : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> erId{};
  shared_ptr<string> erRouteEntryId{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceTenantId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};

  GetErResponseBodyContentErRouteEntrys() {}

  explicit GetErResponseBodyContentErRouteEntrys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erRouteEntryId) {
      res["ErRouteEntryId"] = boost::any(*erRouteEntryId);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTenantId) {
      res["ResourceTenantId"] = boost::any(*resourceTenantId);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErRouteEntryId") != m.end() && !m["ErRouteEntryId"].empty()) {
      erRouteEntryId = make_shared<string>(boost::any_cast<string>(m["ErRouteEntryId"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTenantId") != m.end() && !m["ResourceTenantId"].empty()) {
      resourceTenantId = make_shared<string>(boost::any_cast<string>(m["ResourceTenantId"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["RouteType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~GetErResponseBodyContentErRouteEntrys() = default;
};
class GetErResponseBodyContentErRouteMaps : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> erId{};
  shared_ptr<string> erRouteMapId{};
  shared_ptr<string> erRouteMapName{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> message{};
  shared_ptr<string> receptionInstanceId{};
  shared_ptr<string> receptionInstanceName{};
  shared_ptr<string> receptionInstanceOwner{};
  shared_ptr<string> receptionInstanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> routeMapNum{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> transmissionInstanceId{};
  shared_ptr<string> transmissionInstanceName{};
  shared_ptr<string> transmissionInstanceOwner{};
  shared_ptr<string> transmissionInstanceType{};

  GetErResponseBodyContentErRouteMaps() {}

  explicit GetErResponseBodyContentErRouteMaps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erRouteMapId) {
      res["ErRouteMapId"] = boost::any(*erRouteMapId);
    }
    if (erRouteMapName) {
      res["ErRouteMapName"] = boost::any(*erRouteMapName);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (receptionInstanceId) {
      res["ReceptionInstanceId"] = boost::any(*receptionInstanceId);
    }
    if (receptionInstanceName) {
      res["ReceptionInstanceName"] = boost::any(*receptionInstanceName);
    }
    if (receptionInstanceOwner) {
      res["ReceptionInstanceOwner"] = boost::any(*receptionInstanceOwner);
    }
    if (receptionInstanceType) {
      res["ReceptionInstanceType"] = boost::any(*receptionInstanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (routeMapNum) {
      res["RouteMapNum"] = boost::any(*routeMapNum);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (transmissionInstanceId) {
      res["TransmissionInstanceId"] = boost::any(*transmissionInstanceId);
    }
    if (transmissionInstanceName) {
      res["TransmissionInstanceName"] = boost::any(*transmissionInstanceName);
    }
    if (transmissionInstanceOwner) {
      res["TransmissionInstanceOwner"] = boost::any(*transmissionInstanceOwner);
    }
    if (transmissionInstanceType) {
      res["TransmissionInstanceType"] = boost::any(*transmissionInstanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErRouteMapId") != m.end() && !m["ErRouteMapId"].empty()) {
      erRouteMapId = make_shared<string>(boost::any_cast<string>(m["ErRouteMapId"]));
    }
    if (m.find("ErRouteMapName") != m.end() && !m["ErRouteMapName"].empty()) {
      erRouteMapName = make_shared<string>(boost::any_cast<string>(m["ErRouteMapName"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ReceptionInstanceId") != m.end() && !m["ReceptionInstanceId"].empty()) {
      receptionInstanceId = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceId"]));
    }
    if (m.find("ReceptionInstanceName") != m.end() && !m["ReceptionInstanceName"].empty()) {
      receptionInstanceName = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceName"]));
    }
    if (m.find("ReceptionInstanceOwner") != m.end() && !m["ReceptionInstanceOwner"].empty()) {
      receptionInstanceOwner = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceOwner"]));
    }
    if (m.find("ReceptionInstanceType") != m.end() && !m["ReceptionInstanceType"].empty()) {
      receptionInstanceType = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RouteMapNum") != m.end() && !m["RouteMapNum"].empty()) {
      routeMapNum = make_shared<long>(boost::any_cast<long>(m["RouteMapNum"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("TransmissionInstanceId") != m.end() && !m["TransmissionInstanceId"].empty()) {
      transmissionInstanceId = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceId"]));
    }
    if (m.find("TransmissionInstanceName") != m.end() && !m["TransmissionInstanceName"].empty()) {
      transmissionInstanceName = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceName"]));
    }
    if (m.find("TransmissionInstanceOwner") != m.end() && !m["TransmissionInstanceOwner"].empty()) {
      transmissionInstanceOwner = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceOwner"]));
    }
    if (m.find("TransmissionInstanceType") != m.end() && !m["TransmissionInstanceType"].empty()) {
      transmissionInstanceType = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceType"]));
    }
  }


  virtual ~GetErResponseBodyContentErRouteMaps() = default;
};
class GetErResponseBodyContentTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetErResponseBodyContentTags() {}

  explicit GetErResponseBodyContentTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetErResponseBodyContentTags() = default;
};
class GetErResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<vector<GetErResponseBodyContentErAttachments>> erAttachments{};
  shared_ptr<string> erId{};
  shared_ptr<string> erName{};
  shared_ptr<vector<GetErResponseBodyContentErRouteEntrys>> erRouteEntrys{};
  shared_ptr<vector<GetErResponseBodyContentErRouteMaps>> erRouteMaps{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<string> message{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetErResponseBodyContentTags>> tags{};
  shared_ptr<string> tenantId{};

  GetErResponseBodyContent() {}

  explicit GetErResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (erAttachments) {
      vector<boost::any> temp1;
      for(auto item1:*erAttachments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErAttachments"] = boost::any(temp1);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erName) {
      res["ErName"] = boost::any(*erName);
    }
    if (erRouteEntrys) {
      vector<boost::any> temp1;
      for(auto item1:*erRouteEntrys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErRouteEntrys"] = boost::any(temp1);
    }
    if (erRouteMaps) {
      vector<boost::any> temp1;
      for(auto item1:*erRouteMaps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErRouteMaps"] = boost::any(temp1);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErAttachments") != m.end() && !m["ErAttachments"].empty()) {
      if (typeid(vector<boost::any>) == m["ErAttachments"].type()) {
        vector<GetErResponseBodyContentErAttachments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErAttachments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetErResponseBodyContentErAttachments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        erAttachments = make_shared<vector<GetErResponseBodyContentErAttachments>>(expect1);
      }
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErName") != m.end() && !m["ErName"].empty()) {
      erName = make_shared<string>(boost::any_cast<string>(m["ErName"]));
    }
    if (m.find("ErRouteEntrys") != m.end() && !m["ErRouteEntrys"].empty()) {
      if (typeid(vector<boost::any>) == m["ErRouteEntrys"].type()) {
        vector<GetErResponseBodyContentErRouteEntrys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErRouteEntrys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetErResponseBodyContentErRouteEntrys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        erRouteEntrys = make_shared<vector<GetErResponseBodyContentErRouteEntrys>>(expect1);
      }
    }
    if (m.find("ErRouteMaps") != m.end() && !m["ErRouteMaps"].empty()) {
      if (typeid(vector<boost::any>) == m["ErRouteMaps"].type()) {
        vector<GetErResponseBodyContentErRouteMaps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErRouteMaps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetErResponseBodyContentErRouteMaps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        erRouteMaps = make_shared<vector<GetErResponseBodyContentErRouteMaps>>(expect1);
      }
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetErResponseBodyContentTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetErResponseBodyContentTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetErResponseBodyContentTags>>(expect1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~GetErResponseBodyContent() = default;
};
class GetErResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetErResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetErResponseBody() {}

  explicit GetErResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetErResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetErResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetErResponseBody() = default;
};
class GetErResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetErResponseBody> body{};

  GetErResponse() {}

  explicit GetErResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetErResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetErResponseBody>(model1);
      }
    }
  }


  virtual ~GetErResponse() = default;
};
class GetErAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> erAttachmentId{};
  shared_ptr<string> erId{};
  shared_ptr<string> regionId{};

  GetErAttachmentRequest() {}

  explicit GetErAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erAttachmentId) {
      res["ErAttachmentId"] = boost::any(*erAttachmentId);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErAttachmentId") != m.end() && !m["ErAttachmentId"].empty()) {
      erAttachmentId = make_shared<string>(boost::any_cast<string>(m["ErAttachmentId"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetErAttachmentRequest() = default;
};
class GetErAttachmentResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<bool> across{};
  shared_ptr<bool> autoReceiveAllRoute{};
  shared_ptr<string> createTime{};
  shared_ptr<string> erAttachmentId{};
  shared_ptr<string> erAttachmentName{};
  shared_ptr<string> erId{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> message{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceTenantId{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};

  GetErAttachmentResponseBodyContent() {}

  explicit GetErAttachmentResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (across) {
      res["Across"] = boost::any(*across);
    }
    if (autoReceiveAllRoute) {
      res["AutoReceiveAllRoute"] = boost::any(*autoReceiveAllRoute);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (erAttachmentId) {
      res["ErAttachmentId"] = boost::any(*erAttachmentId);
    }
    if (erAttachmentName) {
      res["ErAttachmentName"] = boost::any(*erAttachmentName);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTenantId) {
      res["ResourceTenantId"] = boost::any(*resourceTenantId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Across") != m.end() && !m["Across"].empty()) {
      across = make_shared<bool>(boost::any_cast<bool>(m["Across"]));
    }
    if (m.find("AutoReceiveAllRoute") != m.end() && !m["AutoReceiveAllRoute"].empty()) {
      autoReceiveAllRoute = make_shared<bool>(boost::any_cast<bool>(m["AutoReceiveAllRoute"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ErAttachmentId") != m.end() && !m["ErAttachmentId"].empty()) {
      erAttachmentId = make_shared<string>(boost::any_cast<string>(m["ErAttachmentId"]));
    }
    if (m.find("ErAttachmentName") != m.end() && !m["ErAttachmentName"].empty()) {
      erAttachmentName = make_shared<string>(boost::any_cast<string>(m["ErAttachmentName"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTenantId") != m.end() && !m["ResourceTenantId"].empty()) {
      resourceTenantId = make_shared<string>(boost::any_cast<string>(m["ResourceTenantId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~GetErAttachmentResponseBodyContent() = default;
};
class GetErAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetErAttachmentResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetErAttachmentResponseBody() {}

  explicit GetErAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetErAttachmentResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetErAttachmentResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetErAttachmentResponseBody() = default;
};
class GetErAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetErAttachmentResponseBody> body{};

  GetErAttachmentResponse() {}

  explicit GetErAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetErAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetErAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetErAttachmentResponse() = default;
};
class GetErRouteEntryRequest : public Darabonba::Model {
public:
  shared_ptr<string> erId{};
  shared_ptr<string> erRouteEntryId{};
  shared_ptr<string> regionId{};

  GetErRouteEntryRequest() {}

  explicit GetErRouteEntryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erRouteEntryId) {
      res["ErRouteEntryId"] = boost::any(*erRouteEntryId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErRouteEntryId") != m.end() && !m["ErRouteEntryId"].empty()) {
      erRouteEntryId = make_shared<string>(boost::any_cast<string>(m["ErRouteEntryId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetErRouteEntryRequest() = default;
};
class GetErRouteEntryResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> erId{};
  shared_ptr<string> erRouteEntryId{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};

  GetErRouteEntryResponseBodyContent() {}

  explicit GetErRouteEntryResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erRouteEntryId) {
      res["ErRouteEntryId"] = boost::any(*erRouteEntryId);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErRouteEntryId") != m.end() && !m["ErRouteEntryId"].empty()) {
      erRouteEntryId = make_shared<string>(boost::any_cast<string>(m["ErRouteEntryId"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["RouteType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~GetErRouteEntryResponseBodyContent() = default;
};
class GetErRouteEntryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetErRouteEntryResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetErRouteEntryResponseBody() {}

  explicit GetErRouteEntryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetErRouteEntryResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetErRouteEntryResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetErRouteEntryResponseBody() = default;
};
class GetErRouteEntryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetErRouteEntryResponseBody> body{};

  GetErRouteEntryResponse() {}

  explicit GetErRouteEntryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetErRouteEntryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetErRouteEntryResponseBody>(model1);
      }
    }
  }


  virtual ~GetErRouteEntryResponse() = default;
};
class GetErRouteMapRequest : public Darabonba::Model {
public:
  shared_ptr<string> erId{};
  shared_ptr<string> erRouteMapId{};
  shared_ptr<string> regionId{};

  GetErRouteMapRequest() {}

  explicit GetErRouteMapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erRouteMapId) {
      res["ErRouteMapId"] = boost::any(*erRouteMapId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErRouteMapId") != m.end() && !m["ErRouteMapId"].empty()) {
      erRouteMapId = make_shared<string>(boost::any_cast<string>(m["ErRouteMapId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetErRouteMapRequest() = default;
};
class GetErRouteMapResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> description{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> erId{};
  shared_ptr<string> erRouteMapId{};
  shared_ptr<string> erRouteMapName{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> message{};
  shared_ptr<string> receptionInstanceId{};
  shared_ptr<string> receptionInstanceName{};
  shared_ptr<string> receptionInstanceOwner{};
  shared_ptr<string> receptionInstanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> routeMapNum{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> transmissionInstanceId{};
  shared_ptr<string> transmissionInstanceName{};
  shared_ptr<string> transmissionInstanceOwner{};
  shared_ptr<string> transmissionInstanceType{};

  GetErRouteMapResponseBodyContent() {}

  explicit GetErRouteMapResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erRouteMapId) {
      res["ErRouteMapId"] = boost::any(*erRouteMapId);
    }
    if (erRouteMapName) {
      res["ErRouteMapName"] = boost::any(*erRouteMapName);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (receptionInstanceId) {
      res["ReceptionInstanceId"] = boost::any(*receptionInstanceId);
    }
    if (receptionInstanceName) {
      res["ReceptionInstanceName"] = boost::any(*receptionInstanceName);
    }
    if (receptionInstanceOwner) {
      res["ReceptionInstanceOwner"] = boost::any(*receptionInstanceOwner);
    }
    if (receptionInstanceType) {
      res["ReceptionInstanceType"] = boost::any(*receptionInstanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (routeMapNum) {
      res["RouteMapNum"] = boost::any(*routeMapNum);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (transmissionInstanceId) {
      res["TransmissionInstanceId"] = boost::any(*transmissionInstanceId);
    }
    if (transmissionInstanceName) {
      res["TransmissionInstanceName"] = boost::any(*transmissionInstanceName);
    }
    if (transmissionInstanceOwner) {
      res["TransmissionInstanceOwner"] = boost::any(*transmissionInstanceOwner);
    }
    if (transmissionInstanceType) {
      res["TransmissionInstanceType"] = boost::any(*transmissionInstanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErRouteMapId") != m.end() && !m["ErRouteMapId"].empty()) {
      erRouteMapId = make_shared<string>(boost::any_cast<string>(m["ErRouteMapId"]));
    }
    if (m.find("ErRouteMapName") != m.end() && !m["ErRouteMapName"].empty()) {
      erRouteMapName = make_shared<string>(boost::any_cast<string>(m["ErRouteMapName"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ReceptionInstanceId") != m.end() && !m["ReceptionInstanceId"].empty()) {
      receptionInstanceId = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceId"]));
    }
    if (m.find("ReceptionInstanceName") != m.end() && !m["ReceptionInstanceName"].empty()) {
      receptionInstanceName = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceName"]));
    }
    if (m.find("ReceptionInstanceOwner") != m.end() && !m["ReceptionInstanceOwner"].empty()) {
      receptionInstanceOwner = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceOwner"]));
    }
    if (m.find("ReceptionInstanceType") != m.end() && !m["ReceptionInstanceType"].empty()) {
      receptionInstanceType = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RouteMapNum") != m.end() && !m["RouteMapNum"].empty()) {
      routeMapNum = make_shared<long>(boost::any_cast<long>(m["RouteMapNum"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("TransmissionInstanceId") != m.end() && !m["TransmissionInstanceId"].empty()) {
      transmissionInstanceId = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceId"]));
    }
    if (m.find("TransmissionInstanceName") != m.end() && !m["TransmissionInstanceName"].empty()) {
      transmissionInstanceName = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceName"]));
    }
    if (m.find("TransmissionInstanceOwner") != m.end() && !m["TransmissionInstanceOwner"].empty()) {
      transmissionInstanceOwner = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceOwner"]));
    }
    if (m.find("TransmissionInstanceType") != m.end() && !m["TransmissionInstanceType"].empty()) {
      transmissionInstanceType = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceType"]));
    }
  }


  virtual ~GetErRouteMapResponseBodyContent() = default;
};
class GetErRouteMapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetErRouteMapResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetErRouteMapResponseBody() {}

  explicit GetErRouteMapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetErRouteMapResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetErRouteMapResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetErRouteMapResponseBody() = default;
};
class GetErRouteMapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetErRouteMapResponseBody> body{};

  GetErRouteMapResponse() {}

  explicit GetErRouteMapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetErRouteMapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetErRouteMapResponseBody>(model1);
      }
    }
  }


  virtual ~GetErRouteMapResponse() = default;
};
class GetFabricTopologyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<string>> lniIds{};
  shared_ptr<vector<string>> nodeIds{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpdId{};

  GetFabricTopologyRequest() {}

  explicit GetFabricTopologyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (lniIds) {
      res["LniIds"] = boost::any(*lniIds);
    }
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("LniIds") != m.end() && !m["LniIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LniIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LniIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lniIds = make_shared<vector<string>>(toVec1);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~GetFabricTopologyRequest() = default;
};
class GetFabricTopologyResponseBodyContentTopoInfo : public Darabonba::Model {
public:
  shared_ptr<string> layerName{};
  shared_ptr<string> layerType{};
  shared_ptr<vector<boost::any>> nextLayer{};

  GetFabricTopologyResponseBodyContentTopoInfo() {}

  explicit GetFabricTopologyResponseBodyContentTopoInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layerName) {
      res["LayerName"] = boost::any(*layerName);
    }
    if (layerType) {
      res["LayerType"] = boost::any(*layerType);
    }
    if (nextLayer) {
      res["NextLayer"] = boost::any(*nextLayer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LayerName") != m.end() && !m["LayerName"].empty()) {
      layerName = make_shared<string>(boost::any_cast<string>(m["LayerName"]));
    }
    if (m.find("LayerType") != m.end() && !m["LayerType"].empty()) {
      layerType = make_shared<string>(boost::any_cast<string>(m["LayerType"]));
    }
    if (m.find("NextLayer") != m.end() && !m["NextLayer"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["NextLayer"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NextLayer"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      nextLayer = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~GetFabricTopologyResponseBodyContentTopoInfo() = default;
};
class GetFabricTopologyResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<GetFabricTopologyResponseBodyContentTopoInfo>> topoInfo{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpdId{};

  GetFabricTopologyResponseBodyContent() {}

  explicit GetFabricTopologyResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topoInfo) {
      vector<boost::any> temp1;
      for(auto item1:*topoInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopoInfo"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TopoInfo") != m.end() && !m["TopoInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TopoInfo"].type()) {
        vector<GetFabricTopologyResponseBodyContentTopoInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopoInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFabricTopologyResponseBodyContentTopoInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topoInfo = make_shared<vector<GetFabricTopologyResponseBodyContentTopoInfo>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~GetFabricTopologyResponseBodyContent() = default;
};
class GetFabricTopologyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetFabricTopologyResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetFabricTopologyResponseBody() {}

  explicit GetFabricTopologyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetFabricTopologyResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetFabricTopologyResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFabricTopologyResponseBody() = default;
};
class GetFabricTopologyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFabricTopologyResponseBody> body{};

  GetFabricTopologyResponse() {}

  explicit GetFabricTopologyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFabricTopologyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFabricTopologyResponseBody>(model1);
      }
    }
  }


  virtual ~GetFabricTopologyResponse() = default;
};
class GetLeniPrivateIpAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> ipName{};
  shared_ptr<string> regionId{};

  GetLeniPrivateIpAddressRequest() {}

  explicit GetLeniPrivateIpAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetLeniPrivateIpAddressRequest() = default;
};
class GetLeniPrivateIpAddressResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> ipName{};
  shared_ptr<string> message{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};

  GetLeniPrivateIpAddressResponseBodyContent() {}

  explicit GetLeniPrivateIpAddressResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
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
  }


  virtual ~GetLeniPrivateIpAddressResponseBodyContent() = default;
};
class GetLeniPrivateIpAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetLeniPrivateIpAddressResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetLeniPrivateIpAddressResponseBody() {}

  explicit GetLeniPrivateIpAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetLeniPrivateIpAddressResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetLeniPrivateIpAddressResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLeniPrivateIpAddressResponseBody() = default;
};
class GetLeniPrivateIpAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLeniPrivateIpAddressResponseBody> body{};

  GetLeniPrivateIpAddressResponse() {}

  explicit GetLeniPrivateIpAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLeniPrivateIpAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLeniPrivateIpAddressResponseBody>(model1);
      }
    }
  }


  virtual ~GetLeniPrivateIpAddressResponse() = default;
};
class GetLniPrivateIpAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> ipName{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> regionId{};

  GetLniPrivateIpAddressRequest() {}

  explicit GetLniPrivateIpAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetLniPrivateIpAddressRequest() = default;
};
class GetLniPrivateIpAddressResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> ipAddressMac{};
  shared_ptr<string> ipName{};
  shared_ptr<string> message{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> subnetId{};

  GetLniPrivateIpAddressResponseBodyContent() {}

  explicit GetLniPrivateIpAddressResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (ipAddressMac) {
      res["IpAddressMac"] = boost::any(*ipAddressMac);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
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
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("IpAddressMac") != m.end() && !m["IpAddressMac"].empty()) {
      ipAddressMac = make_shared<string>(boost::any_cast<string>(m["IpAddressMac"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
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
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
  }


  virtual ~GetLniPrivateIpAddressResponseBodyContent() = default;
};
class GetLniPrivateIpAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetLniPrivateIpAddressResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetLniPrivateIpAddressResponseBody() {}

  explicit GetLniPrivateIpAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetLniPrivateIpAddressResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetLniPrivateIpAddressResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLniPrivateIpAddressResponseBody() = default;
};
class GetLniPrivateIpAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLniPrivateIpAddressResponseBody> body{};

  GetLniPrivateIpAddressResponse() {}

  explicit GetLniPrivateIpAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLniPrivateIpAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLniPrivateIpAddressResponseBody>(model1);
      }
    }
  }


  virtual ~GetLniPrivateIpAddressResponse() = default;
};
class GetNetworkInterfaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> subnetId{};

  GetNetworkInterfaceRequest() {}

  explicit GetNetworkInterfaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
  }


  virtual ~GetNetworkInterfaceRequest() = default;
};
class GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> ipAddressMac{};
  shared_ptr<string> ipName{};
  shared_ptr<string> message{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> status{};

  GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup() {}

  explicit GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ipAddressMac) {
      res["IpAddressMac"] = boost::any(*ipAddressMac);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IpAddressMac") != m.end() && !m["IpAddressMac"].empty()) {
      ipAddressMac = make_shared<string>(boost::any_cast<string>(m["IpAddressMac"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup() = default;
};
class GetNetworkInterfaceResponseBodyContentSubnetBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> createTime{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> subnetName{};

  GetNetworkInterfaceResponseBodyContentSubnetBaseInfo() {}

  explicit GetNetworkInterfaceResponseBodyContentSubnetBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (subnetName) {
      res["SubnetName"] = boost::any(*subnetName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("SubnetName") != m.end() && !m["SubnetName"].empty()) {
      subnetName = make_shared<string>(boost::any_cast<string>(m["SubnetName"]));
    }
  }


  virtual ~GetNetworkInterfaceResponseBodyContentSubnetBaseInfo() = default;
};
class GetNetworkInterfaceResponseBodyContentTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetNetworkInterfaceResponseBodyContentTags() {}

  explicit GetNetworkInterfaceResponseBodyContentTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetNetworkInterfaceResponseBodyContentTags() = default;
};
class GetNetworkInterfaceResponseBodyContentVpdBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> createTime{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdName{};

  GetNetworkInterfaceResponseBodyContentVpdBaseInfo() {}

  explicit GetNetworkInterfaceResponseBodyContentVpdBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdName) {
      res["VpdName"] = boost::any(*vpdName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdName") != m.end() && !m["VpdName"].empty()) {
      vpdName = make_shared<string>(boost::any_cast<string>(m["VpdName"]));
    }
  }


  virtual ~GetNetworkInterfaceResponseBodyContentVpdBaseInfo() = default;
};
class GetNetworkInterfaceResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<vector<string>> ethernet{};
  shared_ptr<string> gateway{};
  shared_ptr<string> ip{};
  shared_ptr<string> ncType{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> networkInterfaceName{};
  shared_ptr<string> nodeId{};
  shared_ptr<vector<GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup>> privateIpAddressMacGroup{};
  shared_ptr<long> quota{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceMac{};
  shared_ptr<string> status{};
  shared_ptr<GetNetworkInterfaceResponseBodyContentSubnetBaseInfo> subnetBaseInfo{};
  shared_ptr<vector<GetNetworkInterfaceResponseBodyContentTags>> tags{};
  shared_ptr<string> tenantId{};
  shared_ptr<GetNetworkInterfaceResponseBodyContentVpdBaseInfo> vpdBaseInfo{};
  shared_ptr<string> zoneId{};

  GetNetworkInterfaceResponseBodyContent() {}

  explicit GetNetworkInterfaceResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (ethernet) {
      res["Ethernet"] = boost::any(*ethernet);
    }
    if (gateway) {
      res["Gateway"] = boost::any(*gateway);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (ncType) {
      res["NcType"] = boost::any(*ncType);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (networkInterfaceName) {
      res["NetworkInterfaceName"] = boost::any(*networkInterfaceName);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (privateIpAddressMacGroup) {
      vector<boost::any> temp1;
      for(auto item1:*privateIpAddressMacGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PrivateIpAddressMacGroup"] = boost::any(temp1);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceMac) {
      res["ServiceMac"] = boost::any(*serviceMac);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subnetBaseInfo) {
      res["SubnetBaseInfo"] = subnetBaseInfo ? boost::any(subnetBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vpdBaseInfo) {
      res["VpdBaseInfo"] = vpdBaseInfo ? boost::any(vpdBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Ethernet") != m.end() && !m["Ethernet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ethernet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ethernet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ethernet = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Gateway") != m.end() && !m["Gateway"].empty()) {
      gateway = make_shared<string>(boost::any_cast<string>(m["Gateway"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NcType") != m.end() && !m["NcType"].empty()) {
      ncType = make_shared<string>(boost::any_cast<string>(m["NcType"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("NetworkInterfaceName") != m.end() && !m["NetworkInterfaceName"].empty()) {
      networkInterfaceName = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceName"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("PrivateIpAddressMacGroup") != m.end() && !m["PrivateIpAddressMacGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["PrivateIpAddressMacGroup"].type()) {
        vector<GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PrivateIpAddressMacGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        privateIpAddressMacGroup = make_shared<vector<GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup>>(expect1);
      }
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceMac") != m.end() && !m["ServiceMac"].empty()) {
      serviceMac = make_shared<string>(boost::any_cast<string>(m["ServiceMac"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubnetBaseInfo") != m.end() && !m["SubnetBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubnetBaseInfo"].type()) {
        GetNetworkInterfaceResponseBodyContentSubnetBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubnetBaseInfo"]));
        subnetBaseInfo = make_shared<GetNetworkInterfaceResponseBodyContentSubnetBaseInfo>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetNetworkInterfaceResponseBodyContentTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNetworkInterfaceResponseBodyContentTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetNetworkInterfaceResponseBodyContentTags>>(expect1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("VpdBaseInfo") != m.end() && !m["VpdBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpdBaseInfo"].type()) {
        GetNetworkInterfaceResponseBodyContentVpdBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpdBaseInfo"]));
        vpdBaseInfo = make_shared<GetNetworkInterfaceResponseBodyContentVpdBaseInfo>(model1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetNetworkInterfaceResponseBodyContent() = default;
};
class GetNetworkInterfaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetNetworkInterfaceResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetNetworkInterfaceResponseBody() {}

  explicit GetNetworkInterfaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetNetworkInterfaceResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetNetworkInterfaceResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetNetworkInterfaceResponseBody() = default;
};
class GetNetworkInterfaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNetworkInterfaceResponseBody> body{};

  GetNetworkInterfaceResponse() {}

  explicit GetNetworkInterfaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNetworkInterfaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNetworkInterfaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetNetworkInterfaceResponse() = default;
};
class GetNodeInfoForPodRequest : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<string> regionId{};

  GetNodeInfoForPodRequest() {}

  explicit GetNodeInfoForPodRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetNodeInfoForPodRequest() = default;
};
class GetNodeInfoForPodResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> hdeniIpv6SipQuota{};
  shared_ptr<long> hdeniQuota{};
  shared_ptr<long> hdeniSipQuota{};
  shared_ptr<long> leniIpv6SipQuota{};
  shared_ptr<long> leniQuota{};
  shared_ptr<long> leniSipQuota{};
  shared_ptr<long> lniSipQuota{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> vSwitches{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  GetNodeInfoForPodResponseBodyContent() {}

  explicit GetNodeInfoForPodResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hdeniIpv6SipQuota) {
      res["HdeniIpv6SipQuota"] = boost::any(*hdeniIpv6SipQuota);
    }
    if (hdeniQuota) {
      res["HdeniQuota"] = boost::any(*hdeniQuota);
    }
    if (hdeniSipQuota) {
      res["HdeniSipQuota"] = boost::any(*hdeniSipQuota);
    }
    if (leniIpv6SipQuota) {
      res["LeniIpv6SipQuota"] = boost::any(*leniIpv6SipQuota);
    }
    if (leniQuota) {
      res["LeniQuota"] = boost::any(*leniQuota);
    }
    if (leniSipQuota) {
      res["LeniSipQuota"] = boost::any(*leniSipQuota);
    }
    if (lniSipQuota) {
      res["LniSipQuota"] = boost::any(*lniSipQuota);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HdeniIpv6SipQuota") != m.end() && !m["HdeniIpv6SipQuota"].empty()) {
      hdeniIpv6SipQuota = make_shared<long>(boost::any_cast<long>(m["HdeniIpv6SipQuota"]));
    }
    if (m.find("HdeniQuota") != m.end() && !m["HdeniQuota"].empty()) {
      hdeniQuota = make_shared<long>(boost::any_cast<long>(m["HdeniQuota"]));
    }
    if (m.find("HdeniSipQuota") != m.end() && !m["HdeniSipQuota"].empty()) {
      hdeniSipQuota = make_shared<long>(boost::any_cast<long>(m["HdeniSipQuota"]));
    }
    if (m.find("LeniIpv6SipQuota") != m.end() && !m["LeniIpv6SipQuota"].empty()) {
      leniIpv6SipQuota = make_shared<long>(boost::any_cast<long>(m["LeniIpv6SipQuota"]));
    }
    if (m.find("LeniQuota") != m.end() && !m["LeniQuota"].empty()) {
      leniQuota = make_shared<long>(boost::any_cast<long>(m["LeniQuota"]));
    }
    if (m.find("LeniSipQuota") != m.end() && !m["LeniSipQuota"].empty()) {
      leniSipQuota = make_shared<long>(boost::any_cast<long>(m["LeniSipQuota"]));
    }
    if (m.find("LniSipQuota") != m.end() && !m["LniSipQuota"].empty()) {
      lniSipQuota = make_shared<long>(boost::any_cast<long>(m["LniSipQuota"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetNodeInfoForPodResponseBodyContent() = default;
};
class GetNodeInfoForPodResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetNodeInfoForPodResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetNodeInfoForPodResponseBody() {}

  explicit GetNodeInfoForPodResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetNodeInfoForPodResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetNodeInfoForPodResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetNodeInfoForPodResponseBody() = default;
};
class GetNodeInfoForPodResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNodeInfoForPodResponseBody> body{};

  GetNodeInfoForPodResponse() {}

  explicit GetNodeInfoForPodResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNodeInfoForPodResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNodeInfoForPodResponseBody>(model1);
      }
    }
  }


  virtual ~GetNodeInfoForPodResponse() = default;
};
class GetSubnetRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> vpdId{};

  GetSubnetRequest() {}

  explicit GetSubnetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~GetSubnetRequest() = default;
};
class GetSubnetResponseBodyContentTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetSubnetResponseBodyContentTags() {}

  explicit GetSubnetResponseBodyContentTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetSubnetResponseBodyContentTags() = default;
};
class GetSubnetResponseBodyContentVpdBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> createTime{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdName{};

  GetSubnetResponseBodyContentVpdBaseInfo() {}

  explicit GetSubnetResponseBodyContentVpdBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdName) {
      res["VpdName"] = boost::any(*vpdName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdName") != m.end() && !m["VpdName"].empty()) {
      vpdName = make_shared<string>(boost::any_cast<string>(m["VpdName"]));
    }
  }


  virtual ~GetSubnetResponseBodyContentVpdBaseInfo() = default;
};
class GetSubnetResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<long> availableIps{};
  shared_ptr<string> cidr{};
  shared_ptr<string> createTime{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> lbCount{};
  shared_ptr<string> message{};
  shared_ptr<long> ncCount{};
  shared_ptr<long> networkInterfaceCount{};
  shared_ptr<long> privateIpCount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> subnetName{};
  shared_ptr<vector<GetSubnetResponseBodyContentTags>> tags{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<GetSubnetResponseBodyContentVpdBaseInfo> vpdBaseInfo{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  GetSubnetResponseBodyContent() {}

  explicit GetSubnetResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableIps) {
      res["AvailableIps"] = boost::any(*availableIps);
    }
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (lbCount) {
      res["LbCount"] = boost::any(*lbCount);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (ncCount) {
      res["NcCount"] = boost::any(*ncCount);
    }
    if (networkInterfaceCount) {
      res["NetworkInterfaceCount"] = boost::any(*networkInterfaceCount);
    }
    if (privateIpCount) {
      res["PrivateIpCount"] = boost::any(*privateIpCount);
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
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (subnetName) {
      res["SubnetName"] = boost::any(*subnetName);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpdBaseInfo) {
      res["VpdBaseInfo"] = vpdBaseInfo ? boost::any(vpdBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableIps") != m.end() && !m["AvailableIps"].empty()) {
      availableIps = make_shared<long>(boost::any_cast<long>(m["AvailableIps"]));
    }
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("LbCount") != m.end() && !m["LbCount"].empty()) {
      lbCount = make_shared<long>(boost::any_cast<long>(m["LbCount"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NcCount") != m.end() && !m["NcCount"].empty()) {
      ncCount = make_shared<long>(boost::any_cast<long>(m["NcCount"]));
    }
    if (m.find("NetworkInterfaceCount") != m.end() && !m["NetworkInterfaceCount"].empty()) {
      networkInterfaceCount = make_shared<long>(boost::any_cast<long>(m["NetworkInterfaceCount"]));
    }
    if (m.find("PrivateIpCount") != m.end() && !m["PrivateIpCount"].empty()) {
      privateIpCount = make_shared<long>(boost::any_cast<long>(m["PrivateIpCount"]));
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
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("SubnetName") != m.end() && !m["SubnetName"].empty()) {
      subnetName = make_shared<string>(boost::any_cast<string>(m["SubnetName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetSubnetResponseBodyContentTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubnetResponseBodyContentTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetSubnetResponseBodyContentTags>>(expect1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpdBaseInfo") != m.end() && !m["VpdBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpdBaseInfo"].type()) {
        GetSubnetResponseBodyContentVpdBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpdBaseInfo"]));
        vpdBaseInfo = make_shared<GetSubnetResponseBodyContentVpdBaseInfo>(model1);
      }
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetSubnetResponseBodyContent() = default;
};
class GetSubnetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetSubnetResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetSubnetResponseBody() {}

  explicit GetSubnetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetSubnetResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetSubnetResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSubnetResponseBody() = default;
};
class GetSubnetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSubnetResponseBody> body{};

  GetSubnetResponse() {}

  explicit GetSubnetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSubnetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubnetResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubnetResponse() = default;
};
class GetVccRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> enablePage{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vccId{};

  GetVccRequest() {}

  explicit GetVccRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
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
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
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
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
  }


  virtual ~GetVccRequest() = default;
};
class GetVccResponseBodyContentAliyunRouterInfo : public Darabonba::Model {
public:
  shared_ptr<string> localGatewayIp{};
  shared_ptr<string> mask{};
  shared_ptr<string> pcId{};
  shared_ptr<string> peerGatewayIp{};
  shared_ptr<string> vbrId{};
  shared_ptr<string> vlanId{};

  GetVccResponseBodyContentAliyunRouterInfo() {}

  explicit GetVccResponseBodyContentAliyunRouterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localGatewayIp) {
      res["LocalGatewayIp"] = boost::any(*localGatewayIp);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (pcId) {
      res["PcId"] = boost::any(*pcId);
    }
    if (peerGatewayIp) {
      res["PeerGatewayIp"] = boost::any(*peerGatewayIp);
    }
    if (vbrId) {
      res["VbrId"] = boost::any(*vbrId);
    }
    if (vlanId) {
      res["VlanId"] = boost::any(*vlanId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalGatewayIp") != m.end() && !m["LocalGatewayIp"].empty()) {
      localGatewayIp = make_shared<string>(boost::any_cast<string>(m["LocalGatewayIp"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("PcId") != m.end() && !m["PcId"].empty()) {
      pcId = make_shared<string>(boost::any_cast<string>(m["PcId"]));
    }
    if (m.find("PeerGatewayIp") != m.end() && !m["PeerGatewayIp"].empty()) {
      peerGatewayIp = make_shared<string>(boost::any_cast<string>(m["PeerGatewayIp"]));
    }
    if (m.find("VbrId") != m.end() && !m["VbrId"].empty()) {
      vbrId = make_shared<string>(boost::any_cast<string>(m["VbrId"]));
    }
    if (m.find("VlanId") != m.end() && !m["VlanId"].empty()) {
      vlanId = make_shared<string>(boost::any_cast<string>(m["VlanId"]));
    }
  }


  virtual ~GetVccResponseBodyContentAliyunRouterInfo() = default;
};
class GetVccResponseBodyContentCisRouterInfoCcInfos : public Darabonba::Model {
public:
  shared_ptr<string> ccId{};
  shared_ptr<string> localGatewayIp{};
  shared_ptr<string> remoteGatewayIp{};
  shared_ptr<string> status{};
  shared_ptr<string> subnetMask{};
  shared_ptr<string> vlanId{};

  GetVccResponseBodyContentCisRouterInfoCcInfos() {}

  explicit GetVccResponseBodyContentCisRouterInfoCcInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ccId) {
      res["CcId"] = boost::any(*ccId);
    }
    if (localGatewayIp) {
      res["LocalGatewayIp"] = boost::any(*localGatewayIp);
    }
    if (remoteGatewayIp) {
      res["RemoteGatewayIp"] = boost::any(*remoteGatewayIp);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subnetMask) {
      res["SubnetMask"] = boost::any(*subnetMask);
    }
    if (vlanId) {
      res["VlanId"] = boost::any(*vlanId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CcId") != m.end() && !m["CcId"].empty()) {
      ccId = make_shared<string>(boost::any_cast<string>(m["CcId"]));
    }
    if (m.find("LocalGatewayIp") != m.end() && !m["LocalGatewayIp"].empty()) {
      localGatewayIp = make_shared<string>(boost::any_cast<string>(m["LocalGatewayIp"]));
    }
    if (m.find("RemoteGatewayIp") != m.end() && !m["RemoteGatewayIp"].empty()) {
      remoteGatewayIp = make_shared<string>(boost::any_cast<string>(m["RemoteGatewayIp"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubnetMask") != m.end() && !m["SubnetMask"].empty()) {
      subnetMask = make_shared<string>(boost::any_cast<string>(m["SubnetMask"]));
    }
    if (m.find("VlanId") != m.end() && !m["VlanId"].empty()) {
      vlanId = make_shared<string>(boost::any_cast<string>(m["VlanId"]));
    }
  }


  virtual ~GetVccResponseBodyContentCisRouterInfoCcInfos() = default;
};
class GetVccResponseBodyContentCisRouterInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetVccResponseBodyContentCisRouterInfoCcInfos>> ccInfos{};
  shared_ptr<string> ccrId{};

  GetVccResponseBodyContentCisRouterInfo() {}

  explicit GetVccResponseBodyContentCisRouterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ccInfos) {
      vector<boost::any> temp1;
      for(auto item1:*ccInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CcInfos"] = boost::any(temp1);
    }
    if (ccrId) {
      res["CcrId"] = boost::any(*ccrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CcInfos") != m.end() && !m["CcInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["CcInfos"].type()) {
        vector<GetVccResponseBodyContentCisRouterInfoCcInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CcInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVccResponseBodyContentCisRouterInfoCcInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ccInfos = make_shared<vector<GetVccResponseBodyContentCisRouterInfoCcInfos>>(expect1);
      }
    }
    if (m.find("CcrId") != m.end() && !m["CcrId"].empty()) {
      ccrId = make_shared<string>(boost::any_cast<string>(m["CcrId"]));
    }
  }


  virtual ~GetVccResponseBodyContentCisRouterInfo() = default;
};
class GetVccResponseBodyContentErInfos : public Darabonba::Model {
public:
  shared_ptr<long> connections{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> erId{};
  shared_ptr<string> erName{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<string> message{};
  shared_ptr<string> regionId{};
  shared_ptr<long> routeMaps{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};

  GetVccResponseBodyContentErInfos() {}

  explicit GetVccResponseBodyContentErInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connections) {
      res["Connections"] = boost::any(*connections);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erName) {
      res["ErName"] = boost::any(*erName);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (routeMaps) {
      res["RouteMaps"] = boost::any(*routeMaps);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      connections = make_shared<long>(boost::any_cast<long>(m["Connections"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErName") != m.end() && !m["ErName"].empty()) {
      erName = make_shared<string>(boost::any_cast<string>(m["ErName"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RouteMaps") != m.end() && !m["RouteMaps"].empty()) {
      routeMaps = make_shared<long>(boost::any_cast<long>(m["RouteMaps"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~GetVccResponseBodyContentErInfos() = default;
};
class GetVccResponseBodyContentTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetVccResponseBodyContentTags() {}

  explicit GetVccResponseBodyContentTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetVccResponseBodyContentTags() = default;
};
class GetVccResponseBodyContentVbrInfosVbrBgpPeers : public Darabonba::Model {
public:
  shared_ptr<string> bgpGroupId{};
  shared_ptr<string> bgpPeerId{};
  shared_ptr<string> peerAsn{};
  shared_ptr<string> peerIpAddress{};
  shared_ptr<string> status{};

  GetVccResponseBodyContentVbrInfosVbrBgpPeers() {}

  explicit GetVccResponseBodyContentVbrInfosVbrBgpPeers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bgpGroupId) {
      res["BgpGroupId"] = boost::any(*bgpGroupId);
    }
    if (bgpPeerId) {
      res["BgpPeerId"] = boost::any(*bgpPeerId);
    }
    if (peerAsn) {
      res["PeerAsn"] = boost::any(*peerAsn);
    }
    if (peerIpAddress) {
      res["PeerIpAddress"] = boost::any(*peerIpAddress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BgpGroupId") != m.end() && !m["BgpGroupId"].empty()) {
      bgpGroupId = make_shared<string>(boost::any_cast<string>(m["BgpGroupId"]));
    }
    if (m.find("BgpPeerId") != m.end() && !m["BgpPeerId"].empty()) {
      bgpPeerId = make_shared<string>(boost::any_cast<string>(m["BgpPeerId"]));
    }
    if (m.find("PeerAsn") != m.end() && !m["PeerAsn"].empty()) {
      peerAsn = make_shared<string>(boost::any_cast<string>(m["PeerAsn"]));
    }
    if (m.find("PeerIpAddress") != m.end() && !m["PeerIpAddress"].empty()) {
      peerIpAddress = make_shared<string>(boost::any_cast<string>(m["PeerIpAddress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetVccResponseBodyContentVbrInfosVbrBgpPeers() = default;
};
class GetVccResponseBodyContentVbrInfos : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetVccResponseBodyContentVbrInfosVbrBgpPeers>> vbrBgpPeers{};
  shared_ptr<string> vbrId{};

  GetVccResponseBodyContentVbrInfos() {}

  explicit GetVccResponseBodyContentVbrInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vbrBgpPeers) {
      vector<boost::any> temp1;
      for(auto item1:*vbrBgpPeers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VbrBgpPeers"] = boost::any(temp1);
    }
    if (vbrId) {
      res["VbrId"] = boost::any(*vbrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VbrBgpPeers") != m.end() && !m["VbrBgpPeers"].empty()) {
      if (typeid(vector<boost::any>) == m["VbrBgpPeers"].type()) {
        vector<GetVccResponseBodyContentVbrInfosVbrBgpPeers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VbrBgpPeers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVccResponseBodyContentVbrInfosVbrBgpPeers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vbrBgpPeers = make_shared<vector<GetVccResponseBodyContentVbrInfosVbrBgpPeers>>(expect1);
      }
    }
    if (m.find("VbrId") != m.end() && !m["VbrId"].empty()) {
      vbrId = make_shared<string>(boost::any_cast<string>(m["VbrId"]));
    }
  }


  virtual ~GetVccResponseBodyContentVbrInfos() = default;
};
class GetVccResponseBodyContentVpdBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> createTime{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdName{};

  GetVccResponseBodyContentVpdBaseInfo() {}

  explicit GetVccResponseBodyContentVpdBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdName) {
      res["VpdName"] = boost::any(*vpdName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdName") != m.end() && !m["VpdName"].empty()) {
      vpdName = make_shared<string>(boost::any_cast<string>(m["VpdName"]));
    }
  }


  virtual ~GetVccResponseBodyContentVpdBaseInfo() = default;
};
class GetVccResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> accessPointId{};
  shared_ptr<vector<GetVccResponseBodyContentAliyunRouterInfo>> aliyunRouterInfo{};
  shared_ptr<bool> attachErStatus{};
  shared_ptr<long> bandwidth{};
  shared_ptr<string> bandwidthStr{};
  shared_ptr<string> bgpAsn{};
  shared_ptr<string> bgpCidr{};
  shared_ptr<string> cenId{};
  shared_ptr<string> cenOwnerId{};
  shared_ptr<vector<GetVccResponseBodyContentCisRouterInfo>> cisRouterInfo{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> connectionType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currentNode{};
  shared_ptr<string> duration{};
  shared_ptr<vector<GetVccResponseBodyContentErInfos>> erInfos{};
  shared_ptr<string> expirationDate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> lineOperator{};
  shared_ptr<string> message{};
  shared_ptr<string> payType{};
  shared_ptr<string> portType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetVccResponseBodyContentTags>> tags{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<vector<GetVccResponseBodyContentVbrInfos>> vbrInfos{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vccName{};
  shared_ptr<string> vpcId{};
  shared_ptr<GetVccResponseBodyContentVpdBaseInfo> vpdBaseInfo{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  GetVccResponseBodyContent() {}

  explicit GetVccResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPointId) {
      res["AccessPointId"] = boost::any(*accessPointId);
    }
    if (aliyunRouterInfo) {
      vector<boost::any> temp1;
      for(auto item1:*aliyunRouterInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AliyunRouterInfo"] = boost::any(temp1);
    }
    if (attachErStatus) {
      res["AttachErStatus"] = boost::any(*attachErStatus);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (bandwidthStr) {
      res["BandwidthStr"] = boost::any(*bandwidthStr);
    }
    if (bgpAsn) {
      res["BgpAsn"] = boost::any(*bgpAsn);
    }
    if (bgpCidr) {
      res["BgpCidr"] = boost::any(*bgpCidr);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenOwnerId) {
      res["CenOwnerId"] = boost::any(*cenOwnerId);
    }
    if (cisRouterInfo) {
      vector<boost::any> temp1;
      for(auto item1:*cisRouterInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CisRouterInfo"] = boost::any(temp1);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (connectionType) {
      res["ConnectionType"] = boost::any(*connectionType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (currentNode) {
      res["CurrentNode"] = boost::any(*currentNode);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (erInfos) {
      vector<boost::any> temp1;
      for(auto item1:*erInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErInfos"] = boost::any(temp1);
    }
    if (expirationDate) {
      res["ExpirationDate"] = boost::any(*expirationDate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (lineOperator) {
      res["LineOperator"] = boost::any(*lineOperator);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (portType) {
      res["PortType"] = boost::any(*portType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vbrInfos) {
      vector<boost::any> temp1;
      for(auto item1:*vbrInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VbrInfos"] = boost::any(temp1);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vccName) {
      res["VccName"] = boost::any(*vccName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpdBaseInfo) {
      res["VpdBaseInfo"] = vpdBaseInfo ? boost::any(vpdBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPointId") != m.end() && !m["AccessPointId"].empty()) {
      accessPointId = make_shared<string>(boost::any_cast<string>(m["AccessPointId"]));
    }
    if (m.find("AliyunRouterInfo") != m.end() && !m["AliyunRouterInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AliyunRouterInfo"].type()) {
        vector<GetVccResponseBodyContentAliyunRouterInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AliyunRouterInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVccResponseBodyContentAliyunRouterInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aliyunRouterInfo = make_shared<vector<GetVccResponseBodyContentAliyunRouterInfo>>(expect1);
      }
    }
    if (m.find("AttachErStatus") != m.end() && !m["AttachErStatus"].empty()) {
      attachErStatus = make_shared<bool>(boost::any_cast<bool>(m["AttachErStatus"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("BandwidthStr") != m.end() && !m["BandwidthStr"].empty()) {
      bandwidthStr = make_shared<string>(boost::any_cast<string>(m["BandwidthStr"]));
    }
    if (m.find("BgpAsn") != m.end() && !m["BgpAsn"].empty()) {
      bgpAsn = make_shared<string>(boost::any_cast<string>(m["BgpAsn"]));
    }
    if (m.find("BgpCidr") != m.end() && !m["BgpCidr"].empty()) {
      bgpCidr = make_shared<string>(boost::any_cast<string>(m["BgpCidr"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenOwnerId") != m.end() && !m["CenOwnerId"].empty()) {
      cenOwnerId = make_shared<string>(boost::any_cast<string>(m["CenOwnerId"]));
    }
    if (m.find("CisRouterInfo") != m.end() && !m["CisRouterInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["CisRouterInfo"].type()) {
        vector<GetVccResponseBodyContentCisRouterInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CisRouterInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVccResponseBodyContentCisRouterInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cisRouterInfo = make_shared<vector<GetVccResponseBodyContentCisRouterInfo>>(expect1);
      }
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ConnectionType") != m.end() && !m["ConnectionType"].empty()) {
      connectionType = make_shared<string>(boost::any_cast<string>(m["ConnectionType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CurrentNode") != m.end() && !m["CurrentNode"].empty()) {
      currentNode = make_shared<string>(boost::any_cast<string>(m["CurrentNode"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("ErInfos") != m.end() && !m["ErInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ErInfos"].type()) {
        vector<GetVccResponseBodyContentErInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVccResponseBodyContentErInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        erInfos = make_shared<vector<GetVccResponseBodyContentErInfos>>(expect1);
      }
    }
    if (m.find("ExpirationDate") != m.end() && !m["ExpirationDate"].empty()) {
      expirationDate = make_shared<string>(boost::any_cast<string>(m["ExpirationDate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("LineOperator") != m.end() && !m["LineOperator"].empty()) {
      lineOperator = make_shared<string>(boost::any_cast<string>(m["LineOperator"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PortType") != m.end() && !m["PortType"].empty()) {
      portType = make_shared<string>(boost::any_cast<string>(m["PortType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetVccResponseBodyContentTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVccResponseBodyContentTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetVccResponseBodyContentTags>>(expect1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VbrInfos") != m.end() && !m["VbrInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["VbrInfos"].type()) {
        vector<GetVccResponseBodyContentVbrInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VbrInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVccResponseBodyContentVbrInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vbrInfos = make_shared<vector<GetVccResponseBodyContentVbrInfos>>(expect1);
      }
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VccName") != m.end() && !m["VccName"].empty()) {
      vccName = make_shared<string>(boost::any_cast<string>(m["VccName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpdBaseInfo") != m.end() && !m["VpdBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpdBaseInfo"].type()) {
        GetVccResponseBodyContentVpdBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpdBaseInfo"]));
        vpdBaseInfo = make_shared<GetVccResponseBodyContentVpdBaseInfo>(model1);
      }
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetVccResponseBodyContent() = default;
};
class GetVccResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetVccResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetVccResponseBody() {}

  explicit GetVccResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetVccResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetVccResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetVccResponseBody() = default;
};
class GetVccResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVccResponseBody> body{};

  GetVccResponse() {}

  explicit GetVccResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVccResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVccResponseBody>(model1);
      }
    }
  }


  virtual ~GetVccResponse() = default;
};
class GetVccGrantRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> erId{};
  shared_ptr<string> grantRuleId{};
  shared_ptr<string> grantTenantId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetVccGrantRuleRequest() {}

  explicit GetVccGrantRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (grantRuleId) {
      res["GrantRuleId"] = boost::any(*grantRuleId);
    }
    if (grantTenantId) {
      res["GrantTenantId"] = boost::any(*grantTenantId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GrantRuleId") != m.end() && !m["GrantRuleId"].empty()) {
      grantRuleId = make_shared<string>(boost::any_cast<string>(m["GrantRuleId"]));
    }
    if (m.find("GrantTenantId") != m.end() && !m["GrantTenantId"].empty()) {
      grantTenantId = make_shared<string>(boost::any_cast<string>(m["GrantTenantId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetVccGrantRuleRequest() = default;
};
class GetVccGrantRuleResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> erId{};
  shared_ptr<string> grantRuleId{};
  shared_ptr<string> grantTenantId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tenantId{};
  shared_ptr<bool> used{};

  GetVccGrantRuleResponseBodyContent() {}

  explicit GetVccGrantRuleResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (grantRuleId) {
      res["GrantRuleId"] = boost::any(*grantRuleId);
    }
    if (grantTenantId) {
      res["GrantTenantId"] = boost::any(*grantTenantId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (used) {
      res["Used"] = boost::any(*used);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GrantRuleId") != m.end() && !m["GrantRuleId"].empty()) {
      grantRuleId = make_shared<string>(boost::any_cast<string>(m["GrantRuleId"]));
    }
    if (m.find("GrantTenantId") != m.end() && !m["GrantTenantId"].empty()) {
      grantTenantId = make_shared<string>(boost::any_cast<string>(m["GrantTenantId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Used") != m.end() && !m["Used"].empty()) {
      used = make_shared<bool>(boost::any_cast<bool>(m["Used"]));
    }
  }


  virtual ~GetVccGrantRuleResponseBodyContent() = default;
};
class GetVccGrantRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetVccGrantRuleResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetVccGrantRuleResponseBody() {}

  explicit GetVccGrantRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetVccGrantRuleResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetVccGrantRuleResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetVccGrantRuleResponseBody() = default;
};
class GetVccGrantRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVccGrantRuleResponseBody> body{};

  GetVccGrantRuleResponse() {}

  explicit GetVccGrantRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVccGrantRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVccGrantRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetVccGrantRuleResponse() = default;
};
class GetVccRouteEntryRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vccRouteEntryId{};

  GetVccRouteEntryRequest() {}

  explicit GetVccRouteEntryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vccRouteEntryId) {
      res["VccRouteEntryId"] = boost::any(*vccRouteEntryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VccRouteEntryId") != m.end() && !m["VccRouteEntryId"].empty()) {
      vccRouteEntryId = make_shared<string>(boost::any_cast<string>(m["VccRouteEntryId"]));
    }
  }


  virtual ~GetVccRouteEntryRequest() = default;
};
class GetVccRouteEntryResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> message{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vccRouteEntryId{};

  GetVccRouteEntryResponseBodyContent() {}

  explicit GetVccRouteEntryResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vccRouteEntryId) {
      res["VccRouteEntryId"] = boost::any(*vccRouteEntryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["RouteType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VccRouteEntryId") != m.end() && !m["VccRouteEntryId"].empty()) {
      vccRouteEntryId = make_shared<string>(boost::any_cast<string>(m["VccRouteEntryId"]));
    }
  }


  virtual ~GetVccRouteEntryResponseBodyContent() = default;
};
class GetVccRouteEntryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetVccRouteEntryResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetVccRouteEntryResponseBody() {}

  explicit GetVccRouteEntryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetVccRouteEntryResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetVccRouteEntryResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetVccRouteEntryResponseBody() = default;
};
class GetVccRouteEntryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVccRouteEntryResponseBody> body{};

  GetVccRouteEntryResponse() {}

  explicit GetVccRouteEntryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVccRouteEntryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVccRouteEntryResponseBody>(model1);
      }
    }
  }


  virtual ~GetVccRouteEntryResponse() = default;
};
class GetVpdRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vpdId{};

  GetVpdRequest() {}

  explicit GetVpdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~GetVpdRequest() = default;
};
class GetVpdResponseBodyContentErInfos : public Darabonba::Model {
public:
  shared_ptr<long> connections{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> erId{};
  shared_ptr<string> erName{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<string> message{};
  shared_ptr<string> regionId{};
  shared_ptr<long> routeMaps{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};

  GetVpdResponseBodyContentErInfos() {}

  explicit GetVpdResponseBodyContentErInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connections) {
      res["Connections"] = boost::any(*connections);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erName) {
      res["ErName"] = boost::any(*erName);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (routeMaps) {
      res["RouteMaps"] = boost::any(*routeMaps);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      connections = make_shared<long>(boost::any_cast<long>(m["Connections"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErName") != m.end() && !m["ErName"].empty()) {
      erName = make_shared<string>(boost::any_cast<string>(m["ErName"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RouteMaps") != m.end() && !m["RouteMaps"].empty()) {
      routeMaps = make_shared<long>(boost::any_cast<long>(m["RouteMaps"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~GetVpdResponseBodyContentErInfos() = default;
};
class GetVpdResponseBodyContentTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetVpdResponseBodyContentTags() {}

  explicit GetVpdResponseBodyContentTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetVpdResponseBodyContentTags() = default;
};
class GetVpdResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<bool> attachErStatus{};
  shared_ptr<string> cidr{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<GetVpdResponseBodyContentErInfos>> erInfos{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> message{};
  shared_ptr<long> ncCount{};
  shared_ptr<long> networkInterfaceCount{};
  shared_ptr<long> privateIpCount{};
  shared_ptr<long> quota{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> secondaryCidrBlocks{};
  shared_ptr<string> serviceCidr{};
  shared_ptr<string> status{};
  shared_ptr<long> subnetCount{};
  shared_ptr<vector<GetVpdResponseBodyContentTags>> tags{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdName{};

  GetVpdResponseBodyContent() {}

  explicit GetVpdResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachErStatus) {
      res["AttachErStatus"] = boost::any(*attachErStatus);
    }
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (erInfos) {
      vector<boost::any> temp1;
      for(auto item1:*erInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErInfos"] = boost::any(temp1);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (ncCount) {
      res["NcCount"] = boost::any(*ncCount);
    }
    if (networkInterfaceCount) {
      res["NetworkInterfaceCount"] = boost::any(*networkInterfaceCount);
    }
    if (privateIpCount) {
      res["PrivateIpCount"] = boost::any(*privateIpCount);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (secondaryCidrBlocks) {
      res["SecondaryCidrBlocks"] = boost::any(*secondaryCidrBlocks);
    }
    if (serviceCidr) {
      res["ServiceCidr"] = boost::any(*serviceCidr);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subnetCount) {
      res["SubnetCount"] = boost::any(*subnetCount);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdName) {
      res["VpdName"] = boost::any(*vpdName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachErStatus") != m.end() && !m["AttachErStatus"].empty()) {
      attachErStatus = make_shared<bool>(boost::any_cast<bool>(m["AttachErStatus"]));
    }
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ErInfos") != m.end() && !m["ErInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ErInfos"].type()) {
        vector<GetVpdResponseBodyContentErInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVpdResponseBodyContentErInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        erInfos = make_shared<vector<GetVpdResponseBodyContentErInfos>>(expect1);
      }
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NcCount") != m.end() && !m["NcCount"].empty()) {
      ncCount = make_shared<long>(boost::any_cast<long>(m["NcCount"]));
    }
    if (m.find("NetworkInterfaceCount") != m.end() && !m["NetworkInterfaceCount"].empty()) {
      networkInterfaceCount = make_shared<long>(boost::any_cast<long>(m["NetworkInterfaceCount"]));
    }
    if (m.find("PrivateIpCount") != m.end() && !m["PrivateIpCount"].empty()) {
      privateIpCount = make_shared<long>(boost::any_cast<long>(m["PrivateIpCount"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecondaryCidrBlocks") != m.end() && !m["SecondaryCidrBlocks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecondaryCidrBlocks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecondaryCidrBlocks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      secondaryCidrBlocks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceCidr") != m.end() && !m["ServiceCidr"].empty()) {
      serviceCidr = make_shared<string>(boost::any_cast<string>(m["ServiceCidr"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubnetCount") != m.end() && !m["SubnetCount"].empty()) {
      subnetCount = make_shared<long>(boost::any_cast<long>(m["SubnetCount"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetVpdResponseBodyContentTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVpdResponseBodyContentTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetVpdResponseBodyContentTags>>(expect1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdName") != m.end() && !m["VpdName"].empty()) {
      vpdName = make_shared<string>(boost::any_cast<string>(m["VpdName"]));
    }
  }


  virtual ~GetVpdResponseBodyContent() = default;
};
class GetVpdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetVpdResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetVpdResponseBody() {}

  explicit GetVpdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetVpdResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetVpdResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetVpdResponseBody() = default;
};
class GetVpdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVpdResponseBody> body{};

  GetVpdResponse() {}

  explicit GetVpdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVpdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVpdResponseBody>(model1);
      }
    }
  }


  virtual ~GetVpdResponse() = default;
};
class GetVpdGrantRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> erId{};
  shared_ptr<string> grantRuleId{};
  shared_ptr<string> grantTenantId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetVpdGrantRuleRequest() {}

  explicit GetVpdGrantRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (grantRuleId) {
      res["GrantRuleId"] = boost::any(*grantRuleId);
    }
    if (grantTenantId) {
      res["GrantTenantId"] = boost::any(*grantTenantId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GrantRuleId") != m.end() && !m["GrantRuleId"].empty()) {
      grantRuleId = make_shared<string>(boost::any_cast<string>(m["GrantRuleId"]));
    }
    if (m.find("GrantTenantId") != m.end() && !m["GrantTenantId"].empty()) {
      grantTenantId = make_shared<string>(boost::any_cast<string>(m["GrantTenantId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetVpdGrantRuleRequest() = default;
};
class GetVpdGrantRuleResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> erId{};
  shared_ptr<string> grantRuleId{};
  shared_ptr<string> grantTenantId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tenantId{};
  shared_ptr<bool> used{};

  GetVpdGrantRuleResponseBodyContent() {}

  explicit GetVpdGrantRuleResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (grantRuleId) {
      res["GrantRuleId"] = boost::any(*grantRuleId);
    }
    if (grantTenantId) {
      res["GrantTenantId"] = boost::any(*grantTenantId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (used) {
      res["Used"] = boost::any(*used);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GrantRuleId") != m.end() && !m["GrantRuleId"].empty()) {
      grantRuleId = make_shared<string>(boost::any_cast<string>(m["GrantRuleId"]));
    }
    if (m.find("GrantTenantId") != m.end() && !m["GrantTenantId"].empty()) {
      grantTenantId = make_shared<string>(boost::any_cast<string>(m["GrantTenantId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Used") != m.end() && !m["Used"].empty()) {
      used = make_shared<bool>(boost::any_cast<bool>(m["Used"]));
    }
  }


  virtual ~GetVpdGrantRuleResponseBodyContent() = default;
};
class GetVpdGrantRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetVpdGrantRuleResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetVpdGrantRuleResponseBody() {}

  explicit GetVpdGrantRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetVpdGrantRuleResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetVpdGrantRuleResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetVpdGrantRuleResponseBody() = default;
};
class GetVpdGrantRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVpdGrantRuleResponseBody> body{};

  GetVpdGrantRuleResponse() {}

  explicit GetVpdGrantRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVpdGrantRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVpdGrantRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetVpdGrantRuleResponse() = default;
};
class GetVpdRouteEntryRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdRouteEntryId{};

  GetVpdRouteEntryRequest() {}

  explicit GetVpdRouteEntryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdRouteEntryId) {
      res["VpdRouteEntryId"] = boost::any(*vpdRouteEntryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdRouteEntryId") != m.end() && !m["VpdRouteEntryId"].empty()) {
      vpdRouteEntryId = make_shared<string>(boost::any_cast<string>(m["VpdRouteEntryId"]));
    }
  }


  virtual ~GetVpdRouteEntryRequest() = default;
};
class GetVpdRouteEntryResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdRouteEntryId{};

  GetVpdRouteEntryResponseBodyContent() {}

  explicit GetVpdRouteEntryResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdRouteEntryId) {
      res["VpdRouteEntryId"] = boost::any(*vpdRouteEntryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["RouteType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdRouteEntryId") != m.end() && !m["VpdRouteEntryId"].empty()) {
      vpdRouteEntryId = make_shared<string>(boost::any_cast<string>(m["VpdRouteEntryId"]));
    }
  }


  virtual ~GetVpdRouteEntryResponseBodyContent() = default;
};
class GetVpdRouteEntryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<GetVpdRouteEntryResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetVpdRouteEntryResponseBody() {}

  explicit GetVpdRouteEntryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        GetVpdRouteEntryResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<GetVpdRouteEntryResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetVpdRouteEntryResponseBody() = default;
};
class GetVpdRouteEntryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVpdRouteEntryResponseBody> body{};

  GetVpdRouteEntryResponse() {}

  explicit GetVpdRouteEntryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVpdRouteEntryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVpdRouteEntryResponseBody>(model1);
      }
    }
  }


  virtual ~GetVpdRouteEntryResponse() = default;
};
class InitializeVccRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};

  InitializeVccRequest() {}

  explicit InitializeVccRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~InitializeVccRequest() = default;
};
class InitializeVccResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> roleName{};

  InitializeVccResponseBodyContent() {}

  explicit InitializeVccResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~InitializeVccResponseBodyContent() = default;
};
class InitializeVccResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<InitializeVccResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  InitializeVccResponseBody() {}

  explicit InitializeVccResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        InitializeVccResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<InitializeVccResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~InitializeVccResponseBody() = default;
};
class InitializeVccResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitializeVccResponseBody> body{};

  InitializeVccResponse() {}

  explicit InitializeVccResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitializeVccResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitializeVccResponseBody>(model1);
      }
    }
  }


  virtual ~InitializeVccResponse() = default;
};
class ListElasticNetworkInterfacesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListElasticNetworkInterfacesRequestTag() {}

  explicit ListElasticNetworkInterfacesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListElasticNetworkInterfacesRequestTag() = default;
};
class ListElasticNetworkInterfacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> ip{};
  shared_ptr<string> networkType{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListElasticNetworkInterfacesRequestTag>> tag{};
  shared_ptr<string> type{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ListElasticNetworkInterfacesRequest() {}

  explicit ListElasticNetworkInterfacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
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
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
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
        vector<ListElasticNetworkInterfacesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListElasticNetworkInterfacesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListElasticNetworkInterfacesRequestTag>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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


  virtual ~ListElasticNetworkInterfacesRequest() = default;
};
class ListElasticNetworkInterfacesResponseBodyContentDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListElasticNetworkInterfacesResponseBodyContentDataTags() {}

  explicit ListElasticNetworkInterfacesResponseBodyContentDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListElasticNetworkInterfacesResponseBodyContentDataTags() = default;
};
class ListElasticNetworkInterfacesResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> gateway{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> ip{};
  shared_ptr<string> mac{};
  shared_ptr<string> mask{};
  shared_ptr<string> message{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListElasticNetworkInterfacesResponseBodyContentDataTags>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ListElasticNetworkInterfacesResponseBodyContentData() {}

  explicit ListElasticNetworkInterfacesResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (gateway) {
      res["Gateway"] = boost::any(*gateway);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("Gateway") != m.end() && !m["Gateway"].empty()) {
      gateway = make_shared<string>(boost::any_cast<string>(m["Gateway"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListElasticNetworkInterfacesResponseBodyContentDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListElasticNetworkInterfacesResponseBodyContentDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListElasticNetworkInterfacesResponseBodyContentDataTags>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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


  virtual ~ListElasticNetworkInterfacesResponseBodyContentData() = default;
};
class ListElasticNetworkInterfacesResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListElasticNetworkInterfacesResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListElasticNetworkInterfacesResponseBodyContent() {}

  explicit ListElasticNetworkInterfacesResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListElasticNetworkInterfacesResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListElasticNetworkInterfacesResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListElasticNetworkInterfacesResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListElasticNetworkInterfacesResponseBodyContent() = default;
};
class ListElasticNetworkInterfacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListElasticNetworkInterfacesResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListElasticNetworkInterfacesResponseBody() {}

  explicit ListElasticNetworkInterfacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListElasticNetworkInterfacesResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListElasticNetworkInterfacesResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListElasticNetworkInterfacesResponseBody() = default;
};
class ListElasticNetworkInterfacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListElasticNetworkInterfacesResponseBody> body{};

  ListElasticNetworkInterfacesResponse() {}

  explicit ListElasticNetworkInterfacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListElasticNetworkInterfacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListElasticNetworkInterfacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListElasticNetworkInterfacesResponse() = default;
};
class ListErAttachmentsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoReceiveAllRoute{};
  shared_ptr<bool> enablePage{};
  shared_ptr<string> erAttachmentId{};
  shared_ptr<string> erAttachmentName{};
  shared_ptr<string> erId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceTenantId{};
  shared_ptr<string> status{};

  ListErAttachmentsRequest() {}

  explicit ListErAttachmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoReceiveAllRoute) {
      res["AutoReceiveAllRoute"] = boost::any(*autoReceiveAllRoute);
    }
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (erAttachmentId) {
      res["ErAttachmentId"] = boost::any(*erAttachmentId);
    }
    if (erAttachmentName) {
      res["ErAttachmentName"] = boost::any(*erAttachmentName);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (resourceTenantId) {
      res["ResourceTenantId"] = boost::any(*resourceTenantId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoReceiveAllRoute") != m.end() && !m["AutoReceiveAllRoute"].empty()) {
      autoReceiveAllRoute = make_shared<bool>(boost::any_cast<bool>(m["AutoReceiveAllRoute"]));
    }
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("ErAttachmentId") != m.end() && !m["ErAttachmentId"].empty()) {
      erAttachmentId = make_shared<string>(boost::any_cast<string>(m["ErAttachmentId"]));
    }
    if (m.find("ErAttachmentName") != m.end() && !m["ErAttachmentName"].empty()) {
      erAttachmentName = make_shared<string>(boost::any_cast<string>(m["ErAttachmentName"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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
    if (m.find("ResourceTenantId") != m.end() && !m["ResourceTenantId"].empty()) {
      resourceTenantId = make_shared<string>(boost::any_cast<string>(m["ResourceTenantId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListErAttachmentsRequest() = default;
};
class ListErAttachmentsResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<bool> across{};
  shared_ptr<bool> autoReceiveAllRoute{};
  shared_ptr<string> createTime{};
  shared_ptr<string> erAttachmentId{};
  shared_ptr<string> erAttachmentName{};
  shared_ptr<string> erId{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> message{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceTenantId{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};

  ListErAttachmentsResponseBodyContentData() {}

  explicit ListErAttachmentsResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (across) {
      res["Across"] = boost::any(*across);
    }
    if (autoReceiveAllRoute) {
      res["AutoReceiveAllRoute"] = boost::any(*autoReceiveAllRoute);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (erAttachmentId) {
      res["ErAttachmentId"] = boost::any(*erAttachmentId);
    }
    if (erAttachmentName) {
      res["ErAttachmentName"] = boost::any(*erAttachmentName);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTenantId) {
      res["ResourceTenantId"] = boost::any(*resourceTenantId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Across") != m.end() && !m["Across"].empty()) {
      across = make_shared<bool>(boost::any_cast<bool>(m["Across"]));
    }
    if (m.find("AutoReceiveAllRoute") != m.end() && !m["AutoReceiveAllRoute"].empty()) {
      autoReceiveAllRoute = make_shared<bool>(boost::any_cast<bool>(m["AutoReceiveAllRoute"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ErAttachmentId") != m.end() && !m["ErAttachmentId"].empty()) {
      erAttachmentId = make_shared<string>(boost::any_cast<string>(m["ErAttachmentId"]));
    }
    if (m.find("ErAttachmentName") != m.end() && !m["ErAttachmentName"].empty()) {
      erAttachmentName = make_shared<string>(boost::any_cast<string>(m["ErAttachmentName"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTenantId") != m.end() && !m["ResourceTenantId"].empty()) {
      resourceTenantId = make_shared<string>(boost::any_cast<string>(m["ResourceTenantId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ListErAttachmentsResponseBodyContentData() = default;
};
class ListErAttachmentsResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListErAttachmentsResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListErAttachmentsResponseBodyContent() {}

  explicit ListErAttachmentsResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListErAttachmentsResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListErAttachmentsResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListErAttachmentsResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListErAttachmentsResponseBodyContent() = default;
};
class ListErAttachmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListErAttachmentsResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListErAttachmentsResponseBody() {}

  explicit ListErAttachmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListErAttachmentsResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListErAttachmentsResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListErAttachmentsResponseBody() = default;
};
class ListErAttachmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListErAttachmentsResponseBody> body{};

  ListErAttachmentsResponse() {}

  explicit ListErAttachmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListErAttachmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListErAttachmentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListErAttachmentsResponse() = default;
};
class ListErRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<bool> enablePage{};
  shared_ptr<string> erId{};
  shared_ptr<bool> ignoreDetailedRouteEntry{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> status{};

  ListErRouteEntriesRequest() {}

  explicit ListErRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (ignoreDetailedRouteEntry) {
      res["IgnoreDetailedRouteEntry"] = boost::any(*ignoreDetailedRouteEntry);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
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
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("IgnoreDetailedRouteEntry") != m.end() && !m["IgnoreDetailedRouteEntry"].empty()) {
      ignoreDetailedRouteEntry = make_shared<bool>(boost::any_cast<bool>(m["IgnoreDetailedRouteEntry"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
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
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["RouteType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListErRouteEntriesRequest() = default;
};
class ListErRouteEntriesResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> erId{};
  shared_ptr<string> erRouteEntryId{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceTenantId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};

  ListErRouteEntriesResponseBodyContentData() {}

  explicit ListErRouteEntriesResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erRouteEntryId) {
      res["ErRouteEntryId"] = boost::any(*erRouteEntryId);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTenantId) {
      res["ResourceTenantId"] = boost::any(*resourceTenantId);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErRouteEntryId") != m.end() && !m["ErRouteEntryId"].empty()) {
      erRouteEntryId = make_shared<string>(boost::any_cast<string>(m["ErRouteEntryId"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTenantId") != m.end() && !m["ResourceTenantId"].empty()) {
      resourceTenantId = make_shared<string>(boost::any_cast<string>(m["ResourceTenantId"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["RouteType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ListErRouteEntriesResponseBodyContentData() = default;
};
class ListErRouteEntriesResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListErRouteEntriesResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListErRouteEntriesResponseBodyContent() {}

  explicit ListErRouteEntriesResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListErRouteEntriesResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListErRouteEntriesResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListErRouteEntriesResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListErRouteEntriesResponseBodyContent() = default;
};
class ListErRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListErRouteEntriesResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListErRouteEntriesResponseBody() {}

  explicit ListErRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListErRouteEntriesResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListErRouteEntriesResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListErRouteEntriesResponseBody() = default;
};
class ListErRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListErRouteEntriesResponseBody> body{};

  ListErRouteEntriesResponse() {}

  explicit ListErRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListErRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListErRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListErRouteEntriesResponse() = default;
};
class ListErRouteMapsRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<bool> enablePage{};
  shared_ptr<string> erId{};
  shared_ptr<string> erRouteMapId{};
  shared_ptr<long> erRouteMapNum{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> receptionInstanceId{};
  shared_ptr<string> receptionInstanceName{};
  shared_ptr<string> receptionInstanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> routeMapAction{};
  shared_ptr<string> transmissionInstanceId{};
  shared_ptr<string> transmissionInstanceName{};
  shared_ptr<string> transmissionInstanceType{};

  ListErRouteMapsRequest() {}

  explicit ListErRouteMapsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erRouteMapId) {
      res["ErRouteMapId"] = boost::any(*erRouteMapId);
    }
    if (erRouteMapNum) {
      res["ErRouteMapNum"] = boost::any(*erRouteMapNum);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (receptionInstanceId) {
      res["ReceptionInstanceId"] = boost::any(*receptionInstanceId);
    }
    if (receptionInstanceName) {
      res["ReceptionInstanceName"] = boost::any(*receptionInstanceName);
    }
    if (receptionInstanceType) {
      res["ReceptionInstanceType"] = boost::any(*receptionInstanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (routeMapAction) {
      res["RouteMapAction"] = boost::any(*routeMapAction);
    }
    if (transmissionInstanceId) {
      res["TransmissionInstanceId"] = boost::any(*transmissionInstanceId);
    }
    if (transmissionInstanceName) {
      res["TransmissionInstanceName"] = boost::any(*transmissionInstanceName);
    }
    if (transmissionInstanceType) {
      res["TransmissionInstanceType"] = boost::any(*transmissionInstanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErRouteMapId") != m.end() && !m["ErRouteMapId"].empty()) {
      erRouteMapId = make_shared<string>(boost::any_cast<string>(m["ErRouteMapId"]));
    }
    if (m.find("ErRouteMapNum") != m.end() && !m["ErRouteMapNum"].empty()) {
      erRouteMapNum = make_shared<long>(boost::any_cast<long>(m["ErRouteMapNum"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ReceptionInstanceId") != m.end() && !m["ReceptionInstanceId"].empty()) {
      receptionInstanceId = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceId"]));
    }
    if (m.find("ReceptionInstanceName") != m.end() && !m["ReceptionInstanceName"].empty()) {
      receptionInstanceName = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceName"]));
    }
    if (m.find("ReceptionInstanceType") != m.end() && !m["ReceptionInstanceType"].empty()) {
      receptionInstanceType = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RouteMapAction") != m.end() && !m["RouteMapAction"].empty()) {
      routeMapAction = make_shared<string>(boost::any_cast<string>(m["RouteMapAction"]));
    }
    if (m.find("TransmissionInstanceId") != m.end() && !m["TransmissionInstanceId"].empty()) {
      transmissionInstanceId = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceId"]));
    }
    if (m.find("TransmissionInstanceName") != m.end() && !m["TransmissionInstanceName"].empty()) {
      transmissionInstanceName = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceName"]));
    }
    if (m.find("TransmissionInstanceType") != m.end() && !m["TransmissionInstanceType"].empty()) {
      transmissionInstanceType = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceType"]));
    }
  }


  virtual ~ListErRouteMapsRequest() = default;
};
class ListErRouteMapsResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> erId{};
  shared_ptr<string> erRouteMapId{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> message{};
  shared_ptr<string> receptionInstanceId{};
  shared_ptr<string> receptionInstanceName{};
  shared_ptr<string> receptionInstanceOwner{};
  shared_ptr<string> receptionInstanceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> routeMapNum{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> transmissionInstanceId{};
  shared_ptr<string> transmissionInstanceName{};
  shared_ptr<string> transmissionInstanceOwner{};
  shared_ptr<string> transmissionInstanceType{};

  ListErRouteMapsResponseBodyContentData() {}

  explicit ListErRouteMapsResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erRouteMapId) {
      res["ErRouteMapId"] = boost::any(*erRouteMapId);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (receptionInstanceId) {
      res["ReceptionInstanceId"] = boost::any(*receptionInstanceId);
    }
    if (receptionInstanceName) {
      res["ReceptionInstanceName"] = boost::any(*receptionInstanceName);
    }
    if (receptionInstanceOwner) {
      res["ReceptionInstanceOwner"] = boost::any(*receptionInstanceOwner);
    }
    if (receptionInstanceType) {
      res["ReceptionInstanceType"] = boost::any(*receptionInstanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (routeMapNum) {
      res["RouteMapNum"] = boost::any(*routeMapNum);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (transmissionInstanceId) {
      res["TransmissionInstanceId"] = boost::any(*transmissionInstanceId);
    }
    if (transmissionInstanceName) {
      res["TransmissionInstanceName"] = boost::any(*transmissionInstanceName);
    }
    if (transmissionInstanceOwner) {
      res["TransmissionInstanceOwner"] = boost::any(*transmissionInstanceOwner);
    }
    if (transmissionInstanceType) {
      res["TransmissionInstanceType"] = boost::any(*transmissionInstanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErRouteMapId") != m.end() && !m["ErRouteMapId"].empty()) {
      erRouteMapId = make_shared<string>(boost::any_cast<string>(m["ErRouteMapId"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ReceptionInstanceId") != m.end() && !m["ReceptionInstanceId"].empty()) {
      receptionInstanceId = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceId"]));
    }
    if (m.find("ReceptionInstanceName") != m.end() && !m["ReceptionInstanceName"].empty()) {
      receptionInstanceName = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceName"]));
    }
    if (m.find("ReceptionInstanceOwner") != m.end() && !m["ReceptionInstanceOwner"].empty()) {
      receptionInstanceOwner = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceOwner"]));
    }
    if (m.find("ReceptionInstanceType") != m.end() && !m["ReceptionInstanceType"].empty()) {
      receptionInstanceType = make_shared<string>(boost::any_cast<string>(m["ReceptionInstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RouteMapNum") != m.end() && !m["RouteMapNum"].empty()) {
      routeMapNum = make_shared<long>(boost::any_cast<long>(m["RouteMapNum"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("TransmissionInstanceId") != m.end() && !m["TransmissionInstanceId"].empty()) {
      transmissionInstanceId = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceId"]));
    }
    if (m.find("TransmissionInstanceName") != m.end() && !m["TransmissionInstanceName"].empty()) {
      transmissionInstanceName = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceName"]));
    }
    if (m.find("TransmissionInstanceOwner") != m.end() && !m["TransmissionInstanceOwner"].empty()) {
      transmissionInstanceOwner = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceOwner"]));
    }
    if (m.find("TransmissionInstanceType") != m.end() && !m["TransmissionInstanceType"].empty()) {
      transmissionInstanceType = make_shared<string>(boost::any_cast<string>(m["TransmissionInstanceType"]));
    }
  }


  virtual ~ListErRouteMapsResponseBodyContentData() = default;
};
class ListErRouteMapsResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListErRouteMapsResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListErRouteMapsResponseBodyContent() {}

  explicit ListErRouteMapsResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListErRouteMapsResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListErRouteMapsResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListErRouteMapsResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListErRouteMapsResponseBodyContent() = default;
};
class ListErRouteMapsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListErRouteMapsResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListErRouteMapsResponseBody() {}

  explicit ListErRouteMapsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListErRouteMapsResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListErRouteMapsResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListErRouteMapsResponseBody() = default;
};
class ListErRouteMapsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListErRouteMapsResponseBody> body{};

  ListErRouteMapsResponse() {}

  explicit ListErRouteMapsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListErRouteMapsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListErRouteMapsResponseBody>(model1);
      }
    }
  }


  virtual ~ListErRouteMapsResponse() = default;
};
class ListErsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListErsRequestTag() {}

  explicit ListErsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListErsRequestTag() = default;
};
class ListErsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enablePage{};
  shared_ptr<string> erId{};
  shared_ptr<string> erName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListErsRequestTag>> tag{};

  ListErsRequest() {}

  explicit ListErsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erName) {
      res["ErName"] = boost::any(*erName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
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
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErName") != m.end() && !m["ErName"].empty()) {
      erName = make_shared<string>(boost::any_cast<string>(m["ErName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListErsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListErsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListErsRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListErsRequest() = default;
};
class ListErsResponseBodyContentDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListErsResponseBodyContentDataTags() {}

  explicit ListErsResponseBodyContentDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListErsResponseBodyContentDataTags() = default;
};
class ListErsResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<long> connections{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> erId{};
  shared_ptr<string> erName{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<string> message{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> routeMaps{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListErsResponseBodyContentDataTags>> tags{};
  shared_ptr<string> tenantId{};

  ListErsResponseBodyContentData() {}

  explicit ListErsResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connections) {
      res["Connections"] = boost::any(*connections);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erName) {
      res["ErName"] = boost::any(*erName);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (routeMaps) {
      res["RouteMaps"] = boost::any(*routeMaps);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      connections = make_shared<long>(boost::any_cast<long>(m["Connections"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErName") != m.end() && !m["ErName"].empty()) {
      erName = make_shared<string>(boost::any_cast<string>(m["ErName"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RouteMaps") != m.end() && !m["RouteMaps"].empty()) {
      routeMaps = make_shared<long>(boost::any_cast<long>(m["RouteMaps"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListErsResponseBodyContentDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListErsResponseBodyContentDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListErsResponseBodyContentDataTags>>(expect1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ListErsResponseBodyContentData() = default;
};
class ListErsResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListErsResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListErsResponseBodyContent() {}

  explicit ListErsResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListErsResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListErsResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListErsResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListErsResponseBodyContent() = default;
};
class ListErsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListErsResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListErsResponseBody() {}

  explicit ListErsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListErsResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListErsResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListErsResponseBody() = default;
};
class ListErsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListErsResponseBody> body{};

  ListErsResponse() {}

  explicit ListErsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListErsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListErsResponseBody>(model1);
      }
    }
  }


  virtual ~ListErsResponse() = default;
};
class ListInstancesByNcdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> maxNcd{};
  shared_ptr<string> regionId{};

  ListInstancesByNcdRequest() {}

  explicit ListInstancesByNcdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (maxNcd) {
      res["MaxNcd"] = boost::any(*maxNcd);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("MaxNcd") != m.end() && !m["MaxNcd"].empty()) {
      maxNcd = make_shared<long>(boost::any_cast<long>(m["MaxNcd"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListInstancesByNcdRequest() = default;
};
class ListInstancesByNcdResponseBodyContentInstanceInfos : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> ncd{};

  ListInstancesByNcdResponseBodyContentInstanceInfos() {}

  explicit ListInstancesByNcdResponseBodyContentInstanceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ncd) {
      res["Ncd"] = boost::any(*ncd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ncd") != m.end() && !m["Ncd"].empty()) {
      ncd = make_shared<long>(boost::any_cast<long>(m["Ncd"]));
    }
  }


  virtual ~ListInstancesByNcdResponseBodyContentInstanceInfos() = default;
};
class ListInstancesByNcdResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancesByNcdResponseBodyContentInstanceInfos>> instanceInfos{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> maxNcd{};
  shared_ptr<string> sourceInstanceId{};

  ListInstancesByNcdResponseBodyContent() {}

  explicit ListInstancesByNcdResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*instanceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceInfos"] = boost::any(temp1);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (maxNcd) {
      res["MaxNcd"] = boost::any(*maxNcd);
    }
    if (sourceInstanceId) {
      res["SourceInstanceId"] = boost::any(*sourceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceInfos") != m.end() && !m["InstanceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceInfos"].type()) {
        vector<ListInstancesByNcdResponseBodyContentInstanceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesByNcdResponseBodyContentInstanceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceInfos = make_shared<vector<ListInstancesByNcdResponseBodyContentInstanceInfos>>(expect1);
      }
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("MaxNcd") != m.end() && !m["MaxNcd"].empty()) {
      maxNcd = make_shared<long>(boost::any_cast<long>(m["MaxNcd"]));
    }
    if (m.find("SourceInstanceId") != m.end() && !m["SourceInstanceId"].empty()) {
      sourceInstanceId = make_shared<string>(boost::any_cast<string>(m["SourceInstanceId"]));
    }
  }


  virtual ~ListInstancesByNcdResponseBodyContent() = default;
};
class ListInstancesByNcdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListInstancesByNcdResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListInstancesByNcdResponseBody() {}

  explicit ListInstancesByNcdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListInstancesByNcdResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListInstancesByNcdResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInstancesByNcdResponseBody() = default;
};
class ListInstancesByNcdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesByNcdResponseBody> body{};

  ListInstancesByNcdResponse() {}

  explicit ListInstancesByNcdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesByNcdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesByNcdResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesByNcdResponse() = default;
};
class ListLeniPrivateIpAddressesRequest : public Darabonba::Model {
public:
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> ipName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};

  ListLeniPrivateIpAddressesRequest() {}

  explicit ListLeniPrivateIpAddressesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
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
  }


  virtual ~ListLeniPrivateIpAddressesRequest() = default;
};
class ListLeniPrivateIpAddressesResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> ipName{};
  shared_ptr<string> message{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  ListLeniPrivateIpAddressesResponseBodyContentData() {}

  explicit ListLeniPrivateIpAddressesResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListLeniPrivateIpAddressesResponseBodyContentData() = default;
};
class ListLeniPrivateIpAddressesResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListLeniPrivateIpAddressesResponseBodyContentData>> data{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> total{};

  ListLeniPrivateIpAddressesResponseBodyContent() {}

  explicit ListLeniPrivateIpAddressesResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListLeniPrivateIpAddressesResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLeniPrivateIpAddressesResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListLeniPrivateIpAddressesResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListLeniPrivateIpAddressesResponseBodyContent() = default;
};
class ListLeniPrivateIpAddressesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListLeniPrivateIpAddressesResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListLeniPrivateIpAddressesResponseBody() {}

  explicit ListLeniPrivateIpAddressesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListLeniPrivateIpAddressesResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListLeniPrivateIpAddressesResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListLeniPrivateIpAddressesResponseBody() = default;
};
class ListLeniPrivateIpAddressesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLeniPrivateIpAddressesResponseBody> body{};

  ListLeniPrivateIpAddressesResponse() {}

  explicit ListLeniPrivateIpAddressesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLeniPrivateIpAddressesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLeniPrivateIpAddressesResponseBody>(model1);
      }
    }
  }


  virtual ~ListLeniPrivateIpAddressesResponse() = default;
};
class ListLniPrivateIpAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<bool> enablePage{};
  shared_ptr<string> ip{};
  shared_ptr<string> ipName{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  ListLniPrivateIpAddressRequest() {}

  explicit ListLniPrivateIpAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
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
  }


  virtual ~ListLniPrivateIpAddressRequest() = default;
};
class ListLniPrivateIpAddressResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> ipAddressMac{};
  shared_ptr<string> ipName{};
  shared_ptr<string> message{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  ListLniPrivateIpAddressResponseBodyContentData() {}

  explicit ListLniPrivateIpAddressResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (ipAddressMac) {
      res["IpAddressMac"] = boost::any(*ipAddressMac);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("IpAddressMac") != m.end() && !m["IpAddressMac"].empty()) {
      ipAddressMac = make_shared<string>(boost::any_cast<string>(m["IpAddressMac"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListLniPrivateIpAddressResponseBodyContentData() = default;
};
class ListLniPrivateIpAddressResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListLniPrivateIpAddressResponseBodyContentData>> data{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> total{};

  ListLniPrivateIpAddressResponseBodyContent() {}

  explicit ListLniPrivateIpAddressResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListLniPrivateIpAddressResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLniPrivateIpAddressResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListLniPrivateIpAddressResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListLniPrivateIpAddressResponseBodyContent() = default;
};
class ListLniPrivateIpAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListLniPrivateIpAddressResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListLniPrivateIpAddressResponseBody() {}

  explicit ListLniPrivateIpAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListLniPrivateIpAddressResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListLniPrivateIpAddressResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListLniPrivateIpAddressResponseBody() = default;
};
class ListLniPrivateIpAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLniPrivateIpAddressResponseBody> body{};

  ListLniPrivateIpAddressResponse() {}

  explicit ListLniPrivateIpAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLniPrivateIpAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLniPrivateIpAddressResponseBody>(model1);
      }
    }
  }


  virtual ~ListLniPrivateIpAddressResponse() = default;
};
class ListNetworkInterfacesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListNetworkInterfacesRequestTag() {}

  explicit ListNetworkInterfacesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListNetworkInterfacesRequestTag() = default;
};
class ListNetworkInterfacesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enablePage{};
  shared_ptr<string> ip{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> subnetId{};
  shared_ptr<vector<ListNetworkInterfacesRequestTag>> tag{};
  shared_ptr<string> vpdId{};

  ListNetworkInterfacesRequest() {}

  explicit ListNetworkInterfacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
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
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
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
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListNetworkInterfacesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetworkInterfacesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListNetworkInterfacesRequestTag>>(expect1);
      }
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~ListNetworkInterfacesRequest() = default;
};
class ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> ipAddressMac{};
  shared_ptr<string> ipName{};
  shared_ptr<string> message{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> status{};

  ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup() {}

  explicit ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ipAddressMac) {
      res["IpAddressMac"] = boost::any(*ipAddressMac);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IpAddressMac") != m.end() && !m["IpAddressMac"].empty()) {
      ipAddressMac = make_shared<string>(boost::any_cast<string>(m["IpAddressMac"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup() = default;
};
class ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> createTime{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> subnetName{};

  ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo() {}

  explicit ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (subnetName) {
      res["SubnetName"] = boost::any(*subnetName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("SubnetName") != m.end() && !m["SubnetName"].empty()) {
      subnetName = make_shared<string>(boost::any_cast<string>(m["SubnetName"]));
    }
  }


  virtual ~ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo() = default;
};
class ListNetworkInterfacesResponseBodyContentDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListNetworkInterfacesResponseBodyContentDataTags() {}

  explicit ListNetworkInterfacesResponseBodyContentDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListNetworkInterfacesResponseBodyContentDataTags() = default;
};
class ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> createTime{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdName{};

  ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo() {}

  explicit ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdName) {
      res["VpdName"] = boost::any(*vpdName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdName") != m.end() && !m["VpdName"].empty()) {
      vpdName = make_shared<string>(boost::any_cast<string>(m["VpdName"]));
    }
  }


  virtual ~ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo() = default;
};
class ListNetworkInterfacesResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<vector<string>> ethernet{};
  shared_ptr<string> gateway{};
  shared_ptr<string> ip{};
  shared_ptr<string> ncType{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> networkInterfaceName{};
  shared_ptr<string> nodeId{};
  shared_ptr<vector<ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup>> privateIpAddressMacGroup{};
  shared_ptr<long> quota{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceMac{};
  shared_ptr<string> status{};
  shared_ptr<ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo> subnetBaseInfo{};
  shared_ptr<vector<ListNetworkInterfacesResponseBodyContentDataTags>> tags{};
  shared_ptr<string> tenantId{};
  shared_ptr<ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo> vpdBaseInfo{};
  shared_ptr<string> zoneId{};

  ListNetworkInterfacesResponseBodyContentData() {}

  explicit ListNetworkInterfacesResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (ethernet) {
      res["Ethernet"] = boost::any(*ethernet);
    }
    if (gateway) {
      res["Gateway"] = boost::any(*gateway);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (ncType) {
      res["NcType"] = boost::any(*ncType);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (networkInterfaceName) {
      res["NetworkInterfaceName"] = boost::any(*networkInterfaceName);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (privateIpAddressMacGroup) {
      vector<boost::any> temp1;
      for(auto item1:*privateIpAddressMacGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PrivateIpAddressMacGroup"] = boost::any(temp1);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceMac) {
      res["ServiceMac"] = boost::any(*serviceMac);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subnetBaseInfo) {
      res["SubnetBaseInfo"] = subnetBaseInfo ? boost::any(subnetBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vpdBaseInfo) {
      res["VpdBaseInfo"] = vpdBaseInfo ? boost::any(vpdBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Ethernet") != m.end() && !m["Ethernet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ethernet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ethernet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ethernet = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Gateway") != m.end() && !m["Gateway"].empty()) {
      gateway = make_shared<string>(boost::any_cast<string>(m["Gateway"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NcType") != m.end() && !m["NcType"].empty()) {
      ncType = make_shared<string>(boost::any_cast<string>(m["NcType"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("NetworkInterfaceName") != m.end() && !m["NetworkInterfaceName"].empty()) {
      networkInterfaceName = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceName"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("PrivateIpAddressMacGroup") != m.end() && !m["PrivateIpAddressMacGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["PrivateIpAddressMacGroup"].type()) {
        vector<ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PrivateIpAddressMacGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        privateIpAddressMacGroup = make_shared<vector<ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup>>(expect1);
      }
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceMac") != m.end() && !m["ServiceMac"].empty()) {
      serviceMac = make_shared<string>(boost::any_cast<string>(m["ServiceMac"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubnetBaseInfo") != m.end() && !m["SubnetBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubnetBaseInfo"].type()) {
        ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubnetBaseInfo"]));
        subnetBaseInfo = make_shared<ListNetworkInterfacesResponseBodyContentDataSubnetBaseInfo>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListNetworkInterfacesResponseBodyContentDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetworkInterfacesResponseBodyContentDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListNetworkInterfacesResponseBodyContentDataTags>>(expect1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("VpdBaseInfo") != m.end() && !m["VpdBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpdBaseInfo"].type()) {
        ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpdBaseInfo"]));
        vpdBaseInfo = make_shared<ListNetworkInterfacesResponseBodyContentDataVpdBaseInfo>(model1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListNetworkInterfacesResponseBodyContentData() = default;
};
class ListNetworkInterfacesResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListNetworkInterfacesResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListNetworkInterfacesResponseBodyContent() {}

  explicit ListNetworkInterfacesResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListNetworkInterfacesResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetworkInterfacesResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListNetworkInterfacesResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListNetworkInterfacesResponseBodyContent() = default;
};
class ListNetworkInterfacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListNetworkInterfacesResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListNetworkInterfacesResponseBody() {}

  explicit ListNetworkInterfacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListNetworkInterfacesResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListNetworkInterfacesResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNetworkInterfacesResponseBody() = default;
};
class ListNetworkInterfacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNetworkInterfacesResponseBody> body{};

  ListNetworkInterfacesResponse() {}

  explicit ListNetworkInterfacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNetworkInterfacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNetworkInterfacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNetworkInterfacesResponse() = default;
};
class ListNodeInfosForPodRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  ListNodeInfosForPodRequest() {}

  explicit ListNodeInfosForPodRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListNodeInfosForPodRequest() = default;
};
class ListNodeInfosForPodResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> hdeniQuota{};
  shared_ptr<long> leniQuota{};
  shared_ptr<long> leniSipQuota{};
  shared_ptr<long> lniSipQuota{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> vSwitches{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ListNodeInfosForPodResponseBodyContent() {}

  explicit ListNodeInfosForPodResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hdeniQuota) {
      res["HdeniQuota"] = boost::any(*hdeniQuota);
    }
    if (leniQuota) {
      res["LeniQuota"] = boost::any(*leniQuota);
    }
    if (leniSipQuota) {
      res["LeniSipQuota"] = boost::any(*leniSipQuota);
    }
    if (lniSipQuota) {
      res["LniSipQuota"] = boost::any(*lniSipQuota);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HdeniQuota") != m.end() && !m["HdeniQuota"].empty()) {
      hdeniQuota = make_shared<long>(boost::any_cast<long>(m["HdeniQuota"]));
    }
    if (m.find("LeniQuota") != m.end() && !m["LeniQuota"].empty()) {
      leniQuota = make_shared<long>(boost::any_cast<long>(m["LeniQuota"]));
    }
    if (m.find("LeniSipQuota") != m.end() && !m["LeniSipQuota"].empty()) {
      leniSipQuota = make_shared<long>(boost::any_cast<long>(m["LeniSipQuota"]));
    }
    if (m.find("LniSipQuota") != m.end() && !m["LniSipQuota"].empty()) {
      lniSipQuota = make_shared<long>(boost::any_cast<long>(m["LniSipQuota"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListNodeInfosForPodResponseBodyContent() = default;
};
class ListNodeInfosForPodResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<vector<ListNodeInfosForPodResponseBodyContent>> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListNodeInfosForPodResponseBody() {}

  explicit ListNodeInfosForPodResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      vector<boost::any> temp1;
      for(auto item1:*content){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Content"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(vector<boost::any>) == m["Content"].type()) {
        vector<ListNodeInfosForPodResponseBodyContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Content"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeInfosForPodResponseBodyContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        content = make_shared<vector<ListNodeInfosForPodResponseBodyContent>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNodeInfosForPodResponseBody() = default;
};
class ListNodeInfosForPodResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodeInfosForPodResponseBody> body{};

  ListNodeInfosForPodResponse() {}

  explicit ListNodeInfosForPodResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNodeInfosForPodResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodeInfosForPodResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodeInfosForPodResponse() = default;
};
class ListSubnetsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListSubnetsRequestTag() {}

  explicit ListSubnetsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSubnetsRequestTag() = default;
};
class ListSubnetsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enablePage{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> subnetName{};
  shared_ptr<vector<ListSubnetsRequestTag>> tag{};
  shared_ptr<string> type{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  ListSubnetsRequest() {}

  explicit ListSubnetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
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
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (subnetName) {
      res["SubnetName"] = boost::any(*subnetName);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
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
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("SubnetName") != m.end() && !m["SubnetName"].empty()) {
      subnetName = make_shared<string>(boost::any_cast<string>(m["SubnetName"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListSubnetsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubnetsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListSubnetsRequestTag>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListSubnetsRequest() = default;
};
class ListSubnetsResponseBodyContentDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListSubnetsResponseBodyContentDataTags() {}

  explicit ListSubnetsResponseBodyContentDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSubnetsResponseBodyContentDataTags() = default;
};
class ListSubnetsResponseBodyContentDataVpdBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> createTime{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdName{};

  ListSubnetsResponseBodyContentDataVpdBaseInfo() {}

  explicit ListSubnetsResponseBodyContentDataVpdBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdName) {
      res["VpdName"] = boost::any(*vpdName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdName") != m.end() && !m["VpdName"].empty()) {
      vpdName = make_shared<string>(boost::any_cast<string>(m["VpdName"]));
    }
  }


  virtual ~ListSubnetsResponseBodyContentDataVpdBaseInfo() = default;
};
class ListSubnetsResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> createTime{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> message{};
  shared_ptr<long> ncCount{};
  shared_ptr<long> networkInterfaceCount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> subnetName{};
  shared_ptr<vector<ListSubnetsResponseBodyContentDataTags>> tags{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<ListSubnetsResponseBodyContentDataVpdBaseInfo> vpdBaseInfo{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  ListSubnetsResponseBodyContentData() {}

  explicit ListSubnetsResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (ncCount) {
      res["NcCount"] = boost::any(*ncCount);
    }
    if (networkInterfaceCount) {
      res["NetworkInterfaceCount"] = boost::any(*networkInterfaceCount);
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
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (subnetName) {
      res["SubnetName"] = boost::any(*subnetName);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpdBaseInfo) {
      res["VpdBaseInfo"] = vpdBaseInfo ? boost::any(vpdBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NcCount") != m.end() && !m["NcCount"].empty()) {
      ncCount = make_shared<long>(boost::any_cast<long>(m["NcCount"]));
    }
    if (m.find("NetworkInterfaceCount") != m.end() && !m["NetworkInterfaceCount"].empty()) {
      networkInterfaceCount = make_shared<long>(boost::any_cast<long>(m["NetworkInterfaceCount"]));
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
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("SubnetName") != m.end() && !m["SubnetName"].empty()) {
      subnetName = make_shared<string>(boost::any_cast<string>(m["SubnetName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListSubnetsResponseBodyContentDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubnetsResponseBodyContentDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListSubnetsResponseBodyContentDataTags>>(expect1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpdBaseInfo") != m.end() && !m["VpdBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpdBaseInfo"].type()) {
        ListSubnetsResponseBodyContentDataVpdBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpdBaseInfo"]));
        vpdBaseInfo = make_shared<ListSubnetsResponseBodyContentDataVpdBaseInfo>(model1);
      }
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListSubnetsResponseBodyContentData() = default;
};
class ListSubnetsResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListSubnetsResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListSubnetsResponseBodyContent() {}

  explicit ListSubnetsResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListSubnetsResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubnetsResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListSubnetsResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListSubnetsResponseBodyContent() = default;
};
class ListSubnetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListSubnetsResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListSubnetsResponseBody() {}

  explicit ListSubnetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListSubnetsResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListSubnetsResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListSubnetsResponseBody() = default;
};
class ListSubnetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSubnetsResponseBody> body{};

  ListSubnetsResponse() {}

  explicit ListSubnetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSubnetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubnetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubnetsResponse() = default;
};
class ListVccFlowInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<long> from{};
  shared_ptr<string> metricName{};
  shared_ptr<string> regionId{};
  shared_ptr<long> to{};
  shared_ptr<string> vccId{};

  ListVccFlowInfosRequest() {}

  explicit ListVccFlowInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
  }


  virtual ~ListVccFlowInfosRequest() = default;
};
class ListVccFlowInfosResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> metricName{};
  shared_ptr<string> regionId{};
  shared_ptr<long> timestamp{};
  shared_ptr<double> value{};
  shared_ptr<string> vccId{};

  ListVccFlowInfosResponseBodyContentData() {}

  explicit ListVccFlowInfosResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
  }


  virtual ~ListVccFlowInfosResponseBodyContentData() = default;
};
class ListVccFlowInfosResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListVccFlowInfosResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListVccFlowInfosResponseBodyContent() {}

  explicit ListVccFlowInfosResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVccFlowInfosResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVccFlowInfosResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVccFlowInfosResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVccFlowInfosResponseBodyContent() = default;
};
class ListVccFlowInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListVccFlowInfosResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListVccFlowInfosResponseBody() {}

  explicit ListVccFlowInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListVccFlowInfosResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListVccFlowInfosResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVccFlowInfosResponseBody() = default;
};
class ListVccFlowInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVccFlowInfosResponseBody> body{};

  ListVccFlowInfosResponse() {}

  explicit ListVccFlowInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVccFlowInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVccFlowInfosResponseBody>(model1);
      }
    }
  }


  virtual ~ListVccFlowInfosResponse() = default;
};
class ListVccGrantRulesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enablePage{};
  shared_ptr<string> erId{};
  shared_ptr<bool> forSelect{};
  shared_ptr<string> grantRuleId{};
  shared_ptr<string> grantTenantId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  ListVccGrantRulesRequest() {}

  explicit ListVccGrantRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (forSelect) {
      res["ForSelect"] = boost::any(*forSelect);
    }
    if (grantRuleId) {
      res["GrantRuleId"] = boost::any(*grantRuleId);
    }
    if (grantTenantId) {
      res["GrantTenantId"] = boost::any(*grantTenantId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ForSelect") != m.end() && !m["ForSelect"].empty()) {
      forSelect = make_shared<bool>(boost::any_cast<bool>(m["ForSelect"]));
    }
    if (m.find("GrantRuleId") != m.end() && !m["GrantRuleId"].empty()) {
      grantRuleId = make_shared<string>(boost::any_cast<string>(m["GrantRuleId"]));
    }
    if (m.find("GrantTenantId") != m.end() && !m["GrantTenantId"].empty()) {
      grantTenantId = make_shared<string>(boost::any_cast<string>(m["GrantTenantId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
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
  }


  virtual ~ListVccGrantRulesRequest() = default;
};
class ListVccGrantRulesResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> erId{};
  shared_ptr<string> grantRuleId{};
  shared_ptr<string> grantTenantId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tenantId{};
  shared_ptr<bool> used{};

  ListVccGrantRulesResponseBodyContentData() {}

  explicit ListVccGrantRulesResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (grantRuleId) {
      res["GrantRuleId"] = boost::any(*grantRuleId);
    }
    if (grantTenantId) {
      res["GrantTenantId"] = boost::any(*grantTenantId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (used) {
      res["Used"] = boost::any(*used);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GrantRuleId") != m.end() && !m["GrantRuleId"].empty()) {
      grantRuleId = make_shared<string>(boost::any_cast<string>(m["GrantRuleId"]));
    }
    if (m.find("GrantTenantId") != m.end() && !m["GrantTenantId"].empty()) {
      grantTenantId = make_shared<string>(boost::any_cast<string>(m["GrantTenantId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Used") != m.end() && !m["Used"].empty()) {
      used = make_shared<bool>(boost::any_cast<bool>(m["Used"]));
    }
  }


  virtual ~ListVccGrantRulesResponseBodyContentData() = default;
};
class ListVccGrantRulesResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListVccGrantRulesResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListVccGrantRulesResponseBodyContent() {}

  explicit ListVccGrantRulesResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVccGrantRulesResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVccGrantRulesResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVccGrantRulesResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVccGrantRulesResponseBodyContent() = default;
};
class ListVccGrantRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListVccGrantRulesResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListVccGrantRulesResponseBody() {}

  explicit ListVccGrantRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListVccGrantRulesResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListVccGrantRulesResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVccGrantRulesResponseBody() = default;
};
class ListVccGrantRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVccGrantRulesResponseBody> body{};

  ListVccGrantRulesResponse() {}

  explicit ListVccGrantRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVccGrantRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVccGrantRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVccGrantRulesResponse() = default;
};
class ListVccRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<bool> enablePage{};
  shared_ptr<bool> ignoreDetailedRouteEntry{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> status{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vpdRouteEntryId{};

  ListVccRouteEntriesRequest() {}

  explicit ListVccRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (ignoreDetailedRouteEntry) {
      res["IgnoreDetailedRouteEntry"] = boost::any(*ignoreDetailedRouteEntry);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
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
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vpdRouteEntryId) {
      res["VpdRouteEntryId"] = boost::any(*vpdRouteEntryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("IgnoreDetailedRouteEntry") != m.end() && !m["IgnoreDetailedRouteEntry"].empty()) {
      ignoreDetailedRouteEntry = make_shared<bool>(boost::any_cast<bool>(m["IgnoreDetailedRouteEntry"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
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
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["RouteType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VpdRouteEntryId") != m.end() && !m["VpdRouteEntryId"].empty()) {
      vpdRouteEntryId = make_shared<string>(boost::any_cast<string>(m["VpdRouteEntryId"]));
    }
  }


  virtual ~ListVccRouteEntriesRequest() = default;
};
class ListVccRouteEntriesResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> message{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceTenantId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vccRouteEntryId{};

  ListVccRouteEntriesResponseBodyContentData() {}

  explicit ListVccRouteEntriesResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTenantId) {
      res["ResourceTenantId"] = boost::any(*resourceTenantId);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vccRouteEntryId) {
      res["VccRouteEntryId"] = boost::any(*vccRouteEntryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTenantId") != m.end() && !m["ResourceTenantId"].empty()) {
      resourceTenantId = make_shared<string>(boost::any_cast<string>(m["ResourceTenantId"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["RouteType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VccRouteEntryId") != m.end() && !m["VccRouteEntryId"].empty()) {
      vccRouteEntryId = make_shared<string>(boost::any_cast<string>(m["VccRouteEntryId"]));
    }
  }


  virtual ~ListVccRouteEntriesResponseBodyContentData() = default;
};
class ListVccRouteEntriesResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListVccRouteEntriesResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListVccRouteEntriesResponseBodyContent() {}

  explicit ListVccRouteEntriesResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVccRouteEntriesResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVccRouteEntriesResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVccRouteEntriesResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVccRouteEntriesResponseBodyContent() = default;
};
class ListVccRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListVccRouteEntriesResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListVccRouteEntriesResponseBody() {}

  explicit ListVccRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListVccRouteEntriesResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListVccRouteEntriesResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVccRouteEntriesResponseBody() = default;
};
class ListVccRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVccRouteEntriesResponseBody> body{};

  ListVccRouteEntriesResponse() {}

  explicit ListVccRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVccRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVccRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVccRouteEntriesResponse() = default;
};
class ListVccsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListVccsRequestTag() {}

  explicit ListVccsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVccsRequestTag() = default;
};
class ListVccsRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> cenId{};
  shared_ptr<bool> enablePage{};
  shared_ptr<string> exStatus{};
  shared_ptr<string> filterErId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListVccsRequestTag>> tag{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpdId{};

  ListVccsRequest() {}

  explicit ListVccsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (exStatus) {
      res["ExStatus"] = boost::any(*exStatus);
    }
    if (filterErId) {
      res["FilterErId"] = boost::any(*filterErId);
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
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("ExStatus") != m.end() && !m["ExStatus"].empty()) {
      exStatus = make_shared<string>(boost::any_cast<string>(m["ExStatus"]));
    }
    if (m.find("FilterErId") != m.end() && !m["FilterErId"].empty()) {
      filterErId = make_shared<string>(boost::any_cast<string>(m["FilterErId"]));
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
        vector<ListVccsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVccsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListVccsRequestTag>>(expect1);
      }
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~ListVccsRequest() = default;
};
class ListVccsResponseBodyContentDataErInfos : public Darabonba::Model {
public:
  shared_ptr<long> connections{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> erId{};
  shared_ptr<string> erName{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<string> message{};
  shared_ptr<string> regionId{};
  shared_ptr<long> routeMaps{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};

  ListVccsResponseBodyContentDataErInfos() {}

  explicit ListVccsResponseBodyContentDataErInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connections) {
      res["Connections"] = boost::any(*connections);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erName) {
      res["ErName"] = boost::any(*erName);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (routeMaps) {
      res["RouteMaps"] = boost::any(*routeMaps);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      connections = make_shared<long>(boost::any_cast<long>(m["Connections"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErName") != m.end() && !m["ErName"].empty()) {
      erName = make_shared<string>(boost::any_cast<string>(m["ErName"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RouteMaps") != m.end() && !m["RouteMaps"].empty()) {
      routeMaps = make_shared<long>(boost::any_cast<long>(m["RouteMaps"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ListVccsResponseBodyContentDataErInfos() = default;
};
class ListVccsResponseBodyContentDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListVccsResponseBodyContentDataTags() {}

  explicit ListVccsResponseBodyContentDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVccsResponseBodyContentDataTags() = default;
};
class ListVccsResponseBodyContentDataVpdBaseInfo : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> createTime{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdName{};

  ListVccsResponseBodyContentDataVpdBaseInfo() {}

  explicit ListVccsResponseBodyContentDataVpdBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdName) {
      res["VpdName"] = boost::any(*vpdName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdName") != m.end() && !m["VpdName"].empty()) {
      vpdName = make_shared<string>(boost::any_cast<string>(m["VpdName"]));
    }
  }


  virtual ~ListVccsResponseBodyContentDataVpdBaseInfo() = default;
};
class ListVccsResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> accessPointId{};
  shared_ptr<string> bandwidthStr{};
  shared_ptr<string> bgpAsn{};
  shared_ptr<string> bgpCidr{};
  shared_ptr<string> cenId{};
  shared_ptr<string> cenOwnerId{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> connectionType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currentNode{};
  shared_ptr<vector<ListVccsResponseBodyContentDataErInfos>> erInfos{};
  shared_ptr<string> expirationDate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> lineOperator{};
  shared_ptr<string> message{};
  shared_ptr<string> portType{};
  shared_ptr<double> rate{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListVccsResponseBodyContentDataTags>> tags{};
  shared_ptr<string> taskId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vccName{};
  shared_ptr<string> vpcId{};
  shared_ptr<ListVccsResponseBodyContentDataVpdBaseInfo> vpdBaseInfo{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  ListVccsResponseBodyContentData() {}

  explicit ListVccsResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPointId) {
      res["AccessPointId"] = boost::any(*accessPointId);
    }
    if (bandwidthStr) {
      res["BandwidthStr"] = boost::any(*bandwidthStr);
    }
    if (bgpAsn) {
      res["BgpAsn"] = boost::any(*bgpAsn);
    }
    if (bgpCidr) {
      res["BgpCidr"] = boost::any(*bgpCidr);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cenOwnerId) {
      res["CenOwnerId"] = boost::any(*cenOwnerId);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (connectionType) {
      res["ConnectionType"] = boost::any(*connectionType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (currentNode) {
      res["CurrentNode"] = boost::any(*currentNode);
    }
    if (erInfos) {
      vector<boost::any> temp1;
      for(auto item1:*erInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErInfos"] = boost::any(temp1);
    }
    if (expirationDate) {
      res["ExpirationDate"] = boost::any(*expirationDate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (lineOperator) {
      res["LineOperator"] = boost::any(*lineOperator);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (portType) {
      res["PortType"] = boost::any(*portType);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vccName) {
      res["VccName"] = boost::any(*vccName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpdBaseInfo) {
      res["VpdBaseInfo"] = vpdBaseInfo ? boost::any(vpdBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPointId") != m.end() && !m["AccessPointId"].empty()) {
      accessPointId = make_shared<string>(boost::any_cast<string>(m["AccessPointId"]));
    }
    if (m.find("BandwidthStr") != m.end() && !m["BandwidthStr"].empty()) {
      bandwidthStr = make_shared<string>(boost::any_cast<string>(m["BandwidthStr"]));
    }
    if (m.find("BgpAsn") != m.end() && !m["BgpAsn"].empty()) {
      bgpAsn = make_shared<string>(boost::any_cast<string>(m["BgpAsn"]));
    }
    if (m.find("BgpCidr") != m.end() && !m["BgpCidr"].empty()) {
      bgpCidr = make_shared<string>(boost::any_cast<string>(m["BgpCidr"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CenOwnerId") != m.end() && !m["CenOwnerId"].empty()) {
      cenOwnerId = make_shared<string>(boost::any_cast<string>(m["CenOwnerId"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ConnectionType") != m.end() && !m["ConnectionType"].empty()) {
      connectionType = make_shared<string>(boost::any_cast<string>(m["ConnectionType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CurrentNode") != m.end() && !m["CurrentNode"].empty()) {
      currentNode = make_shared<string>(boost::any_cast<string>(m["CurrentNode"]));
    }
    if (m.find("ErInfos") != m.end() && !m["ErInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ErInfos"].type()) {
        vector<ListVccsResponseBodyContentDataErInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVccsResponseBodyContentDataErInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        erInfos = make_shared<vector<ListVccsResponseBodyContentDataErInfos>>(expect1);
      }
    }
    if (m.find("ExpirationDate") != m.end() && !m["ExpirationDate"].empty()) {
      expirationDate = make_shared<string>(boost::any_cast<string>(m["ExpirationDate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("LineOperator") != m.end() && !m["LineOperator"].empty()) {
      lineOperator = make_shared<string>(boost::any_cast<string>(m["LineOperator"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PortType") != m.end() && !m["PortType"].empty()) {
      portType = make_shared<string>(boost::any_cast<string>(m["PortType"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListVccsResponseBodyContentDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVccsResponseBodyContentDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListVccsResponseBodyContentDataTags>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VccName") != m.end() && !m["VccName"].empty()) {
      vccName = make_shared<string>(boost::any_cast<string>(m["VccName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpdBaseInfo") != m.end() && !m["VpdBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpdBaseInfo"].type()) {
        ListVccsResponseBodyContentDataVpdBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpdBaseInfo"]));
        vpdBaseInfo = make_shared<ListVccsResponseBodyContentDataVpdBaseInfo>(model1);
      }
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListVccsResponseBodyContentData() = default;
};
class ListVccsResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListVccsResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListVccsResponseBodyContent() {}

  explicit ListVccsResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVccsResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVccsResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVccsResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVccsResponseBodyContent() = default;
};
class ListVccsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListVccsResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListVccsResponseBody() {}

  explicit ListVccsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListVccsResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListVccsResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVccsResponseBody() = default;
};
class ListVccsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVccsResponseBody> body{};

  ListVccsResponse() {}

  explicit ListVccsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVccsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVccsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVccsResponse() = default;
};
class ListVpdGrantRulesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enablePage{};
  shared_ptr<string> erId{};
  shared_ptr<bool> forSelect{};
  shared_ptr<string> grantRuleId{};
  shared_ptr<string> grantTenantId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  ListVpdGrantRulesRequest() {}

  explicit ListVpdGrantRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (forSelect) {
      res["ForSelect"] = boost::any(*forSelect);
    }
    if (grantRuleId) {
      res["GrantRuleId"] = boost::any(*grantRuleId);
    }
    if (grantTenantId) {
      res["GrantTenantId"] = boost::any(*grantTenantId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ForSelect") != m.end() && !m["ForSelect"].empty()) {
      forSelect = make_shared<bool>(boost::any_cast<bool>(m["ForSelect"]));
    }
    if (m.find("GrantRuleId") != m.end() && !m["GrantRuleId"].empty()) {
      grantRuleId = make_shared<string>(boost::any_cast<string>(m["GrantRuleId"]));
    }
    if (m.find("GrantTenantId") != m.end() && !m["GrantTenantId"].empty()) {
      grantTenantId = make_shared<string>(boost::any_cast<string>(m["GrantTenantId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
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
  }


  virtual ~ListVpdGrantRulesRequest() = default;
};
class ListVpdGrantRulesResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> erId{};
  shared_ptr<string> grantRuleId{};
  shared_ptr<string> grantTenantId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tenantId{};
  shared_ptr<bool> used{};

  ListVpdGrantRulesResponseBodyContentData() {}

  explicit ListVpdGrantRulesResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (grantRuleId) {
      res["GrantRuleId"] = boost::any(*grantRuleId);
    }
    if (grantTenantId) {
      res["GrantTenantId"] = boost::any(*grantTenantId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (used) {
      res["Used"] = boost::any(*used);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("GrantRuleId") != m.end() && !m["GrantRuleId"].empty()) {
      grantRuleId = make_shared<string>(boost::any_cast<string>(m["GrantRuleId"]));
    }
    if (m.find("GrantTenantId") != m.end() && !m["GrantTenantId"].empty()) {
      grantTenantId = make_shared<string>(boost::any_cast<string>(m["GrantTenantId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Used") != m.end() && !m["Used"].empty()) {
      used = make_shared<bool>(boost::any_cast<bool>(m["Used"]));
    }
  }


  virtual ~ListVpdGrantRulesResponseBodyContentData() = default;
};
class ListVpdGrantRulesResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListVpdGrantRulesResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListVpdGrantRulesResponseBodyContent() {}

  explicit ListVpdGrantRulesResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVpdGrantRulesResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpdGrantRulesResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVpdGrantRulesResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVpdGrantRulesResponseBodyContent() = default;
};
class ListVpdGrantRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListVpdGrantRulesResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListVpdGrantRulesResponseBody() {}

  explicit ListVpdGrantRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListVpdGrantRulesResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListVpdGrantRulesResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVpdGrantRulesResponseBody() = default;
};
class ListVpdGrantRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVpdGrantRulesResponseBody> body{};

  ListVpdGrantRulesResponse() {}

  explicit ListVpdGrantRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVpdGrantRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpdGrantRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpdGrantRulesResponse() = default;
};
class ListVpdRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<bool> enablePage{};
  shared_ptr<bool> ignoreDetailedRouteEntry{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> status{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdRouteEntryId{};

  ListVpdRouteEntriesRequest() {}

  explicit ListVpdRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (ignoreDetailedRouteEntry) {
      res["IgnoreDetailedRouteEntry"] = boost::any(*ignoreDetailedRouteEntry);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
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
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdRouteEntryId) {
      res["VpdRouteEntryId"] = boost::any(*vpdRouteEntryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("IgnoreDetailedRouteEntry") != m.end() && !m["IgnoreDetailedRouteEntry"].empty()) {
      ignoreDetailedRouteEntry = make_shared<bool>(boost::any_cast<bool>(m["IgnoreDetailedRouteEntry"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
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
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["RouteType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdRouteEntryId") != m.end() && !m["VpdRouteEntryId"].empty()) {
      vpdRouteEntryId = make_shared<string>(boost::any_cast<string>(m["VpdRouteEntryId"]));
    }
  }


  virtual ~ListVpdRouteEntriesRequest() = default;
};
class ListVpdRouteEntriesResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceTenantId{};
  shared_ptr<string> routeType{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdRouteEntryId{};

  ListVpdRouteEntriesResponseBodyContentData() {}

  explicit ListVpdRouteEntriesResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTenantId) {
      res["ResourceTenantId"] = boost::any(*resourceTenantId);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdRouteEntryId) {
      res["VpdRouteEntryId"] = boost::any(*vpdRouteEntryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTenantId") != m.end() && !m["ResourceTenantId"].empty()) {
      resourceTenantId = make_shared<string>(boost::any_cast<string>(m["ResourceTenantId"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<string>(boost::any_cast<string>(m["RouteType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdRouteEntryId") != m.end() && !m["VpdRouteEntryId"].empty()) {
      vpdRouteEntryId = make_shared<string>(boost::any_cast<string>(m["VpdRouteEntryId"]));
    }
  }


  virtual ~ListVpdRouteEntriesResponseBodyContentData() = default;
};
class ListVpdRouteEntriesResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListVpdRouteEntriesResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListVpdRouteEntriesResponseBodyContent() {}

  explicit ListVpdRouteEntriesResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVpdRouteEntriesResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpdRouteEntriesResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVpdRouteEntriesResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVpdRouteEntriesResponseBodyContent() = default;
};
class ListVpdRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListVpdRouteEntriesResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListVpdRouteEntriesResponseBody() {}

  explicit ListVpdRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListVpdRouteEntriesResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListVpdRouteEntriesResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVpdRouteEntriesResponseBody() = default;
};
class ListVpdRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVpdRouteEntriesResponseBody> body{};

  ListVpdRouteEntriesResponse() {}

  explicit ListVpdRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVpdRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpdRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpdRouteEntriesResponse() = default;
};
class ListVpdsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListVpdsRequestTag() {}

  explicit ListVpdsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVpdsRequestTag() = default;
};
class ListVpdsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enablePage{};
  shared_ptr<string> filterErId{};
  shared_ptr<bool> forSelect{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListVpdsRequestTag>> tag{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdName{};
  shared_ptr<bool> withDependence{};
  shared_ptr<bool> withoutVcc{};

  ListVpdsRequest() {}

  explicit ListVpdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablePage) {
      res["EnablePage"] = boost::any(*enablePage);
    }
    if (filterErId) {
      res["FilterErId"] = boost::any(*filterErId);
    }
    if (forSelect) {
      res["ForSelect"] = boost::any(*forSelect);
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
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdName) {
      res["VpdName"] = boost::any(*vpdName);
    }
    if (withDependence) {
      res["WithDependence"] = boost::any(*withDependence);
    }
    if (withoutVcc) {
      res["WithoutVcc"] = boost::any(*withoutVcc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablePage") != m.end() && !m["EnablePage"].empty()) {
      enablePage = make_shared<bool>(boost::any_cast<bool>(m["EnablePage"]));
    }
    if (m.find("FilterErId") != m.end() && !m["FilterErId"].empty()) {
      filterErId = make_shared<string>(boost::any_cast<string>(m["FilterErId"]));
    }
    if (m.find("ForSelect") != m.end() && !m["ForSelect"].empty()) {
      forSelect = make_shared<bool>(boost::any_cast<bool>(m["ForSelect"]));
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
        vector<ListVpdsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpdsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListVpdsRequestTag>>(expect1);
      }
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdName") != m.end() && !m["VpdName"].empty()) {
      vpdName = make_shared<string>(boost::any_cast<string>(m["VpdName"]));
    }
    if (m.find("WithDependence") != m.end() && !m["WithDependence"].empty()) {
      withDependence = make_shared<bool>(boost::any_cast<bool>(m["WithDependence"]));
    }
    if (m.find("WithoutVcc") != m.end() && !m["WithoutVcc"].empty()) {
      withoutVcc = make_shared<bool>(boost::any_cast<bool>(m["WithoutVcc"]));
    }
  }


  virtual ~ListVpdsRequest() = default;
};
class ListVpdsResponseBodyContentDataErInfos : public Darabonba::Model {
public:
  shared_ptr<long> connections{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> erId{};
  shared_ptr<string> erName{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> masterZoneId{};
  shared_ptr<string> message{};
  shared_ptr<string> regionId{};
  shared_ptr<long> routeMaps{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantId{};

  ListVpdsResponseBodyContentDataErInfos() {}

  explicit ListVpdsResponseBodyContentDataErInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connections) {
      res["Connections"] = boost::any(*connections);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erName) {
      res["ErName"] = boost::any(*erName);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (masterZoneId) {
      res["MasterZoneId"] = boost::any(*masterZoneId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (routeMaps) {
      res["RouteMaps"] = boost::any(*routeMaps);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      connections = make_shared<long>(boost::any_cast<long>(m["Connections"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErName") != m.end() && !m["ErName"].empty()) {
      erName = make_shared<string>(boost::any_cast<string>(m["ErName"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MasterZoneId") != m.end() && !m["MasterZoneId"].empty()) {
      masterZoneId = make_shared<string>(boost::any_cast<string>(m["MasterZoneId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RouteMaps") != m.end() && !m["RouteMaps"].empty()) {
      routeMaps = make_shared<long>(boost::any_cast<long>(m["RouteMaps"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ListVpdsResponseBodyContentDataErInfos() = default;
};
class ListVpdsResponseBodyContentDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListVpdsResponseBodyContentDataTags() {}

  explicit ListVpdsResponseBodyContentDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVpdsResponseBodyContentDataTags() = default;
};
class ListVpdsResponseBodyContentData : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> createTime{};
  shared_ptr<map<string, boost::any>> dependence{};
  shared_ptr<vector<ListVpdsResponseBodyContentDataErInfos>> erInfos{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> message{};
  shared_ptr<long> ncCount{};
  shared_ptr<long> networkInterfaceCount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> secondaryCidrBlocks{};
  shared_ptr<string> serviceCidr{};
  shared_ptr<string> status{};
  shared_ptr<long> subnetCount{};
  shared_ptr<vector<ListVpdsResponseBodyContentDataTags>> tags{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdName{};

  ListVpdsResponseBodyContentData() {}

  explicit ListVpdsResponseBodyContentData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dependence) {
      res["Dependence"] = boost::any(*dependence);
    }
    if (erInfos) {
      vector<boost::any> temp1;
      for(auto item1:*erInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErInfos"] = boost::any(temp1);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (ncCount) {
      res["NcCount"] = boost::any(*ncCount);
    }
    if (networkInterfaceCount) {
      res["NetworkInterfaceCount"] = boost::any(*networkInterfaceCount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (secondaryCidrBlocks) {
      res["SecondaryCidrBlocks"] = boost::any(*secondaryCidrBlocks);
    }
    if (serviceCidr) {
      res["ServiceCidr"] = boost::any(*serviceCidr);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subnetCount) {
      res["SubnetCount"] = boost::any(*subnetCount);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdName) {
      res["VpdName"] = boost::any(*vpdName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Dependence") != m.end() && !m["Dependence"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Dependence"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dependence = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErInfos") != m.end() && !m["ErInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ErInfos"].type()) {
        vector<ListVpdsResponseBodyContentDataErInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpdsResponseBodyContentDataErInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        erInfos = make_shared<vector<ListVpdsResponseBodyContentDataErInfos>>(expect1);
      }
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NcCount") != m.end() && !m["NcCount"].empty()) {
      ncCount = make_shared<long>(boost::any_cast<long>(m["NcCount"]));
    }
    if (m.find("NetworkInterfaceCount") != m.end() && !m["NetworkInterfaceCount"].empty()) {
      networkInterfaceCount = make_shared<long>(boost::any_cast<long>(m["NetworkInterfaceCount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecondaryCidrBlocks") != m.end() && !m["SecondaryCidrBlocks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecondaryCidrBlocks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecondaryCidrBlocks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      secondaryCidrBlocks = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceCidr") != m.end() && !m["ServiceCidr"].empty()) {
      serviceCidr = make_shared<string>(boost::any_cast<string>(m["ServiceCidr"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubnetCount") != m.end() && !m["SubnetCount"].empty()) {
      subnetCount = make_shared<long>(boost::any_cast<long>(m["SubnetCount"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListVpdsResponseBodyContentDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpdsResponseBodyContentDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListVpdsResponseBodyContentDataTags>>(expect1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdName") != m.end() && !m["VpdName"].empty()) {
      vpdName = make_shared<string>(boost::any_cast<string>(m["VpdName"]));
    }
  }


  virtual ~ListVpdsResponseBodyContentData() = default;
};
class ListVpdsResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<vector<ListVpdsResponseBodyContentData>> data{};
  shared_ptr<long> total{};

  ListVpdsResponseBodyContent() {}

  explicit ListVpdsResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVpdsResponseBodyContentData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpdsResponseBodyContentData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVpdsResponseBodyContentData>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVpdsResponseBodyContent() = default;
};
class ListVpdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<ListVpdsResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListVpdsResponseBody() {}

  explicit ListVpdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        ListVpdsResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<ListVpdsResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVpdsResponseBody() = default;
};
class ListVpdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVpdsResponseBody> body{};

  ListVpdsResponse() {}

  explicit ListVpdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVpdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpdsResponse() = default;
};
class QueryInstanceNcdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId1{};
  shared_ptr<string> instanceId2{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> regionId{};

  QueryInstanceNcdRequest() {}

  explicit QueryInstanceNcdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId1) {
      res["InstanceId1"] = boost::any(*instanceId1);
    }
    if (instanceId2) {
      res["InstanceId2"] = boost::any(*instanceId2);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId1") != m.end() && !m["InstanceId1"].empty()) {
      instanceId1 = make_shared<string>(boost::any_cast<string>(m["InstanceId1"]));
    }
    if (m.find("InstanceId2") != m.end() && !m["InstanceId2"].empty()) {
      instanceId2 = make_shared<string>(boost::any_cast<string>(m["InstanceId2"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~QueryInstanceNcdRequest() = default;
};
class QueryInstanceNcdResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> instanceId1{};
  shared_ptr<string> instanceId2{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> ncd{};

  QueryInstanceNcdResponseBodyContent() {}

  explicit QueryInstanceNcdResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId1) {
      res["InstanceId1"] = boost::any(*instanceId1);
    }
    if (instanceId2) {
      res["InstanceId2"] = boost::any(*instanceId2);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (ncd) {
      res["Ncd"] = boost::any(*ncd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId1") != m.end() && !m["InstanceId1"].empty()) {
      instanceId1 = make_shared<string>(boost::any_cast<string>(m["InstanceId1"]));
    }
    if (m.find("InstanceId2") != m.end() && !m["InstanceId2"].empty()) {
      instanceId2 = make_shared<string>(boost::any_cast<string>(m["InstanceId2"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Ncd") != m.end() && !m["Ncd"].empty()) {
      ncd = make_shared<long>(boost::any_cast<long>(m["Ncd"]));
    }
  }


  virtual ~QueryInstanceNcdResponseBodyContent() = default;
};
class QueryInstanceNcdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<QueryInstanceNcdResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryInstanceNcdResponseBody() {}

  explicit QueryInstanceNcdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        QueryInstanceNcdResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<QueryInstanceNcdResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryInstanceNcdResponseBody() = default;
};
class QueryInstanceNcdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryInstanceNcdResponseBody> body{};

  QueryInstanceNcdResponse() {}

  explicit QueryInstanceNcdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryInstanceNcdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryInstanceNcdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryInstanceNcdResponse() = default;
};
class RefundVccRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vccId{};

  RefundVccRequest() {}

  explicit RefundVccRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
  }


  virtual ~RefundVccRequest() = default;
};
class RefundVccResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RefundVccResponseBody() {}

  explicit RefundVccResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RefundVccResponseBody() = default;
};
class RefundVccResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefundVccResponseBody> body{};

  RefundVccResponse() {}

  explicit RefundVccResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefundVccResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundVccResponseBody>(model1);
      }
    }
  }


  virtual ~RefundVccResponse() = default;
};
class RetryVccRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vccId{};

  RetryVccRequest() {}

  explicit RetryVccRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
  }


  virtual ~RetryVccRequest() = default;
};
class RetryVccResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RetryVccResponseBody() {}

  explicit RetryVccResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RetryVccResponseBody() = default;
};
class RetryVccResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RetryVccResponseBody> body{};

  RetryVccResponse() {}

  explicit RetryVccResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetryVccResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetryVccResponseBody>(model1);
      }
    }
  }


  virtual ~RetryVccResponse() = default;
};
class UnAssignPrivateIpAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ipName{};
  shared_ptr<string> networkInterfaceId{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> regionId{};
  shared_ptr<string> subnetId{};

  UnAssignPrivateIpAddressRequest() {}

  explicit UnAssignPrivateIpAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
  }


  virtual ~UnAssignPrivateIpAddressRequest() = default;
};
class UnAssignPrivateIpAddressResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> ipName{};
  shared_ptr<string> networkInterfaceId{};

  UnAssignPrivateIpAddressResponseBodyContent() {}

  explicit UnAssignPrivateIpAddressResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (networkInterfaceId) {
      res["NetworkInterfaceId"] = boost::any(*networkInterfaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("NetworkInterfaceId") != m.end() && !m["NetworkInterfaceId"].empty()) {
      networkInterfaceId = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceId"]));
    }
  }


  virtual ~UnAssignPrivateIpAddressResponseBodyContent() = default;
};
class UnAssignPrivateIpAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<UnAssignPrivateIpAddressResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UnAssignPrivateIpAddressResponseBody() {}

  explicit UnAssignPrivateIpAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        UnAssignPrivateIpAddressResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<UnAssignPrivateIpAddressResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnAssignPrivateIpAddressResponseBody() = default;
};
class UnAssignPrivateIpAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnAssignPrivateIpAddressResponseBody> body{};

  UnAssignPrivateIpAddressResponse() {}

  explicit UnAssignPrivateIpAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnAssignPrivateIpAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnAssignPrivateIpAddressResponseBody>(model1);
      }
    }
  }


  virtual ~UnAssignPrivateIpAddressResponse() = default;
};
class UnAssociateVpdCidrBlockRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> secondaryCidrBlock{};
  shared_ptr<string> vpdId{};

  UnAssociateVpdCidrBlockRequest() {}

  explicit UnAssociateVpdCidrBlockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (secondaryCidrBlock) {
      res["SecondaryCidrBlock"] = boost::any(*secondaryCidrBlock);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecondaryCidrBlock") != m.end() && !m["SecondaryCidrBlock"].empty()) {
      secondaryCidrBlock = make_shared<string>(boost::any_cast<string>(m["SecondaryCidrBlock"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~UnAssociateVpdCidrBlockRequest() = default;
};
class UnAssociateVpdCidrBlockResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> vpdId{};

  UnAssociateVpdCidrBlockResponseBodyContent() {}

  explicit UnAssociateVpdCidrBlockResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~UnAssociateVpdCidrBlockResponseBodyContent() = default;
};
class UnAssociateVpdCidrBlockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<UnAssociateVpdCidrBlockResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UnAssociateVpdCidrBlockResponseBody() {}

  explicit UnAssociateVpdCidrBlockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        UnAssociateVpdCidrBlockResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<UnAssociateVpdCidrBlockResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnAssociateVpdCidrBlockResponseBody() = default;
};
class UnAssociateVpdCidrBlockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnAssociateVpdCidrBlockResponseBody> body{};

  UnAssociateVpdCidrBlockResponse() {}

  explicit UnAssociateVpdCidrBlockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnAssociateVpdCidrBlockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnAssociateVpdCidrBlockResponseBody>(model1);
      }
    }
  }


  virtual ~UnAssociateVpdCidrBlockResponse() = default;
};
class UnassignLeniPrivateIpAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> ipName{};
  shared_ptr<string> regionId{};

  UnassignLeniPrivateIpAddressRequest() {}

  explicit UnassignLeniPrivateIpAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
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
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UnassignLeniPrivateIpAddressRequest() = default;
};
class UnassignLeniPrivateIpAddressResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> ipName{};

  UnassignLeniPrivateIpAddressResponseBodyContent() {}

  explicit UnassignLeniPrivateIpAddressResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
  }


  virtual ~UnassignLeniPrivateIpAddressResponseBodyContent() = default;
};
class UnassignLeniPrivateIpAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<UnassignLeniPrivateIpAddressResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UnassignLeniPrivateIpAddressResponseBody() {}

  explicit UnassignLeniPrivateIpAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        UnassignLeniPrivateIpAddressResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<UnassignLeniPrivateIpAddressResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnassignLeniPrivateIpAddressResponseBody() = default;
};
class UnassignLeniPrivateIpAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnassignLeniPrivateIpAddressResponseBody> body{};

  UnassignLeniPrivateIpAddressResponse() {}

  explicit UnassignLeniPrivateIpAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnassignLeniPrivateIpAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnassignLeniPrivateIpAddressResponseBody>(model1);
      }
    }
  }


  virtual ~UnassignLeniPrivateIpAddressResponse() = default;
};
class UpdateElasticNetworkInterfaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};

  UpdateElasticNetworkInterfaceRequest() {}

  explicit UpdateElasticNetworkInterfaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
  }


  virtual ~UpdateElasticNetworkInterfaceRequest() = default;
};
class UpdateElasticNetworkInterfaceResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> nodeId{};

  UpdateElasticNetworkInterfaceResponseBodyContent() {}

  explicit UpdateElasticNetworkInterfaceResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~UpdateElasticNetworkInterfaceResponseBodyContent() = default;
};
class UpdateElasticNetworkInterfaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<UpdateElasticNetworkInterfaceResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateElasticNetworkInterfaceResponseBody() {}

  explicit UpdateElasticNetworkInterfaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        UpdateElasticNetworkInterfaceResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<UpdateElasticNetworkInterfaceResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateElasticNetworkInterfaceResponseBody() = default;
};
class UpdateElasticNetworkInterfaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateElasticNetworkInterfaceResponseBody> body{};

  UpdateElasticNetworkInterfaceResponse() {}

  explicit UpdateElasticNetworkInterfaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateElasticNetworkInterfaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateElasticNetworkInterfaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateElasticNetworkInterfaceResponse() = default;
};
class UpdateErRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> erId{};
  shared_ptr<string> erName{};
  shared_ptr<string> regionId{};

  UpdateErRequest() {}

  explicit UpdateErRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erName) {
      res["ErName"] = boost::any(*erName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErName") != m.end() && !m["ErName"].empty()) {
      erName = make_shared<string>(boost::any_cast<string>(m["ErName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateErRequest() = default;
};
class UpdateErResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<map<string, boost::any>> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateErResponseBody() {}

  explicit UpdateErResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Content"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateErResponseBody() = default;
};
class UpdateErResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateErResponseBody> body{};

  UpdateErResponse() {}

  explicit UpdateErResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateErResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateErResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateErResponse() = default;
};
class UpdateErAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> erAttachmentId{};
  shared_ptr<string> erAttachmentName{};
  shared_ptr<string> erId{};
  shared_ptr<string> regionId{};

  UpdateErAttachmentRequest() {}

  explicit UpdateErAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (erAttachmentId) {
      res["ErAttachmentId"] = boost::any(*erAttachmentId);
    }
    if (erAttachmentName) {
      res["ErAttachmentName"] = boost::any(*erAttachmentName);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErAttachmentId") != m.end() && !m["ErAttachmentId"].empty()) {
      erAttachmentId = make_shared<string>(boost::any_cast<string>(m["ErAttachmentId"]));
    }
    if (m.find("ErAttachmentName") != m.end() && !m["ErAttachmentName"].empty()) {
      erAttachmentName = make_shared<string>(boost::any_cast<string>(m["ErAttachmentName"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateErAttachmentRequest() = default;
};
class UpdateErAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<map<string, boost::any>> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateErAttachmentResponseBody() {}

  explicit UpdateErAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Content"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateErAttachmentResponseBody() = default;
};
class UpdateErAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateErAttachmentResponseBody> body{};

  UpdateErAttachmentResponse() {}

  explicit UpdateErAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateErAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateErAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateErAttachmentResponse() = default;
};
class UpdateErRouteMapRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> erId{};
  shared_ptr<string> erRouteMapId{};
  shared_ptr<string> regionId{};

  UpdateErRouteMapRequest() {}

  explicit UpdateErRouteMapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (erId) {
      res["ErId"] = boost::any(*erId);
    }
    if (erRouteMapId) {
      res["ErRouteMapId"] = boost::any(*erRouteMapId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErId") != m.end() && !m["ErId"].empty()) {
      erId = make_shared<string>(boost::any_cast<string>(m["ErId"]));
    }
    if (m.find("ErRouteMapId") != m.end() && !m["ErRouteMapId"].empty()) {
      erRouteMapId = make_shared<string>(boost::any_cast<string>(m["ErRouteMapId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateErRouteMapRequest() = default;
};
class UpdateErRouteMapResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<map<string, boost::any>> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateErRouteMapResponseBody() {}

  explicit UpdateErRouteMapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Content"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateErRouteMapResponseBody() = default;
};
class UpdateErRouteMapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateErRouteMapResponseBody> body{};

  UpdateErRouteMapResponse() {}

  explicit UpdateErRouteMapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateErRouteMapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateErRouteMapResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateErRouteMapResponse() = default;
};
class UpdateLeniPrivateIpAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> ipName{};
  shared_ptr<string> regionId{};

  UpdateLeniPrivateIpAddressRequest() {}

  explicit UpdateLeniPrivateIpAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateLeniPrivateIpAddressRequest() = default;
};
class UpdateLeniPrivateIpAddressResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> elasticNetworkInterfaceId{};
  shared_ptr<string> ipName{};

  UpdateLeniPrivateIpAddressResponseBodyContent() {}

  explicit UpdateLeniPrivateIpAddressResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNetworkInterfaceId) {
      res["ElasticNetworkInterfaceId"] = boost::any(*elasticNetworkInterfaceId);
    }
    if (ipName) {
      res["IpName"] = boost::any(*ipName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNetworkInterfaceId") != m.end() && !m["ElasticNetworkInterfaceId"].empty()) {
      elasticNetworkInterfaceId = make_shared<string>(boost::any_cast<string>(m["ElasticNetworkInterfaceId"]));
    }
    if (m.find("IpName") != m.end() && !m["IpName"].empty()) {
      ipName = make_shared<string>(boost::any_cast<string>(m["IpName"]));
    }
  }


  virtual ~UpdateLeniPrivateIpAddressResponseBodyContent() = default;
};
class UpdateLeniPrivateIpAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<UpdateLeniPrivateIpAddressResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateLeniPrivateIpAddressResponseBody() {}

  explicit UpdateLeniPrivateIpAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        UpdateLeniPrivateIpAddressResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<UpdateLeniPrivateIpAddressResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateLeniPrivateIpAddressResponseBody() = default;
};
class UpdateLeniPrivateIpAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLeniPrivateIpAddressResponseBody> body{};

  UpdateLeniPrivateIpAddressResponse() {}

  explicit UpdateLeniPrivateIpAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLeniPrivateIpAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLeniPrivateIpAddressResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLeniPrivateIpAddressResponse() = default;
};
class UpdateSubnetRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> subnetName{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> zoneId{};

  UpdateSubnetRequest() {}

  explicit UpdateSubnetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (subnetName) {
      res["SubnetName"] = boost::any(*subnetName);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("SubnetName") != m.end() && !m["SubnetName"].empty()) {
      subnetName = make_shared<string>(boost::any_cast<string>(m["SubnetName"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~UpdateSubnetRequest() = default;
};
class UpdateSubnetResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> subnetId{};

  UpdateSubnetResponseBodyContent() {}

  explicit UpdateSubnetResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
  }


  virtual ~UpdateSubnetResponseBodyContent() = default;
};
class UpdateSubnetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<UpdateSubnetResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateSubnetResponseBody() {}

  explicit UpdateSubnetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        UpdateSubnetResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<UpdateSubnetResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateSubnetResponseBody() = default;
};
class UpdateSubnetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSubnetResponseBody> body{};

  UpdateSubnetResponse() {}

  explicit UpdateSubnetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSubnetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSubnetResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSubnetResponse() = default;
};
class UpdateVccRequest : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> orderId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vccId{};
  shared_ptr<string> vccName{};

  UpdateVccRequest() {}

  explicit UpdateVccRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    if (vccName) {
      res["VccName"] = boost::any(*vccName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
    if (m.find("VccName") != m.end() && !m["VccName"].empty()) {
      vccName = make_shared<string>(boost::any_cast<string>(m["VccName"]));
    }
  }


  virtual ~UpdateVccRequest() = default;
};
class UpdateVccResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> vccId{};

  UpdateVccResponseBodyContent() {}

  explicit UpdateVccResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vccId) {
      res["VccId"] = boost::any(*vccId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VccId") != m.end() && !m["VccId"].empty()) {
      vccId = make_shared<string>(boost::any_cast<string>(m["VccId"]));
    }
  }


  virtual ~UpdateVccResponseBodyContent() = default;
};
class UpdateVccResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<UpdateVccResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateVccResponseBody() {}

  explicit UpdateVccResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        UpdateVccResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<UpdateVccResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateVccResponseBody() = default;
};
class UpdateVccResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVccResponseBody> body{};

  UpdateVccResponse() {}

  explicit UpdateVccResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateVccResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVccResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVccResponse() = default;
};
class UpdateVpdRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vpdId{};
  shared_ptr<string> vpdName{};

  UpdateVpdRequest() {}

  explicit UpdateVpdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdName) {
      res["VpdName"] = boost::any(*vpdName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdName") != m.end() && !m["VpdName"].empty()) {
      vpdName = make_shared<string>(boost::any_cast<string>(m["VpdName"]));
    }
  }


  virtual ~UpdateVpdRequest() = default;
};
class UpdateVpdResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<string> vpdId{};

  UpdateVpdResponseBodyContent() {}

  explicit UpdateVpdResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~UpdateVpdResponseBodyContent() = default;
};
class UpdateVpdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<UpdateVpdResponseBodyContent> content{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateVpdResponseBody() {}

  explicit UpdateVpdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        UpdateVpdResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<UpdateVpdResponseBodyContent>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateVpdResponseBody() = default;
};
class UpdateVpdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVpdResponseBody> body{};

  UpdateVpdResponse() {}

  explicit UpdateVpdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateVpdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVpdResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVpdResponse() = default;
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
  AssignLeniPrivateIpAddressResponse assignLeniPrivateIpAddressWithOptions(shared_ptr<AssignLeniPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssignLeniPrivateIpAddressResponse assignLeniPrivateIpAddress(shared_ptr<AssignLeniPrivateIpAddressRequest> request);
  AssignPrivateIpAddressResponse assignPrivateIpAddressWithOptions(shared_ptr<AssignPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssignPrivateIpAddressResponse assignPrivateIpAddress(shared_ptr<AssignPrivateIpAddressRequest> request);
  AssociateVpdCidrBlockResponse associateVpdCidrBlockWithOptions(shared_ptr<AssociateVpdCidrBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateVpdCidrBlockResponse associateVpdCidrBlock(shared_ptr<AssociateVpdCidrBlockRequest> request);
  AttachElasticNetworkInterfaceResponse attachElasticNetworkInterfaceWithOptions(shared_ptr<AttachElasticNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachElasticNetworkInterfaceResponse attachElasticNetworkInterface(shared_ptr<AttachElasticNetworkInterfaceRequest> request);
  CreateElasticNetworkInterfaceResponse createElasticNetworkInterfaceWithOptions(shared_ptr<CreateElasticNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateElasticNetworkInterfaceResponse createElasticNetworkInterface(shared_ptr<CreateElasticNetworkInterfaceRequest> request);
  CreateErResponse createErWithOptions(shared_ptr<CreateErRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateErResponse createEr(shared_ptr<CreateErRequest> request);
  CreateErAttachmentResponse createErAttachmentWithOptions(shared_ptr<CreateErAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateErAttachmentResponse createErAttachment(shared_ptr<CreateErAttachmentRequest> request);
  CreateErRouteMapResponse createErRouteMapWithOptions(shared_ptr<CreateErRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateErRouteMapResponse createErRouteMap(shared_ptr<CreateErRouteMapRequest> request);
  CreateSubnetResponse createSubnetWithOptions(shared_ptr<CreateSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSubnetResponse createSubnet(shared_ptr<CreateSubnetRequest> request);
  CreateVccResponse createVccWithOptions(shared_ptr<CreateVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVccResponse createVcc(shared_ptr<CreateVccRequest> request);
  CreateVccGrantRuleResponse createVccGrantRuleWithOptions(shared_ptr<CreateVccGrantRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVccGrantRuleResponse createVccGrantRule(shared_ptr<CreateVccGrantRuleRequest> request);
  CreateVccRouteEntryResponse createVccRouteEntryWithOptions(shared_ptr<CreateVccRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVccRouteEntryResponse createVccRouteEntry(shared_ptr<CreateVccRouteEntryRequest> request);
  CreateVpdResponse createVpdWithOptions(shared_ptr<CreateVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVpdResponse createVpd(shared_ptr<CreateVpdRequest> request);
  CreateVpdGrantRuleResponse createVpdGrantRuleWithOptions(shared_ptr<CreateVpdGrantRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVpdGrantRuleResponse createVpdGrantRule(shared_ptr<CreateVpdGrantRuleRequest> request);
  DeleteElasticNetworkInterfaceResponse deleteElasticNetworkInterfaceWithOptions(shared_ptr<DeleteElasticNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteElasticNetworkInterfaceResponse deleteElasticNetworkInterface(shared_ptr<DeleteElasticNetworkInterfaceRequest> request);
  DeleteErResponse deleteErWithOptions(shared_ptr<DeleteErRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteErResponse deleteEr(shared_ptr<DeleteErRequest> request);
  DeleteErAttachmentResponse deleteErAttachmentWithOptions(shared_ptr<DeleteErAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteErAttachmentResponse deleteErAttachment(shared_ptr<DeleteErAttachmentRequest> request);
  DeleteErRouteMapResponse deleteErRouteMapWithOptions(shared_ptr<DeleteErRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteErRouteMapResponse deleteErRouteMap(shared_ptr<DeleteErRouteMapRequest> request);
  DeleteSubnetResponse deleteSubnetWithOptions(shared_ptr<DeleteSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSubnetResponse deleteSubnet(shared_ptr<DeleteSubnetRequest> request);
  DeleteVccGrantRuleResponse deleteVccGrantRuleWithOptions(shared_ptr<DeleteVccGrantRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVccGrantRuleResponse deleteVccGrantRule(shared_ptr<DeleteVccGrantRuleRequest> request);
  DeleteVccRouteEntryResponse deleteVccRouteEntryWithOptions(shared_ptr<DeleteVccRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVccRouteEntryResponse deleteVccRouteEntry(shared_ptr<DeleteVccRouteEntryRequest> request);
  DeleteVpdResponse deleteVpdWithOptions(shared_ptr<DeleteVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVpdResponse deleteVpd(shared_ptr<DeleteVpdRequest> request);
  DeleteVpdGrantRuleResponse deleteVpdGrantRuleWithOptions(shared_ptr<DeleteVpdGrantRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVpdGrantRuleResponse deleteVpdGrantRule(shared_ptr<DeleteVpdGrantRuleRequest> request);
  DescribeSlrResponse describeSlrWithOptions(shared_ptr<DescribeSlrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlrResponse describeSlr(shared_ptr<DescribeSlrRequest> request);
  DetachElasticNetworkInterfaceResponse detachElasticNetworkInterfaceWithOptions(shared_ptr<DetachElasticNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachElasticNetworkInterfaceResponse detachElasticNetworkInterface(shared_ptr<DetachElasticNetworkInterfaceRequest> request);
  GetDestinationCidrBlockResponse getDestinationCidrBlockWithOptions(shared_ptr<GetDestinationCidrBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDestinationCidrBlockResponse getDestinationCidrBlock(shared_ptr<GetDestinationCidrBlockRequest> request);
  GetElasticNetworkInterfaceResponse getElasticNetworkInterfaceWithOptions(shared_ptr<GetElasticNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetElasticNetworkInterfaceResponse getElasticNetworkInterface(shared_ptr<GetElasticNetworkInterfaceRequest> request);
  GetErResponse getErWithOptions(shared_ptr<GetErRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetErResponse getEr(shared_ptr<GetErRequest> request);
  GetErAttachmentResponse getErAttachmentWithOptions(shared_ptr<GetErAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetErAttachmentResponse getErAttachment(shared_ptr<GetErAttachmentRequest> request);
  GetErRouteEntryResponse getErRouteEntryWithOptions(shared_ptr<GetErRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetErRouteEntryResponse getErRouteEntry(shared_ptr<GetErRouteEntryRequest> request);
  GetErRouteMapResponse getErRouteMapWithOptions(shared_ptr<GetErRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetErRouteMapResponse getErRouteMap(shared_ptr<GetErRouteMapRequest> request);
  GetFabricTopologyResponse getFabricTopologyWithOptions(shared_ptr<GetFabricTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFabricTopologyResponse getFabricTopology(shared_ptr<GetFabricTopologyRequest> request);
  GetLeniPrivateIpAddressResponse getLeniPrivateIpAddressWithOptions(shared_ptr<GetLeniPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLeniPrivateIpAddressResponse getLeniPrivateIpAddress(shared_ptr<GetLeniPrivateIpAddressRequest> request);
  GetLniPrivateIpAddressResponse getLniPrivateIpAddressWithOptions(shared_ptr<GetLniPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLniPrivateIpAddressResponse getLniPrivateIpAddress(shared_ptr<GetLniPrivateIpAddressRequest> request);
  GetNetworkInterfaceResponse getNetworkInterfaceWithOptions(shared_ptr<GetNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNetworkInterfaceResponse getNetworkInterface(shared_ptr<GetNetworkInterfaceRequest> request);
  GetNodeInfoForPodResponse getNodeInfoForPodWithOptions(shared_ptr<GetNodeInfoForPodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNodeInfoForPodResponse getNodeInfoForPod(shared_ptr<GetNodeInfoForPodRequest> request);
  GetSubnetResponse getSubnetWithOptions(shared_ptr<GetSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubnetResponse getSubnet(shared_ptr<GetSubnetRequest> request);
  GetVccResponse getVccWithOptions(shared_ptr<GetVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVccResponse getVcc(shared_ptr<GetVccRequest> request);
  GetVccGrantRuleResponse getVccGrantRuleWithOptions(shared_ptr<GetVccGrantRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVccGrantRuleResponse getVccGrantRule(shared_ptr<GetVccGrantRuleRequest> request);
  GetVccRouteEntryResponse getVccRouteEntryWithOptions(shared_ptr<GetVccRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVccRouteEntryResponse getVccRouteEntry(shared_ptr<GetVccRouteEntryRequest> request);
  GetVpdResponse getVpdWithOptions(shared_ptr<GetVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVpdResponse getVpd(shared_ptr<GetVpdRequest> request);
  GetVpdGrantRuleResponse getVpdGrantRuleWithOptions(shared_ptr<GetVpdGrantRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVpdGrantRuleResponse getVpdGrantRule(shared_ptr<GetVpdGrantRuleRequest> request);
  GetVpdRouteEntryResponse getVpdRouteEntryWithOptions(shared_ptr<GetVpdRouteEntryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVpdRouteEntryResponse getVpdRouteEntry(shared_ptr<GetVpdRouteEntryRequest> request);
  InitializeVccResponse initializeVccWithOptions(shared_ptr<InitializeVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitializeVccResponse initializeVcc(shared_ptr<InitializeVccRequest> request);
  ListElasticNetworkInterfacesResponse listElasticNetworkInterfacesWithOptions(shared_ptr<ListElasticNetworkInterfacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListElasticNetworkInterfacesResponse listElasticNetworkInterfaces(shared_ptr<ListElasticNetworkInterfacesRequest> request);
  ListErAttachmentsResponse listErAttachmentsWithOptions(shared_ptr<ListErAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListErAttachmentsResponse listErAttachments(shared_ptr<ListErAttachmentsRequest> request);
  ListErRouteEntriesResponse listErRouteEntriesWithOptions(shared_ptr<ListErRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListErRouteEntriesResponse listErRouteEntries(shared_ptr<ListErRouteEntriesRequest> request);
  ListErRouteMapsResponse listErRouteMapsWithOptions(shared_ptr<ListErRouteMapsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListErRouteMapsResponse listErRouteMaps(shared_ptr<ListErRouteMapsRequest> request);
  ListErsResponse listErsWithOptions(shared_ptr<ListErsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListErsResponse listErs(shared_ptr<ListErsRequest> request);
  ListInstancesByNcdResponse listInstancesByNcdWithOptions(shared_ptr<ListInstancesByNcdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesByNcdResponse listInstancesByNcd(shared_ptr<ListInstancesByNcdRequest> request);
  ListLeniPrivateIpAddressesResponse listLeniPrivateIpAddressesWithOptions(shared_ptr<ListLeniPrivateIpAddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLeniPrivateIpAddressesResponse listLeniPrivateIpAddresses(shared_ptr<ListLeniPrivateIpAddressesRequest> request);
  ListLniPrivateIpAddressResponse listLniPrivateIpAddressWithOptions(shared_ptr<ListLniPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLniPrivateIpAddressResponse listLniPrivateIpAddress(shared_ptr<ListLniPrivateIpAddressRequest> request);
  ListNetworkInterfacesResponse listNetworkInterfacesWithOptions(shared_ptr<ListNetworkInterfacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNetworkInterfacesResponse listNetworkInterfaces(shared_ptr<ListNetworkInterfacesRequest> request);
  ListNodeInfosForPodResponse listNodeInfosForPodWithOptions(shared_ptr<ListNodeInfosForPodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodeInfosForPodResponse listNodeInfosForPod(shared_ptr<ListNodeInfosForPodRequest> request);
  ListSubnetsResponse listSubnetsWithOptions(shared_ptr<ListSubnetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubnetsResponse listSubnets(shared_ptr<ListSubnetsRequest> request);
  ListVccFlowInfosResponse listVccFlowInfosWithOptions(shared_ptr<ListVccFlowInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVccFlowInfosResponse listVccFlowInfos(shared_ptr<ListVccFlowInfosRequest> request);
  ListVccGrantRulesResponse listVccGrantRulesWithOptions(shared_ptr<ListVccGrantRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVccGrantRulesResponse listVccGrantRules(shared_ptr<ListVccGrantRulesRequest> request);
  ListVccRouteEntriesResponse listVccRouteEntriesWithOptions(shared_ptr<ListVccRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVccRouteEntriesResponse listVccRouteEntries(shared_ptr<ListVccRouteEntriesRequest> request);
  ListVccsResponse listVccsWithOptions(shared_ptr<ListVccsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVccsResponse listVccs(shared_ptr<ListVccsRequest> request);
  ListVpdGrantRulesResponse listVpdGrantRulesWithOptions(shared_ptr<ListVpdGrantRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpdGrantRulesResponse listVpdGrantRules(shared_ptr<ListVpdGrantRulesRequest> request);
  ListVpdRouteEntriesResponse listVpdRouteEntriesWithOptions(shared_ptr<ListVpdRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpdRouteEntriesResponse listVpdRouteEntries(shared_ptr<ListVpdRouteEntriesRequest> request);
  ListVpdsResponse listVpdsWithOptions(shared_ptr<ListVpdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpdsResponse listVpds(shared_ptr<ListVpdsRequest> request);
  QueryInstanceNcdResponse queryInstanceNcdWithOptions(shared_ptr<QueryInstanceNcdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryInstanceNcdResponse queryInstanceNcd(shared_ptr<QueryInstanceNcdRequest> request);
  RefundVccResponse refundVccWithOptions(shared_ptr<RefundVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefundVccResponse refundVcc(shared_ptr<RefundVccRequest> request);
  RetryVccResponse retryVccWithOptions(shared_ptr<RetryVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryVccResponse retryVcc(shared_ptr<RetryVccRequest> request);
  UnAssignPrivateIpAddressResponse unAssignPrivateIpAddressWithOptions(shared_ptr<UnAssignPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnAssignPrivateIpAddressResponse unAssignPrivateIpAddress(shared_ptr<UnAssignPrivateIpAddressRequest> request);
  UnAssociateVpdCidrBlockResponse unAssociateVpdCidrBlockWithOptions(shared_ptr<UnAssociateVpdCidrBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnAssociateVpdCidrBlockResponse unAssociateVpdCidrBlock(shared_ptr<UnAssociateVpdCidrBlockRequest> request);
  UnassignLeniPrivateIpAddressResponse unassignLeniPrivateIpAddressWithOptions(shared_ptr<UnassignLeniPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnassignLeniPrivateIpAddressResponse unassignLeniPrivateIpAddress(shared_ptr<UnassignLeniPrivateIpAddressRequest> request);
  UpdateElasticNetworkInterfaceResponse updateElasticNetworkInterfaceWithOptions(shared_ptr<UpdateElasticNetworkInterfaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateElasticNetworkInterfaceResponse updateElasticNetworkInterface(shared_ptr<UpdateElasticNetworkInterfaceRequest> request);
  UpdateErResponse updateErWithOptions(shared_ptr<UpdateErRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateErResponse updateEr(shared_ptr<UpdateErRequest> request);
  UpdateErAttachmentResponse updateErAttachmentWithOptions(shared_ptr<UpdateErAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateErAttachmentResponse updateErAttachment(shared_ptr<UpdateErAttachmentRequest> request);
  UpdateErRouteMapResponse updateErRouteMapWithOptions(shared_ptr<UpdateErRouteMapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateErRouteMapResponse updateErRouteMap(shared_ptr<UpdateErRouteMapRequest> request);
  UpdateLeniPrivateIpAddressResponse updateLeniPrivateIpAddressWithOptions(shared_ptr<UpdateLeniPrivateIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLeniPrivateIpAddressResponse updateLeniPrivateIpAddress(shared_ptr<UpdateLeniPrivateIpAddressRequest> request);
  UpdateSubnetResponse updateSubnetWithOptions(shared_ptr<UpdateSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSubnetResponse updateSubnet(shared_ptr<UpdateSubnetRequest> request);
  UpdateVccResponse updateVccWithOptions(shared_ptr<UpdateVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVccResponse updateVcc(shared_ptr<UpdateVccRequest> request);
  UpdateVpdResponse updateVpdWithOptions(shared_ptr<UpdateVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVpdResponse updateVpd(shared_ptr<UpdateVpdRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eflo20220530

#endif
