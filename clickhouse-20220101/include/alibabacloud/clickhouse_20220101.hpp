// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLICKHOUSE20220101_H_
#define ALIBABACLOUD_CLICKHOUSE20220101_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Clickhouse20220101 {
class AllocateVirtualWareHousePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  AllocateVirtualWareHousePublicConnectionRequest() {}

  explicit AllocateVirtualWareHousePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~AllocateVirtualWareHousePublicConnectionRequest() = default;
};
class AllocateVirtualWareHousePublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocateVirtualWareHousePublicConnectionResponseBody() {}

  explicit AllocateVirtualWareHousePublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AllocateVirtualWareHousePublicConnectionResponseBody() = default;
};
class AllocateVirtualWareHousePublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllocateVirtualWareHousePublicConnectionResponseBody> body{};

  AllocateVirtualWareHousePublicConnectionResponse() {}

  explicit AllocateVirtualWareHousePublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllocateVirtualWareHousePublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateVirtualWareHousePublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateVirtualWareHousePublicConnectionResponse() = default;
};
class CheckCreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> usedTime{};
  shared_ptr<long> virtualWareHouseCacheStorage{};
  shared_ptr<string> virtualWareHouseClass{};
  shared_ptr<string> virtualWareHouseDescription{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  CheckCreateClusterRequest() {}

  explicit CheckCreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
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
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (virtualWareHouseCacheStorage) {
      res["VirtualWareHouseCacheStorage"] = boost::any(*virtualWareHouseCacheStorage);
    }
    if (virtualWareHouseClass) {
      res["VirtualWareHouseClass"] = boost::any(*virtualWareHouseClass);
    }
    if (virtualWareHouseDescription) {
      res["VirtualWareHouseDescription"] = boost::any(*virtualWareHouseDescription);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
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
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
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
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<string>(boost::any_cast<string>(m["UsedTime"]));
    }
    if (m.find("VirtualWareHouseCacheStorage") != m.end() && !m["VirtualWareHouseCacheStorage"].empty()) {
      virtualWareHouseCacheStorage = make_shared<long>(boost::any_cast<long>(m["VirtualWareHouseCacheStorage"]));
    }
    if (m.find("VirtualWareHouseClass") != m.end() && !m["VirtualWareHouseClass"].empty()) {
      virtualWareHouseClass = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseClass"]));
    }
    if (m.find("VirtualWareHouseDescription") != m.end() && !m["VirtualWareHouseDescription"].empty()) {
      virtualWareHouseDescription = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseDescription"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CheckCreateClusterRequest() = default;
};
class CheckCreateClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> expectedDBClusterStatus{};
  shared_ptr<long> expectedOrderFinishSeconds{};
  shared_ptr<string> expectedTargetVirtualWareHouseStatus{};

  CheckCreateClusterResponseBodyData() {}

  explicit CheckCreateClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expectedDBClusterStatus) {
      res["ExpectedDBClusterStatus"] = boost::any(*expectedDBClusterStatus);
    }
    if (expectedOrderFinishSeconds) {
      res["ExpectedOrderFinishSeconds"] = boost::any(*expectedOrderFinishSeconds);
    }
    if (expectedTargetVirtualWareHouseStatus) {
      res["ExpectedTargetVirtualWareHouseStatus"] = boost::any(*expectedTargetVirtualWareHouseStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpectedDBClusterStatus") != m.end() && !m["ExpectedDBClusterStatus"].empty()) {
      expectedDBClusterStatus = make_shared<string>(boost::any_cast<string>(m["ExpectedDBClusterStatus"]));
    }
    if (m.find("ExpectedOrderFinishSeconds") != m.end() && !m["ExpectedOrderFinishSeconds"].empty()) {
      expectedOrderFinishSeconds = make_shared<long>(boost::any_cast<long>(m["ExpectedOrderFinishSeconds"]));
    }
    if (m.find("ExpectedTargetVirtualWareHouseStatus") != m.end() && !m["ExpectedTargetVirtualWareHouseStatus"].empty()) {
      expectedTargetVirtualWareHouseStatus = make_shared<string>(boost::any_cast<string>(m["ExpectedTargetVirtualWareHouseStatus"]));
    }
  }


  virtual ~CheckCreateClusterResponseBodyData() = default;
};
class CheckCreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckCreateClusterResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CheckCreateClusterResponseBody() {}

  explicit CheckCreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckCreateClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckCreateClusterResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckCreateClusterResponseBody() = default;
};
class CheckCreateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckCreateClusterResponseBody> body{};

  CheckCreateClusterResponse() {}

  explicit CheckCreateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckCreateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckCreateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CheckCreateClusterResponse() = default;
};
class CheckCreateVirtualWareHouseRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> virtualWareHouseCacheStorage{};
  shared_ptr<string> virtualWareHouseClass{};
  shared_ptr<string> virtualWareHouseDescription{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  CheckCreateVirtualWareHouseRequest() {}

  explicit CheckCreateVirtualWareHouseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseCacheStorage) {
      res["VirtualWareHouseCacheStorage"] = boost::any(*virtualWareHouseCacheStorage);
    }
    if (virtualWareHouseClass) {
      res["VirtualWareHouseClass"] = boost::any(*virtualWareHouseClass);
    }
    if (virtualWareHouseDescription) {
      res["VirtualWareHouseDescription"] = boost::any(*virtualWareHouseDescription);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualWareHouseCacheStorage") != m.end() && !m["VirtualWareHouseCacheStorage"].empty()) {
      virtualWareHouseCacheStorage = make_shared<long>(boost::any_cast<long>(m["VirtualWareHouseCacheStorage"]));
    }
    if (m.find("VirtualWareHouseClass") != m.end() && !m["VirtualWareHouseClass"].empty()) {
      virtualWareHouseClass = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseClass"]));
    }
    if (m.find("VirtualWareHouseDescription") != m.end() && !m["VirtualWareHouseDescription"].empty()) {
      virtualWareHouseDescription = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseDescription"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CheckCreateVirtualWareHouseRequest() = default;
};
class CheckCreateVirtualWareHouseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> expectedDBClusterStatus{};
  shared_ptr<long> expectedOrderFinishSeconds{};
  shared_ptr<string> expectedTargetVirtualWareHouseStatus{};

  CheckCreateVirtualWareHouseResponseBodyData() {}

  explicit CheckCreateVirtualWareHouseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expectedDBClusterStatus) {
      res["ExpectedDBClusterStatus"] = boost::any(*expectedDBClusterStatus);
    }
    if (expectedOrderFinishSeconds) {
      res["ExpectedOrderFinishSeconds"] = boost::any(*expectedOrderFinishSeconds);
    }
    if (expectedTargetVirtualWareHouseStatus) {
      res["ExpectedTargetVirtualWareHouseStatus"] = boost::any(*expectedTargetVirtualWareHouseStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpectedDBClusterStatus") != m.end() && !m["ExpectedDBClusterStatus"].empty()) {
      expectedDBClusterStatus = make_shared<string>(boost::any_cast<string>(m["ExpectedDBClusterStatus"]));
    }
    if (m.find("ExpectedOrderFinishSeconds") != m.end() && !m["ExpectedOrderFinishSeconds"].empty()) {
      expectedOrderFinishSeconds = make_shared<long>(boost::any_cast<long>(m["ExpectedOrderFinishSeconds"]));
    }
    if (m.find("ExpectedTargetVirtualWareHouseStatus") != m.end() && !m["ExpectedTargetVirtualWareHouseStatus"].empty()) {
      expectedTargetVirtualWareHouseStatus = make_shared<string>(boost::any_cast<string>(m["ExpectedTargetVirtualWareHouseStatus"]));
    }
  }


  virtual ~CheckCreateVirtualWareHouseResponseBodyData() = default;
};
class CheckCreateVirtualWareHouseResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckCreateVirtualWareHouseResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CheckCreateVirtualWareHouseResponseBody() {}

  explicit CheckCreateVirtualWareHouseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckCreateVirtualWareHouseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckCreateVirtualWareHouseResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckCreateVirtualWareHouseResponseBody() = default;
};
class CheckCreateVirtualWareHouseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckCreateVirtualWareHouseResponseBody> body{};

  CheckCreateVirtualWareHouseResponse() {}

  explicit CheckCreateVirtualWareHouseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckCreateVirtualWareHouseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckCreateVirtualWareHouseResponseBody>(model1);
      }
    }
  }


  virtual ~CheckCreateVirtualWareHouseResponse() = default;
};
class CheckDeleteVirtualWareHouseRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  CheckDeleteVirtualWareHouseRequest() {}

  explicit CheckDeleteVirtualWareHouseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~CheckDeleteVirtualWareHouseRequest() = default;
};
class CheckDeleteVirtualWareHouseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> expectedDBClusterStatus{};
  shared_ptr<long> expectedOrderFinishSeconds{};
  shared_ptr<string> expectedTargetVirtualWareHouseStatus{};

  CheckDeleteVirtualWareHouseResponseBodyData() {}

  explicit CheckDeleteVirtualWareHouseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expectedDBClusterStatus) {
      res["ExpectedDBClusterStatus"] = boost::any(*expectedDBClusterStatus);
    }
    if (expectedOrderFinishSeconds) {
      res["ExpectedOrderFinishSeconds"] = boost::any(*expectedOrderFinishSeconds);
    }
    if (expectedTargetVirtualWareHouseStatus) {
      res["ExpectedTargetVirtualWareHouseStatus"] = boost::any(*expectedTargetVirtualWareHouseStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpectedDBClusterStatus") != m.end() && !m["ExpectedDBClusterStatus"].empty()) {
      expectedDBClusterStatus = make_shared<string>(boost::any_cast<string>(m["ExpectedDBClusterStatus"]));
    }
    if (m.find("ExpectedOrderFinishSeconds") != m.end() && !m["ExpectedOrderFinishSeconds"].empty()) {
      expectedOrderFinishSeconds = make_shared<long>(boost::any_cast<long>(m["ExpectedOrderFinishSeconds"]));
    }
    if (m.find("ExpectedTargetVirtualWareHouseStatus") != m.end() && !m["ExpectedTargetVirtualWareHouseStatus"].empty()) {
      expectedTargetVirtualWareHouseStatus = make_shared<string>(boost::any_cast<string>(m["ExpectedTargetVirtualWareHouseStatus"]));
    }
  }


  virtual ~CheckDeleteVirtualWareHouseResponseBodyData() = default;
};
class CheckDeleteVirtualWareHouseResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckDeleteVirtualWareHouseResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CheckDeleteVirtualWareHouseResponseBody() {}

  explicit CheckDeleteVirtualWareHouseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDeleteVirtualWareHouseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckDeleteVirtualWareHouseResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckDeleteVirtualWareHouseResponseBody() = default;
};
class CheckDeleteVirtualWareHouseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDeleteVirtualWareHouseResponseBody> body{};

  CheckDeleteVirtualWareHouseResponse() {}

  explicit CheckDeleteVirtualWareHouseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDeleteVirtualWareHouseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDeleteVirtualWareHouseResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDeleteVirtualWareHouseResponse() = default;
};
class CheckModifyVirtualWareHouseResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> virtualWareHouseCacheStorage{};
  shared_ptr<string> virtualWareHouseClass{};
  shared_ptr<string> virtualWareHouseId{};

  CheckModifyVirtualWareHouseResourceRequest() {}

  explicit CheckModifyVirtualWareHouseResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseCacheStorage) {
      res["VirtualWareHouseCacheStorage"] = boost::any(*virtualWareHouseCacheStorage);
    }
    if (virtualWareHouseClass) {
      res["VirtualWareHouseClass"] = boost::any(*virtualWareHouseClass);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("VirtualWareHouseCacheStorage") != m.end() && !m["VirtualWareHouseCacheStorage"].empty()) {
      virtualWareHouseCacheStorage = make_shared<long>(boost::any_cast<long>(m["VirtualWareHouseCacheStorage"]));
    }
    if (m.find("VirtualWareHouseClass") != m.end() && !m["VirtualWareHouseClass"].empty()) {
      virtualWareHouseClass = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseClass"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~CheckModifyVirtualWareHouseResourceRequest() = default;
};
class CheckModifyVirtualWareHouseResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> expectedDBClusterStatus{};
  shared_ptr<long> expectedOrderFinishSeconds{};
  shared_ptr<string> expectedTargetVirtualWareHouseStatus{};

  CheckModifyVirtualWareHouseResourceResponseBodyData() {}

  explicit CheckModifyVirtualWareHouseResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expectedDBClusterStatus) {
      res["ExpectedDBClusterStatus"] = boost::any(*expectedDBClusterStatus);
    }
    if (expectedOrderFinishSeconds) {
      res["ExpectedOrderFinishSeconds"] = boost::any(*expectedOrderFinishSeconds);
    }
    if (expectedTargetVirtualWareHouseStatus) {
      res["ExpectedTargetVirtualWareHouseStatus"] = boost::any(*expectedTargetVirtualWareHouseStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpectedDBClusterStatus") != m.end() && !m["ExpectedDBClusterStatus"].empty()) {
      expectedDBClusterStatus = make_shared<string>(boost::any_cast<string>(m["ExpectedDBClusterStatus"]));
    }
    if (m.find("ExpectedOrderFinishSeconds") != m.end() && !m["ExpectedOrderFinishSeconds"].empty()) {
      expectedOrderFinishSeconds = make_shared<long>(boost::any_cast<long>(m["ExpectedOrderFinishSeconds"]));
    }
    if (m.find("ExpectedTargetVirtualWareHouseStatus") != m.end() && !m["ExpectedTargetVirtualWareHouseStatus"].empty()) {
      expectedTargetVirtualWareHouseStatus = make_shared<string>(boost::any_cast<string>(m["ExpectedTargetVirtualWareHouseStatus"]));
    }
  }


  virtual ~CheckModifyVirtualWareHouseResourceResponseBodyData() = default;
};
class CheckModifyVirtualWareHouseResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckModifyVirtualWareHouseResourceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CheckModifyVirtualWareHouseResourceResponseBody() {}

  explicit CheckModifyVirtualWareHouseResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckModifyVirtualWareHouseResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckModifyVirtualWareHouseResourceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckModifyVirtualWareHouseResourceResponseBody() = default;
};
class CheckModifyVirtualWareHouseResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckModifyVirtualWareHouseResourceResponseBody> body{};

  CheckModifyVirtualWareHouseResourceResponse() {}

  explicit CheckModifyVirtualWareHouseResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckModifyVirtualWareHouseResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckModifyVirtualWareHouseResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CheckModifyVirtualWareHouseResourceResponse() = default;
};
class CreateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> comment{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> password{};
  shared_ptr<string> passwordSha256Hex{};
  shared_ptr<string> privilegeType{};
  shared_ptr<string> regionId{};

