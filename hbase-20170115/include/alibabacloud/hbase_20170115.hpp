// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_HBASE20170115_H_
#define ALIBABACLOUD_HBASE20170115_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_HBase20170115 {
class AddUserHdfsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> extInfo{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  AddUserHdfsInfoRequest() {}

  explicit AddUserHdfsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
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


  virtual ~AddUserHdfsInfoRequest() = default;
};
class AddUserHdfsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};

  AddUserHdfsInfoResponseBody() {}

  explicit AddUserHdfsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUserHdfsInfoResponseBody() = default;
};
class AddUserHdfsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUserHdfsInfoResponseBody> body{};

  AddUserHdfsInfoResponse() {}

  explicit AddUserHdfsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserHdfsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserHdfsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserHdfsInfoResponse() = default;
};
class AllocatePublicNetworkAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  AllocatePublicNetworkAddressRequest() {}

  explicit AllocatePublicNetworkAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~AllocatePublicNetworkAddressRequest() = default;
};
class AllocatePublicNetworkAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocatePublicNetworkAddressResponseBody() {}

  explicit AllocatePublicNetworkAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AllocatePublicNetworkAddressResponseBody() = default;
};
class AllocatePublicNetworkAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllocatePublicNetworkAddressResponseBody> body{};

  AllocatePublicNetworkAddressResponse() {}

  explicit AllocatePublicNetworkAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllocatePublicNetworkAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocatePublicNetworkAddressResponseBody>(model1);
      }
    }
  }


  virtual ~AllocatePublicNetworkAddressResponse() = default;
};
class CheckVersionsOfComponentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> components{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  CheckVersionsOfComponentsRequest() {}

  explicit CheckVersionsOfComponentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (components) {
      res["Components"] = boost::any(*components);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      components = make_shared<string>(boost::any_cast<string>(m["Components"]));
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


  virtual ~CheckVersionsOfComponentsRequest() = default;
};
class CheckVersionsOfComponentsResponseBodyComponentsComponents : public Darabonba::Model {
public:
  shared_ptr<string> component{};
  shared_ptr<string> isLatestVersion{};

  CheckVersionsOfComponentsResponseBodyComponentsComponents() {}

  explicit CheckVersionsOfComponentsResponseBodyComponentsComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (component) {
      res["Component"] = boost::any(*component);
    }
    if (isLatestVersion) {
      res["IsLatestVersion"] = boost::any(*isLatestVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Component") != m.end() && !m["Component"].empty()) {
      component = make_shared<string>(boost::any_cast<string>(m["Component"]));
    }
    if (m.find("IsLatestVersion") != m.end() && !m["IsLatestVersion"].empty()) {
      isLatestVersion = make_shared<string>(boost::any_cast<string>(m["IsLatestVersion"]));
    }
  }


  virtual ~CheckVersionsOfComponentsResponseBodyComponentsComponents() = default;
};
class CheckVersionsOfComponentsResponseBodyComponents : public Darabonba::Model {
public:
  shared_ptr<vector<CheckVersionsOfComponentsResponseBodyComponentsComponents>> components{};

  CheckVersionsOfComponentsResponseBodyComponents() {}

  explicit CheckVersionsOfComponentsResponseBodyComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<CheckVersionsOfComponentsResponseBodyComponentsComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckVersionsOfComponentsResponseBodyComponentsComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<CheckVersionsOfComponentsResponseBodyComponentsComponents>>(expect1);
      }
    }
  }


  virtual ~CheckVersionsOfComponentsResponseBodyComponents() = default;
};
class CheckVersionsOfComponentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckVersionsOfComponentsResponseBodyComponents> components{};
  shared_ptr<string> requestId{};

  CheckVersionsOfComponentsResponseBody() {}

  explicit CheckVersionsOfComponentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (components) {
      res["Components"] = components ? boost::any(components->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(map<string, boost::any>) == m["Components"].type()) {
        CheckVersionsOfComponentsResponseBodyComponents model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Components"]));
        components = make_shared<CheckVersionsOfComponentsResponseBodyComponents>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckVersionsOfComponentsResponseBody() = default;
};
class CheckVersionsOfComponentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckVersionsOfComponentsResponseBody> body{};

  CheckVersionsOfComponentsResponse() {}

  explicit CheckVersionsOfComponentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckVersionsOfComponentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckVersionsOfComponentsResponseBody>(model1);
      }
    }
  }


  virtual ~CheckVersionsOfComponentsResponse() = default;
};
class CloseBackupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  CloseBackupRequest() {}

  explicit CloseBackupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~CloseBackupRequest() = default;
};
class CloseBackupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CloseBackupResponseBody() {}

  explicit CloseBackupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloseBackupResponseBody() = default;
};
class CloseBackupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloseBackupResponseBody> body{};

  CloseBackupResponse() {}

  explicit CloseBackupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloseBackupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseBackupResponseBody>(model1);
      }
    }
  }


  virtual ~CloseBackupResponse() = default;
};
class ConvertClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> duration{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ConvertClusterRequest() {}

  explicit ConvertClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ConvertClusterRequest() = default;
};
class ConvertClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  ConvertClusterResponseBody() {}

  explicit ConvertClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ConvertClusterResponseBody() = default;
};
class ConvertClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConvertClusterResponseBody> body{};

  ConvertClusterResponse() {}

  explicit ConvertClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertClusterResponse() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoRenew{};
  shared_ptr<string> backupId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> cloudType{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> coldStorageSize{};
  shared_ptr<string> coreDiskQuantity{};
  shared_ptr<string> coreDiskSize{};
  shared_ptr<string> coreDiskType{};
  shared_ptr<string> coreInstanceQuantity{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<string> dbInstanceConnType{};
  shared_ptr<string> dbInstanceType{};
  shared_ptr<string> dbType{};
  shared_ptr<string> depMode{};
  shared_ptr<string> duration{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> isColdStorage{};
  shared_ptr<string> masterInstanceType{};
  shared_ptr<string> netType{};
  shared_ptr<string> payType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> regionId{};
  shared_ptr<string> restoreTime{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> srcDBInstanceId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cloudType) {
      res["CloudType"] = boost::any(*cloudType);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (coldStorageSize) {
      res["ColdStorageSize"] = boost::any(*coldStorageSize);
    }
    if (coreDiskQuantity) {
      res["CoreDiskQuantity"] = boost::any(*coreDiskQuantity);
    }
    if (coreDiskSize) {
      res["CoreDiskSize"] = boost::any(*coreDiskSize);
    }
    if (coreDiskType) {
      res["CoreDiskType"] = boost::any(*coreDiskType);
    }
    if (coreInstanceQuantity) {
      res["CoreInstanceQuantity"] = boost::any(*coreInstanceQuantity);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (dbInstanceConnType) {
      res["DbInstanceConnType"] = boost::any(*dbInstanceConnType);
    }
    if (dbInstanceType) {
      res["DbInstanceType"] = boost::any(*dbInstanceType);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (depMode) {
      res["DepMode"] = boost::any(*depMode);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (isColdStorage) {
      res["IsColdStorage"] = boost::any(*isColdStorage);
    }
    if (masterInstanceType) {
      res["MasterInstanceType"] = boost::any(*masterInstanceType);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (srcDBInstanceId) {
      res["SrcDBInstanceId"] = boost::any(*srcDBInstanceId);
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
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CloudType") != m.end() && !m["CloudType"].empty()) {
      cloudType = make_shared<string>(boost::any_cast<string>(m["CloudType"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ColdStorageSize") != m.end() && !m["ColdStorageSize"].empty()) {
      coldStorageSize = make_shared<string>(boost::any_cast<string>(m["ColdStorageSize"]));
    }
    if (m.find("CoreDiskQuantity") != m.end() && !m["CoreDiskQuantity"].empty()) {
      coreDiskQuantity = make_shared<string>(boost::any_cast<string>(m["CoreDiskQuantity"]));
    }
    if (m.find("CoreDiskSize") != m.end() && !m["CoreDiskSize"].empty()) {
      coreDiskSize = make_shared<string>(boost::any_cast<string>(m["CoreDiskSize"]));
    }
    if (m.find("CoreDiskType") != m.end() && !m["CoreDiskType"].empty()) {
      coreDiskType = make_shared<string>(boost::any_cast<string>(m["CoreDiskType"]));
    }
    if (m.find("CoreInstanceQuantity") != m.end() && !m["CoreInstanceQuantity"].empty()) {
      coreInstanceQuantity = make_shared<string>(boost::any_cast<string>(m["CoreInstanceQuantity"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("DbInstanceConnType") != m.end() && !m["DbInstanceConnType"].empty()) {
      dbInstanceConnType = make_shared<string>(boost::any_cast<string>(m["DbInstanceConnType"]));
    }
    if (m.find("DbInstanceType") != m.end() && !m["DbInstanceType"].empty()) {
      dbInstanceType = make_shared<string>(boost::any_cast<string>(m["DbInstanceType"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("DepMode") != m.end() && !m["DepMode"].empty()) {
      depMode = make_shared<string>(boost::any_cast<string>(m["DepMode"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("IsColdStorage") != m.end() && !m["IsColdStorage"].empty()) {
      isColdStorage = make_shared<string>(boost::any_cast<string>(m["IsColdStorage"]));
    }
    if (m.find("MasterInstanceType") != m.end() && !m["MasterInstanceType"].empty()) {
      masterInstanceType = make_shared<string>(boost::any_cast<string>(m["MasterInstanceType"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("SrcDBInstanceId") != m.end() && !m["SrcDBInstanceId"].empty()) {
      srcDBInstanceId = make_shared<string>(boost::any_cast<string>(m["SrcDBInstanceId"]));
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


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> orderId{};
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
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
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
        CreateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClusterResponse() = default;
};
class CreateGlobalResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> zoneId{};

  CreateGlobalResourceRequest() {}

  explicit CreateGlobalResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateGlobalResourceRequest() = default;
};
class CreateGlobalResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateGlobalResourceResponseBody() {}

  explicit CreateGlobalResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateGlobalResourceResponseBody() = default;
};
class CreateGlobalResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGlobalResourceResponseBody> body{};

  CreateGlobalResourceResponse() {}

  explicit CreateGlobalResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGlobalResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGlobalResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGlobalResourceResponse() = default;
};
class CreateHbaseSlbServerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> slbServer{};
  shared_ptr<string> zoneId{};

  CreateHbaseSlbServerRequest() {}

  explicit CreateHbaseSlbServerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (slbServer) {
      res["SlbServer"] = boost::any(*slbServer);
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
    if (m.find("SlbServer") != m.end() && !m["SlbServer"].empty()) {
      slbServer = make_shared<string>(boost::any_cast<string>(m["SlbServer"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateHbaseSlbServerRequest() = default;
};
class CreateHbaseSlbServerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateHbaseSlbServerResponseBody() {}

  explicit CreateHbaseSlbServerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateHbaseSlbServerResponseBody() = default;
};
class CreateHbaseSlbServerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateHbaseSlbServerResponseBody> body{};

  CreateHbaseSlbServerResponse() {}

  explicit CreateHbaseSlbServerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateHbaseSlbServerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHbaseSlbServerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHbaseSlbServerResponse() = default;
};
class CreateSubscriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationInstanceId{};
  shared_ptr<string> destinationInstanceRegionId{};
  shared_ptr<string> extraContext{};
  shared_ptr<string> mapping{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> slbServer{};
  shared_ptr<string> sourceInstanceId{};
  shared_ptr<string> sourceInstanceRegionId{};
  shared_ptr<string> subscriptionDescription{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> zoneId{};

  CreateSubscriptionRequest() {}

  explicit CreateSubscriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationInstanceId) {
      res["DestinationInstanceId"] = boost::any(*destinationInstanceId);
    }
    if (destinationInstanceRegionId) {
      res["DestinationInstanceRegionId"] = boost::any(*destinationInstanceRegionId);
    }
    if (extraContext) {
      res["ExtraContext"] = boost::any(*extraContext);
    }
    if (mapping) {
      res["Mapping"] = boost::any(*mapping);
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
    if (slbServer) {
      res["SlbServer"] = boost::any(*slbServer);
    }
    if (sourceInstanceId) {
      res["SourceInstanceId"] = boost::any(*sourceInstanceId);
    }
    if (sourceInstanceRegionId) {
      res["SourceInstanceRegionId"] = boost::any(*sourceInstanceRegionId);
    }
    if (subscriptionDescription) {
      res["SubscriptionDescription"] = boost::any(*subscriptionDescription);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationInstanceId") != m.end() && !m["DestinationInstanceId"].empty()) {
      destinationInstanceId = make_shared<string>(boost::any_cast<string>(m["DestinationInstanceId"]));
    }
    if (m.find("DestinationInstanceRegionId") != m.end() && !m["DestinationInstanceRegionId"].empty()) {
      destinationInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["DestinationInstanceRegionId"]));
    }
    if (m.find("ExtraContext") != m.end() && !m["ExtraContext"].empty()) {
      extraContext = make_shared<string>(boost::any_cast<string>(m["ExtraContext"]));
    }
    if (m.find("Mapping") != m.end() && !m["Mapping"].empty()) {
      mapping = make_shared<string>(boost::any_cast<string>(m["Mapping"]));
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
    if (m.find("SlbServer") != m.end() && !m["SlbServer"].empty()) {
      slbServer = make_shared<string>(boost::any_cast<string>(m["SlbServer"]));
    }
    if (m.find("SourceInstanceId") != m.end() && !m["SourceInstanceId"].empty()) {
      sourceInstanceId = make_shared<string>(boost::any_cast<string>(m["SourceInstanceId"]));
    }
    if (m.find("SourceInstanceRegionId") != m.end() && !m["SourceInstanceRegionId"].empty()) {
      sourceInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["SourceInstanceRegionId"]));
    }
    if (m.find("SubscriptionDescription") != m.end() && !m["SubscriptionDescription"].empty()) {
      subscriptionDescription = make_shared<string>(boost::any_cast<string>(m["SubscriptionDescription"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateSubscriptionRequest() = default;
};
class CreateSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> subscriptionId{};

  CreateSubscriptionResponseBody() {}

  explicit CreateSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subscriptionId) {
      res["SubscriptionId"] = boost::any(*subscriptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubscriptionId") != m.end() && !m["SubscriptionId"].empty()) {
      subscriptionId = make_shared<string>(boost::any_cast<string>(m["SubscriptionId"]));
    }
  }


  virtual ~CreateSubscriptionResponseBody() = default;
};
class CreateSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSubscriptionResponseBody> body{};

  CreateSubscriptionResponse() {}

  explicit CreateSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSubscriptionResponse() = default;
};
class DeleteClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DeleteClusterRequest() {}

  explicit DeleteClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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
        DeleteClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClusterResponse() = default;
};
class DeleteGlobalResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> zoneId{};

  DeleteGlobalResourceRequest() {}

  explicit DeleteGlobalResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DeleteGlobalResourceRequest() = default;
};
class DeleteGlobalResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGlobalResourceResponseBody() {}

  explicit DeleteGlobalResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGlobalResourceResponseBody() = default;
};
class DeleteGlobalResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGlobalResourceResponseBody> body{};

  DeleteGlobalResourceResponse() {}

  explicit DeleteGlobalResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGlobalResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGlobalResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGlobalResourceResponse() = default;
};
class DeleteHbaseSlbServerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> slbServer{};
  shared_ptr<string> zoneId{};

  DeleteHbaseSlbServerRequest() {}

  explicit DeleteHbaseSlbServerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (slbServer) {
      res["SlbServer"] = boost::any(*slbServer);
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
    if (m.find("SlbServer") != m.end() && !m["SlbServer"].empty()) {
      slbServer = make_shared<string>(boost::any_cast<string>(m["SlbServer"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DeleteHbaseSlbServerRequest() = default;
};
class DeleteHbaseSlbServerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteHbaseSlbServerResponseBody() {}

  explicit DeleteHbaseSlbServerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteHbaseSlbServerResponseBody() = default;
};
class DeleteHbaseSlbServerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteHbaseSlbServerResponseBody> body{};

  DeleteHbaseSlbServerResponse() {}

  explicit DeleteHbaseSlbServerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteHbaseSlbServerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHbaseSlbServerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHbaseSlbServerResponse() = default;
};
class DeleteServerlessInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DeleteServerlessInstanceRequest() {}

  explicit DeleteServerlessInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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


  virtual ~DeleteServerlessInstanceRequest() = default;
};
class DeleteServerlessInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServerlessInstanceResponseBody() {}

  explicit DeleteServerlessInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServerlessInstanceResponseBody() = default;
};
class DeleteServerlessInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServerlessInstanceResponseBody> body{};

  DeleteServerlessInstanceResponse() {}

  explicit DeleteServerlessInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteServerlessInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServerlessInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServerlessInstanceResponse() = default;
};
class DeleteUserHdfsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> nameService{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DeleteUserHdfsInfoRequest() {}

  explicit DeleteUserHdfsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (nameService) {
      res["NameService"] = boost::any(*nameService);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("NameService") != m.end() && !m["NameService"].empty()) {
      nameService = make_shared<string>(boost::any_cast<string>(m["NameService"]));
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


  virtual ~DeleteUserHdfsInfoRequest() = default;
};
class DeleteUserHdfsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};

  DeleteUserHdfsInfoResponseBody() {}

  explicit DeleteUserHdfsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserHdfsInfoResponseBody() = default;
};
class DeleteUserHdfsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserHdfsInfoResponseBody> body{};

  DeleteUserHdfsInfoResponse() {}

  explicit DeleteUserHdfsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserHdfsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserHdfsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserHdfsInfoResponse() = default;
};
class DescribeBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupRetentionPeriod{};
  shared_ptr<string> preferredBackupEndTimeUTC{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupStartTimeUTC{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> requestId{};

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
    if (preferredBackupEndTimeUTC) {
      res["PreferredBackupEndTimeUTC"] = boost::any(*preferredBackupEndTimeUTC);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupStartTimeUTC) {
      res["PreferredBackupStartTimeUTC"] = boost::any(*preferredBackupStartTimeUTC);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["BackupRetentionPeriod"]));
    }
    if (m.find("PreferredBackupEndTimeUTC") != m.end() && !m["PreferredBackupEndTimeUTC"].empty()) {
      preferredBackupEndTimeUTC = make_shared<string>(boost::any_cast<string>(m["PreferredBackupEndTimeUTC"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupStartTimeUTC") != m.end() && !m["PreferredBackupStartTimeUTC"].empty()) {
      preferredBackupStartTimeUTC = make_shared<string>(boost::any_cast<string>(m["PreferredBackupStartTimeUTC"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<long> backupId{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> endTimeUTC{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> startTimeUTC{};
  shared_ptr<string> zoneId{};

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
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (endTimeUTC) {
      res["EndTimeUTC"] = boost::any(*endTimeUTC);
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
    if (startTimeUTC) {
      res["StartTimeUTC"] = boost::any(*startTimeUTC);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<long>(boost::any_cast<long>(m["BackupId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EndTimeUTC") != m.end() && !m["EndTimeUTC"].empty()) {
      endTimeUTC = make_shared<string>(boost::any_cast<string>(m["EndTimeUTC"]));
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
    if (m.find("StartTimeUTC") != m.end() && !m["StartTimeUTC"].empty()) {
      startTimeUTC = make_shared<string>(boost::any_cast<string>(m["StartTimeUTC"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeBackupsRequest() = default;
};
class DescribeBackupsResponseBodyBackupsBackup : public Darabonba::Model {
public:
  shared_ptr<string> backupDBNames{};
  shared_ptr<string> backupDownloadURL{};
  shared_ptr<string> backupEndTime{};
  shared_ptr<string> backupEndTimeUTC{};
  shared_ptr<long> backupId{};
  shared_ptr<string> backupMethod{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupSize{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupStartTimeUTC{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> backupType{};

  DescribeBackupsResponseBodyBackupsBackup() {}

  explicit DescribeBackupsResponseBodyBackupsBackup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupDBNames) {
      res["BackupDBNames"] = boost::any(*backupDBNames);
    }
    if (backupDownloadURL) {
      res["BackupDownloadURL"] = boost::any(*backupDownloadURL);
    }
    if (backupEndTime) {
      res["BackupEndTime"] = boost::any(*backupEndTime);
    }
    if (backupEndTimeUTC) {
      res["BackupEndTimeUTC"] = boost::any(*backupEndTimeUTC);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupStartTimeUTC) {
      res["BackupStartTimeUTC"] = boost::any(*backupStartTimeUTC);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupDBNames") != m.end() && !m["BackupDBNames"].empty()) {
      backupDBNames = make_shared<string>(boost::any_cast<string>(m["BackupDBNames"]));
    }
    if (m.find("BackupDownloadURL") != m.end() && !m["BackupDownloadURL"].empty()) {
      backupDownloadURL = make_shared<string>(boost::any_cast<string>(m["BackupDownloadURL"]));
    }
    if (m.find("BackupEndTime") != m.end() && !m["BackupEndTime"].empty()) {
      backupEndTime = make_shared<string>(boost::any_cast<string>(m["BackupEndTime"]));
    }
    if (m.find("BackupEndTimeUTC") != m.end() && !m["BackupEndTimeUTC"].empty()) {
      backupEndTimeUTC = make_shared<string>(boost::any_cast<string>(m["BackupEndTimeUTC"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<long>(boost::any_cast<long>(m["BackupId"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<string>(boost::any_cast<string>(m["BackupSize"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupStartTimeUTC") != m.end() && !m["BackupStartTimeUTC"].empty()) {
      backupStartTimeUTC = make_shared<string>(boost::any_cast<string>(m["BackupStartTimeUTC"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
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
  shared_ptr<DescribeBackupsResponseBodyBackups> backups{};
  shared_ptr<string> enableStatus{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeBackupsResponseBody() {}

  explicit DescribeBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backups) {
      res["Backups"] = backups ? boost::any(backups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (enableStatus) {
      res["EnableStatus"] = boost::any(*enableStatus);
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
    if (m.find("Backups") != m.end() && !m["Backups"].empty()) {
      if (typeid(map<string, boost::any>) == m["Backups"].type()) {
        DescribeBackupsResponseBodyBackups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Backups"]));
        backups = make_shared<DescribeBackupsResponseBodyBackups>(model1);
      }
    }
    if (m.find("EnableStatus") != m.end() && !m["EnableStatus"].empty()) {
      enableStatus = make_shared<string>(boost::any_cast<string>(m["EnableStatus"]));
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
class DescribeClusterAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DescribeClusterAttributeRequest() {}

  explicit DescribeClusterAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~DescribeClusterAttributeRequest() = default;
};
class DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> string{};

  DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList() {}

  explicit DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (string) {
      res["String"] = boost::any(*string);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("String") != m.end() && !m["String"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["String"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["String"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      string = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList() = default;
};
class DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> string{};

  DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList() {}

  explicit DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (string) {
      res["String"] = boost::any(*string);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("String") != m.end() && !m["String"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["String"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["String"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      string = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList() = default;
};
class DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> string{};

  DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList() {}

  explicit DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (string) {
      res["String"] = boost::any(*string);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("String") != m.end() && !m["String"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["String"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["String"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      string = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList() = default;
};
class DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> string{};

  DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList() {}

  explicit DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (string) {
      res["String"] = boost::any(*string);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("String") != m.end() && !m["String"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["String"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["String"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      string = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList() = default;
};
class DescribeClusterAttributeResponseBodyConnectionInfo : public Darabonba::Model {
public:
  shared_ptr<string> haRestConnectionString{};
  shared_ptr<string> haRestPort{};
  shared_ptr<string> haThriftConnectionString{};
  shared_ptr<string> haThriftPort{};
  shared_ptr<string> thriftConnectionString{};
  shared_ptr<string> thriftPort{};
  shared_ptr<string> UIProxyConnectionString{};
  shared_ptr<DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList> ZKClassicConnectionStringList{};
  shared_ptr<DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList> ZKConnectionStringList{};
  shared_ptr<DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList> ZKInnerConnectionStringList{};
  shared_ptr<long> ZKPort{};
  shared_ptr<DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList> ZKPublicConnectionStringList{};

  DescribeClusterAttributeResponseBodyConnectionInfo() {}

  explicit DescribeClusterAttributeResponseBodyConnectionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (haRestConnectionString) {
      res["HaRestConnectionString"] = boost::any(*haRestConnectionString);
    }
    if (haRestPort) {
      res["HaRestPort"] = boost::any(*haRestPort);
    }
    if (haThriftConnectionString) {
      res["HaThriftConnectionString"] = boost::any(*haThriftConnectionString);
    }
    if (haThriftPort) {
      res["HaThriftPort"] = boost::any(*haThriftPort);
    }
    if (thriftConnectionString) {
      res["ThriftConnectionString"] = boost::any(*thriftConnectionString);
    }
    if (thriftPort) {
      res["ThriftPort"] = boost::any(*thriftPort);
    }
    if (UIProxyConnectionString) {
      res["UIProxyConnectionString"] = boost::any(*UIProxyConnectionString);
    }
    if (ZKClassicConnectionStringList) {
      res["ZKClassicConnectionStringList"] = ZKClassicConnectionStringList ? boost::any(ZKClassicConnectionStringList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ZKConnectionStringList) {
      res["ZKConnectionStringList"] = ZKConnectionStringList ? boost::any(ZKConnectionStringList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ZKInnerConnectionStringList) {
      res["ZKInnerConnectionStringList"] = ZKInnerConnectionStringList ? boost::any(ZKInnerConnectionStringList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ZKPort) {
      res["ZKPort"] = boost::any(*ZKPort);
    }
    if (ZKPublicConnectionStringList) {
      res["ZKPublicConnectionStringList"] = ZKPublicConnectionStringList ? boost::any(ZKPublicConnectionStringList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HaRestConnectionString") != m.end() && !m["HaRestConnectionString"].empty()) {
      haRestConnectionString = make_shared<string>(boost::any_cast<string>(m["HaRestConnectionString"]));
    }
    if (m.find("HaRestPort") != m.end() && !m["HaRestPort"].empty()) {
      haRestPort = make_shared<string>(boost::any_cast<string>(m["HaRestPort"]));
    }
    if (m.find("HaThriftConnectionString") != m.end() && !m["HaThriftConnectionString"].empty()) {
      haThriftConnectionString = make_shared<string>(boost::any_cast<string>(m["HaThriftConnectionString"]));
    }
    if (m.find("HaThriftPort") != m.end() && !m["HaThriftPort"].empty()) {
      haThriftPort = make_shared<string>(boost::any_cast<string>(m["HaThriftPort"]));
    }
    if (m.find("ThriftConnectionString") != m.end() && !m["ThriftConnectionString"].empty()) {
      thriftConnectionString = make_shared<string>(boost::any_cast<string>(m["ThriftConnectionString"]));
    }
    if (m.find("ThriftPort") != m.end() && !m["ThriftPort"].empty()) {
      thriftPort = make_shared<string>(boost::any_cast<string>(m["ThriftPort"]));
    }
    if (m.find("UIProxyConnectionString") != m.end() && !m["UIProxyConnectionString"].empty()) {
      UIProxyConnectionString = make_shared<string>(boost::any_cast<string>(m["UIProxyConnectionString"]));
    }
    if (m.find("ZKClassicConnectionStringList") != m.end() && !m["ZKClassicConnectionStringList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZKClassicConnectionStringList"].type()) {
        DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZKClassicConnectionStringList"]));
        ZKClassicConnectionStringList = make_shared<DescribeClusterAttributeResponseBodyConnectionInfoZKClassicConnectionStringList>(model1);
      }
    }
    if (m.find("ZKConnectionStringList") != m.end() && !m["ZKConnectionStringList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZKConnectionStringList"].type()) {
        DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZKConnectionStringList"]));
        ZKConnectionStringList = make_shared<DescribeClusterAttributeResponseBodyConnectionInfoZKConnectionStringList>(model1);
      }
    }
    if (m.find("ZKInnerConnectionStringList") != m.end() && !m["ZKInnerConnectionStringList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZKInnerConnectionStringList"].type()) {
        DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZKInnerConnectionStringList"]));
        ZKInnerConnectionStringList = make_shared<DescribeClusterAttributeResponseBodyConnectionInfoZKInnerConnectionStringList>(model1);
      }
    }
    if (m.find("ZKPort") != m.end() && !m["ZKPort"].empty()) {
      ZKPort = make_shared<long>(boost::any_cast<long>(m["ZKPort"]));
    }
    if (m.find("ZKPublicConnectionStringList") != m.end() && !m["ZKPublicConnectionStringList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZKPublicConnectionStringList"].type()) {
        DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZKPublicConnectionStringList"]));
        ZKPublicConnectionStringList = make_shared<DescribeClusterAttributeResponseBodyConnectionInfoZKPublicConnectionStringList>(model1);
      }
    }
  }


  virtual ~DescribeClusterAttributeResponseBodyConnectionInfo() = default;
};
class DescribeClusterAttributeResponseBodyNetInfo : public Darabonba::Model {
public:
  shared_ptr<string> innerIpAddress{};
  shared_ptr<string> netType{};
  shared_ptr<string> publicIpAddress{};
  shared_ptr<string> securityIpList{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeClusterAttributeResponseBodyNetInfo() {}

  explicit DescribeClusterAttributeResponseBodyNetInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (innerIpAddress) {
      res["InnerIpAddress"] = boost::any(*innerIpAddress);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (publicIpAddress) {
      res["PublicIpAddress"] = boost::any(*publicIpAddress);
    }
    if (securityIpList) {
      res["SecurityIpList"] = boost::any(*securityIpList);
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
    if (m.find("InnerIpAddress") != m.end() && !m["InnerIpAddress"].empty()) {
      innerIpAddress = make_shared<string>(boost::any_cast<string>(m["InnerIpAddress"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("PublicIpAddress") != m.end() && !m["PublicIpAddress"].empty()) {
      publicIpAddress = make_shared<string>(boost::any_cast<string>(m["PublicIpAddress"]));
    }
    if (m.find("SecurityIpList") != m.end() && !m["SecurityIpList"].empty()) {
      securityIpList = make_shared<string>(boost::any_cast<string>(m["SecurityIpList"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeClusterAttributeResponseBodyNetInfo() = default;
};
class DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon : public Darabonba::Model {
public:
  shared_ptr<string> daemonName{};
  shared_ptr<string> daemonStatus{};

  DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon() {}

  explicit DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daemonName) {
      res["DaemonName"] = boost::any(*daemonName);
    }
    if (daemonStatus) {
      res["DaemonStatus"] = boost::any(*daemonStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaemonName") != m.end() && !m["DaemonName"].empty()) {
      daemonName = make_shared<string>(boost::any_cast<string>(m["DaemonName"]));
    }
    if (m.find("DaemonStatus") != m.end() && !m["DaemonStatus"].empty()) {
      daemonStatus = make_shared<string>(boost::any_cast<string>(m["DaemonStatus"]));
    }
  }


  virtual ~DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon() = default;
};
class DescribeClusterAttributeResponseBodyNodeListNodeDaemonList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon>> daemon{};

  DescribeClusterAttributeResponseBodyNodeListNodeDaemonList() {}

  explicit DescribeClusterAttributeResponseBodyNodeListNodeDaemonList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daemon) {
      vector<boost::any> temp1;
      for(auto item1:*daemon){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Daemon"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Daemon") != m.end() && !m["Daemon"].empty()) {
      if (typeid(vector<boost::any>) == m["Daemon"].type()) {
        vector<DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Daemon"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        daemon = make_shared<vector<DescribeClusterAttributeResponseBodyNodeListNodeDaemonListDaemon>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterAttributeResponseBodyNodeListNodeDaemonList() = default;
};
class DescribeClusterAttributeResponseBodyNodeListNode : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterAttributeResponseBodyNodeListNodeDaemonList> daemonList{};
  shared_ptr<string> memStore{};
  shared_ptr<string> nodeDiskQuantity{};
  shared_ptr<string> nodeDiskSize{};
  shared_ptr<string> nodeDiskType{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeInstanceType{};
  shared_ptr<string> nodeStatus{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> regionQuantity{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> storeFile{};

  DescribeClusterAttributeResponseBodyNodeListNode() {}

  explicit DescribeClusterAttributeResponseBodyNodeListNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (daemonList) {
      res["DaemonList"] = daemonList ? boost::any(daemonList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memStore) {
      res["MemStore"] = boost::any(*memStore);
    }
    if (nodeDiskQuantity) {
      res["NodeDiskQuantity"] = boost::any(*nodeDiskQuantity);
    }
    if (nodeDiskSize) {
      res["NodeDiskSize"] = boost::any(*nodeDiskSize);
    }
    if (nodeDiskType) {
      res["NodeDiskType"] = boost::any(*nodeDiskType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeInstanceType) {
      res["NodeInstanceType"] = boost::any(*nodeInstanceType);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (regionQuantity) {
      res["RegionQuantity"] = boost::any(*regionQuantity);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (storeFile) {
      res["StoreFile"] = boost::any(*storeFile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DaemonList") != m.end() && !m["DaemonList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DaemonList"].type()) {
        DescribeClusterAttributeResponseBodyNodeListNodeDaemonList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DaemonList"]));
        daemonList = make_shared<DescribeClusterAttributeResponseBodyNodeListNodeDaemonList>(model1);
      }
    }
    if (m.find("MemStore") != m.end() && !m["MemStore"].empty()) {
      memStore = make_shared<string>(boost::any_cast<string>(m["MemStore"]));
    }
    if (m.find("NodeDiskQuantity") != m.end() && !m["NodeDiskQuantity"].empty()) {
      nodeDiskQuantity = make_shared<string>(boost::any_cast<string>(m["NodeDiskQuantity"]));
    }
    if (m.find("NodeDiskSize") != m.end() && !m["NodeDiskSize"].empty()) {
      nodeDiskSize = make_shared<string>(boost::any_cast<string>(m["NodeDiskSize"]));
    }
    if (m.find("NodeDiskType") != m.end() && !m["NodeDiskType"].empty()) {
      nodeDiskType = make_shared<string>(boost::any_cast<string>(m["NodeDiskType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeInstanceType") != m.end() && !m["NodeInstanceType"].empty()) {
      nodeInstanceType = make_shared<string>(boost::any_cast<string>(m["NodeInstanceType"]));
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<string>(boost::any_cast<string>(m["NodeStatus"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("RegionQuantity") != m.end() && !m["RegionQuantity"].empty()) {
      regionQuantity = make_shared<string>(boost::any_cast<string>(m["RegionQuantity"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("StoreFile") != m.end() && !m["StoreFile"].empty()) {
      storeFile = make_shared<string>(boost::any_cast<string>(m["StoreFile"]));
    }
  }


  virtual ~DescribeClusterAttributeResponseBodyNodeListNode() = default;
};
class DescribeClusterAttributeResponseBodyNodeList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterAttributeResponseBodyNodeListNode>> node{};

  DescribeClusterAttributeResponseBodyNodeList() {}

  explicit DescribeClusterAttributeResponseBodyNodeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (node) {
      vector<boost::any> temp1;
      for(auto item1:*node){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Node"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(vector<boost::any>) == m["Node"].type()) {
        vector<DescribeClusterAttributeResponseBodyNodeListNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Node"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterAttributeResponseBodyNodeListNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        node = make_shared<vector<DescribeClusterAttributeResponseBodyNodeListNode>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterAttributeResponseBodyNodeList() = default;
};
class DescribeClusterAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> autoRenew{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> coldStorageStatus{};
  shared_ptr<DescribeClusterAttributeResponseBodyConnectionInfo> connectionInfo{};
  shared_ptr<long> coreDiskQuantity{};
  shared_ptr<string> coreDiskSize{};
  shared_ptr<string> coreDiskType{};
  shared_ptr<long> coreInstanceQuantity{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> haType{};
  shared_ptr<string> hasUser{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> mainVersion{};
  shared_ptr<long> masterDiskSize{};
  shared_ptr<string> masterDiskType{};
  shared_ptr<string> masterInstanceType{};
  shared_ptr<string> minorVersion{};
  shared_ptr<DescribeClusterAttributeResponseBodyNetInfo> netInfo{};
  shared_ptr<DescribeClusterAttributeResponseBodyNodeList> nodeList{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> updateStatus{};
  shared_ptr<string> zoneId{};

  DescribeClusterAttributeResponseBody() {}

  explicit DescribeClusterAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (coldStorageStatus) {
      res["ColdStorageStatus"] = boost::any(*coldStorageStatus);
    }
    if (connectionInfo) {
      res["ConnectionInfo"] = connectionInfo ? boost::any(connectionInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (coreDiskQuantity) {
      res["CoreDiskQuantity"] = boost::any(*coreDiskQuantity);
    }
    if (coreDiskSize) {
      res["CoreDiskSize"] = boost::any(*coreDiskSize);
    }
    if (coreDiskType) {
      res["CoreDiskType"] = boost::any(*coreDiskType);
    }
    if (coreInstanceQuantity) {
      res["CoreInstanceQuantity"] = boost::any(*coreInstanceQuantity);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (haType) {
      res["HaType"] = boost::any(*haType);
    }
    if (hasUser) {
      res["HasUser"] = boost::any(*hasUser);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (mainVersion) {
      res["MainVersion"] = boost::any(*mainVersion);
    }
    if (masterDiskSize) {
      res["MasterDiskSize"] = boost::any(*masterDiskSize);
    }
    if (masterDiskType) {
      res["MasterDiskType"] = boost::any(*masterDiskType);
    }
    if (masterInstanceType) {
      res["MasterInstanceType"] = boost::any(*masterInstanceType);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (netInfo) {
      res["NetInfo"] = netInfo ? boost::any(netInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodeList) {
      res["NodeList"] = nodeList ? boost::any(nodeList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateStatus) {
      res["UpdateStatus"] = boost::any(*updateStatus);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("ColdStorageStatus") != m.end() && !m["ColdStorageStatus"].empty()) {
      coldStorageStatus = make_shared<string>(boost::any_cast<string>(m["ColdStorageStatus"]));
    }
    if (m.find("ConnectionInfo") != m.end() && !m["ConnectionInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnectionInfo"].type()) {
        DescribeClusterAttributeResponseBodyConnectionInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnectionInfo"]));
        connectionInfo = make_shared<DescribeClusterAttributeResponseBodyConnectionInfo>(model1);
      }
    }
    if (m.find("CoreDiskQuantity") != m.end() && !m["CoreDiskQuantity"].empty()) {
      coreDiskQuantity = make_shared<long>(boost::any_cast<long>(m["CoreDiskQuantity"]));
    }
    if (m.find("CoreDiskSize") != m.end() && !m["CoreDiskSize"].empty()) {
      coreDiskSize = make_shared<string>(boost::any_cast<string>(m["CoreDiskSize"]));
    }
    if (m.find("CoreDiskType") != m.end() && !m["CoreDiskType"].empty()) {
      coreDiskType = make_shared<string>(boost::any_cast<string>(m["CoreDiskType"]));
    }
    if (m.find("CoreInstanceQuantity") != m.end() && !m["CoreInstanceQuantity"].empty()) {
      coreInstanceQuantity = make_shared<long>(boost::any_cast<long>(m["CoreInstanceQuantity"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HaType") != m.end() && !m["HaType"].empty()) {
      haType = make_shared<string>(boost::any_cast<string>(m["HaType"]));
    }
    if (m.find("HasUser") != m.end() && !m["HasUser"].empty()) {
      hasUser = make_shared<string>(boost::any_cast<string>(m["HasUser"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MainVersion") != m.end() && !m["MainVersion"].empty()) {
      mainVersion = make_shared<string>(boost::any_cast<string>(m["MainVersion"]));
    }
    if (m.find("MasterDiskSize") != m.end() && !m["MasterDiskSize"].empty()) {
      masterDiskSize = make_shared<long>(boost::any_cast<long>(m["MasterDiskSize"]));
    }
    if (m.find("MasterDiskType") != m.end() && !m["MasterDiskType"].empty()) {
      masterDiskType = make_shared<string>(boost::any_cast<string>(m["MasterDiskType"]));
    }
    if (m.find("MasterInstanceType") != m.end() && !m["MasterInstanceType"].empty()) {
      masterInstanceType = make_shared<string>(boost::any_cast<string>(m["MasterInstanceType"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("NetInfo") != m.end() && !m["NetInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetInfo"].type()) {
        DescribeClusterAttributeResponseBodyNetInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetInfo"]));
        netInfo = make_shared<DescribeClusterAttributeResponseBodyNetInfo>(model1);
      }
    }
    if (m.find("NodeList") != m.end() && !m["NodeList"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeList"].type()) {
        DescribeClusterAttributeResponseBodyNodeList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeList"]));
        nodeList = make_shared<DescribeClusterAttributeResponseBodyNodeList>(model1);
      }
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateStatus") != m.end() && !m["UpdateStatus"].empty()) {
      updateStatus = make_shared<string>(boost::any_cast<string>(m["UpdateStatus"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeClusterAttributeResponseBody() = default;
};
class DescribeClusterAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClusterAttributeResponseBody> body{};

  DescribeClusterAttributeResponse() {}

  explicit DescribeClusterAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterAttributeResponse() = default;
};
class DescribeClusterConnectAddrsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DescribeClusterConnectAddrsRequest() {}

  explicit DescribeClusterConnectAddrsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~DescribeClusterConnectAddrsRequest() = default;
};
class DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo : public Darabonba::Model {
public:
  shared_ptr<string> connAddr{};
  shared_ptr<string> connAddrPort{};
  shared_ptr<string> netType{};

  DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo() {}

  explicit DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddr) {
      res["ConnAddr"] = boost::any(*connAddr);
    }
    if (connAddrPort) {
      res["ConnAddrPort"] = boost::any(*connAddrPort);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddr") != m.end() && !m["ConnAddr"].empty()) {
      connAddr = make_shared<string>(boost::any_cast<string>(m["ConnAddr"]));
    }
    if (m.find("ConnAddrPort") != m.end() && !m["ConnAddrPort"].empty()) {
      connAddrPort = make_shared<string>(boost::any_cast<string>(m["ConnAddrPort"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
  }


  virtual ~DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo() = default;
};
class DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo> connAddrInfo{};
  shared_ptr<string> connType{};

  DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr() {}

  explicit DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddrInfo) {
      res["ConnAddrInfo"] = connAddrInfo ? boost::any(connAddrInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (connType) {
      res["ConnType"] = boost::any(*connType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddrInfo") != m.end() && !m["ConnAddrInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnAddrInfo"].type()) {
        DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnAddrInfo"]));
        connAddrInfo = make_shared<DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddrConnAddrInfo>(model1);
      }
    }
    if (m.find("ConnType") != m.end() && !m["ConnType"].empty()) {
      connType = make_shared<string>(boost::any_cast<string>(m["ConnType"]));
    }
  }


  virtual ~DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr() = default;
};
class DescribeClusterConnectAddrsResponseBodyServiceConnAddrs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr>> serviceConnAddr{};

  DescribeClusterConnectAddrsResponseBodyServiceConnAddrs() {}

  explicit DescribeClusterConnectAddrsResponseBodyServiceConnAddrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceConnAddr) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConnAddr){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceConnAddr"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceConnAddr") != m.end() && !m["ServiceConnAddr"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceConnAddr"].type()) {
        vector<DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceConnAddr"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceConnAddr = make_shared<vector<DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterConnectAddrsResponseBodyServiceConnAddrs() = default;
};
class DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo : public Darabonba::Model {
public:
  shared_ptr<string> connAddr{};
  shared_ptr<string> connAddrPort{};
  shared_ptr<string> netType{};

  DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo() {}

  explicit DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddr) {
      res["ConnAddr"] = boost::any(*connAddr);
    }
    if (connAddrPort) {
      res["ConnAddrPort"] = boost::any(*connAddrPort);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddr") != m.end() && !m["ConnAddr"].empty()) {
      connAddr = make_shared<string>(boost::any_cast<string>(m["ConnAddr"]));
    }
    if (m.find("ConnAddrPort") != m.end() && !m["ConnAddrPort"].empty()) {
      connAddrPort = make_shared<string>(boost::any_cast<string>(m["ConnAddrPort"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
  }


  virtual ~DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo() = default;
};
class DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo> connAddrInfo{};
  shared_ptr<string> slbType{};

  DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr() {}

  explicit DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddrInfo) {
      res["ConnAddrInfo"] = connAddrInfo ? boost::any(connAddrInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (slbType) {
      res["SlbType"] = boost::any(*slbType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddrInfo") != m.end() && !m["ConnAddrInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnAddrInfo"].type()) {
        DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnAddrInfo"]));
        connAddrInfo = make_shared<DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo>(model1);
      }
    }
    if (m.find("SlbType") != m.end() && !m["SlbType"].empty()) {
      slbType = make_shared<string>(boost::any_cast<string>(m["SlbType"]));
    }
  }


  virtual ~DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr() = default;
};
class DescribeClusterConnectAddrsResponseBodySlbConnAddrs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr>> slbConnAddr{};

  DescribeClusterConnectAddrsResponseBodySlbConnAddrs() {}

  explicit DescribeClusterConnectAddrsResponseBodySlbConnAddrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slbConnAddr) {
      vector<boost::any> temp1;
      for(auto item1:*slbConnAddr){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlbConnAddr"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlbConnAddr") != m.end() && !m["SlbConnAddr"].empty()) {
      if (typeid(vector<boost::any>) == m["SlbConnAddr"].type()) {
        vector<DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlbConnAddr"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slbConnAddr = make_shared<vector<DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterConnectAddrsResponseBodySlbConnAddrs() = default;
};
class DescribeClusterConnectAddrsResponseBodyThriftConn : public Darabonba::Model {
public:
  shared_ptr<string> connAddr{};
  shared_ptr<string> connAddrPort{};
  shared_ptr<string> netType{};

  DescribeClusterConnectAddrsResponseBodyThriftConn() {}

  explicit DescribeClusterConnectAddrsResponseBodyThriftConn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddr) {
      res["ConnAddr"] = boost::any(*connAddr);
    }
    if (connAddrPort) {
      res["ConnAddrPort"] = boost::any(*connAddrPort);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddr") != m.end() && !m["ConnAddr"].empty()) {
      connAddr = make_shared<string>(boost::any_cast<string>(m["ConnAddr"]));
    }
    if (m.find("ConnAddrPort") != m.end() && !m["ConnAddrPort"].empty()) {
      connAddrPort = make_shared<string>(boost::any_cast<string>(m["ConnAddrPort"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
  }


  virtual ~DescribeClusterConnectAddrsResponseBodyThriftConn() = default;
};
class DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo : public Darabonba::Model {
public:
  shared_ptr<string> connAddr{};
  shared_ptr<string> connAddrPort{};
  shared_ptr<string> netType{};

  DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo() {}

  explicit DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddr) {
      res["ConnAddr"] = boost::any(*connAddr);
    }
    if (connAddrPort) {
      res["ConnAddrPort"] = boost::any(*connAddrPort);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddr") != m.end() && !m["ConnAddr"].empty()) {
      connAddr = make_shared<string>(boost::any_cast<string>(m["ConnAddr"]));
    }
    if (m.find("ConnAddrPort") != m.end() && !m["ConnAddrPort"].empty()) {
      connAddrPort = make_shared<string>(boost::any_cast<string>(m["ConnAddrPort"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
  }


  virtual ~DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo() = default;
};
class DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr : public Darabonba::Model {
public:
  shared_ptr<string> connAddr{};
  shared_ptr<string> connAddrPort{};
  shared_ptr<string> netType{};

  DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr() {}

  explicit DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAddr) {
      res["ConnAddr"] = boost::any(*connAddr);
    }
    if (connAddrPort) {
      res["ConnAddrPort"] = boost::any(*connAddrPort);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAddr") != m.end() && !m["ConnAddr"].empty()) {
      connAddr = make_shared<string>(boost::any_cast<string>(m["ConnAddr"]));
    }
    if (m.find("ConnAddrPort") != m.end() && !m["ConnAddrPort"].empty()) {
      connAddrPort = make_shared<string>(boost::any_cast<string>(m["ConnAddrPort"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
  }


  virtual ~DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr() = default;
};
class DescribeClusterConnectAddrsResponseBodyZkConnAddrs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr>> zkConnAddr{};

  DescribeClusterConnectAddrsResponseBodyZkConnAddrs() {}

  explicit DescribeClusterConnectAddrsResponseBodyZkConnAddrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zkConnAddr) {
      vector<boost::any> temp1;
      for(auto item1:*zkConnAddr){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZkConnAddr"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZkConnAddr") != m.end() && !m["ZkConnAddr"].empty()) {
      if (typeid(vector<boost::any>) == m["ZkConnAddr"].type()) {
        vector<DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZkConnAddr"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zkConnAddr = make_shared<vector<DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterConnectAddrsResponseBodyZkConnAddrs() = default;
};
class DescribeClusterConnectAddrsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dbType{};
  shared_ptr<string> isMultimod{};
  shared_ptr<string> netType{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeClusterConnectAddrsResponseBodyServiceConnAddrs> serviceConnAddrs{};
  shared_ptr<DescribeClusterConnectAddrsResponseBodySlbConnAddrs> slbConnAddrs{};
  shared_ptr<DescribeClusterConnectAddrsResponseBodyThriftConn> thriftConn{};
  shared_ptr<DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo> uiProxyConnAddrInfo{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<DescribeClusterConnectAddrsResponseBodyZkConnAddrs> zkConnAddrs{};

  DescribeClusterConnectAddrsResponseBody() {}

  explicit DescribeClusterConnectAddrsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (isMultimod) {
      res["IsMultimod"] = boost::any(*isMultimod);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceConnAddrs) {
      res["ServiceConnAddrs"] = serviceConnAddrs ? boost::any(serviceConnAddrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (slbConnAddrs) {
      res["SlbConnAddrs"] = slbConnAddrs ? boost::any(slbConnAddrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (thriftConn) {
      res["ThriftConn"] = thriftConn ? boost::any(thriftConn->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uiProxyConnAddrInfo) {
      res["UiProxyConnAddrInfo"] = uiProxyConnAddrInfo ? boost::any(uiProxyConnAddrInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zkConnAddrs) {
      res["ZkConnAddrs"] = zkConnAddrs ? boost::any(zkConnAddrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("IsMultimod") != m.end() && !m["IsMultimod"].empty()) {
      isMultimod = make_shared<string>(boost::any_cast<string>(m["IsMultimod"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceConnAddrs") != m.end() && !m["ServiceConnAddrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceConnAddrs"].type()) {
        DescribeClusterConnectAddrsResponseBodyServiceConnAddrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceConnAddrs"]));
        serviceConnAddrs = make_shared<DescribeClusterConnectAddrsResponseBodyServiceConnAddrs>(model1);
      }
    }
    if (m.find("SlbConnAddrs") != m.end() && !m["SlbConnAddrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["SlbConnAddrs"].type()) {
        DescribeClusterConnectAddrsResponseBodySlbConnAddrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SlbConnAddrs"]));
        slbConnAddrs = make_shared<DescribeClusterConnectAddrsResponseBodySlbConnAddrs>(model1);
      }
    }
    if (m.find("ThriftConn") != m.end() && !m["ThriftConn"].empty()) {
      if (typeid(map<string, boost::any>) == m["ThriftConn"].type()) {
        DescribeClusterConnectAddrsResponseBodyThriftConn model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ThriftConn"]));
        thriftConn = make_shared<DescribeClusterConnectAddrsResponseBodyThriftConn>(model1);
      }
    }
    if (m.find("UiProxyConnAddrInfo") != m.end() && !m["UiProxyConnAddrInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UiProxyConnAddrInfo"].type()) {
        DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UiProxyConnAddrInfo"]));
        uiProxyConnAddrInfo = make_shared<DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo>(model1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZkConnAddrs") != m.end() && !m["ZkConnAddrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZkConnAddrs"].type()) {
        DescribeClusterConnectAddrsResponseBodyZkConnAddrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZkConnAddrs"]));
        zkConnAddrs = make_shared<DescribeClusterConnectAddrsResponseBodyZkConnAddrs>(model1);
      }
    }
  }


  virtual ~DescribeClusterConnectAddrsResponseBody() = default;
};
class DescribeClusterConnectAddrsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClusterConnectAddrsResponseBody> body{};

  DescribeClusterConnectAddrsResponse() {}

  explicit DescribeClusterConnectAddrsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterConnectAddrsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterConnectAddrsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterConnectAddrsResponse() = default;
};
class DescribeClusterListRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeClusterListRequestTag() {}

  explicit DescribeClusterListRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeClusterListRequestTag() = default;
};
class DescribeClusterListRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> dbType{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<string>> statusList{};
  shared_ptr<vector<DescribeClusterListRequestTag>> tag{};
  shared_ptr<string> zoneId{};

  DescribeClusterListRequest() {}

  explicit DescribeClusterListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
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
    if (statusList) {
      res["StatusList"] = boost::any(*statusList);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
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
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
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
    if (m.find("StatusList") != m.end() && !m["StatusList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StatusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StatusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeClusterListRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterListRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeClusterListRequestTag>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeClusterListRequest() = default;
};
class DescribeClusterListResponseBodyClusterListClusterTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeClusterListResponseBodyClusterListClusterTagsTag() {}

  explicit DescribeClusterListResponseBodyClusterListClusterTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeClusterListResponseBodyClusterListClusterTagsTag() = default;
};
class DescribeClusterListResponseBodyClusterListClusterTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterListResponseBodyClusterListClusterTagsTag>> tag{};

  DescribeClusterListResponseBodyClusterListClusterTags() {}

  explicit DescribeClusterListResponseBodyClusterListClusterTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeClusterListResponseBodyClusterListClusterTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterListResponseBodyClusterListClusterTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeClusterListResponseBodyClusterListClusterTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterListResponseBodyClusterListClusterTags() = default;
};
class DescribeClusterListResponseBodyClusterListCluster : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> coreDiskSize{};
  shared_ptr<string> coreDiskType{};
  shared_ptr<long> coreInstanceQuantity{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dbType{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> mainVersion{};
  shared_ptr<string> netType{};
  shared_ptr<string> payType{};
  shared_ptr<string> reason{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<DescribeClusterListResponseBodyClusterListClusterTags> tags{};
  shared_ptr<string> userId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeClusterListResponseBodyClusterListCluster() {}

  explicit DescribeClusterListResponseBodyClusterListCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (coreDiskSize) {
      res["CoreDiskSize"] = boost::any(*coreDiskSize);
    }
    if (coreDiskType) {
      res["CoreDiskType"] = boost::any(*coreDiskType);
    }
    if (coreInstanceQuantity) {
      res["CoreInstanceQuantity"] = boost::any(*coreInstanceQuantity);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (mainVersion) {
      res["MainVersion"] = boost::any(*mainVersion);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("CoreDiskSize") != m.end() && !m["CoreDiskSize"].empty()) {
      coreDiskSize = make_shared<string>(boost::any_cast<string>(m["CoreDiskSize"]));
    }
    if (m.find("CoreDiskType") != m.end() && !m["CoreDiskType"].empty()) {
      coreDiskType = make_shared<string>(boost::any_cast<string>(m["CoreDiskType"]));
    }
    if (m.find("CoreInstanceQuantity") != m.end() && !m["CoreInstanceQuantity"].empty()) {
      coreInstanceQuantity = make_shared<long>(boost::any_cast<long>(m["CoreInstanceQuantity"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MainVersion") != m.end() && !m["MainVersion"].empty()) {
      mainVersion = make_shared<string>(boost::any_cast<string>(m["MainVersion"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeClusterListResponseBodyClusterListClusterTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeClusterListResponseBodyClusterListClusterTags>(model1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeClusterListResponseBodyClusterListCluster() = default;
};
class DescribeClusterListResponseBodyClusterList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterListResponseBodyClusterListCluster>> cluster{};

  DescribeClusterListResponseBodyClusterList() {}

  explicit DescribeClusterListResponseBodyClusterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      vector<boost::any> temp1;
      for(auto item1:*cluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      if (typeid(vector<boost::any>) == m["Cluster"].type()) {
        vector<DescribeClusterListResponseBodyClusterListCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterListResponseBodyClusterListCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cluster = make_shared<vector<DescribeClusterListResponseBodyClusterListCluster>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterListResponseBodyClusterList() = default;
};
class DescribeClusterListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterListResponseBodyClusterList> clusterList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeClusterListResponseBody() {}

  explicit DescribeClusterListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterList) {
      res["ClusterList"] = clusterList ? boost::any(clusterList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ClusterList") != m.end() && !m["ClusterList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterList"].type()) {
        DescribeClusterListResponseBodyClusterList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterList"]));
        clusterList = make_shared<DescribeClusterListResponseBodyClusterList>(model1);
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


  virtual ~DescribeClusterListResponseBody() = default;
};
class DescribeClusterListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClusterListResponseBody> body{};

  DescribeClusterListResponse() {}

  explicit DescribeClusterListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterListResponse() = default;
};
class DescribeClusterModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DescribeClusterModelRequest() {}

  explicit DescribeClusterModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~DescribeClusterModelRequest() = default;
};
class DescribeClusterModelResponseBodyTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeClusterModelResponseBodyTagsTag() {}

  explicit DescribeClusterModelResponseBodyTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeClusterModelResponseBodyTagsTag() = default;
};
class DescribeClusterModelResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterModelResponseBodyTagsTag>> tag{};

  DescribeClusterModelResponseBodyTags() {}

  explicit DescribeClusterModelResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeClusterModelResponseBodyTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterModelResponseBodyTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeClusterModelResponseBodyTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterModelResponseBodyTags() = default;
};
class DescribeClusterModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> autoRenew{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> coldStorageStatus{};
  shared_ptr<long> coreDiskQuantity{};
  shared_ptr<string> coreDiskSize{};
  shared_ptr<string> coreDiskType{};
  shared_ptr<long> coreInstanceQuantity{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dbType{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> haType{};
  shared_ptr<string> hasUser{};
  shared_ptr<string> isMultimod{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> mainVersion{};
  shared_ptr<long> masterDiskSize{};
  shared_ptr<string> masterDiskType{};
  shared_ptr<string> masterInstanceType{};
  shared_ptr<string> minorVersion{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<DescribeClusterModelResponseBodyTags> tags{};
  shared_ptr<string> updateStatus{};
  shared_ptr<string> zoneId{};

  DescribeClusterModelResponseBody() {}

  explicit DescribeClusterModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (coldStorageStatus) {
      res["ColdStorageStatus"] = boost::any(*coldStorageStatus);
    }
    if (coreDiskQuantity) {
      res["CoreDiskQuantity"] = boost::any(*coreDiskQuantity);
    }
    if (coreDiskSize) {
      res["CoreDiskSize"] = boost::any(*coreDiskSize);
    }
    if (coreDiskType) {
      res["CoreDiskType"] = boost::any(*coreDiskType);
    }
    if (coreInstanceQuantity) {
      res["CoreInstanceQuantity"] = boost::any(*coreInstanceQuantity);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (haType) {
      res["HaType"] = boost::any(*haType);
    }
    if (hasUser) {
      res["HasUser"] = boost::any(*hasUser);
    }
    if (isMultimod) {
      res["IsMultimod"] = boost::any(*isMultimod);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (mainVersion) {
      res["MainVersion"] = boost::any(*mainVersion);
    }
    if (masterDiskSize) {
      res["MasterDiskSize"] = boost::any(*masterDiskSize);
    }
    if (masterDiskType) {
      res["MasterDiskType"] = boost::any(*masterDiskType);
    }
    if (masterInstanceType) {
      res["MasterInstanceType"] = boost::any(*masterInstanceType);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateStatus) {
      res["UpdateStatus"] = boost::any(*updateStatus);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("ColdStorageStatus") != m.end() && !m["ColdStorageStatus"].empty()) {
      coldStorageStatus = make_shared<string>(boost::any_cast<string>(m["ColdStorageStatus"]));
    }
    if (m.find("CoreDiskQuantity") != m.end() && !m["CoreDiskQuantity"].empty()) {
      coreDiskQuantity = make_shared<long>(boost::any_cast<long>(m["CoreDiskQuantity"]));
    }
    if (m.find("CoreDiskSize") != m.end() && !m["CoreDiskSize"].empty()) {
      coreDiskSize = make_shared<string>(boost::any_cast<string>(m["CoreDiskSize"]));
    }
    if (m.find("CoreDiskType") != m.end() && !m["CoreDiskType"].empty()) {
      coreDiskType = make_shared<string>(boost::any_cast<string>(m["CoreDiskType"]));
    }
    if (m.find("CoreInstanceQuantity") != m.end() && !m["CoreInstanceQuantity"].empty()) {
      coreInstanceQuantity = make_shared<long>(boost::any_cast<long>(m["CoreInstanceQuantity"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HaType") != m.end() && !m["HaType"].empty()) {
      haType = make_shared<string>(boost::any_cast<string>(m["HaType"]));
    }
    if (m.find("HasUser") != m.end() && !m["HasUser"].empty()) {
      hasUser = make_shared<string>(boost::any_cast<string>(m["HasUser"]));
    }
    if (m.find("IsMultimod") != m.end() && !m["IsMultimod"].empty()) {
      isMultimod = make_shared<string>(boost::any_cast<string>(m["IsMultimod"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MainVersion") != m.end() && !m["MainVersion"].empty()) {
      mainVersion = make_shared<string>(boost::any_cast<string>(m["MainVersion"]));
    }
    if (m.find("MasterDiskSize") != m.end() && !m["MasterDiskSize"].empty()) {
      masterDiskSize = make_shared<long>(boost::any_cast<long>(m["MasterDiskSize"]));
    }
    if (m.find("MasterDiskType") != m.end() && !m["MasterDiskType"].empty()) {
      masterDiskType = make_shared<string>(boost::any_cast<string>(m["MasterDiskType"]));
    }
    if (m.find("MasterInstanceType") != m.end() && !m["MasterInstanceType"].empty()) {
      masterInstanceType = make_shared<string>(boost::any_cast<string>(m["MasterInstanceType"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeClusterModelResponseBodyTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeClusterModelResponseBodyTags>(model1);
      }
    }
    if (m.find("UpdateStatus") != m.end() && !m["UpdateStatus"].empty()) {
      updateStatus = make_shared<string>(boost::any_cast<string>(m["UpdateStatus"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeClusterModelResponseBody() = default;
};
class DescribeClusterModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClusterModelResponseBody> body{};

  DescribeClusterModelResponse() {}

  explicit DescribeClusterModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterModelResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterModelResponse() = default;
};
class DescribeClusterWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DescribeClusterWhiteListRequest() {}

  explicit DescribeClusterWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~DescribeClusterWhiteListRequest() = default;
};
class DescribeClusterWhiteListResponseBodyGroupItems : public Darabonba::Model {
public:
  shared_ptr<vector<string>> whiteIp{};

  DescribeClusterWhiteListResponseBodyGroupItems() {}

  explicit DescribeClusterWhiteListResponseBodyGroupItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (whiteIp) {
      res["WhiteIp"] = boost::any(*whiteIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WhiteIp") != m.end() && !m["WhiteIp"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WhiteIp"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WhiteIp"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whiteIp = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeClusterWhiteListResponseBodyGroupItems() = default;
};
class DescribeClusterWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterWhiteListResponseBodyGroupItems> groupItems{};
  shared_ptr<string> requestId{};

  DescribeClusterWhiteListResponseBody() {}

  explicit DescribeClusterWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupItems) {
      res["GroupItems"] = groupItems ? boost::any(groupItems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupItems") != m.end() && !m["GroupItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["GroupItems"].type()) {
        DescribeClusterWhiteListResponseBodyGroupItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GroupItems"]));
        groupItems = make_shared<DescribeClusterWhiteListResponseBodyGroupItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClusterWhiteListResponseBody() = default;
};
class DescribeClusterWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClusterWhiteListResponseBody> body{};

  DescribeClusterWhiteListResponse() {}

  explicit DescribeClusterWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterWhiteListResponse() = default;
};
class DescribeColdStorageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DescribeColdStorageRequest() {}

  explicit DescribeColdStorageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~DescribeColdStorageRequest() = default;
};
class DescribeColdStorageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> coldStorageSize{};
  shared_ptr<string> coldStorageUsePercent{};
  shared_ptr<string> openStatus{};
  shared_ptr<string> payType{};
  shared_ptr<string> requestId{};

  DescribeColdStorageResponseBody() {}

  explicit DescribeColdStorageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (coldStorageSize) {
      res["ColdStorageSize"] = boost::any(*coldStorageSize);
    }
    if (coldStorageUsePercent) {
      res["ColdStorageUsePercent"] = boost::any(*coldStorageUsePercent);
    }
    if (openStatus) {
      res["OpenStatus"] = boost::any(*openStatus);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
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
    if (m.find("ColdStorageSize") != m.end() && !m["ColdStorageSize"].empty()) {
      coldStorageSize = make_shared<string>(boost::any_cast<string>(m["ColdStorageSize"]));
    }
    if (m.find("ColdStorageUsePercent") != m.end() && !m["ColdStorageUsePercent"].empty()) {
      coldStorageUsePercent = make_shared<string>(boost::any_cast<string>(m["ColdStorageUsePercent"]));
    }
    if (m.find("OpenStatus") != m.end() && !m["OpenStatus"].empty()) {
      openStatus = make_shared<string>(boost::any_cast<string>(m["OpenStatus"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeColdStorageResponseBody() = default;
};
class DescribeColdStorageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeColdStorageResponseBody> body{};

  DescribeColdStorageResponse() {}

  explicit DescribeColdStorageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeColdStorageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeColdStorageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeColdStorageResponse() = default;
};
class DescribeMultiModDbAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DescribeMultiModDbAttributeRequest() {}

  explicit DescribeMultiModDbAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~DescribeMultiModDbAttributeRequest() = default;
};
class DescribeMultiModDbAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  DescribeMultiModDbAttributeResponseBody() {}

  explicit DescribeMultiModDbAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMultiModDbAttributeResponseBody() = default;
};
class DescribeMultiModDbAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMultiModDbAttributeResponseBody> body{};

  DescribeMultiModDbAttributeResponse() {}

  explicit DescribeMultiModDbAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMultiModDbAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMultiModDbAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMultiModDbAttributeResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRdsVSwitchsResponseBody> body{};

  DescribeRdsVSwitchsResponse() {}

  explicit DescribeRdsVSwitchsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRdsVSwitchsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdsVSwitchsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdsVSwitchsResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
class DescribeServerlessInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeServerlessInstanceRequest() {}

  explicit DescribeServerlessInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeServerlessInstanceRequest() = default;
};
class DescribeServerlessInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> autoRenew{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> cuSize{};
  shared_ptr<string> diskSize{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> haType{};
  shared_ptr<string> hasUser{};
  shared_ptr<string> innerEndpoint{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> isDeletionProtection{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> mainVersion{};
  shared_ptr<string> outerEndpoint{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> reserverMaxQpsNum{};
  shared_ptr<string> reserverMinQpsNum{};
  shared_ptr<string> status{};
  shared_ptr<string> updateStatus{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeServerlessInstanceResponseBody() {}

  explicit DescribeServerlessInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (cuSize) {
      res["CuSize"] = boost::any(*cuSize);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (haType) {
      res["HaType"] = boost::any(*haType);
    }
    if (hasUser) {
      res["HasUser"] = boost::any(*hasUser);
    }
    if (innerEndpoint) {
      res["InnerEndpoint"] = boost::any(*innerEndpoint);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (isDeletionProtection) {
      res["IsDeletionProtection"] = boost::any(*isDeletionProtection);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (mainVersion) {
      res["MainVersion"] = boost::any(*mainVersion);
    }
    if (outerEndpoint) {
      res["OuterEndpoint"] = boost::any(*outerEndpoint);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (reserverMaxQpsNum) {
      res["ReserverMaxQpsNum"] = boost::any(*reserverMaxQpsNum);
    }
    if (reserverMinQpsNum) {
      res["ReserverMinQpsNum"] = boost::any(*reserverMinQpsNum);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateStatus) {
      res["UpdateStatus"] = boost::any(*updateStatus);
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
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CuSize") != m.end() && !m["CuSize"].empty()) {
      cuSize = make_shared<string>(boost::any_cast<string>(m["CuSize"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<string>(boost::any_cast<string>(m["DiskSize"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HaType") != m.end() && !m["HaType"].empty()) {
      haType = make_shared<string>(boost::any_cast<string>(m["HaType"]));
    }
    if (m.find("HasUser") != m.end() && !m["HasUser"].empty()) {
      hasUser = make_shared<string>(boost::any_cast<string>(m["HasUser"]));
    }
    if (m.find("InnerEndpoint") != m.end() && !m["InnerEndpoint"].empty()) {
      innerEndpoint = make_shared<string>(boost::any_cast<string>(m["InnerEndpoint"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IsDeletionProtection") != m.end() && !m["IsDeletionProtection"].empty()) {
      isDeletionProtection = make_shared<string>(boost::any_cast<string>(m["IsDeletionProtection"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MainVersion") != m.end() && !m["MainVersion"].empty()) {
      mainVersion = make_shared<string>(boost::any_cast<string>(m["MainVersion"]));
    }
    if (m.find("OuterEndpoint") != m.end() && !m["OuterEndpoint"].empty()) {
      outerEndpoint = make_shared<string>(boost::any_cast<string>(m["OuterEndpoint"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ReserverMaxQpsNum") != m.end() && !m["ReserverMaxQpsNum"].empty()) {
      reserverMaxQpsNum = make_shared<string>(boost::any_cast<string>(m["ReserverMaxQpsNum"]));
    }
    if (m.find("ReserverMinQpsNum") != m.end() && !m["ReserverMinQpsNum"].empty()) {
      reserverMinQpsNum = make_shared<string>(boost::any_cast<string>(m["ReserverMinQpsNum"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateStatus") != m.end() && !m["UpdateStatus"].empty()) {
      updateStatus = make_shared<string>(boost::any_cast<string>(m["UpdateStatus"]));
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


  virtual ~DescribeServerlessInstanceResponseBody() = default;
};
class DescribeServerlessInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServerlessInstanceResponseBody> body{};

  DescribeServerlessInstanceResponse() {}

  explicit DescribeServerlessInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeServerlessInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServerlessInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServerlessInstanceResponse() = default;
};
class DescribeSubscriptionInitializeProgressRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subscriptionId{};

  DescribeSubscriptionInitializeProgressRequest() {}

  explicit DescribeSubscriptionInitializeProgressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (subscriptionId) {
      res["SubscriptionId"] = boost::any(*subscriptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("SubscriptionId") != m.end() && !m["SubscriptionId"].empty()) {
      subscriptionId = make_shared<string>(boost::any_cast<string>(m["SubscriptionId"]));
    }
  }


  virtual ~DescribeSubscriptionInitializeProgressRequest() = default;
};
class DescribeSubscriptionInitializeProgressResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> finishTime{};
  shared_ptr<string> progress{};
  shared_ptr<string> status{};
  shared_ptr<string> subscriptionId{};

  DescribeSubscriptionInitializeProgressResponseBodyItems() {}

  explicit DescribeSubscriptionInitializeProgressResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subscriptionId) {
      res["SubscriptionId"] = boost::any(*subscriptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubscriptionId") != m.end() && !m["SubscriptionId"].empty()) {
      subscriptionId = make_shared<string>(boost::any_cast<string>(m["SubscriptionId"]));
    }
  }


  virtual ~DescribeSubscriptionInitializeProgressResponseBodyItems() = default;
};
class DescribeSubscriptionInitializeProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSubscriptionInitializeProgressResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeSubscriptionInitializeProgressResponseBody() {}

  explicit DescribeSubscriptionInitializeProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeSubscriptionInitializeProgressResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSubscriptionInitializeProgressResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSubscriptionInitializeProgressResponseBodyItems>>(expect1);
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


  virtual ~DescribeSubscriptionInitializeProgressResponseBody() = default;
};
class DescribeSubscriptionInitializeProgressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSubscriptionInitializeProgressResponseBody> body{};

  DescribeSubscriptionInitializeProgressResponse() {}

  explicit DescribeSubscriptionInitializeProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSubscriptionInitializeProgressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSubscriptionInitializeProgressResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSubscriptionInitializeProgressResponse() = default;
};
class DescribeSubscriptionPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> key{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sourceInstanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> subscriptionId{};

  DescribeSubscriptionPerformanceRequest() {}

  explicit DescribeSubscriptionPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
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
    if (sourceInstanceId) {
      res["SourceInstanceId"] = boost::any(*sourceInstanceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subscriptionId) {
      res["SubscriptionId"] = boost::any(*subscriptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
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
    if (m.find("SourceInstanceId") != m.end() && !m["SourceInstanceId"].empty()) {
      sourceInstanceId = make_shared<string>(boost::any_cast<string>(m["SourceInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SubscriptionId") != m.end() && !m["SubscriptionId"].empty()) {
      subscriptionId = make_shared<string>(boost::any_cast<string>(m["SubscriptionId"]));
    }
  }


  virtual ~DescribeSubscriptionPerformanceRequest() = default;
};
class DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> value{};

  DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue() {}

  explicit DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue() = default;
};
class DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue>> performanceValue{};

  DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues() {}

  explicit DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceValue) {
      vector<boost::any> temp1;
      for(auto item1:*performanceValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceValue") != m.end() && !m["PerformanceValue"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceValue"].type()) {
        vector<DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceValue = make_shared<vector<DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue>>(expect1);
      }
    }
  }


  virtual ~DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues() = default;
};
class DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues> performanceValues{};
  shared_ptr<string> unit{};
  shared_ptr<string> valueFormat{};

  DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey() {}

  explicit DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (performanceValues) {
      res["PerformanceValues"] = performanceValues ? boost::any(performanceValues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (valueFormat) {
      res["ValueFormat"] = boost::any(*valueFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("PerformanceValues") != m.end() && !m["PerformanceValues"].empty()) {
      if (typeid(map<string, boost::any>) == m["PerformanceValues"].type()) {
        DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PerformanceValues"]));
        performanceValues = make_shared<DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues>(model1);
      }
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("ValueFormat") != m.end() && !m["ValueFormat"].empty()) {
      valueFormat = make_shared<string>(boost::any_cast<string>(m["ValueFormat"]));
    }
  }


  virtual ~DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey() = default;
};
class DescribeSubscriptionPerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey>> performanceKey{};

  DescribeSubscriptionPerformanceResponseBodyPerformanceKeys() {}

  explicit DescribeSubscriptionPerformanceResponseBodyPerformanceKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceKey) {
      vector<boost::any> temp1;
      for(auto item1:*performanceKey){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceKey"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceKey") != m.end() && !m["PerformanceKey"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceKey"].type()) {
        vector<DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceKey"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceKey = make_shared<vector<DescribeSubscriptionPerformanceResponseBodyPerformanceKeysPerformanceKey>>(expect1);
      }
    }
  }


  virtual ~DescribeSubscriptionPerformanceResponseBodyPerformanceKeys() = default;
};
class DescribeSubscriptionPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<DescribeSubscriptionPerformanceResponseBodyPerformanceKeys> performanceKeys{};
  shared_ptr<string> replicaId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeSubscriptionPerformanceResponseBody() {}

  explicit DescribeSubscriptionPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (performanceKeys) {
      res["PerformanceKeys"] = performanceKeys ? boost::any(performanceKeys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (replicaId) {
      res["ReplicaId"] = boost::any(*replicaId);
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
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PerformanceKeys") != m.end() && !m["PerformanceKeys"].empty()) {
      if (typeid(map<string, boost::any>) == m["PerformanceKeys"].type()) {
        DescribeSubscriptionPerformanceResponseBodyPerformanceKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PerformanceKeys"]));
        performanceKeys = make_shared<DescribeSubscriptionPerformanceResponseBodyPerformanceKeys>(model1);
      }
    }
    if (m.find("ReplicaId") != m.end() && !m["ReplicaId"].empty()) {
      replicaId = make_shared<string>(boost::any_cast<string>(m["ReplicaId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeSubscriptionPerformanceResponseBody() = default;
};
class DescribeSubscriptionPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSubscriptionPerformanceResponseBody> body{};

  DescribeSubscriptionPerformanceResponse() {}

  explicit DescribeSubscriptionPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSubscriptionPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSubscriptionPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSubscriptionPerformanceResponse() = default;
};
class DescribeSubscriptionPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeSubscriptionPermissionRequest() {}

  explicit DescribeSubscriptionPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DescribeSubscriptionPermissionRequest() = default;
};
class DescribeSubscriptionPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribeSubscriptionPermissionResponseBody() {}

  explicit DescribeSubscriptionPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSubscriptionPermissionResponseBody() = default;
};
class DescribeSubscriptionPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSubscriptionPermissionResponseBody> body{};

  DescribeSubscriptionPermissionResponse() {}

  explicit DescribeSubscriptionPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSubscriptionPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSubscriptionPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSubscriptionPermissionResponse() = default;
};
class DescribeSubscriptionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subscriptionId{};

  DescribeSubscriptionsRequest() {}

  explicit DescribeSubscriptionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (subscriptionId) {
      res["SubscriptionId"] = boost::any(*subscriptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("SubscriptionId") != m.end() && !m["SubscriptionId"].empty()) {
      subscriptionId = make_shared<string>(boost::any_cast<string>(m["SubscriptionId"]));
    }
  }


  virtual ~DescribeSubscriptionsRequest() = default;
};
class DescribeSubscriptionsResponseBodySubscriptionsDBInstances : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> role{};

  DescribeSubscriptionsResponseBodySubscriptionsDBInstances() {}

  explicit DescribeSubscriptionsResponseBodySubscriptionsDBInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (role) {
      res["Role"] = boost::any(*role);
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
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~DescribeSubscriptionsResponseBodySubscriptionsDBInstances() = default;
};
class DescribeSubscriptionsResponseBodySubscriptions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSubscriptionsResponseBodySubscriptionsDBInstances>> DBInstances{};
  shared_ptr<string> mapping{};
  shared_ptr<string> subscriptionDescription{};
  shared_ptr<string> subscriptionId{};
  shared_ptr<string> subscriptionStatus{};
  shared_ptr<string> subscriptionType{};

  DescribeSubscriptionsResponseBodySubscriptions() {}

  explicit DescribeSubscriptionsResponseBodySubscriptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (mapping) {
      res["Mapping"] = boost::any(*mapping);
    }
    if (subscriptionDescription) {
      res["SubscriptionDescription"] = boost::any(*subscriptionDescription);
    }
    if (subscriptionId) {
      res["SubscriptionId"] = boost::any(*subscriptionId);
    }
    if (subscriptionStatus) {
      res["SubscriptionStatus"] = boost::any(*subscriptionStatus);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstances") != m.end() && !m["DBInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstances"].type()) {
        vector<DescribeSubscriptionsResponseBodySubscriptionsDBInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSubscriptionsResponseBodySubscriptionsDBInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstances = make_shared<vector<DescribeSubscriptionsResponseBodySubscriptionsDBInstances>>(expect1);
      }
    }
    if (m.find("Mapping") != m.end() && !m["Mapping"].empty()) {
      mapping = make_shared<string>(boost::any_cast<string>(m["Mapping"]));
    }
    if (m.find("SubscriptionDescription") != m.end() && !m["SubscriptionDescription"].empty()) {
      subscriptionDescription = make_shared<string>(boost::any_cast<string>(m["SubscriptionDescription"]));
    }
    if (m.find("SubscriptionId") != m.end() && !m["SubscriptionId"].empty()) {
      subscriptionId = make_shared<string>(boost::any_cast<string>(m["SubscriptionId"]));
    }
    if (m.find("SubscriptionStatus") != m.end() && !m["SubscriptionStatus"].empty()) {
      subscriptionStatus = make_shared<string>(boost::any_cast<string>(m["SubscriptionStatus"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
  }


  virtual ~DescribeSubscriptionsResponseBodySubscriptions() = default;
};
class DescribeSubscriptionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSubscriptionsResponseBodySubscriptions>> subscriptions{};

  DescribeSubscriptionsResponseBody() {}

  explicit DescribeSubscriptionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subscriptions) {
      vector<boost::any> temp1;
      for(auto item1:*subscriptions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Subscriptions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Subscriptions") != m.end() && !m["Subscriptions"].empty()) {
      if (typeid(vector<boost::any>) == m["Subscriptions"].type()) {
        vector<DescribeSubscriptionsResponseBodySubscriptions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Subscriptions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSubscriptionsResponseBodySubscriptions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subscriptions = make_shared<vector<DescribeSubscriptionsResponseBodySubscriptions>>(expect1);
      }
    }
  }


  virtual ~DescribeSubscriptionsResponseBody() = default;
};
class DescribeSubscriptionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSubscriptionsResponseBody> body{};

  DescribeSubscriptionsResponse() {}

  explicit DescribeSubscriptionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSubscriptionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSubscriptionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSubscriptionsResponse() = default;
};
class EnableServerlessPublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  EnableServerlessPublicConnectionRequest() {}

  explicit EnableServerlessPublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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


  virtual ~EnableServerlessPublicConnectionRequest() = default;
};
class EnableServerlessPublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableServerlessPublicConnectionResponseBody() {}

  explicit EnableServerlessPublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableServerlessPublicConnectionResponseBody() = default;
};
class EnableServerlessPublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableServerlessPublicConnectionResponseBody> body{};

  EnableServerlessPublicConnectionResponse() {}

  explicit EnableServerlessPublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableServerlessPublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableServerlessPublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~EnableServerlessPublicConnectionResponse() = default;
};
class GetMultimodeCmsUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  GetMultimodeCmsUrlRequest() {}

  explicit GetMultimodeCmsUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~GetMultimodeCmsUrlRequest() = default;
};
class GetMultimodeCmsUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> multimodCmsUrl{};
  shared_ptr<string> requestId{};

  GetMultimodeCmsUrlResponseBody() {}

  explicit GetMultimodeCmsUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (multimodCmsUrl) {
      res["MultimodCmsUrl"] = boost::any(*multimodCmsUrl);
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
    if (m.find("MultimodCmsUrl") != m.end() && !m["MultimodCmsUrl"].empty()) {
      multimodCmsUrl = make_shared<string>(boost::any_cast<string>(m["MultimodCmsUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMultimodeCmsUrlResponseBody() = default;
};
class GetMultimodeCmsUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMultimodeCmsUrlResponseBody> body{};

  GetMultimodeCmsUrlResponse() {}

  explicit GetMultimodeCmsUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMultimodeCmsUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMultimodeCmsUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetMultimodeCmsUrlResponse() = default;
};
class ListClusterServiceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListClusterServiceConfigRequest() {}

  explicit ListClusterServiceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~ListClusterServiceConfigRequest() = default;
};
class ListClusterServiceConfigResponseBodyConfigListConfig : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> needRestart{};
  shared_ptr<string> runningValue{};
  shared_ptr<string> unit{};
  shared_ptr<string> valueRange{};

  ListClusterServiceConfigResponseBodyConfigListConfig() {}

  explicit ListClusterServiceConfigResponseBodyConfigListConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (needRestart) {
      res["NeedRestart"] = boost::any(*needRestart);
    }
    if (runningValue) {
      res["RunningValue"] = boost::any(*runningValue);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (valueRange) {
      res["ValueRange"] = boost::any(*valueRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NeedRestart") != m.end() && !m["NeedRestart"].empty()) {
      needRestart = make_shared<string>(boost::any_cast<string>(m["NeedRestart"]));
    }
    if (m.find("RunningValue") != m.end() && !m["RunningValue"].empty()) {
      runningValue = make_shared<string>(boost::any_cast<string>(m["RunningValue"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("ValueRange") != m.end() && !m["ValueRange"].empty()) {
      valueRange = make_shared<string>(boost::any_cast<string>(m["ValueRange"]));
    }
  }


  virtual ~ListClusterServiceConfigResponseBodyConfigListConfig() = default;
};
class ListClusterServiceConfigResponseBodyConfigList : public Darabonba::Model {
public:
  shared_ptr<vector<ListClusterServiceConfigResponseBodyConfigListConfig>> config{};

  ListClusterServiceConfigResponseBodyConfigList() {}

  explicit ListClusterServiceConfigResponseBodyConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      vector<boost::any> temp1;
      for(auto item1:*config){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Config"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      if (typeid(vector<boost::any>) == m["Config"].type()) {
        vector<ListClusterServiceConfigResponseBodyConfigListConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterServiceConfigResponseBodyConfigListConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        config = make_shared<vector<ListClusterServiceConfigResponseBodyConfigListConfig>>(expect1);
      }
    }
  }


  virtual ~ListClusterServiceConfigResponseBodyConfigList() = default;
};
class ListClusterServiceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<ListClusterServiceConfigResponseBodyConfigList> configList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  ListClusterServiceConfigResponseBody() {}

  explicit ListClusterServiceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (configList) {
      res["ConfigList"] = configList ? boost::any(configList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ConfigList") != m.end() && !m["ConfigList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigList"].type()) {
        ListClusterServiceConfigResponseBodyConfigList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigList"]));
        configList = make_shared<ListClusterServiceConfigResponseBodyConfigList>(model1);
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


  virtual ~ListClusterServiceConfigResponseBody() = default;
};
class ListClusterServiceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClusterServiceConfigResponseBody> body{};

  ListClusterServiceConfigResponse() {}

  explicit ListClusterServiceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClusterServiceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterServiceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterServiceConfigResponse() = default;
};
class ListClusterServiceConfigHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  ListClusterServiceConfigHistoryRequest() {}

  explicit ListClusterServiceConfigHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListClusterServiceConfigHistoryRequest() = default;
};
class ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> effective{};
  shared_ptr<string> name{};
  shared_ptr<string> newValue{};
  shared_ptr<string> oldValue{};

  ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory() {}

  explicit ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (effective) {
      res["Effective"] = boost::any(*effective);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (newValue) {
      res["NewValue"] = boost::any(*newValue);
    }
    if (oldValue) {
      res["OldValue"] = boost::any(*oldValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Effective") != m.end() && !m["Effective"].empty()) {
      effective = make_shared<string>(boost::any_cast<string>(m["Effective"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NewValue") != m.end() && !m["NewValue"].empty()) {
      newValue = make_shared<string>(boost::any_cast<string>(m["NewValue"]));
    }
    if (m.find("OldValue") != m.end() && !m["OldValue"].empty()) {
      oldValue = make_shared<string>(boost::any_cast<string>(m["OldValue"]));
    }
  }


  virtual ~ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory() = default;
};
class ListClusterServiceConfigHistoryResponseBodyConfigHistoryList : public Darabonba::Model {
public:
  shared_ptr<vector<ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory>> configHistory{};

  ListClusterServiceConfigHistoryResponseBodyConfigHistoryList() {}

  explicit ListClusterServiceConfigHistoryResponseBodyConfigHistoryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configHistory) {
      vector<boost::any> temp1;
      for(auto item1:*configHistory){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigHistory"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigHistory") != m.end() && !m["ConfigHistory"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigHistory"].type()) {
        vector<ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigHistory"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configHistory = make_shared<vector<ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory>>(expect1);
      }
    }
  }


  virtual ~ListClusterServiceConfigHistoryResponseBodyConfigHistoryList() = default;
};
class ListClusterServiceConfigHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListClusterServiceConfigHistoryResponseBodyConfigHistoryList> configHistoryList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  ListClusterServiceConfigHistoryResponseBody() {}

  explicit ListClusterServiceConfigHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configHistoryList) {
      res["ConfigHistoryList"] = configHistoryList ? boost::any(configHistoryList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ConfigHistoryList") != m.end() && !m["ConfigHistoryList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigHistoryList"].type()) {
        ListClusterServiceConfigHistoryResponseBodyConfigHistoryList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigHistoryList"]));
        configHistoryList = make_shared<ListClusterServiceConfigHistoryResponseBodyConfigHistoryList>(model1);
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


  virtual ~ListClusterServiceConfigHistoryResponseBody() = default;
};
class ListClusterServiceConfigHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClusterServiceConfigHistoryResponseBody> body{};

  ListClusterServiceConfigHistoryResponse() {}

  explicit ListClusterServiceConfigHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClusterServiceConfigHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterServiceConfigHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterServiceConfigHistoryResponse() = default;
};
class ListHbaseInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ListHbaseInstancesRequest() {}

  explicit ListHbaseInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListHbaseInstancesRequest() = default;
};
class ListHbaseInstancesResponseBodyInstancesInstance : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<bool> isDefault{};

  ListHbaseInstancesResponseBodyInstancesInstance() {}

  explicit ListHbaseInstancesResponseBodyInstancesInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
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
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
  }


  virtual ~ListHbaseInstancesResponseBodyInstancesInstance() = default;
};
class ListHbaseInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<ListHbaseInstancesResponseBodyInstancesInstance>> instance{};

  ListHbaseInstancesResponseBodyInstances() {}

  explicit ListHbaseInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListHbaseInstancesResponseBodyInstancesInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHbaseInstancesResponseBodyInstancesInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<ListHbaseInstancesResponseBodyInstancesInstance>>(expect1);
      }
    }
  }


  virtual ~ListHbaseInstancesResponseBodyInstances() = default;
};
class ListHbaseInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListHbaseInstancesResponseBodyInstances> instances{};
  shared_ptr<string> requestId{};

  ListHbaseInstancesResponseBody() {}

  explicit ListHbaseInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      res["Instances"] = instances ? boost::any(instances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instances"].type()) {
        ListHbaseInstancesResponseBodyInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instances"]));
        instances = make_shared<ListHbaseInstancesResponseBodyInstances>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListHbaseInstancesResponseBody() = default;
};
class ListHbaseInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHbaseInstancesResponseBody> body{};

  ListHbaseInstancesResponse() {}

  explicit ListHbaseInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHbaseInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHbaseInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListHbaseInstancesResponse() = default;
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
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
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
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
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
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ModifyBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> preferredBackupEndTimeUTC{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupStartTimeUTC{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  ModifyBackupPolicyRequest() {}

  explicit ModifyBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (preferredBackupEndTimeUTC) {
      res["PreferredBackupEndTimeUTC"] = boost::any(*preferredBackupEndTimeUTC);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupStartTimeUTC) {
      res["PreferredBackupStartTimeUTC"] = boost::any(*preferredBackupStartTimeUTC);
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
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PreferredBackupEndTimeUTC") != m.end() && !m["PreferredBackupEndTimeUTC"].empty()) {
      preferredBackupEndTimeUTC = make_shared<string>(boost::any_cast<string>(m["PreferredBackupEndTimeUTC"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupStartTimeUTC") != m.end() && !m["PreferredBackupStartTimeUTC"].empty()) {
      preferredBackupStartTimeUTC = make_shared<string>(boost::any_cast<string>(m["PreferredBackupStartTimeUTC"]));
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
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
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
class ModifyClusterNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  ModifyClusterNameRequest() {}

  explicit ModifyClusterNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
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


  virtual ~ModifyClusterNameRequest() = default;
};
class ModifyClusterNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyClusterNameResponseBody() {}

  explicit ModifyClusterNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyClusterNameResponseBody() = default;
};
class ModifyClusterNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyClusterNameResponseBody> body{};

  ModifyClusterNameResponse() {}

  explicit ModifyClusterNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyClusterNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterNameResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterNameResponse() = default;
};
class ModifyClusterNetTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> netType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ModifyClusterNetTypeRequest() {}

  explicit ModifyClusterNetTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
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


  virtual ~ModifyClusterNetTypeRequest() = default;
};
class ModifyClusterNetTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyClusterNetTypeResponseBody() {}

  explicit ModifyClusterNetTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyClusterNetTypeResponseBody() = default;
};
class ModifyClusterNetTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyClusterNetTypeResponseBody> body{};

  ModifyClusterNetTypeResponse() {}

  explicit ModifyClusterNetTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyClusterNetTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterNetTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterNetTypeResponse() = default;
};
class ModifyClusterSecurityIpListRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityIpList{};
  shared_ptr<string> zoneId{};

  ModifyClusterSecurityIpListRequest() {}

  explicit ModifyClusterSecurityIpListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (securityIpList) {
      res["SecurityIpList"] = boost::any(*securityIpList);
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
    if (m.find("SecurityIpList") != m.end() && !m["SecurityIpList"].empty()) {
      securityIpList = make_shared<string>(boost::any_cast<string>(m["SecurityIpList"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ModifyClusterSecurityIpListRequest() = default;
};
class ModifyClusterSecurityIpListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyClusterSecurityIpListResponseBody() {}

  explicit ModifyClusterSecurityIpListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyClusterSecurityIpListResponseBody() = default;
};
class ModifyClusterSecurityIpListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyClusterSecurityIpListResponseBody> body{};

  ModifyClusterSecurityIpListResponse() {}

  explicit ModifyClusterSecurityIpListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyClusterSecurityIpListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterSecurityIpListResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterSecurityIpListResponse() = default;
};
class ModifyClusterServiceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<bool> restart{};
  shared_ptr<string> value{};
  shared_ptr<string> zoneId{};

  ModifyClusterServiceConfigRequest() {}

  explicit ModifyClusterServiceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
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
    if (restart) {
      res["Restart"] = boost::any(*restart);
    }
    if (value) {
      res["Value"] = boost::any(*value);
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
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
    if (m.find("Restart") != m.end() && !m["Restart"].empty()) {
      restart = make_shared<bool>(boost::any_cast<bool>(m["Restart"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ModifyClusterServiceConfigRequest() = default;
};
class ModifyClusterServiceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyClusterServiceConfigResponseBody() {}

  explicit ModifyClusterServiceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyClusterServiceConfigResponseBody() = default;
};
class ModifyClusterServiceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyClusterServiceConfigResponseBody> body{};

  ModifyClusterServiceConfigResponse() {}

  explicit ModifyClusterServiceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyClusterServiceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterServiceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterServiceConfigResponse() = default;
};
class ModifyHasRootPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> hasPassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  ModifyHasRootPasswordRequest() {}

  explicit ModifyHasRootPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hasPassword) {
      res["HasPassword"] = boost::any(*hasPassword);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HasPassword") != m.end() && !m["HasPassword"].empty()) {
      hasPassword = make_shared<string>(boost::any_cast<string>(m["HasPassword"]));
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


  virtual ~ModifyHasRootPasswordRequest() = default;
};
class ModifyHasRootPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyHasRootPasswordResponseBody() {}

  explicit ModifyHasRootPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyHasRootPasswordResponseBody() = default;
};
class ModifyHasRootPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyHasRootPasswordResponseBody> body{};

  ModifyHasRootPasswordResponse() {}

  explicit ModifyHasRootPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyHasRootPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyHasRootPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyHasRootPasswordResponse() = default;
};
class ModifyRestartClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> components{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  ModifyRestartClusterRequest() {}

  explicit ModifyRestartClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (components) {
      res["Components"] = boost::any(*components);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      components = make_shared<string>(boost::any_cast<string>(m["Components"]));
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


  virtual ~ModifyRestartClusterRequest() = default;
};
class ModifyRestartClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyRestartClusterResponseBody() {}

  explicit ModifyRestartClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyRestartClusterResponseBody() = default;
};
class ModifyRestartClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyRestartClusterResponseBody> body{};

  ModifyRestartClusterResponse() {}

  explicit ModifyRestartClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyRestartClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRestartClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRestartClusterResponse() = default;
};
class ModifyRollbackHasForHbaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  ModifyRollbackHasForHbaseRequest() {}

  explicit ModifyRollbackHasForHbaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~ModifyRollbackHasForHbaseRequest() = default;
};
class ModifyRollbackHasForHbaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyRollbackHasForHbaseResponseBody() {}

  explicit ModifyRollbackHasForHbaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyRollbackHasForHbaseResponseBody() = default;
};
class ModifyRollbackHasForHbaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyRollbackHasForHbaseResponseBody> body{};

  ModifyRollbackHasForHbaseResponse() {}

  explicit ModifyRollbackHasForHbaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyRollbackHasForHbaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRollbackHasForHbaseResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRollbackHasForHbaseResponse() = default;
};
class ModifySubscriptionDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subscriptionDescription{};
  shared_ptr<string> subscriptionId{};

  ModifySubscriptionDescriptionRequest() {}

  explicit ModifySubscriptionDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (subscriptionDescription) {
      res["SubscriptionDescription"] = boost::any(*subscriptionDescription);
    }
    if (subscriptionId) {
      res["SubscriptionId"] = boost::any(*subscriptionId);
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
    if (m.find("SubscriptionDescription") != m.end() && !m["SubscriptionDescription"].empty()) {
      subscriptionDescription = make_shared<string>(boost::any_cast<string>(m["SubscriptionDescription"]));
    }
    if (m.find("SubscriptionId") != m.end() && !m["SubscriptionId"].empty()) {
      subscriptionId = make_shared<string>(boost::any_cast<string>(m["SubscriptionId"]));
    }
  }


  virtual ~ModifySubscriptionDescriptionRequest() = default;
};
class ModifySubscriptionDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySubscriptionDescriptionResponseBody() {}

  explicit ModifySubscriptionDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySubscriptionDescriptionResponseBody() = default;
};
class ModifySubscriptionDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySubscriptionDescriptionResponseBody> body{};

  ModifySubscriptionDescriptionResponse() {}

  explicit ModifySubscriptionDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySubscriptionDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySubscriptionDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySubscriptionDescriptionResponse() = default;
};
class ModifySubscriptionMappingRequest : public Darabonba::Model {
public:
  shared_ptr<string> mapping{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subscriptionId{};

  ModifySubscriptionMappingRequest() {}

  explicit ModifySubscriptionMappingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mapping) {
      res["Mapping"] = boost::any(*mapping);
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
    if (subscriptionId) {
      res["SubscriptionId"] = boost::any(*subscriptionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mapping") != m.end() && !m["Mapping"].empty()) {
      mapping = make_shared<string>(boost::any_cast<string>(m["Mapping"]));
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
    if (m.find("SubscriptionId") != m.end() && !m["SubscriptionId"].empty()) {
      subscriptionId = make_shared<string>(boost::any_cast<string>(m["SubscriptionId"]));
    }
  }


  virtual ~ModifySubscriptionMappingRequest() = default;
};
class ModifySubscriptionMappingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySubscriptionMappingResponseBody() {}

  explicit ModifySubscriptionMappingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySubscriptionMappingResponseBody() = default;
};
class ModifySubscriptionMappingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySubscriptionMappingResponseBody> body{};

  ModifySubscriptionMappingResponse() {}

  explicit ModifySubscriptionMappingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySubscriptionMappingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySubscriptionMappingResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySubscriptionMappingResponse() = default;
};
class ModifySubscriptionPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> status{};

  ModifySubscriptionPermissionRequest() {}

  explicit ModifySubscriptionPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ModifySubscriptionPermissionRequest() = default;
};
class ModifySubscriptionPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  ModifySubscriptionPermissionResponseBody() {}

  explicit ModifySubscriptionPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ModifySubscriptionPermissionResponseBody() = default;
};
class ModifySubscriptionPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySubscriptionPermissionResponseBody> body{};

  ModifySubscriptionPermissionResponse() {}

  explicit ModifySubscriptionPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySubscriptionPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySubscriptionPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySubscriptionPermissionResponse() = default;
};
class ModifyUIProxyAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  ModifyUIProxyAccountPasswordRequest() {}

  explicit ModifyUIProxyAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~ModifyUIProxyAccountPasswordRequest() = default;
};
class ModifyUIProxyAccountPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUIProxyAccountPasswordResponseBody() {}

  explicit ModifyUIProxyAccountPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUIProxyAccountPasswordResponseBody() = default;
};
class ModifyUIProxyAccountPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyUIProxyAccountPasswordResponseBody> body{};

  ModifyUIProxyAccountPasswordResponse() {}

  explicit ModifyUIProxyAccountPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyUIProxyAccountPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUIProxyAccountPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUIProxyAccountPasswordResponse() = default;
};
class ModifyUpgradeToHasForHbaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> hasPassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  ModifyUpgradeToHasForHbaseRequest() {}

  explicit ModifyUpgradeToHasForHbaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hasPassword) {
      res["HasPassword"] = boost::any(*hasPassword);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HasPassword") != m.end() && !m["HasPassword"].empty()) {
      hasPassword = make_shared<string>(boost::any_cast<string>(m["HasPassword"]));
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


  virtual ~ModifyUpgradeToHasForHbaseRequest() = default;
};
class ModifyUpgradeToHasForHbaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUpgradeToHasForHbaseResponseBody() {}

  explicit ModifyUpgradeToHasForHbaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUpgradeToHasForHbaseResponseBody() = default;
};
class ModifyUpgradeToHasForHbaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyUpgradeToHasForHbaseResponseBody> body{};

  ModifyUpgradeToHasForHbaseResponse() {}

  explicit ModifyUpgradeToHasForHbaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyUpgradeToHasForHbaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUpgradeToHasForHbaseResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUpgradeToHasForHbaseResponse() = default;
};
class MultimodAddComponentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> components{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  MultimodAddComponentsRequest() {}

  explicit MultimodAddComponentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (components) {
      res["Components"] = boost::any(*components);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      components = make_shared<string>(boost::any_cast<string>(m["Components"]));
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


  virtual ~MultimodAddComponentsRequest() = default;
};
class MultimodAddComponentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MultimodAddComponentsResponseBody() {}

  explicit MultimodAddComponentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MultimodAddComponentsResponseBody() = default;
};
class MultimodAddComponentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MultimodAddComponentsResponseBody> body{};

  MultimodAddComponentsResponse() {}

  explicit MultimodAddComponentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MultimodAddComponentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MultimodAddComponentsResponseBody>(model1);
      }
    }
  }


  virtual ~MultimodAddComponentsResponse() = default;
};
class OpenBackupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  OpenBackupRequest() {}

  explicit OpenBackupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
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
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~OpenBackupRequest() = default;
};
class OpenBackupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OpenBackupResponseBody() {}

  explicit OpenBackupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenBackupResponseBody() = default;
};
class OpenBackupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenBackupResponseBody> body{};

  OpenBackupResponse() {}

  explicit OpenBackupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenBackupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenBackupResponseBody>(model1);
      }
    }
  }


  virtual ~OpenBackupResponse() = default;
};
class QueryHBaseHaDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  QueryHBaseHaDBRequest() {}

  explicit QueryHBaseHaDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~QueryHBaseHaDBRequest() = default;
};
class QueryHBaseHaDBResponseBodyClusterListCluster : public Darabonba::Model {
public:
  shared_ptr<string> activeName{};
  shared_ptr<string> bdsName{};
  shared_ptr<string> haName{};
  shared_ptr<string> standbyName{};

  QueryHBaseHaDBResponseBodyClusterListCluster() {}

  explicit QueryHBaseHaDBResponseBodyClusterListCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeName) {
      res["ActiveName"] = boost::any(*activeName);
    }
    if (bdsName) {
      res["BdsName"] = boost::any(*bdsName);
    }
    if (haName) {
      res["HaName"] = boost::any(*haName);
    }
    if (standbyName) {
      res["StandbyName"] = boost::any(*standbyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveName") != m.end() && !m["ActiveName"].empty()) {
      activeName = make_shared<string>(boost::any_cast<string>(m["ActiveName"]));
    }
    if (m.find("BdsName") != m.end() && !m["BdsName"].empty()) {
      bdsName = make_shared<string>(boost::any_cast<string>(m["BdsName"]));
    }
    if (m.find("HaName") != m.end() && !m["HaName"].empty()) {
      haName = make_shared<string>(boost::any_cast<string>(m["HaName"]));
    }
    if (m.find("StandbyName") != m.end() && !m["StandbyName"].empty()) {
      standbyName = make_shared<string>(boost::any_cast<string>(m["StandbyName"]));
    }
  }


  virtual ~QueryHBaseHaDBResponseBodyClusterListCluster() = default;
};
class QueryHBaseHaDBResponseBodyClusterList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryHBaseHaDBResponseBodyClusterListCluster>> cluster{};

  QueryHBaseHaDBResponseBodyClusterList() {}

  explicit QueryHBaseHaDBResponseBodyClusterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      vector<boost::any> temp1;
      for(auto item1:*cluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      if (typeid(vector<boost::any>) == m["Cluster"].type()) {
        vector<QueryHBaseHaDBResponseBodyClusterListCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryHBaseHaDBResponseBodyClusterListCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cluster = make_shared<vector<QueryHBaseHaDBResponseBodyClusterListCluster>>(expect1);
      }
    }
  }


  virtual ~QueryHBaseHaDBResponseBodyClusterList() = default;
};
class QueryHBaseHaDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryHBaseHaDBResponseBodyClusterList> clusterList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryHBaseHaDBResponseBody() {}

  explicit QueryHBaseHaDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterList) {
      res["ClusterList"] = clusterList ? boost::any(clusterList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ClusterList") != m.end() && !m["ClusterList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterList"].type()) {
        QueryHBaseHaDBResponseBodyClusterList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterList"]));
        clusterList = make_shared<QueryHBaseHaDBResponseBodyClusterList>(model1);
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


  virtual ~QueryHBaseHaDBResponseBody() = default;
};
class QueryHBaseHaDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryHBaseHaDBResponseBody> body{};

  QueryHBaseHaDBResponse() {}

  explicit QueryHBaseHaDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryHBaseHaDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryHBaseHaDBResponseBody>(model1);
      }
    }
  }


  virtual ~QueryHBaseHaDBResponse() = default;
};
class QuerySparkRelateHBaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  QuerySparkRelateHBaseRequest() {}

  explicit QuerySparkRelateHBaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~QuerySparkRelateHBaseRequest() = default;
};
class QuerySparkRelateHBaseResponseBodyClusterListCluster : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> coreDiskType{};
  shared_ptr<long> coreInstanceQuantity{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dbType{};
  shared_ptr<string> expireTime{};
  shared_ptr<bool> isRelated{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> mainVersion{};
  shared_ptr<string> netType{};
  shared_ptr<string> payType{};
  shared_ptr<string> reason{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> userId{};
  shared_ptr<string> zoneId{};

  QuerySparkRelateHBaseResponseBodyClusterListCluster() {}

  explicit QuerySparkRelateHBaseResponseBodyClusterListCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (coreDiskType) {
      res["CoreDiskType"] = boost::any(*coreDiskType);
    }
    if (coreInstanceQuantity) {
      res["CoreInstanceQuantity"] = boost::any(*coreInstanceQuantity);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (isRelated) {
      res["IsRelated"] = boost::any(*isRelated);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (mainVersion) {
      res["MainVersion"] = boost::any(*mainVersion);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("CoreDiskType") != m.end() && !m["CoreDiskType"].empty()) {
      coreDiskType = make_shared<string>(boost::any_cast<string>(m["CoreDiskType"]));
    }
    if (m.find("CoreInstanceQuantity") != m.end() && !m["CoreInstanceQuantity"].empty()) {
      coreInstanceQuantity = make_shared<long>(boost::any_cast<long>(m["CoreInstanceQuantity"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("IsRelated") != m.end() && !m["IsRelated"].empty()) {
      isRelated = make_shared<bool>(boost::any_cast<bool>(m["IsRelated"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MainVersion") != m.end() && !m["MainVersion"].empty()) {
      mainVersion = make_shared<string>(boost::any_cast<string>(m["MainVersion"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~QuerySparkRelateHBaseResponseBodyClusterListCluster() = default;
};
class QuerySparkRelateHBaseResponseBodyClusterList : public Darabonba::Model {
public:
  shared_ptr<vector<QuerySparkRelateHBaseResponseBodyClusterListCluster>> cluster{};

  QuerySparkRelateHBaseResponseBodyClusterList() {}

  explicit QuerySparkRelateHBaseResponseBodyClusterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      vector<boost::any> temp1;
      for(auto item1:*cluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      if (typeid(vector<boost::any>) == m["Cluster"].type()) {
        vector<QuerySparkRelateHBaseResponseBodyClusterListCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySparkRelateHBaseResponseBodyClusterListCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cluster = make_shared<vector<QuerySparkRelateHBaseResponseBodyClusterListCluster>>(expect1);
      }
    }
  }


  virtual ~QuerySparkRelateHBaseResponseBodyClusterList() = default;
};
class QuerySparkRelateHBaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<QuerySparkRelateHBaseResponseBodyClusterList> clusterList{};
  shared_ptr<string> requestId{};

  QuerySparkRelateHBaseResponseBody() {}

  explicit QuerySparkRelateHBaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterList) {
      res["ClusterList"] = clusterList ? boost::any(clusterList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterList") != m.end() && !m["ClusterList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterList"].type()) {
        QuerySparkRelateHBaseResponseBodyClusterList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterList"]));
        clusterList = make_shared<QuerySparkRelateHBaseResponseBodyClusterList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QuerySparkRelateHBaseResponseBody() = default;
};
class QuerySparkRelateHBaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySparkRelateHBaseResponseBody> body{};

  QuerySparkRelateHBaseResponse() {}

  explicit QuerySparkRelateHBaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySparkRelateHBaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySparkRelateHBaseResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySparkRelateHBaseResponse() = default;
};
class QueryXpackRelatedDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> relateDbType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  QueryXpackRelatedDBRequest() {}

  explicit QueryXpackRelatedDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (relateDbType) {
      res["RelateDbType"] = boost::any(*relateDbType);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RelateDbType") != m.end() && !m["RelateDbType"].empty()) {
      relateDbType = make_shared<string>(boost::any_cast<string>(m["RelateDbType"]));
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


  virtual ~QueryXpackRelatedDBRequest() = default;
};
class QueryXpackRelatedDBResponseBodyClusterListCluster : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<bool> isRelated{};
  shared_ptr<string> status{};

  QueryXpackRelatedDBResponseBodyClusterListCluster() {}

  explicit QueryXpackRelatedDBResponseBodyClusterListCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (isRelated) {
      res["IsRelated"] = boost::any(*isRelated);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("IsRelated") != m.end() && !m["IsRelated"].empty()) {
      isRelated = make_shared<bool>(boost::any_cast<bool>(m["IsRelated"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryXpackRelatedDBResponseBodyClusterListCluster() = default;
};
class QueryXpackRelatedDBResponseBodyClusterList : public Darabonba::Model {
public:
  shared_ptr<vector<QueryXpackRelatedDBResponseBodyClusterListCluster>> cluster{};

  QueryXpackRelatedDBResponseBodyClusterList() {}

  explicit QueryXpackRelatedDBResponseBodyClusterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      vector<boost::any> temp1;
      for(auto item1:*cluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      if (typeid(vector<boost::any>) == m["Cluster"].type()) {
        vector<QueryXpackRelatedDBResponseBodyClusterListCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryXpackRelatedDBResponseBodyClusterListCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cluster = make_shared<vector<QueryXpackRelatedDBResponseBodyClusterListCluster>>(expect1);
      }
    }
  }


  virtual ~QueryXpackRelatedDBResponseBodyClusterList() = default;
};
class QueryXpackRelatedDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryXpackRelatedDBResponseBodyClusterList> clusterList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryXpackRelatedDBResponseBody() {}

  explicit QueryXpackRelatedDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterList) {
      res["ClusterList"] = clusterList ? boost::any(clusterList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ClusterList") != m.end() && !m["ClusterList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterList"].type()) {
        QueryXpackRelatedDBResponseBodyClusterList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterList"]));
        clusterList = make_shared<QueryXpackRelatedDBResponseBodyClusterList>(model1);
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


  virtual ~QueryXpackRelatedDBResponseBody() = default;
};
class QueryXpackRelatedDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryXpackRelatedDBResponseBody> body{};

  QueryXpackRelatedDBResponse() {}

  explicit QueryXpackRelatedDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryXpackRelatedDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryXpackRelatedDBResponseBody>(model1);
      }
    }
  }


  virtual ~QueryXpackRelatedDBResponse() = default;
};
class RelateDbForHBaseHaRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> haActive{};
  shared_ptr<string> haActiveClusterKey{};
  shared_ptr<string> haActiveDBType{};
  shared_ptr<string> haActiveHbaseFsDir{};
  shared_ptr<string> haActiveHdfsUri{};
  shared_ptr<string> haActivePassword{};
  shared_ptr<string> haActiveUser{};
  shared_ptr<string> haActiveVersion{};
  shared_ptr<string> haMigrateType{};
  shared_ptr<string> haStandby{};
  shared_ptr<string> haStandbyClusterKey{};
  shared_ptr<string> haStandbyDBType{};
  shared_ptr<string> haStandbyHbaseFsDir{};
  shared_ptr<string> haStandbyHdfsUri{};
  shared_ptr<string> haStandbyPassword{};
  shared_ptr<string> haStandbyUser{};
  shared_ptr<string> haStandbyVersion{};
  shared_ptr<string> haTables{};
  shared_ptr<bool> isActiveStandard{};
  shared_ptr<bool> isStandbyStandard{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  RelateDbForHBaseHaRequest() {}

  explicit RelateDbForHBaseHaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (haActive) {
      res["HaActive"] = boost::any(*haActive);
    }
    if (haActiveClusterKey) {
      res["HaActiveClusterKey"] = boost::any(*haActiveClusterKey);
    }
    if (haActiveDBType) {
      res["HaActiveDBType"] = boost::any(*haActiveDBType);
    }
    if (haActiveHbaseFsDir) {
      res["HaActiveHbaseFsDir"] = boost::any(*haActiveHbaseFsDir);
    }
    if (haActiveHdfsUri) {
      res["HaActiveHdfsUri"] = boost::any(*haActiveHdfsUri);
    }
    if (haActivePassword) {
      res["HaActivePassword"] = boost::any(*haActivePassword);
    }
    if (haActiveUser) {
      res["HaActiveUser"] = boost::any(*haActiveUser);
    }
    if (haActiveVersion) {
      res["HaActiveVersion"] = boost::any(*haActiveVersion);
    }
    if (haMigrateType) {
      res["HaMigrateType"] = boost::any(*haMigrateType);
    }
    if (haStandby) {
      res["HaStandby"] = boost::any(*haStandby);
    }
    if (haStandbyClusterKey) {
      res["HaStandbyClusterKey"] = boost::any(*haStandbyClusterKey);
    }
    if (haStandbyDBType) {
      res["HaStandbyDBType"] = boost::any(*haStandbyDBType);
    }
    if (haStandbyHbaseFsDir) {
      res["HaStandbyHbaseFsDir"] = boost::any(*haStandbyHbaseFsDir);
    }
    if (haStandbyHdfsUri) {
      res["HaStandbyHdfsUri"] = boost::any(*haStandbyHdfsUri);
    }
    if (haStandbyPassword) {
      res["HaStandbyPassword"] = boost::any(*haStandbyPassword);
    }
    if (haStandbyUser) {
      res["HaStandbyUser"] = boost::any(*haStandbyUser);
    }
    if (haStandbyVersion) {
      res["HaStandbyVersion"] = boost::any(*haStandbyVersion);
    }
    if (haTables) {
      res["HaTables"] = boost::any(*haTables);
    }
    if (isActiveStandard) {
      res["IsActiveStandard"] = boost::any(*isActiveStandard);
    }
    if (isStandbyStandard) {
      res["IsStandbyStandard"] = boost::any(*isStandbyStandard);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HaActive") != m.end() && !m["HaActive"].empty()) {
      haActive = make_shared<string>(boost::any_cast<string>(m["HaActive"]));
    }
    if (m.find("HaActiveClusterKey") != m.end() && !m["HaActiveClusterKey"].empty()) {
      haActiveClusterKey = make_shared<string>(boost::any_cast<string>(m["HaActiveClusterKey"]));
    }
    if (m.find("HaActiveDBType") != m.end() && !m["HaActiveDBType"].empty()) {
      haActiveDBType = make_shared<string>(boost::any_cast<string>(m["HaActiveDBType"]));
    }
    if (m.find("HaActiveHbaseFsDir") != m.end() && !m["HaActiveHbaseFsDir"].empty()) {
      haActiveHbaseFsDir = make_shared<string>(boost::any_cast<string>(m["HaActiveHbaseFsDir"]));
    }
    if (m.find("HaActiveHdfsUri") != m.end() && !m["HaActiveHdfsUri"].empty()) {
      haActiveHdfsUri = make_shared<string>(boost::any_cast<string>(m["HaActiveHdfsUri"]));
    }
    if (m.find("HaActivePassword") != m.end() && !m["HaActivePassword"].empty()) {
      haActivePassword = make_shared<string>(boost::any_cast<string>(m["HaActivePassword"]));
    }
    if (m.find("HaActiveUser") != m.end() && !m["HaActiveUser"].empty()) {
      haActiveUser = make_shared<string>(boost::any_cast<string>(m["HaActiveUser"]));
    }
    if (m.find("HaActiveVersion") != m.end() && !m["HaActiveVersion"].empty()) {
      haActiveVersion = make_shared<string>(boost::any_cast<string>(m["HaActiveVersion"]));
    }
    if (m.find("HaMigrateType") != m.end() && !m["HaMigrateType"].empty()) {
      haMigrateType = make_shared<string>(boost::any_cast<string>(m["HaMigrateType"]));
    }
    if (m.find("HaStandby") != m.end() && !m["HaStandby"].empty()) {
      haStandby = make_shared<string>(boost::any_cast<string>(m["HaStandby"]));
    }
    if (m.find("HaStandbyClusterKey") != m.end() && !m["HaStandbyClusterKey"].empty()) {
      haStandbyClusterKey = make_shared<string>(boost::any_cast<string>(m["HaStandbyClusterKey"]));
    }
    if (m.find("HaStandbyDBType") != m.end() && !m["HaStandbyDBType"].empty()) {
      haStandbyDBType = make_shared<string>(boost::any_cast<string>(m["HaStandbyDBType"]));
    }
    if (m.find("HaStandbyHbaseFsDir") != m.end() && !m["HaStandbyHbaseFsDir"].empty()) {
      haStandbyHbaseFsDir = make_shared<string>(boost::any_cast<string>(m["HaStandbyHbaseFsDir"]));
    }
    if (m.find("HaStandbyHdfsUri") != m.end() && !m["HaStandbyHdfsUri"].empty()) {
      haStandbyHdfsUri = make_shared<string>(boost::any_cast<string>(m["HaStandbyHdfsUri"]));
    }
    if (m.find("HaStandbyPassword") != m.end() && !m["HaStandbyPassword"].empty()) {
      haStandbyPassword = make_shared<string>(boost::any_cast<string>(m["HaStandbyPassword"]));
    }
    if (m.find("HaStandbyUser") != m.end() && !m["HaStandbyUser"].empty()) {
      haStandbyUser = make_shared<string>(boost::any_cast<string>(m["HaStandbyUser"]));
    }
    if (m.find("HaStandbyVersion") != m.end() && !m["HaStandbyVersion"].empty()) {
      haStandbyVersion = make_shared<string>(boost::any_cast<string>(m["HaStandbyVersion"]));
    }
    if (m.find("HaTables") != m.end() && !m["HaTables"].empty()) {
      haTables = make_shared<string>(boost::any_cast<string>(m["HaTables"]));
    }
    if (m.find("IsActiveStandard") != m.end() && !m["IsActiveStandard"].empty()) {
      isActiveStandard = make_shared<bool>(boost::any_cast<bool>(m["IsActiveStandard"]));
    }
    if (m.find("IsStandbyStandard") != m.end() && !m["IsStandbyStandard"].empty()) {
      isStandbyStandard = make_shared<bool>(boost::any_cast<bool>(m["IsStandbyStandard"]));
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


  virtual ~RelateDbForHBaseHaRequest() = default;
};
class RelateDbForHBaseHaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RelateDbForHBaseHaResponseBody() {}

  explicit RelateDbForHBaseHaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RelateDbForHBaseHaResponseBody() = default;
};
class RelateDbForHBaseHaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RelateDbForHBaseHaResponseBody> body{};

  RelateDbForHBaseHaResponse() {}

  explicit RelateDbForHBaseHaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RelateDbForHBaseHaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RelateDbForHBaseHaResponseBody>(model1);
      }
    }
  }


  virtual ~RelateDbForHBaseHaResponse() = default;
};
class ReleasePublicNetworkAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ReleasePublicNetworkAddressRequest() {}

  explicit ReleasePublicNetworkAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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


  virtual ~ReleasePublicNetworkAddressRequest() = default;
};
class ReleasePublicNetworkAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleasePublicNetworkAddressResponseBody() {}

  explicit ReleasePublicNetworkAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleasePublicNetworkAddressResponseBody() = default;
};
class ReleasePublicNetworkAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleasePublicNetworkAddressResponseBody> body{};

  ReleasePublicNetworkAddressResponse() {}

  explicit ReleasePublicNetworkAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleasePublicNetworkAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleasePublicNetworkAddressResponseBody>(model1);
      }
    }
  }


  virtual ~ReleasePublicNetworkAddressResponse() = default;
};
class ReleaseSubscriptionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subscriptionId{};

  ReleaseSubscriptionRequest() {}

  explicit ReleaseSubscriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (subscriptionId) {
      res["SubscriptionId"] = boost::any(*subscriptionId);
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
    if (m.find("SubscriptionId") != m.end() && !m["SubscriptionId"].empty()) {
      subscriptionId = make_shared<string>(boost::any_cast<string>(m["SubscriptionId"]));
    }
  }


  virtual ~ReleaseSubscriptionRequest() = default;
};
class ReleaseSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseSubscriptionResponseBody() {}

  explicit ReleaseSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseSubscriptionResponseBody() = default;
};
class ReleaseSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseSubscriptionResponseBody> body{};

  ReleaseSubscriptionResponse() {}

  explicit ReleaseSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseSubscriptionResponse() = default;
};
class RenewClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> duration{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  RenewClusterRequest() {}

  explicit RenewClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~RenewClusterRequest() = default;
};
class RenewClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  RenewClusterResponseBody() {}

  explicit RenewClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenewClusterResponseBody() = default;
};
class RenewClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewClusterResponseBody> body{};

  RenewClusterResponse() {}

  explicit RenewClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewClusterResponseBody>(model1);
      }
    }
  }


  virtual ~RenewClusterResponse() = default;
};
class ResizeClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> cloudType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> coldStorageSize{};
  shared_ptr<string> coreDiskQuantity{};
  shared_ptr<string> coreDiskSize{};
  shared_ptr<string> coreDiskType{};
  shared_ptr<string> coreInstanceQuantity{};
  shared_ptr<string> coreInstanceType{};
  shared_ptr<string> engine{};
  shared_ptr<string> isColdStorage{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> upgradeType{};
  shared_ptr<string> zoneId{};

  ResizeClusterRequest() {}

  explicit ResizeClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cloudType) {
      res["CloudType"] = boost::any(*cloudType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (coldStorageSize) {
      res["ColdStorageSize"] = boost::any(*coldStorageSize);
    }
    if (coreDiskQuantity) {
      res["CoreDiskQuantity"] = boost::any(*coreDiskQuantity);
    }
    if (coreDiskSize) {
      res["CoreDiskSize"] = boost::any(*coreDiskSize);
    }
    if (coreDiskType) {
      res["CoreDiskType"] = boost::any(*coreDiskType);
    }
    if (coreInstanceQuantity) {
      res["CoreInstanceQuantity"] = boost::any(*coreInstanceQuantity);
    }
    if (coreInstanceType) {
      res["CoreInstanceType"] = boost::any(*coreInstanceType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (isColdStorage) {
      res["IsColdStorage"] = boost::any(*isColdStorage);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (upgradeType) {
      res["UpgradeType"] = boost::any(*upgradeType);
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
    if (m.find("CloudType") != m.end() && !m["CloudType"].empty()) {
      cloudType = make_shared<string>(boost::any_cast<string>(m["CloudType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ColdStorageSize") != m.end() && !m["ColdStorageSize"].empty()) {
      coldStorageSize = make_shared<string>(boost::any_cast<string>(m["ColdStorageSize"]));
    }
    if (m.find("CoreDiskQuantity") != m.end() && !m["CoreDiskQuantity"].empty()) {
      coreDiskQuantity = make_shared<string>(boost::any_cast<string>(m["CoreDiskQuantity"]));
    }
    if (m.find("CoreDiskSize") != m.end() && !m["CoreDiskSize"].empty()) {
      coreDiskSize = make_shared<string>(boost::any_cast<string>(m["CoreDiskSize"]));
    }
    if (m.find("CoreDiskType") != m.end() && !m["CoreDiskType"].empty()) {
      coreDiskType = make_shared<string>(boost::any_cast<string>(m["CoreDiskType"]));
    }
    if (m.find("CoreInstanceQuantity") != m.end() && !m["CoreInstanceQuantity"].empty()) {
      coreInstanceQuantity = make_shared<string>(boost::any_cast<string>(m["CoreInstanceQuantity"]));
    }
    if (m.find("CoreInstanceType") != m.end() && !m["CoreInstanceType"].empty()) {
      coreInstanceType = make_shared<string>(boost::any_cast<string>(m["CoreInstanceType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("IsColdStorage") != m.end() && !m["IsColdStorage"].empty()) {
      isColdStorage = make_shared<string>(boost::any_cast<string>(m["IsColdStorage"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UpgradeType") != m.end() && !m["UpgradeType"].empty()) {
      upgradeType = make_shared<string>(boost::any_cast<string>(m["UpgradeType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ResizeClusterRequest() = default;
};
class ResizeClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResizeClusterResponseBody() {}

  explicit ResizeClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResizeClusterResponseBody() = default;
};
class ResizeClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResizeClusterResponseBody> body{};

  ResizeClusterResponse() {}

  explicit ResizeClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResizeClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResizeClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ResizeClusterResponse() = default;
};
class SparkRelateHBaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> HBaseClusterIds{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  SparkRelateHBaseRequest() {}

  explicit SparkRelateHBaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (HBaseClusterIds) {
      res["HBaseClusterIds"] = boost::any(*HBaseClusterIds);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HBaseClusterIds") != m.end() && !m["HBaseClusterIds"].empty()) {
      HBaseClusterIds = make_shared<string>(boost::any_cast<string>(m["HBaseClusterIds"]));
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


  virtual ~SparkRelateHBaseRequest() = default;
};
class SparkRelateHBaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SparkRelateHBaseResponseBody() {}

  explicit SparkRelateHBaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SparkRelateHBaseResponseBody() = default;
};
class SparkRelateHBaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SparkRelateHBaseResponseBody> body{};

  SparkRelateHBaseResponse() {}

  explicit SparkRelateHBaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SparkRelateHBaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SparkRelateHBaseResponseBody>(model1);
      }
    }
  }


  virtual ~SparkRelateHBaseResponse() = default;
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
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
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
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpgradeMinorVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> components{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> upgradeVersion{};
  shared_ptr<string> zoneId{};

  UpgradeMinorVersionRequest() {}

  explicit UpgradeMinorVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (components) {
      res["Components"] = boost::any(*components);
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
    if (upgradeVersion) {
      res["UpgradeVersion"] = boost::any(*upgradeVersion);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      components = make_shared<string>(boost::any_cast<string>(m["Components"]));
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
    if (m.find("UpgradeVersion") != m.end() && !m["UpgradeVersion"].empty()) {
      upgradeVersion = make_shared<string>(boost::any_cast<string>(m["UpgradeVersion"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~UpgradeMinorVersionRequest() = default;
};
class UpgradeMinorVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> newVersion{};
  shared_ptr<string> oldVersion{};
  shared_ptr<string> requestId{};

  UpgradeMinorVersionResponseBody() {}

  explicit UpgradeMinorVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newVersion) {
      res["NewVersion"] = boost::any(*newVersion);
    }
    if (oldVersion) {
      res["OldVersion"] = boost::any(*oldVersion);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewVersion") != m.end() && !m["NewVersion"].empty()) {
      newVersion = make_shared<string>(boost::any_cast<string>(m["NewVersion"]));
    }
    if (m.find("OldVersion") != m.end() && !m["OldVersion"].empty()) {
      oldVersion = make_shared<string>(boost::any_cast<string>(m["OldVersion"]));
    }
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
class XpackRelateDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> dbClusterIds{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> relateDbType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  XpackRelateDBRequest() {}

  explicit XpackRelateDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dbClusterIds) {
      res["DbClusterIds"] = boost::any(*dbClusterIds);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (relateDbType) {
      res["RelateDbType"] = boost::any(*relateDbType);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DbClusterIds") != m.end() && !m["DbClusterIds"].empty()) {
      dbClusterIds = make_shared<string>(boost::any_cast<string>(m["DbClusterIds"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RelateDbType") != m.end() && !m["RelateDbType"].empty()) {
      relateDbType = make_shared<string>(boost::any_cast<string>(m["RelateDbType"]));
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


  virtual ~XpackRelateDBRequest() = default;
};
class XpackRelateDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  XpackRelateDBResponseBody() {}

  explicit XpackRelateDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~XpackRelateDBResponseBody() = default;
};
class XpackRelateDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<XpackRelateDBResponseBody> body{};

  XpackRelateDBResponse() {}

  explicit XpackRelateDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        XpackRelateDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<XpackRelateDBResponseBody>(model1);
      }
    }
  }


  virtual ~XpackRelateDBResponse() = default;
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
  AddUserHdfsInfoResponse addUserHdfsInfoWithOptions(shared_ptr<AddUserHdfsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserHdfsInfoResponse addUserHdfsInfo(shared_ptr<AddUserHdfsInfoRequest> request);
  AllocatePublicNetworkAddressResponse allocatePublicNetworkAddressWithOptions(shared_ptr<AllocatePublicNetworkAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocatePublicNetworkAddressResponse allocatePublicNetworkAddress(shared_ptr<AllocatePublicNetworkAddressRequest> request);
  CheckVersionsOfComponentsResponse checkVersionsOfComponentsWithOptions(shared_ptr<CheckVersionsOfComponentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckVersionsOfComponentsResponse checkVersionsOfComponents(shared_ptr<CheckVersionsOfComponentsRequest> request);
  CloseBackupResponse closeBackupWithOptions(shared_ptr<CloseBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseBackupResponse closeBackup(shared_ptr<CloseBackupRequest> request);
  ConvertClusterResponse convertClusterWithOptions(shared_ptr<ConvertClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertClusterResponse convertCluster(shared_ptr<ConvertClusterRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  CreateGlobalResourceResponse createGlobalResourceWithOptions(shared_ptr<CreateGlobalResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGlobalResourceResponse createGlobalResource(shared_ptr<CreateGlobalResourceRequest> request);
  CreateHbaseSlbServerResponse createHbaseSlbServerWithOptions(shared_ptr<CreateHbaseSlbServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHbaseSlbServerResponse createHbaseSlbServer(shared_ptr<CreateHbaseSlbServerRequest> request);
  CreateSubscriptionResponse createSubscriptionWithOptions(shared_ptr<CreateSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSubscriptionResponse createSubscription(shared_ptr<CreateSubscriptionRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<DeleteClusterRequest> request);
  DeleteGlobalResourceResponse deleteGlobalResourceWithOptions(shared_ptr<DeleteGlobalResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGlobalResourceResponse deleteGlobalResource(shared_ptr<DeleteGlobalResourceRequest> request);
  DeleteHbaseSlbServerResponse deleteHbaseSlbServerWithOptions(shared_ptr<DeleteHbaseSlbServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHbaseSlbServerResponse deleteHbaseSlbServer(shared_ptr<DeleteHbaseSlbServerRequest> request);
  DeleteServerlessInstanceResponse deleteServerlessInstanceWithOptions(shared_ptr<DeleteServerlessInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServerlessInstanceResponse deleteServerlessInstance(shared_ptr<DeleteServerlessInstanceRequest> request);
  DeleteUserHdfsInfoResponse deleteUserHdfsInfoWithOptions(shared_ptr<DeleteUserHdfsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserHdfsInfoResponse deleteUserHdfsInfo(shared_ptr<DeleteUserHdfsInfoRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeBackupsResponse describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupsResponse describeBackups(shared_ptr<DescribeBackupsRequest> request);
  DescribeClusterAttributeResponse describeClusterAttributeWithOptions(shared_ptr<DescribeClusterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterAttributeResponse describeClusterAttribute(shared_ptr<DescribeClusterAttributeRequest> request);
  DescribeClusterConnectAddrsResponse describeClusterConnectAddrsWithOptions(shared_ptr<DescribeClusterConnectAddrsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterConnectAddrsResponse describeClusterConnectAddrs(shared_ptr<DescribeClusterConnectAddrsRequest> request);
  DescribeClusterListResponse describeClusterListWithOptions(shared_ptr<DescribeClusterListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterListResponse describeClusterList(shared_ptr<DescribeClusterListRequest> request);
  DescribeClusterModelResponse describeClusterModelWithOptions(shared_ptr<DescribeClusterModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterModelResponse describeClusterModel(shared_ptr<DescribeClusterModelRequest> request);
  DescribeClusterWhiteListResponse describeClusterWhiteListWithOptions(shared_ptr<DescribeClusterWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterWhiteListResponse describeClusterWhiteList(shared_ptr<DescribeClusterWhiteListRequest> request);
  DescribeColdStorageResponse describeColdStorageWithOptions(shared_ptr<DescribeColdStorageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeColdStorageResponse describeColdStorage(shared_ptr<DescribeColdStorageRequest> request);
  DescribeMultiModDbAttributeResponse describeMultiModDbAttributeWithOptions(shared_ptr<DescribeMultiModDbAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMultiModDbAttributeResponse describeMultiModDbAttribute(shared_ptr<DescribeMultiModDbAttributeRequest> request);
  DescribeRdsVSwitchsResponse describeRdsVSwitchsWithOptions(shared_ptr<DescribeRdsVSwitchsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdsVSwitchsResponse describeRdsVSwitchs(shared_ptr<DescribeRdsVSwitchsRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeServerlessInstanceResponse describeServerlessInstanceWithOptions(shared_ptr<DescribeServerlessInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServerlessInstanceResponse describeServerlessInstance(shared_ptr<DescribeServerlessInstanceRequest> request);
  DescribeSubscriptionInitializeProgressResponse describeSubscriptionInitializeProgressWithOptions(shared_ptr<DescribeSubscriptionInitializeProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSubscriptionInitializeProgressResponse describeSubscriptionInitializeProgress(shared_ptr<DescribeSubscriptionInitializeProgressRequest> request);
  DescribeSubscriptionPerformanceResponse describeSubscriptionPerformanceWithOptions(shared_ptr<DescribeSubscriptionPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSubscriptionPerformanceResponse describeSubscriptionPerformance(shared_ptr<DescribeSubscriptionPerformanceRequest> request);
  DescribeSubscriptionPermissionResponse describeSubscriptionPermissionWithOptions(shared_ptr<DescribeSubscriptionPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSubscriptionPermissionResponse describeSubscriptionPermission(shared_ptr<DescribeSubscriptionPermissionRequest> request);
  DescribeSubscriptionsResponse describeSubscriptionsWithOptions(shared_ptr<DescribeSubscriptionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSubscriptionsResponse describeSubscriptions(shared_ptr<DescribeSubscriptionsRequest> request);
  EnableServerlessPublicConnectionResponse enableServerlessPublicConnectionWithOptions(shared_ptr<EnableServerlessPublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableServerlessPublicConnectionResponse enableServerlessPublicConnection(shared_ptr<EnableServerlessPublicConnectionRequest> request);
  GetMultimodeCmsUrlResponse getMultimodeCmsUrlWithOptions(shared_ptr<GetMultimodeCmsUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMultimodeCmsUrlResponse getMultimodeCmsUrl(shared_ptr<GetMultimodeCmsUrlRequest> request);
  ListClusterServiceConfigResponse listClusterServiceConfigWithOptions(shared_ptr<ListClusterServiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterServiceConfigResponse listClusterServiceConfig(shared_ptr<ListClusterServiceConfigRequest> request);
  ListClusterServiceConfigHistoryResponse listClusterServiceConfigHistoryWithOptions(shared_ptr<ListClusterServiceConfigHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterServiceConfigHistoryResponse listClusterServiceConfigHistory(shared_ptr<ListClusterServiceConfigHistoryRequest> request);
  ListHbaseInstancesResponse listHbaseInstancesWithOptions(shared_ptr<ListHbaseInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHbaseInstancesResponse listHbaseInstances(shared_ptr<ListHbaseInstancesRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupPolicyResponse modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request);
  ModifyClusterNameResponse modifyClusterNameWithOptions(shared_ptr<ModifyClusterNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterNameResponse modifyClusterName(shared_ptr<ModifyClusterNameRequest> request);
  ModifyClusterNetTypeResponse modifyClusterNetTypeWithOptions(shared_ptr<ModifyClusterNetTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterNetTypeResponse modifyClusterNetType(shared_ptr<ModifyClusterNetTypeRequest> request);
  ModifyClusterSecurityIpListResponse modifyClusterSecurityIpListWithOptions(shared_ptr<ModifyClusterSecurityIpListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterSecurityIpListResponse modifyClusterSecurityIpList(shared_ptr<ModifyClusterSecurityIpListRequest> request);
  ModifyClusterServiceConfigResponse modifyClusterServiceConfigWithOptions(shared_ptr<ModifyClusterServiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterServiceConfigResponse modifyClusterServiceConfig(shared_ptr<ModifyClusterServiceConfigRequest> request);
  ModifyHasRootPasswordResponse modifyHasRootPasswordWithOptions(shared_ptr<ModifyHasRootPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyHasRootPasswordResponse modifyHasRootPassword(shared_ptr<ModifyHasRootPasswordRequest> request);
  ModifyRestartClusterResponse modifyRestartClusterWithOptions(shared_ptr<ModifyRestartClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRestartClusterResponse modifyRestartCluster(shared_ptr<ModifyRestartClusterRequest> request);
  ModifyRollbackHasForHbaseResponse modifyRollbackHasForHbaseWithOptions(shared_ptr<ModifyRollbackHasForHbaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRollbackHasForHbaseResponse modifyRollbackHasForHbase(shared_ptr<ModifyRollbackHasForHbaseRequest> request);
  ModifySubscriptionDescriptionResponse modifySubscriptionDescriptionWithOptions(shared_ptr<ModifySubscriptionDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySubscriptionDescriptionResponse modifySubscriptionDescription(shared_ptr<ModifySubscriptionDescriptionRequest> request);
  ModifySubscriptionMappingResponse modifySubscriptionMappingWithOptions(shared_ptr<ModifySubscriptionMappingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySubscriptionMappingResponse modifySubscriptionMapping(shared_ptr<ModifySubscriptionMappingRequest> request);
  ModifySubscriptionPermissionResponse modifySubscriptionPermissionWithOptions(shared_ptr<ModifySubscriptionPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySubscriptionPermissionResponse modifySubscriptionPermission(shared_ptr<ModifySubscriptionPermissionRequest> request);
  ModifyUIProxyAccountPasswordResponse modifyUIProxyAccountPasswordWithOptions(shared_ptr<ModifyUIProxyAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUIProxyAccountPasswordResponse modifyUIProxyAccountPassword(shared_ptr<ModifyUIProxyAccountPasswordRequest> request);
  ModifyUpgradeToHasForHbaseResponse modifyUpgradeToHasForHbaseWithOptions(shared_ptr<ModifyUpgradeToHasForHbaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUpgradeToHasForHbaseResponse modifyUpgradeToHasForHbase(shared_ptr<ModifyUpgradeToHasForHbaseRequest> request);
  MultimodAddComponentsResponse multimodAddComponentsWithOptions(shared_ptr<MultimodAddComponentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MultimodAddComponentsResponse multimodAddComponents(shared_ptr<MultimodAddComponentsRequest> request);
  OpenBackupResponse openBackupWithOptions(shared_ptr<OpenBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenBackupResponse openBackup(shared_ptr<OpenBackupRequest> request);
  QueryHBaseHaDBResponse queryHBaseHaDBWithOptions(shared_ptr<QueryHBaseHaDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHBaseHaDBResponse queryHBaseHaDB(shared_ptr<QueryHBaseHaDBRequest> request);
  QuerySparkRelateHBaseResponse querySparkRelateHBaseWithOptions(shared_ptr<QuerySparkRelateHBaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySparkRelateHBaseResponse querySparkRelateHBase(shared_ptr<QuerySparkRelateHBaseRequest> request);
  QueryXpackRelatedDBResponse queryXpackRelatedDBWithOptions(shared_ptr<QueryXpackRelatedDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryXpackRelatedDBResponse queryXpackRelatedDB(shared_ptr<QueryXpackRelatedDBRequest> request);
  RelateDbForHBaseHaResponse relateDbForHBaseHaWithOptions(shared_ptr<RelateDbForHBaseHaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RelateDbForHBaseHaResponse relateDbForHBaseHa(shared_ptr<RelateDbForHBaseHaRequest> request);
  ReleasePublicNetworkAddressResponse releasePublicNetworkAddressWithOptions(shared_ptr<ReleasePublicNetworkAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleasePublicNetworkAddressResponse releasePublicNetworkAddress(shared_ptr<ReleasePublicNetworkAddressRequest> request);
  ReleaseSubscriptionResponse releaseSubscriptionWithOptions(shared_ptr<ReleaseSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseSubscriptionResponse releaseSubscription(shared_ptr<ReleaseSubscriptionRequest> request);
  RenewClusterResponse renewClusterWithOptions(shared_ptr<RenewClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewClusterResponse renewCluster(shared_ptr<RenewClusterRequest> request);
  ResizeClusterResponse resizeClusterWithOptions(shared_ptr<ResizeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResizeClusterResponse resizeCluster(shared_ptr<ResizeClusterRequest> request);
  SparkRelateHBaseResponse sparkRelateHBaseWithOptions(shared_ptr<SparkRelateHBaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SparkRelateHBaseResponse sparkRelateHBase(shared_ptr<SparkRelateHBaseRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpgradeMinorVersionResponse upgradeMinorVersionWithOptions(shared_ptr<UpgradeMinorVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeMinorVersionResponse upgradeMinorVersion(shared_ptr<UpgradeMinorVersionRequest> request);
  XpackRelateDBResponse xpackRelateDBWithOptions(shared_ptr<XpackRelateDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  XpackRelateDBResponse xpackRelateDB(shared_ptr<XpackRelateDBRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_HBase20170115

#endif