  CreateAccountRequest() {}

  explicit CreateAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (passwordSha256Hex) {
      res["PasswordSha256Hex"] = boost::any(*passwordSha256Hex);
    }
    if (privilegeType) {
      res["PrivilegeType"] = boost::any(*privilegeType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PasswordSha256Hex") != m.end() && !m["PasswordSha256Hex"].empty()) {
      passwordSha256Hex = make_shared<string>(boost::any_cast<string>(m["PasswordSha256Hex"]));
    }
    if (m.find("PrivilegeType") != m.end() && !m["PrivilegeType"].empty()) {
      privilegeType = make_shared<string>(boost::any_cast<string>(m["PrivilegeType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> usedTime{};
  shared_ptr<long> virtualWareHouseCacheStorage{};
  shared_ptr<string> virtualWareHouseClass{};
  shared_ptr<string> virtualWareHouseDescription{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
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
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
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
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (virtualWareHouseCacheStorage) {
      res["VirtualWareHouseCacheStorage"] = boost::any(*virtualWareHouseCacheStorage);
    }
    if (virtualWareHouseClass) {
      res["VirtualWareHouseClass"] = boost::any(*virtualWareHouseClass);
    }
    if (virtualWareHouseDescription) {
      res["VirtualWareHouseDescription"] = boost::any(*virtualWareHouseDescription);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
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
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
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
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<string>(boost::any_cast<string>(m["UsedTime"]));
    }
    if (m.find("VirtualWareHouseCacheStorage") != m.end() && !m["VirtualWareHouseCacheStorage"].empty()) {
      virtualWareHouseCacheStorage = make_shared<long>(boost::any_cast<long>(m["VirtualWareHouseCacheStorage"]));
    }
    if (m.find("VirtualWareHouseClass") != m.end() && !m["VirtualWareHouseClass"].empty()) {
      virtualWareHouseClass = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseClass"]));
    }
    if (m.find("VirtualWareHouseDescription") != m.end() && !m["VirtualWareHouseDescription"].empty()) {
      virtualWareHouseDescription = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseDescription"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> virtualWareHouseId{};

  CreateClusterResponseBodyData() {}

  explicit CreateClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~CreateClusterResponseBodyData() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateClusterResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateClusterResponseBody() {}

  explicit CreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateClusterResponseBodyData>(model1);
      }
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
class CreateVirtualWareHouseRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> virtualWareHouseCacheStorage{};
  shared_ptr<string> virtualWareHouseClass{};
  shared_ptr<string> virtualWareHouseDescription{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  CreateVirtualWareHouseRequest() {}

  explicit CreateVirtualWareHouseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseCacheStorage) {
      res["VirtualWareHouseCacheStorage"] = boost::any(*virtualWareHouseCacheStorage);
    }
    if (virtualWareHouseClass) {
      res["VirtualWareHouseClass"] = boost::any(*virtualWareHouseClass);
    }
    if (virtualWareHouseDescription) {
      res["VirtualWareHouseDescription"] = boost::any(*virtualWareHouseDescription);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualWareHouseCacheStorage") != m.end() && !m["VirtualWareHouseCacheStorage"].empty()) {
      virtualWareHouseCacheStorage = make_shared<long>(boost::any_cast<long>(m["VirtualWareHouseCacheStorage"]));
    }
    if (m.find("VirtualWareHouseClass") != m.end() && !m["VirtualWareHouseClass"].empty()) {
      virtualWareHouseClass = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseClass"]));
    }
    if (m.find("VirtualWareHouseDescription") != m.end() && !m["VirtualWareHouseDescription"].empty()) {
      virtualWareHouseDescription = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseDescription"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateVirtualWareHouseRequest() = default;
};
class CreateVirtualWareHouseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> virtualWareHouseId{};

  CreateVirtualWareHouseResponseBodyData() {}

  explicit CreateVirtualWareHouseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~CreateVirtualWareHouseResponseBodyData() = default;
};
class CreateVirtualWareHouseResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateVirtualWareHouseResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateVirtualWareHouseResponseBody() {}

  explicit CreateVirtualWareHouseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVirtualWareHouseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateVirtualWareHouseResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVirtualWareHouseResponseBody() = default;
};
class CreateVirtualWareHouseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVirtualWareHouseResponseBody> body{};

  CreateVirtualWareHouseResponse() {}

  explicit CreateVirtualWareHouseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVirtualWareHouseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVirtualWareHouseResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVirtualWareHouseResponse() = default;
};
class DeleteAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  DeleteAccountRequest() {}

  explicit DeleteAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
class DeleteClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  DeleteClusterRequest() {}

  explicit DeleteClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClusterRequest() = default;
};
class DeleteClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  DeleteClusterResponseBodyData() {}

  explicit DeleteClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~DeleteClusterResponseBodyData() = default;
};
class DeleteClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteClusterResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteClusterResponseBody() {}

  explicit DeleteClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteClusterResponseBodyData>(model1);
      }
    }
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
class DeleteClusterSecurityIPGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> regionId{};

  DeleteClusterSecurityIPGroupRequest() {}

  explicit DeleteClusterSecurityIPGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
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
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteClusterSecurityIPGroupRequest() = default;
};
class DeleteClusterSecurityIPGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteClusterSecurityIPGroupResponseBody() {}

  explicit DeleteClusterSecurityIPGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClusterSecurityIPGroupResponseBody() = default;
};
class DeleteClusterSecurityIPGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteClusterSecurityIPGroupResponseBody> body{};

  DeleteClusterSecurityIPGroupResponse() {}

  explicit DeleteClusterSecurityIPGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteClusterSecurityIPGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClusterSecurityIPGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClusterSecurityIPGroupResponse() = default;
};
class DeleteVirtualWareHouseRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  DeleteVirtualWareHouseRequest() {}

  explicit DeleteVirtualWareHouseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~DeleteVirtualWareHouseRequest() = default;
};
class DeleteVirtualWareHouseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  DeleteVirtualWareHouseResponseBodyData() {}

  explicit DeleteVirtualWareHouseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~DeleteVirtualWareHouseResponseBodyData() = default;
};
class DeleteVirtualWareHouseResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteVirtualWareHouseResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteVirtualWareHouseResponseBody() {}

  explicit DeleteVirtualWareHouseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVirtualWareHouseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteVirtualWareHouseResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteVirtualWareHouseResponseBody() = default;
};
class DeleteVirtualWareHouseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVirtualWareHouseResponseBody> body{};

  DeleteVirtualWareHouseResponse() {}

  explicit DeleteVirtualWareHouseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVirtualWareHouseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVirtualWareHouseResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVirtualWareHouseResponse() = default;
};
class DescribeAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  DescribeAccountRequest() {}

  explicit DescribeAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAccountRequest() = default;
};
class DescribeAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> comment{};
  shared_ptr<string> passwordSha256Hex{};
  shared_ptr<string> privilegeDescription{};
  shared_ptr<string> privilegeType{};

  DescribeAccountResponseBodyData() {}

  explicit DescribeAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (passwordSha256Hex) {
      res["PasswordSha256Hex"] = boost::any(*passwordSha256Hex);
    }
    if (privilegeDescription) {
      res["PrivilegeDescription"] = boost::any(*privilegeDescription);
    }
    if (privilegeType) {
      res["PrivilegeType"] = boost::any(*privilegeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("PasswordSha256Hex") != m.end() && !m["PasswordSha256Hex"].empty()) {
      passwordSha256Hex = make_shared<string>(boost::any_cast<string>(m["PasswordSha256Hex"]));
    }
    if (m.find("PrivilegeDescription") != m.end() && !m["PrivilegeDescription"].empty()) {
      privilegeDescription = make_shared<string>(boost::any_cast<string>(m["PrivilegeDescription"]));
    }
    if (m.find("PrivilegeType") != m.end() && !m["PrivilegeType"].empty()) {
      privilegeType = make_shared<string>(boost::any_cast<string>(m["PrivilegeType"]));
    }
  }


  virtual ~DescribeAccountResponseBodyData() = default;
};
class DescribeAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAccountResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeAccountResponseBody() {}

  explicit DescribeAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAccountResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAccountResponseBody() = default;
};
class DescribeAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountResponseBody> body{};

  DescribeAccountResponse() {}

  explicit DescribeAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountResponse() = default;
};
class DescribeClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  DescribeClusterRequest() {}

  explicit DescribeClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeClusterRequest() = default;
};
class DescribeClusterResponseBodyDataVirtualWareHouses : public Darabonba::Model {
public:
  shared_ptr<string> ports{};
  shared_ptr<long> virtualWareHouseCacheStorage{};
  shared_ptr<string> virtualWareHouseClass{};
  shared_ptr<string> virtualWareHouseDescription{};
  shared_ptr<string> virtualWareHouseId{};
  shared_ptr<string> virtualWareHouseStatus{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  DescribeClusterResponseBodyDataVirtualWareHouses() {}

  explicit DescribeClusterResponseBodyDataVirtualWareHouses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ports) {
      res["Ports"] = boost::any(*ports);
    }
    if (virtualWareHouseCacheStorage) {
      res["VirtualWareHouseCacheStorage"] = boost::any(*virtualWareHouseCacheStorage);
    }
    if (virtualWareHouseClass) {
      res["VirtualWareHouseClass"] = boost::any(*virtualWareHouseClass);
    }
    if (virtualWareHouseDescription) {
      res["VirtualWareHouseDescription"] = boost::any(*virtualWareHouseDescription);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
    }
    if (virtualWareHouseStatus) {
      res["VirtualWareHouseStatus"] = boost::any(*virtualWareHouseStatus);
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
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      ports = make_shared<string>(boost::any_cast<string>(m["Ports"]));
    }
    if (m.find("VirtualWareHouseCacheStorage") != m.end() && !m["VirtualWareHouseCacheStorage"].empty()) {
      virtualWareHouseCacheStorage = make_shared<long>(boost::any_cast<long>(m["VirtualWareHouseCacheStorage"]));
    }
    if (m.find("VirtualWareHouseClass") != m.end() && !m["VirtualWareHouseClass"].empty()) {
      virtualWareHouseClass = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseClass"]));
    }
    if (m.find("VirtualWareHouseDescription") != m.end() && !m["VirtualWareHouseDescription"].empty()) {
      virtualWareHouseDescription = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseDescription"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
    if (m.find("VirtualWareHouseStatus") != m.end() && !m["VirtualWareHouseStatus"].empty()) {
      virtualWareHouseStatus = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseStatus"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeClusterResponseBodyDataVirtualWareHouses() = default;
};
class DescribeClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<long> cacheStorageSizeGiB{};
  shared_ptr<string> cacheStorageType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<long> objectStoreSizeGiB{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceCpuCores{};
  shared_ptr<long> resourceMemoryGiB{};
  shared_ptr<vector<DescribeClusterResponseBodyDataVirtualWareHouses>> virtualWareHouses{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  DescribeClusterResponseBodyData() {}

  explicit DescribeClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (cacheStorageSizeGiB) {
      res["CacheStorageSizeGiB"] = boost::any(*cacheStorageSizeGiB);
    }
    if (cacheStorageType) {
      res["CacheStorageType"] = boost::any(*cacheStorageType);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
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
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (objectStoreSizeGiB) {
      res["ObjectStoreSizeGiB"] = boost::any(*objectStoreSizeGiB);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceCpuCores) {
      res["ResourceCpuCores"] = boost::any(*resourceCpuCores);
    }
    if (resourceMemoryGiB) {
      res["ResourceMemoryGiB"] = boost::any(*resourceMemoryGiB);
    }
    if (virtualWareHouses) {
      vector<boost::any> temp1;
      for(auto item1:*virtualWareHouses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VirtualWareHouses"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
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
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("CacheStorageSizeGiB") != m.end() && !m["CacheStorageSizeGiB"].empty()) {
      cacheStorageSizeGiB = make_shared<long>(boost::any_cast<long>(m["CacheStorageSizeGiB"]));
    }
    if (m.find("CacheStorageType") != m.end() && !m["CacheStorageType"].empty()) {
      cacheStorageType = make_shared<string>(boost::any_cast<string>(m["CacheStorageType"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
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
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("ObjectStoreSizeGiB") != m.end() && !m["ObjectStoreSizeGiB"].empty()) {
      objectStoreSizeGiB = make_shared<long>(boost::any_cast<long>(m["ObjectStoreSizeGiB"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceCpuCores") != m.end() && !m["ResourceCpuCores"].empty()) {
      resourceCpuCores = make_shared<long>(boost::any_cast<long>(m["ResourceCpuCores"]));
    }
    if (m.find("ResourceMemoryGiB") != m.end() && !m["ResourceMemoryGiB"].empty()) {
      resourceMemoryGiB = make_shared<long>(boost::any_cast<long>(m["ResourceMemoryGiB"]));
    }
    if (m.find("VirtualWareHouses") != m.end() && !m["VirtualWareHouses"].empty()) {
      if (typeid(vector<boost::any>) == m["VirtualWareHouses"].type()) {
        vector<DescribeClusterResponseBodyDataVirtualWareHouses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VirtualWareHouses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterResponseBodyDataVirtualWareHouses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        virtualWareHouses = make_shared<vector<DescribeClusterResponseBodyDataVirtualWareHouses>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeClusterResponseBodyData() = default;
};
class DescribeClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeClusterResponseBody() {}

  explicit DescribeClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeClusterResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClusterResponseBody() = default;
};
class DescribeClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClusterResponseBody> body{};

  DescribeClusterResponse() {}

  explicit DescribeClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterResponse() = default;
};
class DescribeClusterSecurityInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  DescribeClusterSecurityInfoRequest() {}

  explicit DescribeClusterSecurityInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeClusterSecurityInfoRequest() = default;
};
class DescribeClusterSecurityInfoResponseBodyDataSecurityIpGroups : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> securityIps{};

  DescribeClusterSecurityInfoResponseBodyDataSecurityIpGroups() {}

  explicit DescribeClusterSecurityInfoResponseBodyDataSecurityIpGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (securityIps) {
      res["SecurityIps"] = boost::any(*securityIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("SecurityIps") != m.end() && !m["SecurityIps"].empty()) {
      securityIps = make_shared<string>(boost::any_cast<string>(m["SecurityIps"]));
    }
  }


  virtual ~DescribeClusterSecurityInfoResponseBodyDataSecurityIpGroups() = default;
};
class DescribeClusterSecurityInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterSecurityInfoResponseBodyDataSecurityIpGroups>> securityIpGroups{};

  DescribeClusterSecurityInfoResponseBodyData() {}

  explicit DescribeClusterSecurityInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityIpGroups) {
      vector<boost::any> temp1;
      for(auto item1:*securityIpGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityIpGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityIpGroups") != m.end() && !m["SecurityIpGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityIpGroups"].type()) {
        vector<DescribeClusterSecurityInfoResponseBodyDataSecurityIpGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityIpGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterSecurityInfoResponseBodyDataSecurityIpGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityIpGroups = make_shared<vector<DescribeClusterSecurityInfoResponseBodyDataSecurityIpGroups>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterSecurityInfoResponseBodyData() = default;
};
class DescribeClusterSecurityInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterSecurityInfoResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeClusterSecurityInfoResponseBody() {}

  explicit DescribeClusterSecurityInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterSecurityInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeClusterSecurityInfoResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClusterSecurityInfoResponseBody() = default;
};
class DescribeClusterSecurityInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClusterSecurityInfoResponseBody> body{};

  DescribeClusterSecurityInfoResponse() {}

  explicit DescribeClusterSecurityInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterSecurityInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterSecurityInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterSecurityInfoResponse() = default;
};
class DescribeClusterStatusSetResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> value{};

  DescribeClusterStatusSetResponseBodyData() {}

  explicit DescribeClusterStatusSetResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeClusterStatusSetResponseBodyData() = default;
};
class DescribeClusterStatusSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterStatusSetResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeClusterStatusSetResponseBody() {}

  explicit DescribeClusterStatusSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeClusterStatusSetResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterStatusSetResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeClusterStatusSetResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClusterStatusSetResponseBody() = default;
};
class DescribeClusterStatusSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClusterStatusSetResponseBody> body{};

  DescribeClusterStatusSetResponse() {}

  explicit DescribeClusterStatusSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterStatusSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterStatusSetResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterStatusSetResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

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
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
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
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyDataZones : public Darabonba::Model {
public:
  shared_ptr<bool> vpcEnabled{};
  shared_ptr<string> zoneId{};

  DescribeRegionsResponseBodyDataZones() {}

  explicit DescribeRegionsResponseBodyDataZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeRegionsResponseBodyDataZones() = default;
};
class DescribeRegionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<DescribeRegionsResponseBodyDataZones>> zones{};

  DescribeRegionsResponseBodyData() {}

  explicit DescribeRegionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<DescribeRegionsResponseBodyDataZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyDataZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<DescribeRegionsResponseBodyDataZones>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyData() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeRegionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeRegionsResponseBodyData>>(expect1);
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
class DescribeRunningQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> queryDurationMs{};
  shared_ptr<string> queryId{};
  shared_ptr<string> queryKeyWord{};
  shared_ptr<string> queryUser{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  DescribeRunningQueryRequest() {}

  explicit DescribeRunningQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (queryKeyWord) {
      res["QueryKeyWord"] = boost::any(*queryKeyWord);
    }
    if (queryUser) {
      res["QueryUser"] = boost::any(*queryUser);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
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
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("QueryKeyWord") != m.end() && !m["QueryKeyWord"].empty()) {
      queryKeyWord = make_shared<string>(boost::any_cast<string>(m["QueryKeyWord"]));
    }
    if (m.find("QueryUser") != m.end() && !m["QueryUser"].empty()) {
      queryUser = make_shared<string>(boost::any_cast<string>(m["QueryUser"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~DescribeRunningQueryRequest() = default;
};
class DescribeRunningQueryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> initialAddress{};
  shared_ptr<string> initialQueryId{};
  shared_ptr<string> initialUser{};
  shared_ptr<string> query{};
  shared_ptr<long> queryDurationMs{};
  shared_ptr<string> queryStartTime{};

  DescribeRunningQueryResponseBodyData() {}

  explicit DescribeRunningQueryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      queryDurationMs = make_shared<long>(boost::any_cast<long>(m["QueryDurationMs"]));
    }
    if (m.find("QueryStartTime") != m.end() && !m["QueryStartTime"].empty()) {
      queryStartTime = make_shared<string>(boost::any_cast<string>(m["QueryStartTime"]));
    }
  }


  virtual ~DescribeRunningQueryResponseBodyData() = default;
};
class DescribeRunningQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRunningQueryResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeRunningQueryResponseBody() {}

  explicit DescribeRunningQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeRunningQueryResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRunningQueryResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeRunningQueryResponseBodyData>>(expect1);
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


  virtual ~DescribeRunningQueryResponseBody() = default;
};
class DescribeRunningQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRunningQueryResponseBody> body{};

  DescribeRunningQueryResponse() {}

  explicit DescribeRunningQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRunningQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRunningQueryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRunningQueryResponse() = default;
};
class DescribeSlowQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> queryDurationMs{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> virtualWareHouseId{};

  DescribeSlowQueryRequest() {}

  explicit DescribeSlowQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~DescribeSlowQueryRequest() = default;
};
class DescribeSlowQueryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> initialAddress{};
  shared_ptr<string> initialQueryId{};
  shared_ptr<string> initialUser{};
  shared_ptr<long> memoryUsage{};
  shared_ptr<string> query{};
  shared_ptr<long> queryDurationMs{};
  shared_ptr<string> queryStartTime{};
  shared_ptr<string> queryState{};
  shared_ptr<long> readBytes{};
  shared_ptr<long> readRows{};
  shared_ptr<long> resultBytes{};
  shared_ptr<long> resultRows{};

  DescribeSlowQueryResponseBodyData() {}

  explicit DescribeSlowQueryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (queryState) {
      res["QueryState"] = boost::any(*queryState);
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
    if (resultRows) {
      res["ResultRows"] = boost::any(*resultRows);
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
      memoryUsage = make_shared<long>(boost::any_cast<long>(m["MemoryUsage"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("QueryDurationMs") != m.end() && !m["QueryDurationMs"].empty()) {
      queryDurationMs = make_shared<long>(boost::any_cast<long>(m["QueryDurationMs"]));
    }
    if (m.find("QueryStartTime") != m.end() && !m["QueryStartTime"].empty()) {
      queryStartTime = make_shared<string>(boost::any_cast<string>(m["QueryStartTime"]));
    }
    if (m.find("QueryState") != m.end() && !m["QueryState"].empty()) {
      queryState = make_shared<string>(boost::any_cast<string>(m["QueryState"]));
    }
    if (m.find("ReadBytes") != m.end() && !m["ReadBytes"].empty()) {
      readBytes = make_shared<long>(boost::any_cast<long>(m["ReadBytes"]));
    }
    if (m.find("ReadRows") != m.end() && !m["ReadRows"].empty()) {
      readRows = make_shared<long>(boost::any_cast<long>(m["ReadRows"]));
    }
    if (m.find("ResultBytes") != m.end() && !m["ResultBytes"].empty()) {
      resultBytes = make_shared<long>(boost::any_cast<long>(m["ResultBytes"]));
    }
    if (m.find("ResultRows") != m.end() && !m["ResultRows"].empty()) {
      resultRows = make_shared<long>(boost::any_cast<long>(m["ResultRows"]));
    }
  }


  virtual ~DescribeSlowQueryResponseBodyData() = default;
};
class DescribeSlowQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowQueryResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeSlowQueryResponseBody() {}

  explicit DescribeSlowQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeSlowQueryResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowQueryResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeSlowQueryResponseBodyData>>(expect1);
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


  virtual ~DescribeSlowQueryResponseBody() = default;
};
class DescribeSlowQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlowQueryResponseBody> body{};

  DescribeSlowQueryResponse() {}

  explicit DescribeSlowQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlowQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlowQueryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlowQueryResponse() = default;
};
class DescribeSlowQueryTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> queryDurationMs{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> virtualWareHouseId{};

  DescribeSlowQueryTrendRequest() {}

  explicit DescribeSlowQueryTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (queryDurationMs) {
      res["QueryDurationMs"] = boost::any(*queryDurationMs);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("QueryDurationMs") != m.end() && !m["QueryDurationMs"].empty()) {
      queryDurationMs = make_shared<long>(boost::any_cast<long>(m["QueryDurationMs"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~DescribeSlowQueryTrendRequest() = default;
};
class DescribeSlowQueryTrendResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> avgDurationMs{};
  shared_ptr<long> count{};
  shared_ptr<long> maxDurationMs{};
  shared_ptr<long> minDurationMs{};
  shared_ptr<string> startTime{};

  DescribeSlowQueryTrendResponseBodyData() {}

  explicit DescribeSlowQueryTrendResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgDurationMs) {
      res["AvgDurationMs"] = boost::any(*avgDurationMs);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (maxDurationMs) {
      res["MaxDurationMs"] = boost::any(*maxDurationMs);
    }
    if (minDurationMs) {
      res["MinDurationMs"] = boost::any(*minDurationMs);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgDurationMs") != m.end() && !m["AvgDurationMs"].empty()) {
      avgDurationMs = make_shared<long>(boost::any_cast<long>(m["AvgDurationMs"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("MaxDurationMs") != m.end() && !m["MaxDurationMs"].empty()) {
      maxDurationMs = make_shared<long>(boost::any_cast<long>(m["MaxDurationMs"]));
    }
    if (m.find("MinDurationMs") != m.end() && !m["MinDurationMs"].empty()) {
      minDurationMs = make_shared<long>(boost::any_cast<long>(m["MinDurationMs"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeSlowQueryTrendResponseBodyData() = default;
};
class DescribeSlowQueryTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowQueryTrendResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeSlowQueryTrendResponseBody() {}

  explicit DescribeSlowQueryTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeSlowQueryTrendResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowQueryTrendResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeSlowQueryTrendResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSlowQueryTrendResponseBody() = default;
};
class DescribeSlowQueryTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlowQueryTrendResponseBody> body{};

  DescribeSlowQueryTrendResponse() {}

  explicit DescribeSlowQueryTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlowQueryTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlowQueryTrendResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlowQueryTrendResponse() = default;
};
class DescribeVirtualWareHouseRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  DescribeVirtualWareHouseRequest() {}

  explicit DescribeVirtualWareHouseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~DescribeVirtualWareHouseRequest() = default;
};
class DescribeVirtualWareHouseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> ports{};
  shared_ptr<long> virtualWareHouseCacheStorage{};
  shared_ptr<string> virtualWareHouseClass{};
  shared_ptr<string> virtualWareHouseDescription{};
  shared_ptr<string> virtualWareHouseId{};
  shared_ptr<string> virtualWareHouseStatus{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  DescribeVirtualWareHouseResponseBodyData() {}

  explicit DescribeVirtualWareHouseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ports) {
      res["Ports"] = boost::any(*ports);
    }
    if (virtualWareHouseCacheStorage) {
      res["VirtualWareHouseCacheStorage"] = boost::any(*virtualWareHouseCacheStorage);
    }
    if (virtualWareHouseClass) {
      res["VirtualWareHouseClass"] = boost::any(*virtualWareHouseClass);
    }
    if (virtualWareHouseDescription) {
      res["VirtualWareHouseDescription"] = boost::any(*virtualWareHouseDescription);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
    }
    if (virtualWareHouseStatus) {
      res["VirtualWareHouseStatus"] = boost::any(*virtualWareHouseStatus);
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
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      ports = make_shared<string>(boost::any_cast<string>(m["Ports"]));
    }
    if (m.find("VirtualWareHouseCacheStorage") != m.end() && !m["VirtualWareHouseCacheStorage"].empty()) {
      virtualWareHouseCacheStorage = make_shared<long>(boost::any_cast<long>(m["VirtualWareHouseCacheStorage"]));
    }
    if (m.find("VirtualWareHouseClass") != m.end() && !m["VirtualWareHouseClass"].empty()) {
      virtualWareHouseClass = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseClass"]));
    }
    if (m.find("VirtualWareHouseDescription") != m.end() && !m["VirtualWareHouseDescription"].empty()) {
      virtualWareHouseDescription = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseDescription"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
    if (m.find("VirtualWareHouseStatus") != m.end() && !m["VirtualWareHouseStatus"].empty()) {
      virtualWareHouseStatus = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseStatus"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeVirtualWareHouseResponseBodyData() = default;
};
class DescribeVirtualWareHouseResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeVirtualWareHouseResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeVirtualWareHouseResponseBody() {}

  explicit DescribeVirtualWareHouseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVirtualWareHouseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeVirtualWareHouseResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeVirtualWareHouseResponseBody() = default;
};
class DescribeVirtualWareHouseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVirtualWareHouseResponseBody> body{};

  DescribeVirtualWareHouseResponse() {}

  explicit DescribeVirtualWareHouseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVirtualWareHouseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVirtualWareHouseResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVirtualWareHouseResponse() = default;
};
class DescribeVirtualWareHouseClassSetResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> cacheStorageStep{};
  shared_ptr<long> cpuCores{};
  shared_ptr<long> maxCacheStorage{};
  shared_ptr<long> memoryGiB{};
  shared_ptr<long> minCacheStorage{};
  shared_ptr<string> value{};

  DescribeVirtualWareHouseClassSetResponseBodyData() {}

  explicit DescribeVirtualWareHouseClassSetResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheStorageStep) {
      res["CacheStorageStep"] = boost::any(*cacheStorageStep);
    }
    if (cpuCores) {
      res["CpuCores"] = boost::any(*cpuCores);
    }
    if (maxCacheStorage) {
      res["MaxCacheStorage"] = boost::any(*maxCacheStorage);
    }
    if (memoryGiB) {
      res["MemoryGiB"] = boost::any(*memoryGiB);
    }
    if (minCacheStorage) {
      res["MinCacheStorage"] = boost::any(*minCacheStorage);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheStorageStep") != m.end() && !m["CacheStorageStep"].empty()) {
      cacheStorageStep = make_shared<long>(boost::any_cast<long>(m["CacheStorageStep"]));
    }
    if (m.find("CpuCores") != m.end() && !m["CpuCores"].empty()) {
      cpuCores = make_shared<long>(boost::any_cast<long>(m["CpuCores"]));
    }
    if (m.find("MaxCacheStorage") != m.end() && !m["MaxCacheStorage"].empty()) {
      maxCacheStorage = make_shared<long>(boost::any_cast<long>(m["MaxCacheStorage"]));
    }
    if (m.find("MemoryGiB") != m.end() && !m["MemoryGiB"].empty()) {
      memoryGiB = make_shared<long>(boost::any_cast<long>(m["MemoryGiB"]));
    }
    if (m.find("MinCacheStorage") != m.end() && !m["MinCacheStorage"].empty()) {
      minCacheStorage = make_shared<long>(boost::any_cast<long>(m["MinCacheStorage"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeVirtualWareHouseClassSetResponseBodyData() = default;
};
class DescribeVirtualWareHouseClassSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVirtualWareHouseClassSetResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeVirtualWareHouseClassSetResponseBody() {}

  explicit DescribeVirtualWareHouseClassSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeVirtualWareHouseClassSetResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVirtualWareHouseClassSetResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeVirtualWareHouseClassSetResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeVirtualWareHouseClassSetResponseBody() = default;
};
class DescribeVirtualWareHouseClassSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVirtualWareHouseClassSetResponseBody> body{};

  DescribeVirtualWareHouseClassSetResponse() {}

  explicit DescribeVirtualWareHouseClassSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVirtualWareHouseClassSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVirtualWareHouseClassSetResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVirtualWareHouseClassSetResponse() = default;
};
class DescribeVirtualWareHouseEndpointInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  DescribeVirtualWareHouseEndpointInfoRequest() {}

  explicit DescribeVirtualWareHouseEndpointInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~DescribeVirtualWareHouseEndpointInfoRequest() = default;
};
class DescribeVirtualWareHouseEndpointInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> endpointType{};
  shared_ptr<string> ip{};
  shared_ptr<string> netType{};
  shared_ptr<string> ports{};
  shared_ptr<string> status{};
  shared_ptr<string> url{};

  DescribeVirtualWareHouseEndpointInfoResponseBodyData() {}

  explicit DescribeVirtualWareHouseEndpointInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (ports) {
      res["Ports"] = boost::any(*ports);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      ports = make_shared<string>(boost::any_cast<string>(m["Ports"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeVirtualWareHouseEndpointInfoResponseBodyData() = default;
};
class DescribeVirtualWareHouseEndpointInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVirtualWareHouseEndpointInfoResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeVirtualWareHouseEndpointInfoResponseBody() {}

  explicit DescribeVirtualWareHouseEndpointInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeVirtualWareHouseEndpointInfoResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVirtualWareHouseEndpointInfoResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeVirtualWareHouseEndpointInfoResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeVirtualWareHouseEndpointInfoResponseBody() = default;
};
class DescribeVirtualWareHouseEndpointInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVirtualWareHouseEndpointInfoResponseBody> body{};

  DescribeVirtualWareHouseEndpointInfoResponse() {}

  explicit DescribeVirtualWareHouseEndpointInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVirtualWareHouseEndpointInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVirtualWareHouseEndpointInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVirtualWareHouseEndpointInfoResponse() = default;
};
class DescribeVirtualWareHouseStatusSetResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> value{};

  DescribeVirtualWareHouseStatusSetResponseBodyData() {}

  explicit DescribeVirtualWareHouseStatusSetResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeVirtualWareHouseStatusSetResponseBodyData() = default;
};
class DescribeVirtualWareHouseStatusSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVirtualWareHouseStatusSetResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeVirtualWareHouseStatusSetResponseBody() {}

  explicit DescribeVirtualWareHouseStatusSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeVirtualWareHouseStatusSetResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVirtualWareHouseStatusSetResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeVirtualWareHouseStatusSetResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeVirtualWareHouseStatusSetResponseBody() = default;
};
class DescribeVirtualWareHouseStatusSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVirtualWareHouseStatusSetResponseBody> body{};

  DescribeVirtualWareHouseStatusSetResponse() {}

  explicit DescribeVirtualWareHouseStatusSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVirtualWareHouseStatusSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVirtualWareHouseStatusSetResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVirtualWareHouseStatusSetResponse() = default;
};
class GetDistributedTablesBufferSizeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  GetDistributedTablesBufferSizeRequest() {}

  explicit GetDistributedTablesBufferSizeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~GetDistributedTablesBufferSizeRequest() = default;
};
class GetDistributedTablesBufferSizeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> bufferSizeGiB{};

  GetDistributedTablesBufferSizeResponseBodyData() {}

  explicit GetDistributedTablesBufferSizeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bufferSizeGiB) {
      res["BufferSizeGiB"] = boost::any(*bufferSizeGiB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BufferSizeGiB") != m.end() && !m["BufferSizeGiB"].empty()) {
      bufferSizeGiB = make_shared<long>(boost::any_cast<long>(m["BufferSizeGiB"]));
    }
  }


  virtual ~GetDistributedTablesBufferSizeResponseBodyData() = default;
};
class GetDistributedTablesBufferSizeResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDistributedTablesBufferSizeResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetDistributedTablesBufferSizeResponseBody() {}

  explicit GetDistributedTablesBufferSizeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDistributedTablesBufferSizeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDistributedTablesBufferSizeResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDistributedTablesBufferSizeResponseBody() = default;
};
class GetDistributedTablesBufferSizeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDistributedTablesBufferSizeResponseBody> body{};

  GetDistributedTablesBufferSizeResponse() {}

  explicit GetDistributedTablesBufferSizeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDistributedTablesBufferSizeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDistributedTablesBufferSizeResponseBody>(model1);
      }
    }
  }


  virtual ~GetDistributedTablesBufferSizeResponse() = default;
};
class KillQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> queryIds{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  KillQueryRequest() {}

  explicit KillQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (queryIds) {
      res["QueryIds"] = boost::any(*queryIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("QueryIds") != m.end() && !m["QueryIds"].empty()) {
      queryIds = make_shared<string>(boost::any_cast<string>(m["QueryIds"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~KillQueryRequest() = default;
};
class KillQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  KillQueryResponseBody() {}

  explicit KillQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~KillQueryResponseBody() = default;
};
class KillQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<KillQueryResponseBody> body{};

  KillQueryResponse() {}

  explicit KillQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        KillQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KillQueryResponseBody>(model1);
      }
    }
  }


  virtual ~KillQueryResponse() = default;
};
class ListAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  ListAccountsRequest() {}

  explicit ListAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAccountsRequest() = default;
};
class ListAccountsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> comment{};
  shared_ptr<string> passwordSha256Hex{};
  shared_ptr<string> privilegeDescription{};
  shared_ptr<string> privilegeType{};

  ListAccountsResponseBodyData() {}

  explicit ListAccountsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (passwordSha256Hex) {
      res["PasswordSha256Hex"] = boost::any(*passwordSha256Hex);
    }
    if (privilegeDescription) {
      res["PrivilegeDescription"] = boost::any(*privilegeDescription);
    }
    if (privilegeType) {
      res["PrivilegeType"] = boost::any(*privilegeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("PasswordSha256Hex") != m.end() && !m["PasswordSha256Hex"].empty()) {
      passwordSha256Hex = make_shared<string>(boost::any_cast<string>(m["PasswordSha256Hex"]));
    }
    if (m.find("PrivilegeDescription") != m.end() && !m["PrivilegeDescription"].empty()) {
      privilegeDescription = make_shared<string>(boost::any_cast<string>(m["PrivilegeDescription"]));
    }
    if (m.find("PrivilegeType") != m.end() && !m["PrivilegeType"].empty()) {
      privilegeType = make_shared<string>(boost::any_cast<string>(m["PrivilegeType"]));
    }
  }


  virtual ~ListAccountsResponseBodyData() = default;
};
class ListAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccountsResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListAccountsResponseBody() {}

  explicit ListAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAccountsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAccountsResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAccountsResponseBody() = default;
};
class ListAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccountsResponseBody> body{};

  ListAccountsResponse() {}

  explicit ListAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccountsResponse() = default;
};
class ListClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  ListClustersRequest() {}

  explicit ListClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
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
  }


  virtual ~ListClustersRequest() = default;
};
class ListClustersResponseBodyDataVirtualWareHouses : public Darabonba::Model {
public:
  shared_ptr<string> ports{};
  shared_ptr<long> virtualWareHouseCacheStorage{};
  shared_ptr<string> virtualWareHouseClass{};
  shared_ptr<string> virtualWareHouseDescription{};
  shared_ptr<string> virtualWareHouseId{};
  shared_ptr<string> virtualWareHouseStatus{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  ListClustersResponseBodyDataVirtualWareHouses() {}

  explicit ListClustersResponseBodyDataVirtualWareHouses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ports) {
      res["Ports"] = boost::any(*ports);
    }
    if (virtualWareHouseCacheStorage) {
      res["VirtualWareHouseCacheStorage"] = boost::any(*virtualWareHouseCacheStorage);
    }
    if (virtualWareHouseClass) {
      res["VirtualWareHouseClass"] = boost::any(*virtualWareHouseClass);
    }
    if (virtualWareHouseDescription) {
      res["VirtualWareHouseDescription"] = boost::any(*virtualWareHouseDescription);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
    }
    if (virtualWareHouseStatus) {
      res["VirtualWareHouseStatus"] = boost::any(*virtualWareHouseStatus);
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
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      ports = make_shared<string>(boost::any_cast<string>(m["Ports"]));
    }
    if (m.find("VirtualWareHouseCacheStorage") != m.end() && !m["VirtualWareHouseCacheStorage"].empty()) {
      virtualWareHouseCacheStorage = make_shared<long>(boost::any_cast<long>(m["VirtualWareHouseCacheStorage"]));
    }
    if (m.find("VirtualWareHouseClass") != m.end() && !m["VirtualWareHouseClass"].empty()) {
      virtualWareHouseClass = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseClass"]));
    }
    if (m.find("VirtualWareHouseDescription") != m.end() && !m["VirtualWareHouseDescription"].empty()) {
      virtualWareHouseDescription = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseDescription"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
    if (m.find("VirtualWareHouseStatus") != m.end() && !m["VirtualWareHouseStatus"].empty()) {
      virtualWareHouseStatus = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseStatus"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListClustersResponseBodyDataVirtualWareHouses() = default;
};
class ListClustersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<long> cacheStorageSizeGiB{};
  shared_ptr<string> cacheStorageType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<long> objectStoreSizeGiB{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceCpuCores{};
  shared_ptr<long> resourceMemoryGiB{};
  shared_ptr<vector<ListClustersResponseBodyDataVirtualWareHouses>> virtualWareHouses{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  ListClustersResponseBodyData() {}

  explicit ListClustersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (cacheStorageSizeGiB) {
      res["CacheStorageSizeGiB"] = boost::any(*cacheStorageSizeGiB);
    }
    if (cacheStorageType) {
      res["CacheStorageType"] = boost::any(*cacheStorageType);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
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
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (objectStoreSizeGiB) {
      res["ObjectStoreSizeGiB"] = boost::any(*objectStoreSizeGiB);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceCpuCores) {
      res["ResourceCpuCores"] = boost::any(*resourceCpuCores);
    }
    if (resourceMemoryGiB) {
      res["ResourceMemoryGiB"] = boost::any(*resourceMemoryGiB);
    }
    if (virtualWareHouses) {
      vector<boost::any> temp1;
      for(auto item1:*virtualWareHouses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VirtualWareHouses"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
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
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("CacheStorageSizeGiB") != m.end() && !m["CacheStorageSizeGiB"].empty()) {
      cacheStorageSizeGiB = make_shared<long>(boost::any_cast<long>(m["CacheStorageSizeGiB"]));
    }
    if (m.find("CacheStorageType") != m.end() && !m["CacheStorageType"].empty()) {
      cacheStorageType = make_shared<string>(boost::any_cast<string>(m["CacheStorageType"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
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
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("ObjectStoreSizeGiB") != m.end() && !m["ObjectStoreSizeGiB"].empty()) {
      objectStoreSizeGiB = make_shared<long>(boost::any_cast<long>(m["ObjectStoreSizeGiB"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceCpuCores") != m.end() && !m["ResourceCpuCores"].empty()) {
      resourceCpuCores = make_shared<long>(boost::any_cast<long>(m["ResourceCpuCores"]));
    }
    if (m.find("ResourceMemoryGiB") != m.end() && !m["ResourceMemoryGiB"].empty()) {
      resourceMemoryGiB = make_shared<long>(boost::any_cast<long>(m["ResourceMemoryGiB"]));
    }
    if (m.find("VirtualWareHouses") != m.end() && !m["VirtualWareHouses"].empty()) {
      if (typeid(vector<boost::any>) == m["VirtualWareHouses"].type()) {
        vector<ListClustersResponseBodyDataVirtualWareHouses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VirtualWareHouses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyDataVirtualWareHouses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        virtualWareHouses = make_shared<vector<ListClustersResponseBodyDataVirtualWareHouses>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListClustersResponseBodyData() = default;
};
class ListClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListClustersResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListClustersResponseBody() {}

  explicit ListClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListClustersResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListClustersResponseBodyData>>(expect1);
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


  virtual ~ListClustersResponseBody() = default;
};
class ListClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClustersResponseBody> body{};

  ListClustersResponse() {}

  explicit ListClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListClustersResponse() = default;
};
class ListVirtualWareHouseConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  ListVirtualWareHouseConfigsRequest() {}

  explicit ListVirtualWareHouseConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~ListVirtualWareHouseConfigsRequest() = default;
};
class ListVirtualWareHouseConfigsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> configFullPath{};
  shared_ptr<string> configType{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> description{};
  shared_ptr<bool> needRestart{};
  shared_ptr<string> spec{};
  shared_ptr<string> value{};

  ListVirtualWareHouseConfigsResponseBodyData() {}

  explicit ListVirtualWareHouseConfigsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configFullPath) {
      res["ConfigFullPath"] = boost::any(*configFullPath);
    }
    if (configType) {
      res["ConfigType"] = boost::any(*configType);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (needRestart) {
      res["NeedRestart"] = boost::any(*needRestart);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigFullPath") != m.end() && !m["ConfigFullPath"].empty()) {
      configFullPath = make_shared<string>(boost::any_cast<string>(m["ConfigFullPath"]));
    }
    if (m.find("ConfigType") != m.end() && !m["ConfigType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["ConfigType"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("NeedRestart") != m.end() && !m["NeedRestart"].empty()) {
      needRestart = make_shared<bool>(boost::any_cast<bool>(m["NeedRestart"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListVirtualWareHouseConfigsResponseBodyData() = default;
};
class ListVirtualWareHouseConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListVirtualWareHouseConfigsResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListVirtualWareHouseConfigsResponseBody() {}

  explicit ListVirtualWareHouseConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVirtualWareHouseConfigsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVirtualWareHouseConfigsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVirtualWareHouseConfigsResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVirtualWareHouseConfigsResponseBody() = default;
};
class ListVirtualWareHouseConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVirtualWareHouseConfigsResponseBody> body{};

  ListVirtualWareHouseConfigsResponse() {}

  explicit ListVirtualWareHouseConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVirtualWareHouseConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVirtualWareHouseConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVirtualWareHouseConfigsResponse() = default;
};
class ListVirtualWareHousesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  ListVirtualWareHousesRequest() {}

  explicit ListVirtualWareHousesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVirtualWareHousesRequest() = default;
};
class ListVirtualWareHousesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> ports{};
  shared_ptr<long> virtualWareHouseCacheStorage{};
  shared_ptr<string> virtualWareHouseClass{};
  shared_ptr<string> virtualWareHouseDescription{};
  shared_ptr<string> virtualWareHouseId{};
  shared_ptr<string> virtualWareHouseStatus{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  ListVirtualWareHousesResponseBodyData() {}

  explicit ListVirtualWareHousesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ports) {
      res["Ports"] = boost::any(*ports);
    }
    if (virtualWareHouseCacheStorage) {
      res["VirtualWareHouseCacheStorage"] = boost::any(*virtualWareHouseCacheStorage);
    }
    if (virtualWareHouseClass) {
      res["VirtualWareHouseClass"] = boost::any(*virtualWareHouseClass);
    }
    if (virtualWareHouseDescription) {
      res["VirtualWareHouseDescription"] = boost::any(*virtualWareHouseDescription);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
    }
    if (virtualWareHouseStatus) {
      res["VirtualWareHouseStatus"] = boost::any(*virtualWareHouseStatus);
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
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      ports = make_shared<string>(boost::any_cast<string>(m["Ports"]));
    }
    if (m.find("VirtualWareHouseCacheStorage") != m.end() && !m["VirtualWareHouseCacheStorage"].empty()) {
      virtualWareHouseCacheStorage = make_shared<long>(boost::any_cast<long>(m["VirtualWareHouseCacheStorage"]));
    }
    if (m.find("VirtualWareHouseClass") != m.end() && !m["VirtualWareHouseClass"].empty()) {
      virtualWareHouseClass = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseClass"]));
    }
    if (m.find("VirtualWareHouseDescription") != m.end() && !m["VirtualWareHouseDescription"].empty()) {
      virtualWareHouseDescription = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseDescription"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
    if (m.find("VirtualWareHouseStatus") != m.end() && !m["VirtualWareHouseStatus"].empty()) {
      virtualWareHouseStatus = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseStatus"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListVirtualWareHousesResponseBodyData() = default;
};
class ListVirtualWareHousesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListVirtualWareHousesResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListVirtualWareHousesResponseBody() {}

  explicit ListVirtualWareHousesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVirtualWareHousesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVirtualWareHousesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVirtualWareHousesResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVirtualWareHousesResponseBody() = default;
};
class ListVirtualWareHousesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVirtualWareHousesResponseBody> body{};

  ListVirtualWareHousesResponse() {}

  explicit ListVirtualWareHousesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVirtualWareHousesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVirtualWareHousesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVirtualWareHousesResponse() = default;
};
class ModifyAccountDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> comment{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  ModifyAccountDescriptionRequest() {}

  explicit ModifyAccountDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
class ModifyAccountPrivilegeRequest : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> privilegeType{};
  shared_ptr<string> regionId{};

  ModifyAccountPrivilegeRequest() {}

  explicit ModifyAccountPrivilegeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (privilegeType) {
      res["PrivilegeType"] = boost::any(*privilegeType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PrivilegeType") != m.end() && !m["PrivilegeType"].empty()) {
      privilegeType = make_shared<string>(boost::any_cast<string>(m["PrivilegeType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyAccountPrivilegeRequest() = default;
};
class ModifyAccountPrivilegeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccountPrivilegeResponseBody() {}

  explicit ModifyAccountPrivilegeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAccountPrivilegeResponseBody() = default;
};
class ModifyAccountPrivilegeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAccountPrivilegeResponseBody> body{};

  ModifyAccountPrivilegeResponse() {}

  explicit ModifyAccountPrivilegeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAccountPrivilegeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccountPrivilegeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccountPrivilegeResponse() = default;
};
class ModifyClusterDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  ModifyClusterDescriptionRequest() {}

  explicit ModifyClusterDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyClusterDescriptionRequest() = default;
};
class ModifyClusterDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyClusterDescriptionResponseBody() {}

  explicit ModifyClusterDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyClusterDescriptionResponseBody() = default;
};
class ModifyClusterDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyClusterDescriptionResponseBody> body{};

  ModifyClusterDescriptionResponse() {}

  explicit ModifyClusterDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyClusterDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterDescriptionResponse() = default;
};
class ModifyVirtualWareHouseConfigRequestConfigChanges : public Darabonba::Model {
public:
  shared_ptr<string> configFullPath{};
  shared_ptr<string> value{};

  ModifyVirtualWareHouseConfigRequestConfigChanges() {}

  explicit ModifyVirtualWareHouseConfigRequestConfigChanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configFullPath) {
      res["ConfigFullPath"] = boost::any(*configFullPath);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigFullPath") != m.end() && !m["ConfigFullPath"].empty()) {
      configFullPath = make_shared<string>(boost::any_cast<string>(m["ConfigFullPath"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ModifyVirtualWareHouseConfigRequestConfigChanges() = default;
};
class ModifyVirtualWareHouseConfigRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyVirtualWareHouseConfigRequestConfigChanges>> configChanges{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  ModifyVirtualWareHouseConfigRequest() {}

  explicit ModifyVirtualWareHouseConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configChanges) {
      vector<boost::any> temp1;
      for(auto item1:*configChanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigChanges"] = boost::any(temp1);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigChanges") != m.end() && !m["ConfigChanges"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigChanges"].type()) {
        vector<ModifyVirtualWareHouseConfigRequestConfigChanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigChanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyVirtualWareHouseConfigRequestConfigChanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configChanges = make_shared<vector<ModifyVirtualWareHouseConfigRequestConfigChanges>>(expect1);
      }
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~ModifyVirtualWareHouseConfigRequest() = default;
};
class ModifyVirtualWareHouseConfigShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> configChangesShrink{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  ModifyVirtualWareHouseConfigShrinkRequest() {}

  explicit ModifyVirtualWareHouseConfigShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configChangesShrink) {
      res["ConfigChanges"] = boost::any(*configChangesShrink);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigChanges") != m.end() && !m["ConfigChanges"].empty()) {
      configChangesShrink = make_shared<string>(boost::any_cast<string>(m["ConfigChanges"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~ModifyVirtualWareHouseConfigShrinkRequest() = default;
};
class ModifyVirtualWareHouseConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyVirtualWareHouseConfigResponseBody() {}

  explicit ModifyVirtualWareHouseConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyVirtualWareHouseConfigResponseBody() = default;
};
class ModifyVirtualWareHouseConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyVirtualWareHouseConfigResponseBody> body{};

  ModifyVirtualWareHouseConfigResponse() {}

  explicit ModifyVirtualWareHouseConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyVirtualWareHouseConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVirtualWareHouseConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVirtualWareHouseConfigResponse() = default;
};
class ModifyVirtualWareHouseDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseDescription{};
  shared_ptr<string> virtualWareHouseId{};

  ModifyVirtualWareHouseDescriptionRequest() {}

  explicit ModifyVirtualWareHouseDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseDescription) {
      res["VirtualWareHouseDescription"] = boost::any(*virtualWareHouseDescription);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("VirtualWareHouseDescription") != m.end() && !m["VirtualWareHouseDescription"].empty()) {
      virtualWareHouseDescription = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseDescription"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~ModifyVirtualWareHouseDescriptionRequest() = default;
};
class ModifyVirtualWareHouseDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyVirtualWareHouseDescriptionResponseBody() {}

  explicit ModifyVirtualWareHouseDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyVirtualWareHouseDescriptionResponseBody() = default;
};
class ModifyVirtualWareHouseDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyVirtualWareHouseDescriptionResponseBody> body{};

  ModifyVirtualWareHouseDescriptionResponse() {}

  explicit ModifyVirtualWareHouseDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyVirtualWareHouseDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVirtualWareHouseDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVirtualWareHouseDescriptionResponse() = default;
};
class ModifyVirtualWareHouseResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> virtualWareHouseCacheStorage{};
  shared_ptr<string> virtualWareHouseClass{};
  shared_ptr<string> virtualWareHouseId{};

  ModifyVirtualWareHouseResourceRequest() {}

  explicit ModifyVirtualWareHouseResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseCacheStorage) {
      res["VirtualWareHouseCacheStorage"] = boost::any(*virtualWareHouseCacheStorage);
    }
    if (virtualWareHouseClass) {
      res["VirtualWareHouseClass"] = boost::any(*virtualWareHouseClass);
    }
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("VirtualWareHouseCacheStorage") != m.end() && !m["VirtualWareHouseCacheStorage"].empty()) {
      virtualWareHouseCacheStorage = make_shared<long>(boost::any_cast<long>(m["VirtualWareHouseCacheStorage"]));
    }
    if (m.find("VirtualWareHouseClass") != m.end() && !m["VirtualWareHouseClass"].empty()) {
      virtualWareHouseClass = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseClass"]));
    }
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~ModifyVirtualWareHouseResourceRequest() = default;
};
class ModifyVirtualWareHouseResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  ModifyVirtualWareHouseResourceResponseBodyData() {}

  explicit ModifyVirtualWareHouseResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~ModifyVirtualWareHouseResourceResponseBodyData() = default;
};
class ModifyVirtualWareHouseResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<ModifyVirtualWareHouseResourceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ModifyVirtualWareHouseResourceResponseBody() {}

  explicit ModifyVirtualWareHouseResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyVirtualWareHouseResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyVirtualWareHouseResourceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyVirtualWareHouseResourceResponseBody() = default;
};
class ModifyVirtualWareHouseResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyVirtualWareHouseResourceResponseBody> body{};

  ModifyVirtualWareHouseResourceResponse() {}

  explicit ModifyVirtualWareHouseResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyVirtualWareHouseResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVirtualWareHouseResourceResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVirtualWareHouseResourceResponse() = default;
};
class PatchClusterSecurityIPGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityIps{};

  PatchClusterSecurityIPGroupRequest() {}

  explicit PatchClusterSecurityIPGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityIps) {
      res["SecurityIps"] = boost::any(*securityIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityIps") != m.end() && !m["SecurityIps"].empty()) {
      securityIps = make_shared<string>(boost::any_cast<string>(m["SecurityIps"]));
    }
  }


  virtual ~PatchClusterSecurityIPGroupRequest() = default;
};
class PatchClusterSecurityIPGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PatchClusterSecurityIPGroupResponseBody() {}

  explicit PatchClusterSecurityIPGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PatchClusterSecurityIPGroupResponseBody() = default;
};
class PatchClusterSecurityIPGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PatchClusterSecurityIPGroupResponseBody> body{};

  PatchClusterSecurityIPGroupResponse() {}

  explicit PatchClusterSecurityIPGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PatchClusterSecurityIPGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PatchClusterSecurityIPGroupResponseBody>(model1);
      }
    }
  }


  virtual ~PatchClusterSecurityIPGroupResponse() = default;
};
class ReleaseVirtualWareHousePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  ReleaseVirtualWareHousePublicConnectionRequest() {}

  explicit ReleaseVirtualWareHousePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~ReleaseVirtualWareHousePublicConnectionRequest() = default;
};
class ReleaseVirtualWareHousePublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseVirtualWareHousePublicConnectionResponseBody() {}

  explicit ReleaseVirtualWareHousePublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseVirtualWareHousePublicConnectionResponseBody() = default;
};
class ReleaseVirtualWareHousePublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseVirtualWareHousePublicConnectionResponseBody> body{};

  ReleaseVirtualWareHousePublicConnectionResponse() {}

  explicit ReleaseVirtualWareHousePublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseVirtualWareHousePublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseVirtualWareHousePublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseVirtualWareHousePublicConnectionResponse() = default;
};
class ResetAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> password{};
  shared_ptr<string> passwordSha256Hex{};
  shared_ptr<string> regionId{};

  ResetAccountPasswordRequest() {}

  explicit ResetAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (passwordSha256Hex) {
      res["PasswordSha256Hex"] = boost::any(*passwordSha256Hex);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PasswordSha256Hex") != m.end() && !m["PasswordSha256Hex"].empty()) {
      passwordSha256Hex = make_shared<string>(boost::any_cast<string>(m["PasswordSha256Hex"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
class RestartVirtualWareHouseRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> virtualWareHouseId{};

  RestartVirtualWareHouseRequest() {}

  explicit RestartVirtualWareHouseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualWareHouseId) {
      res["VirtualWareHouseId"] = boost::any(*virtualWareHouseId);
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
    if (m.find("VirtualWareHouseId") != m.end() && !m["VirtualWareHouseId"].empty()) {
      virtualWareHouseId = make_shared<string>(boost::any_cast<string>(m["VirtualWareHouseId"]));
    }
  }


  virtual ~RestartVirtualWareHouseRequest() = default;
};
class RestartVirtualWareHouseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestartVirtualWareHouseResponseBody() {}

  explicit RestartVirtualWareHouseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RestartVirtualWareHouseResponseBody() = default;
};
class RestartVirtualWareHouseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartVirtualWareHouseResponseBody> body{};

  RestartVirtualWareHouseResponse() {}

  explicit RestartVirtualWareHouseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartVirtualWareHouseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartVirtualWareHouseResponseBody>(model1);
      }
    }
  }


  virtual ~RestartVirtualWareHouseResponse() = default;
};
class UpgradeClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  UpgradeClusterRequest() {}

  explicit UpgradeClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeClusterRequest() = default;
};
class UpgradeClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeClusterResponseBody() {}

  explicit UpgradeClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeClusterResponseBody() = default;
};
class UpgradeClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeClusterResponseBody> body{};

  UpgradeClusterResponse() {}

  explicit UpgradeClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeClusterResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeClusterResponse() = default;
};
class UpsertClusterSecurityIPGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityIps{};

  UpsertClusterSecurityIPGroupRequest() {}

  explicit UpsertClusterSecurityIPGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityIps) {
      res["SecurityIps"] = boost::any(*securityIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityIps") != m.end() && !m["SecurityIps"].empty()) {
      securityIps = make_shared<string>(boost::any_cast<string>(m["SecurityIps"]));
    }
  }


  virtual ~UpsertClusterSecurityIPGroupRequest() = default;
};
class UpsertClusterSecurityIPGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpsertClusterSecurityIPGroupResponseBody() {}

  explicit UpsertClusterSecurityIPGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpsertClusterSecurityIPGroupResponseBody() = default;
};
class UpsertClusterSecurityIPGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpsertClusterSecurityIPGroupResponseBody> body{};

  UpsertClusterSecurityIPGroupResponse() {}

  explicit UpsertClusterSecurityIPGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpsertClusterSecurityIPGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpsertClusterSecurityIPGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpsertClusterSecurityIPGroupResponse() = default;
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
  AllocateVirtualWareHousePublicConnectionResponse allocateVirtualWareHousePublicConnectionWithOptions(shared_ptr<AllocateVirtualWareHousePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateVirtualWareHousePublicConnectionResponse allocateVirtualWareHousePublicConnection(shared_ptr<AllocateVirtualWareHousePublicConnectionRequest> request);
  CheckCreateClusterResponse checkCreateClusterWithOptions(shared_ptr<CheckCreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckCreateClusterResponse checkCreateCluster(shared_ptr<CheckCreateClusterRequest> request);
  CheckCreateVirtualWareHouseResponse checkCreateVirtualWareHouseWithOptions(shared_ptr<CheckCreateVirtualWareHouseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckCreateVirtualWareHouseResponse checkCreateVirtualWareHouse(shared_ptr<CheckCreateVirtualWareHouseRequest> request);
  CheckDeleteVirtualWareHouseResponse checkDeleteVirtualWareHouseWithOptions(shared_ptr<CheckDeleteVirtualWareHouseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDeleteVirtualWareHouseResponse checkDeleteVirtualWareHouse(shared_ptr<CheckDeleteVirtualWareHouseRequest> request);
  CheckModifyVirtualWareHouseResourceResponse checkModifyVirtualWareHouseResourceWithOptions(shared_ptr<CheckModifyVirtualWareHouseResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckModifyVirtualWareHouseResourceResponse checkModifyVirtualWareHouseResource(shared_ptr<CheckModifyVirtualWareHouseResourceRequest> request);
  CreateAccountResponse createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountResponse createAccount(shared_ptr<CreateAccountRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  CreateVirtualWareHouseResponse createVirtualWareHouseWithOptions(shared_ptr<CreateVirtualWareHouseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVirtualWareHouseResponse createVirtualWareHouse(shared_ptr<CreateVirtualWareHouseRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<DeleteClusterRequest> request);
  DeleteClusterSecurityIPGroupResponse deleteClusterSecurityIPGroupWithOptions(shared_ptr<DeleteClusterSecurityIPGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterSecurityIPGroupResponse deleteClusterSecurityIPGroup(shared_ptr<DeleteClusterSecurityIPGroupRequest> request);
  DeleteVirtualWareHouseResponse deleteVirtualWareHouseWithOptions(shared_ptr<DeleteVirtualWareHouseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVirtualWareHouseResponse deleteVirtualWareHouse(shared_ptr<DeleteVirtualWareHouseRequest> request);
  DescribeAccountResponse describeAccountWithOptions(shared_ptr<DescribeAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountResponse describeAccount(shared_ptr<DescribeAccountRequest> request);
  DescribeClusterResponse describeClusterWithOptions(shared_ptr<DescribeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterResponse describeCluster(shared_ptr<DescribeClusterRequest> request);
  DescribeClusterSecurityInfoResponse describeClusterSecurityInfoWithOptions(shared_ptr<DescribeClusterSecurityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterSecurityInfoResponse describeClusterSecurityInfo(shared_ptr<DescribeClusterSecurityInfoRequest> request);
  DescribeClusterStatusSetResponse describeClusterStatusSetWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterStatusSetResponse describeClusterStatusSet();
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeRunningQueryResponse describeRunningQueryWithOptions(shared_ptr<DescribeRunningQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRunningQueryResponse describeRunningQuery(shared_ptr<DescribeRunningQueryRequest> request);
  DescribeSlowQueryResponse describeSlowQueryWithOptions(shared_ptr<DescribeSlowQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowQueryResponse describeSlowQuery(shared_ptr<DescribeSlowQueryRequest> request);
  DescribeSlowQueryTrendResponse describeSlowQueryTrendWithOptions(shared_ptr<DescribeSlowQueryTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowQueryTrendResponse describeSlowQueryTrend(shared_ptr<DescribeSlowQueryTrendRequest> request);
  DescribeVirtualWareHouseResponse describeVirtualWareHouseWithOptions(shared_ptr<DescribeVirtualWareHouseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVirtualWareHouseResponse describeVirtualWareHouse(shared_ptr<DescribeVirtualWareHouseRequest> request);
  DescribeVirtualWareHouseClassSetResponse describeVirtualWareHouseClassSetWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVirtualWareHouseClassSetResponse describeVirtualWareHouseClassSet();
  DescribeVirtualWareHouseEndpointInfoResponse describeVirtualWareHouseEndpointInfoWithOptions(shared_ptr<DescribeVirtualWareHouseEndpointInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVirtualWareHouseEndpointInfoResponse describeVirtualWareHouseEndpointInfo(shared_ptr<DescribeVirtualWareHouseEndpointInfoRequest> request);
  DescribeVirtualWareHouseStatusSetResponse describeVirtualWareHouseStatusSetWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVirtualWareHouseStatusSetResponse describeVirtualWareHouseStatusSet();
  GetDistributedTablesBufferSizeResponse getDistributedTablesBufferSizeWithOptions(shared_ptr<GetDistributedTablesBufferSizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDistributedTablesBufferSizeResponse getDistributedTablesBufferSize(shared_ptr<GetDistributedTablesBufferSizeRequest> request);
  KillQueryResponse killQueryWithOptions(shared_ptr<KillQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KillQueryResponse killQuery(shared_ptr<KillQueryRequest> request);
  ListAccountsResponse listAccountsWithOptions(shared_ptr<ListAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountsResponse listAccounts(shared_ptr<ListAccountsRequest> request);
  ListClustersResponse listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersResponse listClusters(shared_ptr<ListClustersRequest> request);
  ListVirtualWareHouseConfigsResponse listVirtualWareHouseConfigsWithOptions(shared_ptr<ListVirtualWareHouseConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVirtualWareHouseConfigsResponse listVirtualWareHouseConfigs(shared_ptr<ListVirtualWareHouseConfigsRequest> request);
  ListVirtualWareHousesResponse listVirtualWareHousesWithOptions(shared_ptr<ListVirtualWareHousesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVirtualWareHousesResponse listVirtualWareHouses(shared_ptr<ListVirtualWareHousesRequest> request);
  ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountDescriptionResponse modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request);
  ModifyAccountPrivilegeResponse modifyAccountPrivilegeWithOptions(shared_ptr<ModifyAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountPrivilegeResponse modifyAccountPrivilege(shared_ptr<ModifyAccountPrivilegeRequest> request);
  ModifyClusterDescriptionResponse modifyClusterDescriptionWithOptions(shared_ptr<ModifyClusterDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterDescriptionResponse modifyClusterDescription(shared_ptr<ModifyClusterDescriptionRequest> request);
  ModifyVirtualWareHouseConfigResponse modifyVirtualWareHouseConfigWithOptions(shared_ptr<ModifyVirtualWareHouseConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVirtualWareHouseConfigResponse modifyVirtualWareHouseConfig(shared_ptr<ModifyVirtualWareHouseConfigRequest> request);
  ModifyVirtualWareHouseDescriptionResponse modifyVirtualWareHouseDescriptionWithOptions(shared_ptr<ModifyVirtualWareHouseDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVirtualWareHouseDescriptionResponse modifyVirtualWareHouseDescription(shared_ptr<ModifyVirtualWareHouseDescriptionRequest> request);
  ModifyVirtualWareHouseResourceResponse modifyVirtualWareHouseResourceWithOptions(shared_ptr<ModifyVirtualWareHouseResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVirtualWareHouseResourceResponse modifyVirtualWareHouseResource(shared_ptr<ModifyVirtualWareHouseResourceRequest> request);
  PatchClusterSecurityIPGroupResponse patchClusterSecurityIPGroupWithOptions(shared_ptr<PatchClusterSecurityIPGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PatchClusterSecurityIPGroupResponse patchClusterSecurityIPGroup(shared_ptr<PatchClusterSecurityIPGroupRequest> request);
  ReleaseVirtualWareHousePublicConnectionResponse releaseVirtualWareHousePublicConnectionWithOptions(shared_ptr<ReleaseVirtualWareHousePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseVirtualWareHousePublicConnectionResponse releaseVirtualWareHousePublicConnection(shared_ptr<ReleaseVirtualWareHousePublicConnectionRequest> request);
  ResetAccountPasswordResponse resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAccountPasswordResponse resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request);
  RestartVirtualWareHouseResponse restartVirtualWareHouseWithOptions(shared_ptr<RestartVirtualWareHouseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartVirtualWareHouseResponse restartVirtualWareHouse(shared_ptr<RestartVirtualWareHouseRequest> request);
  UpgradeClusterResponse upgradeClusterWithOptions(shared_ptr<UpgradeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeClusterResponse upgradeCluster(shared_ptr<UpgradeClusterRequest> request);
  UpsertClusterSecurityIPGroupResponse upsertClusterSecurityIPGroupWithOptions(shared_ptr<UpsertClusterSecurityIPGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpsertClusterSecurityIPGroupResponse upsertClusterSecurityIPGroup(shared_ptr<UpsertClusterSecurityIPGroupRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Clickhouse20220101

#endif
